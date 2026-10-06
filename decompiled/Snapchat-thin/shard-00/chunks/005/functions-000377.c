/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1007dc708; end: 1007dc797;  */

long FUN_1007dc708(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1007dc798; end: 1007dc7b7;  */

void FUN_1007dc798(void)

{
  func_0x000107c61168(&PTR_PTR_112ef4c00);
  return;
}



/* Entry: 1007dc7b8; end: 1007dc88b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007dc7b8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  long lStack_58;
  
  FUN_1007dc708(*(long *)(param_3 + _DAT_112f5cd78) + _DAT_112f5cd48,auStack_78);
  FUN_1000a8868(auStack_78,uStack_60);
  uVar1 = param_2;
  func_0x000107c3e060(param_2);
  func_0x000107c61180();
  (**(code **)(lStack_58 + 8))();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x0001000834e4(auStack_78);
  return;
}



/* Entry: 1007dc88c; end: 1007dc8bb;  */

void FUN_1007dc88c(undefined8 param_1)

{
  undefined8 uVar1;
  long *unaff_x20;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x10);
  *(undefined8 *)(*unaff_x20 + 0x10) = param_1;
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_1);
  return;
}



/* Entry: 1007dc8bc; end: 1007dc8cb;  */

void FUN_1007dc8bc(void)

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



/* Entry: 1007dc8cc; end: 1007dc8f7;  */

void FUN_1007dc8cc(void)

{
  FUN_1007daa1c();
  return;
}



/* Entry: 1007dc8f8; end: 1007dc8ff;  */

void FUN_1007dc8f8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_102afceec);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1007dc900; end: 1007dc983;  */

