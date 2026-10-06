/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102979548; end: 10297959b;  */

void FUN_102979548(void)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,0,0);
  FUN_1029795b8(*(undefined1 *)(lVar1 + 0x10),uVar2);
  return;
}



/* Entry: 10297959c; end: 1029795b7;  */

void FUN_10297959c(long param_1,long param_2)

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



/* Entry: 1029795b8; end: 102979827;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1029795b8(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long unaff_x20;
  long lStack_68;
  
  func_0x000100083b20(&lStack_68);
  lVar3 = lStack_68;
  uVar4 = *(undefined8 *)(lStack_68 + _DAT_113083f78);
  func_0x000107c61174();
  func_0x000107c61170(lVar3);
  func_0x000100083b20(&lStack_68);
  lVar3 = lStack_68;
  uVar5 = *(undefined8 *)(lStack_68 + _DAT_112fcd5d8);
  func_0x000107c61174(uVar5);
  func_0x000107c61170(lVar3);
  func_0x000100083b20(&lStack_68);
  lVar3 = lStack_68;
  uVar6 = *(undefined8 *)(lStack_68 + _DAT_112fcd5e0);
  func_0x000107c61174(uVar6);
  func_0x000107c61170(lVar3);
  func_0x000100083b20(&lStack_68);
  lVar3 = lStack_68;
  lVar7 = lStack_68;
  func_0x000107c45064(lStack_68);
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  func_0x000100083b20(&lStack_68);
  lVar3 = lStack_68;
  uVar8 = *(undefined8 *)(lStack_68 + _DAT_113072c10);
  func_0x000107c61174(uVar8);
  func_0x000107c61170(lVar3);
  func_0x000100083b20(&lStack_68);
  lVar3 = lStack_68;
  uVar9 = *(undefined8 *)(lStack_68 + _DAT_113080ad0);
  func_0x000107c61174();
  func_0x000107c61170(lVar3);
  func_0x000100083b20(&lStack_68);
  lVar3 = lStack_68;
  lVar10 = lStack_68;
  func_0x000107c4213c();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  puVar1 = (undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112ed0c68);
  uVar12 = *puVar1;
  uVar2 = puVar1[1];
  func_0x000107c61434(uVar2);
  func_0x000100083b20(&lStack_68);
  puVar11 = PTR_PTR_1126abb38;
  func_0x000107c610f8(PTR_PTR_1126abb38);
  func_0x000107c5fadc(uVar12,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c49364(puVar11);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lStack_68);
  func_0x000107c61170(uVar12);
  return puVar11;
}



/* Entry: 102979828; end: 102979873;  */

void FUN_102979828(undefined8 param_1)

{
  func_0x0001000285a8(0x112ecfc30,&UNK_10daf6370);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102979934,param_1);
  return;
}



/* Entry: 102979874; end: 102979933;  */

void FUN_102979874(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  func_0x000102978978();
  func_0x000107c61574(lStack_38);
  plVar2 = (long *)0x0;
  if (param_2 != 0) {
    lVar1 = 0x112ecfd08;
    func_0x0001000285a8(0x112ecfd08,&UNK_10daf65f0);
    FUN_10296aaf0();
    func_0x000107c613fc();
    *(undefined8 *)(lVar1 + 0x18) = 3;
    *(undefined8 *)(lVar1 + 0x10) = 1;
    *(long *)(lVar1 + 0x20) = param_2;
    plVar2 = &lStack_38;
    lStack_38 = lVar1;
    func_0x000100854cb0();
    func_0x000107c61574(lVar1);
  }
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 102979934; end: 10297994b;  */

void FUN_102979934(long *param_1)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  func_0x000102978978();
  func_0x000107c61574(lStack_38);
  plVar2 = (long *)0x0;
  if (unaff_x20 != 0) {
    lVar1 = 0x112ecfd08;
    func_0x0001000285a8(0x112ecfd08,&UNK_10daf65f0);
    FUN_10296aaf0();
    func_0x000107c613fc();
    *(undefined8 *)(lVar1 + 0x18) = 3;
    *(undefined8 *)(lVar1 + 0x10) = 1;
    *(long *)(lVar1 + 0x20) = unaff_x20;
    plVar2 = &lStack_38;
    lStack_38 = lVar1;
    func_0x000100854cb0();
    func_0x000107c61574(lVar1);
  }
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10297994c; end: 102979c57;  */

void FUN_10297994c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ed0870,&UNK_10daf72e0);
  puVar1 = &UNK_110574dc8;
  func_0x000107c613fc(&UNK_110574dc8,0x98,7);
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
  *(undefined8 *)(puVar1 + 0x88) = param_16;
  *(undefined8 *)(puVar1 + 0x90) = param_17;
  func_0x000107c6157c();
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
  func_0x0001000823a8(FUN_102979c58,puVar1);
  return;
}



