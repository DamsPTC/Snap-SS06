/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10221102c; end: 10221108b;  */

long FUN_10221102c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10221108c; end: 1022110af;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_10221108c(ulong param_1,ulong param_2,char param_3)

{
  uint uVar1;
  
  if (param_3 == '\x03') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
    return;
  }
  if (param_3 != '\x02') {
    return;
  }
  uVar1 = (uint)(param_2 >> 0x3e);
  if (uVar1 == 1) {
    param_1 = param_2 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 1022110b0; end: 1022111a7;  */

undefined8 * FUN_1022110b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  uVar3 = param_2[2];
  func_0x000107c61434();
  func_0x000102210cbc(uVar3);
  param_1[2] = uVar3;
  uVar3 = param_2[3];
  uVar1 = param_2[4];
  uVar2 = *(undefined1 *)(param_2 + 5);
  FUN_1019aee74(uVar3,uVar1,uVar2);
  param_1[3] = uVar3;
  param_1[4] = uVar1;
  *(undefined1 *)(param_1 + 5) = uVar2;
  return param_1;
}



/* Entry: 1022111a8; end: 102211207;  */

undefined8 * FUN_1022111a8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = param_2[1];
  uVar4 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar4);
  FUN_1019aeed8(param_1[2]);
  uVar5 = param_2[4];
  uVar2 = *(undefined1 *)(param_2 + 5);
  uVar1 = param_1[3];
  uVar4 = param_1[4];
  uVar6 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar6;
  param_1[4] = uVar5;
  uVar3 = *(undefined1 *)(param_1 + 5);
  *(undefined1 *)(param_1 + 5) = uVar2;
  FUN_10221108c(uVar1,uVar4,uVar3);
  return param_1;
}



/* Entry: 102211208; end: 1022112c3;  */

int FUN_102211208(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x29) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1022112c4; end: 10221132b;  */

undefined8 * FUN_1022112c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  func_0x000102210cbc(uVar2);
  uVar1 = *param_1;
  *param_1 = uVar2;
  FUN_1019aeed8(uVar1);
  return param_1;
}



/* Entry: 10221132c; end: 10221144f;  */

