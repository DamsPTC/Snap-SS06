/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1029720b8; end: 1029720d7;  */

void FUN_1029720b8(void)

{
  func_0x000107c61168(&PTR_PTR_112874318);
  return;
}



/* Entry: 1029720d8; end: 10297226f;  */

void FUN_1029720d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ed03b0,&UNK_10daf6bf0);
  puVar1 = &UNK_110574238;
  func_0x000107c613fc(&UNK_110574238,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x0001000823a8(FUN_102972270,puVar1);
  return;
}



/* Entry: 102972270; end: 10297227f;  */

void FUN_102972270(long *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_58,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  FUN_10297259c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x20) = uStack_70;
  *(undefined8 *)(lVar1 + 0x28) = uStack_60;
  *(undefined8 *)(lVar1 + 0x10) = uStack_58;
  *(undefined8 *)(lVar1 + 0x18) = uStack_78;
  *(undefined8 *)(lVar1 + 0x30) = uStack_80;
  *(undefined8 *)(lVar1 + 0x38) = uStack_68;
  *param_1 = lVar1;
  return;
}



/* Entry: 102972280; end: 1029722e3;  */

void FUN_102972280(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  *(undefined8 *)(unaff_x20 + 0x38) = param_3;
  return;
}



/* Entry: 1029722e4; end: 1029724d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_1029722e4(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  code *pcVar9;
  long unaff_x20;
  long lVar10;
  
  lVar10 = *(long *)(unaff_x20 + 0x10);
  lVar1 = lVar10;
  FUN_1029894b0();
  func_0x000107c5dbd4(lVar10);
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c3e944(uVar2);
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + _DAT_112ed0ac8);
  func_0x000107c5d984(uVar3);
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_113093a98);
  func_0x000107c61174(uVar4);
  uVar5 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f0d0230);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c4e26c(uVar6);
  func_0x000107c61180();
  uVar7 = 0;
  if (*(long *)(*(long *)(unaff_x20 + 0x28) + _DAT_11303f600) != 0) {
    uVar7 = uVar6;
    func_0x0001003a5b88();
  }
  lVar8 = lVar1;
  func_0x000106049654(lVar1,lVar10,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,8);
  func_0x000107c61180();
  func_0x000107c615e8(lVar1);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  if (lVar8 == 0) {
    pcVar9 = (code *)0x0;
  }
  else {
    func_0x0001000285a8(0x112d5a8a0,&UNK_10d927f50);
    lVar1 = lVar8;
    func_0x0001000b637c(lVar8);
    uVar7 = 0x112ecfcb0;
    func_0x0001000285a8(0x112ecfcb0,&UNK_10daf6cd0);
    pcVar9 = FUN_1029724d8;
    func_0x0001000bfde0(FUN_1029724d8,0,uVar7);
    func_0x000107c61170(lVar8);
    func_0x000107c61574(lVar1);
  }
  return pcVar9;
}



/* Entry: 1029724d8; end: 10297253f;  */

void FUN_1029724d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_28;
  
  uVar3 = *param_2;
  puStack_28 = (undefined *)0x0;
  uVar2 = 0x112d6cc18;
  func_0x0001000285a8(0x112d6cc18,&UNK_10d92f810);
  func_0x000107c5fc50(uVar3,&puStack_28,uVar2);
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puStack_28 != (undefined *)0x0) {
    puVar1 = puStack_28;
  }
  *param_1 = puVar1;
  return;
}



/* Entry: 102972540; end: 10297258b;  */

void FUN_102972540(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10297258c; end: 10297259b;  */

undefined1  [16] FUN_10297258c(void)

{
  return ZEXT816(0x110574260);
}



/* Entry: 10297259c; end: 1029725bb;  */

void FUN_10297259c(void)

{
  func_0x000107c61168(&PTR_PTR_112ed03f8);
  return;
}



/* Entry: 1029725bc; end: 102972607;  */

void FUN_1029725bc(undefined8 param_1)

{
  func_0x0001000285a8(0x112ecfc30,&UNK_10daf6370);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102972658,param_1);
  return;
}



/* Entry: 102972608; end: 102972657;  */

void FUN_102972608(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1029722e4();
  func_0x000107c61574(uStack_38);
  *param_1 = param_2;
  return;
}



/* Entry: 102972658; end: 10297266f;  */

void FUN_102972658(undefined8 *param_1)