void FUN_1007dc900(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_102afceec,param_2,FUN_1007dc984,param_2,&UNK_102afcef0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1007dc984; end: 1007dc9ab;  */

void FUN_1007dc984(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1007dc9ac; end: 1007dc9bf;  */

void FUN_1007dc9ac(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_1005b6fd8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  *(undefined8 *)(lVar1 + 0x40) = uStack_98;
  FUN_1007dccf0(0);
  func_0x000107c613fc();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174(uStack_90);
  func_0x000107c61174(uStack_98);
  FUN_1007dcd10(uStack_68,uVar2,uVar3,uVar4,uVar5,uVar6,uStack_98);
  *(undefined8 *)(lVar1 + 0x10) = uStack_68;
  *param_1 = lVar1;
  return;
}



/* Entry: 1007dc9c0; end: 1007dcb33;  */

void FUN_1007dc9c0(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_1005b6fd8();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  FUN_1007dccf0(0);
  func_0x000107c613fc();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar5 = uStack_90;
  func_0x000107c61174(uStack_90);
  func_0x000107c61174(uStack_98);
  FUN_1007dcd10(uStack_68,uVar1,uVar2,uVar3,uVar4,uVar5,uStack_98);
  *(undefined8 *)(param_2 + 0x10) = uStack_68;
  *param_1 = param_2;
  return;
}



/* Entry: 1007dcb34; end: 1007dcb3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007dcb34(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uStack_58;
  long alStack_50 [4];
  
  FUN_100083b20(alStack_50);
  lVar6 = alStack_50[0];
  lVar2 = alStack_50[0];
  func_0x000107c4ddec();
  func_0x000107c61180();
  func_0x000107c615e8(lVar6);
  lVar6 = *(long *)(lVar2 + _DAT_113082650);
  func_0x000107c61434(lVar6);
  func_0x000107c61170(lVar2);
  if (*(long *)(lVar6 + 0x10) != 0) {
    lVar2 = 0x112ed6cf8;
    uVar5 = 0;
    FUN_1000285a8(0x112ed6cf8);
    FUN_1000a7158();
    if ((uVar5 & 1) != 0) {
      FUN_1000bb420(*(long *)(lVar6 + 0x38) + lVar2 * 0x20,alStack_50);
      goto LAB_1007dcbe0;
    }
  }
  alStack_50[1] = 0;
  alStack_50[0] = 0;
  alStack_50[3] = 0;
  alStack_50[2] = 0;
LAB_1007dcbe0:
  func_0x000107c6142c(lVar6);
  if (alStack_50[3] == 0) {
    FUN_10006e7f4(alStack_50);
  }
  else {
    uVar4 = 0x112ed6cf8;
    FUN_1000285a8(0x112ed6cf8,&UNK_10dbb6930);
    puVar3 = &uStack_58;
    func_0x000107c6147c(puVar3,alStack_50,PTR___sypN_11034f1a8 + 8,uVar4,6);
    if (((ulong)puVar3 & 1) != 0) {
      FUN_100083b20(alStack_50);
      lVar6 = alStack_50[0];
      uVar4 = 0;
      FUN_1005b6e2c(0);
      func_0x000107c610f8();
      FUN_1007dcca4(lVar6,uVar4);
      func_0x000107c61574(uStack_58);
      *param_1 = lVar6;
      return;
    }
  }
  func_0x0001048d9980(0xd00000000000004c,0x800000010f141db0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1007dcca4);
  (*pcVar1)();
}



/* Entry: 1007dcb3c; end: 1007dcca3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007dcb3c(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uStack_58;
  long alStack_50 [4];
  
  FUN_100083b20(alStack_50);
  lVar6 = alStack_50[0];
  lVar2 = alStack_50[0];
  func_0x000107c4ddec();
  func_0x000107c61180();
  func_0x000107c615e8(lVar6);
  lVar6 = *(long *)(lVar2 + _DAT_113082650);
  func_0x000107c61434(lVar6);
  func_0x000107c61170(lVar2);
  if (*(long *)(lVar6 + 0x10) != 0) {
    lVar2 = 0x112ed6cf8;
    uVar5 = 0;
    FUN_1000285a8(0x112ed6cf8);
    FUN_1000a7158();
    if ((uVar5 & 1) != 0) {
      FUN_1000bb420(*(long *)(lVar6 + 0x38) + lVar2 * 0x20,alStack_50);
      goto LAB_1007dcbe0;
    }
  }
  alStack_50[1] = 0;
  alStack_50[0] = 0;
  alStack_50[3] = 0;
  alStack_50[2] = 0;
LAB_1007dcbe0:
  func_0x000107c6142c(lVar6);
  if (alStack_50[3] == 0) {
    FUN_10006e7f4(alStack_50);
  }
  else {
    uVar4 = 0x112ed6cf8;
    FUN_1000285a8(0x112ed6cf8,&UNK_10dbb6930);
    puVar3 = &uStack_58;
    func_0x000107c6147c(puVar3,alStack_50,PTR___sypN_11034f1a8 + 8,uVar4,6);
    if (((ulong)puVar3 & 1) != 0) {
      FUN_100083b20(alStack_50);
      lVar6 = alStack_50[0];
      uVar4 = 0;
      FUN_1005b6e2c(0);
      func_0x000107c610f8();
      FUN_1007dcca4(lVar6,uVar4);
      func_0x000107c61574(uStack_58);
      *param_1 = lVar6;
      return;
    }
  }
  func_0x0001048d9980(0xd00000000000004c,0x800000010f141db0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1007dcca4);
  (*pcVar1)();
}



/* Entry: 1007dcca4; end: 1007dccef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007dcca4(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_113035b28) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1007dccf0; end: 1007dcd0f;  */

void FUN_1007dccf0(void)

{
  func_0x000107c61168(&PTR_PTR_112fa0668);
  return;
}



/* Entry: 1007dcd10; end: 1007dd2ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007dcd10(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined **ppuVar16;
  long unaff_x20;
  undefined8 uVar17;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_113038630);
  func_0x000107c61174();
  lVar2 = param_3;
  func_0x000107c4ae78();
  func_0x000107c61180();
  uVar17 = *(undefined8 *)(param_4 + _DAT_113035b28);
  lVar3 = lVar2;
  FUN_1007dd35c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x10) = 0;
  FUN_1000285a8(0x112ee3e90,&UNK_10db0ef60);
  func_0x000107c61174();
  lVar11 = lVar2;
  func_0x000107c4aeb4(lVar2);
  func_0x000107c61180();
  lVar12 = lVar11;
  FUN_100759c94();
  func_0x000107c61170(lVar11);
  uVar14 = 0x112ee3e98;
  FUN_1000285a8(0x112ee3e98,&UNK_10db20590);
  uVar4 = 0;
  func_0x000100759f5c(0,1,FUN_100b61bd4,0,uVar14);
  func_0x000107c61574(lVar12);
  puVar5 = &UNK_11069b290;
  func_0x000107c613fc(&UNK_11069b290,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = param_6;
  FUN_1000285a8(0x112d53a70,&UNK_10d91a680);
  func_0x000107c613fc();
  func_0x000107c61174();
  puVar6 = &UNK_103826d94;
  FUN_1000bdd8c(&UNK_103826d94,puVar5);
  puVar5 = &UNK_11069b2b8;
  func_0x000107c613fc(&UNK_11069b2b8,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = param_6;
  FUN_1000285a8(0x112d54e08,&UNK_10d91bfb0);
  func_0x000107c613fc();
  func_0x000107c61174();
  puVar7 = &UNK_103826d98;
  FUN_1000bdd8c(&UNK_103826d98,puVar5);
  puVar5 = &UNK_11069b2e0;
  func_0x000107c613fc(&UNK_11069b2e0,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar17;
  FUN_1000285a8(0x112fa0578,&UNK_10dc15410);
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c6157c(uVar4);
  puVar8 = &UNK_103826d8c;
  FUN_1000bdd8c(&UNK_103826d8c,puVar5);
  puVar5 = &UNK_11069b308;
  func_0x000107c613fc(&UNK_11069b308,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = param_5;
  FUN_1000285a8(0x112d5c4b8,&UNK_10d923250);
  func_0x000107c613fc();
  func_0x000107c61174();
  puVar9 = &UNK_103826d9c;
  FUN_1000bdd8c(&UNK_103826d9c,puVar5);
  puVar5 = &UNK_11069b330;
  func_0x000107c613fc(&UNK_11069b330,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar1;
  FUN_1000285a8(0x112fa0580,&UNK_10dc15420);
  func_0x000107c613fc();
  func_0x000107c61174();
  puVar10 = &UNK_103826da0;
  FUN_1000bdd8c(&UNK_103826da0,puVar5);
  lVar11 = 0;
  func_0x0001007dd37c();
  func_0x000107c613fc();
  func_0x0001000c6560(0);
  func_0x000107c613fc();
  func_0x000107c6157c(puVar6);
  puVar5 = puVar7;
  func_0x000107c6157c();
  FUN_1000c6580();
  *(undefined **)(lVar11 + 0x38) = puVar7;
  *(undefined **)(lVar11 + 0x40) = puVar5;
  *(undefined8 *)(lVar11 + 0x10) = uVar4;
  *(undefined **)(lVar11 + 0x18) = puVar8;
  *(undefined **)(lVar11 + 0x20) = puVar9;
  *(undefined **)(lVar11 + 0x28) = puVar10;
  *(undefined **)(lVar11 + 0x30) = puVar6;
  *(long *)(lVar3 + 0x10) = lVar11;
  lVar12 = *(long *)(param_7 + _DAT_113093a90);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar12 == 0) {
    func_0x000107c61170(param_7);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(uVar17);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61574(puVar7);
    func_0x000107c61574(puVar6);
    func_0x000107c61574(uVar4);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_1);
  }
  else {
    FUN_100079360(0);
    func_0x0001007dd39c(0);
    uVar13 = 0;
    func_0x0001007dd3bc(0);
    FUN_1007dd3dc();
    uVar14 = uVar13;
    FUN_1007dd440();
    func_0x000107c61170(uVar13);
    uVar13 = uVar14;
    FUN_1007dd4e0(uVar14);
    func_0x000107c61170(uVar14);
    uVar14 = 0;
    func_0x0001000aad1c(0);
    FUN_1007dd748();
    lVar15 = 0;
    FUN_1000295c4(0);
    func_0x000107c5ffdc();
    puVar5 = &UNK_11069b240;
    func_0x000107c613fc(&UNK_11069b240,0x18,7);
    func_0x000107c61644(puVar5 + 0x10,lVar11);
    puStack_78 = &UNK_103826d90;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    pcStack_88 = FUN_1000f6b44;
    puStack_80 = &UNK_11069b348;
    ppuVar16 = &puStack_98;
    puStack_70 = puVar5;
    func_0x000107c60bc4(ppuVar16);
    func_0x000107c61574(puStack_70);
    func_0x000107c5e08c(lVar12);
    func_0x000107c61180();
    func_0x000107c615e8();
    func_0x000107c61170(param_7);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(uVar17);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_3);
    func_0x000107c60bd0(ppuVar16);
    func_0x000107c61574(uVar4);
    func_0x000107c61574(puVar6);
    func_0x000107c61574(puVar7);
    func_0x000107c615e8(lVar12);
    func_0x000107c61170(uVar13);
    func_0x000107c61170(uVar14);
    param_3 = lVar15;
  }
  func_0x000107c61170(param_3);
  *(long *)(unaff_x20 + 0x10) = lVar3;
  return;
}



/* Entry: 1007dd300; end: 1007dd347;  */

void FUN_1007dd300(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1007dd348; end: 1007dd35b;  */

void FUN_1007dd348(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1007dd35c; end: 1007dd3db;  */

void FUN_1007dd35c(void)

{
  func_0x000107c61168(&PTR_PTR_112fa05c8);
  return;
}



/* Entry: 1007dd3dc; end: 1007dd3eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007dd3dc(void)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_11309b460) = 2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1007dd3ec; end: 1007dd43f;  */

void FUN_1007dd3ec(long *param_1,undefined1 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + *param_1) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1007dd440; end: 1007dd443;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007dd440(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_30;
  long lStack_28;
  
  lVar3 = param_1;
  func_0x0001007dd39c();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined1 *)(lVar4 + _DAT_11309b470) = 9;
  *(undefined8 *)(lVar4 + _DAT_11309b478) = 0;
  *(long *)(lVar4 + _DAT_11309b480) = param_1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11309b488);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_11309b490) = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_30 = lVar4;
  lStack_28 = lVar3;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&lStack_30,puVar2);
  return;
}



