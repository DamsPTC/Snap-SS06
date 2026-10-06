/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101a4cdc0; end: 101a4cdd3;  */

/* WARNING: Possible PIC construction at 0x000101a4cb20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a4cb24) */

void FUN_101a4cdc0(void)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  cVar1 = *(char *)(unaff_x20 + 0x19);
  bVar2 = *(char *)(unaff_x20 + 0x18) != '\x01';
  uVar3 = 0x535249524f4d454d;
  if (bVar2) {
    uVar3 = 0x534549524f4d454d;
  }
  uVar6 = 0xed000045524f435f;
  if (bVar2) {
    uVar6 = 0xeb0000000049555f;
  }
  func_0x000107c5fadc(uVar3,uVar6);
  func_0x000107c6142c(uVar6);
  if (cVar1 == '\0') {
    uVar6 = 0xe400000000000000;
    uVar4 = 0x6e69616d;
  }
  else {
    uVar6 = 0xe900000000000061;
    uVar4 = 0x7461645f65726f63;
    if (cVar1 != '\x01') {
      uVar6 = 0xea0000000000646e;
      uVar4 = 0x756f72676b636162;
    }
  }
  func_0x000107c5fadc(uVar4,uVar6);
  func_0x000107c6142c(uVar6);
  func_0x000105655960(uVar7,uVar5,uVar3,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 101a4cdd4; end: 101a4cfdf;  */

void FUN_101a4cdd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_70;
  
  lVar2 = 0x112deeaa8;
  uStack_98 = param_2;
  uStack_90 = param_3;
  uStack_88 = param_1;
  func_0x0001000285a8(0x112deeaa8,&UNK_10d9bbc40);
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x112deeaa0;
  func_0x0001000285a8(0x112deeaa0,&UNK_10d9bbc38);
  lVar5 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)(auStack_a0 + -extraout_x8) - extraout_x8_00;
  lVar4 = 0x112deeac0;
  func_0x0001000285a8(0x112deeac0,&UNK_10d9bbc70);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar8 = lVar7 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar8 - extraout_x12;
  lVar4 = 0x112deea98;
  func_0x0001000285a8(0x112deea98,&UNK_10d9bbc30);
  lVar6 = *(long *)(lVar4 + -8);
  (**(code **)(lVar6 + 0x38))(lVar9,1,1,lVar4);
  (**(code **)(lVar10 + 0x10))(auStack_a0 + -extraout_x8,uStack_90,lVar2);
  lStack_70 = lVar9;
  func_0x0001000285a8(0x112dee9e8,&UNK_10d9bbc10);
  func_0x000107c5fd48(lVar7);
  (**(code **)(lVar5 + 0x10))(uStack_88,lVar7,lVar3);
  FUN_101a4d130(lVar9,lVar8);
  lVar2 = lVar8;
  (**(code **)(lVar6 + 0x30))(lVar8,1,lVar4);
  if ((int)lVar2 != 1) {
    (**(code **)(lVar5 + 8))(lVar7,lVar3);
    (**(code **)(lVar6 + 0x20))(uStack_98,lVar8,lVar4);
    func_0x000101a4d180(lVar9);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101a4cfe0);
  (*pcVar1)();
}



/* Entry: 101a4cfe0; end: 101a4d053;  */

void FUN_101a4cfe0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x000101a4d180(param_2);
  lVar1 = 0x112deea98;
  func_0x0001000285a8(0x112deea98,&UNK_10d9bbc30);
  lVar2 = *(long *)(lVar1 + -8);
  (**(code **)(lVar2 + 0x10))(param_2,param_1,lVar1);
                    /* WARNING: Could not recover jumptable at 0x000101a4d050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x38))(param_2,0,1,lVar1);
  return;
}



/* Entry: 101a4d054; end: 101a4d0d3;  */

void FUN_101a4d054(void)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = 0x112deeaa0;
  func_0x0001000285a8(0x112deeaa0,&UNK_10d9bbc38);
  uVar3 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101a4d0d4;
  plVar1[4] = unaff_x20 + (uVar3 + 0x10 & (uVar3 ^ 0xffffffffffffffff));
  lVar2 = 0x112deeab8;
  func_0x0001000285a8(0x112deeab8,&UNK_10d9bbc68);
  plVar1[5] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar1[6] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[7] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a4c2e4,0,0);
  return;
}



/* Entry: 101a4d0d4; end: 101a4d10f;  */

void FUN_101a4d0d4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101a4d10c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101a4d110; end: 101a4d12f;  */

void FUN_101a4d110(ulong param_1)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0x112deeab0;
  func_0x0001000285a8(0x112deeab0,&UNK_10d9bbc58);
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &stack0xffffffffffffffc0 + -extraout_x8;
  (**(code **)(lVar4 + 0x68))
            (puVar3,*(undefined4 *)
                     PTR___sScS12ContinuationV11TerminationO9cancelledyADyx__GAFmlFWC_11034fcd8,
             lVar1);
  uVar2 = 0x112dee9e8;
  func_0x0001000285a8(0x112dee9e8,&UNK_10d9bbc10);
  func_0x000107c5fd14(param_1,puVar3,uVar2);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
  if ((param_1 & 1) != 0) {
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c5fd50();
  }
  return;
}



/* Entry: 101a4d130; end: 101a4d1c7;  */

undefined8 FUN_101a4d130(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112deeac0;
  func_0x0001000285a8(0x112deeac0,&UNK_10d9bbc70);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 101a4d1c8; end: 101a4d1cb;  */

void FUN_101a4d1c8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101a4d1cc; end: 101a4d297;  */

void FUN_101a4d1cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar2 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar2 + 0x40));
  func_0x000107c5eea0(&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5ee68(param_3);
  (**(code **)(lVar2 + 8))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  (**(code **)(param_5 + 8))(param_1,param_2,param_4,param_5);
  return;
}



/* Entry: 101a4d298; end: 101a4d42b;  */