int FUN_10221132c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7d < param_2) && ((char)param_1[2] != '\0')) {
    return *param_1 + 0x7e;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)param_1 >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x19 & 0x18 | (uint)*(undefined8 *)param_1 & 7) << 2) ^ 0x7f;
  if (0x7c < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 102211450; end: 1022114eb;  */

undefined8 * FUN_102211450(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_1019aee74(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 1022114ec; end: 10221152f;  */

undefined8 * FUN_1022114ec(undefined8 *param_1,undefined8 *param_2)

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
  FUN_10221108c(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 102211530; end: 102211627;  */

int FUN_102211530(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfb < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xfc;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 5) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 102211628; end: 1022116a7;  */

undefined8 * FUN_102211628(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1022116a8; end: 102211747;  */

int FUN_1022116a8(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102211748; end: 1022117d7;  */

undefined1  [16] FUN_102211748(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  func_0x000107c5fc74();
  uVar1 = 0x3f;
  FUN_1018cdfbc(0x3f,0xe100000000000000,param_1);
  uVar2 = 0x112d38270;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  uVar3 = uVar2;
  func_0x00010011d734();
  uVar4 = 0x202c;
  uVar5 = 0xe200000000000000;
  func_0x000107c5fa80(0x202c,0xe200000000000000,uVar2,uVar3);
  func_0x000107c6142c(uVar1);
  auVar6._8_8_ = uVar5;
  auVar6._0_8_ = uVar4;
  return auVar6;
}



/* Entry: 1022117d8; end: 102211833;  */

long FUN_1022117d8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 102211834; end: 102211923;  */

undefined8 * FUN_102211834(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  *(undefined2 *)(param_1 + 3) = *(undefined2 *)(param_2 + 3);
  uVar1 = param_2[4];
  uVar2 = param_2[5];
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  return param_1;
}



/* Entry: 102211924; end: 102211987;  */

undefined8 * FUN_102211924(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  *(undefined1 *)((long)param_1 + 0x19) = *(undefined1 *)((long)param_2 + 0x19);
  func_0x000107c6142c(param_1[4]);
  uVar2 = param_1[5];
  uVar1 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 102211988; end: 102211a3b;  */

int FUN_102211988(int *param_1,int param_2)

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



/* Entry: 102211a3c; end: 102211ad7;  */

undefined8 * FUN_102211a3c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_1019a9d7c(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 102211ad8; end: 102211b1b;  */

undefined8 * FUN_102211ad8(undefined8 *param_1,undefined8 *param_2)

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
  func_0x0001019a9dac(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 102211b1c; end: 102211ca7;  */

int FUN_102211b1c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfa < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xfb;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 6) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 102211ca8; end: 102211d53;  */

void FUN_102211ca8(void)

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



/* Entry: 102211d54; end: 102211d57;  */

void FUN_102211d54(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e659a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da70f68;
  func_0x000107c61520(&UNK_10da70f68,&UNK_1104e60b0);
  puRam0000000112e659a8 = puVar1;
  return;
}



/* Entry: 102211d58; end: 102211d97;  */

void FUN_102211d58(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e659a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da70f68;
  func_0x000107c61520(&UNK_10da70f68,&UNK_1104e60b0);
  puRam0000000112e659a8 = puVar1;
  return;
}



/* Entry: 102211d98; end: 102211f0b;  */

void FUN_102211d98(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 102211f0c; end: 102211fc3;  */

void FUN_102211f0c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  long lVar1;
  undefined8 uVar2;
  
  func_0x000107c5fb58(param_1,*unaff_x20,unaff_x20[1]);
  func_0x000107c5fb58(param_1,unaff_x20[2],unaff_x20[3]);
  func_0x000107c5fb58(param_1,unaff_x20[4],unaff_x20[5]);
  lVar1 = unaff_x20[7];
  if (lVar1 == 0) {
    func_0x000107c60694(0);
    lVar1 = unaff_x20[9];
  }
  else {
    uVar2 = unaff_x20[6];
    func_0x000107c60694(1);
    func_0x000107c5fb58(param_1,uVar2,lVar1);
    lVar1 = unaff_x20[9];
  }
  if (lVar1 == 0) {
    func_0x000107c60694(0);
  }
  else {
    uVar2 = unaff_x20[8];
    func_0x000107c60694(1);
    func_0x000107c5fb58(param_1,uVar2,lVar1);
  }
  func_0x000107c60694(*(byte *)(unaff_x20 + 10) & 1);
  return;
}



/* Entry: 102211fc4; end: 102211fcf;  */

void FUN_102211fc4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = unaff_x20[1];
  *param_1 = *unaff_x20;
  param_1[1] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)();
  return;
}



/* Entry: 102211fd0; end: 10221200b;  */

void FUN_102211fd0(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  FUN_102211f0c(auStack_68);
  func_0x000107c606a8();
  return;
}



/* Entry: 10221200c; end: 10221200f;  */

void FUN_10221200c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  long lVar1;
  undefined8 uVar2;
  
  func_0x000107c5fb58(param_1,*unaff_x20,unaff_x20[1]);
  func_0x000107c5fb58(param_1,unaff_x20[2],unaff_x20[3]);
  func_0x000107c5fb58(param_1,unaff_x20[4],unaff_x20[5]);
  lVar1 = unaff_x20[7];
  if (lVar1 == 0) {
    func_0x000107c60694(0);
    lVar1 = unaff_x20[9];
  }
  else {
    uVar2 = unaff_x20[6];
    func_0x000107c60694(1);
    func_0x000107c5fb58(param_1,uVar2,lVar1);
    lVar1 = unaff_x20[9];
  }
  if (lVar1 == 0) {
    func_0x000107c60694(0);
  }
  else {
    uVar2 = unaff_x20[8];
    func_0x000107c60694(1);
    func_0x000107c5fb58(param_1,uVar2,lVar1);
  }
  func_0x000107c60694(*(byte *)(unaff_x20 + 10) & 1);
  return;
}



/* Entry: 102212010; end: 102212047;  */

void FUN_102212010(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68);
  FUN_102211f0c(auStack_68);
  func_0x000107c606a8();
  return;
}



/* Entry: 102212048; end: 1022120af;  */

uint FUN_102212048(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined1 uStack_80;
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
  undefined1 uStack_20;
  
  uVar1 = 0;
  uStack_a8 = param_1[5];
  uStack_b0 = param_1[4];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  uStack_88 = param_1[9];
  uStack_90 = param_1[8];
  uStack_80 = *(undefined1 *)(param_1 + 10);
  uStack_c8 = param_1[1];
  uStack_d0 = *param_1;
  uStack_b8 = param_1[3];
  uStack_c0 = param_1[2];
  uStack_48 = param_2[5];
  uStack_50 = param_2[4];
  uStack_38 = param_2[7];
  uStack_40 = param_2[6];
  uStack_28 = param_2[9];
  uStack_30 = param_2[8];
  uStack_20 = *(undefined1 *)(param_2 + 10);
  uStack_68 = param_2[1];
  uStack_70 = *param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  FUN_102212dfc(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 1022120b0; end: 10221211b;  */

void FUN_1022120b0(undefined8 param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long unaff_x22;
  
  piVar3 = *(int **)(param_2 + 8);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xc0) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_10221211c;
                    /* WARNING: Could not recover jumptable at 0x000102212118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))(param_1,param_2);
  return;
}



/* Entry: 10221211c; end: 102212183;  */

void FUN_10221211c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar1 + 200) = param_1;
  *(long *)(lVar1 + 0xd0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xc0));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000102212160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102212184,0,0);
  return;
}



/* Entry: 102212184; end: 102212373;  */

void FUN_102212184(void)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long unaff_x22;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar6 = *(long *)(unaff_x22 + 200);
  lVar7 = *(long *)(lVar6 + 0x10);
  if (lVar7 == 0) {
    func_0x000107c6142c(lVar6);
    puVar5 = *(undefined **)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar4 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  else {
    FUN_102212c98(0,lVar7,0);
    puVar8 = (undefined8 *)(lVar6 + 0x20);
    while( true ) {
      lVar7 = lVar7 + -1;
      uVar9 = *puVar8;
      uVar11 = puVar8[3];
      uVar10 = puVar8[2];
      *(undefined8 *)(unaff_x22 + 0x18) = puVar8[1];
      *(undefined8 *)(unaff_x22 + 0x10) = uVar9;
      *(undefined8 *)(unaff_x22 + 0x28) = uVar11;
      *(undefined8 *)(unaff_x22 + 0x20) = uVar10;
      uVar10 = puVar8[5];
      uVar9 = puVar8[4];
      uVar12 = puVar8[7];
      uVar11 = puVar8[6];
      uVar14 = puVar8[9];
      uVar13 = puVar8[8];
      *(undefined1 *)(unaff_x22 + 0x60) = *(undefined1 *)(puVar8 + 10);
      *(undefined8 *)(unaff_x22 + 0x48) = uVar12;
      *(undefined8 *)(unaff_x22 + 0x40) = uVar11;
      *(undefined8 *)(unaff_x22 + 0x58) = uVar14;
      *(undefined8 *)(unaff_x22 + 0x50) = uVar13;
      *(undefined8 *)(unaff_x22 + 0x38) = uVar10;
      *(undefined8 *)(unaff_x22 + 0x30) = uVar9;
      uVar9 = *(undefined8 *)(unaff_x22 + 0x10);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x18);
      uStack_b8 = puVar8[1];
      puStack_c0 = (undefined *)*puVar8;
      uStack_a8 = puVar8[3];
      uStack_b0 = puVar8[2];
      uStack_98 = puVar8[5];
      uStack_a0 = puVar8[4];
      uStack_88 = puVar8[7];
      uStack_90 = puVar8[6];
      uStack_78 = puVar8[9];
      uStack_80 = puVar8[8];
      uStack_70 = *(undefined1 *)(puVar8 + 10);
      FUN_102212f14(unaff_x22 + 0x10,unaff_x22 + 0x68);
      uVar1 = *(ulong *)(puVar3 + 0x10);
      uVar2 = *(ulong *)(puVar3 + 0x18);
      func_0x000107c61434(uVar10);
      if (uVar2 >> 1 <= uVar1) {
        FUN_102212c98(1 < uVar2,uVar1 + 1,1);
      }
      *(ulong *)(puVar3 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puVar3 + uVar1 * 0x68 + 0x20) = uVar9;
      *(undefined8 *)(puVar3 + uVar1 * 0x68 + 0x28) = uVar10;
      *(undefined8 *)(puVar3 + uVar1 * 0x68 + 0x38) = uStack_b8;
      *(undefined **)(puVar3 + uVar1 * 0x68 + 0x30) = puStack_c0;
      *(undefined8 *)(puVar3 + uVar1 * 0x68 + 0x48) = uStack_a8;
      *(undefined8 *)(puVar3 + uVar1 * 0x68 + 0x40) = uStack_b0;
      puVar3[uVar1 * 0x68 + 0x80] = uStack_70;
      *(undefined8 *)(puVar3 + uVar1 * 0x68 + 0x68) = uStack_88;
      *(undefined8 *)(puVar3 + uVar1 * 0x68 + 0x60) = uStack_90;
      *(undefined8 *)(puVar3 + uVar1 * 0x68 + 0x78) = uStack_78;
      *(undefined8 *)(puVar3 + uVar1 * 0x68 + 0x70) = uStack_80;
      *(undefined8 *)(puVar3 + uVar1 * 0x68 + 0x58) = uStack_98;
      *(undefined8 *)(puVar3 + uVar1 * 0x68 + 0x50) = uStack_a0;
      if (lVar7 == 0) break;
      puVar8 = puVar8 + 0xb;
    }
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 200));
    puVar5 = *(undefined **)(puVar3 + 0x10);
    puVar4 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  PTR___swiftEmptyDictionarySingleton_11034f1d0 = puVar4;
  if (puVar5 != (undefined *)0x0) {
    uVar9 = 0x112e659b0;
    func_0x0001000285a8(0x112e659b0,&UNK_10da71030);
    func_0x000107c60498(puVar5,uVar9);
    puVar4 = puVar5;
  }
  lVar7 = *(long *)(unaff_x22 + 0xd0);
  puStack_c0 = puVar4;
  FUN_102212f24(puVar3,1,&puStack_c0);
  func_0x000107c6142c(puVar3);
  if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000102212370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puStack_c0);
  return;
}



/* Entry: 102212374; end: 1022123cf;  */

