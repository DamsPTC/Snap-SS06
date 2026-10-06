/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102788310; end: 1027883db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102788310(undefined1 *param_1)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  long *plVar3;
  code *UNRECOVERED_JUMPTABLE;
  int *piVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  puVar1 = (undefined8 *)(*(long *)(unaff_x22 + 0x10) + _DAT_112ebda48);
  piVar4 = (int *)*puVar1;
  *(int **)(unaff_x22 + 0x18) = piVar4;
  uVar5 = puVar1[1];
  *(undefined8 *)(unaff_x22 + 0x20) = uVar5;
  if (piVar4 == (int *)0x0) {
    func_0x000102787bcc();
    func_0x000107c613f8(&UNK_110548048,param_1,0,0);
    *param_1 = 5;
    func_0x000107c61654();
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
    uVar2 = 0;
  }
  else {
    plVar3 = (long *)(ulong)(uint)piVar4[1];
    UNRECOVERED_JUMPTABLE = (code *)((long)piVar4 + (long)*piVar4);
    func_0x000107c6157c(uVar5);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x28) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_1027883dc;
    uVar2 = *(undefined1 *)(unaff_x22 + 0x38);
  }
                    /* WARNING: Could not recover jumptable at 0x0001027883d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2);
  return;
}



/* Entry: 1027883dc; end: 10278844b;  */

void FUN_1027883dc(byte param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x30) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x28));
  if (unaff_x20 == 0) {
    *(byte *)(lVar2 + 0x39) = param_1 & 1;
    pcVar1 = FUN_10278844c;
  }
  else {
    pcVar1 = (code *)0x102788d10;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10278844c; end: 102788483;  */

void FUN_10278844c(void)

{
  long unaff_x22;
  
  func_0x000100d04d60(*(undefined8 *)(unaff_x22 + 0x18),*(undefined8 *)(unaff_x22 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x000102788480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined1 *)(unaff_x22 + 0x39));
  return;
}



/* Entry: 102788484; end: 1027884b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102788484(void)

{
  long unaff_x20;
  
  if (*(code **)(unaff_x20 + _DAT_112ebda50) != (code *)0x0) {
    (**(code **)(unaff_x20 + _DAT_112ebda50))();
  }
  return;
}



/* Entry: 1027884b8; end: 1027884c7;  */

undefined * FUN_1027884b8(void)

{
  return PTR___sSSSHsWP_11034da90;
}



/* Entry: 1027884c8; end: 102788527;  */

void FUN_1027884c8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebda60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad89a8;
  func_0x000107c61520(&UNK_10dad89a8,&UNK_110547fb8);
  puRam0000000112ebda60 = puVar1;
  return;
}



/* Entry: 102788528; end: 10278857f;  */

int FUN_102788528(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 102788580; end: 1027885db;  */

long FUN_102788580(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1027885dc; end: 1027886bb;  */

undefined8 * FUN_1027885dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  return param_1;
}



/* Entry: 1027886bc; end: 10278870f;  */

undefined8 * FUN_1027886bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 102788710; end: 1027887bb;  */

int FUN_102788710(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1027887bc; end: 1027887ef;  */

undefined8 * FUN_1027887bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  func_0x000107c61434();
  return param_1;
}



/* Entry: 1027887f0; end: 102788843;  */

undefined8 * FUN_1027887f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  return param_1;
}



/* Entry: 102788844; end: 10278887f;  */

undefined8 * FUN_102788844(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  return param_1;
}



/* Entry: 102788880; end: 102788bc3;  */

int FUN_102788880(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102788bc4; end: 102788c03;  */

void FUN_102788bc4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebda90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad8ad4;
  func_0x000107c61520(&UNK_10dad8ad4,&UNK_110548048);
  puRam0000000112ebda90 = puVar1;
  return;
}



/* Entry: 102788c04; end: 102788c87;  */

void FUN_102788c04(void)

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



/* Entry: 102788c88; end: 102788c97;  */

void FUN_102788c88(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 102788c98; end: 102788cd3;  */

/* WARNING: Possible PIC construction at 0x000102788cb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102788cb8) */

void FUN_102788c98(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
    return;
  }
  return;
}



/* Entry: 102788cd4; end: 102788d4f;  */

