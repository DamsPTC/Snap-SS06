/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1022db6ec; end: 1022db74f;  */

void FUN_1022db6ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = 0;
  FUN_1022dc008(0,param_3,param_4);
  func_0x000107c5fc54(param_2,uVar3);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1022db750; end: 1022dbbcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1022db750(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  long unaff_x20;
  long lVar14;
  long lVar15;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar7 = &puStack_80;
  ppuVar8 = &puStack_80;
  ppuVar9 = &puStack_80;
  ppuVar10 = &puStack_80;
  ppuVar11 = &puStack_80;
  ppuVar13 = &puStack_80;
  lVar14 = *(long *)(unaff_x20 + _DAT_112e7c660);
  FUN_1022cb244();
  lVar15 = *(long *)(unaff_x20 + _DAT_112e7c4f0);
  uVar2 = *(undefined8 *)(lVar15 + _DAT_113074cc8);
  func_0x000107c5cb24(uVar2);
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(lVar14 + _DAT_112e7c040);
  func_0x000107c5cb24(uVar3);
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126aa3c8;
  func_0x000107c610f8(PTR_PTR_1126aa3c8);
  func_0x000107c46b0c();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112e7c670);
  func_0x000107c5cb24(uVar2);
  func_0x000107c61180();
  func_0x000107c54e28(puVar4);
  func_0x000107c61170(uVar2);
  lVar5 = *(long *)(unaff_x20 + _DAT_112e7c518);
  func_0x000107c43d50();
  func_0x000107c61180();
  lVar14 = lVar5;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  if (lVar14 != 0) {
    lVar5 = lVar14;
    func_0x000107c43d4c(lVar14);
    func_0x000107c61180();
    func_0x000107c615e8(lVar14);
    lVar14 = lVar5;
    func_0x000107c5cb24(lVar5);
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
  }
  func_0x000107c54de0(puVar4);
  func_0x000107c61170(lVar14);
  puVar12 = &UNK_1104f22d8;
  puVar6 = puVar12;
  func_0x000107c613fc(&UNK_1104f22d8,0x18,7);
  func_0x000107c61614(puVar6 + 0x10);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_60 = FUN_1022dbd34;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = (code *)0x1022dc24c;
  puStack_68 = &UNK_1104f2c00;
  puStack_58 = puVar6;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puStack_58);
  func_0x000107c56d84(puVar4);
  func_0x000107c60bd0(ppuVar7);
  puVar6 = puVar12;
  func_0x000107c613fc(&UNK_1104f22d8,0x18,7);
  func_0x000107c61614(puVar6 + 0x10);
  pcStack_60 = (code *)0x1022dbd3c;
  puStack_80 = puVar1;
  uStack_78 = 0x42000000;
  pcStack_70 = (code *)0x1022dc238;
  puStack_68 = &UNK_1104f2c28;
  puStack_58 = puVar6;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puStack_58);
  func_0x000107c56c50(puVar4);
  func_0x000107c60bd0(ppuVar8);
  puVar6 = puVar12;
  func_0x000107c613fc(&UNK_1104f22d8,0x18,7);
  func_0x000107c61614(puVar6 + 0x10);
  pcStack_60 = (code *)0x1022dbd44;
  puStack_80 = puVar1;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_1022d8178;
  puStack_68 = &UNK_1104f2c50;
  puStack_58 = puVar6;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puStack_58);
  func_0x000107c56c90(puVar4);
  func_0x000107c60bd0(ppuVar9);
  puVar6 = puVar12;
  func_0x000107c613fc(&UNK_1104f22d8,0x18,7);
  func_0x000107c61614(puVar6 + 0x10);
  pcStack_60 = (code *)0x1022dbd4c;
  puStack_80 = puVar1;
  uStack_78 = 0x42000000;
  pcStack_70 = (code *)&UNK_1000f6b44;
  puStack_68 = &UNK_1104f2c78;
  puStack_58 = puVar6;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puStack_58);
  func_0x000107c56dc4(puVar4);
  func_0x000107c60bd0(ppuVar10);
  puVar6 = puVar12;
  func_0x000107c613fc(&UNK_1104f22d8,0x18,7);
  func_0x000107c61614(puVar6 + 0x10);
  pcStack_60 = (code *)0x1022dbd54;
  puStack_80 = puVar1;
  uStack_78 = 0x42000000;
  pcStack_70 = (code *)0x1022dc23c;
  puStack_68 = &UNK_1104f2ca0;
  puStack_58 = puVar6;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puStack_58);
  func_0x000107c56d60(puVar4);
  func_0x000107c60bd0(ppuVar11);
  uVar3 = *(undefined8 *)(lVar15 + _DAT_113074d28);
  func_0x000107c613fc(&UNK_1104f22d8,0x18,7);
  func_0x000107c61614(puVar12 + 0x10);
  pcStack_60 = FUN_1022dbd5c;
  puStack_80 = puVar1;
  uStack_78 = 0x42000000;
  pcStack_70 = (code *)0x1022dc240;
  puStack_68 = &UNK_1104f2cc8;
  puStack_58 = puVar12;
  func_0x000107c60bc4(&puStack_80);
  puVar12 = puStack_58;
  func_0x000107c61174(uVar3);
  func_0x000107c61574(puVar12);
  uVar2 = uVar3;
  func_0x000107c5c320(uVar3);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar13);
  func_0x000107c61170(uVar3);
  func_0x000107c3e924(uVar2);
  func_0x000107c61170(uVar2);
  return puVar4;
}



/* Entry: 1022dbbd0; end: 1022dbbef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022dbbd0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + _DAT_112e7c518);
    func_0x000107c43d50();
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = lVar3;
      func_0x000107c49e78(lVar3);
      func_0x000107c615e8(lVar3);
    }
    uVar4 = *(undefined8 *)(lVar1 + _DAT_112e7c528);
    func_0x000107c5fca0(lVar2);
    func_0x000107c4d664(uVar4);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 1022dbbf0; end: 1022dbc0f;  */

void FUN_1022dbbf0(void)

{
  FUN_1022d850c();
  return;
}



/* Entry: 1022dbc10; end: 1022dbc2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022dbc10(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + _DAT_112e7c5e0) == 0) {
      func_0x000107c61170();
    }
    else {
      func_0x000107c5de64(*(long *)(lVar1 + _DAT_112e7c5e0));
      func_0x000107c61180();
      func_0x000107c61170(lVar1);
    }
  }
  return;
}



/* Entry: 1022dbc30; end: 1022dbc4f;  */

void FUN_1022dbc30(void)

{
  FUN_1022d05e8();
  return;
}



/* Entry: 1022dbc50; end: 1022dbc5f;  */