/* Entry: 102979c58; end: 102979c9b;  */

void FUN_102979c58(void)

{
  long unaff_x20;
  
  func_0x000102979ad8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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



/* Entry: 102979c9c; end: 10297a503;  */

void FUN_102979c9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x70) = param_6;
  *(undefined8 *)(unaff_x20 + 0x78) = param_4;
  *(undefined8 *)(unaff_x20 + 0x40) = param_8;
  *(undefined8 *)(unaff_x20 + 0x48) = param_7;
  *(undefined8 *)(unaff_x20 + 0x88) = param_11;
  *(undefined8 *)(unaff_x20 + 0x90) = param_10;
  *(undefined8 *)(unaff_x20 + 0x80) = param_9;
  *(undefined8 *)(unaff_x20 + 0x60) = param_13;
  *(undefined8 *)(unaff_x20 + 0x68) = param_3;
  *(undefined8 *)(unaff_x20 + 0x10) = param_14;
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_15;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  *(undefined8 *)(unaff_x20 + 0x50) = param_12;
  *(undefined8 *)(unaff_x20 + 0x58) = param_16;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_17;
  return;
}



/* Entry: 10297a504; end: 10297a637;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10297a504(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long lStack_58;
  
  func_0x000100083b20(&lStack_58);
  lVar1 = lStack_58;
  uVar2 = *(undefined8 *)(lStack_58 + _DAT_113083f78);
  func_0x000107c61174(uVar2);
  func_0x000107c61170(lVar1);
  func_0x000100083b20(&lStack_58);
  lVar1 = lStack_58;
  uVar3 = *(undefined8 *)(lStack_58 + _DAT_112fcd5d8);
  func_0x000107c61174(uVar3);
  func_0x000107c61170(lVar1);
  func_0x000100083b20(&lStack_58);
  lVar1 = lStack_58;
  lVar4 = lStack_58;
  func_0x000107c4e26c(lStack_58);
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  func_0x000100083b20(&lStack_58);
  puVar5 = PTR_PTR_1126abb48;
  func_0x000107c610f8();
  func_0x000107c49368();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lStack_58);
  *param_1 = puVar5;
  return;
}



/* Entry: 10297a638; end: 10297a743;  */

void FUN_10297a638(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  uVar1 = 0x70616d;
  func_0x000107c5fadc(0x70616d,0xe300000000000000);
  uVar2 = uVar1;
  func_0x000107c312f4();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  uVar1 = uVar2;
  func_0x000108f728c0(uVar2);
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  puVar3 = PTR_PTR_1126b1100;
  func_0x000107c610f8(PTR_PTR_1126b1100);
  func_0x000107c48538();
  func_0x000107c61170(uVar1);
  puVar4 = PTR_PTR_1126b1108;
  func_0x000107c610f8();
  func_0x000107c48b78();
  func_0x000107c5f9dc(param_2,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c58d80(puVar4);
  func_0x000107c61170(param_2);
  func_0x000107c58d74(puVar4);
  func_0x000107c61170(puVar3);
  *param_1 = puVar4;
  return;
}



/* Entry: 10297a744; end: 10297a7ff;  */

void FUN_10297a744(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
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
  return;
}



/* Entry: 10297a800; end: 10297a80f;  */

undefined1  [16] FUN_10297a800(void)

{
  return ZEXT816(0x110574df0);
}



/* Entry: 10297a810; end: 10297a82f;  */

void FUN_10297a810(void)

{
  func_0x000107c61168(&PTR_PTR_112ed08b8);
  return;
}



/* Entry: 10297a830; end: 10297a873;  */

void FUN_10297a830(char *param_1)

{
  char cVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  cVar1 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,1,0);
  *(bool *)(unaff_x20 + 0x10) = cVar1 == '\x01';
  return;
}



/* Entry: 10297a874; end: 10297a887;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10297a874(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long lStack_58;
  
  func_0x000100083b20(&lStack_58);
  lVar1 = lStack_58;
  uVar2 = *(undefined8 *)(lStack_58 + _DAT_113083f78);
  func_0x000107c61174(uVar2);
  func_0x000107c61170(lVar1);
  func_0x000100083b20(&lStack_58);
  lVar1 = lStack_58;
  uVar3 = *(undefined8 *)(lStack_58 + _DAT_112fcd5d8);
  func_0x000107c61174(uVar3);
  func_0x000107c61170(lVar1);
  func_0x000100083b20(&lStack_58);
  lVar1 = lStack_58;
  lVar4 = lStack_58;
  func_0x000107c4e26c(lStack_58);
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  func_0x000100083b20(&lStack_58);
  puVar5 = PTR_PTR_1126abb48;
  func_0x000107c610f8();
  func_0x000107c49368();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lStack_58);
  *param_1 = puVar5;
  return;
}



/* Entry: 10297a888; end: 10297a8d3;  */