undefined1 FUN_102788cd4(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 102788d50; end: 102788e73;  */

void FUN_102788d50(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte *unaff_x20;
  
  bVar4 = *unaff_x20;
  uVar3 = 0xec00000048544449;
  uVar5 = 0x575f544547524154;
  if (bVar4 != 5) {
    uVar3 = 0xed00005448474945;
    uVar5 = 0x485f544547524154;
  }
  uVar6 = 0x44495f50414e53;
  if (bVar4 != 3) {
    uVar6 = 0xd00000000000001d;
  }
  uVar1 = 0xe700000000000000;
  if (bVar4 != 3) {
    uVar1 = 0x800000010f002210;
  }
  if (bVar4 < 5) {
    uVar3 = uVar1;
    uVar5 = uVar6;
  }
  uVar6 = 0xee0059454b5f4e4f;
  if (bVar4 != 1) {
    uVar6 = 0xed000056495f4e4f;
  }
  uVar1 = 0x495255;
  if (bVar4 != 0) {
    uVar1 = 0x4954505952434e45;
  }
  uVar2 = 0xe300000000000000;
  if (bVar4 != 0) {
    uVar2 = uVar6;
  }
  if (bVar4 < 3) {
    uVar3 = uVar2;
    uVar5 = uVar1;
  }
  func_0x000107c5fb58(param_1,uVar5,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
  return;
}



/* Entry: 102788e74; end: 102788e7b;  */

void FUN_102788e74(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar4 = *unaff_x20;
  func_0x000107c6068c(auStack_68);
  uVar3 = 0xec00000048544449;
  uVar5 = 0x575f544547524154;
  if (bVar4 != 5) {
    uVar3 = 0xed00005448474945;
    uVar5 = 0x485f544547524154;
  }
  uVar6 = 0x44495f50414e53;
  if (bVar4 != 3) {
    uVar6 = 0xd00000000000001d;
  }
  uVar1 = 0xe700000000000000;
  if (bVar4 != 3) {
    uVar1 = 0x800000010f002210;
  }
  if (bVar4 < 5) {
    uVar3 = uVar1;
    uVar5 = uVar6;
  }
  uVar6 = 0xee0059454b5f4e4f;
  if (bVar4 != 1) {
    uVar6 = 0xed000056495f4e4f;
  }
  uVar1 = 0x495255;
  if (bVar4 != 0) {
    uVar1 = 0x4954505952434e45;
  }
  uVar2 = 0xe300000000000000;
  if (bVar4 != 0) {
    uVar2 = uVar6;
  }
  if (bVar4 < 3) {
    uVar3 = uVar2;
    uVar5 = uVar1;
  }
  func_0x000107c5fb58(auStack_68,uVar5,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c606a8();
  return;
}



/* Entry: 102788e7c; end: 102788fef;  */

void FUN_102788e7c(undefined8 param_1,byte param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68);
  uVar3 = 0xec00000048544449;
  uVar4 = 0x575f544547524154;
  if (param_2 != 5) {
    uVar3 = 0xed00005448474945;
    uVar4 = 0x485f544547524154;
  }
  uVar5 = 0x44495f50414e53;
  if (param_2 != 3) {
    uVar5 = 0xd00000000000001d;
  }
  uVar1 = 0xe700000000000000;
  if (param_2 != 3) {
    uVar1 = 0x800000010f002210;
  }
  if (param_2 < 5) {
    uVar3 = uVar1;
    uVar4 = uVar5;
  }
  uVar5 = 0xee0059454b5f4e4f;
  if (param_2 != 1) {
    uVar5 = 0xed000056495f4e4f;
  }
  uVar1 = 0x495255;
  if (param_2 != 0) {
    uVar1 = 0x4954505952434e45;
  }
  uVar2 = 0xe300000000000000;
  if (param_2 != 0) {
    uVar2 = uVar5;
  }
  if (param_2 < 3) {
    uVar3 = uVar2;
    uVar4 = uVar1;
  }
  func_0x000107c5fb58(auStack_68,uVar4,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c606a8();
  return;
}



/* Entry: 102788ff0; end: 1027890f7;  */

void FUN_102788ff0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte *unaff_x20;
  
  bVar4 = *unaff_x20;
  uVar3 = 0xec00000048544449;
  uVar5 = 0x575f544547524154;
  if (bVar4 != 5) {
    uVar3 = 0xed00005448474945;
    uVar5 = 0x485f544547524154;
  }
  uVar6 = 0x44495f50414e53;
  if (bVar4 != 3) {
    uVar6 = 0xd00000000000001d;
  }
  uVar1 = 0xe700000000000000;
  if (bVar4 != 3) {
    uVar1 = 0x800000010f002210;
  }
  if (bVar4 < 5) {
    uVar3 = uVar1;
    uVar5 = uVar6;
  }
  uVar6 = 0xee0059454b5f4e4f;
  if (bVar4 != 1) {
    uVar6 = 0xed000056495f4e4f;
  }
  uVar1 = 0x495255;
  if (bVar4 != 0) {
    uVar1 = 0x4954505952434e45;
  }
  uVar2 = 0xe300000000000000;
  if (bVar4 != 0) {
    uVar2 = uVar6;
  }
  if (bVar4 < 3) {
    uVar3 = uVar2;
    uVar5 = uVar1;
  }
  *param_1 = uVar5;
  param_1[1] = uVar3;
  return;
}



/* Entry: 1027890f8; end: 10278915b;  */

ulong FUN_1027890f8(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (6 < uVar1) {
    uVar1 = 7;
  }
  return uVar1;
}



/* Entry: 10278915c; end: 10278915f;  */

void FUN_10278915c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebda98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad8bc0;
  func_0x000107c61520(&UNK_10dad8bc0,&UNK_110548218);
  puRam0000000112ebda98 = puVar1;
  return;
}



/* Entry: 102789160; end: 10278919f;  */

void FUN_102789160(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebda98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad8bc0;
  func_0x000107c61520(&UNK_10dad8bc0,&UNK_110548218);
  puRam0000000112ebda98 = puVar1;
  return;
}



/* Entry: 1027891a0; end: 102789313;  */

undefined1  [16] FUN_1027891a0(void)

{
  return ZEXT816(0x110548188);
}



/* Entry: 102789314; end: 102789387;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102789314(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_102789b68();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112ebdb78) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  param_1[1] = &PTR_DAT_110548350;
  return;
}



/* Entry: 102789388; end: 10278938f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102789388(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_102789b68();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112ebdb78) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110548350;
  return;
}



/* Entry: 102789390; end: 1027893db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102789390(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ebdb78) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1027893dc; end: 10278974f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1027893dc(undefined8 param_1,undefined8 param_2,undefined8 *param_3,ulong param_4,
                    uint param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined1 auStack_588 [24];
  undefined8 auStack_570 [5];
  undefined8 auStack_548 [3];
  undefined8 uStack_530;
  long lStack_528;
  undefined1 auStack_408 [8];
  undefined8 uStack_400;
  undefined1 auStack_3f8 [304];
  long lStack_2c8;
  long lStack_2c0;
  undefined1 auStack_2b8 [304];
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined1 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  undefined1 uStack_f0;
  undefined8 uStack_ef;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  
  lVar1 = 0;
  FUN_10278a1c8();
  lVar2 = lVar1;
  func_0x000107c610f8();
  puVar5 = (undefined8 *)(lVar2 + _DAT_112ebdc30);
  puVar5[1] = 0;
  *puVar5 = 0;
  puVar5[3] = 0;
  puVar5[2] = 0;
  puVar5[4] = 0;
  func_0x000107c61614(lVar2 + _DAT_112ebdc38,0);
  *(undefined1 *)(lVar2 + _DAT_112ebdc40) = 0;
  *(undefined1 *)(lVar2 + _DAT_112ebdc48) = 0;
  puVar5 = (undefined8 *)(lVar2 + _DAT_112ebdc20);
  *puVar5 = param_9;
  puVar5[1] = param_10;
  puVar5 = (undefined8 *)(lVar2 + _DAT_112ebdc28);
  *puVar5 = param_11;
  puVar5[1] = param_12;
  puVar7 = PTR_s_init_1125d9248;
  lStack_2c8 = lVar2;
  lStack_2c0 = lVar1;
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_10);
  plVar3 = &lStack_2c8;
  func_0x000107c61154(plVar3,puVar7);
  FUN_102789c48();
  uVar8 = 0;
  puVar7 = (undefined *)0x0;
  if ((param_4 & 1) != 0) {
    puVar7 = &UNK_110548338;
    func_0x000107c613fc(&UNK_110548338,0x20,7);
    *(undefined8 *)(puVar7 + 0x10) = param_7;
    *(undefined8 *)(puVar7 + 0x18) = param_8;
    func_0x000107c6157c(param_8);
    uVar8 = 0x102789ac4;
  }
  puVar4 = &UNK_110548310;
  func_0x000107c613fc(&UNK_110548310,0x18,7);
  func_0x000107c61614(puVar4 + 0x10,plVar3);
  puVar5 = param_3;
  func_0x000107c61434();
  if ((param_5 & 1) == 0) {
    func_0x0001038d1a94();
  }
  else {
    func_0x0001038d1a7c();
  }
  uVar6 = *puVar5;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_ef = 0;
  uStack_f7 = 0;
  uStack_f0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 2;
  uStack_a8 = 1;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_80 = 0;
  uStack_d8 = param_2;
  puStack_d0 = param_3;
  func_0x0001000285a8(0x112ebdbe8,&UNK_10dc1e100);
  func_0x000107c61538();
  uStack_188 = 0x102789964;
  uStack_138 = 0;
  puStack_180 = puVar4;
  func_0x00010278996c(uVar8,puVar7);
  func_0x0001038cfc00(auStack_2b8,&uStack_188,&uStack_130,&uStack_d8,uVar8,puVar7,&uStack_b0,uVar6,0
                      ,0);
  func_0x000107c610b4(auStack_3f8,auStack_2b8,299);
  auStack_408[0] = 10;
  uStack_400 = param_1;
  func_0x000107c615f0(param_1);
  FUN_10278997c(auStack_2b8,auStack_548);
  func_0x000100083b20(auStack_548);
  func_0x000107c610b4(auStack_548,auStack_408,0x13b);
  func_0x00010008a7c8(auStack_570,auStack_548);
  func_0x000107c61574(auStack_548[0]);
  func_0x000100083b20(auStack_548);
  func_0x000107c61574(auStack_570[0]);
  func_0x0001027899b8(auStack_548,auStack_570);
  lVar2 = _DAT_112ebdc30;
  func_0x000107c61428((long)plVar3 + _DAT_112ebdc30,auStack_588,0x21,0);
  func_0x0001027899fc(auStack_570,(long)plVar3 + lVar2);
  func_0x000107c614a8(auStack_588);
  func_0x0001000a8868(auStack_548,uStack_530);
  (**(code **)(lStack_528 + 8))(uStack_530,lStack_528);
  FUN_102789a4c(uVar8,puVar7);
  func_0x000107c615e8(param_1);
  FUN_102789a5c(auStack_2b8);
  func_0x000102789a90(auStack_408);
  func_0x0001000834e4(auStack_548);
  return plVar3;
}



/* Entry: 102789750; end: 102789823;  */

/* WARNING: Possible PIC construction at 0x000102789804: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102789808) */

void FUN_102789750(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = &UNK_110548390;
  func_0x000107c613fc(&UNK_110548390,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  puVar1[0x28] = param_3;
  *(undefined8 *)(puVar1 + 0x30) = param_4;
  func_0x000107c6157c(param_5);
  func_0x000107c61434(param_2);
  func_0x000107c61434(param_4);
  uVar2 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  func_0x0001001ca524(0xc1,0,0x48,4,0,0,&UNK_10dad8d70,puVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102789824; end: 102789843;  */

void FUN_102789824(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  *(undefined8 *)(unaff_x22 + 0x38) = param_6;
  *(undefined1 *)(unaff_x22 + 0x50) = param_5;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102789844,0,0);
  return;
}



/* Entry: 102789844; end: 1027898f3;  */

void FUN_102789844(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0x10,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x40) = lVar3;
  if (lVar3 != 0) {
    uVar1 = 0;
    func_0x000107c5fcec();
    uVar2 = uVar1;
    func_0x000107c5fce8();
    *(undefined8 *)(unaff_x22 + 0x48) = uVar2;
    func_0x000100eea164();
    func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_1027898f4,uVar1,uVar2);
    return;
  }
  **(undefined1 **)(unaff_x22 + 0x28) = 1;
                    /* WARNING: Could not recover jumptable at 0x0001027898f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1027898f4; end: 102789953;  */

void FUN_1027898f4(void)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar2 = *(undefined1 *)(unaff_x22 + 0x50);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x48));
  FUN_10278a230(uVar2,uVar3);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102789954,0,0);
  return;
}



/* Entry: 102789954; end: 10278997b;  */

void FUN_102789954(void)

{
  long unaff_x22;
  
  **(undefined1 **)(unaff_x22 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x000102789960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10278997c; end: 102789a4b;  */

undefined8 FUN_10278997c(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&DAT_1038d0080)(param_2,param_1);
  return param_2;
}



/* Entry: 102789a4c; end: 102789a5b;  */

void FUN_102789a4c(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 102789a5c; end: 102789ae3;  */

undefined8 FUN_102789a5c(undefined8 param_1)

{
  (*(code *)&DAT_1038cffd8)();
  return param_1;
}



/* Entry: 102789ae4; end: 102789b43; -[_TtC32MemTwoPickerLaunchImplementation22MemTwoPickerLaunchImpl init] */

void FUN_102789ae4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemTwoPickerLaunchImplementation.MemTwoPickerLaunchImpl",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102789b10);
  (*pcVar1)();
}



/* Entry: 102789b44; end: 102789b67; -[_TtC32MemTwoPickerLaunchImplementation22MemTwoPickerLaunchImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102789b44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ebdb78));
  return;
}



/* Entry: 102789b68; end: 102789b87;  */

void FUN_102789b68(void)

{
  func_0x000107c61168(&PTR_PTR_112860348);
  return;
}



/* Entry: 102789b88; end: 102789c0b;  */

void FUN_102789b88(long param_1)

{
  long lVar1;
  undefined1 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar4;
  long lVar5;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar5 = *(long *)(unaff_x20 + 0x30);
  plVar3 = (long *)0x60;
  uVar2 = *(undefined1 *)(unaff_x20 + 0x28);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_102789c0c;
  plVar3[6] = lVar1;
  plVar3[7] = lVar5;
  *(undefined1 *)(plVar3 + 10) = uVar2;
  plVar3[5] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102789844,0,0,uVar4);
  return;
}



/* Entry: 102789c0c; end: 102789c47;  */

void FUN_102789c0c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102789c44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102789c48; end: 102789dff;  */

