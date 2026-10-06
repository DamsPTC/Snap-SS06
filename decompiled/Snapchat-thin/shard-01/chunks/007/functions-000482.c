/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1013f781c; end: 1013f791f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1013f781c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  
  uVar2 = 0;
  FUN_1013f9104(0);
  lVar3 = param_1;
  func_0x000107c61480(param_1,uVar2);
  if (lVar3 != 0) {
    puVar1 = (undefined8 *)(lVar3 + _DAT_112d7c520);
    uVar2 = puVar1[1];
    *puVar1 = param_2;
    puVar1[1] = param_3;
    func_0x000107c61174(param_1);
    func_0x000107c61434(param_3);
    func_0x000107c6142c(uVar2);
    if (*(long *)(param_5 + 0x50) != 0) {
      puVar1 = (undefined8 *)(*(long *)(param_5 + 0x50) + _DAT_112d7c588);
      uVar2 = puVar1[1];
      *puVar1 = param_2;
      puVar1[1] = param_3;
      func_0x000107c61434(param_3);
      func_0x000107c6142c(uVar2);
    }
    puVar4 = &UNK_1103b1b90;
    func_0x000107c613fc(&UNK_1103b1b90,0x18,7);
    *(long *)(puVar4 + 0x10) = lVar3;
    func_0x000107c61174(param_1);
    FUN_1013f20ec(FUN_1013f9bd0,puVar4);
    func_0x000107c61574(puVar4);
    func_0x000107c61170(param_1);
  }
  return lVar3 != 0;
}



/* Entry: 1013f7920; end: 1013f7923;  */

void FUN_1013f7920(void)

{
  return;
}



/* Entry: 1013f7924; end: 1013f7a0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1013f7924(long param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  
  uVar3 = 0;
  FUN_1013f9104(0);
  lVar4 = param_1;
  func_0x000107c61480(param_1,uVar3);
  if (lVar4 != 0) {
    if (param_2 < -0x80000000) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1013f7a08);
      (*pcVar2)();
    }
    if (0x7fffffff < param_2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1013f7a0c);
      (*pcVar2)();
    }
    puVar1 = (undefined4 *)(lVar4 + _DAT_112d7c518);
    *puVar1 = (int)param_2;
    *(undefined1 *)(puVar1 + 1) = 0;
    if (*(long *)(param_4 + 0x50) != 0) {
      puVar1 = (undefined4 *)(*(long *)(param_4 + 0x50) + _DAT_112d7c580);
      *puVar1 = (int)param_2;
      *(undefined1 *)(puVar1 + 1) = 0;
    }
    puVar5 = &UNK_1103b1b68;
    func_0x000107c613fc(&UNK_1103b1b68,0x18,7);
    *(long *)(puVar5 + 0x10) = lVar4;
    func_0x000107c61174(param_1);
    FUN_1013f20ec(0x1013f9eb0,puVar5);
    func_0x000107c61574(puVar5);
  }
  return lVar4 != 0;
}



/* Entry: 1013f7a0c; end: 1013f7a0f;  */

void FUN_1013f7a0c(void)

{
  return;
}



/* Entry: 1013f7a10; end: 1013f7ae7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013f7a10(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  
  uVar1 = 0;
  FUN_1013f9104(0);
  lVar2 = param_1;
  func_0x000107c61480(param_1,uVar1);
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(lVar2 + _DAT_112d7c500);
    *(undefined8 *)(lVar2 + _DAT_112d7c500) = param_2;
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_2);
    func_0x000107c615e8(uVar1);
    puVar3 = &UNK_1103b1b40;
    func_0x000107c613fc(&UNK_1103b1b40,0x18,7);
    *(long *)(puVar3 + 0x10) = lVar2;
    func_0x000107c61174(param_1);
    FUN_1013f20ec(0x1013f9eac,puVar3);
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(puVar3);
    return;
  }
  return;
}



/* Entry: 1013f7ae8; end: 1013f7af3;  */

void FUN_1013f7ae8(void)

{
  return;
}



/* Entry: 1013f7af4; end: 1013f7c4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013f7af4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 == 0) {
    return;
  }
  lVar1 = *(long *)(param_1 + 0x48);
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + _DAT_112d7c538) != 0) {
      func_0x000107c54514(*(long *)(lVar1 + _DAT_112d7c538));
      lVar1 = *(long *)(param_1 + 0x48);
      if (lVar1 == 0) goto LAB_1013f7b8c;
    }
    lVar1 = *(long *)(lVar1 + _DAT_112d7c538);
    if (lVar1 != 0) {
      func_0x000107c61174(lVar1);
      func_0x000107c526c0(0);
      func_0x000107c61170(lVar1);
    }
  }
LAB_1013f7b8c:
  func_0x000107c61574();
  return;
}



/* Entry: 1013f7c4c; end: 1013f7cdf;  */

void FUN_1013f7c4c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  FUN_100cb064c(unaff_x20 + 0x58);
  return;
}



/* Entry: 1013f7ce0; end: 1013f7d13; -[_TtC15COSServicesImplP33_0AA9D65FB85F7CB0870C5ED2EA46864A10COSOTPView initWithCoder:] */

undefined8 FUN_1013f7ce0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1013f9cc4();
  func_0x000107c61174(param_3);
  return param_1;
}



/* Entry: 1013f7d14; end: 1013f80fb;  */

/* WARNING: Possible PIC construction at 0x0001013f7de4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013f7f1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013f7f78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013f7fd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013f7ffc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013f803c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013f8088: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013f8098: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013f80d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013f809c) */
/* WARNING: Removing unreachable block (ram,0x0001013f808c) */
/* WARNING: Removing unreachable block (ram,0x0001013f8040) */
/* WARNING: Removing unreachable block (ram,0x0001013f8000) */
/* WARNING: Removing unreachable block (ram,0x0001013f7fd8) */
/* WARNING: Removing unreachable block (ram,0x0001013f7f7c) */
/* WARNING: Removing unreachable block (ram,0x0001013f7f20) */
/* WARNING: Removing unreachable block (ram,0x0001013f7de8) */
/* WARNING: Removing unreachable block (ram,0x0001013f80d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013f7d14(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + _DAT_112d7c540) != 0) {
    func_0x000107c4ff34();
  }
  puVar1 = *(undefined **)(unaff_x20 + _DAT_112d7c508);
  if (puVar1 == (undefined *)0x0) {
    return;
  }
  func_0x000107c61174();
  puVar2 = puVar1;
  func_0x000107c5de64();
  func_0x000107c61180();
  if ((puVar2 != (undefined *)0x0) && ((*(byte *)(unaff_x20 + _DAT_112d7c528) & 1) != 0)) {
    puVar2 = PTR_PTR_1126aec40;
    func_0x000107c61168(PTR_PTR_1126aec40);
    func_0x000107c3ee98();
    func_0x000107c61180();
    func_0x000107c59a2c();
    puVar1 = puVar2;
    func_0x000107c59e34(puVar2,param_2,0xc1,0);
    func_0x000105219918();
    func_0x000107c61180();
    func_0x000107c59e1c(puVar2,param_2,puVar1,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1013f80fc; end: 1013f814f;  */

void FUN_1013f80fc(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_1013f8910();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1013f8150; end: 1013f831b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013f8150(void)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long lVar8;
  long unaff_x20;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar6 = &puStack_b0;
  lVar8 = *(long *)(unaff_x20 + _DAT_112d7c4c8);
  lVar2 = lVar8;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar8);
    func_0x000107c61180();
    func_0x000107c615e8();
  }
  puVar3 = &UNK_1103b1f00;
  func_0x000107c613fc(&UNK_1103b1f00,0x18,7);
  *(long *)(puVar3 + 0x10) = unaff_x20;
  puVar4 = PTR_PTR_1126aeaf8;
  func_0x000107c610f8(PTR_PTR_1126aeaf8);
  puVar7 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0x1013f9cac;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  uStack_70 = 0x100e1779c;
  puStack_68 = &UNK_1103b1f18;
  ppuVar5 = &puStack_80;
  puStack_58 = puVar3;
  func_0x000107c60bc4(ppuVar5);
  pcStack_90 = FUN_1013f88ec;
  uStack_88 = 0;
  puStack_b0 = puVar7;
  uStack_a8 = 0x42000000;
  uStack_a0 = 0x100e17304;
  puStack_98 = &UNK_1103b1f40;
  func_0x000107c60bc4(&puStack_b0);
  func_0x000107c61174();
  func_0x000107c47be0(puVar4);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(uStack_88);
  func_0x000107c61574(puStack_58);
  pcVar1 = *(code **)(unaff_x20 + _DAT_112d7c4d0);
  func_0x000107c61174(puVar4);
  puVar3 = puVar4;
  FUN_1013f8d30();
  puVar7 = puVar4;
  (*pcVar1)(puVar4,puVar3,1,*(undefined8 *)(unaff_x20 + _DAT_112d7c4d8),unaff_x20);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c42c1c(lVar8);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar7);
  return;
}



/* Entry: 1013f831c; end: 1013f87ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013f831c(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar10 = &puStack_90;
  lVar1 = param_1;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar1 != 0) {
    uVar11 = *(undefined8 *)(param_2 + _DAT_112d7c508);
    *(long *)(param_2 + _DAT_112d7c508) = param_1;
    func_0x000107c61174(param_1);
    func_0x000107c61170(uVar11);
    func_0x000107c5a050(lVar1);
    func_0x000107c3d89c(param_2);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x000107c61168();
    puVar3 = puVar2;
    func_0x0001008478a8();
    puVar4 = puVar3;
    func_0x000107c613fc();
    *(undefined8 *)(puVar4 + 0x18) = 9;
    *(undefined8 *)(puVar4 + 0x10) = 4;
    lVar5 = lVar1;
    func_0x000107c4acb0();
    func_0x000107c61180();
    lVar6 = param_2;
    func_0x000107c4acb0(param_2);
    func_0x000107c61180();
    lVar7 = lVar5;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar6);
    *(long *)(puVar4 + 0x20) = lVar7;
    lVar5 = lVar1;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    lVar6 = param_2;
    func_0x000107c5ce8c(param_2);
    func_0x000107c61180();
    lVar7 = lVar5;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar6);
    *(long *)(puVar4 + 0x28) = lVar7;
    lVar5 = lVar1;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    lVar6 = param_2;
    func_0x000107c5cbe4(param_2);
    func_0x000107c61180();
    lVar7 = lVar5;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar6);
    *(long *)(puVar4 + 0x30) = lVar7;
    lVar5 = lVar1;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    lVar6 = param_2;
    func_0x000107c3ec1c(param_2);
    func_0x000107c61180();
    lVar7 = lVar5;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar6);
    *(long *)(puVar4 + 0x38) = lVar7;
    uVar11 = 0;
    FUN_1013f9db8(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    puVar8 = puVar4;
    func_0x000107c5fc48(puVar4,uVar11);
    func_0x000107c61574(puVar4);
    func_0x000107c3d048(puVar2);
    func_0x000107c61170(puVar8);
    puVar8 = PTR_PTR_1126aec40;
    func_0x000107c61168();
    func_0x000107c3ee98();
    func_0x000107c61180();
    func_0x000107c59a2c();
    puVar4 = PTR_PTR_1126b0c40;
    func_0x000107c61168(PTR_PTR_1126b0c40);
    puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c3ea80();
    func_0x000107c61180();
    func_0x000107c45098(0x4039000000000000,0x4039000000000000,puVar4);
    func_0x000107c61180();
    func_0x000107c61170(puVar9);
    func_0x000107c55260(puVar8);
    func_0x000107c61170(puVar4);
    puVar4 = &UNK_1103b1f78;
    func_0x000107c613fc(&UNK_1103b1f78,0x18,7);
    *(long *)(puVar4 + 0x10) = param_2;
    uStack_70 = 0x1013f9cb4;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_1103b1f90;
    puStack_68 = puVar4;
    func_0x000107c60bc4(&puStack_90);
    puVar4 = puStack_68;
    func_0x000107c61174();
    func_0x000107c61574(puVar4);
    func_0x000107c56ea0(puVar8);
    func_0x000107c60bd0(ppuVar10);
    func_0x000107c61174();
    func_0x000107c5a050();
    func_0x000107c3d89c(param_2);
    func_0x000107c613fc(puVar3,((ulong)*(uint *)(puVar3 + 0x30) + 7 & 0x1fffffff8) + 0x10,
                        *(ushort *)(puVar3 + 0x34) | 7);
    *(undefined8 *)(puVar3 + 0x18) = 5;
    *(undefined8 *)(puVar3 + 0x10) = 2;
    puVar4 = puVar8;
    func_0x000107c4acb0();
    func_0x000107c61180();
    lVar5 = param_2;
    func_0x000107c4acb0(param_2);
    func_0x000107c61180();
    puVar9 = puVar4;
    func_0x000107c40284(0x4014000000000000);
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(lVar5);
    *(undefined **)(puVar3 + 0x20) = puVar9;
    puVar4 = puVar8;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    func_0x000107c61170(puVar8);
    lVar5 = param_2;
    func_0x000107c5cbe4(param_2);
    func_0x000107c61180();
    puVar9 = puVar4;
    func_0x000107c40284(0x404e000000000000);
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(lVar5);
    *(undefined **)(puVar3 + 0x28) = puVar9;
    puVar4 = puVar3;
    func_0x000107c5fc48(puVar3,uVar11);
    func_0x000107c61574(puVar3);
    func_0x000107c3d048(puVar2);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(lVar1);
    uVar11 = *(undefined8 *)(param_2 + _DAT_112d7c538);
    *(undefined **)(param_2 + _DAT_112d7c538) = puVar8;
    func_0x000107c61170(uVar11);
  }
  return;
}



/* Entry: 1013f8800; end: 1013f88eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013f8800(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  lVar1 = *(long *)(param_1 + _DAT_112d7c4c8);
  func_0x000107c4ffe8();
  func_0x000107c61180();
  if (lVar1 != 0) {
    puVar2 = &UNK_1103b1eb0;
    func_0x000107c613fc(&UNK_1103b1eb0,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,param_1);
    uStack_40 = 0x1013f9ef0;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000b0c7c;
    puStack_48 = &UNK_1103b1fb8;
    puStack_38 = puVar2;
    func_0x000107c60bc4(&puStack_60);
    puVar2 = puStack_38;
    func_0x000107c615f0(lVar1);
    func_0x000107c61574(puVar2);
    func_0x000107c5e2a4(lVar1);
    func_0x000107c615e8(lVar1);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(lVar1);
  }
  return;
}



/* Entry: 1013f88ec; end: 1013f890f;  */