void FUN_1022dbc50(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  puVar2 = &UNK_1104f28c8;
  func_0x000107c613fc(&UNK_1104f28c8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = 0x1022dbc58;
  *(undefined8 *)(puVar2 + 0x18) = unaff_x20;
  pcStack_50 = FUN_1022dbc60;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  uStack_60 = 0x101b54d8c;
  puStack_58 = &UNK_1104f28e0;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar4 = puStack_48;
  func_0x000107c6157c();
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar4);
  func_0x000107c4c5e4(param_1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61574();
  puVar4 = puVar2;
  func_0x000107c61544(puVar2,"",0x7d,0xf7,0x3b,1);
  func_0x000107c61574(puVar2);
  if (((ulong)puVar4 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1022d4798);
  (*pcVar1)();
}



/* Entry: 1022dbc60; end: 1022dbcbf;  */

void FUN_1022dbc60(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1022dbcc0; end: 1022dbd13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022dbcc0(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + _DAT_112e7c5e0);
    if (lVar1 != 0) {
      func_0x000107c615f0(lVar1);
      func_0x000107c504e8();
      func_0x000107c615e8(lVar1);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1022dbd14; end: 1022dbd33;  */

void FUN_1022dbd14(void)

{
  FUN_1022d6e70();
  return;
}



/* Entry: 1022dbd34; end: 1022dbd5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022dbd34(int param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = 0x14;
  if (param_1 != 1) {
    uVar1 = 0;
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar3 = lVar2 + _DAT_112e7c4e8;
    func_0x000107c61618();
    func_0x000107c61170(lVar2);
    if (lVar3 != 0) {
      uVar4 = *(undefined8 *)(*(long *)(lVar3 + _DAT_112e7c400) + _DAT_113074ca8);
      func_0x000103f2e0d4(0);
      func_0x000107c610f8();
      func_0x000107c615f4(uVar4,2);
      func_0x000107c615f0(lVar3);
      func_0x000103f2de64(uVar4,uVar4,lVar3,uVar1,0);
      *(undefined8 *)(lVar3 + _DAT_112e7c438) = uVar1;
      func_0x000107c42c1c(*(undefined8 *)(lVar3 + _DAT_112e7c428));
      func_0x000107c615e8(lVar3);
      func_0x000107c61170(uVar4);
    }
  }
  return;
}



/* Entry: 1022dbd5c; end: 1022dbd7b;  */

void FUN_1022dbd5c(void)

{
  FUN_1022d850c();
  return;
}



/* Entry: 1022dbd7c; end: 1022dbd93;  */

void FUN_1022dbd7c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  func_0x000107c5fc48(uVar2,PTR___sSSN_11034da80);
  func_0x000107c61428(lVar3 + 0x10,auStack_58,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  func_0x000107c4ab64(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(lVar3);
  return;
}



/* Entry: 1022dbd94; end: 1022dbdef;  */

void FUN_1022dbd94(code *param_1,code *param_2,code *param_3)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  (*param_2)(*(undefined8 *)(unaff_x20 + 0x20));
  (*param_3)(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1022dbdf0; end: 1022dbdfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022dbdf0(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  undefined *puVar5;
  long lVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined *puStack_68;
  
  puStack_68 = *(undefined **)(unaff_x20 + 0x18);
  uVar2 = *(ulong *)(unaff_x20 + 0x20);
  puVar3 = *(ulong **)(unaff_x20 + 0x28);
  if (param_1 == 0) {
    func_0x000100b60084(&puStack_68,param_2,*(undefined8 *)(unaff_x20 + 0x10));
  }
  else {
    func_0x000107c61174();
    func_0x000107c4a4c0();
    func_0x000107c49f9c();
    func_0x000107c44098();
    func_0x000107c61180();
    puVar5 = PTR__swift_isaMask_11034f488;
    puVar4 = puVar3;
    if ((uVar2 & 1) != 0) {
      (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar3) + 0x70))();
    }
    iVar1 = (int)puVar4;
    (**(code **)((*(ulong *)puVar5 & *puVar3) + 0x70))();
    (**(code **)((*(ulong *)puVar5 & *puVar3) + 0x78))();
    puVar5 = PTR_PTR_1126aa3d0;
    func_0x000107c610f8();
    func_0x000107c46c7c((double)iVar1);
    lVar6 = ((undefined8 *)((long)puVar3 + _DAT_113036378))[1];
    if (lVar6 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)((long)puVar3 + _DAT_113036378);
      func_0x000107c61434(lVar6);
      func_0x000107c5fadc(uVar7,lVar6);
      func_0x000107c6142c(lVar6);
    }
    func_0x000107c54bbc(puVar5);
    func_0x000107c61170(uVar7);
    puStack_68 = puVar5;
    func_0x000100b60084(&puStack_68);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1022dbdfc; end: 1022dbe2b;  */

void FUN_1022dbdfc(code *param_1)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1022dbe2c; end: 1022dbe8f;  */

void FUN_1022dbe2c(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x150;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1022dbe90;
  plVar3[0x25] = lVar1;
  plVar3[0x26] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1022d8970,0,0);
  return;
}



/* Entry: 1022dbe90; end: 1022dbecb;  */

void FUN_1022dbe90(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001022dbec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1022dbecc; end: 1022dbeeb;  */

/* WARNING: Possible PIC construction at 0x0001022d886c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022d8870) */
/* WARNING: Removing unreachable block (ram,0x0001022d8898) */
/* WARNING: Removing unreachable block (ram,0x0001022d8874) */

void FUN_1022dbecc(void)

{
  undefined8 uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  bVar2 = *(byte *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar3 = PTR_PTR_1126afde0;
  func_0x000107c61168(PTR_PTR_1126afde0,uVar4,uVar1,*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c5fadc(uVar4,uVar1);
  if ((bVar2 & 1) == 0) {
    func_0x000107c40b14(puVar3);
  }
  else {
    func_0x000107c409d8();
  }
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 1022dbeec; end: 1022dbf03;  */

void FUN_1022dbeec(long param_1)

{
  FUN_1022dbf04(param_1 + 0x20);
  return;
}



/* Entry: 1022dbf04; end: 1022dbf5f;  */

void FUN_1022dbf04(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001022dbf18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 1022dbf60; end: 1022dbf7f;  */

void FUN_1022dbf60(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1022dbf80; end: 1022dbf8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022dbf80(undefined1 *param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  long unaff_x20;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_78,0,0);
  lVar5 = unaff_x20 + 0x10;
  func_0x000107c61618();
  lVar3 = _DAT_112e7c558;
  if (lVar5 != 0) {
    puVar13 = auStack_90;
    func_0x000107c61428(lVar5 + _DAT_112e7c558,puVar13,1,0);
    uVar6 = *(undefined8 *)(lVar5 + lVar3);
    *(undefined1 **)(lVar5 + lVar3) = param_1;
    func_0x000107c6142c(uVar6);
    puVar16 = (undefined1 *)((ulong)param_1 & 0xffffffffffffff8);
    if ((ulong)param_1 >> 0x3e == 0) {
      puVar15 = *(undefined1 **)(puVar16 + 0x10);
    }
    else {
      puVar15 = puVar16;
      if ((undefined1 *)0x7fffffffffffffff < param_1) {
        puVar15 = param_1;
      }
      func_0x000107c60480();
    }
    func_0x000107c61434(param_1);
    puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar15 != (undefined1 *)0x0) {
      puVar9 = (undefined1 *)0x0;
      do {
        while( true ) {
          if (((ulong)param_1 & 0xc000000000000001) == 0) {
            if (*(undefined1 **)(puVar16 + 0x10) <= puVar9) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1022d9760);
              (*pcVar4)();
            }
            puVar7 = *(undefined1 **)(param_1 + (long)puVar9 * 8 + 0x20);
            func_0x000107c61174();
            puVar14 = puVar13;
          }
          else {
            puVar7 = puVar9;
            puVar14 = param_1;
            func_0x0001022cd0e8();
          }
          puVar1 = puVar9 + 1;
          if (SCARRY8((long)puVar9,1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1022d975c);
            (*pcVar4)();
          }
          puVar8 = puVar7;
          func_0x000107c3df48();
          func_0x000107c61180();
          if (puVar8 != (undefined1 *)0x0) break;
          func_0x000107c61170(puVar7);
          puVar13 = puVar14;
          puVar9 = puVar9 + 1;
          if (puVar1 == puVar15) goto LAB_1022d9720;
        }
        puVar9 = puVar8;
        func_0x000107c5faec();
        puVar13 = puVar14;
        func_0x000107c61170(puVar8);
        func_0x000107c61170(puVar7);
        puVar10 = puVar12;
        func_0x000107c61558();
        puVar11 = puVar12;
        if (((ulong)puVar10 & 1) == 0) {
          puVar13 = (undefined1 *)(*(long *)(puVar12 + 0x10) + 1);
          puVar11 = (undefined *)0x0;
          func_0x0001000d182c(0,puVar13,1,puVar12);
        }
        uVar2 = *(ulong *)(puVar11 + 0x10);
        puVar7 = (undefined1 *)(uVar2 + 1);
        puVar12 = puVar11;
        if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar2) {
          puVar12 = (undefined *)(ulong)(1 < *(ulong *)(puVar11 + 0x18));
          puVar13 = puVar7;
          func_0x0001000d182c(puVar12,puVar7,1,puVar11);
        }
        *(undefined1 **)(puVar12 + 0x10) = puVar7;
        *(undefined1 **)(puVar12 + uVar2 * 0x10 + 0x20) = puVar9;
        *(undefined1 **)(puVar12 + uVar2 * 0x10 + 0x28) = puVar14;
        puVar9 = puVar1;
      } while (puVar1 != puVar15);
    }
LAB_1022d9720:
    FUN_1022d9774(puVar12);
    func_0x000107c61170(lVar5);
    func_0x000107c6142c(puVar12);
  }
  return;
}



/* Entry: 1022dbf90; end: 1022dbfb7;  */

void FUN_1022dbf90(void)

{
  long unaff_x20;
  
  FUN_1022d4b80(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 1022dbfb8; end: 1022dbfcf;  */

void FUN_1022dbfb8(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x48);
  func_0x000107c61428(lVar2 + 0x10,auStack_78,0,0);
  uVar5 = *(undefined8 *)(lVar2 + 0x10);
  uVar3 = uVar5;
  func_0x000107c61434(uVar5);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar5);
  func_0x000107c61428(lVar4 + 0x10,auStack_90,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  func_0x000107c4ab64(uVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(lVar4);
  return;
}



/* Entry: 1022dbfd0; end: 1022dc007;  */

void FUN_1022dbfd0(void)

{
  long unaff_x20;
  
  FUN_1022da620(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined1 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 1022dc008; end: 1022dc047;  */

void FUN_1022dc008(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1022dc048; end: 1022dc25b;  */

void FUN_1022dc048(long param_1,long param_2)

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



/* Entry: 1022dc25c; end: 1022dc283; -[_TtC32SCGenAIDreamsScopeImplementation35GenAIDreamsTrackedThumbnailNotifier observe] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022dc25c(long param_1)

{
  func_0x000107c5cb24(*(undefined8 *)(param_1 + _DAT_112e7c710));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1022dc284; end: 1022dc2fb; -[_TtC32SCGenAIDreamsScopeImplementation35GenAIDreamsTrackedThumbnailNotifier notifyWithThumbnailView:playbackItemId:] */

void FUN_1022dc284(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  if (param_4 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_4);
  }
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1022dc400(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1022dc2fc; end: 1022dc36f; -[_TtC32SCGenAIDreamsScopeImplementation35GenAIDreamsTrackedThumbnailNotifier init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022dc2fc(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  func_0x000107c614f0();
  lVar2 = _DAT_112e7c710;
  puVar4 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_1 + lVar2) = puVar4;
  puVar1 = (undefined8 *)(param_1 + _DAT_112e7c718);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_40 = param_1;
  lStack_38 = lVar3;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1022dc370; end: 1022dc3a3;  */

void FUN_1022dc370(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1022dc3a4; end: 1022dc3df; -[_TtC32SCGenAIDreamsScopeImplementation35GenAIDreamsTrackedThumbnailNotifier .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022dc3a4(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e7c710));
  if (*(long *)(param_1 + _DAT_112e7c718) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_112e7c718))[1]);
    return;
  }
  return;
}



/* Entry: 1022dc3e0; end: 1022dc3ff;  */

void FUN_1022dc3e0(void)

{
  func_0x000107c61168(&PTR_PTR_1128344d8);
  return;
}



/* Entry: 1022dc400; end: 1022dc4d3;  */

/* WARNING: Possible PIC construction at 0x0001022dc458: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022dc4ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022dc45c) */
/* WARNING: Removing unreachable block (ram,0x0001022dc4b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022dc400(long param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  code *pcVar2;
  
  if (param_1 != 0) {
    func_0x000107c61174();
    func_0x000107c30e2c();
    func_0x000107c61180();
    pcVar2 = *(code **)(unaff_x20 + _DAT_112e7c718);
    if (pcVar2 != (code *)0x0) {
      func_0x000107c6157c(((undefined8 *)(unaff_x20 + _DAT_112e7c718))[1]);
      (*pcVar2)(param_1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
  pcVar2 = *(code **)(unaff_x20 + _DAT_112e7c718);
  if (pcVar2 == (code *)0x0) {
    return;
  }
  uVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e7c718))[1];
  func_0x000107c6157c(uVar1);
  (*pcVar2)(0);
  if (pcVar2 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 1022dc4d4; end: 1022dc4e3;  */

void FUN_1022dc4d4(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 1022dc4e4; end: 1022dc867;  */

undefined * FUN_1022dc4e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  undefined1 auStack_1d8 [376];
  
  lVar6 = param_1;
  uVar11 = param_2;
  func_0x00010011df08();
  func_0x000107c61180();
  uVar10 = uVar11;
  lVar1 = lVar6;
  if (lVar6 == 0) {
    func_0x000107c5faec();
    uVar10 = uVar11;
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar11);
  }
  func_0x000107c5faec();
  lVar2 = lVar6;
  uVar11 = uVar10;
  func_0x0001022dca04();
  lVar3 = lVar2;
  uVar12 = uVar11;
  func_0x0001022dcad0();
  lVar4 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  puVar13 = auStack_1d8;
  func_0x000107c61534();
  *(undefined8 *)(lVar4 + 0x18) = 0xe;
  *(undefined8 *)(lVar4 + 0x10) = 7;
  ppuVar5 = &PTR____CFConstantStringClassReference_110e12538;
  func_0x000107c5faec();
  *(undefined8 *)(lVar4 + 0x20) = ppuVar5;
  puVar9 = PTR___sSSN_11034da80;
  *(undefined **)(lVar4 + 0x48) = PTR___sSSN_11034da80;
  *(undefined1 **)(lVar4 + 0x28) = puVar13;
  *(long *)(lVar4 + 0x30) = lVar6;
  *(undefined8 *)(lVar4 + 0x38) = uVar10;
  ppuVar5 = &PTR____CFConstantStringClassReference_110dad058;
  func_0x000107c5faec();
  *(undefined ***)(lVar4 + 0x50) = ppuVar5;
  *(undefined1 **)(lVar4 + 0x58) = puVar13;
  *(undefined **)(lVar4 + 0x78) = puVar9;
  *(undefined8 *)(lVar4 + 0x60) = 0xd00000000000001a;
  *(undefined8 *)(lVar4 + 0x68) = 0x800000010f081770;
  ppuVar5 = &PTR____CFConstantStringClassReference_110f9f0b8;
  func_0x000107c5faec();
  *(undefined ***)(lVar4 + 0x80) = ppuVar5;
  *(undefined1 **)(lVar4 + 0x88) = puVar13;
  *(undefined **)(lVar4 + 0xa8) = puVar9;
  *(long *)(lVar4 + 0x90) = param_1;
  *(undefined8 *)(lVar4 + 0x98) = param_2;
  ppuVar5 = &PTR____CFConstantStringClassReference_110f9f0d8;
  func_0x000107c5faec();
  *(undefined ***)(lVar4 + 0xb0) = ppuVar5;
  *(undefined1 **)(lVar4 + 0xb8) = puVar13;
  *(undefined **)(lVar4 + 0xd8) = puVar9;
  *(undefined8 *)(lVar4 + 0xc0) = param_3;
  *(undefined8 *)(lVar4 + 200) = param_4;
  ppuVar5 = &PTR____CFConstantStringClassReference_110dad0b8;
  func_0x000107c5faec();
  *(undefined ***)(lVar4 + 0xe0) = ppuVar5;
  *(undefined1 **)(lVar4 + 0xe8) = puVar13;
  *(undefined **)(lVar4 + 0x108) = puVar9;
  *(long *)(lVar4 + 0xf0) = lVar2;
  *(undefined8 *)(lVar4 + 0xf8) = uVar11;
  ppuVar5 = &PTR____CFConstantStringClassReference_110dad858;
  func_0x000107c5faec();
  *(undefined ***)(lVar4 + 0x110) = ppuVar5;
  *(undefined1 **)(lVar4 + 0x118) = puVar13;
  *(undefined **)(lVar4 + 0x138) = puVar9;
  *(long *)(lVar4 + 0x120) = lVar3;
  *(undefined8 *)(lVar4 + 0x128) = uVar12;
  ppuVar5 = &PTR____CFConstantStringClassReference_110e12eb8;
  func_0x000107c5faec();
  *(undefined ***)(lVar4 + 0x140) = ppuVar5;
  *(undefined1 **)(lVar4 + 0x148) = puVar13;
  func_0x000107c61434(uVar10);
  func_0x000107c61434(param_2);
  func_0x000107c61434(param_4);
  func_0x000107c61434(uVar11);
  func_0x000107c61434(uVar12);
  lVar6 = 0x15;
  func_0x000107fcbeb0();
  func_0x000107c61180();
  if (lVar6 == 0) {
    *(undefined **)(lVar4 + 0x168) = puVar9;
  }
  else {
    lVar7 = lVar6;
    func_0x000107c5faec();
    func_0x000107c61170(lVar6);
    *(undefined **)(lVar4 + 0x168) = puVar9;
    if (puVar13 != (undefined1 *)0x0) {
      *(long *)(lVar4 + 0x150) = lVar7;
      goto LAB_1022dc710;
    }
  }
  *(undefined8 *)(lVar4 + 0x150) = 0;
  puVar13 = (undefined1 *)0xe000000000000000;
LAB_1022dc710:
  *(undefined1 **)(lVar4 + 0x158) = puVar13;
  lVar6 = lVar4;
  func_0x000100214a84(lVar4);
  func_0x000107c61588(lVar4);
  uVar8 = 0x112d4b5f0;
  func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
  func_0x000107c61408((undefined8 *)(lVar4 + 0x20),7,uVar8);
  func_0x000107c6142c(uVar10);
  puVar9 = PTR_PTR_1126b2c50;
  func_0x000107c61168(PTR_PTR_1126b2c50);
  uVar10 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f081770);
  func_0x000107c5fadc(lVar2,uVar11);
  func_0x000107c6142c(uVar11);
  func_0x000107c5fadc(lVar3,uVar12);
  func_0x000107c6142c(uVar12);
  lVar4 = lVar6;
  func_0x00010018cc3c(lVar6);
  func_0x000107c6142c(lVar6);
  lVar6 = lVar4;
  func_0x000107c5f9dc(lVar4,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c6142c(lVar4);
  func_0x000107c4525c(puVar9);
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar6);
  return puVar9;
}



/* Entry: 1022dc868; end: 1022dcb9f;  */

undefined1  [16] FUN_1022dc868(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffd1;
  func_0x000107c5fadc(0xd00000000000002f,0x800000010f0819f0);
  uVar3 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010da87050);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1022dc934);
  (*pcVar1)();
}



/* Entry: 1022dcba0; end: 1022dcbbf;  */

undefined1  [16] FUN_1022dcba0(void)

{
  return ZEXT816(0x1104f3138);
}



/* Entry: 1022dcbc0; end: 1022dcd47;  */

undefined1 FUN_1022dcbc0(void)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e7c790,auStack_38,0,0);
  return uRam0000000112e7c790;
}



/* Entry: 1022dcd48; end: 1022dcd57;  */

undefined1  [16] FUN_1022dcd48(void)

{
  undefined1 auVar1 [16];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e7c9d0,auStack_38,0,0);
  auVar1._8_8_ = uRam0000000112e7c9d8;
  auVar1._0_8_ = uRam0000000112e7c9d0;
  func_0x000107c61434(uRam0000000112e7c9d8);
  return auVar1;
}



/* Entry: 1022dcd58; end: 1022dce67;  */

undefined1  [16] FUN_1022dcd58(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1,auStack_38,0,0);
  uVar2 = *param_1;
  uVar1 = *param_2;
  func_0x000107c61434(uVar1);
  auVar3._8_8_ = uVar1;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Entry: 1022dce68; end: 1022dce7b;  */

bool FUN_1022dce68(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1022dce7c; end: 1022dd053;  */

void FUN_1022dce7c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 uVar5;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar4 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar1 = 0x636e797361;
  if (cVar4 != '\x01') {
    uVar1 = 0x636e7973;
  }
  uVar2 = 0xe500000000000000;
  if (cVar4 != '\x01') {
    uVar2 = 0xe400000000000000;
  }
  uVar3 = 0xeb00000000646569;
  uVar5 = 0x6669636570736e75;
  if (cVar4 != '\0') {
    uVar3 = uVar2;
    uVar5 = uVar1;
  }
  func_0x000107c5fb58(auStack_68,uVar5,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c606a8();
  return;
}



/* Entry: 1022dd054; end: 1022dd107;  */

void FUN_1022dd054(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 uVar5;
  char *unaff_x20;
  
  cVar4 = *unaff_x20;
  uVar1 = 0x636e797361;
  if (cVar4 != '\x01') {
    uVar1 = 0x636e7973;
  }
  uVar2 = 0xe500000000000000;
  if (cVar4 != '\x01') {
    uVar2 = 0xe400000000000000;
  }
  uVar3 = 0xeb00000000646569;
  uVar5 = 0x6669636570736e75;
  if (cVar4 != '\0') {
    uVar3 = uVar2;
    uVar5 = uVar1;
  }
  *param_1 = uVar5;
  param_1[1] = uVar3;
  return;
}



/* Entry: 1022dd108; end: 1022dd1ab;  */

void FUN_1022dd108(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112e7cad8;
  func_0x0001000285a8(0x112e7cad8,&UNK_10da870d0);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 1022dd1ac; end: 1022dd1af;  */

void FUN_1022dd1ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e7cae0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da870d8;
  func_0x000107c61520(&UNK_10da870d8,&UNK_1104f3288);
  puRam0000000112e7cae0 = puVar1;
  return;
}



/* Entry: 1022dd1b0; end: 1022dd1ef;  */

void FUN_1022dd1b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e7cae0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da870d8;
  func_0x000107c61520(&UNK_10da870d8,&UNK_1104f3288);
  puRam0000000112e7cae0 = puVar1;
  return;
}



/* Entry: 1022dd1f0; end: 1022dd21b;  */

void FUN_1022dd1f0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1022dd21c();
  *(long *)(param_1 + 8) = lVar1;
  func_0x0001022dd25c();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1022dd21c; end: 1022dd29b;  */

void FUN_1022dd21c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e7cae8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da871a0;
  func_0x000107c61520(&UNK_10da871a0,&UNK_1104f3288);
  puRam0000000112e7cae8 = puVar1;
  return;
}



/* Entry: 1022dd29c; end: 1022dd29f;  */

void FUN_1022dd29c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112e7caf8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e7cb00;
  func_0x00010002969c(0x112e7cb00,&UNK_10da87198);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112e7caf8 = puVar2;
  return;
}



