/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101cbb520; end: 101cbb56f;  */

undefined8 FUN_101cbb520(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101cbb570; end: 101cbb5b3;  */

undefined1  [16] FUN_101cbb570(void)

{
  return ZEXT816(0x1104682b0);
}



/* Entry: 101cbb5b4; end: 101cbb5db;  */

void FUN_101cbb5b4(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101cbb5dc; end: 101cbb5e3;  */

undefined8 FUN_101cbb5dc(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101cbb5e4; end: 101cbbac3;  */

long FUN_101cbb5e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  puVar1 = PTR_PTR_1126a8ef0;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar2 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef1c280);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  uVar2 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12d50);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef1bda0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_7);
  func_0x000107c61174();
  uVar2 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f009eb0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_8);
  func_0x000107c61174();
  uVar2 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_9);
  func_0x000107c61174();
  uVar2 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef1bf20);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_9);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  puVar3 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  *(undefined **)(unaff_x20 + 0x58) = puVar3;
  return unaff_x20;
}



/* Entry: 101cbbac4; end: 101cbbb47;  */

void FUN_101cbbac4(void)

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
  return;
}



/* Entry: 101cbbb48; end: 101cbbb97;  */

undefined8 FUN_101cbbb48(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101cbbb98; end: 101cbbbdb;  */

undefined1  [16] FUN_101cbbb98(void)

{
  return ZEXT816(0x110468378);
}



/* Entry: 101cbbbdc; end: 101cbbc03;  */

void FUN_101cbbbdc(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101cbbc04; end: 101cbbc0b;  */

undefined8 FUN_101cbbc04(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101cbbc0c; end: 101cbbc93;  */

undefined8
FUN_101cbbc0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  func_0x000100972180(param_1,param_2,param_3,param_4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_4);
  return uVar1;
}



/* Entry: 101cbbc94; end: 101cbbccf;  */

void FUN_101cbbc94(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101cbbcd0; end: 101cbbd03;  */

undefined1  [16] FUN_101cbbcd0(void)

{
  return ZEXT816(0x1104684c0);
}



/* Entry: 101cbbd04; end: 101cbbd4f;  */

undefined8 FUN_101cbbd04(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101cbbd50; end: 101cbbd57;  */

undefined8 FUN_101cbbd50(void)

{
  return 1;
}



/* Entry: 101cbbd58; end: 101cbbd97;  */

void FUN_101cbbd58(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112e148c0;
  func_0x0001000285a8(0x112e148c0,&UNK_10d9f1390);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 101cbbd98; end: 101cbbd9f;  */

undefined8 FUN_101cbbd98(void)

{
  return 1;
}



/* Entry: 101cbbda0; end: 101cbbe1b;  */

void FUN_101cbbda0(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 101cbbe1c; end: 101cbbe1f;  */

void FUN_101cbbe1c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e148d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9f13a0;
  func_0x000107c61520(&UNK_10d9f13a0,&UNK_110468620);
  puRam0000000112e148d0 = puVar1;
  return;
}



/* Entry: 101cbbe20; end: 101cbbe8b;  */

void FUN_101cbbe20(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e148d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9f13a0;
  func_0x000107c61520(&UNK_10d9f13a0,&UNK_110468620);
  puRam0000000112e148d0 = puVar1;
  return;
}



/* Entry: 101cbbe8c; end: 101cbbe8f;  */

void FUN_101cbbe8c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e148e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9f1448;
  func_0x000107c61520(&UNK_10d9f1448,&UNK_1104686b0);
  puRam0000000112e148e8 = puVar1;
  return;
}



/* Entry: 101cbbe90; end: 101cbbefb;  */

void FUN_101cbbe90(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e148e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9f1448;
  func_0x000107c61520(&UNK_10d9f1448,&UNK_1104686b0);
  puRam0000000112e148e8 = puVar1;
  return;
}



/* Entry: 101cbbefc; end: 101cbbf7f;  */

void FUN_101cbbefc(long *param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 101cbbf80; end: 101cbbf83;  */

void FUN_101cbbf80(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e14900 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9f14b8;
  func_0x000107c61520(&UNK_10d9f14b8,&UNK_1104686b0);
  puRam0000000112e14900 = puVar1;
  return;
}



/* Entry: 101cbbf84; end: 101cbbfc3;  */

void FUN_101cbbf84(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e14900 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9f14b8;
  func_0x000107c61520(&UNK_10d9f14b8,&UNK_1104686b0);
  puRam0000000112e14900 = puVar1;
  return;
}



/* Entry: 101cbbfc4; end: 101cbbfc7;  */

void FUN_101cbbfc4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e14908 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9f1470;
  func_0x000107c61520(&UNK_10d9f1470,&UNK_1104686b0);
  puRam0000000112e14908 = puVar1;
  return;
}



/* Entry: 101cbbfc8; end: 101cbc007;  */

void FUN_101cbbfc8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e14908 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9f1470;
  func_0x000107c61520(&UNK_10d9f1470,&UNK_1104686b0);
  puRam0000000112e14908 = puVar1;
  return;
}



/* Entry: 101cbc008; end: 101cbc12b;  */

undefined8 FUN_101cbc008(void)

{
  return 0;
}



/* Entry: 101cbc12c; end: 101cbc177;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101cbc12c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e149a0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101cbc178; end: 101cbc1d7; -[_TtC53SCComposerActiveUserSessionVideoLoadersPluginRegistry57SCComposerActiveUserSessionVideoLoadersPluginSaberService init] */

void FUN_101cbc178(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCComposerActiveUserSessionVideoLoadersPluginRegistry.SCComposerActiveUserSessionVideoLoadersPluginSaberService"
                      ,0x6f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101cbc1a4);
  (*pcVar1)();
}



/* Entry: 101cbc1d8; end: 101cbc1f7; -[_TtC53SCComposerActiveUserSessionVideoLoadersPluginRegistry57SCComposerActiveUserSessionVideoLoadersPluginSaberService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101cbc1d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e149a0));
  return;
}



/* Entry: 101cbc1f8; end: 101cbc377;  */

long FUN_101cbc1f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  func_0x0001006fe148(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001006fe1e8();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  func_0x0001006fe33c();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  *(undefined8 *)(unaff_x20 + 0x40) = uVar2;
  return unaff_x20;
}



/* Entry: 101cbc378; end: 101cbc3e3;  */

void FUN_101cbc378(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 101cbc3e4; end: 101cbc427;  */

undefined1  [16] FUN_101cbc3e4(void)

{
  return ZEXT816(0x110468838);
}



/* Entry: 101cbc428; end: 101cbc47b;  */

void FUN_101cbc428(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101cbc47c; end: 101cbc5e3;  */

void FUN_101cbc47c(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x0001002adce4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  FUN_101cc1a08(0);
  func_0x000107c613fc();
  uVar1 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar2 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  uVar4 = uStack_58;
  func_0x000107c61174();
  uVar5 = uVar4;
  func_0x000101cc15fc();
  *(undefined8 *)(param_2 + 0x10) = uVar5;
  uVar6 = uVar5;
  func_0x000107c6157c();
  FUN_101cc1638();
  func_0x000107c61574(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  *(undefined8 *)(param_2 + 0x30) = uVar6;
  *param_1 = param_2;
  return;
}



/* Entry: 101cbc5e4; end: 101cbc5ef;  */

void FUN_101cbc5e4(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_58,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x0001002adce4();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_60;
  *(undefined8 *)(lVar1 + 0x20) = uStack_68;
  *(undefined8 *)(lVar1 + 0x28) = uStack_70;
  FUN_101cc1a08(0);
  func_0x000107c613fc();
  uVar2 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar3 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar4 = uStack_70;
  func_0x000107c61174(uStack_70);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  uVar5 = uStack_58;
  func_0x000107c61174();
  uVar6 = uVar5;
  func_0x000101cc15fc();
  *(undefined8 *)(lVar1 + 0x10) = uVar6;
  uVar7 = uVar6;
  func_0x000107c6157c();
  FUN_101cc1638();
  func_0x000107c61574(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined8 *)(lVar1 + 0x30) = uVar7;
  *param_1 = lVar1;
  return;
}



/* Entry: 101cbc5f0; end: 101cbc713;  */

long FUN_101cbc5f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  FUN_101cc1a08(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000101cc15fc();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_101cc1638();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  *(undefined8 *)(unaff_x20 + 0x30) = uVar2;
  return unaff_x20;
}



/* Entry: 101cbc714; end: 101cbc757;  */

void FUN_101cbc714(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101cbc758; end: 101cbc7ab;  */

void FUN_101cbc758(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101cbc7ac; end: 101cbc7f7;  */

void FUN_101cbc7ac(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101cbc7f8; end: 101cbc84b;  */

void FUN_101cbc7f8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101cbc84c; end: 101cbc903;  */

long FUN_101cbc84c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  func_0x000100aa9fc4(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000100aaa040();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  func_0x000100aaa068();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  return unaff_x20;
}



/* Entry: 101cbc904; end: 101cbc937;  */

void FUN_101cbc904(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101cbc938; end: 101cbc97b;  */

undefined1  [16] FUN_101cbc938(void)

{
  return ZEXT816(0x1104689c8);
}



/* Entry: 101cbc97c; end: 101cbc9cf;  */

void FUN_101cbc97c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101cbc9d0; end: 101cbca67;  */

void FUN_101cbc9d0(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100285a9c();
  func_0x000107c613fc();
  uVar1 = 0;
  FUN_101cc2000();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_101cc1f34();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uStack_48);
  *(undefined8 *)(param_2 + 0x18) = uVar2;
  *param_1 = param_2;
  return;
}



/* Entry: 101cbca68; end: 101cbca6f;  */

void FUN_101cbca68(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100285a9c();
  func_0x000107c613fc();
  uVar1 = 0;
  FUN_101cc2000();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_101cc1f34();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uStack_48);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
  *param_1 = unaff_x20;
  return;
}



/* Entry: 101cbca70; end: 101cbcadb;  */

long FUN_101cbca70(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  uVar1 = 0;
  FUN_101cc2000();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  FUN_101cc1f34();
  func_0x000107c61170(param_1);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  return unaff_x20;
}



/* Entry: 101cbcadc; end: 101cbcb07;  */

void FUN_101cbcadc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101cbcb08; end: 101cbcb5b;  */

void FUN_101cbcb08(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101cbcb5c; end: 101cbcba7;  */

void FUN_101cbcb5c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101cbcba8; end: 101cbcbfb;  */

void FUN_101cbcba8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101cbcbfc; end: 101cbcfe3;  */

long FUN_101cbcbfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  puVar1 = PTR_PTR_1126a8f00;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  uVar2 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar2 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef3c010);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar2 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef1c280);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  uVar2 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef19650);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_7);
  func_0x000107c61174();
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef234e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  puVar3 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  *(undefined **)(unaff_x20 + 0x48) = puVar3;
  return unaff_x20;
}



/* Entry: 101cbcfe4; end: 101cbd057;  */

void FUN_101cbcfe4(void)

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
  return;
}



/* Entry: 101cbd058; end: 101cbd0a7;  */

undefined8 FUN_101cbd058(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101cbd0a8; end: 101cbd0eb;  */

undefined1  [16] FUN_101cbd0a8(void)

{
  return ZEXT816(0x110468b30);
}



/* Entry: 101cbd0ec; end: 101cbd113;  */

void FUN_101cbd0ec(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101cbd114; end: 101cbd11b;  */

undefined8 FUN_101cbd114(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101cbd11c; end: 101cbd47b;  */

long FUN_101cbd11c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  puVar1 = PTR_PTR_1126a8f08;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  uVar2 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef34050);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar2 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f009f80);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f009fa0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  uVar2 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efc6dc0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  puVar3 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  *(undefined **)(unaff_x20 + 0x40) = puVar3;
  return unaff_x20;
}



/* Entry: 101cbd47c; end: 101cbd4e7;  */

void FUN_101cbd47c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 101cbd4e8; end: 101cbd537;  */

undefined8 FUN_101cbd4e8(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101cbd538; end: 101cbd57b;  */

undefined1  [16] FUN_101cbd538(void)

{
  return ZEXT816(0x110468bf8);
}



/* Entry: 101cbd57c; end: 101cbd5a3;  */

void FUN_101cbd57c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101cbd5a4; end: 101cbd5ab;  */

undefined8 FUN_101cbd5a4(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101cbd5ac; end: 101cbd5f7;  */

undefined8 FUN_101cbd5ac(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x0001006fdbc0(param_1,param_2);
  return unaff_x20;
}



/* Entry: 101cbd5f8; end: 101cbd62b;  */

void FUN_101cbd5f8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101cbd62c; end: 101cbd67b;  */

undefined8 FUN_101cbd62c(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101cbd67c; end: 101cbd6bf;  */

undefined1  [16] FUN_101cbd67c(void)

{
  return ZEXT816(0x110468cc0);
}



/* Entry: 101cbd6c0; end: 101cbd6e7;  */

void FUN_101cbd6c0(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101cbd6e8; end: 101cbd6ef;  */

undefined8 FUN_101cbd6e8(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101cbd6f0; end: 101cbd74f;  */

undefined8 FUN_101cbd6f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  func_0x000100aaa980(param_1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  return uVar1;
}



/* Entry: 101cbd750; end: 101cbd78b;  */

void FUN_101cbd750(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101cbd78c; end: 101cbd7db;  */

undefined8 FUN_101cbd78c(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101cbd7dc; end: 101cbd81f;  */

undefined1  [16] FUN_101cbd7dc(void)

{
  return ZEXT816(0x110468d88);
}



/* Entry: 101cbd820; end: 101cbd847;  */

void FUN_101cbd820(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101cbd848; end: 101cbd84f;  */

undefined8 FUN_101cbd848(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101cbd850; end: 101cbda37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_101cbd850(ulong param_1,uint param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uStack_48;
  
  uVar2 = param_1;
  func_0x0001084360fc();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_1;
    func_0x0001084360d0();
    if ((int)uVar2 == 0) {
      uVar2 = 0;
    }
    else {
      func_0x0001000d224c(&uStack_48);
      if (uStack_48 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = uStack_48;
        func_0x000107c3e11c();
        func_0x000107c615e8(uStack_48);
      }
    }
    uVar1 = param_1;
    func_0x000101cbdaec(param_1,param_2 & 1);
    uVar3 = 1;
    if (((uVar2 & 1) != 0) || ((uVar1 & 1) != 0)) goto LAB_101cbd944;
  }
  func_0x000107c5def0(param_3);
  if ((param_1 - 9 < 10) || (param_1 - 0x14 < 2)) {
    if ((param_2 & 1) != 0) {
      uVar3 = 0;
      if (param_1 < 0x16) {
        uVar3 = 0x37fe00 >> (ulong)((uint)param_1 & 0x1f);
      }
      goto LAB_101cbd91c;
    }
  }
  else {
    uVar3 = 0;
LAB_101cbd91c:
    func_0x000108437d74();
    if ((param_3 & 1) == 0) {
      uVar2 = 0;
      func_0x000103b95ea8();
      func_0x000103b95de0();
      if (((uVar2 & 1) == 0) || ((param_2 & 1) != 0)) {
        uVar3 = uVar3 & (param_2 ^ 1);
        goto LAB_101cbd944;
      }
    }
  }
  uVar3 = 1;
LAB_101cbd944:
  return uVar3 & 1;
}



/* Entry: 101cbda38; end: 101cbda7b;  */

uint FUN_101cbda38(ulong param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if ((9 < param_1 - 9) && (1 < param_1 - 0x14)) {
    return 0;
  }
  uVar1 = 1;
  if (param_1 < 0xd) {
    uVar1 = 0x9ff >> (ulong)((uint)param_1 & 0x1f);
  }
  uVar2 = 0;
  if ((param_3 & 1) == 0) {
    uVar2 = uVar1;
  }
  return uVar2 & 1;
}



/* Entry: 101cbda7c; end: 101cbdb73; -[_TtC38AIFTopLevelCardsHelperServicesProvider37AIFTopLevelCardsExperimentsAggregator shouldUseTopLevelCardsRendererFor:isAd:sessionParams:] */

uint FUN_101cbda7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  FUN_101cbd850(param_3,param_4,param_5);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
  return (uint)param_3 & 1;
}



/* Entry: 101cbdb74; end: 101cbdc3b; -[_TtC38AIFTopLevelCardsHelperServicesProvider37AIFTopLevelCardsExperimentsAggregator areRemoteMiniCardsEnabledFor:isAd:sessionParams:] */

uint FUN_101cbdb74(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  uint uVar1;
  undefined8 uVar3;
  long lVar2;
  
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  lVar2 = param_3;
  func_0x000101cbdaec(param_3,param_4);
  uVar1 = (uint)lVar2;
  uVar3 = param_5;
  func_0x000108437d74(param_5);
  func_0x000107c5def0(param_5);
  func_0x000107c61170(param_5);
  if ((param_3 - 9U < 10) || (param_3 - 0x14U < 2)) {
    func_0x000107c61170(param_1);
    uVar1 = (uint)param_4 ^ 1 | uVar1;
  }
  else {
    func_0x000107c61170(param_1);
  }
  FUN_101cbda38(param_3);
  return (uVar1 | (uint)uVar3 | (uint)param_3) & 1;
}



/* Entry: 101cbdc3c; end: 101cbdc8b; -[_TtC38AIFTopLevelCardsHelperServicesProvider37AIFTopLevelCardsExperimentsAggregator shouldShowBaseAIFTopLevelCardsFor:isAd:] */

uint FUN_101cbdc3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174();
  func_0x000101cbd980(param_3,param_4);
  func_0x000107c61170(param_1);
  return (uint)param_3 & 1;
}



/* Entry: 101cbdc8c; end: 101cbdc93; -[_TtC38AIFTopLevelCardsHelperServicesProvider37AIFTopLevelCardsExperimentsAggregator shouldShowRepostedSpotlightTopLevelCardsWithSessionParams:] */

bool FUN_101cbdc8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain();
  uVar2 = param_3;
  func_0x0001084365e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x000108437c68();
  _objc_release(param_3);
  if ((int)uVar3 == 0) {
    bVar1 = false;
  }
  else {
    uVar3 = uVar2;
    func_0x00010c1344a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c298be0();
    bVar1 = (int)uVar4 != 2;
    _objc_release(uVar3);
  }
  _objc_release(uVar2);
  return bVar1;
}



/* Entry: 101cbdc94; end: 101cbdcb3; -[_TtC38AIFTopLevelCardsHelperServicesProvider37AIFTopLevelCardsExperimentsAggregator shouldShowMusicTopLevelCardsForLaunchSource:viewLocation:isAd:] */

uint FUN_101cbdc94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_101cbda38(param_3,param_2,param_5);
  return (uint)param_3 & 1;
}



/* Entry: 101cbdcb4; end: 101cbdd5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_101cbdcb4(long param_1,long param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  if (param_1 - 9U < 2 || param_1 == 0xc) {
LAB_101cbdcd4:
    param_3 = param_3 ^ 1;
  }
  else {
    if ((param_1 == 0x23) && (param_2 - 0x2bU < 3)) {
      lVar1 = *(long *)(*(long *)(unaff_x20 + _DAT_112e151b0) + _DAT_11302e640);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar1 != 0) {
        func_0x000103c03320();
        lVar2 = lVar1;
        func_0x000107c3ebc0();
        func_0x000107c615e8(lVar1);
        if ((int)lVar2 != 0) goto LAB_101cbdcd4;
      }
    }
    param_3 = 0;
  }
  return param_3 & 1;
}



/* Entry: 101cbdd60; end: 101cbddb7; -[_TtC38AIFTopLevelCardsHelperServicesProvider37AIFTopLevelCardsExperimentsAggregator shouldShowMusicInContextHeaderForLaunchSource:viewLocation:isAd:] */

uint FUN_101cbdd60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174();
  FUN_101cbdcb4(param_3,param_4,param_5);
  func_0x000107c61170(param_1);
  return (uint)param_3 & 1;
}



/* Entry: 101cbddb8; end: 101cbddeb; -[_TtC38AIFTopLevelCardsHelperServicesProvider37AIFTopLevelCardsExperimentsAggregator shouldShowStickerCutoutTopLevelCardForLaunchSource:isAd:] */

uint FUN_101cbddb8(void)

{
  uint uVar1;
  uint in_w3;
  
  uVar1 = 0;
  func_0x000103b95ea8(0);
  func_0x000103b95de0();
  return uVar1 & (in_w3 ^ 0xffffffff) & 1;
}



/* Entry: 101cbddec; end: 101cbddfb; -[_TtC38AIFTopLevelCardsHelperServicesProvider37AIFTopLevelCardsExperimentsAggregator isStickerCutoutSavableExpansionEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101cbddec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07f9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112e151a0),
             PTR_s_isStickerCutoutSavableExpansionE_1125fd880);
  return;
}



/* Entry: 101cbddfc; end: 101cbde5b; -[_TtC38AIFTopLevelCardsHelperServicesProvider37AIFTopLevelCardsExperimentsAggregator init] */

void FUN_101cbddfc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AIFTopLevelCardsHelperServicesProvider.AIFTopLevelCardsExperimentsAggregator"
                      ,0x4c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101cbde28);
  (*pcVar1)();
}



/* Entry: 101cbde5c; end: 101cbdeb3; -[_TtC38AIFTopLevelCardsHelperServicesProvider37AIFTopLevelCardsExperimentsAggregator .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101cbde5c(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e15198));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e151a0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e151a8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e151b0));
  return;
}



/* Entry: 101cbdeb4; end: 101cbded3;  */

void FUN_101cbdeb4(void)

{
  func_0x000107c61168(&PTR_PTR_112800a48);
  return;
}



/* Entry: 101cbded4; end: 101cbded7; -[_TtC38AIFTopLevelCardsHelperServicesProvider37AIFTopLevelCardsExperimentsAggregator shouldShowSponsoredCtaTopLevelCardsForLaunchSource:isAd:] */

uint FUN_101cbded4(undefined8 param_1,undefined8 param_2,long param_3,uint param_4)

{
  if ((9 < param_3 - 9U) && (1 < param_3 - 0x14U)) {
    return 0;
  }
  return param_4 ^ 1;
}



/* Entry: 101cbded8; end: 101cbdedb; -[_TtC38AIFTopLevelCardsHelperServicesProvider37AIFTopLevelCardsExperimentsAggregator shouldShowTemplatesTopLevelCardsForLaunchSource:isAd:] */

uint FUN_101cbded8(undefined8 param_1,undefined8 param_2,long param_3,uint param_4)

{
  if ((9 < param_3 - 9U) && (1 < param_3 - 0x14U)) {
    return 0;
  }
  return param_4 ^ 1;
}



/* Entry: 101cbdedc; end: 101cbe03b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101cbdedc(undefined8 param_1,long param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c613fc();
  func_0x0001000285a8(0x112e151e0,&UNK_10d9f2400);
  uVar1 = *(undefined8 *)(param_2 + _DAT_1130190c8);
  func_0x000107c61174();
  uVar2 = uVar1;
  func_0x0001000bda74();
  func_0x000107c61170(uVar1);
  uVar3 = *(undefined8 *)(param_3 + _DAT_1130807f0);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar3;
  uVar2 = *(undefined8 *)(param_4 + _DAT_11302ecd0);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  func_0x0001000285a8(0x112e151e8,&UNK_10d9f2408);
  uVar1 = *(undefined8 *)(param_5 + _DAT_112ff0420);
  func_0x000107c615f0(uVar3);
  func_0x000107c615f0(uVar2);
  func_0x000107c61174();
  uVar2 = uVar1;
  func_0x0001000bda74();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  return unaff_x20;
}



/* Entry: 101cbe03c; end: 101cbe10b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101cbe03c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_50;
  long lStack_48;
  
  plVar4 = &lStack_50;
  lVar2 = 0;
  FUN_101cbdeb4();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112e15198) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112e151a0) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112e151a8) = param_4;
  *(undefined8 *)(lVar3 + _DAT_112e151b0) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = lVar3;
  lStack_48 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c615f0(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61154(&lStack_50,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 101cbe10c; end: 101cbe117;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101cbe10c(undefined8 *param_1)

{
  undefined8 uVar1;
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
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar8 = &lStack_50;
  lVar6 = 0;
  FUN_101cbdeb4();
  lVar7 = lVar6;
  func_0x000107c610f8();
  *(undefined8 *)(lVar7 + _DAT_112e15198) = uVar1;
  *(undefined8 *)(lVar7 + _DAT_112e151a0) = uVar3;
  *(undefined8 *)(lVar7 + _DAT_112e151a8) = uVar2;
  *(undefined8 *)(lVar7 + _DAT_112e151b0) = uVar4;
  puVar5 = PTR_s_init_1125d9248;
  lStack_50 = lVar7;
  lStack_48 = lVar6;
  func_0x000107c6157c(uVar1);
  func_0x000107c615f0(uVar3);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(uVar4);
  func_0x000107c61154(&lStack_50,puVar5);
  *param_1 = plVar8;
  return;
}



/* Entry: 101cbe118; end: 101cbe17b;  */

void FUN_101cbe118(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126a8f20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  param_1[3] = &UNK_110468f80;
  param_1[4] = &PTR_DAT_110468fa0;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = puVar1;
  func_0x000107c615f0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_3);
  return;
}



/* Entry: 101cbe17c; end: 101cbe183;  */

void FUN_101cbe17c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar3 = PTR_PTR_1126a8f20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  param_1[3] = &UNK_110468f80;
  param_1[4] = &PTR_DAT_110468fa0;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = puVar3;
  func_0x000107c615f0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar2);
  return;
}



/* Entry: 101cbe184; end: 101cbe1b7;  */

void FUN_101cbe184(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Entry: 101cbe1b8; end: 101cbe26f;  */

void FUN_101cbe1b8(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}


