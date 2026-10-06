/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1009d69c8; end: 1009d69d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009d69c8(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar8 = &lStack_50;
  lVar6 = lVar1;
  FUN_10009dbb4();
  lVar7 = lVar6;
  func_0x000107c610f8();
  *(long *)(lVar7 + _DAT_113059f58) = lVar1;
  *(undefined8 *)(lVar7 + _DAT_113059f60) = uVar3;
  *(undefined8 *)(lVar7 + _DAT_113059f68) = uVar2;
  *(undefined8 *)(lVar7 + _DAT_113059f70) = uVar4;
  puVar5 = PTR_s_init_1125d9248;
  lStack_50 = lVar7;
  lStack_48 = lVar6;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar4);
  func_0x000107c61154(&lStack_50,puVar5);
  *param_1 = plVar8;
  return;
}



/* Entry: 1009d69d4; end: 1009d6a8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009d69d4(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_50;
  long lStack_48;
  
  plVar4 = &lStack_50;
  lVar2 = param_2;
  FUN_10009dbb4();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_113059f58) = param_2;
  *(undefined8 *)(lVar3 + _DAT_113059f60) = param_3;
  *(undefined8 *)(lVar3 + _DAT_113059f68) = param_4;
  *(undefined8 *)(lVar3 + _DAT_113059f70) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = lVar3;
  lStack_48 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c61154(&lStack_50,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1009d6a90; end: 1009d6af7;  */

void FUN_1009d6a90(void)

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



/* Entry: 1009d6af8; end: 1009d6b03;  */