/* Entry: 1022dd2a0; end: 1022dd2ef;  */

void FUN_1022dd2a0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112e7caf8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e7cb00;
  func_0x00010002969c(0x112e7cb00,&UNK_10da87198);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112e7caf8 = puVar2;
  return;
}



/* Entry: 1022dd2f0; end: 1022dd463;  */

undefined1  [16] FUN_1022dd2f0(void)

{
  return ZEXT816(0x1104f31f8);
}



/* Entry: 1022dd464; end: 1022dd4a3;  */

undefined1 FUN_1022dd464(void)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e7c890,auStack_38,0,0);
  return uRam0000000112e7c890;
}



/* Entry: 1022dd4a4; end: 1022dd523; -[_TtC19SCGenAIDreamsTweaks25SCGenAIDreamsTweaksBridge shouldClearNewPackBadgeState] */

undefined1 FUN_1022dd4a4(void)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e7c890,auStack_38,0,0);
  return uRam0000000112e7c890;
}



/* Entry: 1022dd524; end: 1022dd5a3; -[_TtC19SCGenAIDreamsTweaks25SCGenAIDreamsTweaksBridge shouldClearNewPackSnapsBottomBannerState] */

undefined1 FUN_1022dd524(void)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e7c8d0,auStack_38,0,0);
  return uRam0000000112e7c8d0;
}