void FUN_101a4d298(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar1 = 0x535249524f4d454d;
  if (cVar3 != '\x01') {
    uVar1 = 0x534549524f4d454d;
  }
  uVar2 = 0xed000045524f435f;
  if (cVar3 != '\x01') {
    uVar2 = 0xeb0000000049555f;
  }
  func_0x000107c5fb58(auStack_68,uVar1,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c606a8();
  return;
}



/* Entry: 101a4d42c; end: 101a4d4a3;  */

void FUN_101a4d42c(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(uVar2);
  uVar4 = 1;
  if (lVar3 != 1) {
    uVar4 = 2;
  }
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar1 = uVar4;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 101a4d4a4; end: 101a4d4f7;  */

void FUN_101a4d4a4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  
  uVar1 = 0x535249524f4d454d;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x534549524f4d454d;
  }
  uVar2 = 0xed000045524f435f;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xeb0000000049555f;
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Entry: 101a4d4f8; end: 101a4d777;  */

void FUN_101a4d4f8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar5 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar4 = 0x6f746f7270;
  if (bVar5 != 3) {
    uVar4 = 0x676e69727473;
  }
  uVar1 = 0xe500000000000000;
  if (bVar5 != 3) {
    uVar1 = 0xe600000000000000;
  }
  uVar2 = 0x74616f6c66;
  if (bVar5 != 2) {
    uVar2 = uVar4;
  }
  uVar4 = 0xe500000000000000;
  if (bVar5 != 2) {
    uVar4 = uVar1;
  }
  uVar1 = 0x6c6f6f62;
  if (bVar5 != 0) {
    uVar1 = 0x6c5f726f5f746e69;
  }
  uVar3 = 0xe400000000000000;
  if (bVar5 != 0) {
    uVar3 = 0xeb00000000676e6f;
  }
  if (bVar5 < 2) {
    uVar4 = uVar3;
    uVar2 = uVar1;
  }
  func_0x000107c5fb58(auStack_68,uVar2,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x000107c606a8();
  return;
}



/* Entry: 101a4d778; end: 101a4d80b;  */

void FUN_101a4d778(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  byte *unaff_x20;
  
  bVar5 = *unaff_x20;
  uVar4 = 0x6f746f7270;
  if (bVar5 != 3) {
    uVar4 = 0x676e69727473;
  }
  uVar1 = 0xe500000000000000;
  if (bVar5 != 3) {
    uVar1 = 0xe600000000000000;
  }
  uVar2 = 0x74616f6c66;
  if (bVar5 != 2) {
    uVar2 = uVar4;
  }
  uVar4 = 0xe500000000000000;
  if (bVar5 != 2) {
    uVar4 = uVar1;
  }
  uVar1 = 0x6c6f6f62;
  if (bVar5 != 0) {
    uVar1 = 0x6c5f726f5f746e69;
  }
  uVar3 = 0xe400000000000000;
  if (bVar5 != 0) {
    uVar3 = 0xeb00000000676e6f;
  }
  if (bVar5 < 2) {
    uVar4 = uVar3;
    uVar2 = uVar1;
  }
  *param_1 = uVar2;
  param_1[1] = uVar4;
  return;
}



/* Entry: 101a4d80c; end: 101a4d86f;  */

ulong FUN_101a4d80c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (4 < uVar1) {
    uVar1 = 5;
  }
  return uVar1;
}



/* Entry: 101a4d870; end: 101a4d873;  */

void FUN_101a4d870(void)

{
  undefined *puVar1;
  
  if (puRam0000000112deeb20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9bbc78;
  func_0x000107c61520(&UNK_10d9bbc78,&UNK_110430228);
  puRam0000000112deeb20 = puVar1;
  return;
}



/* Entry: 101a4d874; end: 101a4d8b3;  */

void FUN_101a4d874(void)

{
  undefined *puVar1;
  
  if (puRam0000000112deeb20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9bbc78;
  func_0x000107c61520(&UNK_10d9bbc78,&UNK_110430228);
  puRam0000000112deeb20 = puVar1;
  return;
}



/* Entry: 101a4d8b4; end: 101a4d8b7;  */

void FUN_101a4d8b4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112deeb28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9bbd18;
  func_0x000107c61520(&UNK_10d9bbd18,&UNK_1104302b8);
  puRam0000000112deeb28 = puVar1;
  return;
}



/* Entry: 101a4d8b8; end: 101a4d8f7;  */

void FUN_101a4d8b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112deeb28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9bbd18;
  func_0x000107c61520(&UNK_10d9bbd18,&UNK_1104302b8);
  puRam0000000112deeb28 = puVar1;
  return;
}



/* Entry: 101a4d8f8; end: 101a4dbb7;  */

int FUN_101a4d8f8(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101a4d974;
        goto LAB_101a4d958;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101a4d958:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_101a4d974:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 101a4dbb8; end: 101a4dbdb;  */

void FUN_101a4dbb8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101a4dbdc; end: 101a4dbef;  */

bool FUN_101a4dbdc(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101a4dbf0; end: 101a4dc9b;  */

void FUN_101a4dbf0(void)

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



/* Entry: 101a4dc9c; end: 101a4dc9f;  */

void FUN_101a4dc9c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112deec70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9bbea0;
  func_0x000107c61520(&UNK_10d9bbea0,&UNK_1104303b8);
  puRam0000000112deec70 = puVar1;
  return;
}



/* Entry: 101a4dca0; end: 101a4dcdf;  */

void FUN_101a4dca0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112deec70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9bbea0;
  func_0x000107c61520(&UNK_10d9bbea0,&UNK_1104303b8);
  puRam0000000112deec70 = puVar1;
  return;
}



/* Entry: 101a4dce0; end: 101a4de43;  */

int FUN_101a4dce0(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101a4dd5c;
        goto LAB_101a4dd40;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101a4dd40:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_101a4dd5c:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 101a4de44; end: 101a4df6f;  */

void FUN_101a4de44(byte *param_1,long param_2)

{
  byte bVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    bVar1 = 0;
  }
  else {
    bVar1 = 3;
    func_0x000100858660(3,0xd000000000000030,0x800000010efccb80,0,param_2);
    func_0x000107c61170(param_2);
    bVar1 = bVar1 & 1;
  }
  *param_1 = bVar1;
  return;
}



/* Entry: 101a4df70; end: 101a4e003;  */

void FUN_101a4df70(undefined4 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    uVar1 = 0x41200000;
  }
  else {
    uVar1 = 0x41200000;
    FUN_101a4b170(2,0xd000000000000025,0x800000010efccb20,param_2);
    func_0x000107c61170(param_2);
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 101a4e004; end: 101a4e263;  */

void FUN_101a4e004(byte *param_1,long param_2)

{
  byte bVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    bVar1 = 0;
  }
  else {
    bVar1 = 3;
    func_0x000100858660(3,0xd00000000000001b,0x800000010efccb00,0,param_2);
    func_0x000107c61170(param_2);
    bVar1 = bVar1 & 1;
  }
  *param_1 = bVar1;
  return;
}



/* Entry: 101a4e264; end: 101a4e3f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a4e264(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  undefined1 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_a0 [24];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar5 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    lVar8 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + _DAT_112deec90);
    func_0x000107c615f4(uVar6,2);
    func_0x000107c5eea0(puVar5);
    uVar2 = 0xd00000000000002f;
    func_0x000107c5fadc(0xd00000000000002f,0x800000010efcca30);
    uVar3 = uVar6;
    func_0x000107c4980c();
    func_0x000107c61170(uVar2);
    lVar8 = (long)(int)uVar3;
    uVar3 = uVar6;
    func_0x00010085883c(uVar6);
    func_0x0001000d224c(auStack_a0);
    puVar4 = auStack_a0;
    func_0x0001000a8868(puVar4,uStack_88);
    func_0x0001008599bc(uVar3,1,puVar5,uStack_88,uStack_80,puVar4);
    func_0x000107c61170(param_2);
    func_0x000107c615ec(uVar6,2);
    (**(code **)(lVar7 + 8))(puVar5,lVar1);
    func_0x0001000834e4(auStack_a0);
  }
  *param_1 = lVar8;
  return;
}



/* Entry: 101a4e3f8; end: 101a4e457; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl init] */