/* Entry: 1007dd444; end: 1007dd4df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007dd444(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_30;
  long lStack_28;
  
  lVar3 = param_1;
  func_0x0001007dd39c();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined1 *)(lVar4 + _DAT_11309b470) = 9;
  *(undefined8 *)(lVar4 + _DAT_11309b478) = 0;
  *(long *)(lVar4 + _DAT_11309b480) = param_1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11309b488);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_11309b490) = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_30 = lVar4;
  lStack_28 = lVar3;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&lStack_30,puVar2);
  return;
}



/* Entry: 1007dd4e0; end: 1007dd4e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007dd4e0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  FUN_100079360();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined1 *)(lVar3 + _DAT_11309ac58) = 0x12;
  *(undefined8 *)(lVar3 + _DAT_11309ac60) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac68) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac70) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac78) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac80) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac88) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac90) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac98) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309aca0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309aca8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acb0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acb8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acc0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acc8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acd0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acd8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ace0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ace8) = 0;
  *(long *)(lVar3 + _DAT_11309acf0) = param_1;
  *(undefined8 *)(lVar3 + _DAT_11309acf8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad00) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad08) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad10) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad18) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad20) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad28) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad30) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad38) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad40) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad48) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad50) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad58) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad60) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad68) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad70) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad78) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad80) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad88) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad90) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad98) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ada0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ada8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309adb0) = 0;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar3;
  lStack_28 = lVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1007dd4e4; end: 1007dd747;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007dd4e4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  FUN_100079360();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined1 *)(lVar3 + _DAT_11309ac58) = 0x12;
  *(undefined8 *)(lVar3 + _DAT_11309ac60) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac68) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac70) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac78) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac80) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac88) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac90) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac98) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309aca0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309aca8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acb0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acb8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acc0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acc8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acd0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acd8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ace0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ace8) = 0;
  *(long *)(lVar3 + _DAT_11309acf0) = param_1;
  *(undefined8 *)(lVar3 + _DAT_11309acf8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad00) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad08) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad10) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad18) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad20) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad28) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad30) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad38) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad40) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad48) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad50) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad58) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad60) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad68) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad70) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad78) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad80) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad88) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad90) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad98) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ada0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ada8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309adb0) = 0;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar3;
  lStack_28 = lVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1007dd748; end: 1007dd767;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007dd748(void)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_113096e78) = 1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1007dd768; end: 1007dd973;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1007dd768(long param_1)

{
  char cVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + _DAT_11309b470)) {
  case 0:
    func_0x000107c61170();
    uVar3 = 0;
    uVar4 = 4;
    break;
  case 1:
    func_0x000107c61170();
    uVar4 = 4;
    uVar3 = 1;
    break;
  case 2:
    func_0x000107c61170();
    uVar4 = 4;
    uVar3 = 2;
    break;
  case 3:
    if (*(long *)(param_1 + _DAT_11309b478) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1007dd970);
      (*pcVar2)();
    }
    uVar3 = (ulong)*(byte *)(*(long *)(param_1 + _DAT_11309b478) + _DAT_11309b458);
    func_0x000107c61170();
    uVar4 = 0;
    break;
  case 4:
    func_0x000107c61170();
    uVar4 = 4;
    uVar3 = 3;
    break;
  case 5:
    func_0x000107c61170();
    uVar3 = 4;
    uVar4 = 4;
    break;
  case 6:
    func_0x000107c61170();
    uVar4 = 4;
    uVar3 = 5;
    break;
  case 7:
    func_0x000107c61170();
    uVar4 = 4;
    uVar3 = 6;
    break;
  case 8:
    func_0x000107c61170();
    uVar4 = 4;
    uVar3 = 7;
    break;
  case 9:
    if (*(long *)(param_1 + _DAT_11309b480) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1007dd96c);
      (*pcVar2)();
    }
    uVar3 = (ulong)*(byte *)(*(long *)(param_1 + _DAT_11309b480) + _DAT_11309b460);
    func_0x000107c61170();
    uVar4 = 1;
    break;
  case 10:
    if ((char)((ulong *)(param_1 + _DAT_11309b488))[1] == '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1007dd974);
      (*pcVar2)();
    }
    uVar3 = *(ulong *)(param_1 + _DAT_11309b488);
    func_0x000107c61170();
    uVar4 = 2;
    break;
  case 0xb:
    if (*(long *)(param_1 + _DAT_11309b490) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1007dd968);
      (*pcVar2)();
    }
    cVar1 = *(char *)(*(long *)(param_1 + _DAT_11309b490) + _DAT_11309b468);
    func_0x000107c61170();
    uVar3 = (ulong)(cVar1 == '\x01');
    uVar4 = 3;
    break;
  case 0xc:
    func_0x000107c61170();
    uVar4 = 4;
    uVar3 = 8;
    break;
  case 0xd:
    func_0x000107c61170();
    uVar4 = 4;
    uVar3 = 9;
    break;
  case 0xe:
    func_0x000107c61170();
    uVar4 = 4;
    uVar3 = 10;
    break;
  case 0xf:
    func_0x000107c61170();
    uVar4 = 4;
    uVar3 = 0xb;
    break;
  case 0x10:
    func_0x000107c61170();
    uVar4 = 4;
    uVar3 = 0xc;
    break;
  case 0x11:
    func_0x000107c61170();
    uVar4 = 4;
    uVar3 = 0xd;
    break;
  case 0x12:
    func_0x000107c61170();
    uVar4 = 4;
    uVar3 = 0xe;
    break;
  case 0x13:
    func_0x000107c61170();
    uVar4 = 4;
    uVar3 = 0xf;
    break;
  case 0x14:
    func_0x000107c61170();
    uVar4 = 4;
    uVar3 = 0x10;
  }
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = uVar3;
  return auVar5;
}



/* Entry: 1007dd974; end: 1007dd9c7;  */