/* Entry: 1022dd5a4; end: 1022dd633; -[_TtC19SCGenAIDreamsTweaks25SCGenAIDreamsTweaksBridge shouldClearNewPackDreamsTopBannerState] */

undefined1 FUN_1022dd5a4(void)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e7c910,auStack_38,0,0);
  return uRam0000000112e7c910;
}



/* Entry: 1022dd634; end: 1022dd6cf; -[_TtC19SCGenAIDreamsTweaks25SCGenAIDreamsTweaksBridge genAIDreamsRouteTag] */

void FUN_1022dd634(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e7c748,auStack_38,0,0);
  uVar1 = uRam0000000112e7c750;
  uVar2 = uRam0000000112e7c748;
  func_0x000107c61434(uRam0000000112e7c750);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1022dd6d0; end: 1022dd7c3; +[_TtC19SCGenAIDreamsTweaks25SCGenAIDreamsTweaksBridge resetMySelfieOnboardedObserver] */

void FUN_1022dd6d0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_70 [24];
  undefined8 auStack_58 [7];
  
  func_0x000107c61428(0x112e7c950,auStack_70,0x21,0);
  func_0x0001000285a8(0x112d7ecb0,&UNK_10d93cd50);
  func_0x0001040ac72c(auStack_58);
  func_0x000107c614a8(auStack_70);
  func_0x000107c6157c(auStack_58[0]);
  FUN_1021fe580(auStack_58);
  uVar1 = 0;
  func_0x0001002ed07c(0);
  uVar2 = 0x1022dd698;
  func_0x0001000bfde0(0x1022dd698,0,uVar1);
  func_0x000107c61574(auStack_58[0]);
  uVar1 = auStack_58[0];
  func_0x0001004575f0();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1022dd7c4; end: 1022dd803; -[_TtC19SCGenAIDreamsTweaks25SCGenAIDreamsTweaksBridge aiSnapsM4EnableDebugMode] */

undefined1 FUN_1022dd7c4(void)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e7c990,auStack_38,0,0);
  return uRam0000000112e7c990;
}



/* Entry: 1022dd804; end: 1022dd823;  */

void FUN_1022dd804(void)

{
  func_0x000107c61168(&PTR_PTR_112834598);
  return;
}



/* Entry: 1022dd824; end: 1022dd85f; -[_TtC19SCGenAIDreamsTweaks25SCGenAIDreamsTweaksBridge init] */

