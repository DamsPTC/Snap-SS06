/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10383d5b8; end: 10383dc57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10383d5b8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined8 param_9,long param_10)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long unaff_x20;
  undefined8 uVar18;
  code *pcVar19;
  undefined8 uVar20;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_90 [24];
  ulong uStack_78;
  long lStack_70;
  
  func_0x000107c613fc();
  uVar1 = param_5;
  func_0x000107c3e0a8();
  func_0x000107c61180();
  lVar12 = _DAT_1130813f0;
  uVar18 = *(undefined8 *)(param_10 + _DAT_1130813f0);
  func_0x000107c6157c(uVar18);
  func_0x0001000d224c(auStack_90);
  func_0x000107c61574(uVar18);
  lVar4 = lStack_70;
  uVar3 = uStack_78;
  func_0x0001000a8868(auStack_90,uStack_78);
  pcVar19 = *(code **)(lVar4 + 0x48);
  lVar2 = param_3;
  func_0x000107c61174();
  (*pcVar19)(uVar3,lVar4);
  lVar4 = 0;
  func_0x000103822894();
  func_0x000107c61534();
  *(undefined8 *)(lVar4 + 0x10) = 0;
  *(long *)(lVar4 + 0x18) = param_3;
  *(byte *)(lVar4 + 0x20) = (byte)uVar3 & 1;
  func_0x0001000a8868(auStack_90,uStack_78);
  (**(code **)(lStack_70 + 0x40))(uStack_78,lStack_70);
  lVar4 = 0;
  if ((uStack_78 & 1) != 0) {
    lVar4 = *(long *)(lVar2 + _DAT_11306db00);
    func_0x000107c5b3f0();
    FUN_103822094();
  }
  func_0x000107c61170(lVar2);
  uVar18 = param_4;
  func_0x000107c4aeb0();
  func_0x000107c61180();
  lVar5 = 0;
  func_0x00010384e890();
  uVar17 = 0x18;
  func_0x000107c613fc();
  uVar20 = *(undefined8 *)(param_10 + lVar12);
  uVar6 = 0;
  func_0x000100b72c48();
  func_0x000107c610f8();
  func_0x000107c6157c(uVar20);
  func_0x000107c453e4();
  if (lVar4 != 0) {
    puVar7 = *(undefined **)(lVar4 + 0x10);
    func_0x000107c3f70c();
    func_0x000107c61180();
    puVar10 = puVar7;
    func_0x000107c5faec();
    func_0x000107c61170(puVar7);
    puStack_e8 = puVar10;
    uStack_e0 = uVar17;
    func_0x000100087c34(&puStack_e8);
    func_0x000107c6142c(uVar17);
  }
  func_0x0001000285a8(0x112d5d810,&UNK_10d923f50);
  uVar17 = uVar18;
  func_0x000107c4aeb4();
  func_0x000107c61180();
  uVar8 = uVar17;
  func_0x0001000bda74();
  func_0x000107c61170(uVar17);
  func_0x0001000285a8(0x112f421e0,&UNK_10db8f110);
  uVar17 = uVar1;
  func_0x000107c3e060();
  func_0x000107c61180();
  uVar9 = uVar17;
  func_0x0001000bda74();
  func_0x000107c61170(uVar17);
  func_0x0001000285a8(0x112ee9da8,&UNK_10dc15660);
  puVar10 = (undefined *)0x0;
  func_0x0001007d6060();
  func_0x00010450b850();
  ppuVar11 = &puStack_e8;
  puStack_e8 = puVar10;
  func_0x000100854cb0();
  func_0x000107c61170(puVar10);
  func_0x0001000285a8(0x112fa0028,&UNK_10dc150b0);
  uVar17 = param_9;
  func_0x000107c4af88(param_9);
  func_0x000107c61180();
  uVar16 = uVar17;
  func_0x0001000bda74();
  func_0x000107c61170(uVar17);
  uVar17 = 0x112fa0030;
  func_0x0001000285a8(0x112fa0030,&UNK_10dc15670);
  uVar15 = 0x10384e7f0;
  func_0x0001000cb480(0x10384e7f0,0,uVar17);
  func_0x000107c61574(uVar16);
  func_0x0001000285a8(0x112d382e8,&UNK_10d902020);
  func_0x000107c613fc();
  uVar17 = 0x10384e7fc;
  func_0x0001000bdd8c(0x10384e7fc,0);
  puVar10 = &UNK_11069cd80;
  func_0x000107c613fc(&UNK_11069cd80,0x18,7);
  *(undefined8 *)(puVar10 + 0x10) = uVar6;
  func_0x0001000285a8(0x112fa0040,&UNK_10dc15680);
  func_0x000107c613fc();
  func_0x000107c61174(uVar6);
  uVar16 = 0x10383dc88;
  func_0x0001000bdd8c(0x10383dc88,puVar10);
  lVar12 = 0;
  func_0x000100b72df0();
  func_0x000107c613fc();
  func_0x0001000c6560(0);
  func_0x000107c613fc();
  uVar13 = uVar20;
  func_0x000107c6157c();
  func_0x0001000c6580();
  *(undefined8 *)(lVar12 + 0x58) = uVar13;
  *(undefined8 *)(lVar12 + 0x10) = 1;
  *(undefined8 *)(lVar12 + 0x18) = uVar8;
  *(undefined8 *)(lVar12 + 0x20) = uVar17;
  *(undefined8 *)(lVar12 + 0x28) = uVar9;
  *(undefined8 *)(lVar12 + 0x30) = uVar15;
  *(undefined8 *)(lVar12 + 0x38) = uVar16;
  *(undefined8 *)(lVar12 + 0x40) = uVar20;
  *(undefined ***)(lVar12 + 0x48) = ppuVar11;
  *(undefined2 *)(lVar12 + 0x50) = 1;
  *(long *)(lVar5 + 0x10) = lVar12;
  lVar14 = *(long *)(param_8 + _DAT_113093a90);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar14 == 0) {
    func_0x000107c61170(uVar6);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_9);
    func_0x000107c61170(uVar18);
    func_0x000107c61574(uVar20);
    func_0x000107c61170(uVar1);
    func_0x000107c61574(lVar4);
  }
  else {
    func_0x000100079360(0);
    func_0x0001007dd39c(0);
    uVar15 = 0;
    func_0x0001007dd3bc(0);
    func_0x0001048c6ecc();
    uVar17 = uVar15;
    func_0x0001007dd440();
    func_0x000107c61170(uVar15);
    uVar15 = uVar17;
    func_0x0001007dd4e0(uVar17);
    func_0x000107c61170(uVar17);
    uVar17 = 0;
    func_0x0001000aad1c(0);
    func_0x0001000aad3c();
    uVar16 = 0;
    func_0x0001000295c4(0);
    func_0x000107c5ffdc();
    puVar10 = &UNK_11069cda8;
    func_0x000107c613fc(&UNK_11069cda8,0x18,7);
    func_0x000107c61644(puVar10 + 0x10,lVar12);
    uStack_c8 = 0x10383dc90;
    puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e0 = 0x42000000;
    puStack_d8 = &UNK_1000f6b44;
    puStack_d0 = &UNK_11069cdc0;
    ppuVar11 = &puStack_e8;
    puStack_c0 = puVar10;
    func_0x000107c60bc4(ppuVar11);
    func_0x000107c61574(puStack_c0);
    func_0x000107c5e08c(lVar14);
    func_0x000107c61180();
    func_0x000107c615e8();
    func_0x000107c61170(uVar18);
    func_0x000107c61574(uVar20);
    func_0x000107c61170(uVar1);
    func_0x000107c61574(lVar4);
    func_0x000107c60bd0(ppuVar11);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(param_8);
    func_0x000107c615e8(lVar14);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_9);
    func_0x000107c61170(uVar15);
    func_0x000107c61170(uVar17);
    func_0x000107c61170(uVar16);
  }
  func_0x000107c61170(lVar2);
  func_0x000107c61170(param_10);
  *(long *)(unaff_x20 + 0x10) = lVar5;
  func_0x0001000834e4(auStack_90);
  return unaff_x20;
}



/* Entry: 10383dc58; end: 10383dc7b;  */

void FUN_10383dc58(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10383dc7c; end: 10383dcb3;  */

void FUN_10383dc7c(void)

{
  return;
}



/* Entry: 10383dcb4; end: 10383dcd3;  */

void FUN_10383dcb4(void)

{
  func_0x000107c61168(&PTR_PTR_112fa1c80);
  return;
}



/* Entry: 10383dcd4; end: 10383dd67;  */

void FUN_10383dcd4(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_2;
    func_0x000107c3e060();
    func_0x000107c61180();
    func_0x000107c61170(param_2);
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 10383dd68; end: 10383dd8f;  */

void FUN_10383dd68(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*param_2;
  func_0x000107c3ebcc();
  *param_1 = uVar1;
  return;
}



/* Entry: 10383dd90; end: 10383de5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10383dd90(undefined1 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar2 = *(long *)(param_2 + _DAT_113081210);
    func_0x000107c615f0(lVar2);
    func_0x000107c61170(param_2);
    lVar1 = lVar2;
    func_0x000107c4cf78();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      lVar1 = lVar2;
      func_0x000107c5ac3c();
      uVar3 = (undefined1)lVar1;
      func_0x000107c615e8(lVar2);
      goto LAB_10383de48;
    }
  }
  uVar3 = 0;
LAB_10383de48:
  *param_1 = uVar3;
  return;
}



/* Entry: 10383de60; end: 10383e05b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10383de60(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long *plVar7;
  long lStack_c0;
  long lStack_b8;
  undefined1 uStack_a9;
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  plVar7 = &lStack_c0;
  func_0x000107c61428(param_3 + 0x10,auStack_a8,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 == 0) {
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    func_0x0001007b7bf0(param_3 + _DAT_112f9f6e8,&uStack_90);
    func_0x000107c61170(param_3);
  }
  func_0x0001000d224c(&uStack_a9);
  puVar3 = &UNK_11069ce18;
  func_0x000107c613fc(&UNK_11069ce18,0x18,7);
  func_0x000107c61614(puVar3 + 0x10,param_7);
  lVar4 = 0;
  FUN_10381a078();
  lVar5 = lVar4;
  func_0x000107c610f8();
  func_0x000107c61614(lVar5 + _DAT_112f9f290,0);
  puVar1 = (undefined8 *)(lVar5 + _DAT_112f9f298);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar2 = _DAT_112f9f2b0;
  func_0x0001000c6560(0);
  func_0x000107c613fc();
  func_0x000107c6157c(param_6);
  puVar6 = puVar3;
  func_0x000107c6157c();
  func_0x0001000c6580();
  *(undefined **)(lVar5 + lVar2) = puVar6;
  *(undefined8 *)(lVar5 + _DAT_112f9f2d8) = param_2;
  func_0x0001007b7bf0(&uStack_90,lVar5 + _DAT_112f9f2b8);
  *(undefined8 *)(lVar5 + _DAT_112f9f2a8) = param_4;
  *(undefined1 *)(lVar5 + _DAT_112f9f2a0) = uStack_a9;
  puVar1 = (undefined8 *)(lVar5 + _DAT_112f9f2c8);
  *puVar1 = FUN_10383ea00;
  puVar1[1] = param_6;
  puVar1 = (undefined8 *)(lVar5 + _DAT_112f9f2d0);
  *puVar1 = 0x10383ea08;
  puVar1[1] = puVar3;
  puVar6 = PTR_s_init_1125d9248;
  lStack_c0 = lVar5;
  lStack_b8 = lVar4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x000107c61154(&lStack_c0,puVar6);
  func_0x0001007b7c40(&uStack_90);
  func_0x000107c61574(puVar3);
  *param_1 = plVar7;
  return;
}



/* Entry: 10383e05c; end: 10383e117;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10383e05c(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 auStack_70 [24];
  undefined8 uStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1130813f0);
    func_0x000107c6157c(uVar2);
    func_0x000107c61170(param_1);
    func_0x0001000d224c(auStack_70);
    func_0x000107c61574(uVar2);
    func_0x0001000a8868(auStack_70,uStack_58);
    (**(code **)(lStack_50 + 0x30))(uStack_58,lStack_50);
    uVar1 = (uint)uStack_58;
    func_0x0001000834e4(auStack_70);
  }
  return uVar1 & 1;
}



/* Entry: 10383e118; end: 10383e19f;  */

long FUN_10383e118(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x000107c3e060();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    lVar2 = lVar1;
    func_0x000107c4500c(lVar1);
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
  }
  return lVar2;
}



/* Entry: 10383e1a0; end: 10383e1ab;  */

void FUN_10383e1a0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10383e1ac; end: 10383e91f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10383e1ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  code *pcVar10;
  code *pcVar11;
  long unaff_x20;
  undefined8 uVar12;
  
  func_0x000107c613fc();
  uVar1 = param_2;
  func_0x000107c3e0a8();
  func_0x000107c61180();
  uVar12 = *(undefined8 *)(param_4 + _DAT_112f9fbd0);
  puVar2 = &UNK_11069ce18;
  func_0x000107c613fc(&UNK_11069ce18,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,uVar1);
  func_0x0001000285a8(0x112f0fc20,&UNK_10dc15150);
  func_0x000107c613fc();
  func_0x000107c61174(uVar12);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  pcVar3 = FUN_10383e920;
  func_0x0001000bdd8c(FUN_10383e920,puVar2);
  func_0x0001000285a8(0x112d53860,&UNK_10d92b600);
  uVar4 = uVar1;
  func_0x000107c3e0c0(uVar1);
  func_0x000107c61180();
  uVar5 = uVar4;
  func_0x0001000b637c();
  func_0x000107c61170(uVar4);
  pcVar6 = FUN_10383dd68;
  func_0x0001000bfde0(FUN_10383dd68,0,PTR___sSbN_11034dd40);
  func_0x000107c61574(uVar5);
  puVar2 = &UNK_11069ce40;
  func_0x000107c613fc(&UNK_11069ce40,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_3);
  func_0x0001000285a8(0x112d382e8,&UNK_10d902020);
  func_0x000107c613fc();
  uVar4 = 0x10383e928;
  func_0x0001000bdd8c(0x10383e928,puVar2);
  puVar2 = &UNK_11069ce68;
  func_0x000107c613fc(&UNK_11069ce68,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,uVar12);
  puVar7 = &UNK_11069ce90;
  func_0x000107c613fc(&UNK_11069ce90,0x18,7);
  func_0x000107c61614(puVar7 + 0x10,param_5);
  puVar8 = &UNK_11069ceb8;
  func_0x000107c613fc(&UNK_11069ceb8,0x40,7);
  *(code **)(puVar8 + 0x10) = pcVar3;
  *(undefined **)(puVar8 + 0x18) = puVar2;
  *(code **)(puVar8 + 0x20) = pcVar6;
  *(undefined8 *)(puVar8 + 0x28) = uVar4;
  *(undefined **)(puVar8 + 0x30) = puVar7;
  *(undefined8 *)(puVar8 + 0x38) = uVar1;
  func_0x0001000285a8(0x112fa0a80,&UNK_10dc156c8);
  func_0x000107c613fc();
  func_0x000107c61174(uVar1);
  func_0x000107c6157c(pcVar3);
  func_0x000107c6157c(pcVar6);
  func_0x000107c6157c(uVar4);
  uVar5 = 0x10383e930;
  func_0x0001000bdd8c(0x10383e930,puVar8);
  uVar9 = 0x112fa0190;
  func_0x0001000285a8(0x112fa0190,&UNK_10dc156d0);
  pcVar10 = FUN_10383e1a0;
  func_0x0001000cb480(FUN_10383e1a0,0,uVar9);
  pcVar11 = pcVar10;
  func_0x0001003a5b88();
  func_0x000107c61574(pcVar10);
  puVar2 = PTR_PTR_1126ad780;
  func_0x000107c610f8(PTR_PTR_1126ad780);
  func_0x000107c45768();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(param_5);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(pcVar3);
  func_0x000107c61170(pcVar11);
  puVar7 = PTR_PTR_1126ad7c0;
  func_0x000107c610f8();
  func_0x000107c61174(puVar2);
  func_0x000107c4576c();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_4);
  *(undefined **)(unaff_x20 + 0x10) = puVar7;
  return;
}