void FUN_10297a888(undefined8 param_1)

{
  func_0x0001000285a8(0x112ecfc30,&UNK_10daf6370);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10297a994,param_1);
  return;
}



/* Entry: 10297a8d4; end: 10297a993;  */

void FUN_10297a8d4(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  func_0x000102979d68();
  func_0x000107c61574(lStack_38);
  plVar2 = (long *)0x0;
  if (param_2 != 0) {
    lVar1 = 0x112ecfd08;
    func_0x0001000285a8(0x112ecfd08,&UNK_10daf65f0);
    FUN_10296aaf0();
    func_0x000107c613fc();
    *(undefined8 *)(lVar1 + 0x18) = 3;
    *(undefined8 *)(lVar1 + 0x10) = 1;
    *(long *)(lVar1 + 0x20) = param_2;
    plVar2 = &lStack_38;
    lStack_38 = lVar1;
    func_0x000100854cb0();
    func_0x000107c61574(lVar1);
  }
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10297a994; end: 10297a9ab;  */

void FUN_10297a994(long *param_1)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  func_0x000102979d68();
  func_0x000107c61574(lStack_38);
  plVar2 = (long *)0x0;
  if (unaff_x20 != 0) {
    lVar1 = 0x112ecfd08;
    func_0x0001000285a8(0x112ecfd08,&UNK_10daf65f0);
    FUN_10296aaf0();
    func_0x000107c613fc();
    *(undefined8 *)(lVar1 + 0x18) = 3;
    *(undefined8 *)(lVar1 + 0x10) = 1;
    *(long *)(lVar1 + 0x20) = unaff_x20;
    plVar2 = &lStack_38;
    lStack_38 = lVar1;
    func_0x000100854cb0();
    func_0x000107c61574(lVar1);
  }
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10297a9ac; end: 10297aa17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10297a9ac(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  func_0x00010038b1f4();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112ed09a0) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 10297aa18; end: 10297aa1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10297aa18(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  func_0x00010038b1f4();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112ed09a0) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 10297aa20; end: 10297aad7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10297aa20(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ed09a0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10297aad8; end: 10297ab33; -[_TtC34FriendProfileSectionPluginRegistry41FriendProfileSectionPluginFactoryServices build:] */

void FUN_10297aad8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x00010297aa6c(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10297ab34; end: 10297ab93; -[_TtC34FriendProfileSectionPluginRegistry41FriendProfileSectionPluginFactoryServices init] */

void FUN_10297ab34(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FriendProfileSectionPluginRegistry.FriendProfileSectionPluginFactoryServices"
                      ,0x4c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10297ab60);
  (*pcVar1)();
}



/* Entry: 10297ab94; end: 10297ad17; -[_TtC34FriendProfileSectionPluginRegistry41FriendProfileSectionPluginFactoryServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10297ab94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ed09a0));
  return;
}



/* Entry: 10297ad18; end: 10297ad43;  */

void FUN_10297ad18(void)

{
  func_0x0001000285a8(0x112ed0a00,&UNK_10daf74b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_initStaticObject_11034f440)();
  return;
}



/* Entry: 10297ad44; end: 10297ae07;  */

void FUN_10297ad44(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112ed0a00;
  func_0x0001000285a8(0x112ed0a00,&UNK_10daf74b0);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 10297ae08; end: 10297ae0b;  */

void FUN_10297ae08(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ed0a40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daf74c0;
  func_0x000107c61520(&UNK_10daf74c0,&UNK_110575058);
  puRam0000000112ed0a40 = puVar1;
  return;
}



/* Entry: 10297ae0c; end: 10297ae77;  */

void FUN_10297ae0c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ed0a40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daf74c0;
  func_0x000107c61520(&UNK_10daf74c0,&UNK_110575058);
  puRam0000000112ed0a40 = puVar1;
  return;
}



/* Entry: 10297ae78; end: 10297ae7b;  */

void FUN_10297ae78(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ed0a58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daf7568;
  func_0x000107c61520(&UNK_10daf7568,&UNK_110574fb8);
  puRam0000000112ed0a58 = puVar1;
  return;
}



/* Entry: 10297ae7c; end: 10297aee7;  */

void FUN_10297ae7c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ed0a58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daf7568;
  func_0x000107c61520(&UNK_10daf7568,&UNK_110574fb8);
  puRam0000000112ed0a58 = puVar1;
  return;
}



/* Entry: 10297aee8; end: 10297af6b;  */

void FUN_10297aee8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 10297af6c; end: 10297af6f;  */

void FUN_10297af6c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ed0a70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daf75d8;
  func_0x000107c61520(&UNK_10daf75d8,&UNK_110574fb8);
  puRam0000000112ed0a70 = puVar1;
  return;
}