undefined * FUN_102789c48(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar8 = &puStack_c0;
  puVar4 = &UNK_1105483c0;
  puVar2 = puVar4;
  func_0x000107c613fc(&UNK_1105483c0,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_1105483e8;
  func_0x000107c613fc(&UNK_1105483e8,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  func_0x000107c613fc(&UNK_1105483c0,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  puVar5 = &UNK_110548410;
  func_0x000107c613fc(&UNK_110548410,0x20,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(undefined8 *)(puVar5 + 0x18) = param_1;
  puVar6 = PTR_PTR_1126aeaf8;
  func_0x000107c610f8(PTR_PTR_1126aeaf8);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_70 = FUN_10278a2d4;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100e1779c;
  puStack_78 = &UNK_110548428;
  ppuVar7 = &puStack_90;
  puStack_68 = puVar3;
  func_0x000107c60bc4(ppuVar7);
  pcStack_a0 = FUN_10278a308;
  puStack_c0 = puVar1;
  uStack_b8 = 0x42000000;
  puStack_b0 = &UNK_100e17304;
  puStack_a8 = &UNK_110548450;
  puStack_98 = puVar5;
  func_0x000107c60bc4(&puStack_c0);
  func_0x000107c615f4(param_1,2);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(puVar4);
  func_0x000107c47be0(puVar6);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61574(puStack_98);
  puVar3 = puStack_68;
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar3);
  return puVar6;
}



/* Entry: 102789e00; end: 102789e8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102789e00(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000107c61604(param_2 + _DAT_112ebdc38,param_1);
    func_0x000107c61170(param_2);
  }
  func_0x000107c5677c(param_1);
  func_0x000107c3e2c0(param_3);
  return;
}



/* Entry: 102789e8c; end: 10278a037;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102789e8c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  byte bVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 == 0) {
    ppuVar1 = (undefined **)0x0;
    if (param_1 != 0) {
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      puStack_78 = &UNK_1000b0c7c;
      puStack_70 = &UNK_110548478;
      ppuVar1 = &puStack_88;
      pcStack_68 = (code *)param_1;
      puStack_60 = (undefined *)param_2;
      func_0x000107c60bc4(ppuVar1);
      puVar2 = puStack_60;
      func_0x000107c6157c(param_2);
      func_0x000107c61574(puVar2);
    }
    func_0x000107c41864(param_4);
    func_0x000107c60bd0(ppuVar1);
  }
  else {
    if ((*(byte *)(param_3 + _DAT_112ebdc40) & 1) == 0) {
      bVar3 = *(byte *)(param_3 + _DAT_112ebdc48) ^ 1;
    }
    else {
      bVar3 = 0;
    }
    *(undefined1 *)(param_3 + _DAT_112ebdc40) = 1;
    puVar2 = &UNK_1105484b0;
    func_0x000107c613fc(&UNK_1105484b0,0x30,7);
    puVar2[0x10] = bVar3 & 1;
    *(long *)(puVar2 + 0x18) = param_3;
    *(long *)(puVar2 + 0x20) = param_1;
    *(undefined8 *)(puVar2 + 0x28) = param_2;
    pcStack_68 = FUN_10278a32c;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_1000b0c7c;
    puStack_70 = &UNK_1105484c8;
    ppuVar1 = &puStack_88;
    puStack_60 = puVar2;
    func_0x000107c60bc4(ppuVar1);
    puVar2 = puStack_60;
    func_0x000107c61174(param_3);
    func_0x000100b64c10(param_1,param_2);
    func_0x000107c61574(puVar2);
    func_0x000107c41864(param_4);
    func_0x000107c60bd0(ppuVar1);
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 10278a038; end: 10278a0df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10278a038(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_70 [24];
  undefined8 uStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  if ((*(byte *)(unaff_x20 + _DAT_112ebdc40) & 1) == 0) {
    *(undefined1 *)(unaff_x20 + _DAT_112ebdc48) = 1;
    lVar1 = unaff_x20 + _DAT_112ebdc30;
    func_0x000107c61428(lVar1,auStack_48,0,0);
    if (*(long *)(lVar1 + 0x18) != 0) {
      func_0x0001027899b8(lVar1,auStack_70);
      func_0x0001000a8868(auStack_70,uStack_58);
      (**(code **)(lStack_50 + 0x10))(uStack_58,lStack_50);
      func_0x0001000834e4(auStack_70);
    }
  }
  return;
}



/* Entry: 10278a0e0; end: 10278a107; -[_TtC32MemTwoPickerLaunchImplementation25MemTwoPickerLaunchSession dismiss] */

void FUN_10278a0e0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10278a038();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10278a108; end: 10278a167; -[_TtC32MemTwoPickerLaunchImplementation25MemTwoPickerLaunchSession init] */

void FUN_10278a108(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemTwoPickerLaunchImplementation.MemTwoPickerLaunchSession",0x3a,"init()",6,0
                     );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10278a134);
  (*pcVar1)();
}



/* Entry: 10278a168; end: 10278a1c7; -[_TtC32MemTwoPickerLaunchImplementation25MemTwoPickerLaunchSession .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10278a168(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ebdc20 + 8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ebdc28 + 8));
  FUN_10278a1e8(param_1 + _DAT_112ebdc30);
                    /* WARNING: Could not recover jumptable at 0x00010bdc05f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakDestroy_11034f580)(param_1 + _DAT_112ebdc38);
  return;
}



/* Entry: 10278a1c8; end: 10278a1e7;  */

void FUN_10278a1c8(void)

{
  func_0x000107c61168(&PTR_PTR_112860408);
  return;
}



/* Entry: 10278a1e8; end: 10278a22f;  */

undefined8 FUN_10278a1e8(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112ebdbf0;
  func_0x0001000285a8(0x112ebdbf0,&UNK_10dad8cd0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 10278a230; end: 10278a2d3;  */

/* WARNING: Possible PIC construction at 0x00010278a2a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010278a2a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10278a230(undefined8 param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  if (*(long *)(param_2 + 0x10) != 0) {
    uVar3 = *(undefined8 *)(param_2 + 0x20);
    lVar2 = unaff_x20 + _DAT_112ebdc38;
    func_0x000107c61618();
    if (lVar2 != 0) {
      pcVar1 = *(code **)(unaff_x20 + _DAT_112ebdc20);
      func_0x000107c61174(uVar3);
      (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar3);
      return;
    }
  }
  return;
}



/* Entry: 10278a2d4; end: 10278a2db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10278a2d4(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c61604(lVar2 + _DAT_112ebdc38,param_1);
    func_0x000107c61170(lVar2);
  }
  func_0x000107c5677c(param_1);
  func_0x000107c3e2c0(uVar1);
  return;
}



/* Entry: 10278a2dc; end: 10278a307;  */

void FUN_10278a2dc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10278a308; end: 10278a32b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10278a308(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  long unaff_x20;
  byte bVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 == 0) {
    ppuVar3 = (undefined **)0x0;
    if (param_1 != 0) {
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      puStack_78 = &UNK_1000b0c7c;
      puStack_70 = &UNK_110548478;
      ppuVar3 = &puStack_88;
      pcStack_68 = (code *)param_1;
      puStack_60 = (undefined *)param_2;
      func_0x000107c60bc4(ppuVar3);
      puVar4 = puStack_60;
      func_0x000107c6157c(param_2);
      func_0x000107c61574(puVar4);
    }
    func_0x000107c41864(uVar1);
    func_0x000107c60bd0(ppuVar3);
  }
  else {
    if ((*(byte *)(lVar2 + _DAT_112ebdc40) & 1) == 0) {
      bVar5 = *(byte *)(lVar2 + _DAT_112ebdc48) ^ 1;
    }
    else {
      bVar5 = 0;
    }
    *(undefined1 *)(lVar2 + _DAT_112ebdc40) = 1;
    puVar4 = &UNK_1105484b0;
    func_0x000107c613fc(&UNK_1105484b0,0x30,7);
    puVar4[0x10] = bVar5 & 1;
    *(long *)(puVar4 + 0x18) = lVar2;
    *(long *)(puVar4 + 0x20) = param_1;
    *(undefined8 *)(puVar4 + 0x28) = param_2;
    pcStack_68 = FUN_10278a32c;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_1000b0c7c;
    puStack_70 = &UNK_1105484c8;
    ppuVar3 = &puStack_88;
    puStack_60 = puVar4;
    func_0x000107c60bc4(ppuVar3);
    puVar4 = puStack_60;
    func_0x000107c61174(lVar2);
    func_0x000100b64c10(param_1,param_2);
    func_0x000107c61574(puVar4);
    func_0x000107c41864(uVar1);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 10278a32c; end: 10278a37f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10278a32c(void)

{
  code *pcVar1;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x20);
  if (*(char *)(unaff_x20 + 0x10) == '\x01') {
    (**(code **)(*(long *)(unaff_x20 + 0x18) + _DAT_112ebdc28))();
  }
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  return;
}



/* Entry: 10278a380; end: 10278a397;  */

void FUN_10278a380(long param_1,long param_2)

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



/* Entry: 10278a398; end: 10278a43b;  */

/* WARNING: Possible PIC construction at 0x00010278a424: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010278a428) */

void FUN_10278a398(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar2 = &UNK_110548620;
  func_0x000107c613fc(&UNK_110548620,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  uVar3 = 0x112ebdc80;
  func_0x0001000285a8(0x112ebdc80,&UNK_10dad8de8);
  func_0x000107c613fc();
  pcVar4 = FUN_10278a478;
  func_0x0001000841fc(FUN_10278a478,puVar2,uVar3);
  func_0x000100084214(&UNK_10dad8db0,0x35,2);
  *param_1 = pcVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10278a43c; end: 10278a44b;  */

undefined1  [16] FUN_10278a43c(void)

{
  return ZEXT816(0x110548600);
}



/* Entry: 10278a44c; end: 10278a477;  */

void FUN_10278a44c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10278a478; end: 10278a7e3;  */

void FUN_10278a478(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uStack_48;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *param_2;
  func_0x0001000285a8(0x112ebdc88,&UNK_10dad8df0);
  puVar2 = &uStack_48;
  uStack_48 = uVar6;
  func_0x0001000838ec();
  puVar3 = puVar2;
  FUN_10278d564();
  func_0x000100082720("MemTwoPickerLegacyItemFactoryImplServiceProvider",0x30,2);
  FUN_102790734(uVar4);
  func_0x000100082720("MemTwoPickerMediaSegmentFactoryImplServiceProvider",0x32,2);
  puVar5 = puVar3;
  func_0x00010278a644(puVar3,uVar4,uVar1,puVar2);
  func_0x0001002acff8("MemTwoPickerCompatibilityWorkflowImplEntryPointProvider",0x37,2);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar2);
  *param_1 = (long)puVar5;
  return;
}



/* Entry: 10278a7e4; end: 10278a7ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10278a7e4(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long unaff_x20;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar6 = lVar2;
  func_0x000100083b20(&uStack_48);
  FUN_10278d280();
  lVar7 = lVar6;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar7 + _DAT_112ebdc98);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  *(undefined1 *)(lVar7 + _DAT_112ebdca0) = 0;
  *(undefined1 *)(lVar7 + _DAT_112ebdca8) = 0;
  *(long *)(lVar7 + _DAT_112ebdcb0) = lVar2;
  *(undefined8 *)(lVar7 + _DAT_112ebdcb8) = uVar4;
  *(undefined8 *)(lVar7 + _DAT_112ebdcc0) = uVar3;
  *(undefined8 *)(lVar7 + _DAT_112ebdcc8) = uStack_48;
  puVar5 = PTR_s_init_1125d9248;
  lStack_58 = lVar7;
  lStack_50 = lVar6;
  func_0x000107c6157c(lVar2);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar3);
  plVar8 = &lStack_58;
  func_0x000107c61154(plVar8,puVar5);
  *param_1 = (long)plVar8;
  return;
}



/* Entry: 10278a7f0; end: 10278a8ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10278a7f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ebdc98);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ebdca0) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ebdca8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ebdcb0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ebdcb8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ebdcc0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ebdcc8) = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10278a8ac; end: 10278abbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10278a8ac(void)

{
  long lVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  long unaff_x20;
  ulong *puVar6;
  undefined *puVar7;
  code *pcVar8;
  ulong uVar9;
  undefined1 auStack_448 [24];
  undefined8 auStack_430 [5];
  undefined8 auStack_408 [3];
  undefined8 uStack_3f0;
  long lStack_3e8;
  undefined1 auStack_2c8 [8];
  ulong *puStack_2c0;
  undefined1 auStack_2b8 [8];
  long lStack_2b0;
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [88];
  undefined1 auStack_118 [80];
  undefined1 auStack_c8 [40];
  undefined1 auStack_a0 [64];
  
  lVar1 = _DAT_112ebdc98;
  func_0x000107c61428(unaff_x20 + _DAT_112ebdc98,auStack_188,0,0);
  FUN_10278d138(unaff_x20 + lVar1,auStack_2c8);
  FUN_10278a1e8(auStack_2c8);
  if (lStack_2b0 == 0) {
    puVar6 = *(ulong **)(unaff_x20 + _DAT_112ebdcc8);
    puVar2 = puVar6;
    func_0x000107c4008c();
    func_0x000107c61180();
    puVar3 = puVar2;
    func_0x000107c5b634();
    func_0x000107c61170(puVar2);
    FUN_102790bd8();
    puVar2 = puVar3;
    FUN_10278abc0();
    FUN_10278ad50(auStack_170);
    FUN_10278aec0(auStack_118);
    FUN_10278b098(auStack_c8);
    puVar4 = puVar6;
    func_0x000107c4008c();
    func_0x000107c61180();
    puVar5 = puVar4;
    func_0x000107c5ad44();
    func_0x000107c61170(puVar4);
    if ((int)puVar5 == 0) {
      pcVar8 = (code *)0x0;
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar7 = &UNK_110548748;
      func_0x000107c613fc(&UNK_110548748,0x18,7);
      func_0x000107c61614(puVar7 + 0x10);
      pcVar8 = FUN_10278d188;
    }
    FUN_10278b1dc(auStack_a0);
    puVar4 = puVar6;
    func_0x000107c4008c();
    func_0x000107c61180();
    puVar5 = puVar4;
    func_0x000107c3dc08();
    func_0x000107c61170();
    if ((int)puVar5 == 0) {
      uVar9 = 0;
    }
    else {
      func_0x0001038d1a88();
      uVar9 = *puVar4;
    }
    puVar4 = puVar6;
    func_0x000107c4008c();
    func_0x000107c61180();
    puVar5 = puVar4;
    func_0x000107c3dc10();
    func_0x000107c61170();
    if ((int)puVar5 != 0) {
      func_0x0001038d1a94();
      uVar9 = *puVar4 | uVar9;
    }
    if (uVar9 == 0) {
      func_0x0001038d1a7c();
      uVar9 = *puVar4;
    }
    puVar4 = puVar6;
    func_0x000107c4008c(puVar6);
    func_0x000107c61180();
    puVar5 = puVar4;
    func_0x000107c5aee0();
    func_0x000107c61170(puVar4);
    func_0x000107c4008c();
    func_0x000107c61180();
    func_0x000107c5b634();
    func_0x000107c61170();
    FUN_10278b5cc();
    func_0x0001038cfc00(auStack_2b8,auStack_170,auStack_118,auStack_c8,pcVar8,puVar7,auStack_a0,
                        uVar9,puVar5,puVar6 == (ulong *)0xf);
    auStack_2c8[0] = SUB81(puVar3,0);
    puStack_2c0 = puVar2;
    func_0x000100083b20(auStack_408);
    func_0x000107c610b4(auStack_408,auStack_2c8,0x13b);
    func_0x00010008a7c8(auStack_430,auStack_408);
    func_0x000107c61574(auStack_408[0]);
    func_0x000100083b20(auStack_408);
    func_0x000107c61574(auStack_430[0]);
    func_0x0001000a8868(auStack_408,uStack_3f0);
    (**(code **)(lStack_3e8 + 8))(uStack_3f0,lStack_3e8);
    func_0x000102789a90(auStack_2c8);
    func_0x0001027899b8(auStack_408,auStack_430);
    func_0x000107c61428(unaff_x20 + lVar1,auStack_448,0x21,0);
    func_0x0001027899fc(auStack_430,unaff_x20 + lVar1);
    func_0x000107c614a8(auStack_448);
    func_0x0001000834e4(auStack_408);
  }
  return;
}



/* Entry: 10278abc0; end: 10278ad4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10278abc0(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long unaff_x20;
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
  
  ppuVar8 = &puStack_b0;
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112ebdcc8);
  func_0x000107c5d17c();
  func_0x000107c61180();
  puVar3 = &UNK_1105487e0;
  func_0x000107c613fc(&UNK_1105487e0,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar2;
  puVar4 = &UNK_110548748;
  func_0x000107c613fc(&UNK_110548748,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  puVar5 = &UNK_110548808;
  func_0x000107c613fc(&UNK_110548808,0x20,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(undefined8 *)(puVar5 + 0x18) = uVar2;
  puVar6 = PTR_PTR_1126aeaf8;
  func_0x000107c610f8(PTR_PTR_1126aeaf8);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_60 = FUN_10278d508;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_100e1779c;
  puStack_68 = &UNK_110548820;
  ppuVar7 = &puStack_80;
  puStack_58 = puVar3;
  func_0x000107c60bc4(ppuVar7);
  uStack_90 = 0x10278d514;
  puStack_b0 = puVar1;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_100e17304;
  puStack_98 = &UNK_110548848;
  puStack_88 = puVar5;
  func_0x000107c60bc4(&puStack_b0);
  func_0x000107c615f0(uVar2);
  func_0x000107c6157c(puVar4);
  func_0x000107c47be0(puVar6);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61574(puStack_88);
  puVar3 = puStack_58;
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar3);
  return puVar6;
}



/* Entry: 10278ad50; end: 10278aebf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10278ad50(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  undefined1 uVar5;
  code *pcStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  code *pcStack_e0;
  undefined *puStack_d8;
  code *pcStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  lVar3 = *(long *)(unaff_x20 + _DAT_112ebdcc8);
  lVar1 = lVar3;
  func_0x000107c4008c();
  func_0x000107c61180();
  lVar4 = lVar1;
  func_0x000107c3dc00();
  func_0x000107c61170(lVar1);
  puVar2 = &UNK_110548748;
  func_0x000107c613fc(&UNK_110548748,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  if ((int)lVar4 == 0) {
    uVar5 = 0;
    pcStack_e0 = FUN_10278d364;
  }
  else {
    func_0x000107c4008c();
    func_0x000107c61180();
    lVar1 = lVar3;
    func_0x000107c4c888();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar1 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar1;
      func_0x000107c49820();
      func_0x000107c61170(lVar1);
    }
    uStack_98 = (ulong)(lVar1 == 0);
    pcStack_e0 = (code *)0x10278d36c;
    pcStack_d0 = FUN_10278d2a0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uVar5 = 1;
    uStack_b0 = 1;
    uStack_a0 = 0;
    uStack_90 = 0x10278d36c;
    pcStack_80 = FUN_10278d2a0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 1;
    uStack_50 = 0;
    puStack_d8 = puVar2;
    lStack_a8 = lVar4;
    puStack_88 = puVar2;
    lStack_58 = lVar4;
    uStack_48 = uStack_98;
    FUN_10278d374(&pcStack_e0,&pcStack_130);
    func_0x00010278d3b0(&uStack_90);
    uStack_128 = uStack_c8;
    pcStack_130 = pcStack_d0;
    uStack_118 = uStack_b8;
    uStack_120 = uStack_c0;
    lStack_108 = lStack_a8;
    uStack_110 = uStack_b0;
    uStack_f8 = uStack_98;
    uStack_100 = uStack_a0;
    puVar2 = puStack_d8;
  }
  *param_1 = pcStack_e0;
  param_1[1] = puVar2;
  param_1[3] = uStack_128;
  param_1[2] = pcStack_130;
  param_1[5] = uStack_118;
  param_1[4] = uStack_120;
  param_1[7] = lStack_108;
  param_1[6] = uStack_110;
  param_1[9] = uStack_f8;
  param_1[8] = uStack_100;
  *(undefined1 *)(param_1 + 10) = uVar5;
  return;
}



/* Entry: 10278aec0; end: 10278b097;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10278aec0(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  ulong uVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lStack_78;
  ulong uStack_70;
  long lStack_68;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112ebdcc8);
  func_0x000107c4008c();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5dd90();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    lVar7 = 0;
    param_3 = 0;
    lStack_68 = 0;
    lStack_78 = 0;
    lVar1 = 0;
    lVar6 = 0;
    bVar5 = false;
    uVar8 = 0;
    uVar4 = 0;
    uStack_70 = 0;
  }
  else {
    lVar1 = lVar2;
    func_0x000107c4c88c();
    func_0x000107c61180();
    if (lVar1 == 0) {
      lStack_68 = 0;
    }
    else {
      lStack_68 = lVar1;
      func_0x000107c49820();
      func_0x000107c61170(lVar1);
    }
    uStack_70 = (ulong)(lVar1 == 0);
    lVar1 = lVar2;
    func_0x000107c4c8a0();
    func_0x000107c61180();
    if (lVar1 == 0) {
      lStack_78 = 0;
    }
    else {
      lStack_78 = lVar1;
      func_0x000107c49820();
      func_0x000107c61170(lVar1);
    }
    uVar4 = (ulong)(lVar1 == 0);
    lVar6 = lVar2;
    func_0x000107c4c894();
    func_0x000107c61180();
    if (lVar6 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = lVar6;
      func_0x000107c49820();
      func_0x000107c61170(lVar6);
    }
    uVar8 = (ulong)(lVar6 == 0);
    lVar7 = lVar2;
    func_0x000107c415b0();
    func_0x000107c61180();
    bVar5 = lVar7 == 0;
    if (bVar5) {
      lVar6 = 0;
    }
    else {
      lVar6 = lVar7;
      func_0x000107c49820();
      func_0x000107c61170(lVar7);
    }
    lVar3 = lVar2;
    func_0x000107c5e110();
    func_0x000107c61180();
    lVar7 = lVar3;
    func_0x000107c5faec();
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar2);
  }
  *param_1 = lVar7;
  param_1[1] = param_3;
  param_1[2] = lStack_68;
  param_1[3] = uStack_70;
  param_1[4] = lStack_78;
  param_1[5] = uVar4;
  param_1[6] = lVar1;
  param_1[7] = uVar8;
  param_1[8] = lVar6;
  *(bool *)(param_1 + 9) = bVar5;
  return;
}



/* Entry: 10278b098; end: 10278b1db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10278b098(ulong *param_1,undefined8 param_2,ulong *param_3)

{
  ulong *puVar1;
  ulong uVar2;
  long unaff_x20;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  undefined1 uVar7;
  
  uVar5 = *(ulong *)(unaff_x20 + _DAT_112ebdcc8);
  uVar4 = uVar5;
  func_0x000107c4008c();
  func_0x000107c61180();
  uVar2 = uVar4;
  func_0x000107c5cab0();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  if (uVar2 == 0) {
    uVar4 = 0;
    puVar3 = (ulong *)0x0;
    puVar6 = param_3;
  }
  else {
    uVar4 = uVar2;
    func_0x000107c5faec();
    puVar6 = param_3;
    func_0x000107c61170(uVar2);
    puVar3 = param_3;
  }
  func_0x000107c4008c();
  func_0x000107c61180();
  uVar2 = uVar5;
  func_0x000107c5c38c();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  if (uVar2 == 0) {
    uVar5 = 0;
    puVar6 = (ulong *)0x0;
  }
  else {
    uVar5 = uVar2;
    func_0x000107c5faec();
    func_0x000107c61170(uVar2);
  }
  uVar2 = uVar4;
  func_0x00010278a568(uVar4,puVar3);
  if (((uVar2 & 1) == 0) || (uVar2 = uVar5, func_0x00010278a568(uVar5,puVar6), (uVar2 & 1) == 0)) {
    uVar7 = 2;
  }
  else {
    func_0x000107c6142c(puVar6);
    func_0x000107c6142c();
    func_0x0001038d1154();
    uVar4 = *puVar3;
    puVar1 = (ulong *)puVar3[1];
    uVar5 = puVar3[2];
    puVar6 = (ulong *)puVar3[3];
    uVar7 = (undefined1)puVar3[4];
    func_0x000107c61434(puVar6);
    func_0x000107c61434(puVar1);
    puVar3 = puVar1;
  }
  *param_1 = uVar4;
  param_1[1] = (ulong)puVar3;
  param_1[2] = uVar5;
  param_1[3] = (ulong)puVar6;
  *(undefined1 *)(param_1 + 4) = uVar7;
  return;
}



/* Entry: 10278b1dc; end: 10278b5cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10278b1dc(ulong *param_1,undefined8 param_2,ulong param_3)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  byte **ppbVar7;
  undefined *puVar8;
  long extraout_x8;
  long unaff_x20;
  byte *pbVar9;
  byte *pbVar10;
  byte **ppbVar11;
  undefined4 uVar12;
  byte *pbVar13;
  byte *pbVar14;
  ulong uVar15;
  uint uVar16;
  long lVar17;
  code *pcVar18;
  undefined1 *puVar19;
  undefined1 auStack_210 [8];
  byte *pbStack_208;
  byte **ppbStack_200;
  uint uStack_1f8;
  uint uStack_1f4;
  byte bStack_1c4;
  byte bStack_1ac;
  undefined1 auStack_1a8 [56];
  byte *pbStack_170;
  ulong uStack_168;
  byte *pbStack_160;
  byte **ppbStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  undefined4 uStack_140;
  byte *pbStack_130;
  byte **ppbStack_128;
  byte *pbStack_120;
  byte **ppbStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined1 uStack_100;
  byte bStack_ff;
  undefined1 uStack_fe;
  byte bStack_fd;
  byte *pbStack_f0;
  ulong uStack_e8;
  byte *pbStack_e0;
  byte **ppbStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  byte bStack_c0;
  byte bStack_bf;
  byte bStack_be;
  byte bStack_bd;
  byte *pbStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  byte bStack_88;
  byte bStack_87;
  byte bStack_86;
  byte bStack_85;
  byte *pbStack_80;
  ulong uStack_78;
  
  lVar3 = 0;
  func_0x000107c5eb9c();
  lVar17 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar17 + 0x40));
  puVar19 = auStack_210 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  pbVar13 = *(byte **)(unaff_x20 + _DAT_112ebdcc8);
  pbVar10 = pbVar13;
  func_0x000107c4008c();
  func_0x000107c61180();
  pbVar9 = pbVar10;
  func_0x000107c3cf90();
  func_0x000107c61180();
  func_0x000107c61170(pbVar10);
  if (pbVar9 == (byte *)0x0) {
    pbVar10 = pbVar13;
    func_0x000107c4008c();
    func_0x000107c61180();
    pbVar14 = pbVar10;
    func_0x000107c5c96c();
    func_0x000107c61180();
    func_0x000107c61170(pbVar10);
    if (pbVar14 == (byte *)0x0) {
      pbVar9 = (byte *)0x0;
      pbVar10 = (byte *)0x0;
      ppbVar11 = (byte **)0x0;
      pcVar18 = (code *)0x0;
      uVar12 = 0;
      uVar15 = 1;
      puVar6 = (undefined *)0x0;
      goto LAB_10278b59c;
    }
    func_0x000107c61170();
    pbVar10 = (byte *)0x0;
    param_3 = 0;
  }
  else {
    pbVar14 = pbVar9;
    func_0x000107c4f21c();
    func_0x000107c61180();
    pbVar10 = pbVar14;
    func_0x000107c5faec();
    func_0x000107c61170();
  }
  func_0x0001038cf614();
  bStack_c0 = *pbVar14;
  bStack_bf = pbVar14[1];
  bStack_be = pbVar14[2];
  bStack_bd = pbVar14[3];
  ppbStack_d8 = (byte **)0x0;
  pbStack_e0 = (byte *)0x0;
  puStack_c8 = (undefined *)0x0;
  pcStack_d0 = (code *)0x0;
  uStack_a0 = 0;
  uStack_a8 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  ppbVar7 = &pbStack_130;
  pbStack_f0 = pbVar10;
  uStack_e8 = param_3;
  pbStack_b8 = pbVar10;
  uStack_b0 = param_3;
  bStack_88 = bStack_c0;
  bStack_87 = bStack_bf;
  bStack_86 = bStack_be;
  bStack_85 = bStack_bd;
  FUN_10278d2a4(&pbStack_f0);
  func_0x00010278d2e0(&pbStack_b8);
  bStack_1c4 = bStack_bd;
  bStack_1ac = bStack_bf;
  puVar6 = puStack_c8;
  pcVar18 = pcStack_d0;
  ppbVar11 = ppbStack_d8;
  pbVar10 = pbStack_e0;
  uStack_78 = uStack_e8;
  pbStack_80 = pbStack_f0;
  uVar16 = (uint)bStack_c0;
  pbVar14 = (byte *)(ulong)bStack_be;
  func_0x000107c4008c();
  func_0x000107c61180();
  pbVar4 = pbVar13;
  func_0x000107c5c96c();
  func_0x000107c61180();
  func_0x000107c61170(pbVar13);
  if (pbVar4 == (byte *)0x0) {
  }
  else {
    pbVar13 = pbVar4;
    func_0x000107c4f3f0();
    uVar16 = (uint)pbVar13;
    pbVar13 = pbVar4;
    func_0x000107c416c4();
    bStack_1ac = (byte)pbVar13;
    pbVar14 = pbVar4;
    func_0x000107c5d044();
    pbVar13 = pbVar4;
    func_0x000107c3fc08();
    bStack_1c4 = (byte)pbVar13;
    func_0x000107c61170(pbVar4);
  }
  if (pbVar9 != (byte *)0x0) {
    pbVar13 = pbVar9;
    func_0x000107c5b0e0();
    func_0x000107c61180();
    if (pbVar13 == (byte *)0x0) {
      func_0x000107c61170(pbVar9);
    }
    else {
      uStack_1f8 = (uint)pbVar14;
      pbVar14 = pbVar13;
      uStack_1f4 = uVar16;
      func_0x000107c5faec();
      func_0x000107c61170(pbVar13);
      pbStack_208 = pbVar14;
      ppbStack_200 = ppbVar7;
      pbStack_130 = pbVar14;
      ppbStack_128 = ppbVar7;
      func_0x000107c5eb88(puVar19);
      func_0x000100e8b654();
      puVar5 = puVar19;
      puVar8 = PTR___sSSN_11034da80;
      func_0x000107c601f0(puVar19,PTR___sSSN_11034da80,pbVar13);
      func_0x000107c61170(pbVar9);
      (**(code **)(lVar17 + 8))(puVar19,lVar3);
      func_0x000107c6142c(puVar8);
      puVar2 = puStack_c8;
      pcVar1 = pcStack_d0;
      ppbVar7 = ppbStack_d8;
      pbVar9 = pbStack_e0;
      uVar15 = (ulong)puVar5 & 0xffffffffffff;
      if (((ulong)puVar8 & 0x2000000000000000) != 0) {
        uVar15 = (ulong)puVar8 >> 0x38 & 0xf;
      }
      if (uVar15 == 0) {
        func_0x000107c6142c(ppbStack_200);
      }
      else {
        puVar6 = &UNK_110548748;
        func_0x000107c613fc(&UNK_110548748,0x18,7);
        func_0x000107c61614(puVar6 + 0x10,unaff_x20);
        FUN_10278d334(pbVar9,ppbVar7,pcVar1,puVar2);
        pcVar18 = FUN_10278d314;
        ppbVar11 = ppbStack_200;
        pbVar10 = pbStack_208;
      }
      pbVar14 = (byte *)(ulong)uStack_1f8;
      uVar16 = uStack_1f4;
    }
  }
  uVar15 = uStack_78;
  pbVar9 = pbStack_80;
  uStack_168 = uStack_78;
  pbStack_170 = pbStack_80;
  uStack_100 = (undefined1)uVar16;
  bStack_ff = bStack_1ac;
  uStack_fe = SUB81(pbVar14,0);
  bStack_fd = bStack_1c4;
  uVar12 = CONCAT13(bStack_1c4,CONCAT12(uStack_fe,CONCAT11(bStack_1ac,uStack_100)));
  ppbStack_128 = (byte **)uStack_78;
  pbStack_130 = pbStack_80;
  pbStack_160 = pbVar10;
  ppbStack_158 = ppbVar11;
  pcStack_150 = pcVar18;
  puStack_148 = puVar6;
  uStack_140 = uVar12;
  pbStack_120 = pbVar10;
  ppbStack_118 = ppbVar11;
  pcStack_110 = pcVar18;
  puStack_108 = puVar6;
  FUN_10278d2a4(&pbStack_170,auStack_1a8);
  func_0x00010278d2e0(&pbStack_130);
LAB_10278b59c:
  *param_1 = (ulong)pbVar9;
  param_1[1] = uVar15;
  param_1[2] = (ulong)pbVar10;
  param_1[3] = (ulong)ppbVar11;
  param_1[4] = (ulong)pcVar18;
  param_1[5] = (ulong)puVar6;
  *(undefined4 *)(param_1 + 6) = uVar12;
  return;
}



/* Entry: 10278b5cc; end: 10278b7e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10278b5cc(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  long lVar7;
  
  lVar7 = *(long *)(unaff_x20 + _DAT_112ebdcc8);
  lVar2 = lVar7;
  func_0x000107c4008c();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5aecc();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar3 != 0) {
    lVar2 = lVar3;
    func_0x000107c5faec();
    func_0x000107c61170(lVar3);
    puVar4 = (undefined *)0x0;
    func_0x00010278edd8(0,1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
    uVar1 = *(ulong *)(puVar4 + 0x10);
    puVar6 = puVar4;
    if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
      puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
      func_0x00010278edd8(puVar6,uVar1 + 1,1,puVar4);
    }
    *(ulong *)(puVar6 + 0x10) = uVar1 + 1;
    *(long *)(puVar6 + uVar1 * 0x20 + 0x20) = lVar2;
    *(undefined8 *)(puVar6 + uVar1 * 0x20 + 0x28) = param_2;
    *(undefined8 *)(puVar6 + uVar1 * 0x20 + 0x30) = 0;
    *(undefined8 *)(puVar6 + uVar1 * 0x20 + 0x38) = 0;
  }
  lVar2 = lVar7;
  func_0x000107c4008c();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5ae58();
  func_0x000107c61170(lVar2);
  if ((int)lVar3 != 0) {
    puVar4 = puVar6;
    func_0x000107c61558();
    puVar5 = puVar6;
    if (((ulong)puVar4 & 1) == 0) {
      puVar5 = (undefined *)0x0;
      func_0x00010278edd8(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
    }
    uVar1 = *(ulong *)(puVar5 + 0x10);
    puVar6 = puVar5;
    if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
      puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
      func_0x00010278edd8(puVar6,uVar1 + 1,1,puVar5);
    }
    *(ulong *)(puVar6 + 0x10) = uVar1 + 1;
    *(undefined8 *)(puVar6 + uVar1 * 0x20 + 0x28) = 0;
    *(undefined8 *)(puVar6 + uVar1 * 0x20 + 0x20) = 0;
    *(undefined8 *)(puVar6 + uVar1 * 0x20 + 0x38) = 0;
    *(undefined8 *)(puVar6 + uVar1 * 0x20 + 0x30) = 0;
  }
  func_0x000107c4008c();
  func_0x000107c61180();
  lVar2 = lVar7;
  func_0x000107c5aee8();
  func_0x000107c61170(lVar7);
  if ((int)lVar2 != 0) {
    puVar4 = puVar6;
    func_0x000107c61558();
    puVar5 = puVar6;
    if (((ulong)puVar4 & 1) == 0) {
      puVar5 = (undefined *)0x0;
      func_0x00010278edd8(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
    }
    uVar1 = *(ulong *)(puVar5 + 0x10);
    puVar6 = puVar5;
    if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
      puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
      func_0x00010278edd8(puVar6,uVar1 + 1,1,puVar5);
    }
    *(ulong *)(puVar6 + 0x10) = uVar1 + 1;
    *(undefined8 *)(puVar6 + uVar1 * 0x20 + 0x28) = 1;
    *(undefined8 *)(puVar6 + uVar1 * 0x20 + 0x20) = 0;
    *(undefined8 *)(puVar6 + uVar1 * 0x20 + 0x30) = 0;
    *(undefined8 *)(puVar6 + uVar1 * 0x20 + 0x38) = 0;
  }
  return puVar6;
}



/* Entry: 10278b7e4; end: 10278b80b; -[_TtC39MemTwoPickerCompatibilityImplementation37MemTwoPickerCompatibilityWorkflowImpl begin] */

void FUN_10278b7e4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10278a8ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10278b80c; end: 10278b8d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10278b80c(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  *(undefined1 *)(unaff_x20 + _DAT_112ebdca8) = 1;
  lVar1 = unaff_x20 + _DAT_112ebdc98;
  func_0x000107c61428(lVar1,auStack_48,0,0);
  if (*(long *)(lVar1 + 0x18) != 0) {
    func_0x0001027899b8(lVar1,&uStack_70);
    func_0x0001000a8868(&uStack_70,uStack_58);
    (**(code **)(lStack_50 + 0x10))(uStack_58,lStack_50);
    func_0x0001000834e4(&uStack_70);
  }
  lStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  func_0x000107c61428(lVar1,auStack_88,0x21,0);
  func_0x0001027899fc(&uStack_70,lVar1);
  func_0x000107c614a8(auStack_88);
  return;
}



/* Entry: 10278b8d8; end: 10278b8ff; -[_TtC39MemTwoPickerCompatibilityImplementation37MemTwoPickerCompatibilityWorkflowImpl end] */

void FUN_10278b8d8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10278b80c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10278b900; end: 10278bbdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10278b900(code *param_1,undefined *param_2,long param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 == 0) {
    ppuVar1 = (undefined **)0x0;
    if (param_1 != (code *)0x0) {
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      puStack_78 = &UNK_1000b0c7c;
      puStack_70 = &UNK_110548870;
      ppuVar1 = &puStack_88;
      pcStack_68 = param_1;
      puStack_60 = param_2;
      func_0x000107c60bc4(ppuVar1);
      puVar2 = puStack_60;
      func_0x000107c6157c(param_2);
      func_0x000107c61574(puVar2);
    }
    func_0x000107c41864(param_4);
    func_0x000107c60bd0(ppuVar1);
  }
  else {
    if ((*(byte *)(param_3 + _DAT_112ebdca0) & 1) == 0) {
      *(undefined1 *)(param_3 + _DAT_112ebdca0) = 1;
      puVar2 = &UNK_110548748;
      func_0x000107c613fc(&UNK_110548748,0x18,7);
      func_0x000107c61614(puVar2 + 0x10,param_3);
      puVar3 = &UNK_1105488a8;
      func_0x000107c613fc(&UNK_1105488a8,0x28,7);
      *(undefined **)(puVar3 + 0x10) = puVar2;
      *(code **)(puVar3 + 0x18) = param_1;
      *(undefined **)(puVar3 + 0x20) = param_2;
      pcStack_68 = (code *)0x10278d538;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      puStack_78 = &UNK_1000b0c7c;
      puStack_70 = &UNK_1105488c0;
      ppuVar1 = &puStack_88;
      puStack_60 = puVar3;
      func_0x000107c60bc4(ppuVar1);
      puVar2 = puStack_60;
      func_0x000100b64c10(param_1,param_2);
      func_0x000107c61574(puVar2);
      func_0x000107c41864(param_4);
      func_0x000107c60bd0(ppuVar1);
    }
    else if (param_1 != (code *)0x0) {
      (*param_1)();
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 10278bbdc; end: 10278bcb3;  */

void FUN_10278bbdc(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    puVar1 = &UNK_110548790;
    func_0x000107c613fc(&UNK_110548790,0x20,7);
    *(long *)(puVar1 + 0x10) = param_2;
    *(undefined8 *)(puVar1 + 0x18) = param_1;
    func_0x000107c61174(param_2);
    func_0x000107c61434(param_1);
    uVar2 = 0xc1;
    func_0x0001001ca524(0xc1,0,0x48,4,0,0,&UNK_10dad8eb0,puVar1,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61170(param_2);
    func_0x000107c61574(puVar1);
    func_0x000107c61574(uVar2);
  }
  return;
}



/* Entry: 10278bcb4; end: 10278bd07;  */

void FUN_10278bcb4(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long unaff_x22;
  
  plVar1 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x10278d55c;
  plVar1[2] = param_3;
  plVar1[3] = param_2;
  lVar2 = 0;
  func_0x000107c5fcec();
  lVar3 = lVar2;
  func_0x000107c5fce8();
  plVar1[4] = lVar3;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar1[5] = lVar2;
  plVar1[6] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10278bd74,lVar2,lVar3);
  return;
}



/* Entry: 10278bd08; end: 10278bd73;  */

void FUN_10278bd08(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x28) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10278bd74,uVar1,uVar2);
  return;
}



/* Entry: 10278bd74; end: 10278be73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10278bd74(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)(*(long *)(unaff_x22 + 0x18) + _DAT_112ebdcc8);
  lVar2 = lVar5;
  func_0x000107c41084();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0x38) = lVar2;
  if (lVar2 == 0) {
    func_0x000107c41544();
    func_0x000107c61180();
    *(long *)(unaff_x22 + 0x48) = lVar5;
    if (lVar5 == 0) {
      func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010278be70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    plVar3 = (long *)0x80;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x50) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = 0x10278bef4;
    lVar2 = *(long *)(unaff_x22 + 0x10);
    lVar1 = *(long *)(unaff_x22 + 0x18);
    plVar3[8] = lVar5;
    plVar3[9] = lVar1;
    plVar3[7] = lVar2;
    lVar5 = 0;
    func_0x000107c5fcec();
    lVar2 = lVar5;
    func_0x000107c5fce8();
    plVar3[10] = lVar2;
    func_0x000100eea164();
    func_0x000107c5fca8();
    plVar3[0xb] = lVar5;
    plVar3[0xc] = lVar2;
    pcVar4 = FUN_10278ce6c;
  }
  else {
    plVar3 = (long *)0x80;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x40) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_10278be74;
    lVar5 = *(long *)(unaff_x22 + 0x10);
    lVar1 = *(long *)(unaff_x22 + 0x18);
    plVar3[8] = lVar2;
    plVar3[9] = lVar1;
    plVar3[7] = lVar5;
    lVar5 = 0;
    func_0x000107c5fcec();
    lVar2 = lVar5;
    func_0x000107c5fce8();
    plVar3[10] = lVar2;
    func_0x000100eea164();
    func_0x000107c5fca8();
    plVar3[0xb] = lVar5;
    plVar3[0xc] = lVar2;
    pcVar4 = FUN_10278cc24;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar4,lVar5,lVar2);
  return;
}



/* Entry: 10278be74; end: 10278bf73;  */

void FUN_10278be74(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (0x10278beb8,*(undefined8 *)(lVar1 + 0x28),*(undefined8 *)(lVar1 + 0x30));
  return;
}



/* Entry: 10278bf74; end: 10278c073;  */

void FUN_10278bf74(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_5 + 0x10,auStack_58,0,0);
  param_5 = param_5 + 0x10;
  func_0x000107c61618();
  if (param_5 != 0) {
    puVar1 = &UNK_1105487b8;
    func_0x000107c613fc(&UNK_1105487b8,0x38,7);
    *(long *)(puVar1 + 0x10) = param_5;
    *(undefined8 *)(puVar1 + 0x18) = param_1;
    *(undefined8 *)(puVar1 + 0x20) = param_2;
    puVar1[0x28] = param_3;
    *(undefined8 *)(puVar1 + 0x30) = param_4;
    func_0x000107c61174(param_5);
    func_0x000107c61434(param_2);
    func_0x000107c61434(param_4);
    uVar2 = 0xc1;
    func_0x0001001ca524(0xc1,0,0x48,4,0,0,&UNK_10dad8ee0,puVar1,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61170(param_5);
    func_0x000107c61574(puVar1);
    func_0x000107c61574(uVar2);
  }
  return;
}



/* Entry: 10278c074; end: 10278c0ef;  */

void FUN_10278c074(undefined8 param_1,long param_2,long param_3,long param_4,undefined1 param_5,
                  long param_6)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long unaff_x22;
  
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10278c0f0;
  plVar1[4] = param_6;
  plVar1[5] = param_2;
  *(undefined1 *)(plVar1 + 0xd) = param_5;
  plVar1[2] = param_3;
  plVar1[3] = param_4;
  lVar2 = 0;
  func_0x000107c5fcec();
  lVar3 = lVar2;
  func_0x000107c5fce8();
  plVar1[6] = lVar3;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar1[7] = lVar2;
  plVar1[8] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10278c1a0,lVar2,lVar3);
  return;
}



/* Entry: 10278c0f0; end: 10278c12b;  */

void FUN_10278c0f0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010278c128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10278c12c; end: 10278c19f;  */

void FUN_10278c12c(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_4;
  *(undefined8 *)(unaff_x22 + 0x28) = unaff_x20;
  *(undefined1 *)(unaff_x22 + 0x68) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x38) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10278c1a0,uVar1,uVar2);
  return;
}