/* Entry: 10383e920; end: 10383e933;  */

void FUN_10383e920(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = lVar2;
    func_0x000107c3e060();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 10383e934; end: 10383e97f;  */

void FUN_10383e934(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10383e980; end: 10383e98f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10383e980(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long *plVar11;
  long unaff_x20;
  long lStack_c0;
  long lStack_b8;
  undefined1 uStack_a9;
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar6 = *(long *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  plVar11 = &lStack_c0;
  func_0x000107c61428(lVar6 + 0x10,auStack_a8,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61618();
  if (lVar6 == 0) {
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    func_0x0001007b7bf0(lVar6 + _DAT_112f9f6e8,&uStack_90);
    func_0x000107c61170(lVar6);
  }
  func_0x0001000d224c(&uStack_a9);
  puVar7 = &UNK_11069ce18;
  func_0x000107c613fc(&UNK_11069ce18,0x18,7);
  func_0x000107c61614(puVar7 + 0x10,uVar5);
  lVar8 = 0;
  FUN_10381a078();
  lVar9 = lVar8;
  func_0x000107c610f8();
  func_0x000107c61614(lVar9 + _DAT_112f9f290,0);
  puVar1 = (undefined8 *)(lVar9 + _DAT_112f9f298);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar6 = _DAT_112f9f2b0;
  func_0x0001000c6560(0);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar4);
  puVar10 = puVar7;
  func_0x000107c6157c();
  func_0x0001000c6580();
  *(undefined **)(lVar9 + lVar6) = puVar10;
  *(undefined8 *)(lVar9 + _DAT_112f9f2d8) = uVar2;
  func_0x0001007b7bf0(&uStack_90,lVar9 + _DAT_112f9f2b8);
  *(undefined8 *)(lVar9 + _DAT_112f9f2a8) = uVar3;
  *(undefined1 *)(lVar9 + _DAT_112f9f2a0) = uStack_a9;
  puVar1 = (undefined8 *)(lVar9 + _DAT_112f9f2c8);
  *puVar1 = FUN_10383ea00;
  puVar1[1] = uVar4;
  puVar1 = (undefined8 *)(lVar9 + _DAT_112f9f2d0);
  *puVar1 = 0x10383ea08;
  puVar1[1] = puVar7;
  puVar10 = PTR_s_init_1125d9248;
  lStack_c0 = lVar9;
  lStack_b8 = lVar8;
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(&lStack_c0,puVar10);
  func_0x0001007b7c40(&uStack_90);
  func_0x000107c61574(puVar7);
  *param_1 = plVar11;
  return;
}



/* Entry: 10383e990; end: 10383e9b3;  */

void FUN_10383e990(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10383e9b4; end: 10383e9bf;  */

void FUN_10383e9b4(void)

{
  return;
}



/* Entry: 10383e9c0; end: 10383e9ff;  */

void FUN_10383e9c0(void)

{
  func_0x000107c61168(&PTR_PTR_112fa1d20);
  return;
}



/* Entry: 10383ea00; end: 10383ea1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10383ea00(void)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_70 [24];
  undefined8 uStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar1 + _DAT_1130813f0);
    func_0x000107c6157c(uVar3);
    func_0x000107c61170(lVar1);
    func_0x0001000d224c(auStack_70);
    func_0x000107c61574(uVar3);
    func_0x0001000a8868(auStack_70,uStack_58);
    (**(code **)(lStack_50 + 0x30))(uStack_58,lStack_50);
    uVar2 = (uint)uStack_58;
    func_0x0001000834e4(auStack_70);
  }
  return uVar2 & 1;
}



/* Entry: 10383ea20; end: 10383ebc3;  */

void FUN_10383ea20(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0001007b6e3c(0);
  func_0x000107c613fc();
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x00010388ced4(param_2,param_3);
  *param_1 = param_2;
  return;
}



/* Entry: 10383ebc4; end: 10383ec57;  */

void FUN_10383ebc4(long param_1)

{
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    func_0x000104875e28(auStack_48);
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 10383ec58; end: 10383ed33;  */

void FUN_10383ec58(undefined8 *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined1 auStack_78 [40];
  
  FUN_1038449a0();
  uVar1 = 0x112fa0390;
  func_0x0001000285a8(0x112fa0390,&UNK_10dc152d0);
  pcVar2 = FUN_10383ed34;
  func_0x0001000cb480(FUN_10383ed34,0,uVar1);
  func_0x0001000d224c(auStack_78);
  FUN_103893e40(0);
  func_0x000107c610f8();
  func_0x000107c6157c(in_x3);
  func_0x000107c6157c(in_x4);
  func_0x000107c6157c(in_x5);
  func_0x000103890d38(pcVar2,auStack_78,in_x3,in_x4,in_x5,1);
  *param_1 = pcVar2;
  return;
}



/* Entry: 10383ed34; end: 10383ed47;  */

void FUN_10383ed34(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = &PTR_DAT_1106a1938;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 10383ed48; end: 10383ed7f;  */

void FUN_10383ed48(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  *param_1 = puVar1;
  return;
}



/* Entry: 10383ed80; end: 10383ee9f;  */

void FUN_10383ed80(undefined8 *param_1,undefined8 param_2,uint param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  
  uVar3 = param_4;
  uVar4 = param_5;
  func_0x0001000d224c(&uStack_68);
  uVar1 = 0x112f9fdd0;
  uStack_80 = 0xe0;
  func_0x0001000285a8();
  FUN_1038a5554();
  puVar2 = &uStack_88;
  uStack_88 = uVar1;
  uStack_78 = uVar3;
  uStack_70 = uVar4;
  func_0x000100854cb0(puVar2);
  func_0x000107c61170(uVar1);
  FUN_10381e510(uVar3,uVar4);
  FUN_1038a4550(0);
  func_0x000107c610f8();
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x0001038a159c(uStack_68,&PTR_DAT_1106a18f8,param_3 & 0x10101,param_4,param_5 & 0xffffffff,
                      param_6,puVar2,0,param_7);
  *param_1 = uStack_68;
  param_1[1] = &PTR_DAT_1106a2208;
  return;
}



/* Entry: 10383eea0; end: 10383f123;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10383eea0(undefined8 *param_1,ulong param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 ****ppppuVar3;
  undefined8 uVar4;
  undefined8 ***pppuVar5;
  undefined8 ****ppppuVar6;
  undefined8 uVar7;
  undefined8 ***pppuVar8;
  undefined8 ***pppuStack_78;
  undefined1 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined **ppuStack_58;
  
  if ((param_2 & 1) == 0) {
    pppuVar5 = *(undefined8 ****)(param_3 + _DAT_1130385c0);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (pppuVar5 == (undefined8 ***)0x0) {
      pppuVar8 = (undefined8 ***)0x0;
    }
    else {
      pppuVar8 = pppuVar5;
      func_0x000107c403c8();
      func_0x000107c61180();
      func_0x000107c615e8(pppuVar5);
    }
    uVar4 = 0;
    func_0x00010381a734();
    func_0x000107c613fc();
    pppuVar5 = pppuVar8;
    func_0x000107c61174(pppuVar8);
    func_0x000107c6157c(param_5);
    FUN_10381a780(pppuVar8,param_5);
    func_0x000107c61170(pppuVar5);
    func_0x000107c61574(param_5);
    ppuStack_58 = &PTR_DAT_11069a288;
    uVar7 = 0;
    pppuStack_78 = pppuVar8;
    uStack_60 = uVar4;
    func_0x0001038908e0();
    func_0x000107c613fc();
    func_0x000107c6157c(param_5);
    func_0x000107c6157c(param_4);
    ppppuVar6 = &pppuStack_78;
    func_0x00010388f4e8(ppppuVar6,param_4,param_5);
    param_1[3] = uVar7;
    param_1[4] = &PTR_DAT_1106a1a60;
    param_1[5] = &PTR_DAT_1106a1a88;
    func_0x000107c61170(pppuVar5);
  }
  else {
    puVar1 = &UNK_11069cff8;
    uVar4 = param_5;
    func_0x000107c613fc(&UNK_11069cff8,0x18,7);
    *(long *)(puVar1 + 0x10) = param_3;
    func_0x0001000285a8(0x112fa03a8,&UNK_10dc15a70);
    uVar7 = 7;
    func_0x000107c613fc();
    func_0x000107c61174(param_3);
    pcVar2 = FUN_10383f818;
    func_0x0001000bdd8c(FUN_10383f818,puVar1);
    uStack_70 = 0xe0;
    func_0x0001000285a8(0x112f9fdd0);
    ppppuVar6 = (undefined8 ****)pcVar2;
    func_0x000107c6157c();
    FUN_1038a5554();
    ppppuVar3 = &pppuStack_78;
    pppuStack_78 = ppppuVar6;
    uStack_68 = uVar7;
    uStack_60 = uVar4;
    func_0x000100854cb0(ppppuVar3);
    func_0x000107c61170(ppppuVar6);
    FUN_10381e510(uVar7,uVar4);
    uVar4 = 0;
    FUN_10388caa4();
    func_0x000107c613fc();
    func_0x000107c6157c(param_5);
    func_0x000107c6157c(param_4);
    ppppuVar6 = (undefined8 ****)pcVar2;
    func_0x00010388bee8(pcVar2,param_4,param_5,ppppuVar3,1);
    param_1[3] = uVar4;
    param_1[4] = &PTR_DAT_1106a17d8;
    param_1[5] = &PTR_DAT_1106a1800;
    func_0x000107c61574(pcVar2);
  }
  *param_1 = ppppuVar6;
  return;
}



/* Entry: 10383f124; end: 10383f197;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10383f124(long *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x0001000285a8(0x112d59e88,&UNK_10d920c30);
  uVar1 = *(undefined8 *)(param_2 + _DAT_1130385c0);
  func_0x0001000bda74();
  lVar2 = 0;
  func_0x00010381b4c4();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = uVar1;
  *param_1 = lVar2;
  return;
}



/* Entry: 10383f198; end: 10383f243;  */

void FUN_10383f198(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  return;
}



/* Entry: 10383f244; end: 10383f5fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10383f244(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  long lStack_68;
  
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113034ff8);
  uVar5 = *(undefined8 *)(param_3 + _DAT_113038580);
  uVar6 = *(undefined8 *)(param_8 + _DAT_112fa4200);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = param_9;
  func_0x000107c4ae78();
  func_0x000107c61180();
  func_0x0001000d224c(auStack_88);
  FUN_10383f7a8(auStack_88,uStack_70);
  uVar3 = uStack_70;
  (**(code **)(lStack_68 + 0x10))(uStack_70,lStack_68);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_9);
  lVar4 = 0x112fa1e20;
  func_0x0001000285a8(0x112fa1e20,&UNK_10dc16110);
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x90) = 0;
  *(undefined8 *)(lVar4 + 0x98) = 0;
  *(undefined8 *)(lVar4 + 0x10) = uVar1;
  *(undefined8 *)(lVar4 + 0x18) = uVar5;
  *(undefined8 *)(lVar4 + 0x20) = param_4;
  *(undefined8 *)(lVar4 + 0x28) = param_5;
  *(undefined8 *)(lVar4 + 0x30) = param_6;
  *(undefined8 *)(lVar4 + 0x38) = param_7;
  *(undefined8 *)(lVar4 + 0x40) = uVar6;
  *(undefined8 *)(lVar4 + 0x48) = uVar2;
  *(undefined8 *)(lVar4 + 0x50) = param_10;
  *(undefined8 *)(lVar4 + 0x58) = param_11;
  *(code **)(lVar4 + 0x60) = FUN_10383f5fc;
  *(undefined8 *)(lVar4 + 0x68) = 0;
  *(undefined8 *)(lVar4 + 0x70) = 0x10383f628;
  *(undefined8 *)(lVar4 + 0x78) = 0;
  *(undefined8 *)(lVar4 + 0x80) = param_12;
  *(byte *)(lVar4 + 0x88) = (byte)uVar3 & 1;
  func_0x0001000834e4(auStack_88);
  *(long *)(unaff_x20 + 0x10) = lVar4;
  return unaff_x20;
}



/* Entry: 10383f5fc; end: 10383f6ab;  */

void FUN_10383f5fc(void)

{
  func_0x000107c610f8(PTR_PTR_1126ad7c8);
                    /* WARNING: Could not recover jumptable at 0x00010bff3ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10383f6ac; end: 10383f6cf;  */

void FUN_10383f6ac(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10383f6d0; end: 10383f6f3;  */

void FUN_10383f6d0(void)

{
  func_0x00010382a88c();
  return;
}



/* Entry: 10383f6f4; end: 10383f6ff;  */

undefined8 FUN_10383f6f4(void)

{
  return 0;
}



/* Entry: 10383f700; end: 10383f77b;  */

void FUN_10383f700(long param_1)

{
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_90 = PTR___sBOWV_11034d658 + 0x40;
  puStack_40 = PTR___syycWV_11034f1c0 + 0x40;
  puStack_28 = &UNK_10dc161d8;
  puStack_20 = &UNK_10dc161f0;
  puStack_18 = &UNK_10dc161f0;
  puStack_88 = puStack_90;
  puStack_80 = puStack_90;
  puStack_78 = puStack_90;
  puStack_70 = puStack_90;
  puStack_68 = puStack_90;
  puStack_60 = puStack_90;
  puStack_58 = puStack_90;
  puStack_50 = puStack_90;
  puStack_48 = puStack_90;
  puStack_38 = puStack_40;
  puStack_30 = puStack_90;
  func_0x000107c61524(param_1,0,0x10,&puStack_90,param_1 + 0x60);
  return;
}



/* Entry: 10383f77c; end: 10383f787;  */

void FUN_10383f77c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e7839f4);
  return;
}



/* Entry: 10383f788; end: 10383f7a7;  */

void FUN_10383f788(void)

{
  func_0x000107c61168(&PTR_PTR_112fa1ee8);
  return;
}



/* Entry: 10383f7a8; end: 10383f7cb;  */

long * FUN_10383f7a8(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(*(long *)(param_2 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) != 0) {
    uVar2 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(*param_1 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  }
  return param_1;
}



/* Entry: 10383f7cc; end: 10383f817;  */

void FUN_10383f7cc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x0001000d224c(&uStack_40);
  uVar1 = uStack_40;
  func_0x000107c614f0();
  uVar2 = *(undefined8 *)(lStack_38 + 8);
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  *param_1 = uStack_40;
  return;
}



/* Entry: 10383f818; end: 10383f81f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10383f818(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x0001000285a8(0x112d59e88,&UNK_10d920c30);
  uVar1 = *(undefined8 *)(lVar2 + _DAT_1130385c0);
  func_0x0001000bda74();
  lVar2 = 0;
  func_0x00010381b4c4();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = uVar1;
  *param_1 = lVar2;
  return;
}



/* Entry: 10383f820; end: 103840e8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10383f820(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,long param_7,long param_8,long param_9,long param_10)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined *puVar14;
  code *pcVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long lVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  long lVar30;
  long lVar31;
  code *pcVar32;
  code *pcVar33;
  undefined *puVar34;
  code *pcVar35;
  undefined *puVar36;
  long lVar37;
  undefined *puVar38;
  undefined *puVar39;
  code *pcVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  long lVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined *puVar49;
  long lVar50;
  undefined8 *puVar51;
  long unaff_x20;
  undefined8 uVar52;
  long *plVar53;
  long lVar54;
  code *pcVar55;
  undefined8 uVar56;
  undefined *puVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  undefined *puStack_528;
  undefined *puStack_410;
  undefined1 auStack_350 [40];
  undefined *apuStack_328 [3];
  undefined *puStack_310;
  undefined **ppuStack_308;
  long lStack_300;
  long lStack_2f8;
  long *aplStack_2f0 [3];
  long lStack_2d8;
  undefined **ppuStack_2d0;
  undefined8 uStack_2c8;
  undefined1 uStack_2c0;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  char cStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  long lStack_278;
  long lStack_270;
  undefined1 uStack_268;
  code *pcStack_260;
  code *pcStack_258;
  undefined1 uStack_250;
  undefined1 auStack_248 [88];
  undefined8 uStack_1f0;
  undefined1 uStack_1e8;
  undefined8 uStack_1e0;
  undefined **ppuStack_1d8;
  undefined **ppuStack_1d0;
  undefined8 uStack_1c8;
  code *pcStack_1c0;
  undefined1 uStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  code *pcStack_1a0;
  undefined8 uStack_198;
  undefined1 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 auStack_120 [24];
  ulong uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  func_0x000107c613fc();
  uVar3 = param_6;
  func_0x000107c3e0a8();
  func_0x000107c61180();
  lVar4 = *(long *)(param_7 + _DAT_112f9fbd0);
  func_0x000107c61174();
  uVar5 = param_5;
  func_0x000107c4ae78();
  func_0x000107c61180();
  lVar6 = *(long *)(param_10 + _DAT_112fe94f0);
  uVar52 = *(undefined8 *)(param_9 + _DAT_1130813f0);
  func_0x000107c61174();
  func_0x000107c6157c(uVar52);
  func_0x0001000d224c(auStack_120);
  func_0x000107c61574(uVar52);
  lVar9 = lStack_100;
  uVar8 = uStack_108;
  func_0x0001000a8868(auStack_120,uStack_108);
  pcVar55 = *(code **)(lVar9 + 0x48);
  lVar7 = param_2;
  func_0x000107c61174();
  (*pcVar55)(uVar8,lVar9);
  lVar9 = 0;
  func_0x000103822894();
  func_0x000107c61534();
  *(undefined8 *)(lVar9 + 0x10) = 0;
  *(long *)(lVar9 + 0x18) = param_2;
  *(byte *)(lVar9 + 0x20) = (byte)uVar8 & 1;
  func_0x0001000a8868(auStack_120,uStack_108);
  (**(code **)(lStack_100 + 0x40))(uStack_108,lStack_100);
  uVar52 = 0;
  if ((uStack_108 & 1) != 0) {
    uVar52 = *(undefined8 *)(lVar7 + _DAT_11306db00);
    func_0x000107c5b3f0();
    FUN_103822094();
  }
  func_0x000107c61170(lVar7);
  plVar53 = (long *)(param_3 + _DAT_112fa2d40);
  func_0x0001000a8868(plVar53,plVar53[3]);
  uVar48 = *(undefined8 *)(param_1 + _DAT_112fa56f8);
  puVar57 = &UNK_10d923f50;
  func_0x0001000285a8(0x112d5d810);
  uVar56 = uVar5;
  func_0x000107c4ac68();
  func_0x000107c61180();
  uVar10 = uVar56;
  func_0x0001000bda74();
  func_0x000107c61170(uVar56);
  uVar11 = uVar5;
  func_0x000107c4aeb4();
  func_0x000107c61180();
  uVar56 = *(undefined8 *)(param_8 + _DAT_11307cf68);
  ppuVar12 = &PTR____CFConstantStringClassReference_110f30b98;
  func_0x000107c5faec();
  func_0x0001000285a8(0x112d382e8,&UNK_10d902020);
  func_0x000107c61534();
  pcVar55 = FUN_103840f7c;
  func_0x0001000bdd8c(FUN_103840f7c,0);
  puVar13 = &UNK_11069d028;
  func_0x000107c613fc(&UNK_11069d028,0x18,7);
  func_0x000107c61614(puVar13 + 0x10,uVar56);
  puVar14 = &UNK_11069d050;
  func_0x000107c613fc(&UNK_11069d050,0x18,7);
  *(undefined8 *)(puVar14 + 0x10) = param_4;
  func_0x0001000285a8(0x112fa03c8,&UNK_10dc15780);
  func_0x000107c61534();
  func_0x000107c61174();
  pcVar15 = FUN_103840ffc;
  func_0x0001000bdd8c(FUN_103840ffc,puVar14);
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_150 = 0;
  uStack_1f0 = 2;
  uStack_1e8 = 1;
  uStack_1e0 = 7;
  uStack_1b8 = 1;
  uStack_1b0 = 0x103840f84;
  uStack_198 = 0;
  uStack_190 = 0;
  uStack_180 = 0;
  uStack_188 = 1;
  uStack_178 = 0;
  lVar54 = *plVar53;
  uVar56 = *(undefined8 *)(lVar54 + 0x10);
  lVar17 = *(long *)(lVar54 + 0x18);
  lVar9 = *(long *)(lVar54 + 0x20);
  puVar14 = *(undefined **)(lVar54 + 0x28);
  uVar18 = *(undefined8 *)(lVar54 + 0x30);
  uVar19 = *(undefined8 *)(lVar54 + 0x38);
  uVar20 = *(undefined8 *)(lVar54 + 0x40);
  uVar21 = *(undefined8 *)(lVar54 + 0x48);
  uVar22 = *(undefined8 *)(lVar54 + 0x50);
  uVar23 = *(undefined8 *)(lVar54 + 0x58);
  uVar24 = *(undefined8 *)(lVar54 + 0x60);
  lVar25 = *(long *)(lVar54 + 0x68);
  puVar49 = *(undefined **)(lVar54 + 0x70);
  ppuStack_1d8 = ppuVar12;
  ppuStack_1d0 = (undefined **)puVar57;
  uStack_1c8 = uVar52;
  pcStack_1c0 = pcVar55;
  puStack_1a8 = puVar13;
  pcStack_1a0 = pcVar15;
  FUN_103825850(&uStack_1f0,&uStack_2c8);
  lVar50 = *(long *)(lVar54 + 0x78);
  lVar16 = 0;
  func_0x00010384c030();
  lVar54 = lVar16;
  func_0x000107c613fc();
  func_0x000107c6157c(uVar52);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c6157c(uVar10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x0001000d224c(&uStack_98);
  uVar42 = 0;
  uVar43 = 0;
  lVar46 = 0;
  uVar44 = 0;
  uVar45 = 0;
  uVar47 = 0;
  if ((char)uStack_98 == '\x01') {
    puVar57 = puVar14;
    func_0x000107c4b100(puVar14);
    func_0x000107c61180();
    FUN_1038233a8(&uStack_f8);
    func_0x000107c61170(puVar57);
    uVar42 = uStack_d8;
    uVar43 = uStack_f8;
    lVar46 = lStack_f0;
    uVar44 = uStack_e8;
    uVar45 = uStack_e0;
    uVar47 = uStack_d0;
  }
  uStack_c8 = uVar43;
  lStack_c0 = lVar46;
  uStack_b8 = uVar44;
  uStack_b0 = uVar45;
  uStack_a8 = uVar42;
  uStack_a0 = uVar47;
  if (cStack_290 == '\x01') {
    puVar57 = puVar14;
    func_0x000107c4b100();
    func_0x000107c61180();
    puVar13 = puVar57;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(puVar57);
    puStack_410 = puVar13;
    if (puVar13 != (undefined *)0x0) {
      puVar57 = puVar13;
      func_0x000107c4daf8();
      func_0x000107c615e8(puVar13);
      if ((int)puVar57 == 0) {
        puStack_410 = (undefined *)0x0;
        puVar57 = puVar13;
      }
      else {
        puStack_410 = puVar49;
        FUN_10384c71c();
        puVar57 = puStack_410;
        if (puStack_410 != (undefined *)0x0) {
          func_0x000107c615f0(puStack_410);
          func_0x000107c5bc1c();
        }
      }
    }
    *(undefined **)(lVar54 + 0x28) = puStack_410;
    if (puStack_410 == (undefined *)0x0) {
      FUN_103822e30();
      puStack_410 = (undefined *)0x0;
    }
    else {
      puVar57 = puStack_410;
      func_0x000107c615f0(puStack_410);
      FUN_103823038();
    }
    func_0x000107c6157c(puVar57);
    func_0x0001000285a8(0x112da9c48,&UNK_10dc15350);
    uVar26 = *(undefined8 *)(lVar9 + _DAT_113080ad0);
    func_0x0001000bda74(uVar26);
    func_0x000107c6157c();
    uVar1 = uStack_2a0;
    uVar28 = uStack_288;
    uVar58 = uStack_280;
    uVar2 = uStack_250;
  }
  else {
    puStack_410 = (undefined *)0x0;
    uVar26 = 0;
    puVar57 = (undefined *)0x0;
    *(undefined8 *)(lVar54 + 0x28) = 0;
    uVar1 = uStack_2a0;
    uVar28 = uStack_288;
    uVar58 = uStack_280;
    uVar2 = uStack_250;
  }
  if (lStack_278 == 0) {
    uVar29 = 0;
  }
  else {
    func_0x0001000d224c(&uStack_98);
    uVar29 = uStack_98;
  }
  FUN_1038796f4(0);
  func_0x000107c610f8();
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(uVar58);
  func_0x00010382597c(uVar43,lVar46,uVar44,uVar45,uVar42,uVar47);
  func_0x000107c6157c(uVar1);
  uVar27 = uVar10;
  func_0x000103878a74(uVar10,uVar28,uVar58,uVar1,puVar57,&uStack_c8,uVar26,uVar29,uVar2);
  func_0x000107c615e8(puStack_410);
  func_0x000107c61574(uVar26);
  func_0x000107c61574(puVar57);
  uVar26 = uVar56;
  func_0x000107c41284();
  func_0x000107c61180();
  uVar28 = uVar26;
  func_0x000107c4f750();
  func_0x000107c61180();
  func_0x000107c615e8(uVar26);
  uVar26 = uVar18;
  func_0x000107c4b2f8();
  func_0x000107c61180();
  if (lStack_270 == 0) {
    puVar57 = &UNK_11069d078;
    func_0x000107c613fc(&UNK_11069d078,0x18,7);
    *(undefined8 *)(puVar57 + 0x10) = uVar26;
    uVar26 = 0x112fa03d0;
    func_0x0001000285a8(0x112fa03d0,&UNK_10dc15ff0);
    func_0x000107c613fc();
    pcVar55 = (code *)0x103841004;
    func_0x0001000bdd8c(0x103841004,puVar57,uVar26);
  }
  else {
    func_0x000107c6157c(lStack_270);
    uVar58 = 0x112fa0410;
    func_0x0001000285a8(0x112fa0410,&UNK_10dc15370);
    pcVar55 = FUN_10384bf80;
    func_0x0001000cb480(FUN_10384bf80,0,uVar58);
    func_0x000107c61574(lStack_270);
    func_0x000107c61170(uVar26);
  }
  puVar57 = &UNK_11069d0a0;
  func_0x000107c613fc(&UNK_11069d0a0,0x18,7);
  func_0x000107c61614(puVar57 + 0x10,uVar3);
  puVar13 = &UNK_11069d0c8;
  func_0x000107c613fc(&UNK_11069d0c8,0x28,7);
  *(undefined **)(puVar13 + 0x10) = puVar57;
  *(code **)(puVar13 + 0x18) = pcVar55;
  *(undefined8 *)(puVar13 + 0x20) = uVar11;
  func_0x0001000285a8(0x112fa03d8,&UNK_10dc15310);
  func_0x000107c613fc();
  func_0x000107c61174();
  uVar26 = 0x10384100c;
  func_0x0001000bdd8c(0x10384100c,puVar13);
  if (lVar46 == 0) {
    puVar51 = (undefined8 *)0x0;
  }
  else {
    uStack_98 = uVar43;
    lStack_90 = lVar46;
    uStack_88 = uVar44;
    uStack_80 = uVar45;
    uStack_78 = uVar42;
    uStack_70 = uVar47;
    FUN_103883920(0);
    func_0x000107c610f8();
    uVar58 = uVar11;
    func_0x000107c61174(uVar11);
    func_0x000107c61434(lVar46);
    func_0x000107c61434(uVar45);
    func_0x000107c61434(uVar47);
    puVar51 = &uStack_98;
    FUN_1038831fc(puVar51,uVar58);
  }
  puVar57 = &UNK_11069d0a0;
  func_0x000107c613fc(&UNK_11069d0a0,0x18,7);
  func_0x000107c61614(puVar57 + 0x10,uVar3);
  uVar58 = 0x112fa03e0;
  func_0x0001000285a8(0x112fa03e0,&UNK_10dc15a80);
  func_0x000107c613fc();
  uVar29 = 0x103841018;
  func_0x0001000bdd8c(0x103841018,puVar57,uVar58);
  uVar58 = *(undefined8 *)(lVar6 + _DAT_112fe95f8);
  uVar59 = *(undefined8 *)(lVar4 + _DAT_112f9f6e0);
  lVar30 = 0;
  FUN_10381fe7c();
  lVar31 = lVar30;
  func_0x000107c610f8();
  *(undefined8 *)(lVar31 + _DAT_112f9ffa0) = 0;
  *(undefined8 *)(lVar31 + _DAT_112f9ffa8) = 1;
  *(undefined8 *)(lVar31 + _DAT_112f9ffb0) = 0;
  *(undefined8 *)(lVar31 + _DAT_112f9ff88) = uVar58;
  *(undefined8 *)(lVar31 + _DAT_112f9ff90) = uVar29;
  *(undefined8 *)(lVar31 + _DAT_112f9ff98) = uVar59;
  puVar57 = PTR_s_init_1125d9248;
  lStack_300 = lVar31;
  lStack_2f8 = lVar30;
  func_0x000107c6157c(uVar58);
  func_0x000107c6157c(uVar29);
  func_0x000107c6157c(uVar59);
  plVar53 = &lStack_300;
  func_0x000107c61154(plVar53,puVar57);
  ppuStack_2d0 = &PTR_DAT_11069a800;
  lStack_2d8 = lVar30;
  func_0x000107c61574(uVar29);
  uVar58 = *(undefined8 *)(lVar17 + _DAT_113071300);
  aplStack_2f0[0] = plVar53;
  FUN_103841034(aplStack_2f0,apuStack_328);
  puVar57 = &UNK_11069d0f0;
  func_0x000107c613fc(&UNK_11069d0f0,0x62,7);
  *(undefined8 *)(puVar57 + 0x10) = uVar58;
  *(undefined8 *)(puVar57 + 0x18) = uVar26;
  func_0x000100d5ffd8(apuStack_328,puVar57 + 0x20);
  *(undefined8 *)(puVar57 + 0x48) = uVar28;
  *(undefined8 **)(puVar57 + 0x50) = puVar51;
  *(undefined8 *)(puVar57 + 0x58) = uStack_2c8;
  puVar57[0x60] = uStack_2c0;
  puVar57[0x61] = uStack_268;
  func_0x0001000285a8(0x112fa03e8,&UNK_10dc15320);
  func_0x000107c613fc();
  func_0x000107c61174(uVar58);
  func_0x000107c6157c(uVar26);
  func_0x000107c61174();
  func_0x000107c61174();
  puVar13 = (undefined *)0x103841020;
  func_0x0001000bdd8c(0x103841020,puVar57);
  pcVar15 = pcStack_258;
  pcVar55 = pcStack_260;
  if (pcStack_260 == (code *)0x1) {
    func_0x0001000285a8(0x112f6cf68,&UNK_10dbcadf0);
    uVar58 = uVar22;
    func_0x000107c3ee24(uVar22);
    func_0x000107c61180();
    uVar29 = uVar58;
    func_0x0001000bda74();
    func_0x000107c61170(uVar58);
    uVar58 = 0x112d3b7d8;
    func_0x0001000285a8(0x112d3b7d8,&UNK_10d920690);
    pcVar55 = FUN_10384c61c;
    func_0x0001000cb480(FUN_10384c61c,0,uVar58);
    pcVar15 = FUN_10384c65c;
    func_0x0001000cb480(FUN_10384c65c,0,uVar58);
    func_0x000107c61574(uVar29);
  }
  func_0x0001000285a8(0x112e5b730,&UNK_10dc15a90);
  FUN_1038259d8(pcStack_260,pcStack_258);
  uVar58 = uVar20;
  func_0x000107c4c974(uVar20);
  func_0x000107c61180();
  uVar29 = uVar58;
  func_0x0001000bda74();
  func_0x000107c61170(uVar58);
  uVar58 = 0x112e5b738;
  func_0x0001000285a8(0x112e5b738,&UNK_10da61720);
  pcVar32 = FUN_10384b8d8;
  func_0x0001000cb480(FUN_10384b8d8,0,uVar58);
  func_0x000107c61574(uVar29);
  pcVar33 = FUN_10384b914;
  func_0x0001000cb480(FUN_10384b914,0,&UNK_11077ec38);
  puVar57 = &UNK_11069d118;
  func_0x000107c613fc(&UNK_11069d118,0x18,7);
  func_0x000107c61614(puVar57 + 0x10,uVar19);
  func_0x0001000285a8(0x112d53a70,&UNK_10d91a680);
  func_0x000107c613fc();
  uVar58 = 0x103841024;
  func_0x0001000bdd8c(0x103841024,puVar57);
  puVar57 = puVar14;
  func_0x000107c4b100();
  func_0x000107c61180();
  puVar34 = puVar57;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(puVar57);
  if (puVar34 == (undefined *)0x0) {
    puStack_528 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar57 = puVar34;
    func_0x000107c5b458();
    func_0x000107c61180();
    puStack_528 = puVar57;
    func_0x000107c5fc54();
    func_0x000107c61170(puVar57);
  }
  func_0x0001000285a8(0x112d4f8d0,&UNK_10dc15330);
  uVar29 = uVar23;
  func_0x000107c5c360(uVar23);
  func_0x000107c61180();
  uVar59 = uVar29;
  func_0x0001000bda74();
  func_0x000107c61170(uVar29);
  uVar29 = 0x112d5ba30;
  func_0x0001000285a8(0x112d5ba30,&UNK_10d929a50);
  pcVar35 = FUN_10384ba24;
  func_0x0001000cb480(FUN_10384ba24,0,uVar29);
  func_0x000107c61574(uVar59);
  puVar57 = &UNK_11069d140;
  func_0x000107c613fc(&UNK_11069d140,0x20,7);
  *(undefined8 *)(puVar57 + 0x10) = uVar24;
  *(undefined8 *)(puVar57 + 0x18) = uVar21;
  func_0x0001000285a8(0x112fa03f0,&UNK_10dc15340);
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar29 = 0x10384102c;
  func_0x0001000bdd8c(0x10384102c,puVar57);
  puVar36 = (undefined *)0x0;
  FUN_1038806d8();
  puVar57 = puVar36;
  func_0x000107c613fc();
  FUN_103825a1c(auStack_248,apuStack_328);
  if (puStack_310 == (undefined *)0x0) {
    FUN_103819ed4();
  }
  else {
    func_0x000100d5ffd8(apuStack_328,auStack_350);
    lVar31 = 0x112fa0408;
    func_0x0001000285a8(0x112fa0408,&UNK_10dc15360);
    func_0x000107c613fc();
    *(undefined8 *)(lVar31 + 0x18) = 2;
    *(undefined8 *)(lVar31 + 0x10) = 1;
    *(undefined8 *)(lVar31 + 0x20) = uStack_2b0;
    *(undefined8 *)(lVar31 + 0x28) = uStack_2a8;
    FUN_103841034(auStack_350,lVar31 + 0x30);
    func_0x000107c61434(uStack_2a8);
    FUN_103819ed4();
    func_0x000107c61588(lVar31);
    FUN_10384110c((undefined8 *)(lVar31 + 0x20),0x112f9f310,&UNK_10dc15ac0);
    func_0x000107c6145c(lVar31,0x20,7);
    func_0x0001000834e4(auStack_350);
  }
  lVar31 = lVar25;
  func_0x000107c4b3b8();
  func_0x000107c61180();
  lVar30 = lVar31;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar31);
  func_0x0001000285a8(0x112eb17c0,&UNK_10dac6140);
  if (lVar30 == 0) {
    puVar39 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x000107c610f8();
    func_0x000107c453e4();
    ppuVar12 = apuStack_328;
    apuStack_328[0] = puVar39;
    func_0x000100854cb0();
    func_0x000107c61170(puVar39);
  }
  else {
    lVar31 = lVar30;
    func_0x000107c5006c(lVar30);
    func_0x000107c61180();
    lVar37 = lVar31;
    func_0x0001000b637c();
    func_0x000107c61170(lVar31);
    func_0x0001000d224c(apuStack_328);
    puVar39 = apuStack_328[0];
    func_0x000100471e0c(apuStack_328[0],1);
    func_0x000107c61574(lVar37);
    func_0x000107c615e8(apuStack_328[0]);
    puVar38 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x000107c610f8();
    func_0x000107c453e4();
    ppuVar12 = apuStack_328;
    apuStack_328[0] = puVar38;
    func_0x0001006c71a4();
    func_0x000107c61170(puVar38);
    func_0x000107c615e8(lVar30);
    func_0x000107c61574(puVar39);
  }
  func_0x000107c61434(uStack_2a8);
  func_0x000107c6157c(ppuVar12);
  func_0x000107c6157c(pcVar32);
  func_0x000107c6157c(pcVar35);
  func_0x000107c6157c(pcVar33);
  func_0x000107c6157c(uVar58);
  func_0x000107c6157c(uVar29);
  pcVar40 = FUN_10384bbe4;
  func_0x0001000cb480(FUN_10384bbe4,0,&UNK_11077ebd0);
  ppuStack_308 = &PTR_DAT_1106a0c40;
  apuStack_328[0] = puVar57;
  puStack_310 = puVar36;
  func_0x000107c6157c(puVar57);
  uVar59 = 0x10384bc2c;
  func_0x0001000cb480(0x10384bc2c,0,PTR___sSbN_11034dd40);
  uVar60 = *(undefined8 *)(lVar50 + _DAT_112fa6450);
  uVar41 = 0;
  FUN_10388ac54();
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x00010382597c(uVar43,lVar46,uVar44,uVar45,uVar42,uVar47);
  func_0x000107c6157c(pcVar15);
  func_0x000107c6157c(uVar1);
  func_0x000107c61174();
  func_0x000107c6157c(uVar60);
  func_0x000107c6157c(puVar13);
  func_0x000107c6157c(pcVar55);
  puVar36 = puVar13;
  func_0x000103888844(puVar13,pcVar32,uVar28,puStack_528,uVar11,pcVar55,pcVar15,ppuVar12,pcVar35,
                      pcVar33,uVar58,uVar29,uStack_2b0,uStack_2a8,pcVar40,apuStack_328,uVar59,uVar1,
                      &uStack_c8,uVar60,uVar2);
  ppuStack_308 = &PTR_DAT_1106a1598;
  puStack_310 = (undefined *)uVar41;
  func_0x000107c61574(puVar57);
  func_0x000107c61574(uVar29);
  func_0x000107c61574(uVar58);
  func_0x000107c61574(pcVar33);
  func_0x000107c61574(pcVar35);
  func_0x000107c61574(pcVar32);
  func_0x000107c615e8(puVar34);
  func_0x000107c61574(ppuVar12);
  func_0x000103825a6c(uVar43,lVar46,uVar44,uVar45,uVar42,uVar47);
  apuStack_328[0] = puVar36;
  func_0x0001000285a8(0x112fa0400,&UNK_10dc15ab0);
  uVar42 = uVar28;
  func_0x000107c3f6e8();
  func_0x000107c61180();
  uVar43 = uVar42;
  func_0x0001000bda74();
  func_0x000107c61170(uVar42);
  func_0x0001000285a8(0x112da9c48,&UNK_10dc15350);
  uVar44 = *(undefined8 *)(lVar9 + _DAT_113080ad0);
  func_0x000107c61174(uVar44);
  uVar42 = uVar44;
  func_0x0001000bda74();
  func_0x000107c61170(uVar44);
  FUN_103841034(apuStack_328,auStack_350);
  uVar45 = 0;
  FUN_103872568();
  uVar44 = uVar45;
  func_0x000107c610f8();
  FUN_1038714fc(uVar43,uVar42,auStack_350,uVar44);
  *(undefined8 *)(lVar54 + 0x10) = uVar48;
  *(undefined8 *)(lVar54 + 0x18) = uVar43;
  func_0x0001000285a8(0x112f421e0,&UNK_10db8f110);
  func_0x000107c61174(uVar48);
  func_0x000107c61174(uVar43);
  uVar42 = uVar3;
  func_0x000107c3e060();
  func_0x000107c61180();
  uVar44 = uVar42;
  func_0x0001000bda74();
  func_0x000107c61170();
  FUN_1038714a4();
  lVar46 = 0;
  func_0x00010384cca8();
  func_0x000107c613fc();
  uVar47 = 0;
  func_0x0001005f60b4();
  func_0x000107c613fc();
  func_0x0001005f60d4();
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(puVar51);
  func_0x000107c61574(uVar26);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar24);
  func_0x000107c61574(pcVar15);
  func_0x000107c61574(pcVar55);
  func_0x000107c61170(uVar48);
  func_0x000107c61170(uVar43);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar17);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(lVar50);
  func_0x000107c61170(uVar56);
  func_0x000107c61170(puVar14);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(lVar25);
  func_0x000107c61170(puVar49);
  func_0x000107c615e8(puStack_410);
  *(undefined8 *)(lVar46 + 0x10) = uVar44;
  *(undefined8 *)(lVar46 + 0x18) = uVar42;
  *(undefined **)(lVar46 + 0x20) = puVar13;
  *(undefined8 *)(lVar46 + 0x28) = uVar47;
  func_0x0001000834e4(apuStack_328);
  func_0x0001000834e4(aplStack_2f0);
  func_0x000103825aa8(&uStack_2c8);
  *(long *)(lVar54 + 0x20) = lVar46;
  func_0x000107c61574(uVar10);
  *(long *)(unaff_x20 + 0x28) = lVar16;
  *(undefined ***)(unaff_x20 + 0x30) = &PTR_DAT_11069df40;
  func_0x000107c61574(uVar10);
  func_0x000107c61170(uVar11);
  plVar53 = (long *)(unaff_x20 + 0x10);
  *plVar53 = lVar54;
  func_0x000103825aa8(&uStack_1f0);
  func_0x0001000a8868(plVar53,lVar16);
  lVar9 = *plVar53;
  FUN_103871654();
  uVar56 = *(undefined8 *)(lVar9 + 0x10);
  uVar18 = *(undefined8 *)(lVar9 + 0x18);
  ppuStack_1d0 = &PTR_DAT_11069f880;
  uStack_1f0 = uVar18;
  ppuStack_1d8 = (undefined **)uVar45;
  FUN_10388af40(0);
  func_0x000107c610f8();
  func_0x000107c61174(uVar18);
  puVar51 = &uStack_1f0;
  func_0x00010388ae60(puVar51);
  func_0x000107c4fba8(uVar56);
  func_0x000107c61170(puVar51);
  FUN_10384c9b0();
  func_0x000107c61170(lVar7);
  func_0x000107c61574(uVar52);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(lVar6);
  func_0x0001000834e4(auStack_120);
  return unaff_x20;
}



/* Entry: 103840e8c; end: 103840f2f;  */

undefined8 FUN_103840e8c(void)

{
  long unaff_x20;
  undefined1 auStack_58 [24];
  long lStack_40;
  long lStack_38;
  
  func_0x0001000a8868(unaff_x20 + 0x10,*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000100c82230();
  func_0x000104875e28(auStack_58);
  if (lStack_40 == 0) {
    FUN_10384110c(auStack_58,0x112fa0418,&UNK_10dc15790);
  }
  else {
    func_0x0001000a8868(auStack_58,lStack_40);
    (**(code **)(lStack_38 + 0x30))(lStack_40,lStack_38);
    func_0x0001000834e4(auStack_58);
  }
  return 0;
}



/* Entry: 103840f30; end: 103840f53;  */

void FUN_103840f30(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103840f54; end: 103840f57;  */

void FUN_103840f54(void)

{
  return;
}



/* Entry: 103840f58; end: 103840f7b;  */

undefined8 FUN_103840f58(void)

{
  FUN_103840e8c();
  return 0;
}



/* Entry: 103840f7c; end: 103840f8b;  */

void FUN_103840f7c(undefined1 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 103840f8c; end: 103840ffb;  */

void FUN_103840f8c(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c4b100();
  func_0x000107c61180();
  lVar1 = param_2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c4db00();
    func_0x000107c615e8(lVar1);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 103840ffc; end: 103841033;  */

void FUN_103840ffc(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c4b100();
  func_0x000107c61180();
  lVar1 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c4db00();
    func_0x000107c615e8(lVar1);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 103841034; end: 103841077;  */

long FUN_103841034(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 103841078; end: 1038410ef;  */

void FUN_103841078(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1038410f0; end: 10384110b;  */

void FUN_1038410f0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined1 auStack_88 [40];
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar3 = *(undefined1 *)(unaff_x20 + 0x60);
  uVar4 = *(undefined1 *)(unaff_x20 + 0x61);
  uVar6 = 0x112f9f1c8;
  func_0x0001000285a8(0x112f9f1c8,&UNK_10dc14750);
  func_0x0001000bda74(uVar5,uVar6);
  FUN_10384c884(unaff_x20 + 0x20,auStack_88);
  uVar6 = 0;
  FUN_1038746d0();
  func_0x000107c610f8();
  func_0x000107c615f0(uVar2);
  func_0x000107c6157c(uVar1);
  func_0x000107c61174(uVar7);
  func_0x000103872c28(uVar5,uVar1,auStack_88,uVar7,uVar2,uVar8,uVar3,uVar4);
  param_1[3] = uVar6;
  param_1[4] = &PTR_DAT_11069fa20;
  *param_1 = uVar5;
  return;
}



/* Entry: 10384110c; end: 10384114b;  */

undefined8 FUN_10384110c(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10384114c; end: 10384116b;  */

void FUN_10384114c(void)

{
  func_0x000107c61168(&PTR_PTR_112fa1f88);
  return;
}



/* Entry: 10384116c; end: 1038411ef;  */

void FUN_10384116c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x000107c4af44();
  func_0x000107c61180();
  lVar1 = param_3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  if (lVar1 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c4af08(lVar1);
    func_0x000107c615e8(lVar1);
  }
  *param_1 = param_2;
  *(bool *)(param_1 + 1) = lVar1 == 0;
  return;
}



/* Entry: 1038411f0; end: 103841213;  */

void FUN_1038411f0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103841214; end: 103842093;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103841214(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7,undefined8 param_8,long param_9,
                  long param_10)

{
  long lVar1;
  undefined *puVar2;
  code *pcVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long extraout_x8;
  long extraout_x12;
  undefined8 uVar12;
  long unaff_x20;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 uVar16;
  undefined *apuStack_140 [4];
  long lStack_120;
  long lStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  code *pcStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  
  pcStack_e0 = (code *)param_4;
  uStack_c8 = param_7;
  uStack_c0 = param_1;
  lStack_b0 = param_6;
  uStack_a8 = param_8;
  func_0x000107c613fc();
  lStack_b8 = param_2;
  func_0x000107c3e0a8();
  func_0x000107c61180();
  lVar13 = *(long *)(param_9 + _DAT_1130818f0);
  lVar15 = *(long *)(param_10 + _DAT_112fa4160);
  lStack_d0 = param_2;
  FUN_103842094();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x10) = 0;
  func_0x0001000285a8(0x112fa04c0,&UNK_10dc153d0);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar9 = param_3;
  lStack_d8 = lVar15;
  func_0x000107c4b4a8();
  func_0x000107c61180();
  uVar10 = uVar9;
  func_0x0001000bda74();
  uStack_a0 = uVar10;
  func_0x000107c61170(uVar9);
  lVar15 = param_5;
  func_0x000107c4b2ec();
  func_0x000107c61180();
  lVar1 = lVar15;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar15);
  lStack_e8 = unaff_x20;
  lStack_f8 = param_2;
  if (lVar1 == 0) {
    func_0x000107c61170(lStack_b0);
    func_0x000107c61170(lStack_d8);
    func_0x000107c61170(lVar13);
    func_0x000107c61170(lStack_d0);
    func_0x000107c61170(param_3);
    func_0x000107c61170(pcStack_e0);
    func_0x000107c61170(param_5);
    func_0x000107c61170(uStack_c8);
    func_0x000107c61170(uStack_a8);
    func_0x000107c61574(uStack_a0);
    func_0x000107c61170(param_9);
    func_0x000107c61170(param_10);
    func_0x000107c61170(uStack_c0);
    func_0x000107c61170(lStack_b8);
  }
  else {
    lStack_100 = param_9;
    lStack_f0 = param_10;
    lVar11 = lVar1;
    lStack_118 = lVar13;
    uStack_110 = param_3;
    lStack_108 = param_5;
    func_0x000107c4c020();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    puVar2 = &UNK_11069d188;
    func_0x000107c613fc(&UNK_11069d188,0x18,7);
    pcVar3 = pcStack_e0;
    *(code **)(puVar2 + 0x10) = pcStack_e0;
    func_0x0001000285a8(0x112fa04c8,&UNK_10dc15b10);
    func_0x000107c613fc();
    func_0x000107c61174();
    pcVar4 = FUN_1038420b4;
    apuStack_140[3] = pcVar3;
    func_0x0001000bdd8c(FUN_1038420b4,puVar2);
    puVar2 = PTR_PTR_1126aeea8;
    func_0x000107c610f8();
    func_0x000107c453e4();
    uVar12 = *(undefined8 *)(lStack_b0 + _DAT_113083868);
    func_0x0001000285a8(0x112d5a608,&UNK_10d921390);
    func_0x000107c61174();
    func_0x000107c615f0(lVar11);
    uVar9 = uStack_a8;
    func_0x000107c4af30();
    func_0x000107c61180();
    uVar10 = uVar9;
    func_0x0001000bda74();
    func_0x000107c61170(uVar9);
    lVar15 = lStack_d8;
    uVar16 = *(undefined8 *)(lStack_d8 + _DAT_112fa40c8);
    puVar5 = (undefined *)0x0;
    func_0x0001007dbb4c();
    apuStack_140[1] = puVar5;
    func_0x000107c613fc();
    *(undefined8 *)(puVar5 + 0x10) = 0;
    *(undefined8 *)(puVar5 + 0x18) = 0;
    puVar5[0x20] = 1;
    *(undefined8 *)(puVar5 + 0x28) = 0;
    puVar6 = PTR_PTR_1126ae810;
    func_0x000107c610f8();
    uVar9 = uStack_a0;
    func_0x000107c6157c(uStack_a0);
    func_0x000107c6157c(pcVar4);
    func_0x000107c6157c(uVar16);
    func_0x000107c453e4();
    *(undefined8 *)(puVar5 + 0x40) = uVar12;
    *(undefined **)(puVar5 + 0x48) = puVar2;
    *(undefined **)(puVar5 + 0x30) = puVar6;
    *(long *)(puVar5 + 0x38) = lVar11;
    *(undefined8 *)(puVar5 + 0x50) = uVar10;
    *(undefined8 *)(puVar5 + 0x58) = uVar9;
    *(code **)(puVar5 + 0x60) = pcVar4;
    *(undefined8 *)(puVar5 + 0x68) = uVar16;
    func_0x000107c61174(uVar12);
    func_0x000107c615f0(lVar11);
    func_0x000107c6157c(uVar9);
    pcStack_e0 = pcVar4;
    func_0x000107c6157c(pcVar4);
    apuStack_140[2] = (undefined *)uVar16;
    func_0x000107c6157c(uVar16);
    func_0x000107c61174(puVar2);
    func_0x000107c6157c(uVar10);
    func_0x0001000d224c(&puStack_98);
    lStack_120 = lVar11;
    if (puStack_98 == (undefined *)0x0) {
      func_0x000107c61170(puVar2);
    }
    else {
      puVar6 = puStack_98;
      func_0x000107c4b3fc(puStack_98);
      func_0x000107c61180();
      func_0x000107c615e8(puStack_98);
      puVar7 = puVar6;
      func_0x000107c4da88(puVar6);
      func_0x000107c61180();
      func_0x000107c61170(puVar6);
      puVar6 = &UNK_11069d1b0;
      func_0x000107c613fc(&UNK_11069d1b0,0x18,7);
      func_0x000107c61644(puVar6 + 0x10,puVar5);
      ppuStack_78 = (undefined **)0x10384216c;
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0x42000000;
      pcStack_88 = FUN_1038263e8;
      puStack_80 = &UNK_11069d1c8;
      ppuVar8 = &puStack_98;
      puStack_70 = puVar6;
      func_0x000107c60bc4(ppuVar8);
      func_0x000107c61574(puStack_70);
      puVar6 = puVar7;
      func_0x000107c5c320(puVar7);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar8);
      func_0x000107c61170(puVar7);
      uVar9 = *(undefined8 *)(puVar5 + 0x30);
      func_0x000107c61174(uVar9);
      func_0x000107c3e924(puVar6);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(uVar9);
      func_0x000107c61170(puVar2);
    }
    func_0x000107c61170(uVar12);
    func_0x000107c615e8(lVar11);
    func_0x000107c61574(uVar10);
    func_0x000107c61574(uStack_a0);
    func_0x000107c61574(pcStack_e0);
    func_0x000107c61574(apuStack_140[2]);
    func_0x0001000285a8(0x112fa04d0,&UNK_10dc16a90);
    lVar13 = lStack_d0;
    lVar1 = lStack_d0;
    func_0x000107c3e088();
    func_0x000107c61180();
    lVar11 = lVar1;
    func_0x0001000b637c();
    lStack_d8 = lVar11;
    func_0x000107c61170(lVar1);
    func_0x0001000285a8(0x112ee5898,&UNK_10db10a50);
    lVar1 = lStack_118;
    uVar10 = *(undefined8 *)(lStack_118 + _DAT_113081858);
    func_0x000107c61174();
    uVar9 = uVar10;
    func_0x0001000bda74();
    apuStack_140[2] = (undefined *)uVar9;
    func_0x000107c61170(uVar10);
    puVar2 = apuStack_140[1];
    uVar10 = *(undefined8 *)(lVar15 + _DAT_112fa40c0);
    puStack_80 = apuStack_140[1];
    ppuStack_78 = &PTR_DAT_11069db28;
    lVar11 = 0;
    puStack_98 = puVar5;
    func_0x0001007dbb94();
    func_0x000107c613fc();
    func_0x0001000c6518(&puStack_98,puVar2);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(puVar2 + -8) + 0x40));
    puVar14 = (undefined8 *)((long)apuStack_140 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
    (**(code **)(extraout_x12 + 0x10))(puVar14);
    uVar9 = *puVar14;
    *(undefined **)(lVar11 + 0x38) = puVar2;
    *(undefined ***)(lVar11 + 0x40) = &PTR_DAT_11069db28;
    *(undefined8 *)(lVar11 + 0x20) = uVar9;
    func_0x0001000c6560(0);
    func_0x000107c613fc();
    func_0x000107c6157c(uVar10);
    puVar2 = puVar5;
    func_0x000107c6157c();
    func_0x0001000c6580();
    func_0x000107c61574(puVar5);
    func_0x000107c61170(apuStack_140[3]);
    func_0x000107c615e8(lStack_120);
    func_0x000107c61574(pcStack_e0);
    func_0x000107c61170(lVar13);
    func_0x000107c61170(lStack_b0);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lVar15);
    func_0x000107c61170(uStack_110);
    func_0x000107c61170(lStack_108);
    func_0x000107c61170(uStack_c8);
    func_0x000107c61170(uStack_a8);
    func_0x000107c61170(lStack_100);
    func_0x000107c61170(lStack_f0);
    func_0x000107c61170(uStack_c0);
    func_0x000107c61170(lStack_b8);
    *(long *)(lVar11 + 0x10) = lStack_d8;
    *(undefined8 *)(lVar11 + 0x18) = uStack_a0;
    *(undefined **)(lVar11 + 0x50) = apuStack_140[2];
    *(undefined **)(lVar11 + 0x58) = puVar2;
    *(undefined8 *)(lVar11 + 0x48) = uVar10;
    func_0x0001000834e4(&puStack_98);
    *(long *)(lStack_f8 + 0x10) = lVar11;
  }
  *(long *)(lStack_e8 + 0x10) = lStack_f8;
  return lStack_e8;
}



/* Entry: 103842094; end: 1038420b3;  */

void FUN_103842094(void)

{
  func_0x000107c61168(&PTR_PTR_112fa2028);
  return;
}



/* Entry: 1038420b4; end: 1038420bb;  */

void FUN_1038420b4(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c4af44();
  func_0x000107c61180();
  lVar1 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar1 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c4af08(lVar1);
    func_0x000107c615e8(lVar1);
  }
  *param_1 = param_2;
  *(bool *)(param_1 + 1) = lVar1 == 0;
  return;
}



/* Entry: 1038420bc; end: 1038420fb;  */

void FUN_1038420bc(void)

{
  long unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x10);
  if (lVar1 != 0) {
    func_0x000107c6157c(lVar1);
    func_0x0001007dbc08();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1038420fc; end: 10384211f;  */

void FUN_1038420fc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103842120; end: 103842163;  */

void FUN_103842120(void)

{
  long *unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(*unaff_x20 + 0x10) + 0x10);
  if (lVar1 != 0) {
    func_0x000107c6157c(lVar1);
    func_0x0001007dbc08();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(lVar1);
    return;
  }
  return;
}



/* Entry: 103842164; end: 10384218f;  */

undefined8 FUN_103842164(void)

{
  return 0;
}



/* Entry: 103842190; end: 1038421af;  */

void FUN_103842190(void)

{
  func_0x000107c61168(&PTR_PTR_112fa20c8);
  return;
}



/* Entry: 1038421b0; end: 1038421bf;  */

void FUN_1038421b0(long param_1,long param_2)

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



/* Entry: 1038421c0; end: 103842223;  */

void FUN_1038421c0(long *param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *param_2;
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    uVar1 = 0x112d5d810;
    func_0x0001000285a8(0x112d5d810,&UNK_10d923f50);
    func_0x0001000bda74(lVar2,uVar1);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 103842224; end: 103842247;  */

void FUN_103842224(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103842248; end: 103842493;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103842248(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  long lStack_70;
  long lStack_68;
  
  func_0x000107c613fc();
  lVar1 = unaff_x20;
  FUN_103842494();
  func_0x000107c613fc();
  func_0x0001000285a8(0x112ee3e90,&UNK_10db0ef60);
  uVar2 = param_3;
  func_0x000107c4aeb4(param_3);
  func_0x000107c61180();
  uVar9 = uVar2;
  func_0x000100759c94();
  func_0x000107c61170(uVar2);
  uVar2 = 0x112ee3e98;
  func_0x0001000285a8(0x112ee3e98,&UNK_10db20590);
  uVar3 = 0;
  func_0x000100759f5c(0,1,FUN_1038421c0,0,uVar2);
  func_0x000107c61574(uVar9);
  uVar8 = *(undefined8 *)(param_1 + _DAT_1130352b8);
  func_0x0001000285a8(0x112f9f1c8,&UNK_10dc14750);
  uVar9 = *(undefined8 *)(param_6 + _DAT_113071300);
  func_0x000107c615f0(uVar8);
  func_0x000107c6157c(uVar3);
  func_0x000107c61174();
  uVar2 = uVar9;
  func_0x0001000bda74();
  func_0x000107c61170(uVar9);
  func_0x0001000285a8(0x112f9f1d0,&UNK_10dc14758);
  uVar9 = param_4;
  func_0x000107c4b080();
  func_0x000107c61180();
  uVar4 = uVar9;
  func_0x0001000bda74();
  func_0x000107c61170(uVar9);
  lVar5 = 0;
  func_0x000100777f50();
  lVar6 = lVar5;
  func_0x000107c610f8();
  *(undefined8 *)(lVar6 + _DAT_112f9f948) = uVar8;
  *(undefined8 *)(lVar6 + _DAT_112f9f938) = uVar3;
  *(undefined8 *)(lVar6 + _DAT_112f9f930) = uVar2;
  *(undefined8 *)(lVar6 + _DAT_112f9f940) = uVar4;
  plVar7 = &lStack_70;
  lStack_70 = lVar6;
  lStack_68 = lVar5;
  func_0x000107c61154(plVar7,PTR_s_init_1125d9248);
  *(long **)(lVar1 + 0x10) = plVar7;
  func_0x000107c4fba8(*(undefined8 *)(param_1 + _DAT_1130352a8));
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61574(uVar3);
  *(long *)(unaff_x20 + 0x10) = lVar1;
  return;
}



/* Entry: 103842494; end: 1038424d7;  */

void FUN_103842494(void)

{
  func_0x000107c61168(&PTR_PTR_112fa2168);
  return;
}



/* Entry: 1038424d8; end: 1038424e3;  */

void FUN_1038424d8(void)

{
  return;
}



/* Entry: 1038424e4; end: 103842503;  */

void FUN_1038424e4(void)

{
  func_0x000107c61168(&PTR_PTR_112fa2208);
  return;
}



/* Entry: 103842504; end: 1038430ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103842504(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  code *pcVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined **ppuVar14;
  long unaff_x20;
  undefined8 uVar15;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113038580);
  func_0x000107c61174();
  uVar2 = param_3;
  func_0x000107c4ae78();
  func_0x000107c61180();
  uVar15 = *(undefined8 *)(param_4 + _DAT_113035a98);
  lVar3 = 0;
  func_0x0001007dd35c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x10) = 0;
  func_0x0001000285a8(0x112ee3e90,&UNK_10db0ef60);
  func_0x000107c61174();
  uVar4 = uVar2;
  func_0x000107c4aeb4(uVar2);
  func_0x000107c61180();
  uVar12 = uVar4;
  func_0x000100759c94();
  func_0x000107c61170(uVar4);
  uVar4 = 0x112ee3e98;
  func_0x0001000285a8(0x112ee3e98,&UNK_10db20590);
  uVar5 = 0;
  func_0x000100759f5c(0,1,&UNK_100b61bd4,0,uVar4);
  func_0x000107c61574(uVar12);
  puVar6 = &UNK_11069d290;
  func_0x000107c613fc(&UNK_11069d290,0x18,7);
  *(undefined8 *)(puVar6 + 0x10) = param_6;
  func_0x0001000285a8(0x112d53a70,&UNK_10d91a680);
  func_0x000107c613fc();
  func_0x000107c61174();
  pcVar7 = FUN_103843100;
  func_0x0001000bdd8c(FUN_103843100,puVar6);
  puVar6 = &UNK_11069d2b8;
  func_0x000107c613fc(&UNK_11069d2b8,0x18,7);
  *(undefined8 *)(puVar6 + 0x10) = param_6;
  func_0x0001000285a8(0x112d54e08,&UNK_10d91bfb0);
  func_0x000107c613fc();
  func_0x000107c61174();
  uVar4 = 0x103843108;
  func_0x0001000bdd8c(0x103843108,puVar6);
  puVar6 = &UNK_11069d2e0;
  func_0x000107c613fc(&UNK_11069d2e0,0x18,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar15;
  func_0x0001000285a8(0x112fa0578,&UNK_10dc15410);
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c6157c(uVar5);
  uVar12 = 0x103843110;
  func_0x0001000bdd8c(0x103843110,puVar6);
  puVar6 = &UNK_11069d308;
  func_0x000107c613fc(&UNK_11069d308,0x18,7);
  *(undefined8 *)(puVar6 + 0x10) = param_5;
  func_0x0001000285a8(0x112d5c4b8,&UNK_10d923250);
  func_0x000107c613fc();
  func_0x000107c61174();
  uVar11 = 0x103843118;
  func_0x0001000bdd8c(0x103843118,puVar6);
  puVar6 = &UNK_11069d330;
  func_0x000107c613fc(&UNK_11069d330,0x18,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar1;
  func_0x0001000285a8(0x112fa0580,&UNK_10dc15420);
  func_0x000107c613fc();
  func_0x000107c61174();
  uVar13 = 0x103843120;
  func_0x0001000bdd8c(0x103843120,puVar6);
  lVar8 = 0;
  func_0x0001007dd37c();
  func_0x000107c613fc();
  func_0x0001000c6560(0);
  func_0x000107c613fc();
  func_0x000107c6157c(pcVar7);
  uVar9 = uVar4;
  func_0x000107c6157c();
  func_0x0001000c6580();
  *(undefined8 *)(lVar8 + 0x38) = uVar4;
  *(undefined8 *)(lVar8 + 0x40) = uVar9;
  *(undefined8 *)(lVar8 + 0x10) = uVar5;
  *(undefined8 *)(lVar8 + 0x18) = uVar12;
  *(undefined8 *)(lVar8 + 0x20) = uVar11;
  *(undefined8 *)(lVar8 + 0x28) = uVar13;
  *(code **)(lVar8 + 0x30) = pcVar7;
  *(long *)(lVar3 + 0x10) = lVar8;
  lVar10 = *(long *)(param_7 + _DAT_113093a90);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar10 == 0) {
    func_0x000107c61170(param_7);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar15);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61574(uVar4);
    func_0x000107c61574(pcVar7);
    func_0x000107c61574(uVar5);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_1);
  }
  else {
    func_0x000100079360(0);
    func_0x0001007dd39c(0);
    uVar11 = 0;
    func_0x0001007dd3bc(0);
    func_0x0001007dd3dc();
    uVar12 = uVar11;
    func_0x0001007dd440();
    func_0x000107c61170(uVar11);
    uVar11 = uVar12;
    func_0x0001007dd4e0(uVar12);
    func_0x000107c61170(uVar12);
    uVar12 = 0;
    func_0x0001000aad1c(0);
    func_0x0001007dd748();
    uVar13 = 0;
    func_0x0001000295c4(0);
    func_0x000107c5ffdc();
    puVar6 = &UNK_11069d358;
    func_0x000107c613fc(&UNK_11069d358,0x18,7);
    func_0x000107c61644(puVar6 + 0x10,lVar8);
    uStack_78 = 0x103843128;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1000f6b44;
    puStack_80 = &UNK_11069d370;
    ppuVar14 = &puStack_98;
    puStack_70 = puVar6;
    func_0x000107c60bc4(ppuVar14);
    func_0x000107c61574(puStack_70);
    func_0x000107c5e08c(lVar10);
    func_0x000107c61180();
    func_0x000107c615e8();
    func_0x000107c61170(param_7);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar15);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_3);
    func_0x000107c60bd0(ppuVar14);
    func_0x000107c61574(uVar5);
    func_0x000107c61574(pcVar7);
    func_0x000107c61574(uVar4);
    func_0x000107c615e8(lVar10);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar12);
    param_3 = uVar13;
  }
  func_0x000107c61170(param_3);
  *(long *)(unaff_x20 + 0x10) = lVar3;
  return;
}



/* Entry: 103843100; end: 10384314b;  */

void FUN_103843100(undefined8 *param_1)

{
  char *pcVar1;
  char *pcVar2;
  long unaff_x20;
  
  pcVar2 = *(char **)(unaff_x20 + 0x10);
  func_0x000107c4b2ec();
  func_0x000107c61180();
  pcVar1 = pcVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(pcVar2);
  if (pcVar1 == (char *)0x0) {
    pcVar2 = 
    "init(cameraUIServices:lensCarouselFeatureServices:miniCameraActivationStateServices:lensContentServices:lensPerformerServices:taskManagmentServices:)"
    ;
    func_0x0001000c10c0();
    func_0x000107c61180();
  }
  else {
    pcVar2 = pcVar1;
    func_0x000107c4c18c();
    func_0x000107c61180();
    func_0x000107c615e8(pcVar1);
  }
  *param_1 = pcVar2;
  return;
}



/* Entry: 10384314c; end: 10384316f;  */

void FUN_10384314c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103843170; end: 10384317b;  */

void FUN_103843170(void)

{
  return;
}



/* Entry: 10384317c; end: 10384319b;  */

void FUN_10384317c(void)

{
  func_0x000107c61168(&PTR_PTR_112fa22a8);
  return;
}



/* Entry: 10384319c; end: 1038431bb;  */

void FUN_10384319c(long param_1,long param_2)

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



/* Entry: 1038431bc; end: 103843567;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1038431bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  code *pcVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x20;
  long lVar12;
  long lStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  
  func_0x000107c613fc();
  lVar12 = *(long *)(param_5 + _DAT_112f9fbd0);
  puVar1 = &UNK_11069d4b8;
  func_0x000107c613fc(&UNK_11069d4b8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_6;
  func_0x0001000285a8(0x112d53a70,&UNK_10d91a680);
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174();
  pcVar2 = FUN_1038435f4;
  func_0x0001000bdd8c(FUN_1038435f4,puVar1);
  uVar11 = *(undefined8 *)(lVar12 + _DAT_112f9f6d8);
  pcStack_70 = FUN_1038435fc;
  uStack_68 = 0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  uStack_80 = 0x1038272c8;
  puStack_78 = &UNK_11069d4d0;
  ppuVar3 = &puStack_90;
  func_0x000107c60bc4(ppuVar3);
  func_0x000107c61174();
  uVar4 = uVar11;
  func_0x000107c4c280();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(uVar11);
  puVar1 = &UNK_11069d508;
  func_0x000107c613fc(&UNK_11069d508,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  func_0x0001000285a8(0x112fa0578,&UNK_10dc15410);
  func_0x000107c613fc();
  func_0x000107c61174();
  pcVar5 = FUN_1038436dc;
  func_0x0001000bdd8c(FUN_1038436dc,puVar1);
  lVar6 = 0;
  func_0x00010384e7a4();
  func_0x000107c613fc();
  func_0x0001000c6560(0);
  func_0x000107c613fc();
  func_0x000107c61174();
  pcVar7 = pcVar2;
  func_0x000107c6157c();
  func_0x0001000c6580();
  *(code **)(lVar6 + 0x28) = pcVar2;
  *(code **)(lVar6 + 0x30) = pcVar7;
  *(code **)(lVar6 + 0x10) = pcVar5;
  *(undefined8 *)(lVar6 + 0x18) = 0;
  *(undefined8 *)(lVar6 + 0x20) = uVar4;
  *(long *)(unaff_x20 + 0x10) = lVar6;
  func_0x000107c6157c(lVar6);
  FUN_10384e440();
  func_0x000107c61574(lVar6);
  puVar1 = &UNK_11069d530;
  func_0x000107c613fc(&UNK_11069d530,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_3);
  func_0x0001000285a8(0x112ef06f8,&UNK_10db8f890);
  func_0x000107c613fc();
  pcVar5 = FUN_103843780;
  func_0x0001000bdd8c(FUN_103843780,puVar1);
  uVar11 = *(undefined8 *)(param_1 + _DAT_112fe9630);
  lVar8 = 0;
  FUN_10381e9ec();
  lVar6 = lVar8;
  func_0x000107c610f8();
  *(code **)(lVar6 + _DAT_112f9ff50) = pcVar5;
  *(undefined8 *)(lVar6 + _DAT_112f9ff58) = uVar4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_a0 = lVar6;
  lStack_98 = lVar8;
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar11);
  func_0x000107c6157c(pcVar5);
  plVar9 = &lStack_a0;
  func_0x000107c61154(plVar9,puVar1);
  uVar10 = 0;
  func_0x000103af2e4c(0);
  func_0x000107c610f8();
  func_0x000103af2d80(plVar9,&PTR_DAT_11069a798,uVar10);
  func_0x000107c4fba8(uVar11);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(lVar12);
  func_0x000107c61574(pcVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(plVar9);
  return unaff_x20;
}



/* Entry: 103843568; end: 1038435f3;  */

void FUN_103843568(undefined8 *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  func_0x000107c4b2ec();
  func_0x000107c61180();
  pcVar1 = param_2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  if (pcVar1 == (char *)0x0) {
    pcVar2 = 
    "init(conditionalBeginIn:chatCameraScope:cameraUIServices:miniCameraActivationStateServices:arBarIntegrationServices:lensPerformerServices:)"
    ;
    func_0x0001000c10c0();
    func_0x000107c61180();
  }
  else {
    pcVar2 = pcVar1;
    func_0x000107c4c18c();
    func_0x000107c61180();
    func_0x000107c615e8(pcVar1);
  }
  *param_1 = pcVar2;
  return;
}



/* Entry: 1038435f4; end: 1038435fb;  */

void FUN_1038435f4(undefined8 *param_1)

{
  char *pcVar1;
  char *pcVar2;
  long unaff_x20;
  
  pcVar2 = *(char **)(unaff_x20 + 0x10);
  func_0x000107c4b2ec();
  func_0x000107c61180();
  pcVar1 = pcVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(pcVar2);
  if (pcVar1 == (char *)0x0) {
    pcVar2 = 
    "init(conditionalBeginIn:chatCameraScope:cameraUIServices:miniCameraActivationStateServices:arBarIntegrationServices:lensPerformerServices:)"
    ;
    func_0x0001000c10c0();
    func_0x000107c61180();
  }
  else {
    pcVar2 = pcVar1;
    func_0x000107c4c18c();
    func_0x000107c61180();
    func_0x000107c615e8(pcVar1);
  }
  *param_1 = pcVar2;
  return;
}



/* Entry: 1038435fc; end: 103843683;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038435fc(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0x112fa0768;
  func_0x0001000285a8(0x112fa0768,&UNK_10dc15ee0);
  param_1[3] = lVar1;
  lVar1 = *(long *)(param_2 + _DAT_113035438);
  func_0x000107c3f268();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c42e38();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 103843684; end: 10384369f;  */

void FUN_103843684(long param_1,long param_2)

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



/* Entry: 1038436a0; end: 1038436db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038436a0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_113035b60);
  func_0x000107c5c734();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 1038436dc; end: 1038436df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038436dc(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_113035b60);
  func_0x000107c5c734();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 1038436e0; end: 10384377f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038436e0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + _DAT_1130385c0);
    func_0x000107c61174();
    func_0x000107c61170(param_2);
    uVar2 = uVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(uVar1);
  }
  *param_1 = uVar2;
  return;
}



/* Entry: 103843780; end: 103843787;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103843780(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_1130385c0);
    func_0x000107c61174();
    func_0x000107c61170(lVar1);
    uVar3 = uVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
  }
  *param_1 = uVar3;
  return;
}



/* Entry: 103843788; end: 1038437c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103843788(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_113035b60);
  func_0x000107c5c734();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 1038437c8; end: 1038437eb;  */

void FUN_1038437c8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1038437ec; end: 1038437f7;  */

void FUN_1038437ec(void)

{
  return;
}



/* Entry: 1038437f8; end: 103843817;  */

void FUN_1038437f8(void)

{
  func_0x000107c61168(&PTR_PTR_112fa2348);
  return;
}



/* Entry: 103843818; end: 1038438f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103843818(void)

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
  
  ppuVar2 = &puStack_60;
  uVar3 = *(undefined8 *)(*(long *)(unaff_x20 + 0x20) + _DAT_112f9f6d8);
  puVar1 = &UNK_11069d590;
  func_0x000107c613fc(&UNK_11069d590,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  pcStack_40 = FUN_103844068;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_100ba4fb0;
  puStack_48 = &UNK_11069d5a8;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  puVar1 = puStack_38;
  func_0x000107c61174(uVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c5dc64(uVar3);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 1038438f4; end: 103843963;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038438f4(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  if ((param_2 == 0) && (param_1 != 0)) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_113035438);
    func_0x000107c61428(param_3 + 0x10,auStack_38,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61648();
    if (param_3 != 0) {
      FUN_103843964(uVar1);
      func_0x000107c61574(param_3);
    }
  }
  return;
}



/* Entry: 103843964; end: 103843def;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103843964(long param_1)

{
  ulong uVar1;
  byte bVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined **ppuVar10;
  code *pcVar11;
  undefined **ppuVar12;
  undefined1 *puVar13;
  ulong uVar14;
  long unaff_x20;
  undefined8 uVar15;
  ulong uVar16;
  undefined1 auStack_e0 [40];
  undefined *apuStack_b8 [3];
  undefined8 uStack_a0;
  undefined **ppuStack_98;
  long alStack_70 [3];
  code *pcStack_58;
  
  puVar13 = auStack_e0;
  lVar4 = 0;
  func_0x0001038841ac();
  func_0x000107c610f8();
  func_0x000107c453e4();
  alStack_70[0] = lVar4;
  func_0x000107c4af64();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1;
    func_0x000107c42e38();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
  }
  uVar5 = 0;
  alStack_70[1] = lVar4;
  func_0x000103884510();
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar15 = *(undefined8 *)(unaff_x20 + 0x30);
  puVar8 = &UNK_11069d5e0;
  alStack_70[2] = uVar5;
  func_0x000107c613fc(&UNK_11069d5e0,0x18,7);
  *(undefined8 *)(puVar8 + 0x10) = uVar15;
  func_0x0001000285a8(0x112fa09d0,&UNK_10dc15640);
  func_0x000107c613fc();
  func_0x000107c61174(uVar15);
  pcVar3 = FUN_10384408c;
  func_0x0001000bdd8c(FUN_10384408c,puVar8);
  uVar5 = 0;
  FUN_103884924(0);
  func_0x000107c610f8();
  func_0x0001038847f4(pcVar3,uVar5);
  uVar16 = 0;
  pcStack_58 = pcVar3;
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    uVar1 = uVar16;
    if (uVar16 < 5) {
      uVar1 = 4;
    }
    do {
      if (uVar16 == 4) {
        uVar5 = 0x112fa09d8;
        func_0x0001000285a8(0x112fa09d8,&UNK_10dc15648);
        func_0x000107c61408(alStack_70,4,uVar5);
        lVar4 = *(long *)(unaff_x20 + 0x38);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar4 == 0) {
          func_0x0001000285a8(0x112d5ba30,&UNK_10d929a50);
          apuStack_b8[0] = (undefined *)((ulong)apuStack_b8[0] & 0xffffffffffffff00);
          ppuVar10 = apuStack_b8;
          func_0x000100854cb0(ppuVar10);
        }
        else {
          lVar9 = lVar4;
          func_0x000107c3d14c();
          func_0x000107c61180();
          func_0x000107c615e8(lVar4);
          func_0x0001000285a8(0x112d3b7d0,&UNK_10d904cc0);
          func_0x000107c61174(lVar9);
          lVar4 = lVar9;
          func_0x0001000b637c();
          pcVar3 = FUN_10382782c;
          func_0x0001000bfde0(FUN_10382782c,0,PTR___sSbN_11034dd40);
          func_0x000107c61574(lVar4);
          ppuVar10 = (undefined **)PTR___sSbSQsWP_11034dd50;
          func_0x0001000c2068(PTR___sSbSQsWP_11034dd50);
          func_0x000107c61574(pcVar3);
          func_0x000107c61170(lVar9);
          func_0x000107c61170(lVar9);
        }
        func_0x0001000285a8(0x112fa04d0,&UNK_10dc16a90);
        uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
        func_0x000107c3e088(uVar5);
        func_0x000107c61180();
        uVar15 = uVar5;
        func_0x0001000b637c();
        func_0x000107c61170(uVar5);
        uVar5 = 0x112f9fad8;
        func_0x0001000285a8(0x112f9fad8,&UNK_10dc15650);
        pcVar3 = FUN_103827568;
        func_0x0001000d5158(FUN_103827568,0,uVar5);
        uVar5 = 0;
        func_0x0001007b706c(0);
        pcVar11 = FUN_10382777c;
        func_0x00010068b194(FUN_10382777c,0,uVar5);
        func_0x000107c61574(pcVar3);
        apuStack_b8[0] = (undefined *)0x0;
        ppuVar12 = apuStack_b8;
        func_0x0001006c71a4(ppuVar12);
        func_0x000107c61574(pcVar11);
        func_0x000107c61574(uVar15);
        bVar2 = *(byte *)(unaff_x20 + 0x48);
        uVar5 = 0;
        FUN_1038851c8();
        func_0x000107c610f8();
        func_0x000107c6157c(ppuVar12);
        func_0x000107c6157c(ppuVar10);
        func_0x0001038849e0(puVar8,ppuVar12,(bVar2 ^ 0xff) & 1,ppuVar10,1);
        ppuStack_98 = &PTR_DAT_1106a10b0;
        uVar15 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112fa56f8);
        apuStack_b8[0] = puVar8;
        uStack_a0 = uVar5;
        FUN_10381db40(apuStack_b8,auStack_e0);
        FUN_10388af40(0);
        func_0x000107c610f8();
        func_0x000107c61174(uVar15);
        func_0x00010388ae60(auStack_e0);
        func_0x000107c4fba8(uVar15);
        func_0x000107c61170(uVar15);
        func_0x000107c61170(puVar13);
        func_0x000107c61574(ppuVar10);
        func_0x000107c61574(ppuVar12);
        func_0x0001000834e4(apuStack_b8);
        return;
      }
      if (uVar1 == uVar16) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103843df0);
        (*pcVar3)();
      }
      lVar4 = alStack_70[uVar16];
      uVar16 = uVar16 + 1;
    } while (lVar4 == 0);
    func_0x000107c615f0(lVar4);
    puVar7 = puVar8;
    func_0x000107c61550();
    if ((((int)puVar7 == 0) || ((long)puVar8 < 0)) ||
       (puVar7 = puVar8, ((ulong)puVar8 >> 0x3e & 1) != 0)) {
      if ((ulong)puVar8 >> 0x3e == 0) {
        puVar6 = *(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar6 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar8) {
          puVar6 = puVar8;
        }
        func_0x000107c60480(puVar6);
      }
      puVar7 = (undefined *)0x0;
      FUN_10383a990(0,puVar6 + 1,1,puVar8);
    }
    uVar14 = (ulong)puVar7 & 0xffffffffffffff8;
    uVar1 = *(ulong *)(uVar14 + 0x10);
    puVar8 = puVar7;
    if (*(ulong *)(uVar14 + 0x18) >> 1 <= uVar1) {
      puVar8 = (undefined *)(ulong)(1 < *(ulong *)(uVar14 + 0x18));
      FUN_10383a990(puVar8,uVar1 + 1,1,puVar7);
      uVar14 = (ulong)puVar8 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar14 + 0x10) = uVar1 + 1;
    *(long *)(uVar14 + uVar1 * 8 + 0x20) = lVar4;
  } while( true );
}



/* Entry: 103843df0; end: 103843e5b;  */

void FUN_103843df0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 103843e5c; end: 103843fd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103843e5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  undefined1 auStack_88 [24];
  long lStack_70;
  long lStack_68;
  
  func_0x000107c613fc();
  uVar2 = param_3;
  func_0x000107c3e0a8();
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(param_4 + _DAT_112f9fbd0);
  func_0x000107c61174();
  uVar4 = param_7;
  func_0x000107c4ae78();
  func_0x000107c61180();
  uVar5 = uVar4;
  func_0x000107c4ac68();
  func_0x000107c61180();
  func_0x0001000d224c(auStack_88);
  func_0x0001000a8868(auStack_88,lStack_70);
  lVar6 = lStack_70;
  (**(code **)(lStack_68 + 0x10))(lStack_70,lStack_68);
  lVar7 = lVar6;
  FUN_103843fd8();
  func_0x000107c613fc();
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar4);
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(lVar7 + 0x38) = uVar5;
  *(undefined **)(lVar7 + 0x40) = puVar1;
  *(undefined8 *)(lVar7 + 0x10) = param_1;
  *(undefined8 *)(lVar7 + 0x18) = uVar2;
  *(undefined8 *)(lVar7 + 0x20) = uVar3;
  *(undefined8 *)(lVar7 + 0x28) = param_5;
  *(undefined8 *)(lVar7 + 0x30) = param_8;
  *(byte *)(lVar7 + 0x48) = (byte)lVar6 & 1;
  func_0x0001000834e4(auStack_88);
  *(long *)(unaff_x20 + 0x10) = lVar7;
  return unaff_x20;
}



/* Entry: 103843fd8; end: 10384401b;  */

void FUN_103843fd8(void)

{
  func_0x000107c61168(&PTR_PTR_112fa23e8);
  return;
}



/* Entry: 10384401c; end: 10384403f;  */

void FUN_10384401c(void)

{
  FUN_103843818();
  return;
}



/* Entry: 103844040; end: 103844047;  */

undefined8 FUN_103844040(void)

{
  return 0;
}



/* Entry: 103844048; end: 103844067;  */

void FUN_103844048(void)

{
  func_0x000107c61168(&PTR_PTR_112fa24c0);
  return;
}



/* Entry: 103844068; end: 10384408b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103844068(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  if ((param_2 == 0) && (param_1 != 0)) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113035438);
    func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
    lVar1 = unaff_x20 + 0x10;
    func_0x000107c61648();
    if (lVar1 != 0) {
      FUN_103843964(uVar2);
      func_0x000107c61574(lVar1);
    }
  }
  return;
}



/* Entry: 10384408c; end: 1038440cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10384408c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_113071300);
  func_0x000107c5c734();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 1038440cc; end: 103844617;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1038440cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  code *pcVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  ulong uVar17;
  long unaff_x20;
  ulong uVar18;
  undefined *apuStack_c8 [3];
  undefined8 uStack_b0;
  undefined **ppuStack_a8;
  long alStack_80 [2];
  code *pcStack_70;
  undefined8 uStack_68;
  
  func_0x000107c613fc();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112fa5758);
  func_0x000107c61174();
  lVar4 = param_5;
  func_0x000107c4aeb0();
  func_0x000107c61180();
  lVar5 = 0;
  func_0x000103827548();
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x10) = param_4;
  *(undefined8 *)(lVar5 + 0x18) = param_6;
  *(undefined2 *)(lVar5 + 0x20) = 0x101;
  lVar6 = 0;
  func_0x0001038841ac();
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar7 = 0;
  alStack_80[0] = lVar6;
  func_0x000103884510();
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar10 = &UNK_11069d610;
  alStack_80[1] = uVar7;
  func_0x000107c613fc(&UNK_11069d610,0x18,7);
  *(undefined8 *)(puVar10 + 0x10) = param_6;
  func_0x0001000285a8(0x112fa09d0,&UNK_10dc15640);
  func_0x000107c613fc();
  func_0x000107c61174(param_6);
  pcVar2 = FUN_103844618;
  func_0x0001000bdd8c(FUN_103844618,puVar10);
  FUN_103884924(0);
  func_0x000107c610f8();
  func_0x0001038847f4();
  uVar7 = 0;
  pcStack_70 = pcVar2;
  FUN_103883e50();
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar18 = 0;
  uStack_68 = uVar7;
  puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    uVar1 = uVar18;
    if (uVar18 < 5) {
      uVar1 = 4;
    }
    do {
      if (uVar18 == 4) {
        uVar7 = 0x112fa09d8;
        func_0x0001000285a8(0x112fa09d8,&UNK_10dc15648);
        func_0x000107c61408(alStack_80,4,uVar7);
        lVar6 = lVar4;
        func_0x000107c4aeb4();
        func_0x000107c61180();
        lVar11 = lVar6;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(lVar6);
        if (lVar11 == 0) {
          func_0x0001000285a8(0x112d5ba30,&UNK_10d929a50);
          apuStack_c8[0] = (undefined *)((ulong)apuStack_c8[0] & 0xffffffffffffff00);
          ppuVar12 = apuStack_c8;
          func_0x000100854cb0(ppuVar12);
        }
        else {
          lVar6 = lVar11;
          func_0x000107c3d14c(lVar11);
          func_0x000107c61180();
          func_0x000107c615e8(lVar11);
          func_0x0001000285a8(0x112d3b7d0,&UNK_10d904cc0);
          func_0x000107c61174(lVar6);
          lVar11 = lVar6;
          func_0x0001000b637c();
          pcVar2 = FUN_10382782c;
          func_0x0001000bfde0(FUN_10382782c,0,PTR___sSbN_11034dd40);
          func_0x000107c61574(lVar11);
          ppuVar12 = (undefined **)PTR___sSbSQsWP_11034dd50;
          func_0x0001000c2068(PTR___sSbSQsWP_11034dd50);
          func_0x000107c61574(pcVar2);
          func_0x000107c61170(lVar6);
          func_0x000107c61170(lVar6);
        }
        func_0x0001000285a8(0x112fa04d0,&UNK_10dc16a90);
        uVar7 = param_3;
        func_0x000107c3e088(param_3);
        func_0x000107c61180();
        uVar13 = uVar7;
        func_0x0001000b637c();
        func_0x000107c61170(uVar7);
        uVar7 = 0x112f9fad8;
        func_0x0001000285a8(0x112f9fad8,&UNK_10dc15650);
        pcVar2 = FUN_103827568;
        func_0x0001000d5158(FUN_103827568,0,uVar7);
        uVar7 = 0;
        func_0x0001007b706c(0);
        pcVar14 = FUN_10382777c;
        func_0x00010068b194(FUN_10382777c,0,uVar7);
        func_0x000107c61574(pcVar2);
        apuStack_c8[0] = (undefined *)0x0;
        ppuVar15 = apuStack_c8;
        func_0x0001006c71a4(ppuVar15);
        func_0x000107c61574(pcVar14);
        func_0x000107c61574(uVar13);
        uVar7 = 0;
        FUN_1038851c8();
        func_0x000107c610f8();
        func_0x000107c6157c(ppuVar15);
        func_0x000107c6157c(ppuVar12);
        func_0x0001038849e0(puVar10,ppuVar15,1,ppuVar12,1);
        ppuStack_a8 = &PTR_DAT_1106a10b0;
        apuStack_c8[0] = puVar10;
        uStack_b0 = uVar7;
        FUN_10388af40(0);
        func_0x000107c610f8();
        func_0x000107c61174(puVar10);
        ppuVar16 = apuStack_c8;
        func_0x00010388ae60(ppuVar16);
        func_0x000107c4fba8(uVar3);
        func_0x000107c61170(param_1);
        func_0x000107c61170(param_2);
        func_0x000107c61170(param_5);
        func_0x000107c61170(uVar3);
        func_0x000107c61170(param_3);
        func_0x000107c61170(lVar4);
        func_0x000107c61574(ppuVar12);
        func_0x000107c61574(ppuVar15);
        func_0x000107c61170(puVar10);
        func_0x000107c61170(ppuVar16);
        *(long *)(unaff_x20 + 0x10) = lVar5;
        return unaff_x20;
      }
      if (uVar1 == uVar18) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103844618);
        (*pcVar2)();
      }
      lVar6 = alStack_80[uVar18];
      uVar18 = uVar18 + 1;
    } while (lVar6 == 0);
    func_0x000107c615f0(lVar6);
    puVar9 = puVar10;
    func_0x000107c61550();
    if ((((int)puVar9 == 0) || ((long)puVar10 < 0)) ||
       (puVar9 = puVar10, ((ulong)puVar10 >> 0x3e & 1) != 0)) {
      if ((ulong)puVar10 >> 0x3e == 0) {
        puVar8 = *(undefined **)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar8 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar10) {
          puVar8 = puVar10;
        }
        func_0x000107c60480(puVar8);
      }
      puVar9 = (undefined *)0x0;
      FUN_10383a990(0,puVar8 + 1,1,puVar10);
    }
    uVar17 = (ulong)puVar9 & 0xffffffffffffff8;
    uVar1 = *(ulong *)(uVar17 + 0x10);
    puVar10 = puVar9;
    if (*(ulong *)(uVar17 + 0x18) >> 1 <= uVar1) {
      puVar10 = (undefined *)(ulong)(1 < *(ulong *)(uVar17 + 0x18));
      FUN_10383a990(puVar10,uVar1 + 1,1,puVar9);
      uVar17 = (ulong)puVar10 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar17 + 0x10) = uVar1 + 1;
    *(long *)(uVar17 + uVar1 * 8 + 0x20) = lVar6;
  } while( true );
}