void FUN_101a4e3f8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesExperimentServicesImpl.MemoriesExperimentServiceImpl",0x3c,"init()",6
                      ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101a4e424);
  (*pcVar1)();
}



/* Entry: 101a4e458; end: 101a4e53f; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101a4e474: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a4e4b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a4e4d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a4e4f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a4e514: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a4e4f8) */
/* WARNING: Removing unreachable block (ram,0x000101a4e4d8) */
/* WARNING: Removing unreachable block (ram,0x000101a4e4b8) */
/* WARNING: Removing unreachable block (ram,0x000101a4e478) */
/* WARNING: Removing unreachable block (ram,0x000101a4e518) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a4e458(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112deec78));
  return;
}



/* Entry: 101a4e540; end: 101a4e5cb;  */

code * FUN_101a4e540(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *pcVar2;
  
  puVar1 = &UNK_110430450;
  func_0x000107c613fc(&UNK_110430450,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  pcVar2 = FUN_101a4fa28;
  FUN_101a4f6ec(FUN_101a4fa28,puVar1,0x112dc1148,&UNK_10d9bbf70,&UNK_1104304a0,FUN_101a4fa54);
  func_0x000107c61574(puVar1);
  return pcVar2;
}



/* Entry: 101a4e5cc; end: 101a4e5e7;  */

void FUN_101a4e5cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a4e5e8,0,0);
  return;
}



/* Entry: 101a4e5e8; end: 101a4e66f;  */

/* WARNING: Removing unreachable block (ram,0x000101a4e614) */
/* WARNING: Removing unreachable block (ram,0x000101a4e640) */

void FUN_101a4e5e8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  func_0x000107c6157c(*(undefined8 *)(unaff_x22 + 0x18));
  func_0x000107c5fd64();
  uVar2 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
  (**(code **)(unaff_x22 + 0x10))(uVar2,*(undefined8 *)(unaff_x22 + 0x28));
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101a4e65c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))((uint)uVar2 & 1);
  return;
}



/* Entry: 101a4e670; end: 101a4e68b;  */

void FUN_101a4e670(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a4e68c,0,0);
  return;
}



/* Entry: 101a4e68c; end: 101a4e71f;  */

/* WARNING: Removing unreachable block (ram,0x000101a4e6b8) */
/* WARNING: Removing unreachable block (ram,0x000101a4e6e4) */

void FUN_101a4e68c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  func_0x000107c6157c(*(undefined8 *)(unaff_x22 + 0x18));
  func_0x000107c5fd64();
  uVar2 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
  (**(code **)(unaff_x22 + 0x10))(uVar2,*(undefined8 *)(unaff_x22 + 0x28));
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101a4e71c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar2);
  return;
}



/* Entry: 101a4e720; end: 101a4e8f3;  */

/* WARNING: Possible PIC construction at 0x000101a4e7e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a4e848: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a4e8b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a4e84c) */
/* WARNING: Removing unreachable block (ram,0x000101a4e7ec) */
/* WARNING: Removing unreachable block (ram,0x000101a4e8b4) */
/* WARNING: Removing unreachable block (ram,0x000100cc35c4) */
/* WARNING: Removing unreachable block (ram,0x000100cc35d0) */
/* WARNING: Removing unreachable block (ram,0x000100cc35c8) */

void FUN_101a4e720(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_5 != 0) {
    puVar1 = &UNK_1104308b0;
    func_0x000107c613fc(&UNK_1104308b0,0x20,7);
    *(undefined8 *)(puVar1 + 0x10) = param_1;
    *(undefined8 *)(puVar1 + 0x18) = param_2;
    puVar2 = &UNK_1104308d8;
    func_0x000107c613fc(&UNK_1104308d8,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = 0x101a4ff38;
    *(undefined **)(puVar2 + 0x18) = puVar1;
    func_0x000100cc35d4(param_5,param_6);
    func_0x000107c6157c(param_2);
    func_0x000107c6157c(puVar1);
    FUN_101a4f6ec(0x101a4ff24,puVar2,0x112dc1148,&UNK_10d9bbf70,&UNK_1104304a0,FUN_101a4fa54);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(puVar1);
    return;
  }
  return;
}



/* Entry: 101a4e8f4; end: 101a4eac3;  */

void FUN_101a4e8f4(undefined1 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  long extraout_x8;
  long lVar7;
  long lVar8;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar2 = 0;
  func_0x000107c5f804();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)&puStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar1 = *param_1;
  if (param_2 == 0) {
    uVar4 = 0;
    func_0x0001010415e8(0);
    (**(code **)(lVar8 + 0x68))
              (lVar7,*(undefined4 *)
                      PTR___s8Dispatch0A3QoSV0B6SClassO15userInteractiveyA2EmFWC_11034f7e8,lVar2);
    lVar5 = lVar7;
    func_0x000104188018(lVar7,0,0);
    (**(code **)(lVar8 + 8))(lVar7,lVar2);
    puVar6 = &UNK_110430838;
    func_0x000107c613fc(&UNK_110430838,0x21,7);
    *(undefined8 *)(puVar6 + 0x10) = param_3;
    *(undefined8 *)(puVar6 + 0x18) = param_4;
    puVar6[0x20] = uVar1;
    func_0x000107c6157c(param_4);
    func_0x00010090569c(FUN_101a4fc8c,puVar6,uVar4);
    func_0x000107c61170(lVar5);
    func_0x000107c61574(puVar6);
  }
  else {
    puVar6 = &UNK_110430860;
    func_0x000107c613fc(&UNK_110430860,0x21,7);
    *(undefined8 *)(puVar6 + 0x10) = param_3;
    *(undefined8 *)(puVar6 + 0x18) = param_4;
    puVar6[0x20] = uVar1;
    uStack_70 = 0x101a4ff50;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_110430878;
    ppuVar3 = &puStack_90;
    puStack_68 = puVar6;
    func_0x000107c60bc4(ppuVar3);
    puVar6 = puStack_68;
    func_0x000107c6157c(param_4);
    func_0x000107c615f0(param_2);
    func_0x000107c61574(puVar6);
    func_0x000107c4e524(param_2);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(param_2);
  }
  return;
}



/* Entry: 101a4eac4; end: 101a4ec87;  */