void FUN_1013f88ec(code *param_1)

{
  if (param_1 != (code *)0x0) {
    (*param_1)();
  }
  return;
}



/* Entry: 1013f8910; end: 1013f89f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013f8910(void)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  lVar1 = *(long *)(unaff_x20 + _DAT_112d7c4c8);
  func_0x000107c4ffe8();
  func_0x000107c61180();
  if (lVar1 != 0) {
    puVar2 = &UNK_1103b1eb0;
    func_0x000107c613fc(&UNK_1103b1eb0,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    pcStack_40 = FUN_1013f9ca4;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000b0c7c;
    puStack_48 = &UNK_1103b1ec8;
    puStack_38 = puVar2;
    func_0x000107c60bc4(&puStack_60);
    puVar2 = puStack_38;
    func_0x000107c615f0(lVar1);
    func_0x000107c61574(puVar2);
    func_0x000107c5e2a4(lVar1);
    func_0x000107c615e8(lVar1);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(lVar1);
  }
  return;
}



/* Entry: 1013f89f8; end: 1013f8a6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013f89f8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x000107c30ef0();
    if (*(long *)(param_1 + _DAT_112d7c500) != 0) {
      func_0x000107c4e5ec();
    }
    func_0x000107c30ef4(lVar1);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1013f8a70; end: 1013f8ac3; -[_TtC15COSServicesImplP33_0AA9D65FB85F7CB0870C5ED2EA46864A10COSOTPView codeVerificationFinished:] */

void FUN_1013f8a70(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
  }
  else {
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_40);
    func_0x000107c615e8(param_3);
  }
  func_0x00010006e7f4(&uStack_40);
  return;
}



/* Entry: 1013f8ac4; end: 1013f8ac7; -[_TtC15COSServicesImplP33_0AA9D65FB85F7CB0870C5ED2EA46864A10COSOTPView codeVerificationExited] */

void FUN_1013f8ac4(void)

{
  return;
}



/* Entry: 1013f8ac8; end: 1013f8acb; -[_TtC15COSServicesImplP33_0AA9D65FB85F7CB0870C5ED2EA46864A10COSOTPView codeVerificationExitedWithUnretryableError] */

void FUN_1013f8ac8(void)

{
  return;
}



/* Entry: 1013f8acc; end: 1013f8ceb;  */

undefined8 FUN_1013f8acc(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  ulong uVar9;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  FUN_1013f8d30();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_70 = (undefined *)0x0;
  uStack_68 = 0x404e000000000000;
  pcStack_78 = FUN_1013f8cec;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0x42000000;
  pcStack_88 = FUN_100de6bdc;
  puStack_80 = &UNK_1103b1dd8;
  ppuVar4 = &puStack_98;
  func_0x000107c60bc4(ppuVar4);
  func_0x000107c61574(puStack_70);
  pcStack_78 = FUN_1013f8cec;
  puStack_70 = (undefined *)0x0;
  puStack_98 = puVar1;
  uStack_90 = 0x42000000;
  pcStack_88 = FUN_100de6bdc;
  puStack_80 = &UNK_1103b1e00;
  ppuVar5 = &puStack_98;
  func_0x000107c60bc4(ppuVar5);
  func_0x000107c61574(puStack_70);
  puVar6 = &UNK_1103b1e38;
  func_0x000107c613fc(&UNK_1103b1e38,0x18,7);
  *(undefined8 **)(puVar6 + 0x10) = &uStack_68;
  puVar7 = &UNK_1103b1e60;
  func_0x000107c613fc(&UNK_1103b1e60,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = 0x1013f9c74;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  pcStack_78 = FUN_1013f9c84;
  puStack_98 = puVar1;
  uStack_90 = 0x42000000;
  pcStack_88 = FUN_100de6bdc;
  puStack_80 = &UNK_1103b1e78;
  ppuVar8 = &puStack_98;
  puStack_70 = puVar7;
  func_0x000107c60bc4(ppuVar8);
  puVar1 = puStack_70;
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar1);
  func_0x000107c4c60c(param_1);
  func_0x000107c61170(param_1);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c60bd0(ppuVar4);
  uVar2 = uStack_68;
  uVar9 = 0;
  func_0x000107c61544(0,"",0x3f,0x192,0x1f,1);
  if ((uVar9 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1013f8ce4);
    (*pcVar3)();
  }
  uVar9 = 0;
  func_0x000107c61544(0,"",0x3f,0x193,0x14,1);
  func_0x000107c61574(puVar6);
  if ((uVar9 & 1) == 0) {
    puVar6 = puVar7;
    func_0x000107c61544(puVar7,"",0x3f,0x194,0x17,1);
    func_0x000107c61574(puVar7);
    if (((ulong)puVar6 & 1) == 0) {
      return uVar2;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1013f8cec);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1013f8ce8);
  (*pcVar3)();
}



/* Entry: 1013f8cec; end: 1013f8cf3;  */

void FUN_1013f8cec(void)

{
  return;
}



/* Entry: 1013f8cf4; end: 1013f8d2f; -[_TtC15COSServicesImplP33_0AA9D65FB85F7CB0870C5ED2EA46864A10COSOTPView codeVerificationCoolDownInterval] */

undefined8 FUN_1013f8cf4(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c61174();
  FUN_1013f8acc();
  func_0x000107c61170(param_2);
  return param_1;
}



/* Entry: 1013f8d30; end: 1013f8fd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1013f8d30(void)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  undefined8 uVar7;
  
  if ((char)((int *)(unaff_x20 + _DAT_112d7c518))[1] == '\x01') goto LAB_1013f8f64;
  iVar2 = *(int *)(unaff_x20 + _DAT_112d7c518);
  if (iVar2 == 1) {
    lVar5 = ((undefined8 *)(unaff_x20 + _DAT_112d7c520))[1];
    if (lVar5 == 0) {
      if (*(long *)(unaff_x20 + _DAT_112d7c4e8) != 0) {
        puVar1 = (undefined8 *)(*(long *)(unaff_x20 + _DAT_112d7c4e8) + _DAT_1130937d8);
        lVar6 = puVar1[1];
        if (lVar6 != 0) {
          uVar7 = *puVar1;
          func_0x000107c61434(lVar6);
          goto LAB_1013f8ec0;
        }
      }
      uVar7 = 0;
      lVar6 = -0x2000000000000000;
    }
    else {
      uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d7c520);
      lVar6 = lVar5;
    }
LAB_1013f8ec0:
    puVar3 = PTR_PTR_1126af120;
    func_0x000107c61168();
    func_0x000107c61434(lVar5);
    func_0x000107c5fadc(uVar7,lVar6);
    func_0x000107c6142c(lVar6);
    func_0x000107c4e6e0();
  }
  else if (iVar2 == 6) {
    lVar5 = ((undefined8 *)(unaff_x20 + _DAT_112d7c520))[1];
    if (lVar5 == 0) {
      if (*(long *)(unaff_x20 + _DAT_112d7c4e8) != 0) {
        puVar1 = (undefined8 *)(*(long *)(unaff_x20 + _DAT_112d7c4e8) + _DAT_1130937d8);
        lVar6 = puVar1[1];
        if (lVar6 != 0) {
          uVar7 = *puVar1;
          func_0x000107c61434(lVar6);
          goto LAB_1013f8e78;
        }
      }
      uVar7 = 0;
      lVar6 = -0x2000000000000000;
    }
    else {
      uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d7c520);
      lVar6 = lVar5;
    }
LAB_1013f8e78:
    puVar3 = PTR_PTR_1126af120;
    func_0x000107c61168();
    func_0x000107c61434(lVar5);
    func_0x000107c5fadc(uVar7,lVar6);
    func_0x000107c6142c(lVar6);
    func_0x000107c5e2a0();
  }
  else {
    if (iVar2 != 2) goto LAB_1013f8f64;
    lVar5 = ((undefined8 *)(unaff_x20 + _DAT_112d7c520))[1];
    if (lVar5 == 0) {
      lVar6 = ((undefined8 *)(unaff_x20 + _DAT_112d7c4e0))[1];
      if (lVar6 == 0) {
        uVar7 = 0;
        lVar6 = -0x2000000000000000;
      }
      else {
        uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d7c4e0);
        func_0x000107c61434(lVar6);
      }
    }
    else {
      uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d7c520);
      lVar6 = lVar5;
    }
    puVar3 = PTR_PTR_1126af120;
    func_0x000107c61168();
    func_0x000107c61434(lVar5);
    func_0x000107c5fadc(uVar7,lVar6);
    func_0x000107c6142c(lVar6);
    func_0x000107c424a8();
  }
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d7c530);
  *(undefined **)(unaff_x20 + _DAT_112d7c530) = puVar3;
  func_0x000107c61170(uVar7);
LAB_1013f8f64:
  puVar4 = *(undefined **)(unaff_x20 + _DAT_112d7c530);
  puVar3 = puVar4;
  if (puVar4 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126af120;
    func_0x000107c61168(PTR_PTR_1126af120);
    uVar7 = 0;
    func_0x000107c5fadc(0,0xe000000000000000);
    func_0x000107c424a8(puVar3);
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    puVar4 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar4);
  return puVar3;
}



/* Entry: 1013f8fd8; end: 1013f9003; -[_TtC15COSServicesImplP33_0AA9D65FB85F7CB0870C5ED2EA46864A10COSOTPView initWithFrame:] */