void FUN_102212374(undefined8 param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  int *piVar4;
  long unaff_x22;
  
  plVar3 = (long *)0xe0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1022123d0;
  piVar4 = *(int **)(param_2 + 8);
  iVar1 = *piVar4;
  plVar2 = (long *)(ulong)(uint)piVar4[1];
  func_0x000107c615b8();
  plVar3[0x18] = (long)plVar2;
  *plVar2 = (long)plVar3;
  plVar2[1] = (long)FUN_10221211c;
                    /* WARNING: Could not recover jumptable at 0x000102212118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar4))(param_1,param_2);
  return;
}



/* Entry: 1022123d0; end: 10221243f;  */

void FUN_1022123d0(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x10));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x18) = param_1;
    pcVar1 = FUN_102212440;
  }
  else {
    func_0x000107c614ac();
    pcVar1 = FUN_1022125bc;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102212440; end: 1022125bb;  */

void FUN_102212440(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long unaff_x22;
  long lVar14;
  ulong uVar15;
  
  lVar13 = *(long *)(unaff_x22 + 0x18);
  func_0x0001000285a8(0x112d38330,&UNK_10d91d920);
  lVar7 = lVar13;
  func_0x000107c6048c();
  lVar14 = 0;
  uVar10 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar15 = uVar15 & *(ulong *)(lVar13 + 0x40);
  if (uVar15 == 0) goto LAB_1022124e4;
  do {
    uVar8 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
    uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
    uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
    uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
    uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
    uVar15 = uVar15 - 1 & uVar15;
    while( true ) {
      uVar8 = LZCOUNT(uVar8);
      uVar9 = uVar8 | lVar14 << 6;
      lVar11 = uVar9 * 0x10;
      puVar1 = (undefined8 *)(*(long *)(lVar13 + 0x30) + lVar11);
      lVar12 = *(long *)(lVar13 + 0x38) + uVar9 * 0x58;
      uVar2 = *(undefined8 *)(lVar12 + 0x10);
      uVar4 = *(undefined8 *)(lVar12 + 0x18);
      uVar3 = *puVar1;
      uVar5 = puVar1[1];
      uVar9 = (uVar8 & 0xffffffffffffffc0 | lVar14 << 6) >> 3;
      *(ulong *)(lVar7 + 0x40 + uVar9) = *(ulong *)(lVar7 + 0x40 + uVar9) | 1L << (uVar8 & 0x3f);
      puVar1 = (undefined8 *)(*(long *)(lVar7 + 0x30) + lVar11);
      *puVar1 = uVar3;
      puVar1[1] = uVar5;
      puVar1 = (undefined8 *)(*(long *)(lVar7 + 0x38) + lVar11);
      *puVar1 = uVar2;
      puVar1[1] = uVar4;
      if (SCARRY8(*(long *)(lVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1022125bc);
        (*pcVar6)();
      }
      *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
      func_0x000107c61434();
      func_0x000107c61434(uVar5);
      if (uVar15 != 0) break;
LAB_1022124e4:
      do {
        lVar11 = lVar14 + 1;
        if (SCARRY8(lVar14,1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1022125b8);
          (*pcVar6)();
        }
        if ((long)(uVar10 + 0x3f >> 6) <= lVar11) {
          func_0x000107c6142c(lVar13);
                    /* WARNING: Could not recover jumptable at 0x0001022125b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(unaff_x22 + 8))(lVar7);
          return;
        }
        uVar15 = ((ulong *)(lVar13 + 0x40))[lVar11];
        lVar14 = lVar14 + 1;
      } while (uVar15 == 0);
      uVar8 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar14 = lVar11;
    }
  } while( true );
}



/* Entry: 1022125bc; end: 10221274b;  */

void FUN_1022125bc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long unaff_x22;
  long lVar13;
  ulong uVar14;
  
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_1022131a0();
  func_0x0001000285a8(0x112d38330,&UNK_10d91d920);
  puVar7 = puVar6;
  func_0x000107c6048c();
  lVar13 = 0;
  uVar10 = 1L << ((ulong)(byte)puVar6[0x20] & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if ((puVar6[0x20] & 0x3f) < 6) {
    uVar14 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar14 = uVar14 & *(ulong *)(puVar6 + 0x40);
  if (uVar14 == 0) goto LAB_102212674;
  do {
    uVar8 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
    uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
    uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
    uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
    uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
    uVar14 = uVar14 - 1 & uVar14;
    while( true ) {
      uVar8 = LZCOUNT(uVar8);
      uVar9 = uVar8 | lVar13 << 6;
      lVar11 = uVar9 * 0x10;
      lVar12 = *(long *)(puVar6 + 0x38) + uVar9 * 0x58;
      uVar1 = *(undefined8 *)(lVar12 + 0x10);
      uVar3 = *(undefined8 *)(lVar12 + 0x18);
      uVar2 = *(undefined8 *)(*(long *)(puVar6 + 0x30) + lVar11);
      uVar4 = ((undefined8 *)(*(long *)(puVar6 + 0x30) + lVar11))[1];
      uVar9 = (uVar8 & 0xffffffffffffffc0 | lVar13 << 6) >> 3;
      *(ulong *)(puVar7 + uVar9 + 0x40) = *(ulong *)(puVar7 + uVar9 + 0x40) | 1L << (uVar8 & 0x3f);
      lVar12 = *(long *)(puVar7 + 0x30);
      *(undefined8 *)(lVar12 + lVar11) = uVar2;
      ((undefined8 *)(lVar12 + lVar11))[1] = uVar4;
      lVar12 = *(long *)(puVar7 + 0x38);
      *(undefined8 *)(lVar12 + lVar11) = uVar1;
      ((undefined8 *)(lVar12 + lVar11))[1] = uVar3;
      if (SCARRY8(*(long *)(puVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10221274c);
        (*pcVar5)();
      }
      *(long *)(puVar7 + 0x10) = *(long *)(puVar7 + 0x10) + 1;
      func_0x000107c61434();
      func_0x000107c61434(uVar4);
      if (uVar14 != 0) break;
LAB_102212674:
      do {
        lVar12 = lVar13 + 1;
        if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x102212748);
          (*pcVar5)();
        }
        if ((long)(uVar10 + 0x3f >> 6) <= lVar12) {
          func_0x000107c6142c(puVar6);
                    /* WARNING: Could not recover jumptable at 0x000102212740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(unaff_x22 + 8))(puVar7);
          return;
        }
        uVar14 = *(ulong *)((long)(puVar6 + 0x40) + lVar12 * 8);
        lVar13 = lVar13 + 1;
      } while (uVar14 == 0);
      uVar8 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar14 = uVar14 - 1 & uVar14;
      lVar13 = lVar12;
    }
  } while( true );
}



/* Entry: 10221274c; end: 102212c97;  */

void FUN_10221274c(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *unaff_x20;
  long lVar12;
  long lVar13;
  undefined1 auStack_118 [88];
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
  undefined1 uStack_70;
  
  func_0x0001000285a8(0x112e659b0,&UNK_10da71030);
  lVar12 = *unaff_x20;
  lVar6 = lVar12;
  func_0x000107c6048c();
  if (*(long *)(lVar12 + 0x10) != 0) {
    lVar1 = lVar12 + 0x40;
    uVar7 = (1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar6 != lVar12 || lVar1 + uVar7 * 8 <= lVar6 + 0x40U) {
      func_0x000107c610b8(lVar6 + 0x40U,lVar1,uVar7 << 3);
    }
    lVar13 = 0;
    *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(lVar12 + 0x10);
    uVar8 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
    uVar7 = 0xffffffffffffffff;
    if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
      uVar7 = ~(-1L << (uVar8 & 0x3f));
    }
    uVar7 = uVar7 & *(ulong *)(lVar12 + 0x40);
    if (uVar7 == 0) goto LAB_102212838;
    do {
      uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar7 = uVar7 - 1 & uVar7;
      while( true ) {
        uVar9 = LZCOUNT(uVar9) | lVar13 << 6;
        lVar11 = uVar9 * 0x10;
        puVar2 = (undefined8 *)(*(long *)(lVar12 + 0x30) + lVar11);
        uVar4 = puVar2[1];
        lVar10 = uVar9 * 0x58;
        puVar3 = (undefined8 *)(*(long *)(lVar12 + 0x38) + lVar10);
        uStack_98 = puVar3[5];
        uStack_a0 = puVar3[4];
        uStack_88 = puVar3[7];
        uStack_90 = puVar3[6];
        uStack_78 = puVar3[9];
        uStack_80 = puVar3[8];
        uStack_70 = *(undefined1 *)(puVar3 + 10);
        uStack_b8 = puVar3[1];
        uStack_c0 = *puVar3;
        uStack_a8 = puVar3[3];
        uStack_b0 = puVar3[2];
        puVar3 = (undefined8 *)(*(long *)(lVar6 + 0x30) + lVar11);
        *puVar3 = *puVar2;
        puVar3[1] = uVar4;
        puVar2 = (undefined8 *)(*(long *)(lVar6 + 0x38) + lVar10);
        puVar2[1] = uStack_b8;
        *puVar2 = uStack_c0;
        puVar2[3] = uStack_a8;
        puVar2[2] = uStack_b0;
        *(undefined1 *)(puVar2 + 10) = uStack_70;
        puVar2[7] = uStack_88;
        puVar2[6] = uStack_90;
        puVar2[9] = uStack_78;
        puVar2[8] = uStack_80;
        puVar2[5] = uStack_98;
        puVar2[4] = uStack_a0;
        func_0x000107c61434();
        FUN_102212f14(&uStack_c0,auStack_118);
        if (uVar7 != 0) break;
LAB_102212838:
        do {
          lVar10 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10221291c);
            (*pcVar5)();
          }
          if ((long)(uVar8 + 0x3f >> 6) <= lVar10) goto LAB_1022128ec;
          uVar7 = *(ulong *)(lVar1 + lVar10 * 8);
          lVar13 = lVar13 + 1;
        } while (uVar7 == 0);
        uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
        uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
        uVar7 = uVar7 - 1 & uVar7;
        lVar13 = lVar10;
      }
    } while( true );
  }
LAB_1022128ec:
  func_0x000107c61574(lVar12);
  *unaff_x20 = lVar6;
  return;
}



/* Entry: 102212c98; end: 102212cb3;  */

void FUN_102212c98(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_102212cb4();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 102212cb4; end: 102212dfb;  */

undefined * FUN_102212cb4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102212dfc);
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
    puVar3 = (undefined *)0x112e659c8;
    func_0x0001000285a8(0x112e659c8,&UNK_10da71100);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x68) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112e659c0;
    func_0x0001000285a8(0x112e659c0,&UNK_10da710f8);
    func_0x000107c6140c(puVar4,puVar1,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x68 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 102212dfc; end: 102212f13;  */

byte FUN_102212dfc(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  
  uVar1 = *param_1;
  if (((uVar1 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar1 & 1) != 0))
     && ((uVar1 = param_1[2], uVar1 == param_2[2] && param_1[3] == param_2[3] ||
         (func_0x000107c605b8(), (uVar1 & 1) != 0)))) {
    uVar1 = param_1[4];
    if (((uVar1 == param_2[4]) && (param_1[5] == param_2[5])) ||
       (func_0x000107c605b8(), (uVar1 & 1) != 0)) {
      uVar1 = param_2[7];
      if (param_1[7] == 0) {
        if (uVar1 == 0) goto LAB_102212eb4;
      }
      else if ((uVar1 != 0) &&
              (((uVar2 = param_1[6], uVar2 == param_2[6] && (param_1[7] == uVar1)) ||
               (func_0x000107c605b8(), (uVar2 & 1) != 0)))) {
LAB_102212eb4:
        uVar1 = param_2[9];
        if (param_1[9] == 0) {
          if (uVar1 == 0) goto LAB_102212ee8;
        }
        else if ((uVar1 != 0) &&
                (((uVar2 = param_1[8], uVar2 == param_2[8] && (param_1[9] == uVar1)) ||
                 (func_0x000107c605b8(), (uVar2 & 1) != 0)))) {
LAB_102212ee8:
          bVar3 = (byte)param_1[10] ^ (byte)param_2[10] ^ 1;
          goto LAB_102212f04;
        }
      }
    }
  }
  bVar3 = 0;
LAB_102212f04:
  return bVar3 & 1;
}



/* Entry: 102212f14; end: 102212f23;  */

undefined8 * FUN_102212f14(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  uVar1 = param_1[3];
  param_2[2] = param_1[2];
  param_2[3] = uVar1;
  uVar2 = param_1[5];
  param_2[4] = param_1[4];
  param_2[5] = uVar2;
  uVar3 = param_1[7];
  param_2[6] = param_1[6];
  param_2[7] = uVar3;
  uVar4 = param_1[9];
  param_2[8] = param_1[8];
  param_2[9] = uVar4;
  *(undefined1 *)(param_2 + 10) = *(undefined1 *)(param_1 + 10);
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  return param_2;
}



/* Entry: 102212f24; end: 10221319f;  */

void FUN_102212f24(long param_1,uint param_2,long *param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 uStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 uStack_f0;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  undefined1 uStack_70;
  
  lVar10 = *(long *)(param_1 + 0x10);
  if (lVar10 != 0) {
    puVar11 = (ulong *)(param_1 + 0x20);
    do {
      uVar20 = puVar11[9];
      uVar17 = puVar11[8];
      uVar14 = puVar11[0xb];
      uVar6 = puVar11[10];
      uVar21 = puVar11[5];
      uVar18 = puVar11[4];
      uVar15 = puVar11[7];
      uVar12 = puVar11[6];
      uVar22 = puVar11[1];
      uVar19 = *puVar11;
      uVar16 = puVar11[3];
      uVar13 = puVar11[2];
      uVar3 = puVar11[0xc];
      uStack_d0 = uVar19;
      uStack_c8 = uVar22;
      uStack_c0 = uVar13;
      uStack_b8 = uVar16;
      uStack_b0 = uVar18;
      uStack_a8 = uVar21;
      uStack_a0 = uVar12;
      uStack_98 = uVar15;
      uStack_90 = uVar17;
      uStack_88 = uVar20;
      uStack_80 = uVar6;
      uStack_78 = uVar14;
      uStack_70 = (char)uVar3;
      FUN_102213678(&uStack_d0,&uStack_140);
      if (uVar22 == 0) {
        return;
      }
      uStack_80 = CONCAT71(uStack_80._1_7_,(char)uVar3);
      lVar9 = *param_3;
      uVar3 = uVar19;
      uVar4 = uVar22;
      uStack_d0 = uVar13;
      uStack_c8 = uVar16;
      uStack_c0 = uVar18;
      uStack_b8 = uVar21;
      uStack_b0 = uVar12;
      uStack_a8 = uVar15;
      uStack_a0 = uVar17;
      uStack_98 = uVar20;
      uStack_90 = uVar6;
      uStack_88 = uVar14;
      func_0x000100029284();
      lVar5 = *(long *)(lVar9 + 0x10);
      uVar6 = (ulong)~(uint)uVar4 & 1;
      lVar8 = lVar5 + uVar6;
      if (SCARRY8(lVar5,uVar6)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10221318c);
        (*pcVar2)();
      }
      if (*(long *)(lVar9 + 0x18) < lVar8) {
        func_0x00010221291c(lVar8,param_2 & 1);
        uVar3 = uVar19;
        uVar6 = uVar22;
        func_0x000100029284();
        if (((uint)uVar4 & 1) != ((uint)uVar6 & 1)) {
          func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1022131a0);
          (*pcVar2)();
        }
LAB_1022130dc:
        if ((uVar4 & 1) == 0) goto LAB_1022130e0;
LAB_102212f60:
        lVar8 = *param_3;
        puVar1 = (undefined8 *)(*(long *)(lVar8 + 0x38) + uVar3 * 0x58);
        uStack_198 = puVar1[1];
        uStack_1a0 = *puVar1;
        uStack_188 = puVar1[3];
        uStack_190 = puVar1[2];
        uStack_168 = puVar1[7];
        uStack_170 = puVar1[6];
        uStack_158 = puVar1[9];
        uStack_160 = puVar1[8];
        uStack_150 = *(undefined1 *)(puVar1 + 10);
        uStack_178 = puVar1[5];
        uStack_180 = puVar1[4];
        FUN_102212f14(&uStack_1a0,&uStack_140);
        func_0x000107c6142c(uVar22);
        func_0x0001022136c8(&uStack_d0);
        puVar1 = (undefined8 *)(*(long *)(lVar8 + 0x38) + uVar3 * 0x58);
        uStack_118 = puVar1[5];
        uStack_120 = puVar1[4];
        uStack_108 = puVar1[7];
        uStack_110 = puVar1[6];
        uStack_f8 = puVar1[9];
        uStack_100 = puVar1[8];
        uStack_f0 = *(undefined1 *)(puVar1 + 10);
        uStack_138 = puVar1[1];
        uStack_140 = *puVar1;
        uStack_128 = puVar1[3];
        uStack_130 = puVar1[2];
        *(undefined1 *)(puVar1 + 10) = uStack_150;
        puVar1[7] = uStack_168;
        puVar1[6] = uStack_170;
        puVar1[9] = uStack_158;
        puVar1[8] = uStack_160;
        puVar1[5] = uStack_178;
        puVar1[4] = uStack_180;
        puVar1[1] = uStack_198;
        *puVar1 = uStack_1a0;
        puVar1[3] = uStack_188;
        puVar1[2] = uStack_190;
        func_0x0001022136c8(&uStack_140);
      }
      else {
        if ((param_2 & 1) != 0) goto LAB_1022130dc;
        func_0x00010221274c();
        if ((uVar4 & 1) != 0) goto LAB_102212f60;
LAB_1022130e0:
        lVar5 = *param_3;
        lVar8 = lVar5 + (uVar3 >> 6) * 8;
        *(ulong *)(lVar8 + 0x40) = *(ulong *)(lVar8 + 0x40) | 1L << (uVar3 & 0x3f);
        puVar7 = (ulong *)(*(long *)(lVar5 + 0x30) + uVar3 * 0x10);
        *puVar7 = uVar19;
        puVar7[1] = uVar22;
        puVar7 = (ulong *)(*(long *)(lVar5 + 0x38) + uVar3 * 0x58);
        puVar7[1] = uStack_c8;
        *puVar7 = uStack_d0;
        puVar7[3] = uStack_b8;
        puVar7[2] = uStack_c0;
        *(undefined1 *)(puVar7 + 10) = (undefined1)uStack_80;
        puVar7[7] = uStack_98;
        puVar7[6] = uStack_a0;
        puVar7[9] = uStack_88;
        puVar7[8] = uStack_90;
        puVar7[5] = uStack_a8;
        puVar7[4] = uStack_b0;
        if (SCARRY8(*(long *)(lVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102213190);
          (*pcVar2)();
        }
        *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
      }
      puVar11 = puVar11 + 0xd;
      param_2 = 1;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}



/* Entry: 1022131a0; end: 102213337;  */

undefined * FUN_1022131a0(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auStack_148 [104];
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined1 uStack_80;
  
  puVar7 = *(undefined **)(param_1 + 0x10);
  if (puVar7 == (undefined *)0x0) {
    return PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  func_0x0001000285a8(0x112e659b0,&UNK_10da71030);
  puVar2 = puVar7;
  func_0x000107c60498();
  func_0x000107c6157c();
  uStack_98 = *(ulong *)(param_1 + 0x68);
  uStack_a0 = *(ulong *)(param_1 + 0x60);
  uStack_88 = *(ulong *)(param_1 + 0x78);
  uStack_90 = *(ulong *)(param_1 + 0x70);
  uStack_80 = *(undefined1 *)(param_1 + 0x80);
  uVar9 = *(ulong *)(param_1 + 0x28);
  uVar8 = *(ulong *)(param_1 + 0x20);
  uStack_c8 = *(ulong *)(param_1 + 0x38);
  uStack_d0 = *(ulong *)(param_1 + 0x30);
  uStack_b8 = *(ulong *)(param_1 + 0x48);
  uStack_c0 = *(ulong *)(param_1 + 0x40);
  uStack_a8 = *(ulong *)(param_1 + 0x58);
  uStack_b0 = *(ulong *)(param_1 + 0x50);
  uStack_e0 = uVar8;
  uStack_d8 = uVar9;
  FUN_102213678(&uStack_e0,auStack_148);
  uVar3 = uVar8;
  uVar5 = uVar9;
  func_0x000100029284();
  if ((uVar5 & 1) == 0) {
    puVar4 = (ulong *)(param_1 + 0x88);
    do {
      uVar5 = uVar3 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar2 + uVar5 + 0x40) = *(ulong *)(puVar2 + uVar5 + 0x40) | 1L << (uVar3 & 0x3f);
      puVar6 = (ulong *)(*(long *)(puVar2 + 0x30) + uVar3 * 0x10);
      *puVar6 = uVar8;
      puVar6[1] = uVar9;
      puVar6 = (ulong *)(*(long *)(puVar2 + 0x38) + uVar3 * 0x58);
      puVar6[1] = uStack_c8;
      *puVar6 = uStack_d0;
      puVar6[3] = uStack_b8;
      puVar6[2] = uStack_c0;
      *(undefined1 *)(puVar6 + 10) = uStack_80;
      puVar6[7] = uStack_98;
      puVar6[6] = uStack_a0;
      puVar6[9] = uStack_88;
      puVar6[8] = uStack_90;
      puVar6[5] = uStack_a8;
      puVar6[4] = uStack_b0;
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102213338);
        (*pcVar1)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
      puVar7 = puVar7 + -1;
      if (puVar7 == (undefined *)0x0) {
        func_0x000107c61574(puVar2);
        return puVar2;
      }
      uStack_98 = puVar4[9];
      uStack_a0 = puVar4[8];
      uStack_88 = puVar4[0xb];
      uStack_90 = puVar4[10];
      uStack_80 = (undefined1)puVar4[0xc];
      uVar9 = puVar4[1];
      uVar8 = *puVar4;
      uStack_c8 = puVar4[3];
      uStack_d0 = puVar4[2];
      uStack_b8 = puVar4[5];
      uStack_c0 = puVar4[4];
      uStack_a8 = puVar4[7];
      uStack_b0 = puVar4[6];
      uStack_e0 = uVar8;
      uStack_d8 = uVar9;
      FUN_102213678(&uStack_e0,auStack_148);
      uVar3 = uVar8;
      uVar5 = uVar9;
      func_0x000100029284();
      puVar4 = puVar4 + 0xd;
    } while ((uVar5 & 1) == 0);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1022132fc);
  (*pcVar1)();
}



/* Entry: 102213338; end: 102213347;  */

undefined * FUN_102213338(void)

{
  return PTR___sSSSHsWP_11034da90;
}



/* Entry: 102213348; end: 102213387;  */

void FUN_102213348(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e659b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da710b0;
  func_0x000107c61520(&UNK_10da710b0,&UNK_1104e6190);
  puRam0000000112e659b8 = puVar1;
  return;
}



/* Entry: 102213388; end: 1022133f3;  */

long FUN_102213388(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1022133f4; end: 102213477;  */

undefined8 * FUN_1022133f4(undefined8 *param_1,undefined8 *param_2)

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
  uVar4 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar4;
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  return param_1;
}



/* Entry: 102213478; end: 10221354b;  */

undefined8 * FUN_102213478(undefined8 *param_1,undefined8 *param_2)

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
  param_1[8] = param_2[8];
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  return param_1;
}



/* Entry: 10221354c; end: 1022135c7;  */

undefined8 * FUN_10221354c(undefined8 *param_1,undefined8 *param_2)

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
  uVar1 = param_2[7];
  uVar2 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[9];
  uVar2 = param_1[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  func_0x000107c6142c(uVar2);
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  return param_1;
}



/* Entry: 1022135c8; end: 102213677;  */

int FUN_1022135c8(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x51) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102213678; end: 1022136eb;  */

undefined8 FUN_102213678(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112e659c0;
  func_0x0001000285a8(0x112e659c0,&UNK_10da710f8);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1022136ec; end: 102217f8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1022136ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
             undefined8 param_69,undefined8 param_70)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
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
  undefined8 in_stack_00000748;
  undefined8 in_stack_00000750;
  undefined8 in_stack_00000758;
  undefined8 in_stack_00000760;
  undefined8 in_stack_00000768;
  undefined8 in_stack_00000770;
  undefined8 in_stack_00000778;
  undefined8 in_stack_00000780;
  undefined8 in_stack_00000788;
  undefined8 in_stack_00000790;
  undefined8 in_stack_00000798;
  undefined8 in_stack_000007a0;
  undefined8 in_stack_000007a8;
  undefined8 in_stack_000007b0;
  undefined8 in_stack_000007b8;
  undefined8 in_stack_000007c0;
  undefined8 in_stack_000007c8;
  undefined8 in_stack_000007d0;
  undefined8 in_stack_000007d8;
  undefined8 in_stack_000007e0;
  undefined8 in_stack_000007e8;
  undefined8 in_stack_000007f0;
  undefined8 in_stack_000007f8;
  undefined8 in_stack_00000800;
  undefined8 in_stack_00000808;
  undefined8 in_stack_00000810;
  undefined8 in_stack_00000818;
  undefined8 in_stack_00000820;
  undefined8 in_stack_00000828;
  undefined8 in_stack_00000830;
  undefined8 in_stack_00000838;
  undefined8 in_stack_00000840;
  undefined8 in_stack_00000848;
  undefined1 auStack_88 [16];
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  func_0x000107c610f8();
  lVar3 = unaff_x20;
  func_0x000100b4064c();
  if (lVar3 != 0) {
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_2;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_3;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_4;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_5;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_6;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_7;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_8;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_9;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_10;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_11;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_12;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_13;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_14;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_15;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_16;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_17;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_18;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_19;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_20;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_21;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_22;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_23;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_24;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_25;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_26;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_27;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_28;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_29;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_30;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_31;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_32;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_33;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_34;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_35;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_36;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_37;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_38;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_39;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_40;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_41;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_42;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_43;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_44;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_45;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_46;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_47;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_48;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_49;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_50;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_51;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_52;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_53;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_54;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_55;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_56;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_57;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_58;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_59;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_60;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_61;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_62;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_63;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_64;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_65;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_66;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_67;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_68;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_69;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_70;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(auStack_70[0]);
    *(long *)(unaff_x20 + _DAT_112e659d0) = lVar3;
    *(undefined8 *)(unaff_x20 + _DAT_112e659d8) = in_stack_00000848;
    puVar4 = auStack_88;
    func_0x000107c61154(puVar4,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_9);
    func_0x000107c61170(param_10);
    func_0x000107c61170(param_11);
    func_0x000107c61170(param_12);
    func_0x000107c61170(param_13);
    func_0x000107c61170(param_14);
    func_0x000107c61170(param_15);
    func_0x000107c61170(param_16);
    func_0x000107c61170(param_17);
    func_0x000107c61170(param_18);
    func_0x000107c61170(param_19);
    func_0x000107c61170(param_20);
    func_0x000107c61170(param_21);
    func_0x000107c61170(param_22);
    func_0x000107c61170(param_23);
    func_0x000107c61170(param_24);
    func_0x000107c61170(param_25);
    func_0x000107c61170(param_26);
    func_0x000107c61170(param_27);
    func_0x000107c61170(param_28);
    func_0x000107c61170(param_29);
    func_0x000107c61170(param_30);
    func_0x000107c61170(param_31);
    func_0x000107c61170(param_32);
    func_0x000107c61170(param_33);
    func_0x000107c61170(param_34);
    func_0x000107c61170(param_35);
    func_0x000107c61170(param_36);
    func_0x000107c61170(param_37);
    func_0x000107c61170(param_38);
    func_0x000107c61170(param_39);
    func_0x000107c61170(param_40);
    func_0x000107c61170(param_41);
    func_0x000107c61170(param_42);
    func_0x000107c61170(param_43);
    func_0x000107c61170(param_44);
    func_0x000107c61170(param_45);
    func_0x000107c61170(param_46);
    func_0x000107c61170(param_47);
    func_0x000107c61170(param_48);
    func_0x000107c61170(param_49);
    func_0x000107c61170(param_50);
    func_0x000107c61170(param_51);
    func_0x000107c61170(param_52);
    func_0x000107c61170(param_53);
    func_0x000107c61170(param_54);
    func_0x000107c61170(param_55);
    func_0x000107c61170(param_56);
    func_0x000107c61170(param_57);
    func_0x000107c61170(param_58);
    func_0x000107c61170(param_59);
    func_0x000107c61170(param_60);
    func_0x000107c61170(param_61);
    func_0x000107c61170(param_62);
    func_0x000107c61170(param_63);
    func_0x000107c61170(param_64);
    func_0x000107c61170(param_65);
    func_0x000107c61170(param_66);
    func_0x000107c61170(param_67);
    func_0x000107c61170(param_68);
    func_0x000107c61170(param_69);
    func_0x000107c61170(param_70);
    func_0x000107c61170(in_stack_000001f0);
    func_0x000107c61170(in_stack_000001f8);
    func_0x000107c61170(in_stack_00000200);
    func_0x000107c61170(in_stack_00000208);
    func_0x000107c61170(in_stack_00000210);
    func_0x000107c61170(in_stack_00000218);
    func_0x000107c61170(in_stack_00000220);
    func_0x000107c61170(in_stack_00000228);
    func_0x000107c61170(in_stack_00000230);
    func_0x000107c61170(in_stack_00000238);
    func_0x000107c61170(in_stack_00000240);
    func_0x000107c61170(in_stack_00000248);
    func_0x000107c61170(in_stack_00000250);
    func_0x000107c61170(in_stack_00000258);
    func_0x000107c61170(in_stack_00000260);
    func_0x000107c61170(in_stack_00000268);
    func_0x000107c61170(in_stack_00000270);
    func_0x000107c61170(in_stack_00000278);
    func_0x000107c61170(in_stack_00000280);
    func_0x000107c61170(in_stack_00000288);
    func_0x000107c61170(in_stack_00000290);
    func_0x000107c61170(in_stack_00000298);
    func_0x000107c61170(in_stack_000002a0);
    func_0x000107c61170(in_stack_000002a8);
    func_0x000107c61170(in_stack_000002b0);
    func_0x000107c61170(in_stack_000002b8);
    func_0x000107c61170(in_stack_000002c0);
    func_0x000107c61170(in_stack_000002c8);
    func_0x000107c61170(in_stack_000002d0);
    func_0x000107c61170(in_stack_000002d8);
    func_0x000107c61170(in_stack_000002e0);
    func_0x000107c61170(in_stack_000002e8);
    func_0x000107c61170(in_stack_000002f0);
    func_0x000107c61170(in_stack_000002f8);
    func_0x000107c61170(in_stack_00000300);
    func_0x000107c61170(in_stack_00000308);
    func_0x000107c61170(in_stack_00000310);
    func_0x000107c61170(in_stack_00000318);
    func_0x000107c61170(in_stack_00000320);
    func_0x000107c61170(in_stack_00000328);
    func_0x000107c61170(in_stack_00000330);
    func_0x000107c61170(in_stack_00000338);
    func_0x000107c61170(in_stack_00000340);
    func_0x000107c61170(in_stack_00000348);
    func_0x000107c61170(in_stack_00000350);
    func_0x000107c61170(in_stack_00000358);
    func_0x000107c61170(in_stack_00000360);
    func_0x000107c61170(in_stack_00000368);
    func_0x000107c61170(in_stack_00000370);
    func_0x000107c61170(in_stack_00000378);
    func_0x000107c61170(in_stack_00000380);
    func_0x000107c61170(in_stack_00000388);
    func_0x000107c61170(in_stack_00000390);
    func_0x000107c61170(in_stack_00000398);
    func_0x000107c61170(in_stack_000003a0);
    func_0x000107c61170(in_stack_000003a8);
    func_0x000107c61170(in_stack_000003b0);
    func_0x000107c61170(in_stack_000003b8);
    func_0x000107c61170(in_stack_000003c0);
    func_0x000107c61170(in_stack_000003c8);
    func_0x000107c61170(in_stack_000003d0);
    func_0x000107c61170(in_stack_000003d8);
    func_0x000107c61170(in_stack_000003e0);
    func_0x000107c61170(in_stack_000003e8);
    func_0x000107c61170(in_stack_000003f0);
    func_0x000107c61170(in_stack_000003f8);
    func_0x000107c61170(in_stack_00000400);
    func_0x000107c61170(in_stack_00000408);
    func_0x000107c61170(in_stack_00000410);
    func_0x000107c61170(in_stack_00000418);
    func_0x000107c61170(in_stack_00000420);
    func_0x000107c61170(in_stack_00000428);
    func_0x000107c61170(in_stack_00000430);
    func_0x000107c61170(in_stack_00000438);
    func_0x000107c61170(in_stack_00000440);
    func_0x000107c61170(in_stack_00000448);
    func_0x000107c61170(in_stack_00000450);
    func_0x000107c61170(in_stack_00000458);
    func_0x000107c61170(in_stack_00000460);
    func_0x000107c61170(in_stack_00000468);
    func_0x000107c61170(in_stack_00000470);
    func_0x000107c61170(in_stack_00000478);
    func_0x000107c61170(in_stack_00000480);
    func_0x000107c61170(in_stack_00000488);
    func_0x000107c61170(in_stack_00000490);
    func_0x000107c61170(in_stack_00000498);
    func_0x000107c61170(in_stack_000004a0);
    func_0x000107c61170(in_stack_000004a8);
    func_0x000107c61170(in_stack_000004b0);
    func_0x000107c61170(in_stack_000004b8);
    func_0x000107c61170(in_stack_000004c0);
    func_0x000107c61170(in_stack_000004c8);
    func_0x000107c61170(in_stack_000004d0);
    func_0x000107c61170(in_stack_000004d8);
    func_0x000107c61170(in_stack_000004e0);
    func_0x000107c61170(in_stack_000004e8);
    func_0x000107c61170(in_stack_000004f0);
    func_0x000107c61170(in_stack_000004f8);
    func_0x000107c61170(in_stack_00000500);
    func_0x000107c61170(in_stack_00000508);
    func_0x000107c61170(in_stack_00000510);
    func_0x000107c61170(in_stack_00000518);
    func_0x000107c61170(in_stack_00000520);
    func_0x000107c61170(in_stack_00000528);
    func_0x000107c61170(in_stack_00000530);
    func_0x000107c61170(in_stack_00000538);
    func_0x000107c61170(in_stack_00000540);
    func_0x000107c61170(in_stack_00000548);
    func_0x000107c61170(in_stack_00000550);
    func_0x000107c61170(in_stack_00000558);
    func_0x000107c61170(in_stack_00000560);
    func_0x000107c61170(in_stack_00000568);
    func_0x000107c61170(in_stack_00000570);
    func_0x000107c61170(in_stack_00000578);
    func_0x000107c61170(in_stack_00000580);
    func_0x000107c61170(in_stack_00000588);
    func_0x000107c61170(in_stack_00000590);
    func_0x000107c61170(in_stack_00000598);
    func_0x000107c61170(in_stack_000005a0);
    func_0x000107c61170(in_stack_000005a8);
    func_0x000107c61170(in_stack_000005b0);
    func_0x000107c61170(in_stack_000005b8);
    func_0x000107c61170(in_stack_000005c0);
    func_0x000107c61170(in_stack_000005c8);
    func_0x000107c61170(in_stack_000005d0);
    func_0x000107c61170(in_stack_000005d8);
    func_0x000107c61170(in_stack_000005e0);
    func_0x000107c61170(in_stack_000005e8);
    func_0x000107c61170(in_stack_000005f0);
    func_0x000107c61170(in_stack_000005f8);
    func_0x000107c61170(in_stack_00000600);
    func_0x000107c61170(in_stack_00000608);
    func_0x000107c61170(in_stack_00000610);
    func_0x000107c61170(in_stack_00000618);
    func_0x000107c61170(in_stack_00000620);
    func_0x000107c61170(in_stack_00000628);
    func_0x000107c61170(in_stack_00000630);
    func_0x000107c61170(in_stack_00000638);
    func_0x000107c61170(in_stack_00000640);
    func_0x000107c61170(in_stack_00000648);
    func_0x000107c61170(in_stack_00000650);
    func_0x000107c61170(in_stack_00000658);
    func_0x000107c61170(in_stack_00000660);
    func_0x000107c61170(in_stack_00000668);
    func_0x000107c61170(in_stack_00000670);
    func_0x000107c61170(in_stack_00000678);
    func_0x000107c61170(in_stack_00000680);
    func_0x000107c61170(in_stack_00000688);
    func_0x000107c61170(in_stack_00000690);
    func_0x000107c61170(in_stack_00000698);
    func_0x000107c61170(in_stack_000006a0);
    func_0x000107c61170(in_stack_000006a8);
    func_0x000107c61170(in_stack_000006b0);
    func_0x000107c61170(in_stack_000006b8);
    func_0x000107c61170(in_stack_000006c0);
    func_0x000107c61170(in_stack_000006c8);
    func_0x000107c61170(in_stack_000006d0);
    func_0x000107c61170(in_stack_000006d8);
    func_0x000107c61170(in_stack_000006e0);
    func_0x000107c61170(in_stack_000006e8);
    func_0x000107c61170(in_stack_000006f0);
    func_0x000107c61170(in_stack_000006f8);
    func_0x000107c61170(in_stack_00000700);
    func_0x000107c61170(in_stack_00000708);
    func_0x000107c61170(in_stack_00000710);
    func_0x000107c61170(in_stack_00000718);
    func_0x000107c61170(in_stack_00000720);
    func_0x000107c61170(in_stack_00000728);
    func_0x000107c61170(in_stack_00000730);
    func_0x000107c61170(in_stack_00000738);
    func_0x000107c61170(in_stack_00000740);
    func_0x000107c61170(in_stack_00000748);
    func_0x000107c61170(in_stack_00000750);
    func_0x000107c61170(in_stack_00000758);
    func_0x000107c61170(in_stack_00000760);
    func_0x000107c61170(in_stack_00000768);
    func_0x000107c61170(in_stack_00000770);
    func_0x000107c61170(in_stack_00000778);
    func_0x000107c61170(in_stack_00000780);
    func_0x000107c61170(in_stack_00000788);
    func_0x000107c61170(in_stack_00000790);
    func_0x000107c61170(in_stack_00000798);
    func_0x000107c61170(in_stack_000007a0);
    func_0x000107c61170(in_stack_000007a8);
    func_0x000107c61170(in_stack_000007b0);
    func_0x000107c61170(in_stack_000007b8);
    func_0x000107c61170(in_stack_000007c0);
    func_0x000107c61170(in_stack_000007c8);
    func_0x000107c61170(in_stack_000007d0);
    func_0x000107c61170(in_stack_000007d8);
    func_0x000107c61170(in_stack_000007e0);
    func_0x000107c61170(in_stack_000007e8);
    func_0x000107c61170(in_stack_000007f0);
    func_0x000107c61170(in_stack_000007f8);
    func_0x000107c61170(in_stack_00000800);
    func_0x000107c61170(in_stack_00000808);
    func_0x000107c61170(in_stack_00000810);
    func_0x000107c61170(in_stack_00000818);
    func_0x000107c61170(in_stack_00000820);
    func_0x000107c61170(in_stack_00000828);
    func_0x000107c61170(in_stack_00000830);
    func_0x000107c61170(in_stack_00000838);
    func_0x000107c61170(in_stack_00000840);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102217f8c);
  (*pcVar2)();
}



/* Entry: 102217f8c; end: 102217feb; -[_TtC30UserNavigationScopeGraphBridge45UserNavigationScopeGraphBridgeSaberEntryPoint init] */

void FUN_102217f8c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("UserNavigationScopeGraphBridge.UserNavigationScopeGraphBridgeSaberEntryPoint"
                      ,0x4c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102217fb8);
  (*pcVar1)();
}



/* Entry: 102217fec; end: 102218023; -[_TtC30UserNavigationScopeGraphBridge45UserNavigationScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102218008: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010221800c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102217fec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e659d0));
  return;
}



/* Entry: 102218024; end: 10221804b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102218024(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e659d8),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e659d0));
  return;
}



/* Entry: 10221804c; end: 1022180e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10221804c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112e6e718);
  *(undefined8 *)(unaff_x20 + _DAT_112e65a08) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112e65a10) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 1022180e8; end: 102218147; -[_TtC30UserNavigationScopeGraphBridge41SCDeepLinkHandlingServicesSaberEntryPoint init] */

void FUN_1022180e8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("UserNavigationScopeGraphBridge.SCDeepLinkHandlingServicesSaberEntryPoint",
                      0x48,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102218114);
  (*pcVar1)();
}



/* Entry: 102218148; end: 1022181db; -[_TtC30UserNavigationScopeGraphBridge41SCDeepLinkHandlingServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102218148(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e65a08));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e65a10));
  return;
}



/* Entry: 1022181dc; end: 1022181e3;  */

undefined8 FUN_1022181dc(void)

{
  return 0;
}



/* Entry: 1022181e4; end: 10221827f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1022181e4(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112e6edc8);
  *(undefined8 *)(unaff_x20 + _DAT_112e65a40) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112e65a48) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 102218280; end: 1022182df; -[_TtC30UserNavigationScopeGraphBridge28SCTIVServicesSaberEntryPoint init] */

void FUN_102218280(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("UserNavigationScopeGraphBridge.SCTIVServicesSaberEntryPoint",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1022182ac);
  (*pcVar1)();
}



/* Entry: 1022182e0; end: 102218373; -[_TtC30UserNavigationScopeGraphBridge28SCTIVServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022182e0(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e65a40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e65a48));
  return;
}



/* Entry: 102218374; end: 10221837b;  */

undefined8 FUN_102218374(void)

{
  return 0;
}



/* Entry: 10221837c; end: 1022183df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10221837c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112e6e1a0);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1022183e0; end: 1022183e7;  */

void FUN_1022183e0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1022183e8; end: 102218487;  */

void FUN_1022183e8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102218488; end: 1022184a7;  */

void FUN_102218488(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1022184a8; end: 10221850b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1022184a8(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112e6e1b8);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10221850c; end: 102218513;  */

void FUN_10221850c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102218514; end: 1022185b3;  */

void FUN_102218514(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1022185b4; end: 1022185d3;  */

void FUN_1022185b4(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1022185d4; end: 102218637;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1022185d4(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112e6e1c8);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 102218638; end: 10221863f;  */

void FUN_102218638(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102218640; end: 102218663;  */

void FUN_102218640(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102218664; end: 102218683;  */

void FUN_102218664(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 102218684; end: 1022186e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102218684(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112e6e1d8);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1022186e8; end: 1022186ef;  */

void FUN_1022186e8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1022186f0; end: 10221878f;  */

void FUN_1022186f0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102218790; end: 1022187af;  */

void FUN_102218790(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1022187b0; end: 102218813;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1022187b0(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112e6e1e8);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 102218814; end: 10221881b;  */

void FUN_102218814(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10221881c; end: 1022188bb;  */

void FUN_10221881c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1022188bc; end: 1022188db;  */

void FUN_1022188bc(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1022188dc; end: 10221893f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1022188dc(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112e6e1f0);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 102218940; end: 102218947;  */

void FUN_102218940(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102218948; end: 1022189e7;  */

void FUN_102218948(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1022189e8; end: 102218a07;  */

void FUN_1022189e8(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 102218a08; end: 102218a6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102218a08(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112e6e218);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 102218a6c; end: 102218a73;  */

void FUN_102218a6c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102218a74; end: 102218b13;  */

void FUN_102218a74(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102218b14; end: 102218b33;  */

void FUN_102218b14(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 102218b34; end: 102218b97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102218b34(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112e6e228);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 102218b98; end: 102218b9f;  */

void FUN_102218b98(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102218ba0; end: 102218c3f;  */

void FUN_102218ba0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102218c40; end: 102218c5f;  */

void FUN_102218c40(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 102218c60; end: 102218cc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102218c60(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112e6e230);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 102218cc4; end: 102218ccb;  */

void FUN_102218cc4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102218ccc; end: 102218d6b;  */

void FUN_102218ccc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102218d6c; end: 102218d8b;  */

void FUN_102218d6c(void)

{
  func_0x000100083b20();
  return;
}