/* Entry: 10278c1a0; end: 10278c2af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10278c1a0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 uVar4;
  long lVar5;
  long *plVar6;
  code *pcVar7;
  long lVar8;
  long unaff_x22;
  
  lVar8 = *(long *)(*(long *)(unaff_x22 + 0x28) + _DAT_112ebdcc8);
  lVar5 = lVar8;
  func_0x000107c41084();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0x48) = lVar5;
  if (lVar5 == 0) {
    func_0x000107c41544();
    func_0x000107c61180();
    *(long *)(unaff_x22 + 0x58) = lVar8;
    if (lVar8 == 0) {
      func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010278c2ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    plVar6 = (long *)0xa0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x60) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = 0x10278c330;
    lVar5 = *(long *)(unaff_x22 + 0x20);
    lVar2 = *(long *)(unaff_x22 + 0x28);
    lVar1 = *(long *)(unaff_x22 + 0x10);
    lVar3 = *(long *)(unaff_x22 + 0x18);
    uVar4 = *(undefined1 *)(unaff_x22 + 0x68);
    plVar6[10] = lVar8;
    plVar6[0xb] = lVar2;
    plVar6[8] = lVar3;
    plVar6[9] = lVar5;
    *(undefined1 *)(plVar6 + 0x12) = uVar4;
    plVar6[7] = lVar1;
    lVar8 = 0;
    func_0x000107c5fcec();
    lVar5 = lVar8;
    func_0x000107c5fce8();
    plVar6[0xc] = lVar5;
    func_0x000100eea164();
    func_0x000107c5fca8();
    plVar6[0xd] = lVar8;
    plVar6[0xe] = lVar5;
    pcVar7 = FUN_10278c870;
  }
  else {
    plVar6 = (long *)0xa0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x50) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_10278c2b0;
    lVar8 = *(long *)(unaff_x22 + 0x20);
    lVar2 = *(long *)(unaff_x22 + 0x28);
    lVar1 = *(long *)(unaff_x22 + 0x10);
    lVar3 = *(long *)(unaff_x22 + 0x18);
    uVar4 = *(undefined1 *)(unaff_x22 + 0x68);
    plVar6[10] = lVar5;
    plVar6[0xb] = lVar2;
    plVar6[8] = lVar3;
    plVar6[9] = lVar8;
    *(undefined1 *)(plVar6 + 0x12) = uVar4;
    plVar6[7] = lVar1;
    lVar8 = 0;
    func_0x000107c5fcec();
    lVar5 = lVar8;
    func_0x000107c5fce8();
    plVar6[0xc] = lVar5;
    func_0x000100eea164();
    func_0x000107c5fca8();
    plVar6[0xd] = lVar8;
    plVar6[0xe] = lVar5;
    pcVar7 = FUN_10278c580;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar7,lVar8,lVar5);
  return;
}



/* Entry: 10278c2b0; end: 10278c3af;  */