void FUN_1022dd824(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_1022dd804();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1022dd860; end: 1022dd88f;  */

void FUN_1022dd860(void)

{
  FUN_1022dd804();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1022dd890; end: 1022dd8fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022dd890(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1022ddc84();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e7cbd8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1022dd8fc; end: 1022dd967;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022dd8fc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e7cbd8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1022dd968; end: 1022dd9c7; -[_TtC35PreviewScopedFactoryServiceProvider23SCPreviewScopedServices init] */

void FUN_1022dd968(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PreviewScopedFactoryServiceProvider.SCPreviewScopedServices",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1022dd994);
  (*pcVar1)();
}



/* Entry: 1022dd9c8; end: 1022dd9d7; -[_TtC35PreviewScopedFactoryServiceProvider23SCPreviewScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022dd9c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e7cbd8));
  return;
}



/* Entry: 1022dd9d8; end: 1022dda43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022dd9d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104f34e8;
  func_0x000107c613fc(&UNK_1104f34e8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1022ddd60,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1022dda44; end: 1022ddadf;  */

void FUN_1022dda44(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1104f33f8;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104f33f8;
  return;
}



/* Entry: 1022ddae0; end: 1022ddb17;  */

void FUN_1022ddae0(long *param_1)

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



/* Entry: 1022ddb18; end: 1022ddb1f;  */

undefined8 FUN_1022ddb18(void)

{
  return 0x1b;
}



/* Entry: 1022ddb20; end: 1022ddc53;  */

void FUN_1022ddb20(undefined8 *param_1)

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
  puVar1 = &UNK_1104f3510;
  func_0x000107c613fc(&UNK_1104f3510,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1022ddd38;
  func_0x00010058fa64(FUN_1022ddd38,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1022ddc54; end: 1022ddc83;  */

undefined ** FUN_1022ddc54(void)

{
  return &PTR_DAT_112ff5d28;
}



/* Entry: 1022ddc84; end: 1022ddca3;  */

void FUN_1022ddc84(void)

{
  func_0x000107c61168(&PTR_PTR_112834670);
  return;
}



/* Entry: 1022ddca4; end: 1022ddcf3;  */

undefined1  [16] FUN_1022ddca4(void)

{
  return ZEXT816(0x1104f3448);
}



/* Entry: 1022ddcf4; end: 1022ddd37;  */

void FUN_1022ddcf4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e7cc40 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126c83f8;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112e7cc40 = puVar1;
  return;
}



/* Entry: 1022ddd38; end: 1022ddd5f;  */

void FUN_1022ddd38(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1022ddd60; end: 1022ddd63;  */

void FUN_1022ddd60(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1022ddd64; end: 1022df30b;  */

/* WARNING: Possible PIC construction at 0x0001022deb6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022deb7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022deb8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022deb9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022debac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022debbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022debcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022debdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022debec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022debfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022dec0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022dec1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022dec2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022dec3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022dec4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022dec5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022dec6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022dec7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022dec8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022dec9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022decac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022decbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022deccc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022decdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022decec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022decfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022ded0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022ded1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022ded2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022ded3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022ded4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022ded5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022ded6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022ded7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022ded8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022ded9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022dedac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022dedbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022dedcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022deddc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022dedec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022dedfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022dee0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022dee1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022dee2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022dee3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022dee4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022dee5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022dee6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022dee7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022dee8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022dee9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022deeac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022deebc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022deecc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022deedc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022deeec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022deefc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022def0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022def1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022def2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022def3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022def4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022def5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022def6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022def7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022def8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022def9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022defac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022defbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022defcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022defdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022defec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022deffc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022df00c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022df01c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022df02c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022df03c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022df04c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022df05c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022df06c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022df07c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022df08c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022df09c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022df0ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022df0bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022df0cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022df0dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022df0ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022df0fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022df10c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022df11c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022df12c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022df13c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022df14c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022df15c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022df16c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022df17c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022df18c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022df19c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022df1ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022df1bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022df1cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022df1dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022df1ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022df1fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022df20c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022df21c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022df22c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022df23c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022df24c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022df25c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022df26c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022df27c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022df28c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022df29c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022df2ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022df2bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022df2cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022df2dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022df2d0) */
/* WARNING: Removing unreachable block (ram,0x0001022df2c0) */
/* WARNING: Removing unreachable block (ram,0x0001022df2b0) */
/* WARNING: Removing unreachable block (ram,0x0001022df2a0) */
/* WARNING: Removing unreachable block (ram,0x0001022df290) */
/* WARNING: Removing unreachable block (ram,0x0001022df280) */
/* WARNING: Removing unreachable block (ram,0x0001022df270) */
/* WARNING: Removing unreachable block (ram,0x0001022df260) */
/* WARNING: Removing unreachable block (ram,0x0001022df250) */
/* WARNING: Removing unreachable block (ram,0x0001022df240) */
/* WARNING: Removing unreachable block (ram,0x0001022df230) */
/* WARNING: Removing unreachable block (ram,0x0001022df220) */
/* WARNING: Removing unreachable block (ram,0x0001022df210) */
/* WARNING: Removing unreachable block (ram,0x0001022df200) */
/* WARNING: Removing unreachable block (ram,0x0001022df1f0) */
/* WARNING: Removing unreachable block (ram,0x0001022df1e0) */
/* WARNING: Removing unreachable block (ram,0x0001022df1d0) */
/* WARNING: Removing unreachable block (ram,0x0001022df1c0) */
/* WARNING: Removing unreachable block (ram,0x0001022df1b0) */
/* WARNING: Removing unreachable block (ram,0x0001022df1a0) */
/* WARNING: Removing unreachable block (ram,0x0001022df190) */
/* WARNING: Removing unreachable block (ram,0x0001022df180) */
/* WARNING: Removing unreachable block (ram,0x0001022df170) */
/* WARNING: Removing unreachable block (ram,0x0001022df160) */
/* WARNING: Removing unreachable block (ram,0x0001022df150) */
/* WARNING: Removing unreachable block (ram,0x0001022df140) */
/* WARNING: Removing unreachable block (ram,0x0001022df130) */
/* WARNING: Removing unreachable block (ram,0x0001022df120) */
/* WARNING: Removing unreachable block (ram,0x0001022df110) */
/* WARNING: Removing unreachable block (ram,0x0001022df100) */
/* WARNING: Removing unreachable block (ram,0x0001022df0f0) */
/* WARNING: Removing unreachable block (ram,0x0001022df0e0) */
/* WARNING: Removing unreachable block (ram,0x0001022df0d0) */
/* WARNING: Removing unreachable block (ram,0x0001022df0c0) */
/* WARNING: Removing unreachable block (ram,0x0001022df0b0) */
/* WARNING: Removing unreachable block (ram,0x0001022df0a0) */
/* WARNING: Removing unreachable block (ram,0x0001022df090) */
/* WARNING: Removing unreachable block (ram,0x0001022df080) */
/* WARNING: Removing unreachable block (ram,0x0001022df070) */
/* WARNING: Removing unreachable block (ram,0x0001022df060) */
/* WARNING: Removing unreachable block (ram,0x0001022df050) */
/* WARNING: Removing unreachable block (ram,0x0001022df040) */
/* WARNING: Removing unreachable block (ram,0x0001022df030) */
/* WARNING: Removing unreachable block (ram,0x0001022df020) */
/* WARNING: Removing unreachable block (ram,0x0001022df010) */
/* WARNING: Removing unreachable block (ram,0x0001022df000) */
/* WARNING: Removing unreachable block (ram,0x0001022deff0) */
/* WARNING: Removing unreachable block (ram,0x0001022defe0) */
/* WARNING: Removing unreachable block (ram,0x0001022defd0) */
/* WARNING: Removing unreachable block (ram,0x0001022defc0) */
/* WARNING: Removing unreachable block (ram,0x0001022defb0) */
/* WARNING: Removing unreachable block (ram,0x0001022defa0) */
/* WARNING: Removing unreachable block (ram,0x0001022def90) */
/* WARNING: Removing unreachable block (ram,0x0001022def80) */
/* WARNING: Removing unreachable block (ram,0x0001022def70) */
/* WARNING: Removing unreachable block (ram,0x0001022def60) */
/* WARNING: Removing unreachable block (ram,0x0001022def50) */
/* WARNING: Removing unreachable block (ram,0x0001022def40) */
/* WARNING: Removing unreachable block (ram,0x0001022def30) */
/* WARNING: Removing unreachable block (ram,0x0001022def20) */
/* WARNING: Removing unreachable block (ram,0x0001022def10) */
/* WARNING: Removing unreachable block (ram,0x0001022def00) */
/* WARNING: Removing unreachable block (ram,0x0001022deef0) */
/* WARNING: Removing unreachable block (ram,0x0001022deee0) */
/* WARNING: Removing unreachable block (ram,0x0001022deed0) */
/* WARNING: Removing unreachable block (ram,0x0001022deec0) */
/* WARNING: Removing unreachable block (ram,0x0001022deeb0) */
/* WARNING: Removing unreachable block (ram,0x0001022deea0) */
/* WARNING: Removing unreachable block (ram,0x0001022dee90) */
/* WARNING: Removing unreachable block (ram,0x0001022dee80) */
/* WARNING: Removing unreachable block (ram,0x0001022dee70) */
/* WARNING: Removing unreachable block (ram,0x0001022dee60) */
/* WARNING: Removing unreachable block (ram,0x0001022dee50) */
/* WARNING: Removing unreachable block (ram,0x0001022dee40) */
/* WARNING: Removing unreachable block (ram,0x0001022dee30) */
/* WARNING: Removing unreachable block (ram,0x0001022dee20) */
/* WARNING: Removing unreachable block (ram,0x0001022dee10) */
/* WARNING: Removing unreachable block (ram,0x0001022dee00) */
/* WARNING: Removing unreachable block (ram,0x0001022dedf0) */
/* WARNING: Removing unreachable block (ram,0x0001022dede0) */
/* WARNING: Removing unreachable block (ram,0x0001022dedd0) */
/* WARNING: Removing unreachable block (ram,0x0001022dedc0) */
/* WARNING: Removing unreachable block (ram,0x0001022dedb0) */
/* WARNING: Removing unreachable block (ram,0x0001022deda0) */
/* WARNING: Removing unreachable block (ram,0x0001022ded90) */
/* WARNING: Removing unreachable block (ram,0x0001022ded80) */
/* WARNING: Removing unreachable block (ram,0x0001022ded70) */
/* WARNING: Removing unreachable block (ram,0x0001022ded60) */
/* WARNING: Removing unreachable block (ram,0x0001022ded50) */
/* WARNING: Removing unreachable block (ram,0x0001022ded40) */
/* WARNING: Removing unreachable block (ram,0x0001022ded30) */
/* WARNING: Removing unreachable block (ram,0x0001022ded20) */
/* WARNING: Removing unreachable block (ram,0x0001022ded10) */
/* WARNING: Removing unreachable block (ram,0x0001022ded00) */
/* WARNING: Removing unreachable block (ram,0x0001022decf0) */
/* WARNING: Removing unreachable block (ram,0x0001022dece0) */
/* WARNING: Removing unreachable block (ram,0x0001022decd0) */
/* WARNING: Removing unreachable block (ram,0x0001022decc0) */
/* WARNING: Removing unreachable block (ram,0x0001022decb0) */
/* WARNING: Removing unreachable block (ram,0x0001022deca0) */
/* WARNING: Removing unreachable block (ram,0x0001022dec90) */
/* WARNING: Removing unreachable block (ram,0x0001022dec80) */
/* WARNING: Removing unreachable block (ram,0x0001022dec70) */
/* WARNING: Removing unreachable block (ram,0x0001022dec60) */
/* WARNING: Removing unreachable block (ram,0x0001022dec50) */
/* WARNING: Removing unreachable block (ram,0x0001022dec40) */
/* WARNING: Removing unreachable block (ram,0x0001022dec30) */
/* WARNING: Removing unreachable block (ram,0x0001022dec20) */
/* WARNING: Removing unreachable block (ram,0x0001022dec10) */
/* WARNING: Removing unreachable block (ram,0x0001022dec00) */
/* WARNING: Removing unreachable block (ram,0x0001022debf0) */
/* WARNING: Removing unreachable block (ram,0x0001022debe0) */
/* WARNING: Removing unreachable block (ram,0x0001022debd0) */
/* WARNING: Removing unreachable block (ram,0x0001022debc0) */
/* WARNING: Removing unreachable block (ram,0x0001022debb0) */
/* WARNING: Removing unreachable block (ram,0x0001022deba0) */
/* WARNING: Removing unreachable block (ram,0x0001022deb90) */
/* WARNING: Removing unreachable block (ram,0x0001022deb80) */
/* WARNING: Removing unreachable block (ram,0x0001022deb70) */
/* WARNING: Removing unreachable block (ram,0x0001022df2e0) */

void FUN_1022ddd64(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
                  undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
                  undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
                  undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
                  undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
                  undefined8 param_61,undefined8 param_62,undefined8 param_63,undefined8 param_64,
                  undefined8 param_65,undefined8 param_66,undefined8 param_67,undefined8 param_68,
                  undefined8 param_69,undefined8 param_70,undefined8 param_71)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 in_stack_000001f0;
  undefined8 in_stack_000001f8;
  undefined8 in_stack_00000200;
  undefined8 in_stack_00000208;
  undefined8 in_stack_00000210;
  undefined8 in_stack_00000218;
  undefined8 in_stack_00000220;
  undefined8 in_stack_00000228;
  undefined8 in_stack_00000230;
  undefined8 in_stack_00000238;
  undefined8 in_stack_00000240;
  undefined8 in_stack_00000248;
  undefined8 in_stack_00000250;
  undefined8 in_stack_00000258;
  undefined8 in_stack_00000260;
  undefined8 in_stack_00000268;
  undefined8 in_stack_00000270;
  undefined8 in_stack_00000278;
  undefined8 in_stack_00000280;
  undefined8 in_stack_00000288;
  undefined8 in_stack_00000290;
  undefined8 in_stack_00000298;
  undefined8 in_stack_000002a0;
  undefined8 in_stack_000002a8;
  undefined8 in_stack_000002b0;
  undefined8 in_stack_000002b8;
  undefined8 in_stack_000002c0;
  undefined8 in_stack_000002c8;
  undefined8 in_stack_000002d0;
  undefined8 in_stack_000002d8;
  undefined8 in_stack_000002e0;
  undefined8 in_stack_000002e8;
  undefined8 in_stack_000002f0;
  undefined8 in_stack_000002f8;
  undefined8 in_stack_00000300;
  undefined8 in_stack_00000308;
  undefined8 in_stack_00000310;
  undefined8 in_stack_00000318;
  undefined8 in_stack_00000320;
  undefined8 in_stack_00000328;
  undefined8 in_stack_00000330;
  undefined8 in_stack_00000338;
  undefined8 in_stack_00000340;
  undefined8 in_stack_00000348;
  undefined8 in_stack_00000350;
  undefined8 in_stack_00000358;
  undefined8 in_stack_00000360;
  undefined8 in_stack_00000368;
  undefined8 in_stack_00000370;
  undefined8 in_stack_00000378;
  undefined8 in_stack_00000380;
  undefined8 in_stack_00000388;
  undefined8 in_stack_00000390;
  undefined8 in_stack_00000398;
  undefined8 in_stack_000003a0;
  undefined8 in_stack_000003a8;
  undefined8 in_stack_000003b0;
  undefined8 in_stack_000003b8;
  undefined8 in_stack_000003c0;
  undefined8 in_stack_000003c8;
  undefined8 in_stack_000003d0;
  undefined8 in_stack_000003d8;
  undefined8 in_stack_000003e0;
  undefined8 in_stack_000003e8;
  undefined8 in_stack_000003f0;
  undefined8 in_stack_000003f8;
  undefined8 in_stack_00000400;
  undefined8 in_stack_00000408;
  undefined8 in_stack_00000410;
  undefined8 in_stack_00000418;
  undefined8 in_stack_00000420;
  undefined8 in_stack_00000428;
  undefined8 in_stack_00000430;
  undefined8 in_stack_00000438;
  undefined8 in_stack_00000440;
  undefined8 in_stack_00000448;
  undefined8 in_stack_00000450;
  undefined8 in_stack_00000458;
  undefined8 in_stack_00000460;
  undefined8 in_stack_00000468;
  undefined8 in_stack_00000470;
  undefined8 in_stack_00000478;
  undefined8 in_stack_00000480;
  undefined8 in_stack_00000488;
  undefined8 in_stack_00000490;
  undefined8 in_stack_00000498;
  undefined8 in_stack_000004a0;
  undefined8 in_stack_000004a8;
  undefined8 in_stack_000004b0;
  undefined8 in_stack_000004b8;
  undefined8 in_stack_000004c0;
  undefined8 in_stack_000004c8;
  undefined8 in_stack_000004d0;
  undefined8 in_stack_000004d8;
  undefined8 in_stack_000004e0;
  undefined8 in_stack_000004e8;
  undefined8 in_stack_000004f0;
  undefined8 in_stack_000004f8;
  undefined8 in_stack_00000500;
  undefined8 in_stack_00000508;
  undefined8 in_stack_00000510;
  undefined8 in_stack_00000518;
  undefined8 in_stack_00000520;
  undefined8 in_stack_00000528;
  undefined8 in_stack_00000530;
  undefined8 in_stack_00000538;
  undefined8 in_stack_00000540;
  undefined8 in_stack_00000548;
  undefined8 in_stack_00000550;
  undefined8 in_stack_00000558;
  undefined8 in_stack_00000560;
  undefined8 in_stack_00000568;
  undefined8 in_stack_00000570;
  undefined8 in_stack_00000578;
  undefined8 in_stack_00000580;
  undefined8 in_stack_00000588;
  undefined8 in_stack_00000590;
  undefined8 in_stack_00000598;
  undefined8 in_stack_000005a0;
  undefined8 in_stack_000005a8;
  undefined8 in_stack_000005b0;
  undefined8 in_stack_000005b8;
  undefined8 in_stack_000005c0;
  undefined8 in_stack_000005c8;
  undefined8 in_stack_000005d0;
  undefined8 in_stack_000005d8;
  undefined8 in_stack_000005e0;
  undefined8 in_stack_000005e8;
  undefined8 in_stack_000005f0;
  undefined8 in_stack_000005f8;
  undefined8 in_stack_00000600;
  undefined8 in_stack_00000608;
  undefined8 in_stack_00000610;
  undefined8 in_stack_00000618;
  undefined8 in_stack_00000620;
  undefined8 in_stack_00000628;
  undefined8 in_stack_00000630;
  undefined8 in_stack_00000638;
  undefined8 in_stack_00000640;
  undefined8 in_stack_00000648;
  undefined8 in_stack_00000650;
  undefined8 in_stack_00000658;
  undefined8 in_stack_00000660;
  undefined8 in_stack_00000668;
  undefined8 in_stack_00000670;
  undefined8 in_stack_00000678;
  undefined8 in_stack_00000680;
  undefined8 in_stack_00000688;
  undefined8 in_stack_00000690;
  undefined8 in_stack_00000698;
  undefined8 in_stack_000006a0;
  undefined8 in_stack_000006a8;
  undefined8 in_stack_000006b0;
  undefined8 in_stack_000006b8;
  undefined8 in_stack_000006c0;
  undefined8 in_stack_000006c8;
  undefined8 in_stack_000006d0;
  undefined8 in_stack_000006d8;
  undefined8 in_stack_000006e0;
  undefined8 in_stack_000006e8;
  undefined8 in_stack_000006f0;
  undefined8 in_stack_000006f8;
  undefined8 in_stack_00000700;
  undefined8 in_stack_00000708;
  undefined8 in_stack_00000710;
  undefined8 in_stack_00000718;
  undefined8 in_stack_00000720;
  undefined8 in_stack_00000728;
  undefined8 in_stack_00000730;
  undefined8 in_stack_00000738;
  undefined8 in_stack_00000740;
  
  puVar1 = &UNK_1104f3598;
  func_0x000107c613fc(&UNK_1104f3598,0x798,7);
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
  *(undefined8 *)(puVar1 + 0xf0) = param_30;
  *(undefined8 *)(puVar1 + 0xf8) = param_31;
  *(undefined8 *)(puVar1 + 0x100) = param_32;
  *(undefined8 *)(puVar1 + 0x108) = param_33;
  *(undefined8 *)(puVar1 + 0x110) = param_34;
  *(undefined8 *)(puVar1 + 0x118) = param_35;
  *(undefined8 *)(puVar1 + 0x120) = param_36;
  *(undefined8 *)(puVar1 + 0x128) = param_37;
  *(undefined8 *)(puVar1 + 0x130) = param_38;
  *(undefined8 *)(puVar1 + 0x138) = param_39;
  *(undefined8 *)(puVar1 + 0x140) = param_40;
  *(undefined8 *)(puVar1 + 0x148) = param_41;
  *(undefined8 *)(puVar1 + 0x150) = param_42;
  *(undefined8 *)(puVar1 + 0x158) = param_43;
  *(undefined8 *)(puVar1 + 0x160) = param_44;
  *(undefined8 *)(puVar1 + 0x168) = param_45;
  *(undefined8 *)(puVar1 + 0x170) = param_46;
  *(undefined8 *)(puVar1 + 0x178) = param_47;
  *(undefined8 *)(puVar1 + 0x180) = param_48;
  *(undefined8 *)(puVar1 + 0x188) = param_49;
  *(undefined8 *)(puVar1 + 400) = param_50;
  *(undefined8 *)(puVar1 + 0x198) = param_51;
  *(undefined8 *)(puVar1 + 0x1a0) = param_52;
  *(undefined8 *)(puVar1 + 0x1a8) = param_53;
  *(undefined8 *)(puVar1 + 0x1b0) = param_54;
  *(undefined8 *)(puVar1 + 0x1b8) = param_55;
  *(undefined8 *)(puVar1 + 0x1c0) = param_56;
  *(undefined8 *)(puVar1 + 0x1c8) = param_57;
  *(undefined8 *)(puVar1 + 0x1d0) = param_58;
  *(undefined8 *)(puVar1 + 0x1d8) = param_59;
  *(undefined8 *)(puVar1 + 0x1e0) = param_60;
  *(undefined8 *)(puVar1 + 0x1e8) = param_61;
  *(undefined8 *)(puVar1 + 0x1f0) = param_62;
  *(undefined8 *)(puVar1 + 0x1f8) = param_63;
  *(undefined8 *)(puVar1 + 0x200) = param_64;
  *(undefined8 *)(puVar1 + 0x208) = param_65;
  *(undefined8 *)(puVar1 + 0x210) = param_66;
  *(undefined8 *)(puVar1 + 0x218) = param_67;
  *(undefined8 *)(puVar1 + 0x220) = param_68;
  *(undefined8 *)(puVar1 + 0x228) = param_69;
  *(undefined8 *)(puVar1 + 0x230) = param_70;
  *(undefined8 *)(puVar1 + 0x238) = param_71;
  *(undefined8 *)(puVar1 + 0x240) = in_stack_000001f0;
  *(undefined8 *)(puVar1 + 0x248) = in_stack_000001f8;
  *(undefined8 *)(puVar1 + 0x250) = in_stack_00000200;
  *(undefined8 *)(puVar1 + 600) = in_stack_00000208;
  *(undefined8 *)(puVar1 + 0x260) = in_stack_00000210;
  *(undefined8 *)(puVar1 + 0x268) = in_stack_00000218;
  *(undefined8 *)(puVar1 + 0x270) = in_stack_00000220;
  *(undefined8 *)(puVar1 + 0x278) = in_stack_00000228;
  *(undefined8 *)(puVar1 + 0x280) = in_stack_00000230;
  *(undefined8 *)(puVar1 + 0x288) = in_stack_00000238;
  *(undefined8 *)(puVar1 + 0x290) = in_stack_00000240;
  *(undefined8 *)(puVar1 + 0x298) = in_stack_00000248;
  *(undefined8 *)(puVar1 + 0x2a0) = in_stack_00000250;
  *(undefined8 *)(puVar1 + 0x2a8) = in_stack_00000258;
  *(undefined8 *)(puVar1 + 0x2b0) = in_stack_00000260;
  *(undefined8 *)(puVar1 + 0x2b8) = in_stack_00000268;
  *(undefined8 *)(puVar1 + 0x2c0) = in_stack_00000270;
  *(undefined8 *)(puVar1 + 0x2c8) = in_stack_00000278;
  *(undefined8 *)(puVar1 + 0x2d0) = in_stack_00000280;
  *(undefined8 *)(puVar1 + 0x2d8) = in_stack_00000288;
  *(undefined8 *)(puVar1 + 0x2e0) = in_stack_00000290;
  *(undefined8 *)(puVar1 + 0x2e8) = in_stack_00000298;
  *(undefined8 *)(puVar1 + 0x2f0) = in_stack_000002a0;
  *(undefined8 *)(puVar1 + 0x2f8) = in_stack_000002a8;
  *(undefined8 *)(puVar1 + 0x300) = in_stack_000002b0;
  *(undefined8 *)(puVar1 + 0x308) = in_stack_000002b8;
  *(undefined8 *)(puVar1 + 0x310) = in_stack_000002c0;
  *(undefined8 *)(puVar1 + 0x318) = in_stack_000002c8;
  *(undefined8 *)(puVar1 + 800) = in_stack_000002d0;
  *(undefined8 *)(puVar1 + 0x328) = in_stack_000002d8;
  *(undefined8 *)(puVar1 + 0x330) = in_stack_000002e0;
  *(undefined8 *)(puVar1 + 0x338) = in_stack_000002e8;
  *(undefined8 *)(puVar1 + 0x340) = in_stack_000002f0;
  *(undefined8 *)(puVar1 + 0x348) = in_stack_000002f8;
  *(undefined8 *)(puVar1 + 0x350) = in_stack_00000300;
  *(undefined8 *)(puVar1 + 0x358) = in_stack_00000308;
  *(undefined8 *)(puVar1 + 0x360) = in_stack_00000310;
  *(undefined8 *)(puVar1 + 0x368) = in_stack_00000318;
  *(undefined8 *)(puVar1 + 0x370) = in_stack_00000320;
  *(undefined8 *)(puVar1 + 0x378) = in_stack_00000328;
  *(undefined8 *)(puVar1 + 0x380) = in_stack_00000330;
  *(undefined8 *)(puVar1 + 0x388) = in_stack_00000338;
  *(undefined8 *)(puVar1 + 0x390) = in_stack_00000340;
  *(undefined8 *)(puVar1 + 0x398) = in_stack_00000348;
  *(undefined8 *)(puVar1 + 0x3a0) = in_stack_00000350;
  *(undefined8 *)(puVar1 + 0x3a8) = in_stack_00000358;
  *(undefined8 *)(puVar1 + 0x3b0) = in_stack_00000360;
  *(undefined8 *)(puVar1 + 0x3b8) = in_stack_00000368;
  *(undefined8 *)(puVar1 + 0x3c0) = in_stack_00000370;
  *(undefined8 *)(puVar1 + 0x3c8) = in_stack_00000378;
  *(undefined8 *)(puVar1 + 0x3d0) = in_stack_00000380;
  *(undefined8 *)(puVar1 + 0x3d8) = in_stack_00000388;
  *(undefined8 *)(puVar1 + 0x3e0) = in_stack_00000390;
  *(undefined8 *)(puVar1 + 1000) = in_stack_00000398;
  *(undefined8 *)(puVar1 + 0x3f0) = in_stack_000003a0;
  *(undefined8 *)(puVar1 + 0x3f8) = in_stack_000003a8;
  *(undefined8 *)(puVar1 + 0x400) = in_stack_000003b0;
  *(undefined8 *)(puVar1 + 0x408) = in_stack_000003b8;
  *(undefined8 *)(puVar1 + 0x410) = in_stack_000003c0;
  *(undefined8 *)(puVar1 + 0x418) = in_stack_000003c8;
  *(undefined8 *)(puVar1 + 0x420) = in_stack_000003d0;
  *(undefined8 *)(puVar1 + 0x428) = in_stack_000003d8;
  *(undefined8 *)(puVar1 + 0x430) = in_stack_000003e0;
  *(undefined8 *)(puVar1 + 0x438) = in_stack_000003e8;
  *(undefined8 *)(puVar1 + 0x440) = in_stack_000003f0;
  *(undefined8 *)(puVar1 + 0x448) = in_stack_000003f8;
  *(undefined8 *)(puVar1 + 0x450) = in_stack_00000400;
  *(undefined8 *)(puVar1 + 0x458) = in_stack_00000408;
  *(undefined8 *)(puVar1 + 0x460) = in_stack_00000410;
  *(undefined8 *)(puVar1 + 0x468) = in_stack_00000418;
  *(undefined8 *)(puVar1 + 0x470) = in_stack_00000420;
  *(undefined8 *)(puVar1 + 0x478) = in_stack_00000428;
  *(undefined8 *)(puVar1 + 0x480) = in_stack_00000430;
  *(undefined8 *)(puVar1 + 0x488) = in_stack_00000438;
  *(undefined8 *)(puVar1 + 0x490) = in_stack_00000440;
  *(undefined8 *)(puVar1 + 0x498) = in_stack_00000448;
  *(undefined8 *)(puVar1 + 0x4a0) = in_stack_00000450;
  *(undefined8 *)(puVar1 + 0x4a8) = in_stack_00000458;
  *(undefined8 *)(puVar1 + 0x4b0) = in_stack_00000460;
  *(undefined8 *)(puVar1 + 0x4b8) = in_stack_00000468;
  *(undefined8 *)(puVar1 + 0x4c0) = in_stack_00000470;
  *(undefined8 *)(puVar1 + 0x4c8) = in_stack_00000478;
  *(undefined8 *)(puVar1 + 0x4d0) = in_stack_00000480;
  *(undefined8 *)(puVar1 + 0x4d8) = in_stack_00000488;
  *(undefined8 *)(puVar1 + 0x4e0) = in_stack_00000490;
  *(undefined8 *)(puVar1 + 0x4e8) = in_stack_00000498;
  *(undefined8 *)(puVar1 + 0x4f0) = in_stack_000004a0;
  *(undefined8 *)(puVar1 + 0x4f8) = in_stack_000004a8;
  *(undefined8 *)(puVar1 + 0x500) = in_stack_000004b0;
  *(undefined8 *)(puVar1 + 0x508) = in_stack_000004b8;
  *(undefined8 *)(puVar1 + 0x510) = in_stack_000004c0;
  *(undefined8 *)(puVar1 + 0x518) = in_stack_000004c8;
  *(undefined8 *)(puVar1 + 0x520) = in_stack_000004d0;
  *(undefined8 *)(puVar1 + 0x528) = in_stack_000004d8;
  *(undefined8 *)(puVar1 + 0x530) = in_stack_000004e0;
  *(undefined8 *)(puVar1 + 0x538) = in_stack_000004e8;
  *(undefined8 *)(puVar1 + 0x540) = in_stack_000004f0;
  *(undefined8 *)(puVar1 + 0x548) = in_stack_000004f8;
  *(undefined8 *)(puVar1 + 0x550) = in_stack_00000500;
  *(undefined8 *)(puVar1 + 0x558) = in_stack_00000508;
  *(undefined8 *)(puVar1 + 0x560) = in_stack_00000510;
  *(undefined8 *)(puVar1 + 0x568) = in_stack_00000518;
  *(undefined8 *)(puVar1 + 0x570) = in_stack_00000520;
  *(undefined8 *)(puVar1 + 0x578) = in_stack_00000528;
  *(undefined8 *)(puVar1 + 0x580) = in_stack_00000530;
  *(undefined8 *)(puVar1 + 0x588) = in_stack_00000538;
  *(undefined8 *)(puVar1 + 0x590) = in_stack_00000540;
  *(undefined8 *)(puVar1 + 0x598) = in_stack_00000548;
  *(undefined8 *)(puVar1 + 0x5a0) = in_stack_00000550;
  *(undefined8 *)(puVar1 + 0x5a8) = in_stack_00000558;
  *(undefined8 *)(puVar1 + 0x5b0) = in_stack_00000560;
  *(undefined8 *)(puVar1 + 0x5b8) = in_stack_00000568;
  *(undefined8 *)(puVar1 + 0x5c0) = in_stack_00000570;
  *(undefined8 *)(puVar1 + 0x5c8) = in_stack_00000578;
  *(undefined8 *)(puVar1 + 0x5d0) = in_stack_00000580;
  *(undefined8 *)(puVar1 + 0x5d8) = in_stack_00000588;
  *(undefined8 *)(puVar1 + 0x5e0) = in_stack_00000590;
  *(undefined8 *)(puVar1 + 0x5e8) = in_stack_00000598;
  *(undefined8 *)(puVar1 + 0x5f0) = in_stack_000005a0;
  *(undefined8 *)(puVar1 + 0x5f8) = in_stack_000005a8;
  *(undefined8 *)(puVar1 + 0x600) = in_stack_000005b0;
  *(undefined8 *)(puVar1 + 0x608) = in_stack_000005b8;
  *(undefined8 *)(puVar1 + 0x610) = in_stack_000005c0;
  *(undefined8 *)(puVar1 + 0x618) = in_stack_000005c8;
  *(undefined8 *)(puVar1 + 0x620) = in_stack_000005d0;
  *(undefined8 *)(puVar1 + 0x628) = in_stack_000005d8;
  *(undefined8 *)(puVar1 + 0x630) = in_stack_000005e0;
  *(undefined8 *)(puVar1 + 0x638) = in_stack_000005e8;
  *(undefined8 *)(puVar1 + 0x640) = in_stack_000005f0;
  *(undefined8 *)(puVar1 + 0x648) = in_stack_000005f8;
  *(undefined8 *)(puVar1 + 0x650) = in_stack_00000600;
  *(undefined8 *)(puVar1 + 0x658) = in_stack_00000608;
  *(undefined8 *)(puVar1 + 0x660) = in_stack_00000610;
  *(undefined8 *)(puVar1 + 0x668) = in_stack_00000618;
  *(undefined8 *)(puVar1 + 0x670) = in_stack_00000620;
  *(undefined8 *)(puVar1 + 0x678) = in_stack_00000628;
  *(undefined8 *)(puVar1 + 0x680) = in_stack_00000630;
  *(undefined8 *)(puVar1 + 0x688) = in_stack_00000638;
  *(undefined8 *)(puVar1 + 0x690) = in_stack_00000640;
  *(undefined8 *)(puVar1 + 0x698) = in_stack_00000648;
  *(undefined8 *)(puVar1 + 0x6a0) = in_stack_00000650;
  *(undefined8 *)(puVar1 + 0x6a8) = in_stack_00000658;
  *(undefined8 *)(puVar1 + 0x6b0) = in_stack_00000660;
  *(undefined8 *)(puVar1 + 0x6b8) = in_stack_00000668;
  *(undefined8 *)(puVar1 + 0x6c0) = in_stack_00000670;
  *(undefined8 *)(puVar1 + 0x6c8) = in_stack_00000678;
  *(undefined8 *)(puVar1 + 0x6d0) = in_stack_00000680;
  *(undefined8 *)(puVar1 + 0x6d8) = in_stack_00000688;
  *(undefined8 *)(puVar1 + 0x6e0) = in_stack_00000690;
  *(undefined8 *)(puVar1 + 0x6e8) = in_stack_00000698;
  *(undefined8 *)(puVar1 + 0x6f0) = in_stack_000006a0;
  *(undefined8 *)(puVar1 + 0x6f8) = in_stack_000006a8;
  *(undefined8 *)(puVar1 + 0x700) = in_stack_000006b0;
  *(undefined8 *)(puVar1 + 0x708) = in_stack_000006b8;
  *(undefined8 *)(puVar1 + 0x710) = in_stack_000006c0;
  *(undefined8 *)(puVar1 + 0x718) = in_stack_000006c8;
  *(undefined8 *)(puVar1 + 0x720) = in_stack_000006d0;
  *(undefined8 *)(puVar1 + 0x728) = in_stack_000006d8;
  *(undefined8 *)(puVar1 + 0x730) = in_stack_000006e0;
  *(undefined8 *)(puVar1 + 0x738) = in_stack_000006e8;
  *(undefined8 *)(puVar1 + 0x740) = in_stack_000006f0;
  *(undefined8 *)(puVar1 + 0x748) = in_stack_000006f8;
  *(undefined8 *)(puVar1 + 0x750) = in_stack_00000700;
  *(undefined8 *)(puVar1 + 0x758) = in_stack_00000708;
  *(undefined8 *)(puVar1 + 0x760) = in_stack_00000710;
  *(undefined8 *)(puVar1 + 0x768) = in_stack_00000718;
  *(undefined8 *)(puVar1 + 0x770) = in_stack_00000720;
  *(undefined8 *)(puVar1 + 0x778) = in_stack_00000728;
  *(undefined8 *)(puVar1 + 0x780) = in_stack_00000730;
  *(undefined8 *)(puVar1 + 0x788) = in_stack_00000738;
  *(undefined8 *)(puVar1 + 0x790) = in_stack_00000740;
  uVar2 = 0x112e7cc50;
  func_0x0001000285a8(0x112e7cc50,&UNK_10da87498);
  func_0x000107c613fc();
  pcVar3 = FUN_1022ecbd0;
  func_0x0001000841fc(FUN_1022ecbd0,puVar1,uVar2);
  func_0x000100084214(&UNK_10da87470,0x25,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1022df30c; end: 1022df8af;  */

void FUN_1022df30c(void)

{
  long unaff_x20;
  
  FUN_1022ddd64(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                *(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138),
                *(undefined8 *)(unaff_x20 + 0x140),*(undefined8 *)(unaff_x20 + 0x148),
                *(undefined8 *)(unaff_x20 + 0x150),*(undefined8 *)(unaff_x20 + 0x158),
                *(undefined8 *)(unaff_x20 + 0x160),*(undefined8 *)(unaff_x20 + 0x168),
                *(undefined8 *)(unaff_x20 + 0x170),*(undefined8 *)(unaff_x20 + 0x178),
                *(undefined8 *)(unaff_x20 + 0x180),*(undefined8 *)(unaff_x20 + 0x188),
                *(undefined8 *)(unaff_x20 + 400),*(undefined8 *)(unaff_x20 + 0x198),
                *(undefined8 *)(unaff_x20 + 0x1a0),*(undefined8 *)(unaff_x20 + 0x1a8),
                *(undefined8 *)(unaff_x20 + 0x1b0),*(undefined8 *)(unaff_x20 + 0x1b8),
                *(undefined8 *)(unaff_x20 + 0x1c0),*(undefined8 *)(unaff_x20 + 0x1c8),
                *(undefined8 *)(unaff_x20 + 0x1d0),*(undefined8 *)(unaff_x20 + 0x1d8),
                *(undefined8 *)(unaff_x20 + 0x1e0),*(undefined8 *)(unaff_x20 + 0x1e8),
                *(undefined8 *)(unaff_x20 + 0x1f0),*(undefined8 *)(unaff_x20 + 0x1f8),
                *(undefined8 *)(unaff_x20 + 0x200),*(undefined8 *)(unaff_x20 + 0x208),
                *(undefined8 *)(unaff_x20 + 0x210),*(undefined8 *)(unaff_x20 + 0x218),
                *(undefined8 *)(unaff_x20 + 0x220),*(undefined8 *)(unaff_x20 + 0x228),
                *(undefined8 *)(unaff_x20 + 0x230),*(undefined8 *)(unaff_x20 + 0x238));
  return;
}



/* Entry: 1022df8b0; end: 1022df8bf;  */

undefined1  [16] FUN_1022df8b0(void)

{
  return ZEXT816(0x1104f3578);
}



/* Entry: 1022ec42c; end: 1022ecbcf;  */

void FUN_1022ec42c(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x168));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x170));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x178));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x180));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x188));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x198));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x208));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x210));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x218));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x220));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x228));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x230));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x238));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x240));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x248));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x250));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 600));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x260));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x268));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x270));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x278));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x280));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x288));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x290));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x298));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x300));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x308));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x310));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x318));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 800));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x328));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x330));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x338));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x340));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x348));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x350));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x358));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x360));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x368));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x370));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x378));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x380));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x388));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x390));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x398));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 1000));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x408));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x410));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x418));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x420));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x428));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x430));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x438));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x440));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x448));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x450));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x458));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x460));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x468));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x470));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x478));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x480));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x488));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x490));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x498));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x500));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x508));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x510));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x518));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x520));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x528));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x530));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x538));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x540));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x548));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x550));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x558));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x560));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x568));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x570));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x578));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x580));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x588));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x590));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x598));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x600));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x608));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x610));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x618));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x620));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x628));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x630));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x638));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x640));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x648));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x650));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x658));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x660));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x668));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x670));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x678));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x680));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x688));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x690));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x698));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x700));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x708));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x710));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x718));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x720));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x728));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x730));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x738));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x740));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x748));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x750));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x758));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x760));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x768));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x770));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x778));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x780));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x788));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x790));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1022ecbd0; end: 1022ed5ab;  */