/* Entry: 10297af70; end: 10297afaf;  */

void FUN_10297af70(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ed0a70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daf75d8;
  func_0x000107c61520(&UNK_10daf75d8,&UNK_110574fb8);
  puRam0000000112ed0a70 = puVar1;
  return;
}



/* Entry: 10297afb0; end: 10297afb3;  */

void FUN_10297afb0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ed0a78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daf7590;
  func_0x000107c61520(&UNK_10daf7590,&UNK_110574fb8);
  puRam0000000112ed0a78 = puVar1;
  return;
}



/* Entry: 10297afb4; end: 10297aff3;  */

void FUN_10297afb4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ed0a78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daf7590;
  func_0x000107c61520(&UNK_10daf7590,&UNK_110574fb8);
  puRam0000000112ed0a78 = puVar1;
  return;
}



/* Entry: 10297aff4; end: 10297b177;  */

int FUN_10297aff4(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf8 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 7) {
      iVar2 = 4;
    }
    if (param_2 + 7 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10297b070;
        goto LAB_10297b054;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10297b054:
      return ((uint)*param_1 | uVar1 << 8) - 7;
    }
  }
LAB_10297b070:
  iVar2 = *param_1 - 8;
  if (*param_1 < 8) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10297b178; end: 10297b2e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10297b178(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9,undefined4 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_a0 [8];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112ed0aa8;
  func_0x000107c61614(unaff_x20 + _DAT_112ed0aa8,0);
  lVar3 = _DAT_112ed0ab0;
  func_0x000107c61614(unaff_x20 + _DAT_112ed0ab0,0);
  func_0x000107c61428(unaff_x20 + lVar2,auStack_78,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_1);
  func_0x000107c61428(unaff_x20 + lVar3,auStack_90,1,0);
  func_0x000107c61604(unaff_x20 + lVar3,param_2);
  *(undefined8 *)(unaff_x20 + _DAT_112ed0ab8) = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ed0ac0);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112ed0ac8) = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ed0ad0);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  *(undefined1 *)(unaff_x20 + _DAT_112ed0ad8) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112ed0ae0) = param_11;
  puVar4 = auStack_a0;
  func_0x000107c61154(puVar4,PTR_s_init_1125d9248);
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_2);
  return puVar4;
}



/* Entry: 10297b2e4; end: 10297b3cb; -[_TtC34FriendProfileSectionPluginRegistry31FriendProfileSectionPluginScope initWithPageActionHandler:displayContentDelegate:deckHierarchy:profileSessionId:snapchatter:conversationId:hideRecursiveOptions:sourcePage:] */

undefined8
FUN_10297b2e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec(param_6);
  uVar2 = param_2;
  func_0x000107c5faec(param_8);
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_7);
  uVar1 = param_3;
  FUN_10297b4ac(param_3,param_4,param_5,param_6,param_2,param_7,param_8,uVar2,param_9);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_4);
  return uVar1;
}



/* Entry: 10297b3cc; end: 10297b42b; -[_TtC34FriendProfileSectionPluginRegistry31FriendProfileSectionPluginScope init] */

void FUN_10297b3cc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FriendProfileSectionPluginRegistry.FriendProfileSectionPluginScope",0x42,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10297b3f8);
  (*pcVar1)();
}



/* Entry: 10297b42c; end: 10297b4ab; -[_TtC34FriendProfileSectionPluginRegistry31FriendProfileSectionPluginScope .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010297b47c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010297b480) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10297b42c(long param_1)

{
  func_0x000100d1383c(param_1 + _DAT_112ed0aa8);
  func_0x000100d1383c(param_1 + _DAT_112ed0ab0);
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ed0ab8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ed0ac0 + 8))
  ;
  return;
}



/* Entry: 10297b4ac; end: 10297b5fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10297b4ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9,undefined4 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  func_0x000107c614f0();
  lVar2 = _DAT_112ed0aa8;
  func_0x000107c61614(unaff_x20 + _DAT_112ed0aa8,0);
  lVar3 = _DAT_112ed0ab0;
  func_0x000107c61614(unaff_x20 + _DAT_112ed0ab0,0);
  func_0x000107c61428(unaff_x20 + lVar2,auStack_78,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_1);
  func_0x000107c61428(unaff_x20 + lVar3,auStack_90,1,0);
  func_0x000107c61604(unaff_x20 + lVar3,param_2);
  *(undefined8 *)(unaff_x20 + _DAT_112ed0ab8) = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ed0ac0);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112ed0ac8) = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ed0ad0);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  *(undefined1 *)(unaff_x20 + _DAT_112ed0ad8) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112ed0ae0) = param_11;
  func_0x000107c61154(&stack0xffffffffffffff60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10297b5fc; end: 10297b667;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10297b5fc(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  func_0x00010038b260();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112ed0b18) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 10297b668; end: 10297b66f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10297b668(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  func_0x00010038b260();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112ed0b18) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 10297b670; end: 10297b727;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10297b670(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ed0b18) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10297b728; end: 10297b783; -[_TtC33GroupProfileSectionPluginRegistry40GroupProfileSectionPluginFactoryServices build:] */