void FUN_10278c2b0(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (0x10278c2f4,*(undefined8 *)(lVar1 + 0x38),*(undefined8 *)(lVar1 + 0x40));
  return;
}



/* Entry: 10278c3b0; end: 10278c507;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10278c3b0(void)

{
  ulong uVar1;
  long unaff_x20;
  ulong uVar2;
  
  uVar2 = *(ulong *)(unaff_x20 + _DAT_112ebdcc8);
  uVar1 = uVar2;
  func_0x000107c41084();
  func_0x000107c61180();
  if (uVar1 == 0) {
    func_0x000107c41544();
    func_0x000107c61180();
    uVar1 = uVar2;
    if (uVar2 == 0) {
      return;
    }
  }
  uVar2 = uVar1;
  func_0x000107c61150();
  if ((uVar2 & 1) != 0) {
    func_0x000107c4db5c(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 10278c508; end: 10278c57f;  */

void FUN_10278c508(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_5;
  *(undefined8 *)(unaff_x22 + 0x58) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
  *(undefined8 *)(unaff_x22 + 0x48) = param_4;
  *(undefined1 *)(unaff_x22 + 0x90) = param_3;
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x60) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x68) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x70) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10278c580,uVar1,uVar2);
  return;
}



/* Entry: 10278c580; end: 10278c687;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10278c580(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 uVar6;
  long lVar7;
  long *plVar8;
  int *piVar9;
  long unaff_x22;
  undefined8 uVar10;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar6 = *(undefined1 *)(unaff_x22 + 0x90);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x000100083b20(unaff_x22 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar5 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar3);
  lVar7 = 0x112ebdcf8;
  func_0x0001000285a8(0x112ebdcf8,&UNK_10dad8f00);
  func_0x000107c613fc();
  *(long *)(unaff_x22 + 0x78) = lVar7;
  *(undefined8 *)(lVar7 + 0x18) = 2;
  *(undefined8 *)(lVar7 + 0x10) = 1;
  *(undefined8 *)(lVar7 + 0x20) = uVar10;
  *(undefined8 *)(lVar7 + 0x28) = uVar2;
  *(undefined1 *)(lVar7 + 0x30) = uVar6;
  *(undefined8 *)(lVar7 + 0x38) = uVar4;
  piVar9 = *(int **)(lVar5 + 8);
  iVar1 = *piVar9;
  plVar8 = (long *)(ulong)(uint)piVar9[1];
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x80) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_10278c688;
                    /* WARNING: Could not recover jumptable at 0x00010278c684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar9))(lVar7,uVar3,lVar5);
  return;
}



/* Entry: 10278c688; end: 10278c6db;  */