void FUN_1007dd974(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0x10,0x1007dd974);
  (*pcVar1)();
}



/* Entry: 1007dd9c8; end: 1007dda4b;  */

undefined4 FUN_1007dd9c8(void)

{
  if (lRam00000001137fc0e0 != -1) {
    FUN_10002a2fc(0x1137fc0e0,&PTR___NSConcreteGlobalBlock_110d664f8);
  }
  return uRam00000001137fc03c;
}



/* Entry: 1007dda4c; end: 1007ddf73;  */

undefined1  [16] FUN_1007dda4c(ulong param_1,byte param_2)

{
  uint uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  if (param_2 < 2) {
    if (param_2 == 0) {
      lVar5 = 0x112d38280;
      FUN_1000285a8(0x112d38280,&UNK_10d901fc0);
      func_0x000107c613fc();
      *(undefined8 *)(lVar5 + 0x18) = 4;
      *(undefined8 *)(lVar5 + 0x10) = 2;
      *(undefined8 *)(lVar5 + 0x20) = 0x6c697542736e654c;
      *(undefined8 *)(lVar5 + 0x28) = 0xeb00000000726564;
      uVar1 = (uint)param_1 & 0xff;
      if (uVar1 == 1 || (param_1 & 0xff) == 0) {
        if ((param_1 & 0xff) == 0) {
          uVar7 = 0x800000010f216ed0;
          uVar9 = 0xd000000000000010;
        }
        else {
          uVar7 = 0xea0000000000736e;
          uVar9 = 0x654c657461657263;
        }
      }
      else if (uVar1 == 2) {
        uVar7 = 0xe900000000000073;
        uVar9 = 0x65736e654c746567;
      }
      else {
        uVar7 = 0xef74736575716552;
        uVar9 = 0x70747448736e656c;
      }
      *(undefined8 *)(lVar5 + 0x30) = uVar9;
    }
    else {
      uVar9 = 0xd000000000000017;
      lVar5 = 0x112d38280;
      FUN_1000285a8(0x112d38280,&UNK_10d901fc0);
      func_0x000107c613fc();
      *(undefined8 *)(lVar5 + 0x18) = 4;
      *(undefined8 *)(lVar5 + 0x10) = 2;
      *(undefined8 *)(lVar5 + 0x20) = 0x61425241736e654c;
      *(undefined8 *)(lVar5 + 0x28) = 0xe900000000000072;
      if ((param_1 & 0xff) == 0) {
        uVar9 = 0xd000000000000012;
        pcVar8 = "replyActivationWorkflow";
      }
      else if (((uint)param_1 & 0xff) == 1) {
        pcVar8 = "miniCameraLensIconWorkflow";
      }
      else {
        pcVar8 = "LensCarouselPreview";
        uVar9 = 0xd00000000000001a;
      }
      uVar7 = (ulong)pcVar8 | 0x8000000000000000;
      *(undefined8 *)(lVar5 + 0x30) = uVar9;
    }
    *(ulong *)(lVar5 + 0x38) = uVar7;
    uVar9 = 0x112d38270;
    FUN_1000285a8(0x112d38270,&UNK_10d905a20);
    uVar4 = uVar9;
    FUN_10011d734();
    uVar3 = 0x23;
    uVar6 = 0xe100000000000000;
    func_0x000107c5fa80(0x23,0xe100000000000000,uVar9,uVar4);
    func_0x000107c61574(lVar5);
  }
  else if (param_2 == 2) {
    uVar6 = 0xec0000006c657375;
    uVar3 = 0x6f726143736e654c;
  }
  else {
    if (param_2 != 3) {
      uVar9 = 0xec0000007265726f;
      uVar4 = 0x6c707845736e654c;
                    /* WARNING: Could not recover jumptable at 0x0001007ddc44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10dd3fb81)[param_1] * 4 + 0x1007ddc48))
                (0x6c707845736e654c,0xec0000007265726f);
      auVar10._8_8_ = uVar9;
      auVar10._0_8_ = uVar4;
      return auVar10;
    }
    lVar5 = 0x112d38280;
    FUN_1000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c613fc();
    *(undefined8 *)(lVar5 + 0x18) = 4;
    *(undefined8 *)(lVar5 + 0x10) = 2;
    *(undefined8 *)(lVar5 + 0x20) = 0xd000000000000013;
    *(undefined8 *)(lVar5 + 0x28) = 0x800000010f216db0;
    bVar2 = (param_1 & 0xff) != 1;
    uVar9 = 0x74754265736f6c63;
    if (bVar2) {
      uVar9 = 0x766f72506e6f6369;
    }
    uVar4 = 0xeb000000006e6f74;
    if (bVar2) {
      uVar4 = 0xec00000072656469;
    }
    *(undefined8 *)(lVar5 + 0x30) = uVar9;
    *(undefined8 *)(lVar5 + 0x38) = uVar4;
    uVar9 = 0x112d38270;
    FUN_1000285a8(0x112d38270,&UNK_10d905a20);
    uVar4 = uVar9;
    FUN_10011d734();
    uVar3 = 0x23;
    uVar6 = 0xe100000000000000;
    func_0x000107c5fa80(0x23,0xe100000000000000,uVar9,uVar4);
    func_0x000107c61574(lVar5);
  }
  auVar11._8_8_ = uVar6;
  auVar11._0_8_ = uVar3;
  return auVar11;
}



/* Entry: 1007ddf74; end: 1007ddfbb; -[SCAttributedLensTask .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001007ddf90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001007ddf94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007ddf74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11309b478));
  return;
}



/* Entry: 1007ddfbc; end: 1007de00f;  */

void FUN_1007ddfbc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1007de010; end: 1007de01b;  */

undefined ** FUN_1007de010(void)

{
  return &PTR_DAT_113066ca0;
}



/* Entry: 1007de01c; end: 1007de047;  */

void FUN_1007de01c(void)

{
  FUN_1007daa1c();
  return;
}



/* Entry: 1007de048; end: 1007de04f;  */

void FUN_1007de048(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_102afd090);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1007de050; end: 1007de0d3;  */

void FUN_1007de050(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_102afd090,param_2,FUN_1007de0d4,param_2,&UNK_102afd094,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1007de0d4; end: 1007de0fb;  */

void FUN_1007de0d4(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1007de0fc; end: 1007de107;  */

void FUN_1007de0fc(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_58,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28));
  FUN_100083b20(&uStack_60);
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  func_0x0001005b6ff8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x20) = uStack_60;
  *(undefined8 *)(lVar1 + 0x28) = uStack_68;
  FUN_1000285a8(0x112e4b708,&UNK_10da44ae8);
  func_0x000107c610f8();
  uVar2 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar3 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar4 = uStack_70;
  func_0x000107c6157c(uStack_70);
  FUN_10025a71c();
  puVar5 = PTR_PTR_1126a7288;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(lVar1 + 0x18) = puVar5;
  func_0x0001007de290(0);
  func_0x000107c613fc();
  func_0x000107c61174(puVar5);
  uVar4 = uStack_58;
  FUN_1007de2b0(uStack_58,uVar2,uVar3,puVar5);
  func_0x000107c61574(uStack_70);
  *(undefined8 *)(lVar1 + 0x10) = uVar4;
  *param_1 = lVar1;
  return;
}



/* Entry: 1007de108; end: 1007de257;  */

void FUN_1007de108(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  FUN_100083b20(&uStack_58);
  FUN_100083b20(&uStack_60);
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  func_0x0001005b6ff8();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_60;
  *(undefined8 *)(param_2 + 0x28) = uStack_68;
  FUN_1000285a8(0x112e4b708,&UNK_10da44ae8);
  func_0x000107c610f8();
  uVar1 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar2 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar3 = uStack_70;
  func_0x000107c6157c(uStack_70);
  FUN_10025a71c();
  puVar4 = PTR_PTR_1126a7288;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar3);
  *(undefined **)(param_2 + 0x18) = puVar4;
  func_0x0001007de290(0);
  func_0x000107c613fc();
  func_0x000107c61174(puVar4);
  uVar3 = uStack_58;
  FUN_1007de2b0(uStack_58,uVar1,uVar2,puVar4);
  func_0x000107c61574(uStack_70);
  *(undefined8 *)(param_2 + 0x10) = uVar3;
  *param_1 = param_2;
  return;
}



/* Entry: 1007de258; end: 1007de26f;  */

void FUN_1007de258(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1007de270; end: 1007de2af;  */

void FUN_1007de270(void)

{
  func_0x000107c61168(&PTR_PTR_1128f7520);
  return;
}



/* Entry: 1007de2b0; end: 1007de453;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007de2b0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(long *)(unaff_x20 + 0x18) = param_3;
  FUN_1000285a8(0x112d5a5f8,&UNK_10d921380);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = param_2;
  func_0x000107c4b2ec();
  func_0x000107c61180();
  uVar1 = uVar5;
  FUN_1000bda74();
  func_0x000107c61170(uVar5);
  puVar2 = &UNK_11069b578;
  func_0x000107c613fc(&UNK_11069b578,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = param_4;
  *(long *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = uVar1;
  FUN_1000285a8(0x112fa0828,&UNK_10dc15548);
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174(param_4);
  func_0x000107c6157c(uVar1);
  puVar3 = &UNK_103827c7c;
  FUN_1000bdd8c(&UNK_103827c7c,puVar2);
  *(undefined **)(unaff_x20 + 0x20) = puVar3;
  uVar5 = *(undefined8 *)(param_3 + _DAT_112f9fae8);
  func_0x000107c61580();
  func_0x000107c6157c(uVar5);
  puVar2 = &UNK_103827c78;
  puVar4 = puVar3;
  FUN_1000b6504();
  func_0x000107c61574(uVar5);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_4);
  func_0x000107c61578(puVar3,2);
  func_0x000107c61574(uVar1);
  *(undefined **)(unaff_x20 + 0x28) = puVar2;
  *(undefined **)(unaff_x20 + 0x30) = puVar4;
  return;
}



/* Entry: 1007de454; end: 1007de46b;  */

void FUN_1007de454(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1007de46c; end: 1007de50b;  */

void FUN_1007de46c(long param_1)

{
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_38 = PTR___sBOWV_11034d658 + 0x40;
  puStack_30 = PTR___sBoWV_11034d678 + 0x40;
  puStack_20 = PTR___syycWV_11034f1c0 + 0x40;
  puStack_28 = puStack_30;
  puStack_18 = puStack_30;
  func_0x000107c61524(param_1,0,5,&puStack_38,param_1 + 0x58);
  return;
}



/* Entry: 1007de50c; end: 1007de517;  */

undefined ** FUN_1007de50c(void)

{
  return &PTR_DAT_113066ca0;
}



/* Entry: 1007de518; end: 1007de543;  */

void FUN_1007de518(void)

{
  FUN_1007daa1c();
  return;
}



/* Entry: 1007de544; end: 1007de54b;  */

void FUN_1007de544(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_102afd204);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1007de54c; end: 1007de5cf;  */

void FUN_1007de54c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_102afd204,param_2,FUN_1007de5d0,param_2,&UNK_102afd208,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1007de5d0; end: 1007de5f7;  */

void FUN_1007de5d0(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1007de5f8; end: 1007de603;  */

void FUN_1007de5f8(long *param_1)

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
  func_0x0001005b5fa4();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_60;
  *(undefined8 *)(lVar1 + 0x20) = uStack_68;
  func_0x0001007defbc(0);
  func_0x000107c613fc();
  uVar2 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar3 = uStack_68;
  func_0x000107c61174(uStack_68);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  uVar4 = uStack_58;
  func_0x000107c61174();
  uVar5 = uVar4;
  FUN_1007defdc();
  *(undefined8 *)(lVar1 + 0x10) = uVar5;
  func_0x000107c6157c();
  func_0x0001007df010();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61574(uVar5);
  *param_1 = lVar1;
  return;
}



/* Entry: 1007de604; end: 1007de727;  */

void FUN_1007de604(long *param_1,long param_2)

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
  func_0x0001005b5fa4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  func_0x0001007defbc(0);
  func_0x000107c613fc();
  uVar1 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar2 = uStack_68;
  func_0x000107c61174(uStack_68);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  uVar3 = uStack_58;
  func_0x000107c61174();
  uVar4 = uVar3;
  FUN_1007defdc();
  *(undefined8 *)(param_2 + 0x10) = uVar4;
  func_0x000107c6157c();
  func_0x0001007df010();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61574(uVar4);
  *param_1 = param_2;
  return;
}



/* Entry: 1007de728; end: 1007de72f;  */

void FUN_1007de728(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1007de730; end: 1007de783;  */

void FUN_1007de730(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1007de784; end: 1007de78f;  */

void FUN_1007de784(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_100083b20(&uStack_60);
  FUN_100211f70();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_1007de93c(uStack_48,uStack_50,uStack_58,uStack_60);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  func_0x000107c61170(uStack_60);
  *param_1 = uVar1;
  return;
}



/* Entry: 1007de790; end: 1007de85f;  */

void FUN_1007de790(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_100083b20(&uStack_60);
  FUN_100211f70();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_1007de93c(uStack_48,uStack_50,uStack_58,uStack_60);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  func_0x000107c61170(uStack_60);
  *param_1 = uVar1;
  return;
}



/* Entry: 1007de860; end: 1007de867;  */

void FUN_1007de860(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  puVar1 = PTR_PTR_1126a6dd8;
  func_0x000107c610f8();
  func_0x000107c454a4();
  func_0x000107c615e8(uStack_38);
  *param_1 = puVar1;
  return;
}



/* Entry: 1007de868; end: 1007de8c7;  */

void FUN_1007de868(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  puVar1 = PTR_PTR_1126a6dd8;
  func_0x000107c610f8();
  func_0x000107c454a4();
  func_0x000107c615e8(uStack_38);
  *param_1 = puVar1;
  return;
}



/* Entry: 1007de8c8; end: 1007de93b; -[SCThreadMonitoringServices initWithANRThreadMonitoring:] */

undefined1 * FUN_1007de8c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112702b88;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1007de93c; end: 1007debeb;  */

void FUN_1007de93c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126a7df8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar3 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar3);
  uVar4 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar4);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef19d60);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar4);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_4);
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef20b90);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar4);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  uVar5 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010efc1290);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  lVar6 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar6 != 0) {
    *(long *)(unaff_x20 + 0x38) = lVar6;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1007debec);
  (*pcVar1)();
}