void FUN_10297b728(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x00010297b6bc(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10297b784; end: 10297b7e3; -[_TtC33GroupProfileSectionPluginRegistry40GroupProfileSectionPluginFactoryServices init] */

void FUN_10297b784(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GroupProfileSectionPluginRegistry.GroupProfileSectionPluginFactoryServices",
                      0x4a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10297b7b0);
  (*pcVar1)();
}



/* Entry: 10297b7e4; end: 10297b967; -[_TtC33GroupProfileSectionPluginRegistry40GroupProfileSectionPluginFactoryServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10297b7e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ed0b18));
  return;
}



/* Entry: 10297b968; end: 10297b9e3;  */

void FUN_10297b968(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112ed0b48 != 0) {
    return;
  }
  puVar1 = &UNK_110575218;
  func_0x000107c614d4();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112ed0b48 = param_1;
  return;
}



/* Entry: 10297b9e4; end: 10297baa7;  */

void FUN_10297b9e4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112ed0b80;
  func_0x0001000285a8(0x112ed0b80,&UNK_10daf7760);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 10297baa8; end: 10297baab;  */

void FUN_10297baa8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ed0b90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daf7770;
  func_0x000107c61520(&UNK_10daf7770,&UNK_1105752b8);
  puRam0000000112ed0b90 = puVar1;
  return;
}



/* Entry: 10297baac; end: 10297bb17;  */

void FUN_10297baac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ed0b90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daf7770;
  func_0x000107c61520(&UNK_10daf7770,&UNK_1105752b8);
  puRam0000000112ed0b90 = puVar1;
  return;
}



/* Entry: 10297bb18; end: 10297bb1b;  */

void FUN_10297bb18(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ed0ba8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daf7818;
  func_0x000107c61520(&UNK_10daf7818,&UNK_1105751f8);
  puRam0000000112ed0ba8 = puVar1;
  return;
}



/* Entry: 10297bb1c; end: 10297bb87;  */

void FUN_10297bb1c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ed0ba8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daf7818;
  func_0x000107c61520(&UNK_10daf7818,&UNK_1105751f8);
  puRam0000000112ed0ba8 = puVar1;
  return;
}



/* Entry: 10297bb88; end: 10297bc0b;  */

void FUN_10297bb88(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 10297bc0c; end: 10297bc0f;  */

void FUN_10297bc0c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ed0bc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daf7888;
  func_0x000107c61520(&UNK_10daf7888,&UNK_1105751f8);
  puRam0000000112ed0bc0 = puVar1;
  return;
}



/* Entry: 10297bc10; end: 10297bc4f;  */

void FUN_10297bc10(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ed0bc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daf7888;
  func_0x000107c61520(&UNK_10daf7888,&UNK_1105751f8);
  puRam0000000112ed0bc0 = puVar1;
  return;
}



/* Entry: 10297bc50; end: 10297bc53;  */

void FUN_10297bc50(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ed0bc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daf7840;
  func_0x000107c61520(&UNK_10daf7840,&UNK_1105751f8);
  puRam0000000112ed0bc8 = puVar1;
  return;
}



/* Entry: 10297bc54; end: 10297bc93;  */

void FUN_10297bc54(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ed0bc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daf7840;
  func_0x000107c61520(&UNK_10daf7840,&UNK_1105751f8);
  puRam0000000112ed0bc8 = puVar1;
  return;
}



/* Entry: 10297bc94; end: 10297be17;  */

int FUN_10297bc94(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10297bd10;
        goto LAB_10297bcf4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10297bcf4:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_10297bd10:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10297be18; end: 10297bf63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10297be18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_a0 [8];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112ed0c58;
  func_0x000107c61614(unaff_x20 + _DAT_112ed0c58,0);
  lVar3 = _DAT_112ed0c60;
  func_0x000107c61614(unaff_x20 + _DAT_112ed0c60,0);
  func_0x000107c61428(unaff_x20 + lVar2,auStack_78,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_1);
  func_0x000107c61428(unaff_x20 + lVar3,auStack_90,1,0);
  func_0x000107c61604(unaff_x20 + lVar3,param_2);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ed0c68);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ed0c70);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112ed0c78) = param_7;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ed0c80);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  puVar4 = auStack_a0;
  func_0x000107c61154(puVar4,PTR_s_init_1125d9248);
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_2);
  return puVar4;
}