void FUN_1013f8fd8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("COSServicesImpl.COSOTPView",0x1a,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013f9004);
  (*pcVar1)();
}



/* Entry: 1013f9004; end: 1013f900f;  */

void FUN_1013f9004(void)

{
  FUN_1013f9104();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1013f9010; end: 1013f9103; -[_TtC15COSServicesImplP33_0AA9D65FB85F7CB0870C5ED2EA46864A10COSOTPView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001013f902c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013f9050: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013f9074: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013f90b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013f90d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013f90b8) */
/* WARNING: Removing unreachable block (ram,0x0001013f9078) */
/* WARNING: Removing unreachable block (ram,0x0001013f9054) */
/* WARNING: Removing unreachable block (ram,0x0001013f9030) */
/* WARNING: Removing unreachable block (ram,0x0001013f90dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013f9010(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d7c4c8));
  return;
}



/* Entry: 1013f9104; end: 1013f9123;  */

void FUN_1013f9104(void)

{
  func_0x000107c61168(&PTR_PTR_1127d1ec0);
  return;
}



/* Entry: 1013f9124; end: 1013f923f;  */

/* WARNING: Possible PIC construction at 0x0001013f91f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013f91f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013f9124(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  code *pcVar5;
  
  pcVar5 = param_1;
  func_0x000107c30ef0();
  if (*(long *)(unaff_x20 + _DAT_112d7c570) != 0) {
    func_0x000107c4e5ec();
    func_0x000107c30ef4(pcVar5);
    (*param_1)();
    lVar1 = unaff_x20 + _DAT_112d7c590;
    func_0x000107c61618();
    if (lVar1 != 0) {
      puVar2 = &UNK_1103b1d20;
      func_0x000107c613fc(&UNK_1103b1d20,0x20,7);
      *(undefined8 *)(puVar2 + 0x10) = param_3;
      *(undefined8 *)(puVar2 + 0x18) = param_4;
      lVar3 = lVar1 + 0x58;
      func_0x000107c61618();
      if (lVar3 == 0) {
        func_0x000107c6157c(param_4);
        func_0x000107c61574(puVar2);
      }
      else {
        lVar4 = *(long *)(lVar1 + 0x60);
        lVar1 = lVar3;
        func_0x000107c614f0();
        pcVar5 = *(code **)(lVar4 + 8);
        func_0x000107c6157c(param_4);
        (*pcVar5)(0x1013f9c44,puVar2,lVar1,lVar4);
        lVar1 = lVar3;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 1013f9240; end: 1013f930b;  */

/* WARNING: Possible PIC construction at 0x0001013f92e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013f9294: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013f92e4) */
/* WARNING: Removing unreachable block (ram,0x0001013f9298) */

void FUN_1013f9240(long param_1,long param_2)

{
  if (param_2 == 0) {
    func_0x0001052198e8();
    func_0x000107c61180();
    if (param_1 != 0) {
      func_0x000107c5faec();
      goto code_r0x000107c61170;
    }
    param_1 = 0;
  }
  else {
    func_0x000107c61434(param_2);
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c6142c(param_2);
  }
  func_0x000107c61168(PTR_PTR_1126af128);
  func_0x000107c50838();
  func_0x000107c61180();
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1013f930c; end: 1013f93bf; -[_TtC15COSServicesImplP33_0AA9D65FB85F7CB0870C5ED2EA46864A13COSOTPService requestCodeResendWithSuccessBlock:failureBlock:] */

/* WARNING: Possible PIC construction at 0x0001013f93a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013f93ac) */

void FUN_1013f930c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  puVar1 = &UNK_1103b1d98;
  func_0x000107c613fc(&UNK_1103b1d98,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  puVar2 = &UNK_1103b1dc0;
  func_0x000107c613fc(&UNK_1103b1dc0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_4;
  func_0x000107c61174(param_1);
  FUN_1013f9124(0x1013f9c5c,puVar1,0x1013f9c64,puVar2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1013f93c0; end: 1013f96e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013f93c0(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar6 = _DAT_112d7c590;
  lVar1 = unaff_x20 + _DAT_112d7c590;
  func_0x000107c61618();
  if (lVar1 != 0) {
    puVar2 = &UNK_1103b1c30;
    func_0x000107c613fc(&UNK_1103b1c30,0x18,7);
    func_0x000107c61644(puVar2 + 0x10,lVar1);
    pcStack_70 = FUN_1013f9bf0;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_1103b1c48;
    ppuVar3 = &puStack_90;
    puStack_68 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    func_0x000107c61574(puStack_68);
    func_0x0001000d76cc("COS Start Verify OTP",ppuVar3);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(lVar1);
  }
  func_0x000107c30ef0();
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c30ef8(lVar1,param_1);
  func_0x000107c61170(param_1);
  func_0x000107c30f00(lVar1,param_3 & 1);
  if (*(long *)(unaff_x20 + _DAT_112d7c578) != 0) {
    func_0x000107c4e5ec();
  }
  func_0x000107c30ef4(lVar1);
  lVar1 = unaff_x20 + lVar6;
  func_0x000107c61618();
  if (lVar1 != 0) {
    puVar2 = &UNK_1103b1c80;
    func_0x000107c613fc(&UNK_1103b1c80,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    puVar4 = &UNK_1103b1ca8;
    func_0x000107c613fc(&UNK_1103b1ca8,0x28,7);
    *(undefined **)(puVar4 + 0x10) = puVar2;
    *(undefined8 *)(puVar4 + 0x18) = param_4;
    *(undefined8 *)(puVar4 + 0x20) = param_5;
    lVar5 = lVar1 + 0x58;
    func_0x000107c61618();
    if (lVar5 == 0) {
      func_0x000107c6157c(puVar2);
      func_0x000107c6157c(param_5);
      func_0x000107c61574(puVar2);
    }
    else {
      lVar9 = *(long *)(lVar1 + 0x60);
      lVar8 = lVar5;
      func_0x000107c614f0();
      pcVar7 = *(code **)(lVar9 + 0x20);
      func_0x000107c6157c(puVar2);
      func_0x000107c6157c(param_5);
      (*pcVar7)(0x1013f9bf8,puVar4,lVar8,lVar9);
      func_0x000107c61574(puVar2);
      func_0x000107c615e8(lVar5);
    }
    func_0x000107c61574(puVar4);
    func_0x000107c615e8(lVar1);
  }
  lVar6 = unaff_x20 + lVar6;
  func_0x000107c61618();
  if (lVar6 != 0) {
    puVar2 = &UNK_1103b1c80;
    func_0x000107c613fc(&UNK_1103b1c80,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    puVar4 = &UNK_1103b1cd0;
    func_0x000107c613fc(&UNK_1103b1cd0,0x28,7);
    *(undefined **)(puVar4 + 0x10) = puVar2;
    *(undefined8 *)(puVar4 + 0x18) = param_6;
    *(undefined8 *)(puVar4 + 0x20) = param_7;
    lVar1 = lVar6 + 0x58;
    func_0x000107c61618();
    if (lVar1 == 0) {
      func_0x000107c6157c(puVar2);
      func_0x000107c6157c(param_7);
      func_0x000107c61574(puVar2);
    }
    else {
      lVar8 = *(long *)(lVar6 + 0x60);
      lVar5 = lVar1;
      func_0x000107c614f0();
      pcVar7 = *(code **)(lVar8 + 8);
      func_0x000107c6157c(puVar2);
      func_0x000107c6157c(param_7);
      (*pcVar7)(FUN_1013f9c30,puVar4,lVar5,lVar8);
      func_0x000107c61574(puVar2);
      func_0x000107c615e8(lVar1);
    }
    func_0x000107c61574(puVar4);
    func_0x000107c615e8(lVar6);
  }
  return;
}



/* Entry: 1013f96e4; end: 1013f979f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013f96e4(long param_1,code *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    puVar1 = PTR_PTR_1126af130;
    func_0x000107c610f8(PTR_PTR_1126af130);
    func_0x000107c483d0();
    (*param_2)();
    func_0x000107c61170(puVar1);
    uVar2 = *(undefined8 *)(param_1 + _DAT_112d7c598);
    func_0x000107c61174(uVar2);
    uVar3 = uVar2;
    func_0x000107c4ffe8();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    func_0x000107c61170(uVar2);
    func_0x000107c615e8(uVar3);
  }
  return;
}



/* Entry: 1013f97a0; end: 1013f9953;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013f97a0(long param_1,undefined1 *param_2,long param_3,code *param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  puVar4 = auStack_68;
  func_0x000107c61428(param_3 + 0x10,puVar4,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 == 0) {
    return;
  }
  puVar5 = param_2;
  if (param_2 == (undefined1 *)0x0) {
    lVar1 = param_3;
    func_0x0001052198e8();
    func_0x000107c61180();
    if (lVar1 == 0) {
      param_1 = 0;
      goto LAB_1013f9848;
    }
    param_1 = lVar1;
    func_0x000107c5faec();
    func_0x000107c61170(lVar1);
    puVar5 = puVar4;
  }
  func_0x000107c61434(param_2);
  func_0x000107c5fadc(param_1,puVar5);
  func_0x000107c6142c(puVar5);
LAB_1013f9848:
  puVar2 = PTR_PTR_1126af138;
  func_0x000107c61168(PTR_PTR_1126af138);
  func_0x000107c50838();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  (*param_4)(puVar2);
  func_0x000107c61170(puVar2);
  lVar1 = param_3 + _DAT_112d7c590;
  func_0x000107c61618();
  if (lVar1 != 0) {
    puVar2 = &UNK_1103b1c30;
    func_0x000107c613fc(&UNK_1103b1c30,0x18,7);
    func_0x000107c61644(puVar2 + 0x10,lVar1);
    uStack_78 = 0x1013f9c3c;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1000f6b44;
    puStack_80 = &UNK_1103b1ce8;
    ppuVar3 = &puStack_98;
    puStack_70 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    func_0x000107c61574(puStack_70);
    func_0x0001000d76cc("COS Verify OTP Failed",ppuVar3);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(lVar1);
  }
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1013f9954; end: 1013f9a47; -[_TtC15COSServicesImplP33_0AA9D65FB85F7CB0870C5ED2EA46864A13COSOTPService verifyCodeWithCode:isAutofill:successBlock:failureBlock:] */

/* WARNING: Possible PIC construction at 0x0001013f9a28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013f9a2c) */

void FUN_1013f9954(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  func_0x000107c5faec(param_3);
  puVar1 = &UNK_1103b1d48;
  func_0x000107c613fc(&UNK_1103b1d48,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  puVar2 = &UNK_1103b1d70;
  func_0x000107c613fc(&UNK_1103b1d70,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_6;
  func_0x000107c61174(param_1);
  FUN_1013f93c0(param_3,param_2,param_4,0x1013f9eec,puVar1,0x1013f9c4c,puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1013f9a48; end: 1013f9a73; -[_TtC15COSServicesImplP33_0AA9D65FB85F7CB0870C5ED2EA46864A13COSOTPService init] */

void FUN_1013f9a48(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("COSServicesImpl.COSOTPService",0x1d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013f9a74);
  (*pcVar1)();
}



/* Entry: 1013f9a74; end: 1013f9a7f;  */

void FUN_1013f9a74(void)

{
  FUN_1013f9b24();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1013f9a80; end: 1013f9ab7;  */

void FUN_1013f9a80(code *param_1)

{
  (*param_1)();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1013f9ab8; end: 1013f9b23; -[_TtC15COSServicesImplP33_0AA9D65FB85F7CB0870C5ED2EA46864A13COSOTPService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013f9ab8(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d7c570));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d7c578));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d7c588 + 8));
  FUN_100cb064c(param_1 + _DAT_112d7c590);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d7c598));
  return;
}



/* Entry: 1013f9b24; end: 1013f9b63;  */

void FUN_1013f9b24(void)

{
  func_0x000107c61168(&PTR_PTR_1127d2140);
  return;
}



/* Entry: 1013f9b64; end: 1013f9b7f;  */

void FUN_1013f9b64(long param_1,long param_2)

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



/* Entry: 1013f9b80; end: 1013f9b9f;  */

void FUN_1013f9b80(void)

{
  FUN_1013f758c();
  return;
}



/* Entry: 1013f9ba0; end: 1013f9bcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1013f9ba0(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  
  uVar2 = 0;
  FUN_1013f9104(0);
  lVar3 = param_1;
  func_0x000107c61480(param_1,uVar2);
  if (lVar3 != 0) {
    puVar1 = (undefined8 *)(lVar3 + _DAT_112d7c510);
    *puVar1 = param_2;
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar4 = &UNK_1103b1c08;
    func_0x000107c613fc(&UNK_1103b1c08,0x18,7);
    *(long *)(puVar4 + 0x10) = lVar3;
    func_0x000107c61174(param_1);
    FUN_1013f20ec(0x1013f9ebc,puVar4);
    func_0x000107c61574(puVar4);
  }
  return lVar3 != 0;
}



/* Entry: 1013f9bd0; end: 1013f9bef;  */

void FUN_1013f9bd0(void)

{
  FUN_1013f8150();
  return;
}



/* Entry: 1013f9bf0; end: 1013f9c03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013f9bf0(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = *(long *)(lVar1 + 0x48);
  if (lVar2 != 0) {
    if (*(long *)(lVar2 + _DAT_112d7c538) != 0) {
      func_0x000107c54514(*(long *)(lVar2 + _DAT_112d7c538));
      lVar2 = *(long *)(lVar1 + 0x48);
      if (lVar2 == 0) goto LAB_1013f7b8c;
    }
    lVar1 = *(long *)(lVar2 + _DAT_112d7c538);
    if (lVar1 != 0) {
      func_0x000107c61174(lVar1);
      func_0x000107c526c0(0);
      func_0x000107c61170(lVar1);
    }
  }
LAB_1013f7b8c:
  func_0x000107c61574();
  return;
}



/* Entry: 1013f9c04; end: 1013f9c2f;  */

void FUN_1013f9c04(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1013f9c30; end: 1013f9c83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013f9c30(long param_1,undefined1 *param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  long unaff_x20;
  undefined1 *puVar7;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  puVar6 = auStack_68;
  func_0x000107c61428(lVar2 + 0x10,puVar6,0,0,*(undefined8 *)(unaff_x20 + 0x20));
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 == 0) {
    return;
  }
  puVar7 = param_2;
  if (param_2 == (undefined1 *)0x0) {
    lVar3 = lVar2;
    func_0x0001052198e8();
    func_0x000107c61180();
    if (lVar3 == 0) {
      param_1 = 0;
      goto LAB_1013f9848;
    }
    param_1 = lVar3;
    func_0x000107c5faec();
    func_0x000107c61170(lVar3);
    puVar7 = puVar6;
  }
  func_0x000107c61434(param_2);
  func_0x000107c5fadc(param_1,puVar7);
  func_0x000107c6142c(puVar7);
LAB_1013f9848:
  puVar4 = PTR_PTR_1126af138;
  func_0x000107c61168(PTR_PTR_1126af138);
  func_0x000107c50838();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  (*pcVar1)(puVar4);
  func_0x000107c61170(puVar4);
  lVar3 = lVar2 + _DAT_112d7c590;
  func_0x000107c61618();
  if (lVar3 != 0) {
    puVar4 = &UNK_1103b1c30;
    func_0x000107c613fc(&UNK_1103b1c30,0x18,7);
    func_0x000107c61644(puVar4 + 0x10,lVar3);
    uStack_78 = 0x1013f9c3c;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1000f6b44;
    puStack_80 = &UNK_1103b1ce8;
    ppuVar5 = &puStack_98;
    puStack_70 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    func_0x000107c61574(puStack_70);
    func_0x0001000d76cc("COS Verify OTP Failed",ppuVar5);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c615e8(lVar3);
  }
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 1013f9c84; end: 1013f9ca3;  */

void FUN_1013f9c84(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1013f9ca4; end: 1013f9cc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013f9ca4(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c30ef0();
    if (*(long *)(lVar1 + _DAT_112d7c500) != 0) {
      func_0x000107c4e5ec();
    }
    func_0x000107c30ef4(lVar2);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1013f9cc4; end: 1013f9db7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013f9cc4(void)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  code *pcVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112d7c4f0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d7c4f8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d7c500) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d7c508) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d7c510);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar2 = (undefined4 *)(unaff_x20 + _DAT_112d7c518);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d7c520);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112d7c528) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d7c530) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d7c538) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d7c540) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "COSServicesImpl/COSOTPView.swift",0x20,2,0x11d,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1013f9db8);
  (*pcVar3)();
}