void FUN_1022ecbd0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1022df8c0(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                *(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138),
                *(undefined8 *)(unaff_x20 + 0x140),*(undefined8 *)(unaff_x20 + 0x148),
                *(undefined8 *)(unaff_x20 + 0x150),*(undefined8 *)(unaff_x20 + 0x158),
                *(undefined8 *)(unaff_x20 + 0x160),*(undefined8 *)(unaff_x20 + 0x168),
                *(undefined8 *)(unaff_x20 + 0x170),*(undefined8 *)(unaff_x20 + 0x178),
                *(undefined8 *)(unaff_x20 + 0x180),*(undefined8 *)(unaff_x20 + 0x188),
                *(undefined8 *)(unaff_x20 + 400),*(undefined8 *)(unaff_x20 + 0x198),
                *(undefined8 *)(unaff_x20 + 0x1a0),*(undefined8 *)(unaff_x20 + 0x1a8),
                *(undefined8 *)(unaff_x20 + 0x1b0),*(undefined8 *)(unaff_x20 + 0x1b8),
                *(undefined8 *)(unaff_x20 + 0x1c0),*(undefined8 *)(unaff_x20 + 0x1c8),
                *(undefined8 *)(unaff_x20 + 0x1d0),*(undefined8 *)(unaff_x20 + 0x1d8),
                *(undefined8 *)(unaff_x20 + 0x1e0),*(undefined8 *)(unaff_x20 + 0x1e8),
                *(undefined8 *)(unaff_x20 + 0x1f0),*(undefined8 *)(unaff_x20 + 0x1f8),
                *(undefined8 *)(unaff_x20 + 0x200),*(undefined8 *)(unaff_x20 + 0x208),
                *(undefined8 *)(unaff_x20 + 0x210),*(undefined8 *)(unaff_x20 + 0x218),
                *(undefined8 *)(unaff_x20 + 0x220),*(undefined8 *)(unaff_x20 + 0x228),
                *(undefined8 *)(unaff_x20 + 0x230));
  return;
}