/* Entry: 10297bf64; end: 10297c04b; -[_TtC33GroupProfileSectionPluginRegistry30GroupProfileSectionPluginScope initWithPageActionHandler:displayContentDelegate:profileSessionId:groupId:groupProfileSubType:communityId:] */

undefined8
FUN_10297bf64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c5faec(param_5);
  uVar2 = param_2;
  func_0x000107c5faec(param_6);
  if (param_8 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = uVar2;
    func_0x000107c5faec(param_8);
  }
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  uVar1 = param_3;
  FUN_10297c120(param_3,param_4,param_5,param_2,param_6,uVar2,param_7,param_8,uVar3);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_4);
  return uVar1;
}



/* Entry: 10297c04c; end: 10297c0ab; -[_TtC33GroupProfileSectionPluginRegistry30GroupProfileSectionPluginScope init] */

void FUN_10297c04c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GroupProfileSectionPluginRegistry.GroupProfileSectionPluginScope",0x40,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10297c078);
  (*pcVar1)();
}



/* Entry: 10297c0ac; end: 10297c11f; -[_TtC33GroupProfileSectionPluginRegistry30GroupProfileSectionPluginScope .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010297c0ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010297c0f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10297c0ac(long param_1)

{
  func_0x000100d138a4(param_1 + _DAT_112ed0c58);
  func_0x000100d138a4(param_1 + _DAT_112ed0c60);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ed0c68 + 8))
  ;
  return;
}



/* Entry: 10297c120; end: 10297c24f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10297c120(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  func_0x000107c614f0();
  lVar2 = _DAT_112ed0c58;
  func_0x000107c61614(unaff_x20 + _DAT_112ed0c58,0);
  lVar3 = _DAT_112ed0c60;
  func_0x000107c61614(unaff_x20 + _DAT_112ed0c60,0);
  func_0x000107c61428(unaff_x20 + lVar2,auStack_78,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_1);
  func_0x000107c61428(unaff_x20 + lVar3,auStack_90,1,0);
  func_0x000107c61604(unaff_x20 + lVar3,param_2);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ed0c68);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ed0c70);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112ed0c78) = param_7;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ed0c80);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  func_0x000107c61154(&stack0xffffffffffffff60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10297c250; end: 10297c573;  */

/* WARNING: Possible PIC construction at 0x00010297c26c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010297c270) */
/* WARNING: Removing unreachable block (ram,0x000102507dcc) */
/* WARNING: Removing unreachable block (ram,0x000102507de4) */
/* WARNING: Removing unreachable block (ram,0x000102507ddc) */
/* WARNING: Removing unreachable block (ram,0x000102507dfc) */