/* Entry: 1013f9db8; end: 1013f9df7;  */

void FUN_1013f9db8(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1013f9df8; end: 1013f9efb;  */

void FUN_1013f9df8(long param_1,long param_2)

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



/* Entry: 1013f9efc; end: 1013fa36f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_1013f9efc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,ulong param_7,ulong param_8,ulong param_9,
             ulong param_10,ulong param_11,ulong param_12)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined1 *puVar9;
  long unaff_x20;
  undefined1 auStack_b0 [80];
  
  puVar1 = PTR_PTR_1126b1588;
  func_0x000107c610f8();
  func_0x000107c453e4();
  if (*(long *)(unaff_x20 + _DAT_112d7c5d8) == 0) {
    *(undefined **)(unaff_x20 + _DAT_112d7c5d8) = puVar1;
    uVar8 = param_7 & 0xffffffffffff;
    if ((param_8 & 0x2000000000000000) != 0) {
      uVar8 = param_8 >> 0x38 & 0xf;
    }
    if (uVar8 == 0) {
      param_8 = 0x800000010ef12950;
      param_7 = 0xd000000000000015;
    }
    else {
      func_0x000107c61434(param_8);
    }
    puVar5 = PTR__OBJC_CLASS___ASAuthorizationPlatformPublicKeyCredentialProvider_1126a5db8;
    func_0x000107c610f8();
    func_0x000107c61174(puVar1);
    func_0x000107c5fadc(param_7,param_8);
    func_0x000107c6142c(param_8);
    func_0x000107c482e8();
    func_0x000107c61170(param_7);
    func_0x000107c5ee20(param_5,param_6);
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c61434(param_4);
    FUN_100e35e30(param_3,param_4);
    uVar3 = param_3;
    func_0x000107c5ee20();
    func_0x00010006c090(param_3,param_4);
    puVar6 = puVar5;
    func_0x000107c409b0();
    func_0x000107c61180();
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_1);
    func_0x000107c61170(uVar3);
    uVar8 = param_11 & 0xffffffffffff;
    if ((param_12 & 0x2000000000000000) != 0) {
      uVar8 = param_12 >> 0x38 & 0xf;
    }
    if (uVar8 != 0) {
      func_0x000107c5fadc();
      func_0x000107c529b4(puVar6);
      func_0x000107c61170(param_11);
    }
    uVar8 = param_9 & 0xffffffffffff;
    if ((param_10 & 0x2000000000000000) != 0) {
      uVar8 = param_10 >> 0x38 & 0xf;
    }
    if (uVar8 != 0) {
      func_0x000107c5fadc();
      func_0x000107c5a41c(puVar6);
      func_0x000107c61170();
    }
    func_0x00010140e1f4();
    func_0x000107c613fc();
    *(undefined8 *)(param_9 + 0x18) = 3;
    *(undefined8 *)(param_9 + 0x10) = 1;
    *(undefined **)(param_9 + 0x20) = puVar6;
    puVar7 = PTR__OBJC_CLASS___ASAuthorizationController_1126a5dd0;
    func_0x000107c610f8();
    uVar3 = 0;
    FUN_1013fad50(0);
    func_0x000107c61174(puVar6);
    uVar8 = param_9;
    func_0x000107c5fc48(param_9,uVar3);
    func_0x000107c61574(param_9);
    func_0x000107c458a8();
    func_0x000107c61170(uVar8);
    func_0x000107c53fcc(puVar7);
    func_0x000107c5771c(puVar7);
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112d7c5d0);
    *(undefined **)(unaff_x20 + _DAT_112d7c5d0) = puVar7;
    func_0x000107c61174(puVar7);
    func_0x000107c61170(uVar3);
    func_0x000107c4e5ac(puVar7);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar6);
  }
  else {
    lVar2 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    puVar9 = auStack_b0;
    func_0x000107c61534();
    *(undefined8 *)(lVar2 + 0x18) = 2;
    *(undefined8 *)(lVar2 + 0x10) = 1;
    uVar3 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    func_0x000107c5faec();
    *(undefined8 *)(lVar2 + 0x20) = uVar3;
    puVar5 = PTR___sSSN_11034da80;
    *(undefined **)(lVar2 + 0x48) = PTR___sSSN_11034da80;
    *(undefined1 **)(lVar2 + 0x28) = puVar9;
    *(undefined8 *)(lVar2 + 0x30) = 0xd000000000000024;
    *(undefined8 *)(lVar2 + 0x38) = 0x800000010ef3d3a0;
    lVar4 = lVar2;
    func_0x000100214a84(lVar2);
    func_0x000107c61588(lVar2);
    FUN_1013fad94((undefined8 *)(lVar2 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
    puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar3 = 0xd000000000000011;
    func_0x000107c5fadc(0xd000000000000011,0x800000010d93b470);
    lVar2 = lVar4;
    func_0x000107c5f9dc(lVar4,puVar5,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(lVar4);
    func_0x000107c466bc(puVar6);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c61174(puVar6);
    puVar5 = puVar6;
    func_0x000107c5ed2c();
    func_0x000107c61170(puVar6);
    func_0x000107c43b70(puVar1);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar6);
  }
  return puVar1;
}



/* Entry: 1013fa370; end: 1013fa4ef; -[_TtC15COSServicesImpl17COSPasskeyCreator createPasskeyWithAccountIdentifier:userId:nonce:relyingPartyId:userVerificationRequirement:attestationPreference:] */

void FUN_1013fa370(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  func_0x000107c5faec();
  uVar4 = param_2;
  func_0x000107c5faec();
  uVar1 = param_5;
  uVar5 = uVar4;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5ee30(param_5);
  uVar6 = uVar5;
  func_0x000107c61170(uVar1);
  uVar1 = param_6;
  func_0x000107c5faec(param_6);
  uVar7 = uVar6;
  func_0x000107c61170(param_6);
  uVar2 = param_7;
  func_0x000107c5faec();
  uVar8 = uVar7;
  func_0x000107c61170(param_7);
  uVar3 = param_8;
  func_0x000107c5faec();
  func_0x000107c61170(param_8);
  FUN_1013f9efc(param_3,param_2,param_4,uVar4,param_5,uVar5,uVar1,uVar6,uVar2,uVar7,uVar3,uVar8);
  func_0x000107c6142c(uVar6);
  func_0x000107c6142c(uVar7);
  func_0x000107c6142c(uVar8);
  func_0x00010006c090(param_5,uVar5);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1013fa4f0; end: 1013fa54f; -[_TtC15COSServicesImpl17COSPasskeyCreator init] */

void FUN_1013fa4f0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("COSServicesImpl.COSPasskeyCreator",0x21,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013fa51c);
  (*pcVar1)();
}



/* Entry: 1013fa550; end: 1013fa597; -[_TtC15COSServicesImpl17COSPasskeyCreator .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001013fa57c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013fa580) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013fa550(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d7c5c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d7c5d0));
  return;
}



/* Entry: 1013fa598; end: 1013fa5b7;  */

void FUN_1013fa598(void)

{
  func_0x000107c61168(&PTR_PTR_1127d22b0);
  return;
}



/* Entry: 1013fa5b8; end: 1013fa61f; -[_TtC15COSServicesImpl17COSPasskeyCreator authorizationController:didCompleteWithAuthorization:] */

/* WARNING: Possible PIC construction at 0x0001013fa600: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013fa604) */

void FUN_1013fa5b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_1013fa6e0(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1013fa620; end: 1013fa687; -[_TtC15COSServicesImpl17COSPasskeyCreator authorizationController:didCompleteWithError:] */

/* WARNING: Possible PIC construction at 0x0001013fa668: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013fa66c) */

void FUN_1013fa620(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x0001013faa30(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1013fa688; end: 1013fa6df; -[_TtC15COSServicesImpl17COSPasskeyCreator presentationAnchorForAuthorizationController:] */

void FUN_1013fa688(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_1;
  FUN_1013facc4();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1013fa6e0; end: 1013facc3;  */

/* WARNING: Possible PIC construction at 0x0001013fa768: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013fa964: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013fa98c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013fa9bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013fa9e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013fa9f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013fa890: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013fa8cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013fa8e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013fa8f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013fa910: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013fa8f4) */
/* WARNING: Removing unreachable block (ram,0x0001013fa8e4) */
/* WARNING: Removing unreachable block (ram,0x0001013fa8d0) */
/* WARNING: Removing unreachable block (ram,0x0001013fa894) */
/* WARNING: Removing unreachable block (ram,0x0001013fa8ec) */
/* WARNING: Removing unreachable block (ram,0x0001013fa8ac) */
/* WARNING: Removing unreachable block (ram,0x0001013fa9f8) */
/* WARNING: Removing unreachable block (ram,0x0001013fa9c0) */
/* WARNING: Removing unreachable block (ram,0x0001013fa9e8) */
/* WARNING: Removing unreachable block (ram,0x0001013fa9d0) */
/* WARNING: Removing unreachable block (ram,0x0001013fa990) */
/* WARNING: Removing unreachable block (ram,0x0001013fa968) */
/* WARNING: Removing unreachable block (ram,0x0001013fa76c) */
/* WARNING: Removing unreachable block (ram,0x0001013fa914) */

void FUN_1013fa6e0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 auStack_a0 [80];
  
  puVar6 = auStack_a0;
  func_0x000107c40d6c();
  func_0x000107c61180();
  puVar1 = PTR__OBJC_CLASS___ASAuthorizationPlatformPublicKeyCredentialRegistration_1126a5e28;
  func_0x000107c61168(
                     PTR__OBJC_CLASS___ASAuthorizationPlatformPublicKeyCredentialRegistration_1126a5e28
                     );
  lVar5 = param_1;
  func_0x000107c6148c(param_1,puVar1);
  if (lVar5 == 0) {
    func_0x000107c615e8(param_1);
    lVar5 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    func_0x000107c61534();
    *(undefined8 *)(lVar5 + 0x18) = 2;
    *(undefined8 *)(lVar5 + 0x10) = 1;
    uVar2 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    func_0x000107c5faec();
    *(undefined8 *)(lVar5 + 0x20) = uVar2;
    puVar1 = PTR___sSSN_11034da80;
    *(undefined **)(lVar5 + 0x48) = PTR___sSSN_11034da80;
    *(undefined1 **)(lVar5 + 0x28) = puVar6;
    *(undefined8 *)(lVar5 + 0x30) = 0xd000000000000017;
    *(undefined8 *)(lVar5 + 0x38) = 0x800000010ef3d350;
    lVar3 = lVar5;
    func_0x000100214a84(lVar5);
    func_0x000107c61588(lVar5);
    FUN_1013fad94((undefined8 *)(lVar5 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    lVar5 = -0x2fffffffffffffef;
    func_0x000107c5fadc(0xd000000000000011,0x800000010d93b470);
    func_0x000107c5f9dc(lVar3,puVar1,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(lVar3);
    func_0x000107c466bc(puVar4);
  }
  else {
    puVar1 = PTR_PTR_1126a6d10;
    func_0x000107c610f8(PTR_PTR_1126a6d10);
    func_0x000107c453e4();
    func_0x000107c4f8ec();
    func_0x000107c61180();
    if (lVar5 == 0) {
      lVar5 = 0;
      func_0x000107c5ee20(0,0xc000000000000000);
      func_0x00010006c090(0,0xc000000000000000);
      func_0x000107c529b0(puVar1);
    }
    else {
      func_0x000107c5ee30();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 1013facc4; end: 1013fad4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1013facc4(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  
  puVar2 = (undefined *)(unaff_x20 + _DAT_112d7c5c8);
  func_0x000107c61618();
  if (puVar2 != (undefined *)0x0) {
    puVar3 = puVar2;
    func_0x000107c5de64();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1013fad50);
      (*pcVar1)();
    }
    puVar2 = puVar3;
    func_0x000107c5e3f8();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    if (puVar2 != (undefined *)0x0) {
      return puVar2;
    }
  }
  puVar2 = PTR__OBJC_CLASS___UIWindow_1126c3e70;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIWindow_1126c3e70);
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return puVar2;
}



/* Entry: 1013fad50; end: 1013fad93;  */

void FUN_1013fad50(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d3a200 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___ASAuthorizationRequest_1126a5dd8;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d3a200 = puVar1;
  return;
}



/* Entry: 1013fad94; end: 1013fadd3;  */

undefined8 FUN_1013fad94(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1013fadd4; end: 1013fafeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1013fadd4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lStack_90;
  long lStack_88;
  
  plVar6 = &lStack_90;
  puVar7 = *(undefined1 **)(param_1 + 0x18);
  puVar9 = puVar7;
  if (puVar7 == (undefined1 *)0x0) {
    uVar10 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar11 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar12 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar13 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    uVar8 = *(undefined8 *)(param_1 + 0x10);
    lVar3 = 0;
    FUN_1013fd66c();
    lVar4 = lVar3;
    func_0x000107c610f8();
    lVar5 = lVar4 + _DAT_112d7c720;
    *(undefined8 *)(lVar5 + 8) = 0;
    func_0x000107c61614(lVar5,0);
    *(undefined8 *)(lVar4 + _DAT_112d7c738) = 0;
    *(undefined8 *)(lVar4 + _DAT_112d7c740) = 0;
    *(undefined8 *)(lVar4 + _DAT_112d7c748) = 0;
    *(undefined8 *)(lVar4 + _DAT_112d7c750) = 0;
    *(undefined8 *)(lVar4 + _DAT_112d7c758) = 0;
    *(undefined8 *)(lVar4 + _DAT_112d7c760) = 0;
    *(undefined1 *)(lVar4 + _DAT_112d7c768) = 0;
    *(undefined1 *)(lVar4 + _DAT_112d7c770) = 0;
    puVar1 = (undefined8 *)(lVar4 + _DAT_112d7c778);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar4 + _DAT_112d7c780);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar4 + _DAT_112d7c788);
    puVar1[1] = 0xf000000000000000;
    *puVar1 = 0;
    puVar1 = (undefined8 *)(lVar4 + _DAT_112d7c790);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar4 + _DAT_112d7c798);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar4 + _DAT_112d7c7a0);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)(lVar4 + _DAT_112d7c718) = uVar8;
    *(undefined ***)(lVar5 + 8) = &PTR_DAT_1103b2008;
    func_0x000107c61604();
    puVar1 = (undefined8 *)(lVar4 + _DAT_112d7c728);
    *puVar1 = param_2;
    puVar1[1] = param_3;
    puVar1 = (undefined8 *)(lVar4 + _DAT_112d7c730);
    *puVar1 = param_4;
    puVar1[1] = param_5;
    puVar2 = PTR_s_initWithFrame__1125e2948;
    lStack_90 = lVar4;
    lStack_88 = lVar3;
    func_0x000107c61174(uVar8);
    func_0x000107c6157c(param_3);
    func_0x000107c6157c(param_5);
    func_0x000107c61154(uVar10,uVar11,uVar12,uVar13,&lStack_90,puVar2);
    uVar8 = *(undefined8 *)(param_1 + 0x18);
    *(long **)(param_1 + 0x18) = plVar6;
    func_0x000107c61174();
    func_0x000107c61170(uVar8);
    puVar9 = (undefined1 *)plVar6;
  }
  func_0x000107c61174(puVar7);
  return puVar9;
}



/* Entry: 1013fafec; end: 1013fb90b;  */

void FUN_1013fafec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined8 uVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  undefined **ppuVar22;
  undefined **ppuVar23;
  undefined **ppuVar24;
  undefined **ppuVar25;
  undefined **ppuVar26;
  undefined **ppuVar27;
  undefined **ppuVar28;
  undefined **ppuVar29;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  
  if (param_1 != 0) {
    ppuVar3 = &puStack_a0;
    ppuVar4 = &puStack_a0;
    ppuVar5 = &puStack_a0;
    ppuVar6 = &puStack_a0;
    ppuVar7 = &puStack_a0;
    ppuVar8 = &puStack_a0;
    ppuVar9 = &puStack_a0;
    ppuVar10 = &puStack_a0;
    ppuVar11 = &puStack_a0;
    ppuVar12 = &puStack_a0;
    ppuVar13 = &puStack_a0;
    ppuVar14 = &puStack_a0;
    ppuVar15 = &puStack_a0;
    ppuVar16 = &puStack_a0;
    ppuVar17 = &puStack_a0;
    ppuVar18 = &puStack_a0;
    ppuVar20 = &puStack_a0;
    ppuVar21 = &puStack_a0;
    ppuVar22 = &puStack_a0;
    ppuVar23 = &puStack_a0;
    ppuVar24 = &puStack_a0;
    ppuVar25 = &puStack_a0;
    ppuVar26 = &puStack_a0;
    ppuVar27 = &puStack_a0;
    ppuVar28 = &puStack_a0;
    ppuVar29 = &puStack_a0;
    func_0x000107c615f0();
    uVar2 = 0xd000000000000010;
    func_0x000107c5fadc(0xd000000000000010,0x800000010ef3d3d0);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_80 = FUN_1013fb90c;
    uStack_78 = 0;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)0x10140e4c4;
    puStack_88 = &UNK_1103b2030;
    func_0x000107c60bc4(&puStack_a0);
    pcStack_80 = (code *)0x1013fb918;
    uStack_78 = 0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)0x10127a6c0;
    puStack_88 = &UNK_1103b2058;
    func_0x000107c60bc4(&puStack_a0);
    func_0x000107c3e90c(param_1);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(uVar2);
    uVar2 = 0x656b737361506e6f;
    func_0x000107c5fadc(0x656b737361506e6f,0xee00726f72724579);
    pcStack_80 = (code *)0x1013fb91c;
    uStack_78 = 0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)0x10140e4c4;
    puStack_88 = &UNK_1103b2080;
    func_0x000107c60bc4(&puStack_a0);
    pcStack_80 = (code *)0x1013fb928;
    uStack_78 = 0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)0x10127a6c0;
    puStack_88 = &UNK_1103b20a8;
    func_0x000107c60bc4(&puStack_a0);
    func_0x000107c3e90c(param_1);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(uVar2);
    uVar2 = 0x70696b536e6f;
    func_0x000107c5fadc(0x70696b536e6f,0xe600000000000000);
    pcStack_80 = (code *)0x1013fb92c;
    uStack_78 = 0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)0x10140e4c4;
    puStack_88 = &UNK_1103b20d0;
    func_0x000107c60bc4(&puStack_a0);
    pcStack_80 = (code *)0x1013fb938;
    uStack_78 = 0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)0x10127a6c0;
    puStack_88 = &UNK_1103b20f8;
    func_0x000107c60bc4(&puStack_a0);
    func_0x000107c3e90c(param_1);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61170(uVar2);
    uVar2 = 0x746978456e6f;
    func_0x000107c5fadc(0x746978456e6f,0xe600000000000000);
    pcStack_80 = (code *)0x1013fb93c;
    uStack_78 = 0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)0x10140e4c4;
    puStack_88 = &UNK_1103b2120;
    func_0x000107c60bc4(&puStack_a0);
    pcStack_80 = FUN_1013fb9c8;
    uStack_78 = 0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)0x10127a6c0;
    puStack_88 = &UNK_1103b2148;
    func_0x000107c60bc4(&puStack_a0);
    func_0x000107c3e90c(param_1);
    func_0x000107c60bd0(ppuVar10);
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c61170(uVar2);
    uVar2 = 0x617070696b537369;
    func_0x000107c5fadc(0x617070696b537369,0xeb00000000656c62);
    pcStack_80 = (code *)0x1013fb9cc;
    uStack_78 = 0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_10137c584;
    puStack_88 = &UNK_1103b2170;
    func_0x000107c60bc4();
    pcStack_80 = (code *)0x1013fb9d8;
    uStack_78 = 0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)0x101138058;
    puStack_88 = &UNK_1103b2198;
    func_0x000107c60bc4();
    func_0x000107c3e8fc(param_1);
    func_0x000107c60bd0(ppuVar12);
    func_0x000107c60bd0(ppuVar11);
    func_0x000107c61170(uVar2);
    uVar2 = 0xd000000000000011;
    func_0x000107c5fadc(0xd000000000000011,0x800000010ef3cc50);
    pcStack_80 = (code *)0x1013fb9dc;
    uStack_78 = 0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_10137c584;
    puStack_88 = &UNK_1103b21c0;
    func_0x000107c60bc4(&puStack_a0);
    pcStack_80 = FUN_1013fba44;
    uStack_78 = 0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)0x101138058;
    puStack_88 = &UNK_1103b21e8;
    func_0x000107c60bc4();
    func_0x000107c3e8fc(param_1);
    func_0x000107c60bd0(ppuVar14);
    func_0x000107c60bd0(ppuVar13);
    func_0x000107c61170(uVar2);
    uVar2 = 0xd000000000000011;
    func_0x000107c5fadc(0xd000000000000011,0x800000010ef3d040);
    pcStack_80 = (code *)0x1013fba48;
    uStack_78 = 0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_101137fac;
    puStack_88 = &UNK_1103b2210;
    func_0x000107c60bc4(&puStack_a0);
    pcStack_80 = (code *)0x1013fba54;
    uStack_78 = 0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)0x101138058;
    puStack_88 = &UNK_1103b2238;
    func_0x000107c60bc4(&puStack_a0);
    func_0x000107c3e900(param_1);
    func_0x000107c60bd0(ppuVar16);
    func_0x000107c60bd0(ppuVar15);
    func_0x000107c61170(uVar2);
    uVar2 = 0x644972657375;
    func_0x000107c5fadc(0x644972657375,0xe600000000000000);
    pcStack_80 = (code *)0x1013fba58;
    uStack_78 = 0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_101137fac;
    puStack_88 = &UNK_1103b2260;
    func_0x000107c60bc4(&puStack_a0);
    pcStack_80 = (code *)0x1013fba64;
    uStack_78 = 0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)0x101138058;
    puStack_88 = &UNK_1103b2288;
    func_0x000107c60bc4(&puStack_a0);
    func_0x000107c3e900(param_1);
    func_0x000107c60bd0(ppuVar18);
    func_0x000107c60bd0(ppuVar17);
    func_0x000107c61170(uVar2);
    uVar19 = 0x65636e6f6e;
    func_0x000107c5fadc(0x65636e6f6e,0xe500000000000000);
    pcStack_80 = (code *)0x1013fd7f0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)0x1013e6cc8;
    puStack_88 = &UNK_1103b22b0;
    uStack_78 = param_2;
    func_0x000107c60bc4();
    uVar2 = uStack_78;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(uVar2);
    pcStack_80 = FUN_1013fbc28;
    uStack_78 = 0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)0x101138058;
    puStack_88 = &UNK_1103b22d8;
    func_0x000107c60bc4();
    func_0x000107c3e904(param_1);
    func_0x000107c60bd0(ppuVar21);
    func_0x000107c60bd0(ppuVar20);
    func_0x000107c61170(uVar19);
    uVar2 = 0x50676e69796c6572;
    func_0x000107c5fadc(0x50676e69796c6572,0xee00644979747261);
    pcStack_80 = (code *)0x1013fbc2c;
    uStack_78 = 0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_101137fac;
    puStack_88 = &UNK_1103b2300;
    func_0x000107c60bc4();
    pcStack_80 = (code *)0x1013fbc38;
    uStack_78 = 0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)0x101138058;
    puStack_88 = &UNK_1103b2328;
    func_0x000107c60bc4();
    func_0x000107c3e900(param_1);
    func_0x000107c60bd0(ppuVar23);
    func_0x000107c60bd0(ppuVar22);
    func_0x000107c61170(uVar2);
    uVar2 = 0xd00000000000001b;
    func_0x000107c5fadc(0xd00000000000001b,0x800000010ef3d3f0);
    pcStack_80 = (code *)0x1013fbc3c;
    uStack_78 = 0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_101137fac;
    puStack_88 = &UNK_1103b2350;
    func_0x000107c60bc4();
    pcStack_80 = (code *)0x1013fbc48;
    uStack_78 = 0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)0x101138058;
    puStack_88 = &UNK_1103b2378;
    func_0x000107c60bc4();
    func_0x000107c3e900(param_1);
    func_0x000107c60bd0(ppuVar25);
    func_0x000107c60bd0(ppuVar24);
    func_0x000107c61170(uVar2);
    uVar2 = 0xd000000000000015;
    func_0x000107c5fadc(0xd000000000000015,0x800000010ef3d410);
    pcStack_80 = (code *)0x1013fbc4c;
    uStack_78 = 0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_101137fac;
    puStack_88 = &UNK_1103b23a0;
    func_0x000107c60bc4(&puStack_a0);
    pcStack_80 = FUN_1013fbce8;
    uStack_78 = 0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)0x101138058;
    puStack_88 = &UNK_1103b23c8;
    func_0x000107c60bc4(&puStack_a0);
    func_0x000107c3e900(param_1);
    func_0x000107c60bd0(ppuVar27);
    func_0x000107c60bd0(ppuVar26);
    func_0x000107c61170(uVar2);
    uVar2 = 0xd000000000000011;
    func_0x000107c5fadc(0xd000000000000011,0x800000010ef3cc70);
    pcStack_80 = (code *)0x1013fbcec;
    uStack_78 = 0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_10137c584;
    puStack_88 = &UNK_1103b23f0;
    func_0x000107c60bc4(&puStack_a0);
    pcStack_80 = (code *)0x1013fbcf4;
    uStack_78 = 0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)0x101138058;
    puStack_88 = &UNK_1103b2418;
    func_0x000107c60bc4(&puStack_a0);
    func_0x000107c3e8fc(param_1);
    func_0x000107c60bd0(ppuVar29);
    func_0x000107c60bd0(ppuVar28);
    func_0x000107c615e8(param_1);
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 1013fb90c; end: 1013fb947;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013fb90c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = 0;
  FUN_1013fd66c(0);
  lVar2 = param_1;
  func_0x000107c61480(param_1,uVar1);
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(lVar2 + _DAT_112d7c748);
    *(undefined8 *)(lVar2 + _DAT_112d7c748) = param_2;
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_2);
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
    return;
  }
  return;
}