/* Entry: 1022ed5ac; end: 1022ed9e3;  */

void FUN_1022ed5ac(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  FUN_1022f0340();
  func_0x000107c613fc();
  uVar1 = 0;
  func_0x00010368ebe4();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  func_0x00010368eab0();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uStack_48);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1022ed9e4; end: 1022eda27;  */

void FUN_1022ed9e4(void)

{
  long unaff_x20;
  
  FUN_1022f1de8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80));
  return;
}



/* Entry: 1022eda28; end: 1022edadf;  */

void FUN_1022eda28(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  FUN_1022f2cc0();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_1022f2bb4(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 1022edae0; end: 1022edb3b;  */

void FUN_1022edae0(void)

{
  long unaff_x20;
  
  FUN_10232ba40(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                *(undefined8 *)(unaff_x20 + 0xf0));
  return;
}



/* Entry: 1022edb3c; end: 1022edca3;  */

void FUN_1022edb3c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x100);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1022edca4; end: 1022edcdf;  */

void FUN_1022edca4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1022edce0; end: 1022edcf3;  */

void FUN_1022edce0(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  FUN_10230f764();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_10230f49c(uStack_48,uStack_50,uStack_58,uStack_60);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  func_0x000107c61170(uStack_60);
  *param_1 = uVar1;
  return;
}



/* Entry: 1022edcf4; end: 1022edd37;  */

void FUN_1022edcf4(void)

{
  long unaff_x20;
  
  FUN_102326bc0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88));
  return;
}



/* Entry: 1022edd38; end: 1022ede23;  */

void FUN_1022edd38(void)

{
  long unaff_x20;
  
  FUN_10232de40(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 1022ede24; end: 1022ede67;  */

void FUN_1022ede24(void)

{
  long unaff_x20;
  
  FUN_102329e00(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90));
  return;
}



/* Entry: 1022ede68; end: 1022edeab;  */

void FUN_1022ede68(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x60);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1022edeac; end: 1022edf07;  */

void FUN_1022edeac(void)

{
  long unaff_x20;
  
  FUN_10230a058(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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



/* Entry: 1022edf08; end: 1022edf13;  */

void FUN_1022edf08(void)

{
  long unaff_x20;
  
  FUN_10230d494(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  return;
}



/* Entry: 1022edf14; end: 1022edf77;  */

void FUN_1022edf14(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1022edf78; end: 1022edf83;  */

void FUN_1022edf78(void)

{
  long unaff_x20;
  
  FUN_10230f7e8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 1022edf84; end: 1022edfbb;  */

void FUN_1022edf84(code *param_1)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
             *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
             *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
             *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
             *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 1022edfbc; end: 1022edfc3;  */

void FUN_1022edfbc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x60);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}