{
  undefined8 unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1029722e4();
  func_0x000107c61574(uStack_38);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 102972670; end: 10297284b;  */

/* WARNING: Possible PIC construction at 0x0001029727a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029727b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029727c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029727d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029727e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029727f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102972804: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102972814: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102972824: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102972818) */
/* WARNING: Removing unreachable block (ram,0x000102972808) */
/* WARNING: Removing unreachable block (ram,0x0001029727f8) */
/* WARNING: Removing unreachable block (ram,0x0001029727e8) */
/* WARNING: Removing unreachable block (ram,0x0001029727d8) */
/* WARNING: Removing unreachable block (ram,0x0001029727c8) */
/* WARNING: Removing unreachable block (ram,0x0001029727b8) */
/* WARNING: Removing unreachable block (ram,0x0001029727a8) */
/* WARNING: Removing unreachable block (ram,0x000102972828) */

void FUN_102972670(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_110574390;
  func_0x000107c613fc(&UNK_110574390,0xa0,7);
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
  uVar2 = 0x112ed0488;
  func_0x0001000285a8(0x112ed0488,&UNK_10daf6d58);
  func_0x000107c613fc();
  uVar3 = 0x102972b2c;
  func_0x0001000841fc(0x102972b2c,puVar1,uVar2);
  func_0x000100084214(&UNK_10daf6d20,0x35,2);
  *param_1 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 10297284c; end: 10297288f;  */

void FUN_10297284c(void)

{
  long unaff_x20;
  
  FUN_102972670(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98));
  return;
}



/* Entry: 102972890; end: 10297289f;  */

undefined1  [16] FUN_102972890(void)

{
  return ZEXT816(0x110574370);
}



/* Entry: 1029728a0; end: 102972a7f;  */

void FUN_1029728a0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  undefined8 *puVar1;
  undefined *puVar2;
  code *pcVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 auStack_70 [2];
  
  uVar5 = *param_2;
  func_0x0001000285a8(0x112ed0490,&UNK_10daf6d60);
  puVar1 = auStack_70;
  auStack_70[0] = uVar5;
  func_0x0001000838ec();
  FUN_10297316c(param_3,param_4,puVar1,param_5);
  func_0x000100082720("CallingProfileSectionBuilderServiceProvider",0x2b,2);
  FUN_1029785a4(param_6,param_7,param_8,param_9,param_10,param_11,param_12,param_13,param_14,
                param_15,param_16,puVar1,param_17,param_18,param_19,param_20);
  func_0x000100082720("SCGroupProfileMapSectionBuilderServiceProvider",0x2e,2);
  func_0x0001000285a8(0x112ed0498,&UNK_10daf6d68);
  puVar2 = &UNK_1105743b8;
  func_0x000107c613fc(&UNK_1105743b8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  *(undefined8 *)(puVar2 + 0x18) = param_6;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_6);
  pcVar3 = FUN_102972b80;
  func_0x0001000823a8(FUN_102972b80,puVar2);
  func_0x000100082720("GroupProfileSectionPluginRegistryServiceProvider",0x30,2);
  pcVar4 = pcVar3;
  FUN_102972ca0();
  func_0x000107c61574(puVar1);
  func_0x000107c61574(param_3);
  func_0x000107c61574(param_6);
  func_0x000107c61574(pcVar3);
  func_0x000100082720("GroupProfileSectionPluginProviderEntryPointProvider",0x33,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 102972a80; end: 102972b7f;  */

void FUN_102972a80(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102972b80; end: 102972b87;  */

/* WARNING: Possible PIC construction at 0x000102972c18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102972c1c) */

void FUN_102972b80(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar2 = &UNK_1105743e0;
  func_0x000107c613fc(&UNK_1105743e0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  uVar3 = 0x112ed04a0;
  func_0x0001000285a8(0x112ed04a0,&UNK_10daf6d70);
  func_0x000107c613fc();
  pcVar4 = FUN_102972c98;
  func_0x0001000841fc(FUN_102972c98,puVar2,uVar3);
  func_0x000100084214("GroupProfileSectionPluginRegistryServiceProvider",0x30,2);
  *param_1 = pcVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102972b88; end: 102972c2f;  */

/* WARNING: Possible PIC construction at 0x000102972c18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102972c1c) */

void FUN_102972b88(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_1105743e0;
  func_0x000107c613fc(&UNK_1105743e0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  uVar2 = 0x112ed04a0;
  func_0x0001000285a8(0x112ed04a0,&UNK_10daf6d70);
  func_0x000107c613fc();
  pcVar3 = FUN_102972c98;
  func_0x0001000841fc(FUN_102972c98,puVar1,uVar2);
  func_0x000100084214("GroupProfileSectionPluginRegistryServiceProvider",0x30,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 102972c30; end: 102972c97;  */

void FUN_102972c30(undefined8 *param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  undefined8 uVar2;
  
  if (*param_2 == '\x01') {
    FUN_102979828();
    pcVar1 = "SCGroupProfileMapSectionPluginProvider";
    uVar2 = 0x26;
    param_3 = param_4;
  }
  else {
    FUN_102973f6c();
    pcVar1 = "CallingProfileSectionPluginProvider";
    uVar2 = 0x23;
  }
  func_0x000100082720(pcVar1,uVar2,2);
  *param_1 = param_3;
  return;
}



/* Entry: 102972c98; end: 102972c9f;  */

void FUN_102972c98(undefined8 *param_1,char *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  if (*param_2 == '\x01') {
    FUN_102979828();
    pcVar3 = "SCGroupProfileMapSectionPluginProvider";
    uVar4 = 0x26;
    uVar2 = uVar1;
  }
  else {
    FUN_102973f6c();
    pcVar3 = "CallingProfileSectionPluginProvider";
    uVar4 = 0x23;
  }
  func_0x000100082720(pcVar3,uVar4,2);
  *param_1 = uVar2;
  return;
}



/* Entry: 102972ca0; end: 102972ceb;  */

void FUN_102972ca0(undefined8 param_1)

{
  func_0x0001000285a8(0x112ed04a8,&UNK_10daf6d80);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102972cec,param_1);
  return;
}



/* Entry: 102972cec; end: 102972d53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102972cec(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 unaff_x20;
  long lStack_40;
  long lStack_38;
  
  plVar3 = &lStack_40;
  FUN_10297314c();
  lVar2 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112ed04b0) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar2;
  lStack_38 = param_2;
  func_0x000107c6157c();
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar3;
  return;
}



/* Entry: 102972d54; end: 102972d9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102972d54(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ed04b0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102972da0; end: 102973053;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102972da0(long param_1)

{
  ulong uVar1;
  undefined1 uVar2;
  long lVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  code *pcVar9;
  ulong uVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  undefined1 uStack_78;
  undefined7 uStack_77;
  long lStack_70;
  undefined *puStack_68;
  
  func_0x00010297b9b8();
  lVar12 = *(long *)(param_1 + 0x10);
  if (lVar12 == 0) {
    func_0x000107c6142c(param_1);
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    lVar13 = 0x20;
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    do {
      uVar2 = *(undefined1 *)(param_1 + lVar13);
      func_0x000100083b20(&uStack_78);
      uVar8 = CONCAT71(uStack_77,uStack_78);
      uStack_78 = uVar2;
      func_0x00010008a7c8(&lStack_70,&uStack_78);
      func_0x000107c61574(uVar8);
      lVar3 = lStack_70;
      if (lStack_70 != 0) {
        func_0x000100083b20(&puStack_68);
        func_0x000107c61574(lVar3);
        puVar11 = puStack_68;
        if (puStack_68 != (undefined *)0x0) {
          puVar6 = puVar7;
          func_0x000107c61550();
          if ((((int)puVar6 == 0) || ((long)puVar7 < 0)) ||
             (puVar6 = puVar7, ((ulong)puVar7 >> 0x3e & 1) != 0)) {
            if ((ulong)puVar7 >> 0x3e == 0) {
              puVar5 = *(undefined **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar5 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar7) {
                puVar5 = puVar7;
              }
              func_0x000107c60480(puVar5);
            }
            puVar6 = (undefined *)0x0;
            FUN_102971a28(0,puVar5 + 1,1,puVar7);
          }
          uVar10 = (ulong)puVar6 & 0xffffffffffffff8;
          uVar1 = *(ulong *)(uVar10 + 0x10);
          puVar7 = puVar6;
          if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar1) {
            puVar7 = (undefined *)(ulong)(1 < *(ulong *)(uVar10 + 0x18));
            FUN_102971a28(puVar7,uVar1 + 1,1,puVar6);
            uVar10 = (ulong)puVar7 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar10 + 0x10) = uVar1 + 1;
          *(undefined **)(uVar10 + uVar1 * 8 + 0x20) = puVar11;
        }
      }
      lVar13 = lVar13 + 1;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    func_0x000107c6142c(param_1);
  }
  if ((ulong)puVar7 >> 0x3e == 0) {
    puVar11 = *(undefined **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar11 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar7) {
      puVar11 = puVar7;
    }
    func_0x000107c60480();
  }
  if (puVar11 == (undefined *)0x0) {
    func_0x000107c6142c(puVar7);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_102971d88(0,(ulong)puVar11 & ((long)puVar11 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)puVar11 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102973054);
      (*pcVar4)();
    }
    puVar5 = (undefined *)0x0;
    do {
      puVar6 = puStack_68;
      if (((ulong)puVar7 & 0xc000000000000001) == 0) {
        puVar14 = *(undefined **)(puVar7 + (long)puVar5 * 8 + 0x20);
        func_0x000107c6157c(puVar14);
      }
      else {
        puVar14 = puVar5;
        FUN_102971ef4(puVar5,puVar7);
      }
      uVar8 = 0;
      func_0x0001011eb06c(0);
      pcVar4 = FUN_102973054;
      func_0x0001000bfde0(FUN_102973054,0,uVar8);
      pcVar9 = pcVar4;
      func_0x0001004575f0();
      func_0x000107c61574(puVar14);
      func_0x000107c61574(pcVar4);
      uVar1 = *(ulong *)(puVar6 + 0x10);
      puStack_68 = puVar6;
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar1) {
        FUN_102971d88(1 < *(ulong *)(puVar6 + 0x18),uVar1 + 1,1);
      }
      puVar6 = puStack_68;
      puVar5 = puVar5 + 1;
      *(ulong *)(puStack_68 + 0x10) = uVar1 + 1;
      *(code **)(puStack_68 + uVar1 * 8 + 0x20) = pcVar9;
    } while (puVar11 != puVar5);
    func_0x000107c6142c(puVar7);
  }
  return puVar6;
}



/* Entry: 102973054; end: 102973097;  */

void FUN_102973054(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0x112d6cc18;
  func_0x0001000285a8(0x112d6cc18,&UNK_10d92f810);
  func_0x000107c5fc48(uVar2,uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 102973098; end: 1029730f7; -[_TtC39GroupProfileSectionPluginImplementation33GroupProfileSectionPluginProvider plugins] */

void FUN_102973098(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102972da0();
  func_0x000107c61170(param_1);
  uVar2 = 0x112d5b0a0;
  func_0x0001000285a8(0x112d5b0a0,&UNK_10d97aac0);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1029730f8; end: 10297312b;  */

void FUN_1029730f8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10297312c; end: 10297314b; -[_TtC39GroupProfileSectionPluginImplementation33GroupProfileSectionPluginProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10297312c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ed04b0));
  return;
}



/* Entry: 10297314c; end: 10297316b;  */

void FUN_10297314c(void)

{
  func_0x000107c61168(&PTR_PTR_1128743d8);
  return;
}



/* Entry: 10297316c; end: 102973293;  */

void FUN_10297316c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ed04e0,&UNK_10daf6e30);
  puVar1 = &UNK_110574550;
  func_0x000107c613fc(&UNK_110574550,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_102973294,puVar1);
  return;
}



/* Entry: 102973294; end: 10297329f;  */

void FUN_102973294(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar4 = lVar1;
  func_0x000100083b20(&uStack_48,lVar1,uVar2,*(undefined8 *)(unaff_x20 + 0x20));
  FUN_1029735e0();
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x10) = uStack_48;
  *(long *)(lVar4 + 0x18) = lVar1;
  *(undefined8 *)(lVar4 + 0x20) = uVar2;
  *(undefined8 *)(lVar4 + 0x28) = uVar3;
  *param_1 = lVar4;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar3);
  return;
}



/* Entry: 1029732a0; end: 1029732ef;  */

void FUN_1029732a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_3;
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  return;
}



/* Entry: 1029732f0; end: 102973593;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1029732f0(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined8 *unaff_x20;
  long lVar11;
  undefined8 uVar12;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar10 = &puStack_80;
  lVar11 = unaff_x20[2];
  if (*(long *)(lVar11 + _DAT_112ed0c78) == 0) {
    uVar12 = *unaff_x20;
    func_0x000100083b20(&puStack_80);
    puVar5 = puStack_80;
    puVar4 = puStack_80;
    func_0x000107c3fa04();
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102973594);
      (*pcVar3)();
    }
    uVar8 = 0xd000000000000028;
    func_0x000107c5fadc(0xd000000000000028,0x800000010f0d03f0);
    puVar5 = puVar4;
    func_0x000107c3ebd4();
    func_0x000107c615e8(puVar4);
    func_0x000107c61170(uVar8);
    if ((int)puVar5 != 0) {
      func_0x000100083b20(&puStack_80);
      puVar5 = puStack_80;
      lVar6 = *(long *)(puStack_80 + _DAT_113093a98);
      func_0x000107c61174();
      func_0x000107c61170(puVar5);
      lVar7 = lVar6;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar6);
      if (lVar7 != 0) {
        uVar8 = 0xd000000000000015;
        func_0x000107c5fadc(0xd000000000000015,0x800000010daf6e20);
        lVar6 = lVar7;
        func_0x000107c4e60c();
        func_0x000107c61180();
        func_0x000107c61170(uVar8);
        puVar1 = (undefined8 *)(lVar11 + _DAT_112ed0c70);
        uVar8 = *puVar1;
        uVar2 = puVar1[1];
        func_0x000107c61434(uVar2);
        func_0x000100083b20(&puStack_80);
        puVar4 = puStack_80;
        puVar9 = PTR_PTR_1126ae720;
        func_0x000107c61168(PTR_PTR_1126ae720);
        puVar5 = &UNK_110574598;
        func_0x000107c613fc(&UNK_110574598,0x38,7);
        *(undefined8 *)(puVar5 + 0x10) = uVar8;
        *(undefined8 *)(puVar5 + 0x18) = uVar2;
        *(long *)(puVar5 + 0x20) = lVar6;
        *(undefined **)(puVar5 + 0x28) = puStack_80;
        *(undefined8 *)(puVar5 + 0x30) = uVar12;
        pcStack_60 = FUN_102973600;
        puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_78 = 0x42000000;
        uStack_70 = 0x10296d158;
        puStack_68 = &UNK_1105745b0;
        puStack_58 = puVar5;
        func_0x000107c60bc4(&puStack_80);
        puVar5 = puStack_58;
        func_0x000107c615f0(lVar6);
        func_0x000107c61174(puVar4);
        func_0x000107c61574(puVar5);
        func_0x000107c3e4fc(puVar9);
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar10);
        puVar5 = PTR_PTR_1126afda8;
        func_0x000107c610f8(PTR_PTR_1126afda8);
        func_0x000107c47cac();
        func_0x000107c615e8(lVar7);
        func_0x000107c61170(puVar9);
        func_0x000107c61170(puVar4);
        func_0x000107c615e8(lVar6);
        return puVar5;
      }
    }
  }
  return (undefined *)0x0;
}



/* Entry: 102973594; end: 1029735cf;  */

void FUN_102973594(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1029735d0; end: 1029735df;  */

undefined1  [16] FUN_1029735d0(void)

{
  return ZEXT816(0x110574578);
}



/* Entry: 1029735e0; end: 1029735ff;  */

void FUN_1029735e0(void)

{
  func_0x000107c61168(&PTR_PTR_112ed0528);
  return;
}



/* Entry: 102973600; end: 102973627;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102973600(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar6 = &lStack_50;
  func_0x000107c5dbd4();
  func_0x000107c61180();
  lVar4 = 0;
  FUN_102973c9c();
  lVar5 = lVar4;
  func_0x000107c610f8();
  func_0x000107c61614(lVar5 + _DAT_112ed05b0,0);
  *(undefined8 *)(lVar5 + _DAT_112ed05b8) = 0;
  *(undefined8 *)(lVar5 + _DAT_112ed05c0) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_112ed05a0);
  *puVar1 = uVar7;
  puVar1[1] = uVar2;
  *(undefined8 *)(lVar5 + _DAT_112ed05a8) = uVar3;
  puVar8 = PTR_s_init_1125d9248;
  lStack_50 = lVar5;
  lStack_48 = lVar4;
  func_0x000107c61434(uVar2);
  func_0x000107c61154(&lStack_50,puVar8);
  lVar5 = -0x2fffffffffffffea;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f0d0420);
  uVar7 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010daf6e20);
  lVar4 = lVar5;
  func_0x0001000f6108(lVar5,uVar7,0);
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  func_0x000107c61170(uVar7);
  lVar5 = lVar4;
  func_0x000108f728c0();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  if (lVar5 != 0) {
    puVar8 = PTR_PTR_1126b1100;
    func_0x000107c610f8();
    func_0x000107c48538();
    if (puVar8 != (undefined *)0x0) {
      puVar9 = PTR_PTR_1126b2b48;
      func_0x000107c610f8(PTR_PTR_1126b2b48);
      func_0x000107c45f0c();
      func_0x000107c61170(puVar8);
      func_0x000107c61170(plVar6);
      func_0x000107c61170(lVar5);
      return puVar9;
    }
    func_0x000107c61170(lVar5);
  }
  func_0x000107c61170(plVar6);
  return (undefined *)0x0;
}



/* Entry: 102973628; end: 102973807;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_102973628(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lStack_50;
  long lStack_48;
  
  plVar4 = &lStack_50;
  func_0x000107c5dbd4();
  func_0x000107c61180();
  lVar2 = 0;
  FUN_102973c9c();
  lVar3 = lVar2;
  func_0x000107c610f8();
  func_0x000107c61614(lVar3 + _DAT_112ed05b0,0);
  *(undefined8 *)(lVar3 + _DAT_112ed05b8) = 0;
  *(undefined8 *)(lVar3 + _DAT_112ed05c0) = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_112ed05a0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(lVar3 + _DAT_112ed05a8) = param_4;
  puVar6 = PTR_s_init_1125d9248;
  lStack_50 = lVar3;
  lStack_48 = lVar2;
  func_0x000107c61434(param_2);
  func_0x000107c61154(&lStack_50,puVar6);
  lVar3 = -0x2fffffffffffffea;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f0d0420);
  uVar5 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010daf6e20);
  lVar2 = lVar3;
  func_0x0001000f6108(lVar3,uVar5,0);
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  func_0x000107c61170(uVar5);
  lVar3 = lVar2;
  func_0x000108f728c0();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 != 0) {
    puVar6 = PTR_PTR_1126b1100;
    func_0x000107c610f8();
    func_0x000107c48538();
    if (puVar6 != (undefined *)0x0) {
      puVar7 = PTR_PTR_1126b2b48;
      func_0x000107c610f8(PTR_PTR_1126b2b48);
      func_0x000107c45f0c();
      func_0x000107c61170(puVar6);
      func_0x000107c61170(plVar4);
      func_0x000107c61170(lVar3);
      return puVar7;
    }
    func_0x000107c61170(lVar3);
  }
  func_0x000107c61170(plVar4);
  return (undefined *)0x0;
}



/* Entry: 102973808; end: 102973827; -[_TtC21CallingProfileSection44CallingProfileSectionComposerContextProvider contextProviderDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102973808(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112ed05b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102973828; end: 10297383b; -[_TtC21CallingProfileSection44CallingProfileSectionComposerContextProvider setContextProviderDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102973828(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112ed05b0,param_3);
  return;
}



/* Entry: 10297383c; end: 10297385b; -[_TtC21CallingProfileSection44CallingProfileSectionComposerContextProvider updateQueuePerformer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10297383c(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112ed05b8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10297385c; end: 102973867; -[_TtC21CallingProfileSection44CallingProfileSectionComposerContextProvider setUpdateQueuePerformer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10297385c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ed05b8);
  *(undefined8 *)(param_1 + _DAT_112ed05b8) = param_3;
  func_0x000107c615f0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 102973868; end: 102973887; -[_TtC21CallingProfileSection44CallingProfileSectionComposerContextProvider actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102973868(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112ed05c0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102973888; end: 102973893; -[_TtC21CallingProfileSection44CallingProfileSectionComposerContextProvider setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102973888(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ed05c0);
  *(undefined8 *)(param_1 + _DAT_112ed05c0) = param_3;
  func_0x000107c615f0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 102973894; end: 1029738c3;  */

void FUN_102973894(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + *param_4);
  *(undefined8 *)(param_1 + *param_4) = param_3;
  func_0x000107c615f0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 1029738c4; end: 102973b43;  */

/* WARNING: Possible PIC construction at 0x000102973968: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029739a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102973a04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102973af0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102973a08) */
/* WARNING: Removing unreachable block (ram,0x000102973b20) */
/* WARNING: Removing unreachable block (ram,0x000102973a14) */
/* WARNING: Removing unreachable block (ram,0x0001029739a8) */
/* WARNING: Removing unreachable block (ram,0x00010297396c) */
/* WARNING: Removing unreachable block (ram,0x000102973b40) */
/* WARNING: Removing unreachable block (ram,0x000102973984) */
/* WARNING: Removing unreachable block (ram,0x000102973af4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029738c4(void)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000104522c9c(0);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112ed05a0);
  uVar4 = ((undefined8 *)(unaff_x20 + _DAT_112ed05a0))[1];
  func_0x00010452292c(uVar1,uVar4);
  ppuVar2 = &PTR____CFConstantStringClassReference_110eba038;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110eba038);
  puVar3 = PTR_PTR_1126b47b0;
  func_0x000107c610f8(PTR_PTR_1126b47b0);
  func_0x000107c5fadc(ppuVar2,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x000107c45d78(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102973b44; end: 102973bcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102973b44(long param_1)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + _DAT_112ed05c0);
    if (lVar1 != 0) {
      func_0x000107c615f0(lVar1);
      func_0x000107c445ac();
      func_0x000107c615e8(lVar1);
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102973bd0; end: 102973c2f; -[_TtC21CallingProfileSection44CallingProfileSectionComposerContextProvider init] */

void FUN_102973bd0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CallingProfileSection.CallingProfileSectionComposerContextProvider",0x42,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102973bfc);
  (*pcVar1)();
}



/* Entry: 102973c30; end: 102973c9b; -[_TtC21CallingProfileSection44CallingProfileSectionComposerContextProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102973c80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102973c84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102973c30(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ed05a0 + 8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed05a8));
  FUN_102969384(param_1 + _DAT_112ed05b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ed05b8));
  return;
}



/* Entry: 102973c9c; end: 102973cbb;  */

void FUN_102973c9c(void)

{
  func_0x000107c61168(&PTR_PTR_112874498);
  return;
}



/* Entry: 102973cbc; end: 102973e1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102973cbc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar4 = &puStack_60;
  puVar2 = &UNK_1105745e8;
  func_0x000107c613fc(&UNK_1105745e8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = PTR_PTR_1126abad8;
  func_0x000107c610f8(PTR_PTR_1126abad8);
  uStack_40 = 0x102973ef4;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_110574600;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c6157c(puVar2);
  func_0x000107c47c38(puVar3);
  func_0x000107c60bd0(ppuVar4);
  puVar1 = puStack_38;
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar1);
  lVar5 = *(long *)(unaff_x20 + _DAT_112ed05a8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar5 != 0) {
    lVar6 = lVar5;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar5);
    if (lVar6 != 0) {
      FUN_102973f18(0);
      func_0x000107c614e8();
      lVar5 = lVar6;
      func_0x000107c40994(lVar6);
      func_0x000107c61180();
      func_0x000107c615e8(lVar6);
      func_0x000107c61170(puVar3);
      return lVar5;
    }
  }
  func_0x000107c61170(puVar3);
  return 0;
}



/* Entry: 102973e1c; end: 102973e6f;  */

void FUN_102973e1c(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_1029738c4();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102973e70; end: 102973ea3; -[_TtC21CallingProfileSection44CallingProfileSectionComposerContextProvider valdiContext] */

void FUN_102973e70(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102973cbc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102973ea4; end: 102973eef; -[_TtC21CallingProfileSection44CallingProfileSectionComposerContextProvider setUp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102973ea4(long param_1)

{
  param_1 = param_1 + _DAT_112ed05b0;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c5dbc4();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 102973ef0; end: 102973f17; -[_TtC21CallingProfileSection44CallingProfileSectionComposerContextProvider tearDown] */

void FUN_102973ef0(void)

{
  return;
}



/* Entry: 102973f18; end: 102973f5b;  */

void FUN_102973f18(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ed05f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126abae0;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112ed05f0 = puVar1;
  return;
}



/* Entry: 102973f5c; end: 102973f6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102973f5c(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + _DAT_112ed05c0);
    if (lVar2 != 0) {
      func_0x000107c615f0(lVar2);
      func_0x000107c445ac();
      func_0x000107c615e8(lVar2);
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 102973f6c; end: 102973fb7;  */

void FUN_102973f6c(undefined8 param_1)

{
  func_0x0001000285a8(0x112ecfc30,&UNK_10daf6370);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102974078,param_1);
  return;
}



/* Entry: 102973fb8; end: 102974077;  */

void FUN_102973fb8(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  FUN_1029732f0();
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



/* Entry: 102974078; end: 10297408f;  */

void FUN_102974078(long *param_1)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  FUN_1029732f0();
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



/* Entry: 102974090; end: 102974857;  */

/* WARNING: Possible PIC construction at 0x000102974558: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102974568: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102974578: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102974588: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102974598: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029745a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029745b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029745c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029745d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029745e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029745f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102974608: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102974618: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102974628: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102974638: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102974648: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102974658: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102974668: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102974678: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102974688: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102974698: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029746a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029746b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029746c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029746d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029746e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029746f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102974708: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102974718: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102974728: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102974738: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102974748: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102974758: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102974768: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102974778: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102974788: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102974798: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029747a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029747b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029747c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029747d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029747e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029747f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102974808: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102974818: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102974828: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010297481c) */
/* WARNING: Removing unreachable block (ram,0x00010297480c) */
/* WARNING: Removing unreachable block (ram,0x0001029747fc) */
/* WARNING: Removing unreachable block (ram,0x0001029747ec) */
/* WARNING: Removing unreachable block (ram,0x0001029747dc) */
/* WARNING: Removing unreachable block (ram,0x0001029747cc) */
/* WARNING: Removing unreachable block (ram,0x0001029747bc) */
/* WARNING: Removing unreachable block (ram,0x0001029747ac) */
/* WARNING: Removing unreachable block (ram,0x00010297479c) */
/* WARNING: Removing unreachable block (ram,0x00010297478c) */
/* WARNING: Removing unreachable block (ram,0x00010297477c) */
/* WARNING: Removing unreachable block (ram,0x00010297476c) */
/* WARNING: Removing unreachable block (ram,0x00010297475c) */
/* WARNING: Removing unreachable block (ram,0x00010297474c) */
/* WARNING: Removing unreachable block (ram,0x00010297473c) */
/* WARNING: Removing unreachable block (ram,0x00010297472c) */
/* WARNING: Removing unreachable block (ram,0x00010297471c) */
/* WARNING: Removing unreachable block (ram,0x00010297470c) */
/* WARNING: Removing unreachable block (ram,0x0001029746fc) */
/* WARNING: Removing unreachable block (ram,0x0001029746ec) */
/* WARNING: Removing unreachable block (ram,0x0001029746dc) */
/* WARNING: Removing unreachable block (ram,0x0001029746cc) */
/* WARNING: Removing unreachable block (ram,0x0001029746bc) */
/* WARNING: Removing unreachable block (ram,0x0001029746ac) */
/* WARNING: Removing unreachable block (ram,0x00010297469c) */
/* WARNING: Removing unreachable block (ram,0x00010297468c) */
/* WARNING: Removing unreachable block (ram,0x00010297467c) */
/* WARNING: Removing unreachable block (ram,0x00010297466c) */
/* WARNING: Removing unreachable block (ram,0x00010297465c) */
/* WARNING: Removing unreachable block (ram,0x00010297464c) */
/* WARNING: Removing unreachable block (ram,0x00010297463c) */
/* WARNING: Removing unreachable block (ram,0x00010297462c) */
/* WARNING: Removing unreachable block (ram,0x00010297461c) */
/* WARNING: Removing unreachable block (ram,0x00010297460c) */
/* WARNING: Removing unreachable block (ram,0x0001029745fc) */
/* WARNING: Removing unreachable block (ram,0x0001029745ec) */
/* WARNING: Removing unreachable block (ram,0x0001029745dc) */
/* WARNING: Removing unreachable block (ram,0x0001029745cc) */
/* WARNING: Removing unreachable block (ram,0x0001029745bc) */
/* WARNING: Removing unreachable block (ram,0x0001029745ac) */
/* WARNING: Removing unreachable block (ram,0x00010297459c) */
/* WARNING: Removing unreachable block (ram,0x00010297458c) */
/* WARNING: Removing unreachable block (ram,0x00010297457c) */
/* WARNING: Removing unreachable block (ram,0x00010297456c) */
/* WARNING: Removing unreachable block (ram,0x00010297455c) */
/* WARNING: Removing unreachable block (ram,0x00010297482c) */

void FUN_102974090(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  
  puVar1 = &UNK_110574798;
  func_0x000107c613fc(&UNK_110574798,0x2f8,7);
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
  uVar2 = 0x112ed0600;
  func_0x0001000285a8(0x112ed0600,&UNK_10daf6f78);
  func_0x000107c613fc();
  pcVar3 = FUN_102975580;
  func_0x0001000841fc(FUN_102975580,puVar1,uVar2);
  func_0x000100084214(&UNK_10daf6f40,0x30,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 102974858; end: 1029749ab;  */

void FUN_102974858(void)

{
  long unaff_x20;
  
  FUN_102974090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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



/* Entry: 1029749ac; end: 1029749bb;  */

undefined1  [16] FUN_1029749ac(void)

{
  return ZEXT816(0x110574778);
}



/* Entry: 1029749bc; end: 10297527b;  */

void FUN_1029749bc(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
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
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  code *pcVar8;
  code *pcVar9;
  undefined8 uVar10;
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
  undefined8 auStack_70 [2];
  
  uVar10 = *param_2;
  func_0x0001000285a8(0x112ed0608,&UNK_10daf6f80);
  puVar1 = auStack_70;
  auStack_70[0] = uVar10;
  func_0x0001000838ec();
  uVar10 = param_3;
  FUN_102988c20(param_3,param_4,param_5,param_6,param_7);
  func_0x000100082720("FamilyCenterMyProfileSectionBuilderServiceProvider",0x32,2);
  uVar2 = param_3;
  FUN_10297daa4(param_3,param_8,param_9,param_10,puVar1,param_6);
  func_0x000100082720("MyProfileCreatorFanPassSectionBuilderServiceProvider",0x34,2);
  uVar3 = param_3;
  FUN_102980014(param_3,param_9,param_11,param_12,param_10,param_6);
  func_0x000100082720("MyProfileSubscriberFanPassSectionBuilderServiceProvider",0x37,2);
  uVar4 = param_13;
  FUN_10297994c(param_13,param_14,param_15,param_16,param_17,param_18,param_19,param_20,param_21,
                param_22,param_23,param_24,param_5,puVar1,param_25,param_26,param_27);
  func_0x000100082720("SCMyProfileMapSectionBuilderServiceProvider",0x2b,2);
  uVar5 = param_28;
  FUN_1029840f8(param_28,param_29,param_30,param_31,param_3,param_32,param_33,param_34,param_35,
                param_36,param_10,param_37,param_38,param_39,puVar1,param_40,param_6,param_41);
  func_0x000100082720("SCPlusMyProfileSectionBuilderServiceProvider",0x2c,2);
  uVar6 = param_28;
  FUN_10298a4a8(param_28,param_26,param_42,param_43);
  func_0x000100082720("SpotlightPayoutsProfileSectionBuilderServiceProvider",0x34,2);
  func_0x0001000285a8(0x112ed0610,&UNK_10daf6f88);
  puVar7 = &UNK_1105747c0;
  func_0x000107c613fc(&UNK_1105747c0,0x220,7);
  *(undefined8 *)(puVar7 + 0x10) = in_stack_00000260;
  *(undefined8 *)(puVar7 + 0x18) = in_stack_00000240;
  *(undefined8 *)(puVar7 + 0x20) = param_71;
  *(undefined8 *)(puVar7 + 0x28) = param_68;
  *(undefined8 *)(puVar7 + 0x30) = in_stack_00000238;
  *(undefined8 *)(puVar7 + 0x38) = in_stack_00000298;
  *(undefined8 *)(puVar7 + 0x40) = param_13;
  *(undefined8 *)(puVar7 + 0x48) = in_stack_00000250;
  *(undefined8 *)(puVar7 + 0x50) = in_stack_00000248;
  *(undefined8 *)(puVar7 + 0x58) = param_55;
  *(undefined8 *)(puVar7 + 0x60) = param_54;
  *(undefined8 *)(puVar7 + 0x68) = param_56;
  *(undefined8 *)(puVar7 + 0x70) = in_stack_000001f0;
  *(undefined8 *)(puVar7 + 0x78) = param_58;
  *(undefined8 *)(puVar7 + 0x80) = param_34;
  *(undefined8 *)(puVar7 + 0x88) = param_46;
  *(undefined8 *)(puVar7 + 0x90) = in_stack_00000230;
  *(undefined8 *)(puVar7 + 0x98) = param_57;
  *(undefined8 *)(puVar7 + 0xa0) = in_stack_000002a8;
  *(undefined8 *)(puVar7 + 0xa8) = param_48;
  *(undefined8 *)(puVar7 + 0xb0) = param_49;
  *(undefined8 *)(puVar7 + 0xb8) = param_28;
  *(undefined8 *)(puVar7 + 0xc0) = param_59;
  *(undefined8 *)(puVar7 + 200) = param_53;
  *(undefined8 *)(puVar7 + 0xd0) = param_44;
  *(undefined8 *)(puVar7 + 0xd8) = param_7;
  *(undefined8 *)(puVar7 + 0xe0) = param_27;
  *(undefined8 *)(puVar7 + 0xe8) = param_67;
  *(undefined8 *)(puVar7 + 0xf0) = param_64;
  *(undefined8 *)(puVar7 + 0xf8) = in_stack_00000258;
  *(undefined8 *)(puVar7 + 0x100) = param_61;
  *(undefined8 *)(puVar7 + 0x108) = param_51;
  *(undefined8 *)(puVar7 + 0x110) = in_stack_00000220;
  *(undefined8 *)(puVar7 + 0x118) = param_66;
  *(undefined8 *)(puVar7 + 0x120) = param_70;
  *(undefined8 *)(puVar7 + 0x128) = in_stack_00000268;
  *(undefined8 *)(puVar7 + 0x130) = param_52;
  *(undefined8 *)(puVar7 + 0x138) = param_60;
  *(undefined8 *)(puVar7 + 0x140) = param_45;
  *(undefined8 *)(puVar7 + 0x148) = in_stack_00000270;
  *(undefined8 *)(puVar7 + 0x150) = param_69;
  *(undefined8 *)(puVar7 + 0x158) = in_stack_00000228;
  *(undefined8 *)(puVar7 + 0x160) = in_stack_00000218;
  *(undefined8 *)(puVar7 + 0x168) = in_stack_00000290;
  *(undefined8 *)(puVar7 + 0x170) = in_stack_00000280;
  *(undefined8 *)(puVar7 + 0x178) = uVar10;
  *(undefined8 *)(puVar7 + 0x180) = uVar4;
  *(undefined8 **)(puVar7 + 0x188) = puVar1;
  *(undefined8 *)(puVar7 + 400) = param_26;
  *(undefined8 *)(puVar7 + 0x198) = param_65;
  *(undefined8 *)(puVar7 + 0x1a0) = param_50;
  *(undefined8 *)(puVar7 + 0x1a8) = in_stack_00000288;
  *(undefined8 *)(puVar7 + 0x1b0) = in_stack_00000278;
  *(undefined8 *)(puVar7 + 0x1b8) = param_47;
  *(undefined8 *)(puVar7 + 0x1c0) = param_33;
  *(undefined8 *)(puVar7 + 0x1c8) = param_63;
  *(undefined8 *)(puVar7 + 0x1d0) = param_62;
  *(undefined8 *)(puVar7 + 0x1d8) = uVar2;
  *(undefined8 *)(puVar7 + 0x1e0) = uVar3;
  *(undefined8 *)(puVar7 + 0x1e8) = uVar5;
  *(undefined8 *)(puVar7 + 0x1f0) = uVar6;
  *(undefined8 *)(puVar7 + 0x1f8) = in_stack_000001f8;
  *(undefined8 *)(puVar7 + 0x200) = in_stack_00000210;
  *(undefined8 *)(puVar7 + 0x208) = in_stack_00000208;
  *(undefined8 *)(puVar7 + 0x210) = in_stack_00000200;
  *(undefined8 *)(puVar7 + 0x218) = in_stack_000002a0;
  func_0x000107c6157c();
  func_0x000107c6157c(in_stack_00000240);
  func_0x000107c6157c(param_71);
  func_0x000107c6157c(param_68);
  func_0x000107c6157c(in_stack_00000238);
  func_0x000107c6157c(in_stack_00000298);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(in_stack_00000250);
  func_0x000107c6157c(in_stack_00000248);
  func_0x000107c6157c(param_55);
  func_0x000107c6157c(param_54);
  func_0x000107c6157c(param_56);
  func_0x000107c6157c(in_stack_000001f0);
  func_0x000107c6157c(param_58);
  func_0x000107c6157c(param_34);
  func_0x000107c6157c(param_46);
  func_0x000107c6157c(in_stack_00000230);
  func_0x000107c6157c(param_57);
  func_0x000107c6157c(in_stack_000002a8);
  func_0x000107c6157c(param_48);
  func_0x000107c6157c(param_49);
  func_0x000107c6157c(param_28);
  func_0x000107c6157c(param_59);
  func_0x000107c6157c(param_53);
  func_0x000107c6157c(param_44);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_27);
  func_0x000107c6157c(param_67);
  func_0x000107c6157c(param_64);
  func_0x000107c6157c(in_stack_00000258);
  func_0x000107c6157c(param_61);
  func_0x000107c6157c(param_51);
  func_0x000107c6157c(in_stack_00000220);
  func_0x000107c6157c(param_66);
  func_0x000107c6157c(param_70);
  func_0x000107c6157c(in_stack_00000268);
  func_0x000107c6157c(param_52);
  func_0x000107c6157c(param_60);
  func_0x000107c6157c(param_45);
  func_0x000107c6157c(in_stack_00000270);
  func_0x000107c6157c(param_69);
  func_0x000107c6157c(in_stack_00000228);
  func_0x000107c6157c(in_stack_00000218);
  func_0x000107c6157c(in_stack_00000290);
  func_0x000107c6157c(in_stack_00000280);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_65);
  func_0x000107c6157c(param_50);
  func_0x000107c6157c(in_stack_00000288);
  func_0x000107c6157c(in_stack_00000278);
  func_0x000107c6157c(param_47);
  func_0x000107c6157c(param_33);
  func_0x000107c6157c(param_63);
  func_0x000107c6157c(param_62);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(in_stack_000001f8);
  func_0x000107c6157c(in_stack_00000210);
  func_0x000107c6157c(in_stack_00000208);
  func_0x000107c6157c(in_stack_00000200);
  func_0x000107c6157c(in_stack_000002a0);
  pcVar8 = FUN_1029757b0;
  func_0x0001000823a8(FUN_1029757b0,puVar7);
  func_0x000100082720("ProfileSectionPluginRegistryServiceProvider",0x2b,2);
  pcVar9 = pcVar8;
  FUN_102988754();
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(pcVar8);
  func_0x000100082720("ProfileSectionPluginProviderEntryPointProvider",0x2e,2);
  *param_1 = pcVar9;
  return;
}



/* Entry: 10297527c; end: 10297557f;  */

void FUN_10297527c(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102975580; end: 1029757af;  */

void FUN_102975580(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1029749bc(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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



/* Entry: 1029757b0; end: 10297586f;  */

void FUN_1029757b0(void)

{
  long unaff_x20;
  
  FUN_102975870(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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
                *(undefined8 *)(unaff_x20 + 0x210),*(undefined8 *)(unaff_x20 + 0x218));
  return;
}



/* Entry: 102975870; end: 10297611f;  */

/* WARNING: Possible PIC construction at 0x000102975b90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102975ba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102975bb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102975bc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102975bd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102975be0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102975bf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102975c00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102975c10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102975c20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102975c30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102975c40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102975c50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102975c60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102975c70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102975c80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102975c90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102975ca0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102975cb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102975cc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102975cd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102975ce0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102975cf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102975d00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102975d10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102975d20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102975d30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102975d40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102975d50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102975d60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102975d70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102975d80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102975d90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102975d84) */
/* WARNING: Removing unreachable block (ram,0x000102975d74) */
/* WARNING: Removing unreachable block (ram,0x000102975d64) */
/* WARNING: Removing unreachable block (ram,0x000102975d54) */
/* WARNING: Removing unreachable block (ram,0x000102975d44) */
/* WARNING: Removing unreachable block (ram,0x000102975d34) */
/* WARNING: Removing unreachable block (ram,0x000102975d24) */
/* WARNING: Removing unreachable block (ram,0x000102975d14) */
/* WARNING: Removing unreachable block (ram,0x000102975d04) */
/* WARNING: Removing unreachable block (ram,0x000102975cf4) */
/* WARNING: Removing unreachable block (ram,0x000102975ce4) */
/* WARNING: Removing unreachable block (ram,0x000102975cd4) */
/* WARNING: Removing unreachable block (ram,0x000102975cc4) */
/* WARNING: Removing unreachable block (ram,0x000102975cb4) */
/* WARNING: Removing unreachable block (ram,0x000102975ca4) */
/* WARNING: Removing unreachable block (ram,0x000102975c94) */
/* WARNING: Removing unreachable block (ram,0x000102975c84) */
/* WARNING: Removing unreachable block (ram,0x000102975c74) */
/* WARNING: Removing unreachable block (ram,0x000102975c64) */
/* WARNING: Removing unreachable block (ram,0x000102975c54) */
/* WARNING: Removing unreachable block (ram,0x000102975c44) */
/* WARNING: Removing unreachable block (ram,0x000102975c34) */
/* WARNING: Removing unreachable block (ram,0x000102975c24) */
/* WARNING: Removing unreachable block (ram,0x000102975c14) */
/* WARNING: Removing unreachable block (ram,0x000102975c04) */
/* WARNING: Removing unreachable block (ram,0x000102975bf4) */
/* WARNING: Removing unreachable block (ram,0x000102975be4) */
/* WARNING: Removing unreachable block (ram,0x000102975bd4) */
/* WARNING: Removing unreachable block (ram,0x000102975bc4) */
/* WARNING: Removing unreachable block (ram,0x000102975bb4) */
/* WARNING: Removing unreachable block (ram,0x000102975ba4) */
/* WARNING: Removing unreachable block (ram,0x000102975b94) */
/* WARNING: Removing unreachable block (ram,0x000102975d94) */

void FUN_102975870(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
                  undefined8 param_65,undefined8 param_66,undefined8 param_67)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_1105747e8;
  func_0x000107c613fc(&UNK_1105747e8,0x220,7);
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
  uVar2 = 0x112ed0618;
  func_0x0001000285a8(0x112ed0618,&UNK_10daf6fa0);
  func_0x000107c613fc();
  pcVar3 = FUN_102976120;
  func_0x0001000841fc(FUN_102976120,puVar1,uVar2);
  func_0x000100084214("ProfileSectionPluginRegistryServiceProvider",0x2b,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 102976120; end: 102976267;  */

void FUN_102976120(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000102975db8(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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
                      *(undefined8 *)(unaff_x20 + 0x210),*(undefined8 *)(unaff_x20 + 0x218));
  return;
}



/* Entry: 102976268; end: 10297651f;  */

void FUN_102976268(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ecfc30,&UNK_10daf6370);
  puVar1 = &UNK_1105748b8;
  func_0x000107c613fc(&UNK_1105748b8,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_6;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  *(undefined8 *)(puVar1 + 0x30) = param_4;
  *(undefined8 *)(puVar1 + 0x38) = param_5;
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x0001000823a8(0x102976330,puVar1);
  return;
}



/* Entry: 102976520; end: 10297652f;  */

undefined1  [16] FUN_102976520(void)

{
  return ZEXT816(0x1105748e0);
}



/* Entry: 102976530; end: 102976f97;  */

void FUN_102976530(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ecfc30,&UNK_10daf6370);
  puVar1 = &UNK_1105749a8;
  func_0x000107c613fc(&UNK_1105749a8,0x150,7);
  *(undefined8 *)(puVar1 + 0x10) = param_39;
  *(undefined8 *)(puVar1 + 0x18) = param_40;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  *(undefined8 *)(puVar1 + 0x28) = param_2;
  *(undefined8 *)(puVar1 + 0x30) = param_3;
  *(undefined8 *)(puVar1 + 0x38) = param_4;
  *(undefined8 *)(puVar1 + 0x40) = param_5;
  *(undefined8 *)(puVar1 + 0x48) = param_6;
  *(undefined8 *)(puVar1 + 0x50) = param_7;
  *(undefined8 *)(puVar1 + 0x58) = param_8;
  *(undefined8 *)(puVar1 + 0x60) = param_9;
  *(undefined8 *)(puVar1 + 0x68) = param_10;
  *(undefined8 *)(puVar1 + 0x70) = param_11;
  *(undefined8 *)(puVar1 + 0x78) = param_12;
  *(undefined8 *)(puVar1 + 0x80) = param_13;
  *(undefined8 *)(puVar1 + 0x88) = param_14;
  *(undefined8 *)(puVar1 + 0x90) = param_15;
  *(undefined8 *)(puVar1 + 0x98) = param_16;
  *(undefined8 *)(puVar1 + 0xa0) = param_17;
  *(undefined8 *)(puVar1 + 0xa8) = param_18;
  *(undefined8 *)(puVar1 + 0xb0) = param_19;
  *(undefined8 *)(puVar1 + 0xb8) = param_20;
  *(undefined8 *)(puVar1 + 0xc0) = param_21;
  *(undefined8 *)(puVar1 + 200) = param_22;
  *(undefined8 *)(puVar1 + 0xd0) = param_23;
  *(undefined8 *)(puVar1 + 0xd8) = param_24;
  *(undefined8 *)(puVar1 + 0xe0) = param_25;
  *(undefined8 *)(puVar1 + 0xe8) = param_26;
  *(undefined8 *)(puVar1 + 0xf0) = param_27;
  *(undefined8 *)(puVar1 + 0xf8) = param_28;
  *(undefined8 *)(puVar1 + 0x100) = param_29;
  *(undefined8 *)(puVar1 + 0x108) = param_30;
  *(undefined8 *)(puVar1 + 0x110) = param_31;
  *(undefined8 *)(puVar1 + 0x118) = param_32;
  *(undefined8 *)(puVar1 + 0x120) = param_33;
  *(undefined8 *)(puVar1 + 0x128) = param_34;
  *(undefined8 *)(puVar1 + 0x130) = param_35;
  *(undefined8 *)(puVar1 + 0x138) = param_36;
  *(undefined8 *)(puVar1 + 0x140) = param_37;
  *(undefined8 *)(puVar1 + 0x148) = param_38;
  func_0x000107c6157c(param_39);
  func_0x000107c6157c(param_40);
  func_0x000107c6157c(param_1);
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
  func_0x0001000823a8(0x10297685c,puVar1);
  return;
}



/* Entry: 102976f98; end: 102976fa7;  */

undefined1  [16] FUN_102976f98(void)

{
  return ZEXT816(0x1105749d0);
}



/* Entry: 102976fa8; end: 102976fcb;  */

void FUN_102976fa8(void)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  func_0x000107c6158c(1,0xffffffffffffffff);
  uRam00000001134d2e30 = uVar1;
  return;
}



/* Entry: 102976fcc; end: 10297756f;  */

void FUN_102976fcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ecfc30,&UNK_10daf6370);
  puVar1 = &UNK_110574a98;
  func_0x000107c613fc(&UNK_110574a98,0x80,7);
  *(undefined8 *)(puVar1 + 0x10) = param_12;
  *(undefined8 *)(puVar1 + 0x18) = param_13;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_1;
  *(undefined8 *)(puVar1 + 0x30) = param_3;
  *(undefined8 *)(puVar1 + 0x38) = param_4;
  *(undefined8 *)(puVar1 + 0x40) = param_5;
  *(undefined8 *)(puVar1 + 0x48) = param_6;
  *(undefined8 *)(puVar1 + 0x50) = param_7;
  *(undefined8 *)(puVar1 + 0x58) = param_8;
  *(undefined8 *)(puVar1 + 0x60) = param_9;
  *(undefined8 *)(puVar1 + 0x68) = param_10;
  *(undefined8 *)(puVar1 + 0x70) = param_11;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_14);
  func_0x0001000823a8(0x102977114,puVar1);
  return;
}



/* Entry: 102977570; end: 10297757f;  */

undefined1  [16] FUN_102977570(void)

{
  return ZEXT816(0x110574ac0);
}



/* Entry: 102977580; end: 1029777bf;  */

void FUN_102977580(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ed0628,&UNK_10daf7060);
  puVar1 = &UNK_110574b68;
  func_0x000107c613fc(&UNK_110574b68,0x70,7);
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
  func_0x000107c6157c(param_1);
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
  func_0x0001000823a8(FUN_1029777c0,puVar1);
  return;
}



/* Entry: 1029777c0; end: 1029777fb;  */

void FUN_1029777c0(void)

{
  long unaff_x20;
  
  func_0x0001029776b4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 1029777fc; end: 102977dbf;  */

void FUN_1029777fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x40) = param_2;
  *(undefined8 *)(unaff_x20 + 0x48) = param_5;
  *(undefined8 *)(unaff_x20 + 0x50) = param_6;
  *(undefined8 *)(unaff_x20 + 0x58) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_7;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x60) = param_9;
  *(undefined8 *)(unaff_x20 + 0x68) = param_8;
  *(undefined8 *)(unaff_x20 + 0x10) = param_11;
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x30) = param_10;
  *(undefined8 *)(unaff_x20 + 0x38) = param_12;
  return;
}



/* Entry: 102977dc0; end: 102977e77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102977dc0(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lStack_48;
  
  func_0x000100083b20(&lStack_48);
  lVar1 = lStack_48;
  uVar2 = *(undefined8 *)(lStack_48 + _DAT_113072c10);
  func_0x000107c61174(uVar2);
  func_0x000107c61170(lVar1);
  func_0x000100083b20(&lStack_48);
  puVar3 = PTR_PTR_1126abb18;
  func_0x000107c610f8();
  func_0x000107c48818();
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(lStack_48);
  *param_1 = puVar3;
  return;
}



/* Entry: 102977e78; end: 10297822b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102977e78(undefined8 *param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar11 = param_3;
  func_0x0001000d224c(&uStack_68);
  func_0x000107c5d984();
  func_0x000107c61180();
  if (param_3 == 0) {
    lVar10 = 0;
    lVar11 = 0;
  }
  else {
    lVar10 = param_3;
    func_0x000107c5faec();
    func_0x000107c61170(param_3);
  }
  puVar1 = (undefined8 *)(*(long *)(param_4 + 0x10) + _DAT_112ed0ac0);
  uVar9 = *puVar1;
  uVar2 = puVar1[1];
  func_0x000107c61434(uVar2);
  func_0x000100083b20(&uStack_70);
  uVar3 = uStack_70;
  func_0x000100083b20(&uStack_70);
  uVar4 = uStack_70;
  func_0x000100083b20(&uStack_70);
  uVar5 = uStack_70;
  func_0x000100083b20(&uStack_70);
  uVar6 = uStack_70;
  func_0x000100083b20(&uStack_70);
  if (lVar11 == 0) {
    lVar10 = 0;
  }
  else {
    func_0x000107c5fadc(lVar10,lVar11);
    func_0x000107c6142c(lVar11);
  }
  puVar8 = PTR_PTR_1126abb10;
  func_0x000107c610f8();
  func_0x000107c5fadc(uVar9,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c463b4();
  func_0x000107c61170(uStack_68);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c615e8(uStack_70);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(uVar9);
  if (puVar8 != (undefined *)0x0) {
    *param_1 = puVar8;
    return;
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10297804c);
  (*pcVar7)();
}



/* Entry: 10297822c; end: 102978387;  */

void FUN_10297822c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_48;
  
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
  func_0x000107c61174(puVar3);
  func_0x0001000d224c(&uStack_48);
  uVar2 = uStack_48;
  puVar4 = PTR_PTR_1126abb00;
  func_0x000107c610f8();
  func_0x000107c48b7c();
  func_0x000107c61170(puVar3);
  func_0x000107c615e8(uVar2);
  func_0x000107c5f9dc(param_3,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c58d80(puVar4);
  func_0x000107c61170(param_3);
  func_0x0001000d224c(&uStack_48);
  func_0x000107c58d74(puVar4);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(puVar3);
  *param_1 = puVar4;
  return;
}



/* Entry: 102978388; end: 10297841b;  */

void FUN_102978388(void)

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
  return;
}



/* Entry: 10297841c; end: 10297842b;  */

undefined1  [16] FUN_10297841c(void)

{
  return ZEXT816(0x110574b90);
}



/* Entry: 10297842c; end: 10297844b;  */

void FUN_10297842c(void)

{
  func_0x000107c61168(&PTR_PTR_112ed0670);
  return;
}



/* Entry: 10297844c; end: 10297847f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10297844c(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lStack_48;
  
  func_0x000100083b20(&lStack_48);
  lVar1 = lStack_48;
  uVar2 = *(undefined8 *)(lStack_48 + _DAT_113072c10);
  func_0x000107c61174(uVar2);
  func_0x000107c61170(lVar1);
  func_0x000100083b20(&lStack_48);
  puVar3 = PTR_PTR_1126abb18;
  func_0x000107c610f8();
  func_0x000107c48818();
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(lStack_48);
  *param_1 = puVar3;
  return;
}



/* Entry: 102978480; end: 1029784cb;  */

void FUN_102978480(undefined8 param_1)

{
  func_0x0001000285a8(0x112ecfc30,&UNK_10daf6370);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10297858c,param_1);
  return;
}



/* Entry: 1029784cc; end: 10297858b;  */

void FUN_1029784cc(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  func_0x000102977898();
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



/* Entry: 10297858c; end: 1029785a3;  */

void FUN_10297858c(long *param_1)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  func_0x000102977898();
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



/* Entry: 1029785a4; end: 10297886f;  */

void FUN_1029785a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ed0748,&UNK_10daf71b0);
  puVar1 = &UNK_110574c70;
  func_0x000107c613fc(&UNK_110574c70,0x90,7);
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
  func_0x0001000823a8(FUN_102978870,puVar1);
  return;
}