void FUN_10278c688(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x78);
  *(undefined8 *)(lVar2 + 0x88) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x80));
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_10278c6dc,*(undefined8 *)(lVar2 + 0x68),*(undefined8 *)(lVar2 + 0x70));
  return;
}



/* Entry: 10278c6dc; end: 10278c7f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10278c6dc(void)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x60));
  uVar2 = unaff_x22 + 0x10;
  func_0x0001000834e4();
  func_0x000107c5fd5c();
  if (((uVar2 & 1) == 0) && ((*(byte *)(*(long *)(unaff_x22 + 0x58) + _DAT_112ebdca8) & 1) == 0)) {
    uVar2 = *(ulong *)(unaff_x22 + 0x88);
    if ((*(byte *)(*(long *)(unaff_x22 + 0x58) + _DAT_112ebdca0) & 1) == 0) {
      if (uVar2 >> 0x3e == 0) {
        uVar4 = *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar4 = uVar2 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar2) {
          uVar4 = uVar2;
        }
        func_0x000107c60480();
      }
      if (uVar4 != 0) {
        if ((uVar2 & 0xc000000000000001) == 0) {
          if (*(long *)((uVar2 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10278c7f8);
            (*pcVar1)();
          }
          lVar5 = *(long *)(unaff_x22 + 0x88);
          uVar3 = *(undefined8 *)(lVar5 + 0x20);
          func_0x000107c61174(uVar3);
        }
        else {
          uVar3 = 0;
          func_0x000100fb0ef8(0,*(undefined8 *)(unaff_x22 + 0x88));
          lVar5 = *(long *)(unaff_x22 + 0x88);
        }
        uVar6 = *(undefined8 *)(unaff_x22 + 0x50);
        func_0x000107c6142c(lVar5);
        func_0x000107c4dc44(uVar6);
        func_0x000107c61170(uVar3);
        goto LAB_10278c728;
      }
      goto LAB_10278c720;
    }
  }
  else {
LAB_10278c720:
    uVar2 = *(ulong *)(unaff_x22 + 0x88);
  }
  func_0x000107c6142c(uVar2);
LAB_10278c728:
                    /* WARNING: Could not recover jumptable at 0x00010278c73c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10278c7f8; end: 10278c86f;  */