void FUN_101a4eac4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  byte param_5)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long extraout_x8;
  long lVar6;
  long lVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  lVar1 = 0;
  func_0x000107c5f804();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar6 = (long)&puStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (param_2 == 0) {
    uVar3 = 0;
    func_0x0001010415e8(0);
    (**(code **)(lVar7 + 0x68))
              (lVar6,*(undefined4 *)
                      PTR___s8Dispatch0A3QoSV0B6SClassO15userInteractiveyA2EmFWC_11034f7e8,lVar1);
    lVar4 = lVar6;
    func_0x000104188018(lVar6,0,0);
    (**(code **)(lVar7 + 8))(lVar6,lVar1);
    puVar5 = &UNK_1104307c0;
    func_0x000107c613fc(&UNK_1104307c0,0x21,7);
    *(undefined8 *)(puVar5 + 0x10) = param_3;
    *(undefined8 *)(puVar5 + 0x18) = param_4;
    puVar5[0x20] = param_5 & 1;
    func_0x000107c6157c(param_4);
    func_0x00010090569c(0x101a4ff4c,puVar5,uVar3);
    func_0x000107c61170(lVar4);
    func_0x000107c61574(puVar5);
  }
  else {
    puVar5 = &UNK_1104307e8;
    func_0x000107c613fc(&UNK_1104307e8,0x21,7);
    *(undefined8 *)(puVar5 + 0x10) = param_3;
    *(undefined8 *)(puVar5 + 0x18) = param_4;
    puVar5[0x20] = param_5 & 1;
    uStack_60 = 0x101a4ff48;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000f6b44;
    puStack_68 = &UNK_110430800;
    ppuVar2 = &puStack_80;
    puStack_58 = puVar5;
    func_0x000107c60bc4(ppuVar2);
    puVar5 = puStack_58;
    func_0x000107c6157c(param_4);
    func_0x000107c615f0(param_2);
    func_0x000107c61574(puVar5);
    func_0x000107c4e524(param_2);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c615e8(param_2);
  }
  return;
}



/* Entry: 101a4ec88; end: 101a4ed7b; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl asynchronouslyGet:fallbackValue:completionPerformer:completion:] */

void FUN_101a4ec88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  puVar1 = &UNK_110430950;
  func_0x000107c613fc(&UNK_110430950,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  if (param_6 == 0) {
    puVar2 = (undefined *)0x0;
    uVar3 = 0;
  }
  else {
    puVar2 = &UNK_110430978;
    func_0x000107c613fc(&UNK_110430978,0x18,7);
    *(long *)(puVar2 + 0x10) = param_6;
    uVar3 = 0x101a4ff40;
  }
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_1);
  FUN_101a4e720(0x101a4ff3c,puVar1,param_4,param_5,uVar3,puVar2);
  func_0x000100cc35c4(uVar3,puVar2);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101a4ed7c; end: 101a4ef47;  */

/* WARNING: Possible PIC construction at 0x000101a4ee40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a4eea0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a4ef04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a4eea4) */
/* WARNING: Removing unreachable block (ram,0x000101a4ee44) */
/* WARNING: Removing unreachable block (ram,0x000101a4ef08) */
/* WARNING: Removing unreachable block (ram,0x000100cc35c4) */
/* WARNING: Removing unreachable block (ram,0x000100cc35d0) */
/* WARNING: Removing unreachable block (ram,0x000100cc35c8) */

void FUN_101a4ed7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_4 != 0) {
    puVar1 = &UNK_110430720;
    func_0x000107c613fc(&UNK_110430720,0x20,7);
    *(undefined8 *)(puVar1 + 0x10) = param_1;
    *(undefined8 *)(puVar1 + 0x18) = param_2;
    puVar2 = &UNK_110430748;
    func_0x000107c613fc(&UNK_110430748,0x20,7);
    *(code **)(puVar2 + 0x10) = FUN_101a4fc3c;
    *(undefined **)(puVar2 + 0x18) = puVar1;
    func_0x000100cc35d4(param_4,param_5);
    func_0x000107c6157c(param_2);
    func_0x000107c6157c(puVar1);
    FUN_101a4f6ec(0x101a4ff20,puVar2,0x112dc1148,&UNK_10d9bbf70,&UNK_1104304a0,FUN_101a4fa54);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(puVar1);
    return;
  }
  return;
}



/* Entry: 101a4ef48; end: 101a4f02f; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl asynchronouslyGet:completionPerformer:completion:] */

void FUN_101a4ef48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  puVar1 = &UNK_1104306d0;
  func_0x000107c613fc(&UNK_1104306d0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  if (param_5 == 0) {
    puVar2 = (undefined *)0x0;
    pcVar3 = (code *)0x0;
  }
  else {
    puVar2 = &UNK_1104306f8;
    func_0x000107c613fc(&UNK_1104306f8,0x18,7);
    *(long *)(puVar2 + 0x10) = param_5;
    pcVar3 = FUN_101a4fc28;
  }
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  FUN_101a4ed7c(FUN_101a4fc08,puVar1,param_4,pcVar3,puVar2);
  func_0x000100cc35c4(pcVar3,puVar2);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101a4f030; end: 101a4f1f7;  */

/* WARNING: Possible PIC construction at 0x000101a4f0f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a4f154: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a4f1b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a4f158) */
/* WARNING: Removing unreachable block (ram,0x000101a4f0f8) */
/* WARNING: Removing unreachable block (ram,0x000101a4f1b8) */
/* WARNING: Removing unreachable block (ram,0x000100cc35c4) */
/* WARNING: Removing unreachable block (ram,0x000100cc35d0) */
/* WARNING: Removing unreachable block (ram,0x000100cc35c8) */

void FUN_101a4f030(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_4 != 0) {
    puVar1 = &UNK_110430518;
    func_0x000107c613fc(&UNK_110430518,0x20,7);
    *(undefined8 *)(puVar1 + 0x10) = param_1;
    *(undefined8 *)(puVar1 + 0x18) = param_2;
    puVar2 = &UNK_110430540;
    func_0x000107c613fc(&UNK_110430540,0x20,7);
    *(code **)(puVar2 + 0x10) = FUN_101a4fab0;
    *(undefined **)(puVar2 + 0x18) = puVar1;
    func_0x000100cc35d4(param_4,param_5);
    func_0x000107c6157c(param_2);
    func_0x000107c6157c(puVar1);
    FUN_101a4f6ec(0x101a4fad0,puVar2,0x112dc3120,&UNK_10d9803f0,&UNK_1104306a8,FUN_101a4fbfc);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(puVar1);
    return;
  }
  return;
}



/* Entry: 101a4f1f8; end: 101a4f3e7;  */

void FUN_101a4f1f8(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  long extraout_x8;
  long lVar8;
  long lVar9;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar3 = 0;
  func_0x000107c5f804();
  lVar8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar9 = (long)&puStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar1 = *param_1;
  uVar2 = param_1[1];
  if (param_2 == 0) {
    uVar5 = 0;
    func_0x0001010415e8(0);
    (**(code **)(lVar8 + 0x68))
              (lVar9,*(undefined4 *)
                      PTR___s8Dispatch0A3QoSV0B6SClassO15userInteractiveyA2EmFWC_11034f7e8,lVar3);
    lVar6 = lVar9;
    func_0x000104188018(lVar9,0,0);
    (**(code **)(lVar8 + 8))(lVar9,lVar3);
    puVar7 = &UNK_110430630;
    func_0x000107c613fc(&UNK_110430630,0x30,7);
    *(undefined8 *)(puVar7 + 0x10) = param_3;
    *(undefined8 *)(puVar7 + 0x18) = param_4;
    *(undefined8 *)(puVar7 + 0x20) = uVar1;
    *(undefined8 *)(puVar7 + 0x28) = uVar2;
    func_0x000107c6157c(param_4);
    func_0x000100de78a0(uVar1,uVar2);
    func_0x00010090569c(FUN_101a4fb64,puVar7,uVar5);
    func_0x000107c61170(lVar6);
    func_0x000107c61574(puVar7);
  }
  else {
    puVar7 = &UNK_110430658;
    func_0x000107c613fc(&UNK_110430658,0x30,7);
    *(undefined8 *)(puVar7 + 0x10) = param_3;
    *(undefined8 *)(puVar7 + 0x18) = param_4;
    *(undefined8 *)(puVar7 + 0x20) = uVar1;
    *(undefined8 *)(puVar7 + 0x28) = uVar2;
    uStack_70 = 0x101a4ff1c;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_110430670;
    ppuVar4 = &puStack_90;
    puStack_68 = puVar7;
    func_0x000107c60bc4(ppuVar4);
    puVar7 = puStack_68;
    func_0x000107c6157c(param_4);
    func_0x000100de78a0(uVar1,uVar2);
    func_0x000107c615f0(param_2);
    func_0x000107c61574(puVar7);
    func_0x000107c4e524(param_2);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c615e8(param_2);
  }
  return;
}