void FUN_10297c250(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10297c574; end: 10297c5df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10297c574(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100356c5c();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ed0cb8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10297c5e0; end: 10297c5e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10297c5e0(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100356c5c();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ed0cb8) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 10297c5e8; end: 10297c633;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10297c5e8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ed0cb8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10297c634; end: 10297c693; -[_TtC16EmbeddedMapScope34ComposerEmbeddedMapFactoryServices init] */

void FUN_10297c634(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("EmbeddedMapScope.ComposerEmbeddedMapFactoryServices",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10297c660);
  (*pcVar1)();
}



/* Entry: 10297c694; end: 10297c6a3;  */

undefined1  [16] FUN_10297c694(void)

{
  return ZEXT816(0x110575470);
}



/* Entry: 10297c6a4; end: 10297c6b3; -[_TtC16EmbeddedMapScope34ComposerEmbeddedMapFactoryServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10297c6a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ed0cb8));
  return;
}



/* Entry: 10297c6b4; end: 10297c7a3;  */

long FUN_10297c6b4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10297c7a4; end: 10297c8cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10297c7a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  func_0x000107c6071c();
  *(undefined8 *)(unaff_x20 + _DAT_112ed0d00) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ed0ce8);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ed0cf0) = param_4;
  *(undefined1 *)(unaff_x20 + _DAT_112ed0cf8) = param_5;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10297c8cc; end: 10297c977; -[_TtC16EmbeddedMapScope16EmbeddedMapScope initWithProfileSessionID:sourceType:mapInteractionEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10297c8cc(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                  undefined1 param_6)

{
  long *plVar1;
  long lStack_50;
  long lStack_48;
  
  if (param_4 == 0) {
    param_4 = 0;
    param_3 = 0;
    lStack_48 = param_2;
  }
  else {
    func_0x000107c5faec();
    lStack_48 = param_4;
  }
  func_0x000107c6071c();
  *(undefined8 *)(param_2 + _DAT_112ed0d00) = param_1;
  plVar1 = (long *)(param_2 + _DAT_112ed0ce8);
  *plVar1 = param_4;
  plVar1[1] = param_3;
  *(undefined8 *)(param_2 + _DAT_112ed0cf0) = param_5;
  *(undefined1 *)(param_2 + _DAT_112ed0cf8) = param_6;
  func_0x000100343d2c();
  lStack_50 = param_2;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10297c978; end: 10297c9d3; -[_TtC16EmbeddedMapScope16EmbeddedMapScope init] */

void FUN_10297c978(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("EmbeddedMapScope.EmbeddedMapScope",0x21,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10297c9a4);
  (*pcVar1)();
}



/* Entry: 10297c9d4; end: 10297c9e7; -[_TtC16EmbeddedMapScope16EmbeddedMapScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10297c9d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ed0ce8 + 8))
  ;
  return;
}



/* Entry: 10297c9e8; end: 10297ca53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10297c9e8(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010034b5ec();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ed0d38) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10297ca54; end: 10297ca5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10297ca54(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010034b5ec();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ed0d38) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 10297ca5c; end: 10297cafb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10297ca5c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ed0d38) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10297cafc; end: 10297cb57; -[_TtC16EmbeddedMapScope26EmbeddedMapFactoryServices build:] */

void FUN_10297cafc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x00010297caa8(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10297cb58; end: 10297cbb7; -[_TtC16EmbeddedMapScope26EmbeddedMapFactoryServices init] */

void FUN_10297cb58(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("EmbeddedMapScope.EmbeddedMapFactoryServices",0x2b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10297cb84);
  (*pcVar1)();
}



/* Entry: 10297cbb8; end: 10297cbc7;  */

undefined1  [16] FUN_10297cbb8(void)

{
  return ZEXT816(0x110575530);
}



/* Entry: 10297cbc8; end: 10297cbd7; -[_TtC16EmbeddedMapScope26EmbeddedMapFactoryServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10297cbc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ed0d38));
  return;
}



/* Entry: 10297cbd8; end: 10297ce53;  */

long FUN_10297cbd8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10297ce54; end: 10297ceff;  */

void FUN_10297ce54(void)

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



/* Entry: 10297cf00; end: 10297cf3f;  */

void FUN_10297cf00(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if (*param_2 != 1) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (*param_2 != 0) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 10297cf40; end: 10297cf6f; -[SCEmbeddedMapCameraUpdate description] */

void FUN_10297cf40(void)

{
  undefined1 auStack_58 [72];
  
  func_0x000107c61174();
  FUN_10297d178(auStack_58);
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10297cf70; end: 10297cfb7; -[SCEmbeddedMapCameraUpdate init] */

void FUN_10297cf70(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "EmbeddedMapScope/EmbeddedMapCameraUpdateWrapper.swift",0x35,2,0x38,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10297cfb8);
  (*pcVar1)();
}



/* Entry: 10297cfb8; end: 10297cfbb; -[SCEmbeddedMapCameraUpdate copyWithZone:] */

void FUN_10297cfb8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10297cfbc; end: 10297cfcf; +[SCEmbeddedMapCameraUpdate coordinateWithCoordinate:zoomLevel:pitch:padding:] */

void FUN_10297cfbc(void)

{
  FUN_10297d2b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10297cfd0; end: 10297cfe3; +[SCEmbeddedMapCameraUpdate boundsWithBounds:padding:] */

void FUN_10297cfd0(void)

{
  func_0x00010297d3c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10297cfe4; end: 10297d0ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10297cfe4(code *param_1,undefined8 param_2,code *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + _DAT_112ed0d68) == '\x01') {
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ed0d90);
    if (*(char *)(puVar1 + 4) == '\x01') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10297d0dc);
      (*pcVar3)();
    }
    puVar2 = (undefined8 *)(unaff_x20 + _DAT_112ed0d98);
    if (*(char *)(puVar2 + 4) == '\x01') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10297d0e4);
      (*pcVar3)();
    }
    (*param_3)(*puVar1,puVar1[1],puVar1[2],puVar1[3],*puVar2,puVar2[1],puVar2[2],puVar2[3]);
  }
  else {
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ed0d70);
    if (*(char *)(puVar1 + 2) == '\x01') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10297d0e0);
      (*pcVar3)();
    }
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_112ed0d78) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10297d0e8);
      (*pcVar3)();
    }
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_112ed0d80) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10297d0ec);
      (*pcVar3)();
    }
    puVar2 = (undefined8 *)(unaff_x20 + _DAT_112ed0d88);
    if (*(char *)(puVar2 + 4) == '\x01') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10297d0f0);
      (*pcVar3)();
    }
    (*param_1)(*puVar1,puVar1[1],*(undefined8 *)(unaff_x20 + _DAT_112ed0d78),
               *(undefined8 *)(unaff_x20 + _DAT_112ed0d80),*puVar2,puVar2[1],puVar2[2],puVar2[3]);
  }
  return;
}