void FUN_10278c7f8(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_5;
  *(undefined8 *)(unaff_x22 + 0x58) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
  *(undefined8 *)(unaff_x22 + 0x48) = param_4;
  *(undefined1 *)(unaff_x22 + 0x90) = param_3;
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x60) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x68) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x70) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10278c870,uVar1,uVar2);
  return;
}



/* Entry: 10278c870; end: 10278c977;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10278c870(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 uVar6;
  long lVar7;
  long *plVar8;
  int *piVar9;
  long unaff_x22;
  undefined8 uVar10;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar6 = *(undefined1 *)(unaff_x22 + 0x90);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x000100083b20(unaff_x22 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar5 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar3);
  lVar7 = 0x112ebdcf8;
  func_0x0001000285a8(0x112ebdcf8,&UNK_10dad8f00);
  func_0x000107c613fc();
  *(long *)(unaff_x22 + 0x78) = lVar7;
  *(undefined8 *)(lVar7 + 0x18) = 2;
  *(undefined8 *)(lVar7 + 0x10) = 1;
  *(undefined8 *)(lVar7 + 0x20) = uVar10;
  *(undefined8 *)(lVar7 + 0x28) = uVar2;
  *(undefined1 *)(lVar7 + 0x30) = uVar6;
  *(undefined8 *)(lVar7 + 0x38) = uVar4;
  piVar9 = *(int **)(lVar5 + 8);
  iVar1 = *piVar9;
  plVar8 = (long *)(ulong)(uint)piVar9[1];
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x80) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_10278c978;
                    /* WARNING: Could not recover jumptable at 0x00010278c974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar9))(lVar7,uVar3,lVar5);
  return;
}



/* Entry: 10278c978; end: 10278c9cb;  */