undefined ** FUN_1009d6af8(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 1009d6b04; end: 1009d6ba7;  */

void FUN_1009d6b04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1103c6830;
  func_0x000107c613fc(&UNK_1103c6830,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  FUN_1000823a8(FUN_1009d6bec,puVar1);
  return;
}



/* Entry: 1009d6ba8; end: 1009d6beb;  */

void FUN_1009d6ba8(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1009d6b04(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  FUN_100082720("MemoryGraphReporterProviderPluginProvider",0x29,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1009d6bec; end: 1009d6bf7;  */

void FUN_1009d6bec(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar5 = uVar1;
  FUN_1009d6bf8();
  func_0x000107c613fc();
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar4);
  FUN_1009d6cac(uVar1,uVar3,uVar2,uVar4);
  *param_1 = uVar5;
  param_1[1] = &PTR_DAT_1103c6880;
  return;
}



/* Entry: 1009d6bf8; end: 1009d6c17;  */

void FUN_1009d6bf8(void)

{
  func_0x000107c61168(&PTR_PTR_112da2850);
  return;
}



/* Entry: 1009d6c18; end: 1009d6cab;  */

void FUN_1009d6c18(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  FUN_1009d6bf8();
  func_0x000107c613fc();
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  FUN_1009d6cac(param_2,param_3,param_4,param_5);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1103c6880;
  return;
}



/* Entry: 1009d6cac; end: 1009d7337;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1009d6cac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  long unaff_x20;
  long lVar11;
  code *pcVar12;
  ulong uVar13;
  undefined8 uVar14;
  long *plVar15;
  undefined1 auStack_d0 [24];
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [32];
  
  uVar2 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  FUN_1000c6580();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
  puVar3 = &UNK_10d946fd0;
  func_0x0001000c10c0();
  func_0x000107c61180();
  *(undefined **)(unaff_x20 + 0x18) = puVar3;
  if (lRam0000000112da28c0 != -1) {
    func_0x000107c61568(0x112da28c0,FUN_1009d7338);
  }
  FUN_100083b20(&puStack_b0);
  puVar3 = puStack_b0;
  uVar13 = *(ulong *)(puStack_b0 + _DAT_113092298);
  func_0x000107c615f0(uVar13);
  func_0x000107c61170(puVar3);
  plVar4 = (long *)0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef84a60);
  uVar5 = uVar13;
  func_0x000107c3ebd4();
  func_0x000107c61170();
  if ((int)uVar5 == 0) {
    func_0x000107c615e8(uVar13);
  }
  else {
    func_0x00010148f328();
    lVar11 = *plVar4;
    func_0x000107c6157c(lVar11);
    FUN_100083b20(&puStack_b0);
    puVar3 = puStack_b0;
    uVar14 = *(undefined8 *)(puStack_b0 + _DAT_1130807f0);
    func_0x000107c615f0(uVar14);
    func_0x000107c61170(puVar3);
    func_0x000107c61428(lVar11 + 0x28,auStack_80,1,0);
    uVar2 = *(undefined8 *)(lVar11 + 0x28);
    *(undefined8 *)(lVar11 + 0x28) = uVar14;
    func_0x000107c61574(lVar11);
    func_0x000107c615e8(uVar2);
    uVar2 = 0xd000000000000027;
    func_0x000107c5fadc(0xd000000000000027,0x800000010ef84b60);
    uVar5 = uVar13;
    func_0x000107c4980c();
    func_0x000107c61170(uVar2);
    if (0 < (int)uVar5) {
      lVar11 = *plVar4;
      func_0x000107c61428(lVar11 + 0x18,auStack_d0,1,0);
      *(ulong *)(lVar11 + 0x18) = uVar5 & 0xffffffff;
    }
    FUN_1000285a8(0x112da27c8,&UNK_10d946ff0);
    FUN_100083b20(&puStack_b0);
    puVar3 = puStack_b0;
    plVar15 = *(long **)(puStack_b0 + _DAT_113091b70);
    func_0x000107c615f0(plVar15);
    func_0x000107c61170(puVar3);
    plVar6 = plVar15;
    func_0x000107c41c80();
    func_0x000107c61180();
    func_0x000107c615e8(plVar15);
    plVar15 = plVar6;
    func_0x0001000b637c();
    func_0x000107c61170(plVar6);
    puVar3 = &UNK_10148e01c;
    lVar11 = 0;
    (**(code **)(*plVar15 + 0x60))(&UNK_10148e01c);
    func_0x000107c61574(plVar15);
    func_0x000107c614f0(puVar3);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
    pcVar12 = *(code **)(lVar11 + 0x10);
    func_0x000107c6157c(uVar2);
    (*pcVar12)();
    func_0x000107c615e8(puVar3);
    func_0x000107c61574(uVar2);
    FUN_100083b20(&puStack_b0);
    puVar1 = puStack_b0;
    plVar10 = *(long **)(puStack_b0 + _DAT_113091b70);
    FUN_1000285a8(0x112d51030,&UNK_10d917a40);
    plVar6 = plVar10;
    func_0x000107c615f0();
    func_0x000107c419f0();
    func_0x000107c61180();
    plVar15 = plVar6;
    func_0x0001000b637c();
    func_0x000107c61170(plVar6);
    puVar3 = &UNK_10148e070;
    lVar11 = 0;
    (**(code **)(*plVar15 + 0x60))(&UNK_10148e070);
    func_0x000107c61574(plVar15);
    func_0x000107c614f0(puVar3);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
    pcVar12 = *(code **)(lVar11 + 0x10);
    func_0x000107c6157c(uVar2);
    (*pcVar12)();
    func_0x000107c615e8(puVar3);
    func_0x000107c61574(uVar2);
    plVar6 = plVar10;
    func_0x000107c41b80();
    func_0x000107c61180();
    plVar15 = plVar6;
    func_0x0001000b637c();
    func_0x000107c61170(plVar6);
    puVar3 = &UNK_10148e094;
    lVar11 = 0;
    (**(code **)(*plVar15 + 0x60))(&UNK_10148e094);
    func_0x000107c61574(plVar15);
    func_0x000107c614f0(puVar3);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
    pcVar12 = *(code **)(lVar11 + 0x10);
    func_0x000107c6157c(uVar2);
    (*pcVar12)();
    func_0x000107c615e8(puVar3);
    func_0x000107c61574(uVar2);
    puVar3 = PTR_PTR_1126d0530;
    func_0x000107c61168(PTR_PTR_1126d0530);
    puStack_90 = &UNK_10148e0b8;
    uStack_88 = 0;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0x42000000;
    puStack_a0 = &UNK_100c75f50;
    puStack_98 = &UNK_1103c6848;
    ppuVar7 = &puStack_b0;
    func_0x000107c60bc4(ppuVar7);
    func_0x000107c3d848(puVar3);
    func_0x000107c60bd0(ppuVar7);
    lVar11 = *(long *)(puVar1 + _DAT_113091b78);
    func_0x000107c3dfc0();
    if (lVar11 == 2) {
      func_0x00010149068c();
    }
    else {
      func_0x00010149066c();
    }
    puVar3 = PTR_PTR_1126d0378;
    func_0x000107c61168();
    func_0x000107c442a8();
    func_0x000107c61180();
    if (puVar3 != (undefined *)0x0) {
      puStack_b8 = PTR_DAT_11269e880;
      uVar2 = 1;
      puVar8 = puVar3;
      func_0x000107c61498();
      func_0x000107c52060();
      func_0x000107c61180();
      puVar9 = puVar8;
      func_0x000107c5faec();
      func_0x000107c61170(puVar8);
      lVar11 = *plVar4;
      func_0x000107c6157c(lVar11);
      func_0x0001014906a8(puVar9,uVar2);
      func_0x000107c61170(puVar3);
      func_0x000107c6142c(uVar2);
      func_0x000107c61574(lVar11);
    }
    uVar2 = 0xd000000000000021;
    func_0x000107c5fadc(0xd000000000000021,0x800000010ef84b90);
    uVar5 = uVar13;
    func_0x000107c3ebd4();
    func_0x000107c61170(uVar2);
    if ((int)uVar5 == 0) {
      func_0x000107c615e8(uVar13);
      func_0x000107c61170(puVar1);
      func_0x000107c615e8(plVar10);
    }
    else {
      lVar11 = *plVar4;
      func_0x000107c6157c(lVar11);
      func_0x000107c6157c(param_2);
      func_0x000101491834(&UNK_10148e1b4,param_2);
      func_0x000107c61574(lVar11);
      func_0x000107c615e8(uVar13);
      func_0x000107c61170(puVar1);
      func_0x000107c615e8(plVar10);
      func_0x000107c61574(param_1);
      param_1 = param_2;
    }
  }
  func_0x000107c61574(param_1);
  func_0x000107c61574(param_2);
  func_0x000107c61574(param_3);
  func_0x000107c61574(param_4);
  return unaff_x20;
}



/* Entry: 1009d7338; end: 1009d73b3;  */

void FUN_1009d7338(void)

{
  undefined **ppuVar1;
  undefined1 *puVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  ppuVar1 = &puStack_50;
  puStack_30 = &UNK_10148e1e8;
  uStack_28 = 0;
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0x42000000;
  pcStack_40 = FUN_1000f6b44;
  puStack_38 = &UNK_1103c68f0;
  func_0x000107c60bc4();
  puVar2 = (undefined1 *)ppuVar1;
  func_0x000107c60bc4();
  func_0x000107c60bd0(ppuVar1);
  puRam0000000112da28b8 = puVar2;
  return;
}



/* Entry: 1009d73b4; end: 1009d73c7;  */

void FUN_1009d73b4(long param_1,long param_2)

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



/* Entry: 1009d73c8; end: 1009d7403;  */

void FUN_1009d73c8(void)

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



/* Entry: 1009d7404; end: 1009d7453;  */

undefined ** FUN_1009d7404(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 1009d7454; end: 1009d754b;  */

void FUN_1009d7454(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x11305a2c0,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x11305a2c0,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_11073ff80;
  func_0x000107c613fc(&UNK_11073ff80,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_104094ad4;
  FUN_10058fa64(&UNK_104094ad4,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009d754c; end: 1009d756f;  */

void FUN_1009d754c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009d7570; end: 1009d7577;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009d7570(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar6 = &lStack_40;
  lVar4 = lVar1;
  FUN_100098d3c();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(long *)(lVar5 + _DAT_11305a2d0) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_11305a2d8) = uVar2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c61154(&lStack_40,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 1009d7578; end: 1009d75fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009d7578(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_100098d3c();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_11305a2d0) = param_2;
  *(undefined8 *)(lVar3 + _DAT_11305a2d8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1009d75fc; end: 1009d75ff;  */

void FUN_1009d75fc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009d7600; end: 1009d762b;  */

void FUN_1009d7600(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009d762c; end: 1009d767f;  */

void FUN_1009d762c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009d7680; end: 1009d7777;  */

void FUN_1009d7680(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x11305a540,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x11305a540,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110740150;
  func_0x000107c613fc(&UNK_110740150,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_104095330;
  FUN_10058fa64(&UNK_104095330,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009d7778; end: 1009d779b;  */

void FUN_1009d7778(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009d779c; end: 1009d77a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009d779c(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar6 = &lStack_40;
  lVar4 = lVar1;
  FUN_100097acc();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(long *)(lVar5 + _DAT_11305a550) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_11305a558) = uVar2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c61154(&lStack_40,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 1009d77a4; end: 1009d7827;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009d77a4(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_100097acc();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_11305a550) = param_2;
  *(undefined8 *)(lVar3 + _DAT_11305a558) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1009d7828; end: 1009d782b;  */

void FUN_1009d7828(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009d782c; end: 1009d7857;  */

void FUN_1009d782c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009d7858; end: 1009d7867;  */

void FUN_1009d7858(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009d7868; end: 1009d78f3;  */

void FUN_1009d7868(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1009d78f4,param_1);
  return;
}



/* Entry: 1009d78f4; end: 1009d78fb;  */

void FUN_1009d78f4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_1014ac1f4);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009d78fc; end: 1009d797f;  */

void FUN_1009d78fc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_1014ac1f4,param_2,FUN_1009d7980,param_2,&UNK_1014ac1f8,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009d7980; end: 1009d79a7;  */

void FUN_1009d7980(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1009d79a8; end: 1009d79b3;  */

void FUN_1009d79a8(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_58,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
               );
  FUN_100083b20(&uStack_60);
  FUN_100083b20(&uStack_68);
  FUN_100097b84();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_60;
  *(undefined8 *)(lVar1 + 0x20) = uStack_68;
  FUN_1009d7ad0(0);
  func_0x000107c610f8();
  uVar2 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar3 = uStack_68;
  func_0x000107c61174(uStack_68);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  uVar4 = uStack_58;
  func_0x000107c61174();
  uVar5 = uVar4;
  FUN_1009d7af0();
  *(undefined8 *)(lVar1 + 0x10) = uVar5;
  func_0x000107c61174();
  FUN_1009d7b74();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar5);
  *param_1 = lVar1;
  return;
}



/* Entry: 1009d79b4; end: 1009d7acf;  */

void FUN_1009d79b4(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  FUN_100083b20(&uStack_58);
  FUN_100083b20(&uStack_60);
  FUN_100083b20(&uStack_68);
  FUN_100097b84();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  FUN_1009d7ad0(0);
  func_0x000107c610f8();
  uVar1 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar2 = uStack_68;
  func_0x000107c61174(uStack_68);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  uVar3 = uStack_58;
  func_0x000107c61174();
  uVar4 = uVar3;
  FUN_1009d7af0();
  *(undefined8 *)(param_2 + 0x10) = uVar4;
  func_0x000107c61174();
  FUN_1009d7b74();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar4);
  *param_1 = param_2;
  return;
}



/* Entry: 1009d7ad0; end: 1009d7aef;  */

void FUN_1009d7ad0(void)

{
  func_0x000107c61168(&PTR_PTR_1127da200);
  return;
}



/* Entry: 1009d7af0; end: 1009d7b73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1009d7af0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  long unaff_x20;
  
  puVar1 = &stack0xffffffffffffffc0;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112da4a58) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112da4a60) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112da4a68) = param_3;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  return puVar1;
}



/* Entry: 1009d7b74; end: 1009d7e47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009d7b74(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long unaff_x20;
  undefined8 uVar11;
  long lStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  plVar6 = &lStack_b0;
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar3 = &UNK_1103c8d90;
  func_0x000107c613fc(&UNK_1103c8d90,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_1009d8744;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_1009d870c;
  puStack_88 = &UNK_1103c8da8;
  ppuVar4 = &puStack_a0;
  puStack_78 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  func_0x000107c61574(puStack_78);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  lVar5 = 0;
  FUN_1009d7e80();
  lVar7 = lVar5;
  func_0x000107c610f8();
  *(undefined **)(lVar7 + _DAT_112da4a98) = puVar2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_b0 = lVar7;
  lStack_a8 = lVar5;
  func_0x000107c61174(puVar2);
  func_0x000107c61154(&lStack_b0,puVar3);
  lVar7 = *(long *)(*(long *)(unaff_x20 + _DAT_112da4a68) + _DAT_113080ad0);
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar3 = puVar2;
  puVar9 = (undefined *)plVar6;
  if (lVar7 != 0) {
    func_0x0001009d7ea0(0);
    func_0x000107c610f8();
    lVar5 = lVar7;
    func_0x000107c615f0();
    FUN_1009d7ec0();
    uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112da4a58);
    *(long *)(unaff_x20 + _DAT_112da4a58) = lVar5;
    func_0x000107c61174();
    func_0x000107c61170(uVar11);
    puVar8 = PTR_PTR_1126b73c8;
    func_0x000107c61168();
    func_0x000107c40a48();
    func_0x000107c61180();
    puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x000107c61168(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    func_0x000107c41570();
    func_0x000107c61180();
    puVar9 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x000107c61168(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    func_0x000107c4c188();
    func_0x000107c61180();
    puVar10 = &UNK_1103c8de0;
    func_0x000107c613fc(&UNK_1103c8de0,0x18,7);
    *(undefined **)(puVar10 + 0x10) = puVar8;
    pcStack_80 = (code *)&UNK_1014acd50;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)&UNK_100ef35e4;
    puStack_88 = &UNK_1103c8df8;
    ppuVar4 = &puStack_a0;
    puStack_78 = puVar10;
    func_0x000107c60bc4(ppuVar4);
    puVar1 = puStack_78;
    func_0x000107c61174(puVar8);
    func_0x000107c61574(puVar1);
    func_0x000107c3d7c4(puVar3);
    func_0x000107c61180();
    func_0x000107c615e8();
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(plVar6);
    func_0x000107c615e8(lVar7);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(puVar8);
  }
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar9);
  return;
}



/* Entry: 1009d7e48; end: 1009d7e6b;  */

void FUN_1009d7e48(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009d7e6c; end: 1009d7e7f;  */

void FUN_1009d7e6c(long param_1,long param_2)

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



/* Entry: 1009d7e80; end: 1009d7ebf;  */

void FUN_1009d7e80(void)

{
  func_0x000107c61168(&PTR_PTR_1127da2d0);
  return;
}



/* Entry: 1009d7ec0; end: 1009d8027;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1009d7ec0(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar3 = &puStack_80;
  func_0x000107c614f0();
  *(undefined **)(unaff_x20 + _DAT_112da4a10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(unaff_x20 + _DAT_112da4a18) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112da4a08) = param_1;
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  puVar1 = &stack0xffffffffffffffb0;
  func_0x000107c61154(puVar1,puVar2);
  func_0x000107c61180();
  uVar5 = param_1;
  func_0x000107c4d5a4();
  func_0x000107c61180();
  puVar2 = &UNK_1103c8d40;
  func_0x000107c613fc(&UNK_1103c8d40,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,puVar1);
  pcStack_60 = FUN_1009d80b4;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  uStack_70 = 0x1009d8060;
  puStack_68 = &UNK_1103c8d58;
  puStack_58 = puVar2;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puStack_58);
  uVar4 = uVar5;
  func_0x000107c5c320();
  func_0x000107c61180();
  func_0x000107c615e8(param_1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(uVar5);
  uVar5 = *(undefined8 *)(puVar1 + _DAT_112da4a18);
  *(undefined8 *)(puVar1 + _DAT_112da4a18) = uVar4;
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  return puVar1;
}



/* Entry: 1009d8028; end: 1009d804b;  */

void FUN_1009d8028(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009d804c; end: 1009d8067;  */

void FUN_1009d804c(long param_1,long param_2)

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



/* Entry: 1009d8068; end: 1009d80b3;  */

void FUN_1009d8068(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1009d80b4; end: 1009d80bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009d80b4(long param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_1009d8124(*(undefined8 *)(param_1 + _DAT_113080b18));
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1009d80bc; end: 1009d8123;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009d80bc(long param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_1009d8124(*(undefined8 *)(param_1 + _DAT_113080b18));
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1009d8124; end: 1009d8227;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009d8124(void)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  long unaff_x20;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auStack_58 [24];
  
  lVar1 = _DAT_112da4a10;
  func_0x000107c61428(unaff_x20 + _DAT_112da4a10,auStack_58,0,0);
  uVar4 = *(ulong *)(unaff_x20 + lVar1);
  if (uVar4 >> 0x3e == 0) {
    uVar5 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = uVar4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar4) {
      uVar5 = uVar4;
    }
    func_0x000107c60480();
  }
  if (uVar5 != 0) {
    if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1009d8228);
      (*pcVar2)();
    }
    func_0x000107c61434(uVar4);
    uVar6 = 0;
    do {
      if ((uVar4 & 0xc000000000000001) == 0) {
        uVar3 = *(ulong *)(uVar4 + uVar6 * 8 + 0x20);
        func_0x000107c61174(uVar3);
      }
      else {
        uVar3 = uVar6;
        func_0x0001014acb10(uVar6,uVar4);
      }
      uVar6 = uVar6 + 1;
      func_0x000107c4db88();
      func_0x000107c61170(uVar3);
    } while (uVar5 != uVar6);
    func_0x000107c6142c(uVar4);
  }
  return;
}



/* Entry: 1009d8228; end: 1009d838f; +[SCNNetworkRegulationNetworkRegulationManager createInstance:connectivityChangeNotifier:] */

void FUN_1009d8228(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int extraout_w10;
  undefined8 unaff_x21;
  undefined **appuStack_60 [2];
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  FUN_1009d8390(&lStack_40,param_3);
  FUN_1005c97d8(appuStack_60,param_4);
  FUN_1009d8574(&lStack_50,&lStack_40,appuStack_60);
  FUN_10066a53c(appuStack_60);
  FUN_1009d9190(&lStack_40);
  if (lStack_50 == 0) {
    unaff_x21 = 0;
  }
  else {
    appuStack_60[0] = &PTR_DAT_110878310;
    lStack_40 = lStack_50;
    lStack_38 = lStack_48;
    if (lStack_48 != 0) {
      do {
        FUN_1009d9254();
      } while (extraout_w10 != 0);
    }
    FUN_10015c218(appuStack_60,&lStack_40,FUN_1009d9268);
    func_0x000107c61180();
    func_0x0001009d93cc();
  }
  FUN_1009d9390();
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x21);
  return;
}



/* Entry: 1009d8390; end: 1009d8447;  */

void FUN_1009d8390(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    func_0x000107c61174(param_2);
    ppuStack_38 = &PTR_DAT_110878378;
    lStack_40 = param_2;
    FUN_1000de59c(&uStack_30,&ppuStack_38,&lStack_40,FUN_1009d8448);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    FUN_1000df524(&uStack_30);
    func_0x000107c61170(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_1009d8548(&uStack_50);
  }
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 1009d8448; end: 1009d8547;  */

void FUN_1009d8448(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  func_0x000107c60e20();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_1108783b8;
  puVar4[3] = &PTR_DAT_110878430;
  puVar5 = puVar8;
  func_0x000107c61174();
  func_0x000107c6110c();
  puVar6 = puVar5;
  FUN_1000de520();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x000107c61174(puVar8);
  puVar4[6] = puVar8;
  func_0x000107c61108(puVar5);
  func_0x000107c61170(puVar8);
  puVar4[3] = &PTR_DAT_110878408;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_1009d8548(&uStack_50);
  return;
}



/* Entry: 1009d8548; end: 1009d8573;  */

long FUN_1009d8548(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1009d8574; end: 1009d8677;  */

void FUN_1009d8574(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  int extraout_w10;
  long *plStack_60;
  long lStack_58;
  undefined1 auStack_50 [16];
  long *plStack_40;
  long lStack_38;
  
  FUN_1006385b0(&plStack_40);
  plVar1 = plStack_40;
  (**(code **)(*(long *)*param_2 + 0x10))(auStack_50);
  func_0x0001009d8af0(plVar1,auStack_50);
  func_0x0001009d8b30(auStack_50);
  plVar1 = (long *)*param_3;
  plStack_60 = (long *)0x0;
  if (plStack_40 != (long *)0x0) {
    plStack_60 = plStack_40 + 1;
  }
  lStack_58 = lStack_38;
  if (lStack_38 != 0) {
    do {
      func_0x000100638fe0();
    } while (extraout_w10 != 0);
  }
  (**(code **)(*plVar1 + 0x20))();
  FUN_1006103d0(&plStack_60);
  (**(code **)(*plStack_40 + 0x18))(plStack_40,plVar1);
  param_1[1] = lStack_38;
  *param_1 = plStack_40;
  plStack_40 = (long *)0x0;
  lStack_38 = 0;
  FUN_100638f8c(&plStack_40);
  return;
}



/* Entry: 1009d8678; end: 1009d86e3;  */

void FUN_1009d8678(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_2;
  func_0x000107c6110c();
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c4417c(uVar2);
  func_0x000107c61180();
  FUN_1009d8890(param_1);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 1009d86e4; end: 1009d870b; -[_TtC27SCNetworkRegulationServices33NetworkRegulationSupportInterface getNetworkApi] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009d86e4(long param_1)

{
  func_0x000107c5c734(*(undefined8 *)(param_1 + _DAT_112da4a98));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1009d870c; end: 1009d8743;  */

void FUN_1009d870c(long param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1009d8744; end: 1009d874b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009d8744(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + _DAT_112da4a60);
    func_0x000107c61174();
    func_0x000107c61170(lVar1);
    lVar1 = lVar2;
    func_0x000107c44f4c();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      puStack_50 = PTR_DAT_11269ebf8;
      lVar1 = lVar2;
      func_0x000107c61494(lVar2,1,&puStack_50);
      if (lVar1 == 0) {
        func_0x000107c615e8(lVar2);
      }
    }
  }
  return;
}



/* Entry: 1009d874c; end: 1009d8823;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009d874c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + _DAT_112da4a60);
    func_0x000107c61174();
    func_0x000107c61170(param_1);
    lVar1 = lVar2;
    func_0x000107c44f4c();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      puStack_50 = PTR_DAT_11269ebf8;
      lVar1 = lVar2;
      func_0x000107c61494(lVar2,1,&puStack_50);
      if (lVar1 == 0) {
        func_0x000107c615e8(lVar2);
      }
    }
  }
  return;
}



/* Entry: 1009d8824; end: 1009d8863;  */

undefined8 FUN_1009d8824(undefined8 param_1,long param_2,undefined8 param_3)

{
  FUN_1000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1009d8864; end: 1009d886b;  */

void FUN_1009d8864(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1009d886c; end: 1009d888f;  */

void FUN_1009d886c(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009d8890; end: 1009d8983;  */

void FUN_1009d8890(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  int extraout_w10;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    puVar2 = PTR_PTR_1126e01d0;
    func_0x000107c61158(PTR_PTR_1126e01d0);
    uVar3 = param_2;
    func_0x000107c6115c(param_2,puVar2);
    if ((uVar3 & 1) == 0) {
      func_0x000107c61174(param_2);
      ppuStack_38 = &PTR_DAT_110cd1c00;
      uStack_40 = param_2;
      FUN_1000de59c(&uStack_30,&ppuStack_38,&uStack_40,FUN_1009d8984);
      uVar1 = uStack_28;
      uVar5 = uStack_30;
      uStack_30 = 0;
      uStack_28 = 0;
      FUN_1000df524(&uStack_30);
      func_0x000107c61170(uStack_40);
      param_1[1] = uVar1;
      *param_1 = uVar5;
      uStack_50 = 0;
      uStack_48 = 0;
      FUN_1009d8a8c(&uStack_50);
    }
    else {
      lVar4 = *(long *)(param_2 + 0x20);
      uVar5 = *(undefined8 *)(param_2 + 0x18);
      param_1[1] = *(undefined8 *)(param_2 + 0x20);
      *param_1 = uVar5;
      if (lVar4 != 0) {
        do {
          FUN_1009d8a7c();
        } while (extraout_w10 != 0);
      }
    }
  }
  func_0x0001009d8abc();
  return;
}



/* Entry: 1009d8984; end: 1009d8a7b;  */

void FUN_1009d8984(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  int extraout_w10;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar5 = (undefined8 *)*param_2;
  puVar1 = (undefined8 *)0x38;
  func_0x000107c60e20();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110cd1c40;
  puVar1[3] = &PTR_DAT_110cd1cb8;
  puVar2 = puVar5;
  func_0x000107c61174();
  func_0x000107c6110c();
  puVar3 = puVar2;
  FUN_1000de520();
  lVar4 = puVar3[1];
  uVar6 = *puVar3;
  puVar1[5] = puVar3[1];
  puVar1[4] = uVar6;
  if (lVar4 != 0) {
    do {
      FUN_1009d8a7c();
    } while (extraout_w10 != 0);
  }
  func_0x000107c61174(puVar5);
  puVar1[6] = puVar5;
  func_0x000107c61108(puVar2);
  func_0x000107c61170(puVar5);
  puVar1[3] = &PTR_DAT_110cd1c90;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_1009d8a8c(&uStack_50);
  return;
}



/* Entry: 1009d8a7c; end: 1009d8a8b;  */

void FUN_1009d8a7c(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 1009d8a8c; end: 1009d8ab3;  */

long FUN_1009d8a8c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1009d8ab4; end: 1009d8ac3;  */

void FUN_1009d8ab4(void)

{
  return;
}



/* Entry: 1009d8ac4; end: 1009d8b9b;  */

void FUN_1009d8ac4(long param_1,long param_2)

{
  FUN_1003b6f78();
  *(long *)(param_1 + 0x10) = param_2 + 0x40;
  return;
}



/* Entry: 1009d8b9c; end: 1009d8ba3;  */

void FUN_1009d8b9c(void)

{
  return;
}



/* Entry: 1009d8ba4; end: 1009d8c03; -[_TtC27SCNetworkRegulationServices43NetworkRegulationConnectivityChangeNotifier registerListener:] */

undefined8 FUN_1009d8ba4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1009d8c04(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
  return param_3;
}



/* Entry: 1009d8c04; end: 1009d8cf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1009d8c04(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_58 [24];
  
  uVar2 = *(ulong *)(unaff_x20 + _DAT_112da4a08);
  func_0x000107c40244();
  lVar1 = _DAT_112da4a10;
  if (uVar2 < 5) {
    uVar5 = *(undefined8 *)(&UNK_10d949bc8 + uVar2 * 8);
  }
  else {
    uVar5 = 3;
  }
  if (param_1 != 0) {
    func_0x000107c61428(unaff_x20 + _DAT_112da4a10,auStack_58,0x21,0);
    func_0x000107c61174();
    FUN_1009d8cf4();
    uVar3 = *(ulong *)(unaff_x20 + lVar1);
    uVar4 = uVar3 & 0xffffffffffffff8;
    uVar2 = *(ulong *)(uVar4 + 0x10);
    if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar2) {
      uVar3 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
      FUN_1009d8d64(uVar3,uVar2 + 1,1);
      uVar4 = uVar3 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar4 + 0x10) = uVar2 + 1;
    *(long *)(uVar4 + uVar2 * 8 + 0x20) = param_1;
    *(ulong *)(unaff_x20 + lVar1) = uVar3;
    func_0x000107c614a8(auStack_58);
  }
  return uVar5;
}



/* Entry: 1009d8cf4; end: 1009d8d63;  */

void FUN_1009d8cf4(void)

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
    FUN_1009d8d64(0,uVar1 + 1,1,uVar3);
    *unaff_x20 = uVar2;
  }
  return;
}



/* Entry: 1009d8d64; end: 1009d8e8b;  */

ulong FUN_1009d8d64(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009d8e8c);
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
  FUN_1009d8ee8(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009d8e88);
      (*pcVar1)();
    }
    FUN_1009d8fac(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 1009d8e8c; end: 1009d8ee7;  */

void FUN_1009d8e8c(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  FUN_100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    FUN_1009d8f68();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto FUN_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112da4a50;
  plVar5 = (long *)&UNK_10d949bc0;
FUN_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 1009d8ee8; end: 1009d8f67;  */

undefined * FUN_1009d8ee8(undefined *param_1,undefined *param_2)

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
    FUN_1009d8e8c();
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



/* Entry: 1009d8f68; end: 1009d8fab;  */

void FUN_1009d8f68(void)

{
  undefined *puVar1;
  
  if (puRam0000000112da4a48 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126e0220;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112da4a48 = puVar1;
  return;
}



/* Entry: 1009d8fac; end: 1009d90a3;  */

long FUN_1009d8fac(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1009d90a0);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1009d90a4);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_1009d8f68(0);
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
      FUN_1009d8f68(0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1009d909c);
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



/* Entry: 1009d90a4; end: 1009d90c7;  */

undefined8 FUN_1009d90a4(long param_1)

{
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -0x18) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 1009d90c8; end: 1009d914b;  */

void FUN_1009d90c8(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  code **ppcVar1;
  code *extraout_x8;
  long extraout_x9;
  int extraout_w10;
  code *pcVar2;
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined4 uStack_68;
  undefined8 uStack_28;
  
  FUN_1009d90a4();
  uStack_68 = (undefined4)param_3;
  if (extraout_x9 != 0) {
    do {
      func_0x000100638fe0();
      uStack_68 = (undefined4)param_3;
    } while (extraout_w10 != 0);
  }
  pcStack_88 = FUN_100a169ac;
  ppuStack_80 = &PTR_DAT_110ce9cf0;
  uStack_78 = param_1;
  func_0x00010063944c();
  ppcVar1 = &pcStack_88;
  (*extraout_x8)();
  func_0x0001009d9174();
  func_0x0001006396d4();
  func_0x000100638fc4(uStack_28);
  if (!(bool)in_ZR) {
    func_0x000107c60e78();
    func_0x000107c393c8();
    func_0x0001006396d4();
    func_0x000107c393b8();
    *param_2 = &PTR_DAT_110ce9cf0;
    pcVar2 = ppcVar1[1];
    param_2[2] = ppcVar1[2];
    param_2[1] = pcVar2;
    ppcVar1[1] = (code *)0x0;
    ppcVar1[2] = (code *)0x0;
    *(undefined4 *)(param_2 + 3) = *(undefined4 *)(ppcVar1 + 3);
    return;
  }
  return;
}



/* Entry: 1009d914c; end: 1009d918f;  */

void FUN_1009d914c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_DAT_110ce9cf0;
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar1;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  return;
}



/* Entry: 1009d9190; end: 1009d91b7;  */

long FUN_1009d9190(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1009d91b8; end: 1009d91bf;  */

long FUN_1009d91b8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  func_0x000107c6110c();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110878378;
    func_0x000107c61174(lVar4);
    FUN_1005f2030(lVar1,&ppuStack_38,lVar4);
    func_0x000107c61170(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  func_0x000107c61170(uVar3);
  func_0x0001005f2294(lVar1);
  func_0x000107c61108(lVar2);
  return lVar1;
}



/* Entry: 1009d91c0; end: 1009d9253;  */

long FUN_1009d91c0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  func_0x000107c6110c();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110878378;
    func_0x000107c61174(lVar3);
    FUN_1005f2030(param_1,&ppuStack_38,lVar3);
    func_0x000107c61170(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  func_0x000107c61170(uVar2);
  func_0x0001005f2294(param_1);
  func_0x000107c61108(lVar1);
  return param_1;
}



/* Entry: 1009d9254; end: 1009d9267;  */

void FUN_1009d9254(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1009d9268; end: 1009d92db;  */

void FUN_1009d9268(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126b73c8;
  func_0x000107c610f4();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_1009d9254();
    } while (extraout_w10 != 0);
  }
  func_0x000107c46220();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_1009d9398(&uStack_30);
  return;
}



/* Entry: 1009d92dc; end: 1009d931b; -[SCNNetworkRegulationNetworkRegulationManager .cxx_construct] */

undefined8 * FUN_1009d92dc(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  FUN_10015c19c();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_1009d9254();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 1009d931c; end: 1009d938f; -[SCNNetworkRegulationNetworkRegulationManager initWithCpp:] */

undefined1 * FUN_1009d931c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126e77e8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_1009d9254();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_1009d9390();
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1009d9390; end: 1009d9397;  */

undefined1 * FUN_1009d9390(void)

{
  long in_stack_00000018;
  
  if (in_stack_00000018 != 0) {
    func_0x0001000df548();
  }
  return &stack0x00000010;
}



/* Entry: 1009d9398; end: 1009d93bf;  */

long FUN_1009d9398(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1009d93c0; end: 1009d93db;  */

void FUN_1009d93c0(void)

{
  return;
}



/* Entry: 1009d93dc; end: 1009d93eb; -[_TtC27SCNetworkRegulationServices33NetworkRegulationSupportInterface .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009d93dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112da4a98));
  return;
}



/* Entry: 1009d93ec; end: 1009d941f;  */

void FUN_1009d93ec(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009d9420; end: 1009d9447;  */

undefined ** FUN_1009d9420(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 1009d9448; end: 1009d9487;  */

void FUN_1009d9448(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009d942c();
  FUN_100082720("NotificationPermissionServicesImplEntryPointWrapperScopeInitializationPluginProvider"
                ,0x54,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009d9488; end: 1009d948f;  */

void FUN_1009d9488(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1014b4f74);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009d9490; end: 1009d9513;  */

void FUN_1009d9490(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1014b4f74,param_2,&UNK_1014b4f78,param_2,&UNK_1014b4fa0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009d9514; end: 1009d951f;  */

undefined ** FUN_1009d9514(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 1009d9520; end: 1009d95ab;  */

void FUN_1009d9520(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1009d95ac,param_1);
  return;
}



/* Entry: 1009d95ac; end: 1009d95b3;  */

void FUN_1009d95ac(long *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_38;
  
  FUN_1009d95b4();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  FUN_100083b20(&uStack_38);
  uVar1 = 0;
  FUN_1009d9654(0);
  func_0x000107c610f8();
  FUN_1009d9674(uStack_38,uVar1);
  *(undefined8 *)(unaff_x20 + 0x10) = uStack_38;
  *param_1 = unaff_x20;
  param_1[1] = (long)&PTR_DAT_11043f278;
  return;
}



/* Entry: 1009d95b4; end: 1009d95d3;  */

void FUN_1009d95b4(void)

{
  func_0x000107c61168(&PTR_PTR_112df9718);
  return;
}



/* Entry: 1009d95d4; end: 1009d9653;  */

void FUN_1009d95d4(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  FUN_1009d95b4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x10) = 0;
  FUN_100083b20(&uStack_38);
  uVar1 = 0;
  FUN_1009d9654(0);
  func_0x000107c610f8();
  FUN_1009d9674(uStack_38,uVar1);
  *(undefined8 *)(param_2 + 0x10) = uStack_38;
  *param_1 = param_2;
  param_1[1] = (long)&PTR_DAT_11043f278;
  return;
}



/* Entry: 1009d9654; end: 1009d9673;  */

void FUN_1009d9654(void)

{
  func_0x000107c61168(&PTR_PTR_1127f3ec8);
  return;
}