/* Entry: 1013fb948; end: 1013fb9c7;  */

void FUN_1013fb948(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = 0;
  FUN_1013fd66c(0);
  lVar2 = param_1;
  func_0x000107c61480(param_1,uVar1);
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(lVar2 + *param_3);
    *(undefined8 *)(lVar2 + *param_3) = param_2;
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_2);
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
    return;
  }
  return;
}



/* Entry: 1013fb9c8; end: 1013fb9e7;  */

void FUN_1013fb9c8(void)

{
  return;
}



/* Entry: 1013fb9e8; end: 1013fba43;  */

bool FUN_1013fb9e8(long param_1,long param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1013fd66c(0);
  func_0x000107c61480(param_1,uVar1);
  if (param_1 != 0) {
    *(bool *)(param_1 + *param_4) = param_2 != 0;
  }
  return param_1 != 0;
}



/* Entry: 1013fba44; end: 1013fba67;  */

void FUN_1013fba44(void)

{
  return;
}



/* Entry: 1013fba68; end: 1013fbbcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1013fba68(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  iVar3 = (int)&uStack_70;
  uVar4 = 0;
  FUN_1013fd66c(0);
  lVar5 = param_1;
  func_0x000107c61480(param_1,uVar4);
  if (lVar5 != 0) {
    func_0x000100672b50(param_2,auStack_60);
    if (lStack_48 == 0) {
      func_0x000107c61174(param_1);
      func_0x00010006e7f4(auStack_60);
      uStack_70 = 0;
      uStack_68 = 0xf000000000000000;
    }
    else {
      func_0x000107c61174(param_1);
      func_0x000107c6147c(&uStack_70,auStack_60,PTR___sypN_11034f1a8 + 8,
                          PTR___s10Foundation4DataVN_110350ae0,6);
      if (iVar3 == 0) {
        uStack_70 = 0;
        uStack_68 = 0xf000000000000000;
      }
    }
    puVar1 = (undefined8 *)(lVar5 + _DAT_112d7c788);
    uVar4 = *puVar1;
    uVar2 = puVar1[1];
    *puVar1 = uStack_70;
    puVar1[1] = uStack_68;
    func_0x0001000b44c0(uVar4,uVar2);
    puVar6 = &UNK_1103b2450;
    func_0x000107c613fc(&UNK_1103b2450,0x18,7);
    func_0x000107c61644(puVar6 + 0x10,param_4);
    puVar7 = &UNK_1103b2478;
    func_0x000107c613fc(&UNK_1103b2478,0x20,7);
    *(undefined **)(puVar7 + 0x10) = puVar6;
    *(long *)(puVar7 + 0x18) = lVar5;
    func_0x000107c61174(param_1);
    func_0x000107c6157c(puVar6);
    FUN_1013f20ec(0x1013fd7f8,puVar7);
    func_0x000107c61574(puVar6);
    func_0x000107c61574(puVar7);
    func_0x000107c61170(param_1);
  }
  return lVar5 != 0;
}



/* Entry: 1013fbbd0; end: 1013fbc27;  */