/* Entry: 1007debec; end: 1007dee83; -[SCBitmojiAppServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007debec(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  func_0x000107c61144(auStack_78,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  puStack_90 = &UNK_1054a4134;
  puStack_88 = &UNK_11088e8a8;
  func_0x000107c6111c(auStack_80,auStack_78);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_d0 = puVar4;
  uStack_c8 = 0xc2000000;
  puStack_c0 = &UNK_1054a4174;
  puStack_b8 = &UNK_11088e8d8;
  func_0x000107c6111c(auStack_a8,auStack_78);
  func_0x000107c61174(puVar1);
  puStack_b0 = puVar1;
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126ae720;
  puStack_f8 = puVar4;
  uStack_f0 = 0xc2000000;
  puStack_e8 = &UNK_1054a41bc;
  puStack_e0 = &UNK_11088e908;
  func_0x000107c6111c(auStack_d8,auStack_78);
  func_0x000107c3e4fc(puVar3);
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_100,auStack_78);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  uVar5 = *(undefined8 *)(param_1 + _DAT_112723f70);
  *(undefined **)(param_1 + _DAT_112723f70) = puVar4;
  func_0x000107c61170(uVar5);
  puVar4 = PTR_PTR_1126b9720;
  func_0x000107c610f4(PTR_PTR_1126b9720);
  func_0x000107c459bc();
  uVar5 = *(undefined8 *)(param_1 + _DAT_112723f84);
  func_0x000107c61174(uVar5);
  func_0x000107c42c20(uVar5);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61120(auStack_100);
  func_0x000107c61170(puVar3);
  func_0x000107c61120(auStack_d8);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puStack_b0);
  func_0x000107c61120(auStack_a8);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_80);
  func_0x000107c61120(auStack_78);
  return;
}



/* Entry: 1007dee84; end: 1007def7f; -[SCBitmojiAppServices initWithBitmojiGoToAppHelper:appInfoProvider:appEventsEmitter:appPasteboardObserver:] */