/* Entry: 10297d0f0; end: 10297d143; -[SCEmbeddedMapCameraUpdate matchCoordinate:bounds:] */

void FUN_10297d0f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_50 = param_4;
  uStack_30 = param_3;
  func_0x000107c61174();
  FUN_10297cfe4(FUN_10297d69c,auStack_40,0x10297d6a8,auStack_60);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10297d144; end: 10297d177;  */

void FUN_10297d144(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10297d178; end: 10297d2af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10297d178(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*(char *)(param_2 + _DAT_112ed0d68) == '\x01') {
    puVar1 = (undefined8 *)(param_2 + _DAT_112ed0d90);
    if (*(char *)(puVar1 + 4) == '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10297d29c);
      (*pcVar2)();
    }
    puVar4 = (undefined8 *)(param_2 + _DAT_112ed0d98);
    if (*(char *)(puVar4 + 4) == '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10297d2a4);
      (*pcVar2)();
    }
    puVar3 = puVar1 + 2;
    puVar5 = puVar1 + 3;
    uStack_38 = puVar1[1];
    uStack_40 = *puVar1;
    uVar6 = 1;
  }
  else {
    puVar1 = (undefined8 *)(param_2 + _DAT_112ed0d70);
    if (*(char *)(puVar1 + 2) == '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10297d2a0);
      (*pcVar2)();
    }
    puVar3 = (undefined8 *)(param_2 + _DAT_112ed0d78);
    if (*(char *)(puVar3 + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10297d2a8);
      (*pcVar2)();
    }
    puVar5 = (undefined8 *)(param_2 + _DAT_112ed0d80);
    if (*(char *)(puVar5 + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10297d2ac);
      (*pcVar2)();
    }
    puVar4 = (undefined8 *)(param_2 + _DAT_112ed0d88);
    if (*(char *)(puVar4 + 4) == '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10297d2b0);
      (*pcVar2)();
    }
    uVar6 = 0;
    uStack_38 = puVar1[1];
    uStack_40 = *puVar1;
  }
  uVar11 = *puVar3;
  uVar12 = *puVar5;
  uVar10 = puVar4[1];
  uVar9 = *puVar4;
  uVar8 = puVar4[3];
  uVar7 = puVar4[2];
  func_0x000107c61170();
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  param_1[2] = uVar11;
  param_1[3] = uVar12;
  param_1[5] = uVar10;
  param_1[4] = uVar9;
  param_1[7] = uVar8;
  param_1[6] = uVar7;
  *(undefined1 *)(param_1 + 8) = uVar6;
  return;
}



/* Entry: 10297d2b0; end: 10297d4d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10297d2b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  long lStack_70;
  long lStack_68;
  
  FUN_10297d4d4();
  lVar2 = param_8;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_112ed0d68) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112ed0d70);
  *puVar1 = CONCAT17(in_register_00005007,
                     CONCAT16(in_register_00005006,
                              CONCAT15(in_register_00005005,
                                       CONCAT14(in_register_00005004,
                                                CONCAT13(in_register_00005003,
                                                         CONCAT12(in_register_00005002,
                                                                  CONCAT11(in_register_00005001,
                                                                           in_b0)))))));
  puVar1[1] = param_1;
  *(undefined1 *)(puVar1 + 2) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112ed0d78);
  *puVar1 = param_2;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112ed0d80);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112ed0d88);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  puVar1[2] = param_6;
  puVar1[3] = param_7;
  *(undefined1 *)(puVar1 + 4) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112ed0d90);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 4) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112ed0d98);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 4) = 1;
  lStack_70 = lVar2;
  lStack_68 = param_8;
  func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10297d4d4; end: 10297d4f3;  */

void FUN_10297d4d4(void)

{
  func_0x000107c61168(&PTR_PTR_112874b30);
  return;
}



/* Entry: 10297d4f4; end: 10297d65b;  */

int FUN_10297d4f4(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10297d570;
        goto LAB_10297d554;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10297d554:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_10297d570:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10297d65c; end: 10297d69b;  */

void FUN_10297d65c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ed0dc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daf7b60;
  func_0x000107c61520(&UNK_10daf7b60,&UNK_110575650);
  puRam0000000112ed0dc8 = puVar1;
  return;
}