void FUN_1013fbbd0(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    FUN_1013fbd88();
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 1013fbc28; end: 1013fbc57;  */

void FUN_1013fbc28(void)

{
  return;
}



/* Entry: 1013fbc58; end: 1013fbce7;  */

bool FUN_1013fbc58(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = 0;
  FUN_1013fd66c(0);
  lVar3 = param_1;
  func_0x000107c61480(param_1,uVar2);
  if (lVar3 != 0) {
    puVar1 = (undefined8 *)(lVar3 + *param_5);
    uVar2 = puVar1[1];
    *puVar1 = param_2;
    puVar1[1] = param_3;
    func_0x000107c61174(param_1);
    func_0x000107c61434(param_3);
    func_0x000107c61170(param_1);
    func_0x000107c6142c(uVar2);
  }
  return lVar3 != 0;
}



/* Entry: 1013fbce8; end: 1013fbcf7;  */

void FUN_1013fbce8(void)

{
  return;
}



/* Entry: 1013fbcf8; end: 1013fbd53;  */

void FUN_1013fbcf8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100cb07d4(unaff_x20 + 0x20);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1013fbd54; end: 1013fbd87; -[_TtC15COSServicesImplP33_9227AFA2038675FD77047A24746A31F024COSPasskeyEnrollmentView initWithCoder:] */

undefined8 FUN_1013fbd54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1013fd8a0();
  func_0x000107c61174(param_3);
  return param_1;
}