undefined1 *
FUN_1007dee84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_48 = PTR_PTR_1126fd740;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1007def80; end: 1007defdb;  */

void FUN_1007def80(void)

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



/* Entry: 1007defdc; end: 1007df103;  */

void FUN_1007defdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c61170();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  return;
}



/* Entry: 1007df104; end: 1007df127;  */

void FUN_1007df104(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1007df128; end: 1007df153;  */

void FUN_1007df128(void)

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



/* Entry: 1007df154; end: 1007df193;  */

void FUN_1007df154(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001007df138();
  FUN_100082720("GamesExplorerCameraButtonScopeInitializationPluginPluginProvider",0x40,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1007df194; end: 1007df19b;  */

void FUN_1007df194(long *param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  FUN_1007df19c();
  func_0x000107c613fc();
  *(long *)(lVar1 + 0x10) = unaff_x20;
  *param_1 = lVar1;
  param_1[1] = (long)&PTR_DAT_11059cc70;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 1007df19c; end: 1007df1bb;  */

void FUN_1007df19c(void)

{
  func_0x000107c61168(&PTR_PTR_112ef0678);
  return;
}



/* Entry: 1007df1bc; end: 1007df1ff;  */

void FUN_1007df1bc(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2;
  FUN_1007df19c();
  func_0x000107c613fc();
  *(long *)(lVar1 + 0x10) = param_2;
  *param_1 = lVar1;
  param_1[1] = (long)&PTR_DAT_11059cc70;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1007df200; end: 1007df20b;  */

undefined ** FUN_1007df200(void)

{
  return &PTR_DAT_113066ca0;
}



/* Entry: 1007df20c; end: 1007df237;  */

void FUN_1007df20c(void)

{
  FUN_1007daa1c();
  return;
}



/* Entry: 1007df238; end: 1007df23f;  */

void FUN_1007df238(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_102afd34c);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1007df240; end: 1007df2c3;  */

void FUN_1007df240(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_102afd34c,param_2,FUN_1007df2c4,param_2,&UNK_102afd350,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1007df2c4; end: 1007df2eb;  */

void FUN_1007df2c4(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1007df2ec; end: 1007df2f3;  */

void FUN_1007df2ec(long *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_48,lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_50);
  func_0x0001005b5fc4();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_50;
  FUN_1007df39c(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  FUN_1007df3bc(uStack_48,uStack_50);
  *(undefined8 *)(lVar1 + 0x10) = uStack_48;
  *param_1 = lVar1;
  return;
}



/* Entry: 1007df2f4; end: 1007df39b;  */

void FUN_1007df2f4(long *param_1,long param_2)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  func_0x0001005b5fc4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  FUN_1007df39c(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  FUN_1007df3bc(uStack_48,uStack_50);
  *(undefined8 *)(param_2 + 0x10) = uStack_48;
  *param_1 = param_2;
  return;
}



/* Entry: 1007df39c; end: 1007df3bb;  */

void FUN_1007df39c(void)

{
  func_0x000107c61168(&PTR_PTR_112f5dee0);
  return;
}



/* Entry: 1007df3bc; end: 1007df53b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007df3bc(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  ulong uVar3;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  ulong uStack_60;
  long lStack_58;
  
  *(long *)(unaff_x20 + 0x10) = param_2;
  func_0x000107c61174(param_2);
  FUN_1000d224c(auStack_78);
  lVar1 = lStack_58;
  uVar2 = uStack_60;
  FUN_1000a8868(auStack_78,uStack_60);
  (**(code **)(lVar1 + 8))(uVar2,lVar1);
  func_0x0001000834e4(auStack_78);
  if ((uVar2 & 1) == 0) {
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_1);
    return;
  }
  FUN_1007d6c28(param_2 + _DAT_112fcaab8,auStack_78);
  lVar1 = _DAT_1130766b8;
  func_0x000107c61428(param_1 + _DAT_1130766b8,auStack_90,0,0);
  uVar2 = param_1 + lVar1;
  func_0x000107c61618();
  if (uVar2 != 0) {
    uVar3 = uVar2;
    func_0x000107c61150();
    if ((uVar3 & 1) != 0) {
      uVar3 = uVar2;
      func_0x000107c437a8(uVar2);
      func_0x000107c61180();
      func_0x000107c61170(uVar2);
      goto LAB_1007df4dc;
    }
    func_0x000107c61170(uVar2);
  }
  uVar3 = 0;
LAB_1007df4dc:
  FUN_1000c6518(auStack_78,uStack_60);
  (**(code **)(lStack_58 + 0x10))(uVar3,uStack_60,lStack_58);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  func_0x0001000834e4(auStack_78);
  return;
}



/* Entry: 1007df53c; end: 1007df583;  */

void FUN_1007df53c(undefined8 param_1)

{
  undefined8 uVar1;
  long *unaff_x20;
  long lVar2;
  undefined1 auStack_38 [24];
  
  lVar2 = *unaff_x20;
  func_0x000107c61428(lVar2 + 0x28,auStack_38,1,0);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_1;
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 1007df584; end: 1007df58b;  */

void FUN_1007df584(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1007df58c; end: 1007df5b7;  */

void FUN_1007df58c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1007df5b8; end: 1007df5c3;  */

undefined ** FUN_1007df5b8(void)

{
  return &PTR_DAT_113066ca0;
}



/* Entry: 1007df5c4; end: 1007df643;  */

void FUN_1007df5c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11059daa0;
  func_0x000107c613fc(&UNK_11059daa0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1007df684,puVar1);
  return;
}



/* Entry: 1007df644; end: 1007df683;  */

void FUN_1007df644(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1007df5c4(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100082720("MainCameraScopeGraphBridgeScopeInitializationPluginProvider",0x3b,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1007df684; end: 1007df68b;  */

void FUN_1007df684(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112ef2128,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112ef2128,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_11059de38;
  func_0x000107c613fc(&UNK_11059de38,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_102b1ba20;
  FUN_10058fa64(&UNK_102b1ba20,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1007df68c; end: 1007df783;  */

void FUN_1007df68c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112ef2128,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112ef2128,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_11059de38;
  func_0x000107c613fc(&UNK_11059de38,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_102b1ba20;
  FUN_10058fa64(&UNK_102b1ba20,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1007df784; end: 1007df7a7;  */

void FUN_1007df784(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1007df7a8; end: 1007dfce7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007df7a8(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
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
                  undefined8 param_45,undefined8 param_46)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_78;
  long lStack_70;
  
  lVar2 = param_2;
  FUN_1005b77b0();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112ef2138) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112ef2140) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112ef2148) = param_4;
  *(undefined8 *)(lVar3 + _DAT_112ef2150) = param_5;
  *(undefined8 *)(lVar3 + _DAT_112ef2158) = param_6;
  *(undefined8 *)(lVar3 + _DAT_112ef2160) = param_7;
  *(undefined8 *)(lVar3 + _DAT_112ef2168) = param_8;
  *(undefined8 *)(lVar3 + _DAT_112ef2170) = param_9;
  *(undefined8 *)(lVar3 + _DAT_112ef2178) = param_10;
  *(undefined8 *)(lVar3 + _DAT_112ef2180) = param_11;
  *(undefined8 *)(lVar3 + _DAT_112ef2188) = param_12;
  *(undefined8 *)(lVar3 + _DAT_112ef2190) = param_13;
  *(undefined8 *)(lVar3 + _DAT_112ef2198) = param_14;
  *(undefined8 *)(lVar3 + _DAT_112ef21a0) = param_15;
  *(undefined8 *)(lVar3 + _DAT_112ef21a8) = param_16;
  *(undefined8 *)(lVar3 + _DAT_112ef21b0) = param_17;
  *(undefined8 *)(lVar3 + _DAT_112ef21b8) = param_18;
  *(undefined8 *)(lVar3 + _DAT_112ef21c0) = param_19;
  *(undefined8 *)(lVar3 + _DAT_112ef21c8) = param_20;
  *(undefined8 *)(lVar3 + _DAT_112ef21d0) = param_21;
  *(undefined8 *)(lVar3 + _DAT_112ef21d8) = param_22;
  *(undefined8 *)(lVar3 + _DAT_112ef21e0) = param_23;
  *(undefined8 *)(lVar3 + _DAT_112ef21e8) = param_24;
  *(undefined8 *)(lVar3 + _DAT_112ef21f0) = param_25;
  *(undefined8 *)(lVar3 + _DAT_112ef21f8) = param_26;
  *(undefined8 *)(lVar3 + _DAT_112ef2200) = param_27;
  *(undefined8 *)(lVar3 + _DAT_112ef2208) = param_28;
  *(undefined8 *)(lVar3 + _DAT_112ef2210) = param_29;
  *(undefined8 *)(lVar3 + _DAT_112ef2218) = param_30;
  *(undefined8 *)(lVar3 + _DAT_112ef2220) = param_31;
  *(undefined8 *)(lVar3 + _DAT_112ef2228) = param_32;
  *(undefined8 *)(lVar3 + _DAT_112ef2230) = param_33;
  *(undefined8 *)(lVar3 + _DAT_112ef2238) = param_34;
  *(undefined8 *)(lVar3 + _DAT_112ef2240) = param_35;
  *(undefined8 *)(lVar3 + _DAT_112ef2248) = param_36;
  *(undefined8 *)(lVar3 + _DAT_112ef2250) = param_37;
  *(undefined8 *)(lVar3 + _DAT_112ef2258) = param_38;
  *(undefined8 *)(lVar3 + _DAT_112ef2260) = param_39;
  *(undefined8 *)(lVar3 + _DAT_112ef2268) = param_40;
  *(undefined8 *)(lVar3 + _DAT_112ef2270) = param_41;
  *(undefined8 *)(lVar3 + _DAT_112ef2278) = param_42;
  *(undefined8 *)(lVar3 + _DAT_112ef2280) = param_43;
  *(undefined8 *)(lVar3 + _DAT_112ef2288) = param_44;
  *(undefined8 *)(lVar3 + _DAT_112ef2290) = param_45;
  *(undefined8 *)(lVar3 + _DAT_112ef2298) = param_46;
  puVar1 = PTR_s_init_1125d9248;
  lStack_78 = lVar3;
  lStack_70 = lVar2;
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
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_27);
  func_0x000107c6157c(param_28);
  func_0x000107c6157c(param_29);
  func_0x000107c6157c(param_30);
  func_0x000107c6157c(param_31);
  func_0x000107c6157c(param_32);
  func_0x000107c6157c(param_33);
  func_0x000107c6157c(param_34);
  func_0x000107c6157c(param_35);
  func_0x000107c6157c(param_36);
  func_0x000107c6157c(param_37);
  func_0x000107c6157c(param_38);
  func_0x000107c6157c(param_39);
  func_0x000107c6157c(param_40);
  func_0x000107c6157c(param_41);
  func_0x000107c6157c(param_42);
  func_0x000107c6157c(param_43);
  func_0x000107c6157c(param_44);
  func_0x000107c6157c(param_45);
  func_0x000107c6157c(param_46);
  plVar4 = &lStack_78;
  func_0x000107c61154(plVar4,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1007dfce8; end: 1007dfd6b;  */

void FUN_1007dfce8(void)

{
  long unaff_x20;
  
  FUN_1007df7a8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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
                *(undefined8 *)(unaff_x20 + 0x170));
  return;
}



/* Entry: 1007dfd6c; end: 1007dff1b;  */

void FUN_1007dfd6c(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1007dff1c; end: 1007dff27;  */

undefined ** FUN_1007dff1c(void)

{
  return &PTR_DAT_113066ca0;
}



/* Entry: 1007dff28; end: 1007dff53;  */

void FUN_1007dff28(void)

{
  FUN_1007daa1c();
  return;
}



/* Entry: 1007dff54; end: 1007dff5b;  */

void FUN_1007dff54(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_102afd628);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1007dff5c; end: 1007dffdf;  */

void FUN_1007dff5c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_102afd628,param_2,FUN_1007dffe0,param_2,&UNK_102afd62c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1007dffe0; end: 1007e0007;  */

void FUN_1007dffe0(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1007e0008; end: 1007e031f;  */

void FUN_1007e0008(long *param_1,long param_2)

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
  undefined8 uVar14;
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
  
  FUN_100083b20(auStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_100083b20(&uStack_a8);
  FUN_100083b20(&uStack_b0);
  FUN_100083b20(&uStack_b8);
  FUN_100083b20(&uStack_c0);
  FUN_100083b20(&uStack_c8);
  FUN_100083b20(&uStack_d0);
  FUN_100083b20(&uStack_d8);
  FUN_100083b20(&uStack_e0);
  FUN_100083b20(&uStack_e8);
  func_0x0001005b72a8();
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
  func_0x0001007e09d8();
  func_0x000107c613fc();
  uVar1 = uStack_78;
  func_0x000107c61174();
  uVar2 = uStack_80;
  func_0x000107c61174();
  uVar3 = uStack_88;
  func_0x000107c61174();
  uVar4 = uStack_90;
  func_0x000107c61174();
  uVar5 = uStack_98;
  func_0x000107c61174();
  uVar6 = uStack_a0;
  func_0x000107c61174();
  uVar7 = uStack_a8;
  func_0x000107c61174(uStack_a8);
  uVar8 = uStack_b0;
  func_0x000107c61174();
  uVar9 = uStack_b8;
  func_0x000107c61174();
  uVar10 = uStack_c0;
  func_0x000107c61174();
  uVar11 = uStack_c8;
  func_0x000107c61174();
  uVar12 = uStack_d0;
  func_0x000107c61174();
  uVar13 = uStack_d8;
  func_0x000107c61174();
  uVar14 = uStack_e0;
  func_0x000107c61174();
  func_0x000107c61174();
  FUN_1007e09f8(auStack_70[0],uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,
                uVar12,uVar13,uVar14,uStack_e8);
  *(undefined8 *)(param_2 + 0x10) = auStack_70[0];
  *param_1 = param_2;
  return;
}



/* Entry: 1007e0320; end: 1007e0363;  */

void FUN_1007e0320(void)

{
  long unaff_x20;
  
  FUN_1007e0008(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88));
  return;
}



/* Entry: 1007e0364; end: 1007e036b;  */

void FUN_1007e0364(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x48);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1007e036c; end: 1007e03bf;  */

void FUN_1007e036c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x48);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1007e03c0; end: 1007e03d3;  */

void FUN_1007e03c0(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100330808();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  *(undefined8 *)(lVar1 + 0x40) = uStack_98;
  puVar2 = PTR_PTR_1126ac698;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar7 = uStack_90;
  func_0x000107c61174();
  uVar8 = uStack_98;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar9 = uStack_68;
  func_0x000107c61174();
  uVar10 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar2);
  uVar10 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef26b50);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar2);
  uVar10 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef1df40);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar2);
  uVar10 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar2);
  uVar10 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar10);
  uVar11 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  uVar10 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef1df80);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar8);
  func_0x000107c61174();
  uVar10 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef1de50);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar10);
  func_0x000107c61174();
  uVar10 = uVar11;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  *(undefined8 *)(lVar1 + 0x48) = uVar10;
  *param_1 = lVar1;
  return;
}