/* Entry: 101a4f3e8; end: 101a4f597;  */

void FUN_101a4f3e8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long extraout_x8;
  long lVar6;
  long lVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  lVar1 = 0;
  func_0x000107c5f804();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar6 = (long)&puStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (param_2 == 0) {
    uVar3 = 0;
    func_0x0001010415e8(0);
    (**(code **)(lVar7 + 0x68))
              (lVar6,*(undefined4 *)
                      PTR___s8Dispatch0A3QoSV0B6SClassO15userInteractiveyA2EmFWC_11034f7e8,lVar1);
    lVar4 = lVar6;
    func_0x000104188018(lVar6,0,0);
    (**(code **)(lVar7 + 8))(lVar6,lVar1);
    puVar5 = &UNK_1104305b8;
    func_0x000107c613fc(&UNK_1104305b8,0x20,7);
    *(undefined8 *)(puVar5 + 0x10) = param_3;
    *(undefined8 *)(puVar5 + 0x18) = param_4;
    func_0x000107c6157c(param_4);
    func_0x00010090569c(FUN_101a4fb20,puVar5,uVar3);
    func_0x000107c61170(lVar4);
    func_0x000107c61574(puVar5);
  }
  else {
    puVar5 = &UNK_1104305e0;
    func_0x000107c613fc(&UNK_1104305e0,0x20,7);
    *(undefined8 *)(puVar5 + 0x10) = param_3;
    *(undefined8 *)(puVar5 + 0x18) = param_4;
    uStack_60 = 0x101a4ff44;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000f6b44;
    puStack_68 = &UNK_1104305f8;
    ppuVar2 = &puStack_80;
    puStack_58 = puVar5;
    func_0x000107c60bc4(ppuVar2);
    puVar5 = puStack_58;
    func_0x000107c6157c(param_4);
    func_0x000107c615f0(param_2);
    func_0x000107c61574(puVar5);
    func_0x000107c4e524(param_2);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c615e8(param_2);
  }
  return;
}



/* Entry: 101a4f598; end: 101a4f67f; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl asynchronouslyGetData:completionPerformer:completion:] */

void FUN_101a4f598(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  puVar1 = &UNK_1104304c8;
  func_0x000107c613fc(&UNK_1104304c8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  if (param_5 == 0) {
    puVar2 = (undefined *)0x0;
    uVar3 = 0;
  }
  else {
    puVar2 = &UNK_1104304f0;
    func_0x000107c613fc(&UNK_1104304f0,0x18,7);
    *(long *)(puVar2 + 0x10) = param_5;
    uVar3 = 0x101a4faa8;
  }
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  FUN_101a4f030(FUN_101a4faa0,puVar1,param_4,uVar3,puVar2);
  func_0x000100cc35c4(uVar3,puVar2);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101a4f680; end: 101a4f6eb;  */

undefined1  [16] FUN_101a4f680(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  (**(code **)(param_2 + 0x10))(param_2,param_1);
  func_0x000107c61180();
  if (param_2 == 0) {
    lVar1 = 0;
    param_1 = 0xf000000000000000;
  }
  else {
    lVar1 = param_2;
    func_0x000107c5ee30();
    func_0x000107c61170(param_2);
  }
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = lVar1;
  return auVar2;
}



/* Entry: 101a4f6ec; end: 101a4f88f;  */

undefined8
FUN_101a4f6ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  long extraout_x8;
  long lVar6;
  undefined1 *puVar7;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar1 = 0;
  uStack_68 = param_6;
  func_0x000107c5f804();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  puVar7 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c613fc();
  lVar2 = 0;
  func_0x00010095c380();
  uVar3 = 0;
  func_0x0001010415e8(0);
  (**(code **)(lVar6 + 0x68))
            (puVar7,*(undefined4 *)
                     PTR___s8Dispatch0A3QoSV0B6SClassO15userInteractiveyA2EmFWC_11034f7e8,lVar1);
  puVar4 = puVar7;
  func_0x000104188018(puVar7,0,0);
  (**(code **)(lVar6 + 8))(puVar7,lVar1);
  puVar5 = &UNK_110430478;
  func_0x000107c613fc(&UNK_110430478,0x18,7);
  func_0x000107c61614(puVar5 + 0x10);
  func_0x000107c613fc(param_5,0x30,7);
  *(undefined **)(param_5 + 0x10) = puVar5;
  *(long *)(param_5 + 0x18) = lVar2;
  *(undefined8 *)(param_5 + 0x20) = param_1;
  *(undefined8 *)(param_5 + 0x28) = param_2;
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(lVar2);
  func_0x000107c6157c(param_2);
  func_0x00010090569c(uStack_68,param_5,uVar3);
  func_0x000107c61574(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61574(param_5);
  uVar3 = *(undefined8 *)(lVar2 + 0x10);
  func_0x000107c6157c(uVar3);
  func_0x000107c61574(lVar2);
  return uVar3;
}



/* Entry: 101a4f890; end: 101a4fa17;  */

void FUN_101a4f890(long param_1,undefined8 param_2,code *param_3)

{
  undefined *puVar1;
  undefined1 uStack_49;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    FUN_101a4fa60();
    puVar1 = &UNK_11077c590;
    func_0x000107c613f8(&UNK_11077c590,param_1,0,0);
    func_0x00010488ade0();
    func_0x000107c614ac(puVar1);
  }
  else {
    func_0x000107c61174();
    (*param_3)(&uStack_49);
    func_0x000107c61170(param_1);
    func_0x000100b60084(&uStack_49);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 101a4fa18; end: 101a4fa27;  */

void FUN_101a4fa18(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
  return;
}



/* Entry: 101a4fa28; end: 101a4fa53;  */

void FUN_101a4fa28(byte *param_1,byte param_2)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  *param_1 = param_2 & 1;
  return;
}



/* Entry: 101a4fa54; end: 101a4fa5f;  */

void FUN_101a4fa54(void)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined1 uStack_49;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  pcVar1 = *(code **)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 == 0) {
    FUN_101a4fa60();
    puVar3 = &UNK_11077c590;
    func_0x000107c613f8(&UNK_11077c590,lVar2,0,0);
    func_0x00010488ade0();
    func_0x000107c614ac(puVar3);
  }
  else {
    func_0x000107c61174();
    (*pcVar1)(&uStack_49);
    func_0x000107c61170(lVar2);
    func_0x000100b60084(&uStack_49);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 101a4fa60; end: 101a4fa9f;  */

void FUN_101a4fa60(void)

{
  undefined *puVar1;
  
  if (puRam0000000112deed08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0bc58;
  func_0x000107c61520(&UNK_10dd0bc58,&UNK_11077c590);
  puRam0000000112deed08 = puVar1;
  return;
}



/* Entry: 101a4faa0; end: 101a4faaf;  */

undefined1  [16] FUN_101a4faa0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar2 = 0;
    param_1 = 0xf000000000000000;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar1);
  }
  auVar3._8_8_ = param_1;
  auVar3._0_8_ = lVar2;
  return auVar3;
}