/* Entry: 102978870; end: 1029788b3;  */

void FUN_102978870(void)

{
  long unaff_x20;
  
  func_0x000102978718(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                      *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88));
  return;
}



/* Entry: 1029788b4; end: 10297926f;  */

void FUN_1029788b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x78) = param_3;
  *(undefined8 *)(unaff_x20 + 0x80) = param_4;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x50) = param_7;
  *(undefined8 *)(unaff_x20 + 0x60) = param_11;
  *(undefined8 *)(unaff_x20 + 0x58) = param_10;
  *(undefined8 *)(unaff_x20 + 0x10) = param_12;
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x68) = param_13;
  *(undefined8 *)(unaff_x20 + 0x70) = param_14;
  *(undefined8 *)(unaff_x20 + 0x88) = param_15;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_9;
  *(undefined8 *)(unaff_x20 + 0x30) = param_16;
  return;
}



/* Entry: 102979270; end: 102979397;  */

void FUN_102979270(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_48;
  
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
  func_0x0001000d224c(&uStack_48);
  func_0x000107c58d74(puVar4);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(puVar3);
  *param_1 = puVar4;
  return;
}



/* Entry: 102979398; end: 10297944b;  */

void FUN_102979398(void)

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
  return;
}



/* Entry: 10297944c; end: 10297945b;  */