/* Entry: 1013fbd88; end: 1013fc16b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013fbd88(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long unaff_x20;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long lStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_120;
  undefined8 uStack_110;
  long lStack_e8;
  long lStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  
  lVar16 = *(long *)(unaff_x20 + _DAT_112d7c718);
  lVar15 = lVar16;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar15 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar16);
    func_0x000107c61180();
    func_0x000107c615e8();
  }
  puVar7 = &UNK_1103b26a8;
  func_0x000107c613fc(&UNK_1103b26a8,0x18,7);
  *(long *)(puVar7 + 0x10) = unaff_x20;
  puVar8 = &UNK_1103b26d0;
  func_0x000107c613fc(&UNK_1103b26d0,0x18,7);
  *(long *)(puVar8 + 0x10) = unaff_x20;
  puVar9 = PTR_PTR_1126aeaf8;
  func_0x000107c610f8();
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_88 = FUN_1013fd880;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  uStack_98 = 0x100e1779c;
  puStack_90 = &UNK_1103b26e8;
  ppuVar10 = &puStack_a8;
  puStack_80 = puVar7;
  func_0x000107c60bc4(ppuVar10);
  uStack_b8 = 0x1013fd888;
  puStack_d8 = puVar6;
  uStack_d0 = 0x42000000;
  uStack_c8 = 0x100e17304;
  puStack_c0 = &UNK_1103b2710;
  ppuVar11 = &puStack_d8;
  puStack_b0 = puVar8;
  func_0x000107c60bc4(ppuVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c47be0();
  func_0x000107c60bd0(ppuVar11);
  func_0x000107c60bd0(ppuVar10);
  func_0x000107c61574(puStack_b0);
  func_0x000107c61574(puStack_80);
  lVar15 = ((undefined8 *)(unaff_x20 + _DAT_112d7c778))[1];
  if (lVar15 == 0) {
    uStack_110 = 0;
    lStack_120 = -0x2000000000000000;
  }
  else {
    uStack_110 = *(undefined8 *)(unaff_x20 + _DAT_112d7c778);
    lStack_120 = lVar15;
  }
  uVar18 = *(undefined8 *)(unaff_x20 + _DAT_112d7c788);
  uVar4 = ((undefined8 *)(unaff_x20 + _DAT_112d7c788))[1];
  lVar20 = ((undefined8 *)(unaff_x20 + _DAT_112d7c780))[1];
  if (lVar20 == 0) {
    lStack_138 = -0x2000000000000000;
    uStack_130 = 0;
  }
  else {
    uStack_130 = *(undefined8 *)(unaff_x20 + _DAT_112d7c780);
    lStack_138 = lVar20;
  }
  lVar17 = ((undefined8 *)(unaff_x20 + _DAT_112d7c790))[1];
  if (lVar17 == 0) {
    lStack_148 = -0x2000000000000000;
    uStack_140 = 0;
  }
  else {
    uStack_140 = *(undefined8 *)(unaff_x20 + _DAT_112d7c790);
    lStack_148 = lVar17;
  }
  uVar3 = 0xc000000000000000;
  if (uVar4 >> 0x3c < 0xf) {
    uVar3 = uVar4;
  }
  uVar12 = 0;
  if (uVar4 >> 0x3c < 0xf) {
    uVar12 = uVar18;
  }
  uVar19 = *(undefined8 *)(unaff_x20 + _DAT_112d7c798);
  uVar22 = ((undefined8 *)(unaff_x20 + _DAT_112d7c798))[1];
  uVar21 = *(undefined8 *)(unaff_x20 + _DAT_112d7c7a0);
  uVar23 = ((undefined8 *)(unaff_x20 + _DAT_112d7c7a0))[1];
  uVar5 = *(undefined1 *)(unaff_x20 + _DAT_112d7c770);
  func_0x00010141a868(0);
  func_0x000107c610f8();
  FUN_100de78a0(uVar18,uVar4);
  func_0x000107c61434(uVar23);
  func_0x000107c61434(lVar15);
  func_0x000107c61434(lVar20);
  func_0x000107c61434(lVar17);
  func_0x000107c61434(uVar22);
  func_0x00010141a7c0(uVar12,uVar3,uStack_110,lStack_120,uStack_130,lStack_138,uStack_140,lStack_148
                      ,uVar19,uVar22,uVar21,uVar23,uVar5);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d7c728);
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112d7c730);
  lVar20 = 0;
  FUN_1013fd7b4();
  uVar18 = puVar2[1];
  uVar24 = puVar2[1];
  uVar23 = *puVar2;
  uVar19 = puVar1[1];
  uVar22 = puVar1[1];
  uVar21 = *puVar1;
  lVar15 = lVar20;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar15 + _DAT_112d7c7d0);
  puVar1[1] = uVar22;
  *puVar1 = uVar21;
  puVar1 = (undefined8 *)(lVar15 + _DAT_112d7c7d8);
  puVar1[1] = uVar24;
  *puVar1 = uVar23;
  puVar7 = PTR_s_init_1125d9248;
  lStack_e8 = lVar15;
  lStack_e0 = lVar20;
  func_0x000107c6157c(uVar19);
  func_0x000107c6157c(uVar18);
  plVar13 = &lStack_e8;
  func_0x000107c61154(plVar13,puVar7);
  FUN_10141af44(0);
  func_0x000107c610f8();
  func_0x000107c61174(unaff_x20);
  func_0x000107c61174(puVar9);
  func_0x000107c61174(uVar12);
  plVar14 = plVar13;
  func_0x000107c61174(plVar13);
  FUN_10141ae84(unaff_x20,puVar9,uVar12,plVar13);
  func_0x000107c42c1c(lVar16);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(plVar14);
  func_0x000107c61170(unaff_x20);
  return;
}



/* Entry: 1013fc16c; end: 1013fc6bb;  */

/* WARNING: Possible PIC construction at 0x0001013fc1c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013fc264: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013fc2b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013fc30c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013fc360: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013fc3a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013fc40c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013fc458: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013fc488: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013fc4b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013fc4d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013fc58c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013fc5b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013fc5d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013fc604: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013fc624: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013fc65c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013fc66c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013fc660) */
/* WARNING: Removing unreachable block (ram,0x0001013fc628) */
/* WARNING: Removing unreachable block (ram,0x0001013fc608) */
/* WARNING: Removing unreachable block (ram,0x0001013fc5dc) */
/* WARNING: Removing unreachable block (ram,0x0001013fc5b4) */
/* WARNING: Removing unreachable block (ram,0x0001013fc590) */
/* WARNING: Removing unreachable block (ram,0x0001013fc4d8) */
/* WARNING: Removing unreachable block (ram,0x0001013fc4b8) */
/* WARNING: Removing unreachable block (ram,0x0001013fc48c) */
/* WARNING: Removing unreachable block (ram,0x0001013fc45c) */
/* WARNING: Removing unreachable block (ram,0x0001013fc410) */
/* WARNING: Removing unreachable block (ram,0x0001013fc3a8) */
/* WARNING: Removing unreachable block (ram,0x0001013fc3bc) */
/* WARNING: Removing unreachable block (ram,0x0001013fc364) */
/* WARNING: Removing unreachable block (ram,0x0001013fc310) */
/* WARNING: Removing unreachable block (ram,0x0001013fc2bc) */
/* WARNING: Removing unreachable block (ram,0x0001013fc268) */
/* WARNING: Removing unreachable block (ram,0x0001013fc1c4) */
/* WARNING: Removing unreachable block (ram,0x0001013fc670) */
/* WARNING: Removing unreachable block (ram,0x0001013fc680) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013fc16c(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_2 + _DAT_112d7c738);
    *(long *)(param_2 + _DAT_112d7c738) = param_1;
    func_0x000107c61174(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1013fc6bc; end: 1013fc753;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013fc6bc(code *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  
  if (*(long *)(param_3 + _DAT_112d7c740) != 0) {
    func_0x000107c4ff34();
  }
  lVar1 = _DAT_112d7c738;
  lVar3 = *(long *)(param_3 + _DAT_112d7c738);
  if (lVar3 != 0) {
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1013fc754);
      (*pcVar2)();
    }
    func_0x000107c4ff34();
    func_0x000107c61170(lVar3);
    if (*(long *)(param_3 + lVar1) != 0) {
      func_0x000107c420a8();
    }
  }
  if (param_1 != (code *)0x0) {
    (*param_1)();
  }
  return;
}



/* Entry: 1013fc754; end: 1013fc79f; -[_TtC15COSServicesImplP33_9227AFA2038675FD77047A24746A31F024COSPasskeyEnrollmentView skipTappedWithSender:] */

/* WARNING: Possible PIC construction at 0x0001013fc788: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013fc78c) */