/* Entry: 101a4fab0; end: 101a4faf7;  */

void FUN_101a4fab0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101a4faf8; end: 101a4fb13;  */

void FUN_101a4faf8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101a4f1f8(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 101a4fb14; end: 101a4fb1f;  */

void FUN_101a4fb14(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long extraout_x8;
  long unaff_x20;
  long lVar8;
  long lVar9;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar2 = 0;
  func_0x000107c5f804();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar8 = (long)&puStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (lVar5 == 0) {
    uVar4 = 0;
    func_0x0001010415e8(0);
    (**(code **)(lVar9 + 0x68))
              (lVar8,*(undefined4 *)
                      PTR___s8Dispatch0A3QoSV0B6SClassO15userInteractiveyA2EmFWC_11034f7e8,lVar2);
    lVar5 = lVar8;
    func_0x000104188018(lVar8,0,0);
    (**(code **)(lVar9 + 8))(lVar8,lVar2);
    puVar6 = &UNK_1104305b8;
    func_0x000107c613fc(&UNK_1104305b8,0x20,7);
    *(undefined8 *)(puVar6 + 0x10) = uVar1;
    *(undefined8 *)(puVar6 + 0x18) = uVar7;
    func_0x000107c6157c(uVar7);
    func_0x00010090569c(FUN_101a4fb20,puVar6,uVar4);
    func_0x000107c61170(lVar5);
    func_0x000107c61574(puVar6);
  }
  else {
    puVar6 = &UNK_1104305e0;
    func_0x000107c613fc(&UNK_1104305e0,0x20,7);
    *(undefined8 *)(puVar6 + 0x10) = uVar1;
    *(undefined8 *)(puVar6 + 0x18) = uVar7;
    uStack_60 = 0x101a4ff44;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000f6b44;
    puStack_68 = &UNK_1104305f8;
    ppuVar3 = &puStack_80;
    puStack_58 = puVar6;
    func_0x000107c60bc4(ppuVar3);
    puVar6 = puStack_58;
    func_0x000107c6157c(uVar7);
    func_0x000107c615f0(lVar5);
    func_0x000107c61574(puVar6);
    func_0x000107c4e524(lVar5);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(lVar5);
  }
  return;
}



/* Entry: 101a4fb20; end: 101a4fb47;  */

void FUN_101a4fb20(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(0,0xf000000000000000);
  return;
}



/* Entry: 101a4fb48; end: 101a4fb63;  */

void FUN_101a4fb48(long param_1,long param_2)

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



/* Entry: 101a4fb64; end: 101a4fb8b;  */

void FUN_101a4fb64(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
             *(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 101a4fb8c; end: 101a4fbfb;  */

void FUN_101a4fb8c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  if (*(ulong *)(unaff_x20 + 0x28) >> 0x3c < 0xf) {
    func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101a4fbfc; end: 101a4fc07;  */

void FUN_101a4fbfc(void)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  pcVar1 = *(code **)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 == 0) {
    FUN_101a4fa60();
    puVar3 = &UNK_11077c590;
    func_0x000107c613f8(&UNK_11077c590,lVar2,0,0);
    func_0x00010488ade0();
    func_0x000107c614ac(puVar3);
  }
  else {
    func_0x000107c61174();
    (*pcVar1)(&uStack_58);
    func_0x000107c61170(lVar2);
    func_0x000100b60084(&uStack_58);
    func_0x000107c61170(lVar2);
    func_0x0001000b44c0(uStack_58,uStack_50);
  }
  return;
}



/* Entry: 101a4fc08; end: 101a4fc27;  */

void FUN_101a4fc08(undefined8 param_1)

{
  long unaff_x20;
  
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 101a4fc28; end: 101a4fc3b;  */

void FUN_101a4fc28(uint param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000101a4fc38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1 & 1);
  return;
}



/* Entry: 101a4fc3c; end: 101a4fc5f;  */

uint FUN_101a4fc3c(uint param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return param_1 & 1;
}



/* Entry: 101a4fc60; end: 101a4fc7b;  */

void FUN_101a4fc60(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101a4e8f4(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 101a4fc7c; end: 101a4fc8b;  */

void FUN_101a4fc7c(void)

{
  undefined8 uVar1;
  byte bVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long extraout_x8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  bVar2 = *(byte *)(unaff_x20 + 0x28);
  lVar3 = 0;
  func_0x000107c5f804();
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar9 = (long)&puStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (lVar6 == 0) {
    uVar5 = 0;
    func_0x0001010415e8(0);
    (**(code **)(lVar10 + 0x68))
              (lVar9,*(undefined4 *)
                      PTR___s8Dispatch0A3QoSV0B6SClassO15userInteractiveyA2EmFWC_11034f7e8,lVar3);
    lVar6 = lVar9;
    func_0x000104188018(lVar9,0,0);
    (**(code **)(lVar10 + 8))(lVar9,lVar3);
    puVar7 = &UNK_1104307c0;
    func_0x000107c613fc(&UNK_1104307c0,0x21,7);
    *(undefined8 *)(puVar7 + 0x10) = uVar1;
    *(undefined8 *)(puVar7 + 0x18) = uVar8;
    puVar7[0x20] = bVar2 & 1;
    func_0x000107c6157c(uVar8);
    func_0x00010090569c(0x101a4ff4c,puVar7,uVar5);
    func_0x000107c61170(lVar6);
    func_0x000107c61574(puVar7);
  }
  else {
    puVar7 = &UNK_1104307e8;
    func_0x000107c613fc(&UNK_1104307e8,0x21,7);
    *(undefined8 *)(puVar7 + 0x10) = uVar1;
    *(undefined8 *)(puVar7 + 0x18) = uVar8;
    puVar7[0x20] = bVar2 & 1;
    uStack_60 = 0x101a4ff48;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000f6b44;
    puStack_68 = &UNK_110430800;
    ppuVar4 = &puStack_80;
    puStack_58 = puVar7;
    func_0x000107c60bc4(ppuVar4);
    puVar7 = puStack_58;
    func_0x000107c6157c(uVar8);
    func_0x000107c615f0(lVar6);
    func_0x000107c61574(puVar7);
    func_0x000107c4e524(lVar6);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c615e8(lVar6);
  }
  return;
}



/* Entry: 101a4fc8c; end: 101a4fceb;  */

void FUN_101a4fc8c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (*(undefined8 *)(unaff_x20 + 0x18),*(undefined1 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 101a4fcec; end: 101a4fd2b;  */

void FUN_101a4fcec(byte *param_1)

{
  long lVar1;
  byte bVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    bVar2 = 0;
  }
  else {
    bVar2 = 3;
    func_0x000100858660(3,0xd000000000000030,0x800000010efccb80,0,lVar1);
    func_0x000107c61170(lVar1);
    bVar2 = bVar2 & 1;
  }
  *param_1 = bVar2;
  return;
}



/* Entry: 101a4fd2c; end: 101a4fefb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101a4fd2c(byte param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_90 [8];
  long alStack_88 [3];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar5 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (param_1 < 2) {
    func_0x0001000d224c(alStack_88);
    lVar6 = alStack_88[0];
  }
  else {
    if (param_1 != 2) {
      lVar6 = *(long *)(param_5 + _DAT_112deec90);
      func_0x000107c615f4(lVar6,2);
      goto LAB_101a4fe20;
    }
    lVar6 = *(long *)(param_5 + _DAT_112deec88);
    func_0x000107c615f0(lVar6);
  }
  if (lVar6 == 0) {
    func_0x000107c61174(param_4);
    return param_4;
  }
  func_0x000107c615f0(lVar6);
LAB_101a4fe20:
  func_0x000107c5eea0(puVar5);
  func_0x000107c5fadc(param_2,param_3);
  lVar2 = lVar6;
  func_0x000107c4f558(lVar6);
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  lVar3 = lVar6;
  func_0x00010085883c(lVar6);
  func_0x0001000d224c(alStack_88);
  plVar4 = alStack_88;
  func_0x0001000a8868(plVar4,uStack_70);
  func_0x0001008599bc(lVar3,3,puVar5,uStack_70,uStack_68,plVar4);
  func_0x000107c615ec(lVar6,2);
  (**(code **)(lVar7 + 8))(puVar5,lVar1);
  func_0x0001000834e4(alStack_88);
  return lVar2;
}



/* Entry: 101a4fefc; end: 101a4ff0f;  */

void FUN_101a4fefc(void)

{
  FUN_101a4fc60();
  return;
}



/* Entry: 101a4ff10; end: 101a4ff53;  */

void FUN_101a4ff10(long param_1,long param_2)

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



/* Entry: 101a4ff54; end: 101a50247;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a4ff54(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined *puVar9;
  long unaff_x20;
  undefined8 uVar10;
  long lStack_70;
  long lStack_68;
  
  func_0x000107c613fc();
  puVar1 = &UNK_1104309a8;
  func_0x000107c613fc(&UNK_1104309a8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  func_0x0001000285a8(0x112deed28,&UNK_10d9bbf90);
  func_0x000107c613fc();
  func_0x000107c61174();
  puVar2 = &UNK_100858920;
  func_0x0001000bdd8c(&UNK_100858920,puVar1);
  uVar3 = param_2;
  func_0x000107c3fa04();
  func_0x000107c61180();
  puVar1 = &UNK_1104309d0;
  func_0x000107c613fc(&UNK_1104309d0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  *(undefined **)(puVar1 + 0x18) = puVar2;
  uVar10 = 0x112da99a8;
  func_0x0001000285a8(0x112da99a8,&UNK_10d951070);
  func_0x000107c613fc();
  func_0x000107c615f0(uVar3);
  func_0x000107c6157c(puVar2);
  pcVar4 = FUN_101a50338;
  func_0x0001000bdd8c(FUN_101a50338,puVar1);
  puVar1 = &UNK_1104309f8;
  func_0x000107c613fc(&UNK_1104309f8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  *(undefined **)(puVar1 + 0x18) = puVar2;
  func_0x000107c613fc(uVar10,0x18,7);
  func_0x000107c615f0(uVar3);
  func_0x000107c6157c(puVar2);
  pcVar5 = FUN_101a50430;
  func_0x0001000bdd8c(FUN_101a50430,puVar1);
  uVar10 = *(undefined8 *)(param_3 + _DAT_113092298);
  lVar6 = 0;
  func_0x0001003a5514();
  lVar7 = lVar6;
  func_0x000107c610f8();
  *(undefined8 *)(lVar7 + _DAT_112dee900) = uVar10;
  puVar1 = PTR_s_init_1125d9248;
  lStack_70 = lVar7;
  lStack_68 = lVar6;
  func_0x000107c615f0(uVar10);
  plVar8 = &lStack_70;
  func_0x000107c61154(plVar8,puVar1);
  puVar1 = &UNK_110430a20;
  func_0x000107c613fc(&UNK_110430a20,0x38,7);
  *(code **)(puVar1 + 0x10) = pcVar4;
  *(code **)(puVar1 + 0x18) = pcVar5;
  *(undefined8 *)(puVar1 + 0x20) = uVar3;
  *(long **)(puVar1 + 0x28) = plVar8;
  *(undefined **)(puVar1 + 0x30) = puVar2;
  func_0x0001000285a8(0x112deed30,&UNK_10d9bbfa0);
  func_0x000107c613fc();
  func_0x000107c615f0(uVar3);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(pcVar5);
  func_0x000107c61174(plVar8);
  puVar9 = &UNK_100857204;
  func_0x0001000bdd8c(&UNK_100857204,puVar1);
  func_0x00010021737c(0);
  func_0x000107c610f8();
  func_0x000107c61174(plVar8);
  func_0x0001003a5534(puVar9,pcVar5,pcVar4,plVar8);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(plVar8);
  func_0x000107c61574(puVar2);
  func_0x000107c615e8(uVar3);
  *(undefined **)(unaff_x20 + 0x10) = puVar9;
  return;
}



/* Entry: 101a50248; end: 101a50337;  */

void FUN_101a50248(long *param_1,long param_2)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5eea0(puVar3);
  if (param_2 != 0) {
    func_0x000107c4097c();
    func_0x000107c61180();
  }
  func_0x0001000d224c(auStack_78);
  puVar2 = auStack_78;
  func_0x0001000a8868(puVar2,uStack_60);
  FUN_101a4d1cc(0,puVar3,uStack_60,uStack_58,puVar2);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
  func_0x0001000834e4(auStack_78);
  *param_1 = param_2;
  return;
}



/* Entry: 101a50338; end: 101a5033f;  */

void FUN_101a50338(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = 0;
  func_0x000107c5eea4(0,*(undefined8 *)(unaff_x20 + 0x18));
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  puVar4 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5eea0(puVar4);
  if (lVar2 != 0) {
    func_0x000107c4097c();
    func_0x000107c61180();
  }
  func_0x0001000d224c(auStack_78);
  puVar3 = auStack_78;
  func_0x0001000a8868(puVar3,uStack_60);
  FUN_101a4d1cc(0,puVar4,uStack_60,uStack_58,puVar3);
  (**(code **)(lVar5 + 8))(puVar4,lVar1);
  func_0x0001000834e4(auStack_78);
  *param_1 = lVar2;
  return;
}



/* Entry: 101a50340; end: 101a5042f;  */

void FUN_101a50340(long *param_1,long param_2)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5eea0(puVar3);
  if (param_2 != 0) {
    func_0x000107c4097c();
    func_0x000107c61180();
  }
  func_0x0001000d224c(auStack_78);
  puVar2 = auStack_78;
  func_0x0001000a8868(puVar2,uStack_60);
  FUN_101a4d1cc(1,puVar3,uStack_60,uStack_58,puVar2);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
  func_0x0001000834e4(auStack_78);
  *param_1 = param_2;
  return;
}



/* Entry: 101a50430; end: 101a50437;  */

void FUN_101a50430(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = 0;
  func_0x000107c5eea4(0,*(undefined8 *)(unaff_x20 + 0x18));
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  puVar4 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5eea0(puVar4);
  if (lVar2 != 0) {
    func_0x000107c4097c();
    func_0x000107c61180();
  }
  func_0x0001000d224c(auStack_78);
  puVar3 = auStack_78;
  func_0x0001000a8868(puVar3,uStack_60);
  FUN_101a4d1cc(1,puVar4,uStack_60,uStack_58,puVar3);
  (**(code **)(lVar5 + 8))(puVar4,lVar1);
  func_0x0001000834e4(auStack_78);
  *param_1 = lVar2;
  return;
}



/* Entry: 101a50438; end: 101a50463;  */

void FUN_101a50438(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101a50464; end: 101a5046b;  */

void FUN_101a50464(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101a5046c; end: 101a5048f;  */

void FUN_101a5046c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101a50490; end: 101a504a3;  */

void FUN_101a50490(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 101a504a4; end: 101a5050f;  */

undefined8 FUN_101a504a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_2;
  func_0x00010064be2c(param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 101a50510; end: 101a5052b;  */

void FUN_101a50510(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101a5052c; end: 101a5058f; -[_TtC31MemoriesValdiCryptoServicesImpl30MemoriesValdiCryptoServiceImpl createAuthKeyWithParams:] */

void FUN_101a5052c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_101a515a8(param_3,0x101a550e8);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101a50590; end: 101a505f3; -[_TtC31MemoriesValdiCryptoServicesImpl30MemoriesValdiCryptoServiceImpl createEncryptionKeyWithParams:] */

void FUN_101a50590(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_101a515a8(param_3,0x101a550f4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101a505f4; end: 101a5064f; -[_TtC31MemoriesValdiCryptoServicesImpl30MemoriesValdiCryptoServiceImpl encryptKeyAndIvWithParams:] */

void FUN_101a505f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x000101a5174c(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101a50650; end: 101a506ab; -[_TtC31MemoriesValdiCryptoServicesImpl30MemoriesValdiCryptoServiceImpl decryptKeyAndIvWithParams:] */

void FUN_101a50650(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x000101a51a94(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101a506ac; end: 101a50707; -[_TtC31MemoriesValdiCryptoServicesImpl30MemoriesValdiCryptoServiceImpl encryptAndEncodeMasterKeyWithParams:] */

void FUN_101a506ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x000101a51ddc(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101a50708; end: 101a50763; -[_TtC31MemoriesValdiCryptoServicesImpl30MemoriesValdiCryptoServiceImpl decryptMasterKeyAndIvWithParams:] */

void FUN_101a50708(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x000101a51fd4(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101a50764; end: 101a507bf; -[_TtC31MemoriesValdiCryptoServicesImpl30MemoriesValdiCryptoServiceImpl checkPassphraseWithParams:] */

void FUN_101a50764(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_101a52350(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101a507c0; end: 101a50823; -[_TtC31MemoriesValdiCryptoServicesImpl30MemoriesValdiCryptoServiceImpl hashPassphraseWithPassphrase:] */

void FUN_101a507c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_101a52768(param_3,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 101a50824; end: 101a5087f; -[_TtC31MemoriesValdiCryptoServicesImpl30MemoriesValdiCryptoServiceImpl gcmEncryptWithParams:] */

void FUN_101a50824(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_101a52adc(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101a50880; end: 101a508db; -[_TtC31MemoriesValdiCryptoServicesImpl30MemoriesValdiCryptoServiceImpl generateSecureRandomBytesWithParams:] */

void FUN_101a50880(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_101a52d90(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101a508dc; end: 101a509f3;  */

undefined8 FUN_101a508dc(undefined8 param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  undefined8 unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61174();
  if (param_2 >> 0x3c < 0xf) {
    func_0x000100de78a0(param_1,param_2);
    uVar1 = param_1;
    func_0x000107c5ee20(param_1,param_2);
    func_0x000100cc36a8(param_1,param_2);
  }
  else {
    uVar1 = 0;
  }
  func_0x000107c559a4(unaff_x20);
  func_0x000107c61170(uVar1);
  if (param_4 >> 0x3c < 0xf) {
    func_0x00010006c00c(param_3,param_4);
    uVar1 = param_3;
    func_0x000107c5ee20(param_3,param_4);
    func_0x000100cc36a8(param_3,param_4);
  }
  else {
    uVar1 = 0;
  }
  func_0x000107c55938(unaff_x20);
  func_0x000107c61170(unaff_x20);
  func_0x000100cc36a8(param_3,param_4);
  func_0x000100cc36a8(param_1,param_2);
  func_0x000107c61170(uVar1);
  return unaff_x20;
}



/* Entry: 101a509f4; end: 101a50a4f; -[_TtC31MemoriesValdiCryptoServicesImpl30MemoriesValdiCryptoServiceImpl decryptKeyAndIvBulkWithParams:] */

void FUN_101a509f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_101a52fec(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101a50a50; end: 101a50aab; -[_TtC31MemoriesValdiCryptoServicesImpl30MemoriesValdiCryptoServiceImpl decryptSnapDocWithParams:] */

void FUN_101a50a50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x000101a536e0(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101a50aac; end: 101a50b07; -[_TtC31MemoriesValdiCryptoServicesImpl30MemoriesValdiCryptoServiceImpl encryptSnapDocWithParams:] */

void FUN_101a50aac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x000101a5430c(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101a50b08; end: 101a50b9f;  */

void FUN_101a50b08(long param_1,long param_2,ulong *param_3)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = param_2 - param_1;
  }
  if (uVar1 >> 0x20 == 0) {
    uVar5 = *param_3;
    uVar3 = uVar5;
    func_0x000107c61558();
    *param_3 = uVar5;
    uVar4 = uVar5;
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
      func_0x000101a511d0(0,*(undefined8 *)(uVar5 + 0x10),0,uVar5,
                          PTR__swift_bridgeObjectRelease_11034f258);
    }
    *param_3 = uVar4;
    func_0x000107c60730(param_1,uVar1,uVar4 + 0x20);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101a50ba0);
  (*pcVar2)();
}



/* Entry: 101a50ba0; end: 101a50bdb; -[_TtC31MemoriesValdiCryptoServicesImpl30MemoriesValdiCryptoServiceImpl init] */

void FUN_101a50ba0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}