undefined1  [16] FUN_10297944c(void)

{
  return ZEXT816(0x110574c98);
}



/* Entry: 10297945c; end: 10297947b;  */

void FUN_10297945c(void)

{
  func_0x000107c61168(&PTR_PTR_112ed0790);
  return;
}



/* Entry: 10297947c; end: 1029794e3;  */

void FUN_10297947c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_5 + 0x20);
  uVar2 = *(undefined8 *)(param_5 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_1,param_2,param_3,param_4);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1029794e4; end: 102979527;  */

void FUN_1029794e4(char *param_1)

{
  char cVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  cVar1 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,1,0);
  *(bool *)(unaff_x20 + 0x10) = cVar1 == '\x01';
  return;
}



/* Entry: 102979528; end: 102979547;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102979528(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  long unaff_x20;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar1 = (undefined8 *)(*(long *)(lVar2 + 0x10) + _DAT_112ed0c70);
  uVar10 = *puVar1;
  uVar4 = puVar1[1];
  func_0x000107c61434(uVar4);
  func_0x000100083b20(&puStack_a8);
  puVar6 = puStack_a8;
  func_0x000100083b20(&puStack_a8);
  puVar7 = puStack_a8;
  func_0x000107c42294(puStack_a8);
  func_0x000107c61180();
  func_0x000107c61170(puStack_a8);
  puVar8 = &UNK_110574d58;
  func_0x000107c613fc(&UNK_110574d58,0x28,7);
  *(long *)(puVar8 + 0x10) = lVar2;
  *(long *)(puVar8 + 0x18) = lVar3;
  *(undefined8 *)(puVar8 + 0x20) = uVar5;
  func_0x000107c61428(lVar3 + 0x10,auStack_78,0,0);
  puVar9 = PTR_PTR_1126abb30;
  func_0x000107c610f8();
  func_0x000107c6157c(lVar2);
  func_0x000107c6157c(lVar3);
  func_0x000107c61174(uVar5);
  func_0x000107c5fadc(uVar10,uVar4);
  func_0x000107c6142c(uVar4);
  pcStack_88 = FUN_102979548;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  pcStack_98 = FUN_10297947c;
  puStack_90 = &UNK_110574d70;
  ppuVar11 = &puStack_a8;
  puStack_80 = puVar8;
  func_0x000107c60bc4(ppuVar11);
  func_0x000107c46bf4();
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar7);
  func_0x000107c60bd0(ppuVar11);
  func_0x000107c61170(uVar10);
  func_0x000107c61574(puStack_80);
  *param_1 = puVar9;
  return;
}