void FUN_10278c978(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x78);
  *(undefined8 *)(lVar2 + 0x88) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x80));
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_10278c9cc,*(undefined8 *)(lVar2 + 0x68),*(undefined8 *)(lVar2 + 0x70));
  return;
}



/* Entry: 10278c9cc; end: 10278cbb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10278c9cc(void)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long unaff_x22;
  ulong uVar11;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x60));
  uVar2 = unaff_x22 + 0x10;
  func_0x0001000834e4();
  func_0x000107c5fd5c();
  if (((uVar2 & 1) == 0) && ((*(byte *)(*(long *)(unaff_x22 + 0x58) + _DAT_112ebdca8) & 1) == 0)) {
    uVar2 = *(ulong *)(unaff_x22 + 0x88);
    if ((*(byte *)(*(long *)(unaff_x22 + 0x58) + _DAT_112ebdca0) & 1) == 0) {
      if (uVar2 >> 0x3e == 0) {
        uVar7 = *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
        if (uVar7 == 0) goto LAB_10278cb58;
LAB_10278ca78:
        puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
        func_0x00010248094c(0,uVar7 & ((long)uVar7 >> 0x3f ^ 0xffffffffffffffffU),0);
        if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10278cbb4);
          (*pcVar1)();
        }
        uVar11 = 0;
        lVar6 = *(long *)(unaff_x22 + 0x88);
        do {
          if ((uVar2 & 0xc000000000000001) == 0) {
            uVar8 = *(ulong *)(lVar6 + 0x20 + uVar11 * 8);
            uVar3 = uVar8;
            func_0x000107c6157c();
          }
          else {
            uVar3 = uVar11;
            FUN_10278f4d8(uVar11,*(undefined8 *)(unaff_x22 + 0x88));
            uVar8 = uVar3;
          }
          func_0x00010488b12c();
          func_0x000107c61574(uVar8);
          uVar8 = *(ulong *)(puVar10 + 0x10);
          if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar8) {
            func_0x00010248094c(1 < *(ulong *)(puVar10 + 0x18),uVar8 + 1,1);
          }
          uVar11 = uVar11 + 1;
          *(ulong *)(puVar10 + 0x10) = uVar8 + 1;
          *(ulong *)(puVar10 + uVar8 * 8 + 0x20) = uVar3;
        } while (uVar7 != uVar11);
        func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x88));
      }
      else {
        uVar7 = uVar2 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar2) {
          uVar7 = uVar2;
        }
        func_0x000107c60480();
        if (uVar7 != 0) goto LAB_10278ca78;
LAB_10278cb58:
        func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x88));
        puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      uVar9 = *(undefined8 *)(unaff_x22 + 0x50);
      uVar4 = 0x112d74dc8;
      func_0x0001000285a8(0x112d74dc8,&UNK_10d9355f0);
      puVar5 = puVar10;
      func_0x000107c5fc48(puVar10,uVar4);
      func_0x000107c6142c(puVar10);
      func_0x000107c4cc20(uVar9);
      func_0x000107c61170(puVar5);
      goto LAB_10278ca24;
    }
  }
  else {
    uVar2 = *(ulong *)(unaff_x22 + 0x88);
  }
  func_0x000107c6142c(uVar2);
LAB_10278ca24:
                    /* WARNING: Could not recover jumptable at 0x00010278ca44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10278cbb4; end: 10278cc23;  */

void FUN_10278cbb4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
  *(undefined8 *)(unaff_x22 + 0x48) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x50) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x58) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10278cc24,uVar1,uVar2);
  return;
}



/* Entry: 10278cc24; end: 10278ccbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10278cc24(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  func_0x000100083b20(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
  piVar5 = *(int **)(lVar3 + 8);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x68) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10278ccbc;
                    /* WARNING: Could not recover jumptable at 0x00010278ccb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(*(undefined8 *)(unaff_x22 + 0x38),uVar2,lVar3);
  return;
}



/* Entry: 10278ccbc; end: 10278cd07;  */

void FUN_10278ccbc(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x70) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_10278cd08,*(undefined8 *)(lVar1 + 0x58),*(undefined8 *)(lVar1 + 0x60));
  return;
}