void FUN_1013fc754(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1013fd9d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1013fc7a0; end: 1013fcc6b;  */

/* WARNING: Possible PIC construction at 0x0001013fc8dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013fc93c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013fca00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013fca2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013fcadc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013fcb08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013fcbb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013fcbe4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013fcae0) */
/* WARNING: Removing unreachable block (ram,0x0001013fca04) */
/* WARNING: Removing unreachable block (ram,0x0001013fc8e0) */
/* WARNING: Removing unreachable block (ram,0x0001013fcbbc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013fc7a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  code *pcVar7;
  
  lVar1 = _DAT_112d7c720;
  lVar4 = *(long *)(unaff_x20 + _DAT_112d7c748);
  if (lVar4 != 0) {
    lVar5 = unaff_x20 + _DAT_112d7c720;
    func_0x000107c61618();
    if (lVar5 == 0) {
      func_0x000107c615f0(lVar4);
      lVar5 = unaff_x20 + lVar1;
      func_0x000107c61618();
      if (lVar5 == 0) {
        lVar5 = unaff_x20 + lVar1;
        func_0x000107c61618();
        if (lVar5 == 0) {
          lVar1 = unaff_x20 + lVar1;
          func_0x000107c61618();
          if (lVar1 == 0) {
            func_0x000107c30ef0();
            func_0x000107c5ee20(param_1,param_2);
            func_0x000107c30f18(lVar1,param_1);
            func_0x000107c61170(param_1);
            func_0x000107c5ee20(param_3,param_4);
            func_0x000107c30f18(lVar1,param_3);
            func_0x000107c61170(param_3);
            func_0x000107c4e5ec(lVar4);
            func_0x000107c30ef4(lVar1);
          }
          else {
            puVar2 = &UNK_1103b2590;
            func_0x000107c613fc(&UNK_1103b2590,0x18,7);
            func_0x000107c61614(puVar2 + 0x10);
            puVar3 = &UNK_1103b2630;
            func_0x000107c613fc(&UNK_1103b2630,0x28,7);
            *(undefined **)(puVar3 + 0x10) = puVar2;
            *(undefined8 *)(puVar3 + 0x18) = param_11;
            *(undefined8 *)(puVar3 + 0x20) = param_12;
            lVar4 = lVar1 + 0x20;
            func_0x000107c61618();
            if (lVar4 == 0) {
              func_0x000107c6157c(puVar2);
              func_0x000107c6157c(param_12);
              func_0x000107c61574(puVar2);
              func_0x000107c61574(puVar3);
              lVar4 = lVar1;
            }
            else {
              lVar5 = *(long *)(lVar1 + 0x28);
              lVar1 = lVar4;
              func_0x000107c614f0();
              pcVar7 = *(code **)(lVar5 + 0x18);
              func_0x000107c6157c(puVar2);
              func_0x000107c6157c(param_12);
              (*pcVar7)(0x1013fdb5c,puVar3,lVar1,lVar5);
              func_0x000107c61574(puVar2);
            }
          }
        }
        else {
          puVar2 = &UNK_1103b2590;
          func_0x000107c613fc(&UNK_1103b2590,0x18,7);
          func_0x000107c61614(puVar2 + 0x10);
          puVar3 = &UNK_1103b2608;
          func_0x000107c613fc(&UNK_1103b2608,0x28,7);
          *(undefined **)(puVar3 + 0x10) = puVar2;
          *(undefined8 *)(puVar3 + 0x18) = param_9;
          *(undefined8 *)(puVar3 + 0x20) = param_10;
          lVar4 = lVar5 + 0x20;
          func_0x000107c61618();
          if (lVar4 == 0) {
            func_0x000107c6157c(puVar2);
            func_0x000107c6157c(param_10);
            func_0x000107c61574(puVar2);
            func_0x000107c61574(puVar3);
            lVar4 = lVar5;
          }
          else {
            lVar5 = *(long *)(lVar5 + 0x28);
            lVar1 = lVar4;
            func_0x000107c614f0();
            pcVar7 = *(code **)(lVar5 + 0x10);
            func_0x000107c6157c(puVar2);
            func_0x000107c6157c(param_10);
            (*pcVar7)(FUN_1013fdb58,puVar3,lVar1,lVar5);
            func_0x000107c61574(puVar2);
          }
        }
      }
      else {
        puVar2 = &UNK_1103b2590;
        func_0x000107c613fc(&UNK_1103b2590,0x18,7);
        func_0x000107c61614(puVar2 + 0x10);
        puVar3 = &UNK_1103b25e0;
        func_0x000107c613fc(&UNK_1103b25e0,0x28,7);
        *(undefined **)(puVar3 + 0x10) = puVar2;
        *(undefined8 *)(puVar3 + 0x18) = param_7;
        *(undefined8 *)(puVar3 + 0x20) = param_8;
        lVar4 = lVar5 + 0x20;
        func_0x000107c61618();
        if (lVar4 == 0) {
          func_0x000107c6157c(puVar2);
          func_0x000107c6157c(param_8);
          func_0x000107c61574(puVar2);
          func_0x000107c61574(puVar3);
          lVar4 = lVar5;
        }
        else {
          lVar5 = *(long *)(lVar5 + 0x28);
          lVar1 = lVar4;
          func_0x000107c614f0();
          pcVar7 = *(code **)(lVar5 + 8);
          func_0x000107c6157c(puVar2);
          func_0x000107c6157c(param_8);
          (*pcVar7)(FUN_1013fd818,puVar3,lVar1,lVar5);
          func_0x000107c61574(puVar2);
        }
      }
    }
    else {
      puVar2 = &UNK_1103b2590;
      func_0x000107c613fc(&UNK_1103b2590,0x18,7);
      func_0x000107c61614(puVar2 + 0x10);
      puVar3 = &UNK_1103b25b8;
      func_0x000107c613fc(&UNK_1103b25b8,0x28,7);
      *(undefined **)(puVar3 + 0x10) = puVar2;
      *(undefined8 *)(puVar3 + 0x18) = param_5;
      *(undefined8 *)(puVar3 + 0x20) = param_6;
      lVar1 = lVar5 + 0x20;
      func_0x000107c61618();
      if (lVar1 == 0) {
        func_0x000107c615f0(lVar4);
        func_0x000107c6157c(puVar2);
        func_0x000107c6157c(param_6);
        func_0x000107c61574(puVar2);
        func_0x000107c61574(puVar3);
        lVar4 = lVar5;
      }
      else {
        lVar6 = *(long *)(lVar5 + 0x28);
        lVar5 = lVar1;
        func_0x000107c614f0();
        pcVar7 = *(code **)(lVar6 + 0x20);
        func_0x000107c615f0(lVar4);
        func_0x000107c6157c(puVar2);
        func_0x000107c6157c(param_6);
        (*pcVar7)(0x1013fd80c,puVar3,lVar5,lVar6);
        func_0x000107c61574(puVar2);
        lVar4 = lVar1;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar4);
    return;
  }
  return;
}



/* Entry: 1013fcc6c; end: 1013fce0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013fcc6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + _DAT_112d7c718);
    func_0x000107c4ffe8();
    func_0x000107c61180();
    if (lVar1 == 0) {
      func_0x000107c61170(param_1);
    }
    else {
      puVar2 = &UNK_1103b2658;
      func_0x000107c613fc(&UNK_1103b2658,0x20,7);
      *(undefined8 *)(puVar2 + 0x10) = param_2;
      *(undefined8 *)(puVar2 + 0x18) = param_3;
      pcStack_68 = FUN_1013fd860;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      puStack_78 = &UNK_1000b0c7c;
      puStack_70 = &UNK_1103b2670;
      ppuVar3 = &puStack_88;
      puStack_60 = puVar2;
      func_0x000107c60bc4(ppuVar3);
      puVar2 = puStack_60;
      func_0x000107c615f0(lVar1);
      func_0x000107c6157c(param_3);
      func_0x000107c61574(puVar2);
      func_0x000107c5e2a4(lVar1);
      func_0x000107c61170(param_1);
      func_0x000107c615e8(lVar1);
      func_0x000107c60bd0(ppuVar3);
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 1013fce10; end: 1013fcfe3; -[_TtC15COSServicesImplP33_9227AFA2038675FD77047A24746A31F024COSPasskeyEnrollmentView passkeyEnrollmentSucceededWithAttestationObject:clientDataJSON:onChallengeSucceed:onServerRetryableError:onServerNonRetryableError:onServerThrottledError:] */

/* WARNING: Possible PIC construction at 0x0001013fceb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013fcec8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013fceb4) */
/* WARNING: Removing unreachable block (ram,0x0001013fcecc) */

void FUN_1013fce10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  func_0x000107c60bc4(param_5);
  func_0x000107c60bc4(param_6);
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c5ee30(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1013fcfe4; end: 1013fd11b;  */

/* WARNING: Possible PIC construction at 0x0001013fd0cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013fd0e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013fd0d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013fcfe4(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112d7c750);
  if (lVar2 == 0) {
    return;
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_112d7c718);
  func_0x000107c615f0(lVar2);
  func_0x000107c4ffe8();
  func_0x000107c61180();
  if (lVar3 != 0) {
    puVar1 = &UNK_1103b2540;
    func_0x000107c613fc(&UNK_1103b2540,0x20,7);
    *(undefined8 *)(puVar1 + 0x10) = param_1;
    *(long *)(puVar1 + 0x18) = lVar2;
    uStack_50 = 0x1013fd804;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000b0c7c;
    puStack_58 = &UNK_1103b2558;
    puStack_48 = puVar1;
    func_0x000107c60bc4(&puStack_70);
    puVar1 = puStack_48;
    func_0x000107c615f0(lVar2);
    func_0x000107c615f0(lVar3);
    func_0x000107c614b0(param_1);
    func_0x000107c61574(puVar1);
    func_0x000107c5e2a4(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
  return;
}



/* Entry: 1013fd11c; end: 1013fd1df;  */

void FUN_1013fd11c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  lVar1 = param_1;
  func_0x000107c30ef0();
  func_0x000107c30f08();
  if (param_1 == 0) {
    uStack_40 = 0xed0000726f727265;
    uStack_48 = 0x206e776f6e6b6e55;
  }
  else {
    func_0x000107c614cc(param_1,auStack_38,auStack_50);
    func_0x000107c60640(uStack_48,uStack_40);
  }
  func_0x000107c5fadc();
  func_0x000107c6142c(uStack_40);
  func_0x000107c30ef8(lVar1,uStack_48);
  func_0x000107c61170(uStack_48);
  func_0x000107c4e5ec(param_2);
  func_0x000107c30ef4(lVar1);
  return;
}



/* Entry: 1013fd1e0; end: 1013fd363; -[_TtC15COSServicesImplP33_9227AFA2038675FD77047A24746A31F024COSPasskeyEnrollmentView passkeyEnrollmentFailedWithError:] */

/* WARNING: Possible PIC construction at 0x0001013fd214: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013fd218) */

void FUN_1013fd1e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  func_0x000107c61174(param_3);
  FUN_1013fcfe4(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1013fd364; end: 1013fd38b; -[_TtC15COSServicesImplP33_9227AFA2038675FD77047A24746A31F024COSPasskeyEnrollmentView passkeyEnrollmentSkipped] */

void FUN_1013fd364(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x0001013fd22c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1013fd38c; end: 1013fd4ab;  */

/* WARNING: Possible PIC construction at 0x0001013fd464: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013fd47c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013fd468) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013fd38c(void)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112d7c760);
  if (lVar2 == 0) {
    return;
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_112d7c718);
  func_0x000107c615f0(lVar2);
  func_0x000107c4ffe8();
  func_0x000107c61180();
  if (lVar3 != 0) {
    puVar1 = &UNK_1103b24a0;
    func_0x000107c613fc(&UNK_1103b24a0,0x18,7);
    *(long *)(puVar1 + 0x10) = lVar2;
    uStack_40 = 0x1013fd800;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000b0c7c;
    puStack_48 = &UNK_1103b24b8;
    puStack_38 = puVar1;
    func_0x000107c60bc4(&puStack_60);
    puVar1 = puStack_38;
    func_0x000107c615f0(lVar2);
    func_0x000107c615f0(lVar3);
    func_0x000107c61574(puVar1);
    func_0x000107c5e2a4(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
  return;
}



/* Entry: 1013fd4ac; end: 1013fd4d3; -[_TtC15COSServicesImplP33_9227AFA2038675FD77047A24746A31F024COSPasskeyEnrollmentView passkeyEnrollmentExited] */

void FUN_1013fd4ac(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1013fd38c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1013fd4d4; end: 1013fd533; -[_TtC15COSServicesImplP33_9227AFA2038675FD77047A24746A31F024COSPasskeyEnrollmentView initWithFrame:] */

void FUN_1013fd4d4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("COSServicesImpl.COSPasskeyEnrollmentView",0x28,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013fd500);
  (*pcVar1)();
}



/* Entry: 1013fd534; end: 1013fd66b; -[_TtC15COSServicesImplP33_9227AFA2038675FD77047A24746A31F024COSPasskeyEnrollmentView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001013fd5fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013fd638: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013fd600) */
/* WARNING: Removing unreachable block (ram,0x0001013fd63c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013fd534(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d7c718));
  FUN_100cb07d4(param_1 + _DAT_112d7c720);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d7c728 + 8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d7c730 + 8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d7c738));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d7c740));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d7c748));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d7c750));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d7c758));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d7c760));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112d7c778 + 8))
  ;
  return;
}



/* Entry: 1013fd66c; end: 1013fd68b;  */

void FUN_1013fd66c(void)

{
  func_0x000107c61168(&PTR_PTR_1127d2380);
  return;
}



/* Entry: 1013fd68c; end: 1013fd6cf; -[_TtC15COSServicesImplP33_9227AFA2038675FD77047A24746A31F030COSPasskeyChallengeEventLogger logUserCancelledEnrollment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013fd68c(long param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + _DAT_112d7c7d0);
  func_0x000107c61174();
  (*pcVar1)(0x11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1013fd6d0; end: 1013fd713; -[_TtC15COSServicesImplP33_9227AFA2038675FD77047A24746A31F030COSPasskeyChallengeEventLogger logUserRetriedEnrollment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013fd6d0(long param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + _DAT_112d7c7d8);
  func_0x000107c61174();
  (*pcVar1)(0x11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1013fd714; end: 1013fd773; -[_TtC15COSServicesImplP33_9227AFA2038675FD77047A24746A31F030COSPasskeyChallengeEventLogger init] */

void FUN_1013fd714(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("COSServicesImpl.COSPasskeyChallengeEventLogger",0x2e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013fd740);
  (*pcVar1)();
}



/* Entry: 1013fd774; end: 1013fd7b3; -[_TtC15COSServicesImplP33_9227AFA2038675FD77047A24746A31F030COSPasskeyChallengeEventLogger .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001013fd794: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013fd798) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013fd774(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d7c7d0 + 8));
  return;
}



/* Entry: 1013fd7b4; end: 1013fd7d3;  */

void FUN_1013fd7b4(void)

{
  func_0x000107c61168(&PTR_PTR_1127d2660);
  return;
}



/* Entry: 1013fd7d4; end: 1013fd817;  */

void FUN_1013fd7d4(long param_1,long param_2)

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


