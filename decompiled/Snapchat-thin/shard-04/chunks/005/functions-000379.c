/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1036501e4; end: 103650223;  */

void FUN_1036501e4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f819a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf26a0;
  func_0x000107c61520(&UNK_10dbf26a0,&UNK_1106756a0);
  puRam0000000112f819a8 = puVar1;
  return;
}



/* Entry: 103650224; end: 103650247;  */

void FUN_103650224(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103650248();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103650248; end: 103650287;  */

void FUN_103650248(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f819b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf2710;
  func_0x000107c61520(&UNK_10dbf2710,&UNK_110675730);
  puRam0000000112f819b0 = puVar1;
  return;
}



/* Entry: 103650288; end: 10365029b;  */

void FUN_103650288(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x10365002c)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_1036502cc();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10365029c; end: 1036502cb;  */

void FUN_10365029c(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1036502cc; end: 10365030b;  */

void FUN_1036502cc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f819b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbf26c8;
  func_0x000107c61520(&DAT_10dbf26c8,&UNK_110675730);
  puRam0000000112f819b8 = puVar1;
  return;
}



/* Entry: 10365030c; end: 10365030f;  */

void FUN_10365030c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f819c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf2778;
  func_0x000107c61520(&UNK_10dbf2778,&UNK_110675730);
  puRam0000000112f819c0 = puVar1;
  return;
}



/* Entry: 103650310; end: 10365034f;  */

void FUN_103650310(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f819c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf2778;
  func_0x000107c61520(&UNK_10dbf2778,&UNK_110675730);
  puRam0000000112f819c0 = puVar1;
  return;
}



/* Entry: 103650350; end: 103650467;  */

/* WARNING: Possible PIC construction at 0x000103650368: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010365038c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036503b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036503dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103650400: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103650428: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010365036c) */
/* WARNING: Removing unreachable block (ram,0x000103650378) */
/* WARNING: Removing unreachable block (ram,0x000103650390) */
/* WARNING: Removing unreachable block (ram,0x00010365039c) */
/* WARNING: Removing unreachable block (ram,0x0001036503a4) */
/* WARNING: Removing unreachable block (ram,0x0001036503b8) */
/* WARNING: Removing unreachable block (ram,0x0001036503c4) */
/* WARNING: Removing unreachable block (ram,0x0001036503cc) */
/* WARNING: Removing unreachable block (ram,0x0001036503e0) */
/* WARNING: Removing unreachable block (ram,0x0001036503ec) */
/* WARNING: Removing unreachable block (ram,0x000103650404) */
/* WARNING: Removing unreachable block (ram,0x000103650410) */
/* WARNING: Removing unreachable block (ram,0x000103650418) */
/* WARNING: Removing unreachable block (ram,0x00010365042c) */
/* WARNING: Removing unreachable block (ram,0x000103650438) */
/* WARNING: Removing unreachable block (ram,0x000103650440) */
/* WARNING: Removing unreachable block (ram,0x000103650458) */
/* WARNING: Removing unreachable block (ram,0x00010365044c) */
/* WARNING: Removing unreachable block (ram,0x000103650424) */
/* WARNING: Removing unreachable block (ram,0x0001036503fc) */
/* WARNING: Removing unreachable block (ram,0x0001036503d8) */
/* WARNING: Removing unreachable block (ram,0x0001036503b0) */
/* WARNING: Removing unreachable block (ram,0x000103650388) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103650350(ulong *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = (uint)(param_1[1] >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = param_1[1] & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 103650468; end: 1036515df;  */

undefined8 * FUN_103650468(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = *param_2;
  uVar4 = param_2[1];
  func_0x00010006c00c(uVar3,uVar4);
  *param_1 = uVar3;
  param_1[1] = uVar4;
  pcVar2 = (char *)(param_2 + 4);
  cVar1 = *pcVar2;
  if (cVar1 == '\x03') {
    uVar3 = param_2[0xe];
    uVar5 = param_2[0x11];
    uVar4 = param_2[0x10];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar3;
    param_1[0x11] = uVar5;
    param_1[0x10] = uVar4;
    param_1[0x12] = param_2[0x12];
    uVar3 = param_2[6];
    uVar5 = param_2[9];
    uVar4 = param_2[8];
    param_1[7] = param_2[7];
    param_1[6] = uVar3;
    param_1[9] = uVar5;
    param_1[8] = uVar4;
    uVar5 = param_2[10];
    uVar4 = param_2[0xd];
    uVar3 = param_2[0xc];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar5;
    param_1[0xd] = uVar4;
    param_1[0xc] = uVar3;
    uVar5 = param_2[2];
    uVar4 = param_2[5];
    uVar3 = *(undefined8 *)pcVar2;
    param_1[3] = param_2[3];
    param_1[2] = uVar5;
    param_1[5] = uVar4;
    param_1[4] = uVar3;
  }
  else {
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    func_0x00010006c00c(uVar3,uVar4);
    param_1[2] = uVar3;
    param_1[3] = uVar4;
    if (cVar1 == '\x02') {
      uVar3 = *(undefined8 *)pcVar2;
      param_1[5] = param_2[5];
      param_1[4] = uVar3;
      param_1[6] = param_2[6];
    }
    else {
      *(char *)(param_1 + 4) = cVar1;
      uVar3 = param_2[5];
      uVar4 = param_2[6];
      func_0x00010006c00c(uVar3,uVar4);
      param_1[5] = uVar3;
      param_1[6] = uVar4;
    }
    cVar1 = *(char *)(param_2 + 7);
    if (cVar1 == '\x02') {
      uVar3 = param_2[7];
      param_1[8] = param_2[8];
      param_1[7] = uVar3;
      param_1[9] = param_2[9];
    }
    else {
      *(char *)(param_1 + 7) = cVar1;
      uVar3 = param_2[8];
      uVar4 = param_2[9];
      func_0x00010006c00c(uVar3,uVar4);
      param_1[8] = uVar3;
      param_1[9] = uVar4;
    }
    cVar1 = *(char *)(param_2 + 10);
    if (cVar1 == '\x02') {
      uVar3 = param_2[10];
      param_1[0xb] = param_2[0xb];
      param_1[10] = uVar3;
      param_1[0xc] = param_2[0xc];
    }
    else {
      *(char *)(param_1 + 10) = cVar1;
      uVar3 = param_2[0xb];
      uVar4 = param_2[0xc];
      func_0x00010006c00c(uVar3,uVar4);
      param_1[0xb] = uVar3;
      param_1[0xc] = uVar4;
    }
    cVar1 = *(char *)(param_2 + 0xd);
    if (cVar1 == '\x02') {
      uVar3 = param_2[0xd];
      param_1[0xe] = param_2[0xe];
      param_1[0xd] = uVar3;
      param_1[0xf] = param_2[0xf];
    }
    else {
      *(char *)(param_1 + 0xd) = cVar1;
      uVar3 = param_2[0xe];
      uVar4 = param_2[0xf];
      func_0x00010006c00c(uVar3,uVar4);
      param_1[0xe] = uVar3;
      param_1[0xf] = uVar4;
    }
    cVar1 = *(char *)(param_2 + 0x10);
    if (cVar1 == '\x02') {
      uVar3 = param_2[0x10];
      param_1[0x11] = param_2[0x11];
      param_1[0x10] = uVar3;
      param_1[0x12] = param_2[0x12];
    }
    else {
      *(char *)(param_1 + 0x10) = cVar1;
      uVar3 = param_2[0x11];
      uVar4 = param_2[0x12];
      func_0x00010006c00c(uVar3,uVar4);
      param_1[0x11] = uVar3;
      param_1[0x12] = uVar4;
    }
  }
  pcVar2 = (char *)(param_2 + 0x15);
  cVar1 = *pcVar2;
  if (cVar1 == '\x03') {
    uVar3 = param_2[0x1f];
    uVar5 = param_2[0x22];
    uVar4 = param_2[0x21];
    param_1[0x20] = param_2[0x20];
    param_1[0x1f] = uVar3;
    param_1[0x22] = uVar5;
    param_1[0x21] = uVar4;
    param_1[0x23] = param_2[0x23];
    uVar3 = param_2[0x17];
    uVar5 = param_2[0x1a];
    uVar4 = param_2[0x19];
    param_1[0x18] = param_2[0x18];
    param_1[0x17] = uVar3;
    param_1[0x1a] = uVar5;
    param_1[0x19] = uVar4;
    uVar5 = param_2[0x1b];
    uVar4 = param_2[0x1e];
    uVar3 = param_2[0x1d];
    param_1[0x1c] = param_2[0x1c];
    param_1[0x1b] = uVar5;
    param_1[0x1e] = uVar4;
    param_1[0x1d] = uVar3;
    uVar5 = param_2[0x13];
    uVar4 = param_2[0x16];
    uVar3 = *(undefined8 *)pcVar2;
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar5;
    param_1[0x16] = uVar4;
    param_1[0x15] = uVar3;
  }
  else {
    uVar3 = param_2[0x13];
    uVar4 = param_2[0x14];
    func_0x00010006c00c(uVar3,uVar4);
    param_1[0x13] = uVar3;
    param_1[0x14] = uVar4;
    if (cVar1 == '\x02') {
      uVar3 = *(undefined8 *)pcVar2;
      param_1[0x16] = param_2[0x16];
      param_1[0x15] = uVar3;
      param_1[0x17] = param_2[0x17];
    }
    else {
      *(char *)(param_1 + 0x15) = cVar1;
      uVar3 = param_2[0x16];
      uVar4 = param_2[0x17];
      func_0x00010006c00c(uVar3,uVar4);
      param_1[0x16] = uVar3;
      param_1[0x17] = uVar4;
    }
    cVar1 = *(char *)(param_2 + 0x18);
    if (cVar1 == '\x02') {
      uVar3 = param_2[0x18];
      param_1[0x19] = param_2[0x19];
      param_1[0x18] = uVar3;
      param_1[0x1a] = param_2[0x1a];
    }
    else {
      *(char *)(param_1 + 0x18) = cVar1;
      uVar3 = param_2[0x19];
      uVar4 = param_2[0x1a];
      func_0x00010006c00c(uVar3,uVar4);
      param_1[0x19] = uVar3;
      param_1[0x1a] = uVar4;
    }
    cVar1 = *(char *)(param_2 + 0x1b);
    if (cVar1 == '\x02') {
      uVar3 = param_2[0x1b];
      param_1[0x1c] = param_2[0x1c];
      param_1[0x1b] = uVar3;
      param_1[0x1d] = param_2[0x1d];
    }
    else {
      *(char *)(param_1 + 0x1b) = cVar1;
      uVar3 = param_2[0x1c];
      uVar4 = param_2[0x1d];
      func_0x00010006c00c(uVar3,uVar4);
      param_1[0x1c] = uVar3;
      param_1[0x1d] = uVar4;
    }
    cVar1 = *(char *)(param_2 + 0x1e);
    if (cVar1 == '\x02') {
      uVar3 = param_2[0x1e];
      param_1[0x1f] = param_2[0x1f];
      param_1[0x1e] = uVar3;
      param_1[0x20] = param_2[0x20];
    }
    else {
      *(char *)(param_1 + 0x1e) = cVar1;
      uVar3 = param_2[0x1f];
      uVar4 = param_2[0x20];
      func_0x00010006c00c(uVar3,uVar4);
      param_1[0x1f] = uVar3;
      param_1[0x20] = uVar4;
    }
    if (*(char *)(param_2 + 0x21) == '\x02') {
      uVar3 = param_2[0x21];
      param_1[0x22] = param_2[0x22];
      param_1[0x21] = uVar3;
      param_1[0x23] = param_2[0x23];
    }
    else {
      *(char *)(param_1 + 0x21) = *(char *)(param_2 + 0x21);
      uVar3 = param_2[0x22];
      uVar4 = param_2[0x23];
      func_0x00010006c00c(uVar3,uVar4);
      param_1[0x22] = uVar3;
      param_1[0x23] = uVar4;
    }
  }
  return param_1;
}



/* Entry: 1036515e0; end: 1036516f7;  */

int FUN_1036515e0(int *param_1,uint param_2)

{
  uint uVar1;
  byte bVar2;
  
  if (param_2 != 0) {
    if ((0xfc < param_2) && ((char)param_1[0x48] != '\0')) {
      return *param_1 + 0xfd;
    }
    bVar2 = *(byte *)(param_1 + 8);
    if ((1 < bVar2) && (uVar1 = (bVar2 & 0xfe) + 0x7ffffffe, (uVar1 & 0x7ffffffe) != 0)) {
      return (uVar1 & 0x7ffffffe | bVar2 & 1) - 1;
    }
  }
  return 0;
}



/* Entry: 1036516f8; end: 10365178b;  */

/* WARNING: Possible PIC construction at 0x000103651710: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103651738: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103651760: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103651714) */
/* WARNING: Removing unreachable block (ram,0x000103651720) */
/* WARNING: Removing unreachable block (ram,0x000103651728) */
/* WARNING: Removing unreachable block (ram,0x00010365173c) */
/* WARNING: Removing unreachable block (ram,0x000103651748) */
/* WARNING: Removing unreachable block (ram,0x000103651750) */
/* WARNING: Removing unreachable block (ram,0x000103651764) */
/* WARNING: Removing unreachable block (ram,0x00010365177c) */
/* WARNING: Removing unreachable block (ram,0x000103651770) */
/* WARNING: Removing unreachable block (ram,0x00010365175c) */
/* WARNING: Removing unreachable block (ram,0x000103651734) */

void FUN_1036516f8(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = param_1[1];
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    func_0x000107c61574(*param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 10365178c; end: 103651e0b;  */

undefined8 * FUN_10365178c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  uVar1 = param_2[1];
  func_0x00010006c00c(uVar3,uVar1);
  *param_1 = uVar3;
  param_1[1] = uVar1;
  cVar2 = *(char *)(param_2 + 2);
  if (cVar2 == '\x02') {
    uVar3 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = uVar3;
    param_1[4] = param_2[4];
  }
  else {
    *(char *)(param_1 + 2) = cVar2;
    uVar3 = param_2[3];
    uVar1 = param_2[4];
    func_0x00010006c00c(uVar3,uVar1);
    param_1[3] = uVar3;
    param_1[4] = uVar1;
  }
  cVar2 = *(char *)(param_2 + 5);
  if (cVar2 == '\x02') {
    uVar3 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar3;
    param_1[7] = param_2[7];
  }
  else {
    *(char *)(param_1 + 5) = cVar2;
    uVar3 = param_2[6];
    uVar1 = param_2[7];
    func_0x00010006c00c(uVar3,uVar1);
    param_1[6] = uVar3;
    param_1[7] = uVar1;
  }
  cVar2 = *(char *)(param_2 + 8);
  if (cVar2 == '\x02') {
    uVar3 = param_2[8];
    param_1[9] = param_2[9];
    param_1[8] = uVar3;
    param_1[10] = param_2[10];
  }
  else {
    *(char *)(param_1 + 8) = cVar2;
    uVar3 = param_2[9];
    uVar1 = param_2[10];
    func_0x00010006c00c(uVar3,uVar1);
    param_1[9] = uVar3;
    param_1[10] = uVar1;
  }
  cVar2 = *(char *)(param_2 + 0xb);
  if (cVar2 == '\x02') {
    uVar3 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar3;
    param_1[0xd] = param_2[0xd];
  }
  else {
    *(char *)(param_1 + 0xb) = cVar2;
    uVar3 = param_2[0xc];
    uVar1 = param_2[0xd];
    func_0x00010006c00c(uVar3,uVar1);
    param_1[0xc] = uVar3;
    param_1[0xd] = uVar1;
  }
  cVar2 = *(char *)(param_2 + 0xe);
  if (cVar2 == '\x02') {
    uVar3 = param_2[0xe];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar3;
    param_1[0x10] = param_2[0x10];
  }
  else {
    *(char *)(param_1 + 0xe) = cVar2;
    uVar3 = param_2[0xf];
    uVar1 = param_2[0x10];
    func_0x00010006c00c(uVar3,uVar1);
    param_1[0xf] = uVar3;
    param_1[0x10] = uVar1;
  }
  return param_1;
}



/* Entry: 103651e0c; end: 103651edf;  */

int FUN_103651e0c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && ((char)param_1[0x22] != '\0')) {
    return *param_1 + 0xfe;
  }
  uVar1 = 0xfffffffe;
  if (1 < *(byte *)(param_1 + 4)) {
    uVar1 = (*(byte *)(param_1 + 4) + 0x7ffffffe & 0x7fffffff) - 1;
  }
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103651ee0; end: 103651f9f;  */

void FUN_103651ee0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f819d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbf26e4;
  func_0x000107c61520(&DAT_10dbf26e4,&UNK_110675730);
  puRam0000000112f819d0 = puVar1;
  return;
}



/* Entry: 103651fa0; end: 103651fe3;  */

uint FUN_103651fa0(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uVar1 = 0;
  uStack_48 = param_1[0xd];
  uStack_50 = param_1[0xc];
  uStack_38 = param_1[0xf];
  uStack_40 = param_1[0xe];
  uStack_30 = param_1[0x10];
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_68 = param_1[9];
  uStack_70 = param_1[8];
  uStack_58 = param_1[0xb];
  uStack_60 = param_1[10];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_d8 = unaff_x20[0xd];
  uStack_e0 = unaff_x20[0xc];
  uStack_c8 = unaff_x20[0xf];
  uStack_d0 = unaff_x20[0xe];
  uStack_c0 = unaff_x20[0x10];
  uStack_118 = unaff_x20[5];
  uStack_120 = unaff_x20[4];
  uStack_108 = unaff_x20[7];
  uStack_110 = unaff_x20[6];
  uStack_f8 = unaff_x20[9];
  uStack_100 = unaff_x20[8];
  uStack_e8 = unaff_x20[0xb];
  uStack_f0 = unaff_x20[10];
  uStack_138 = unaff_x20[1];
  uStack_140 = *unaff_x20;
  uStack_128 = unaff_x20[3];
  uStack_130 = unaff_x20[2];
  FUN_10364f144(&uStack_140,&uStack_b0);
  return uVar1 & 1;
}



/* Entry: 103651fe4; end: 10365200b;  */

void FUN_103651fe4(void)

{
  func_0x000100d57240();
  return;
}



/* Entry: 10365200c; end: 10365203b;  */

void FUN_10365200c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_108 [72];
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = unaff_x20[0xd];
  uStack_60 = unaff_x20[0xc];
  uStack_48 = unaff_x20[0xf];
  uStack_50 = unaff_x20[0xe];
  uStack_40 = unaff_x20[0x10];
  uStack_98 = unaff_x20[5];
  uStack_a0 = unaff_x20[4];
  uStack_88 = unaff_x20[7];
  uStack_90 = unaff_x20[6];
  uStack_78 = unaff_x20[9];
  uStack_80 = unaff_x20[8];
  uStack_68 = unaff_x20[0xb];
  uStack_70 = unaff_x20[10];
  uStack_b8 = unaff_x20[1];
  uStack_c0 = *unaff_x20;
  uStack_a8 = unaff_x20[3];
  uStack_b0 = unaff_x20[2];
  func_0x000107c6068c(auStack_108,0);
  func_0x000107c5fa50(auStack_108,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10365203c; end: 103652063;  */

void FUN_10365203c(void)

{
  func_0x000100d5722c();
  return;
}



/* Entry: 103652064; end: 10365206b;  */

void FUN_103652064(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 10365206c; end: 1036520fb;  */

void FUN_10365206c(byte param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = lVar3;
  if ((uVar1 & 1) == 0) {
    FUN_1036520fc(0);
    func_0x000107c613fc();
    FUN_103658250();
    func_0x000107c61574(lVar3);
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  func_0x000107c61428(lVar2 + 0x10,auStack_48,1,0);
  *(byte *)(lVar2 + 0x10) = param_1 & 1;
  return;
}



/* Entry: 1036520fc; end: 10365211b;  */

void FUN_1036520fc(void)

{
  func_0x000107c61168(&PTR_PTR_112f81bc8);
  return;
}



/* Entry: 10365211c; end: 10365223f;  */

void FUN_10365211c(byte param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = lVar3;
  if ((uVar1 & 1) == 0) {
    FUN_1036520fc(0);
    func_0x000107c613fc();
    FUN_103658250();
    func_0x000107c61574(lVar3);
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  func_0x000107c61428(lVar2 + 0x29,auStack_48,1,0);
  *(byte *)(lVar2 + 0x29) = param_1 & 1;
  return;
}



/* Entry: 103652240; end: 10365237b;  */

long FUN_103652240(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_58 [24];
  
  lVar3 = param_3 + 0x58;
  func_0x000107c61428(lVar3,auStack_58,0,0);
  lVar1 = *(long *)(param_3 + 0x58);
  uVar2 = *(undefined8 *)(param_3 + 0x60);
  lVar4 = *(long *)(param_3 + 0x68);
  lVar5 = lVar1;
  if (lVar4 == 0) {
    FUN_10365f390();
    lVar5 = lVar3;
  }
  FUN_10365906c(lVar1,uVar2,lVar4);
  return lVar5;
}



/* Entry: 10365237c; end: 1036524b3;  */

bool FUN_10365237c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x58,auStack_48,0,0);
  uVar1 = *(undefined8 *)(param_3 + 0x58);
  uVar2 = *(undefined8 *)(param_3 + 0x60);
  lVar3 = *(long *)(param_3 + 0x68);
  if (lVar3 == 0) {
    FUN_10365906c(uVar1,uVar2,0);
  }
  else {
    FUN_10365906c(uVar1,uVar2,lVar3);
    func_0x000103659098(uVar1,uVar2,lVar3);
    uVar1 = 0;
    uVar2 = 0;
  }
  func_0x000103659098(uVar1,uVar2,0);
  return lVar3 != 0;
}



/* Entry: 1036524b4; end: 1036526ab;  */

void FUN_1036524b4(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  undefined1 auStack_58 [24];
  
  uVar3 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar6 = *(long *)(unaff_x20 + 0x10);
  lVar4 = lVar6;
  if ((uVar3 & 1) == 0) {
    FUN_1036520fc(0);
    func_0x000107c613fc();
    FUN_103658250();
    func_0x000107c61574(lVar6);
    *(long *)(unaff_x20 + 0x10) = lVar4;
  }
  func_0x000107c61428(lVar4 + 0x70,auStack_58,1,0);
  uVar1 = *(undefined8 *)(lVar4 + 0x70);
  uVar2 = *(undefined8 *)(lVar4 + 0x78);
  uVar5 = *(undefined8 *)(lVar4 + 0x80);
  *(ulong *)(lVar4 + 0x70) = param_1 & 1;
  *(undefined8 *)(lVar4 + 0x78) = param_2;
  *(undefined8 *)(lVar4 + 0x80) = param_3;
  func_0x000101556278(uVar1,uVar2,uVar5);
  return;
}



/* Entry: 1036526ac; end: 1036527cb;  */

void FUN_1036526ac(byte param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = lVar3;
  if ((uVar1 & 1) == 0) {
    FUN_1036520fc(0);
    func_0x000107c613fc();
    FUN_103658250();
    func_0x000107c61574(lVar3);
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  func_0x000107c61428(lVar2 + 0xb1,auStack_48,1,0);
  *(byte *)(lVar2 + 0xb1) = param_1 & 1;
  return;
}



/* Entry: 1036527cc; end: 103652d1b;  */

void FUN_1036527cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  undefined1 auStack_58 [24];
  
  uVar3 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar6 = *(long *)(unaff_x20 + 0x10);
  lVar4 = lVar6;
  if ((uVar3 & 1) == 0) {
    FUN_1036520fc(0);
    func_0x000107c613fc();
    FUN_103658250();
    func_0x000107c61574(lVar6);
    *(long *)(unaff_x20 + 0x10) = lVar4;
  }
  func_0x000107c61428(lVar4 + 0xb8,auStack_58,1,0);
  uVar1 = *(undefined8 *)(lVar4 + 0xb8);
  uVar2 = *(undefined8 *)(lVar4 + 0xc0);
  uVar5 = *(undefined8 *)(lVar4 + 200);
  *(undefined8 *)(lVar4 + 0xb8) = param_1;
  *(undefined8 *)(lVar4 + 0xc0) = param_2;
  *(undefined8 *)(lVar4 + 200) = param_3;
  func_0x000100d57464(uVar1,uVar2,uVar5);
  return;
}



/* Entry: 103652d1c; end: 103652dab;  */

void FUN_103652d1c(byte param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = lVar3;
  if ((uVar1 & 1) == 0) {
    FUN_1036520fc(0);
    func_0x000107c613fc();
    FUN_103658250();
    func_0x000107c61574(lVar3);
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  func_0x000107c61428(lVar2 + 0x170,auStack_48,1,0);
  *(byte *)(lVar2 + 0x170) = param_1 & 1;
  return;
}



/* Entry: 103652dac; end: 103652ef7;  */

void FUN_103652dac(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  undefined1 auStack_58 [24];
  
  uVar3 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar6 = *(long *)(unaff_x20 + 0x10);
  lVar4 = lVar6;
  if ((uVar3 & 1) == 0) {
    FUN_1036520fc(0);
    func_0x000107c613fc();
    FUN_103658250();
    func_0x000107c61574(lVar6);
    *(long *)(unaff_x20 + 0x10) = lVar4;
  }
  func_0x000107c61428(lVar4 + 0x1d8,auStack_58,1,0);
  uVar1 = *(undefined8 *)(lVar4 + 0x1d8);
  uVar2 = *(undefined8 *)(lVar4 + 0x1e0);
  uVar5 = *(undefined8 *)(lVar4 + 0x1e8);
  *(ulong *)(lVar4 + 0x1d8) = param_1 & 1;
  *(undefined8 *)(lVar4 + 0x1e0) = param_2;
  *(undefined8 *)(lVar4 + 0x1e8) = param_3;
  func_0x000101556278(uVar1,uVar2,uVar5);
  return;
}



/* Entry: 103652ef8; end: 10365324f;  */

void FUN_103652ef8(byte param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = lVar3;
  if ((uVar1 & 1) == 0) {
    FUN_1036520fc(0);
    func_0x000107c613fc();
    FUN_103658250();
    func_0x000107c61574(lVar3);
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  func_0x000107c61428(lVar2 + 0x1f9,auStack_48,1,0);
  *(byte *)(lVar2 + 0x1f9) = param_1 & 1;
  return;
}



/* Entry: 103653250; end: 1036532eb;  */

void FUN_103653250(undefined8 param_1,undefined1 param_2)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_58 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = lVar3;
  if ((uVar1 & 1) == 0) {
    FUN_1036520fc(0);
    func_0x000107c613fc();
    FUN_103658250();
    func_0x000107c61574(lVar3);
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  func_0x000107c61428(lVar2 + 0x220,auStack_58,1,0);
  *(undefined8 *)(lVar2 + 0x220) = param_1;
  *(undefined1 *)(lVar2 + 0x228) = param_2;
  return;
}



/* Entry: 1036532ec; end: 10365352b;  */

void FUN_1036532ec(byte param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = lVar3;
  if ((uVar1 & 1) == 0) {
    FUN_1036520fc(0);
    func_0x000107c613fc();
    FUN_103658250();
    func_0x000107c61574(lVar3);
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  func_0x000107c61428(lVar2 + 0x229,auStack_48,1,0);
  *(byte *)(lVar2 + 0x229) = param_1 & 1;
  return;
}



/* Entry: 10365352c; end: 103653537;  */

void FUN_10365352c(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  (*(code *)0x1036597fc)();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 103653538; end: 103653577;  */

void FUN_103653538(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f81a70;
  func_0x0001000285a8(0x112f81a70,&UNK_10dbf29b8);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 103653578; end: 10365358f;  */

void FUN_103653578(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*(code *)0x1036597fc)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 103653590; end: 1036535ff;  */

void FUN_103653590(undefined8 *param_1,undefined8 param_2,undefined2 param_3,undefined8 param_4,
                  code *param_5)

{
  (*param_5)();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 103653600; end: 10365360b;  */

void FUN_103653600(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*(code *)0x103659800)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 10365360c; end: 10365371f;  */

void FUN_10365360c(undefined8 *param_1,undefined8 *param_2,undefined2 param_3,undefined8 param_4,
                  code *param_5)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*param_5)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 103653720; end: 103653767;  */

void FUN_103653720(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbf2f80,0x480,2);
  uRam000000011380b108 = uStack_38;
  uRam000000011380b100 = uStack_40;
  uRam000000011380b118 = uStack_28;
  uRam000000011380b110 = uStack_30;
  uRam000000011380b128 = uStack_18;
  uRam000000011380b120 = uStack_20;
  return;
}



/* Entry: 103653768; end: 1036537a3;  */

void FUN_103653768(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1036520fc();
  func_0x000107c613fc();
  FUN_1036537a4();
  uRam0000000112f81b00 = uVar1;
  return;
}



/* Entry: 1036537a4; end: 103653883;  */

void FUN_1036537a4(void)

{
  long unaff_x20;
  
  *(undefined2 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined2 *)(unaff_x20 + 0x28) = 0;
  *(undefined **)(unaff_x20 + 0x30) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 2;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined8 *)(unaff_x20 + 0x98) = 0xf000000000000000;
  *(undefined4 *)(unaff_x20 + 0xa0) = 0;
  *(undefined8 *)(unaff_x20 + 0xa8) = 0;
  *(undefined2 *)(unaff_x20 + 0xb0) = 1;
  *(undefined1 *)(unaff_x20 + 0xb2) = 0;
  *(undefined8 *)(unaff_x20 + 0xb8) = 0;
  *(undefined8 *)(unaff_x20 + 0xc0) = 0;
  *(undefined8 *)(unaff_x20 + 0xd0) = 0;
  *(undefined8 *)(unaff_x20 + 200) = 0xf000000000000000;
  *(undefined2 *)(unaff_x20 + 0xd8) = 1;
  *(undefined8 *)(unaff_x20 + 0xe8) = 0;
  *(undefined8 *)(unaff_x20 + 0xe0) = 0;
  *(undefined8 *)(unaff_x20 + 0xf8) = 0;
  *(undefined8 *)(unaff_x20 + 0xf0) = 0;
  *(undefined8 *)(unaff_x20 + 0x100) = 0;
  *(undefined8 *)(unaff_x20 + 0x108) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x110) = 0;
  *(undefined8 *)(unaff_x20 + 0x118) = 0;
  *(undefined8 *)(unaff_x20 + 0x120) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x128) = 0;
  *(undefined8 *)(unaff_x20 + 0x130) = 0;
  *(undefined8 *)(unaff_x20 + 0x138) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x140) = 0;
  *(undefined8 *)(unaff_x20 + 0x148) = 0;
  *(undefined8 *)(unaff_x20 + 0x150) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x158) = 0;
  *(undefined8 *)(unaff_x20 + 0x160) = 0;
  *(undefined8 *)(unaff_x20 + 0x168) = 0xf000000000000000;
  *(undefined1 *)(unaff_x20 + 0x170) = 0;
  *(undefined8 *)(unaff_x20 + 0x178) = 0;
  *(undefined8 *)(unaff_x20 + 0x180) = 0xe000000000000000;
  *(undefined1 *)(unaff_x20 + 0x188) = 0;
  *(undefined8 *)(unaff_x20 + 400) = 0;
  *(undefined8 *)(unaff_x20 + 0x198) = 0xe000000000000000;
  *(undefined8 *)(unaff_x20 + 0x1a0) = 2;
  *(undefined8 *)(unaff_x20 + 0x1c0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1b8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1d0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1c8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1b0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1a8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1d8) = 2;
  *(undefined8 *)(unaff_x20 + 0x1e0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1e8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1f0) = 0;
  *(undefined1 *)(unaff_x20 + 0x1f8) = 1;
  *(undefined8 *)(unaff_x20 + 0x200) = 0;
  *(undefined4 *)(unaff_x20 + 0x1f9) = 0;
  *(undefined8 *)(unaff_x20 + 0x208) = 0xe000000000000000;
  *(undefined8 *)(unaff_x20 + 0x220) = 0;
  *(undefined8 *)(unaff_x20 + 0x210) = 0;
  *(undefined4 *)(unaff_x20 + 0x218) = 0;
  *(undefined1 *)(unaff_x20 + 0x228) = 1;
  *(undefined4 *)(unaff_x20 + 0x229) = 0;
  return;
}



/* Entry: 103653884; end: 10365397b;  */

void FUN_103653884(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000100d57464(*(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                      *(undefined8 *)(unaff_x20 + 0x48));
  func_0x000103659098(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)(unaff_x20 + 0x60),
                      *(undefined8 *)(unaff_x20 + 0x68));
  func_0x000101556278(*(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                      *(undefined8 *)(unaff_x20 + 0x80));
  func_0x000100d57464(*(undefined8 *)(unaff_x20 + 0x88),*(undefined8 *)(unaff_x20 + 0x90),
                      *(undefined8 *)(unaff_x20 + 0x98));
  func_0x000100d57464(*(undefined8 *)(unaff_x20 + 0xb8),*(undefined8 *)(unaff_x20 + 0xc0),
                      *(undefined8 *)(unaff_x20 + 200));
  func_0x000103659098(*(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                      *(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000100d57464(*(undefined8 *)(unaff_x20 + 0xf8),*(undefined8 *)(unaff_x20 + 0x100),
                      *(undefined8 *)(unaff_x20 + 0x108));
  func_0x000100d57464(*(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                      *(undefined8 *)(unaff_x20 + 0x120));
  func_0x000100d57464(*(undefined8 *)(unaff_x20 + 0x128),*(undefined8 *)(unaff_x20 + 0x130),
                      *(undefined8 *)(unaff_x20 + 0x138));
  func_0x000100d57464(*(undefined8 *)(unaff_x20 + 0x140),*(undefined8 *)(unaff_x20 + 0x148),
                      *(undefined8 *)(unaff_x20 + 0x150));
  func_0x000100d57464(*(undefined8 *)(unaff_x20 + 0x158),*(undefined8 *)(unaff_x20 + 0x160),
                      *(undefined8 *)(unaff_x20 + 0x168));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x180));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x198));
  func_0x000101556278(*(undefined8 *)(unaff_x20 + 0x1a0),*(undefined8 *)(unaff_x20 + 0x1a8),
                      *(undefined8 *)(unaff_x20 + 0x1b0));
  func_0x000101597ae4(*(undefined8 *)(unaff_x20 + 0x1b8),*(undefined8 *)(unaff_x20 + 0x1c0),
                      *(undefined8 *)(unaff_x20 + 0x1c8),*(undefined8 *)(unaff_x20 + 0x1d0));
  func_0x000101556278(*(undefined8 *)(unaff_x20 + 0x1d8),*(undefined8 *)(unaff_x20 + 0x1e0),
                      *(undefined8 *)(unaff_x20 + 0x1e8));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x208));
  return;
}



/* Entry: 10365397c; end: 103653a1f;  */

void FUN_10365397c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = uVar2;
  if ((uVar1 & 1) == 0) {
    FUN_1036520fc(0);
    func_0x000107c613fc();
    FUN_103658250();
    func_0x000107c61574(uVar2);
    *(undefined8 *)(unaff_x20 + 0x10) = uVar3;
  }
  FUN_103653a20(uVar3,param_1,param_2,param_3);
  return;
}



/* Entry: 103653a20; end: 10365412b;  */

/* WARNING: Removing unreachable block (ram,0x000103653e0c) */
/* WARNING: Removing unreachable block (ram,0x000103653f60) */
/* WARNING: Removing unreachable block (ram,0x000103653f04) */
/* WARNING: Removing unreachable block (ram,0x000103653e68) */
/* WARNING: Removing unreachable block (ram,0x000103653ea8) */
/* WARNING: Removing unreachable block (ram,0x000103653ffc) */
/* WARNING: Removing unreachable block (ram,0x000103653d84) */
/* WARNING: Removing unreachable block (ram,0x000103653fa0) */
/* WARNING: Removing unreachable block (ram,0x000103653fbc) */
/* WARNING: Removing unreachable block (ram,0x000103653e4c) */
/* WARNING: Removing unreachable block (ram,0x0001036540bc) */
/* WARNING: Removing unreachable block (ram,0x00010365407c) */
/* WARNING: Removing unreachable block (ram,0x000103653ee8) */
/* WARNING: Removing unreachable block (ram,0x00010365403c) */
/* WARNING: Removing unreachable block (ram,0x000103653c18) */
/* WARNING: Removing unreachable block (ram,0x000103653cbc) */
/* WARNING: Removing unreachable block (ram,0x000103653d44) */
/* WARNING: Removing unreachable block (ram,0x000103653f20) */
/* WARNING: Removing unreachable block (ram,0x000103653c34) */

void FUN_103653a20(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  undefined1 auStack_68 [24];
  
  pcVar4 = *(code **)(param_4 + 0x10);
  uVar1 = param_3;
  lVar2 = param_4;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      switch(uVar1) {
      case 1:
        func_0x000107c61428(param_1 + 0x10,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x138);
        lVar2 = param_1 + 0x10;
        break;
      case 2:
        func_0x000107c61428(param_1 + 0x11,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x138);
        lVar2 = param_1 + 0x11;
        break;
      case 3:
        func_0x000107c61428(param_1 + 0x18,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x60);
        lVar2 = param_1 + 0x18;
        break;
      case 4:
        func_0x000107c61428(param_1 + 0x20,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x60);
        lVar2 = param_1 + 0x20;
        break;
      case 5:
        func_0x000107c61428(param_1 + 0x28,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x138);
        lVar2 = param_1 + 0x28;
        break;
      case 6:
        func_0x000107c61428(param_1 + 0x29,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x138);
        lVar2 = param_1 + 0x29;
        break;
      case 7:
        FUN_10365412c(param_2,param_1,param_3,param_4);
        goto LAB_103653acc;
      case 8:
        FUN_1036541c0(param_2,param_1,param_3,param_4);
        goto LAB_103653acc;
      case 9:
        func_0x000107c61428(param_1 + 0x50,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x60);
        lVar2 = param_1 + 0x50;
        break;
      case 10:
        FUN_103654254(param_2,param_1,param_3,param_4);
        goto LAB_103653acc;
      case 0xb:
        FUN_1036542e8(param_2,param_1,param_3,param_4);
        goto LAB_103653acc;
      case 0xc:
        FUN_10365437c(param_2,param_1,param_3,param_4);
        goto LAB_103653acc;
      case 0xd:
        func_0x000107c61428(param_1 + 0xa0,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x48);
        lVar2 = param_1 + 0xa0;
        break;
      case 0xe:
        FUN_103654410(param_2,param_1,param_3,param_4);
        goto LAB_103653acc;
      case 0xf:
        func_0x000107c61428(param_1 + 0xb1,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x138);
        lVar2 = param_1 + 0xb1;
        break;
      case 0x10:
        func_0x000107c61428(param_1 + 0xb2,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x138);
        lVar2 = param_1 + 0xb2;
        break;
      case 0x11:
        FUN_1036544a4(param_2,param_1,param_3,param_4);
        goto LAB_103653acc;
      case 0x12:
        FUN_103654538(param_2,param_1,param_3,param_4);
        goto LAB_103653acc;
      case 0x13:
        func_0x000107c61428(param_1 + 0xd9,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x138);
        lVar2 = param_1 + 0xd9;
        break;
      case 0x14:
        FUN_1036545cc(param_2,param_1,param_3,param_4);
        goto LAB_103653acc;
      case 0x15:
        FUN_103654660(param_2,param_1,param_3,param_4);
        goto LAB_103653acc;
      case 0x16:
        FUN_1036546f4(param_2,param_1,param_3,param_4);
        goto LAB_103653acc;
      case 0x17:
        FUN_103654788(param_2,param_1,param_3,param_4);
        goto LAB_103653acc;
      case 0x18:
        FUN_10365481c(param_2,param_1,param_3,param_4);
        goto LAB_103653acc;
      case 0x19:
        FUN_1036548b0(param_2,param_1,param_3,param_4);
        goto LAB_103653acc;
      case 0x1a:
        func_0x000107c61428(param_1 + 0x170,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x138);
        lVar2 = param_1 + 0x170;
        break;
      case 0x1b:
        func_0x000107c61428(param_1 + 0x178,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x150);
        lVar2 = param_1 + 0x178;
        break;
      case 0x1c:
        func_0x000107c61428(param_1 + 0x188,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x138);
        lVar2 = param_1 + 0x188;
        break;
      case 0x1d:
        func_0x000107c61428(param_1 + 400,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x150);
        lVar2 = param_1 + 400;
        break;
      case 0x1e:
        FUN_103654944(param_2,param_1,param_3,param_4);
        goto LAB_103653acc;
      case 0x1f:
        FUN_1036549d8(param_2,param_1,param_3,param_4);
        goto LAB_103653acc;
      case 0x20:
        FUN_103654a6c(param_2,param_1,param_3,param_4);
        goto LAB_103653acc;
      case 0x21:
        FUN_103654b00(param_2,param_1,param_3,param_4);
        goto LAB_103653acc;
      case 0x22:
        func_0x000107c61428(param_1 + 0x1f9,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x138);
        lVar2 = param_1 + 0x1f9;
        break;
      case 0x23:
        func_0x000107c61428(param_1 + 0x1fa,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x138);
        lVar2 = param_1 + 0x1fa;
        break;
      case 0x24:
        func_0x000107c61428(param_1 + 0x1fb,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x138);
        lVar2 = param_1 + 0x1fb;
        break;
      case 0x25:
        func_0x000107c61428(param_1 + 0x1fc,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x138);
        lVar2 = param_1 + 0x1fc;
        break;
      case 0x26:
        func_0x000107c61428(param_1 + 0x200,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x150);
        lVar2 = param_1 + 0x200;
        break;
      case 0x27:
        func_0x000107c61428(param_1 + 0x210,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x48);
        lVar2 = param_1 + 0x210;
        break;
      case 0x28:
        func_0x000107c61428(param_1 + 0x214,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x48);
        lVar2 = param_1 + 0x214;
        break;
      case 0x29:
        func_0x000107c61428(param_1 + 0x218,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x138);
        lVar2 = param_1 + 0x218;
        break;
      case 0x2a:
        func_0x000107c61428(param_1 + 0x219,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x138);
        lVar2 = param_1 + 0x219;
        break;
      case 0x2b:
        func_0x000107c61428(param_1 + 0x21a,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x138);
        lVar2 = param_1 + 0x21a;
        break;
      case 0x2c:
        func_0x000107c61428(param_1 + 0x21b,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x138);
        lVar2 = param_1 + 0x21b;
        break;
      case 0x2d:
        FUN_103654b94(param_2,param_1,param_3,param_4);
        goto LAB_103653acc;
      case 0x2e:
        func_0x000107c61428(param_1 + 0x229,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x138);
        lVar2 = param_1 + 0x229;
        break;
      case 0x2f:
        func_0x000107c61428(param_1 + 0x22a,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x138);
        lVar2 = param_1 + 0x22a;
        break;
      case 0x30:
        func_0x000107c61428(param_1 + 0x22b,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x138);
        lVar2 = param_1 + 0x22b;
        break;
      case 0x31:
        func_0x000107c61428(param_1 + 0x22c,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x138);
        lVar2 = param_1 + 0x22c;
        break;
      default:
        goto LAB_103653acc;
      }
      (*pcVar3)(lVar2,param_3,param_4);
      func_0x000107c614a8(auStack_68);
LAB_103653acc:
      uVar1 = param_3;
      lVar2 = param_4;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 10365412c; end: 1036541bf;  */

void FUN_10365412c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x30;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x1a0);
  func_0x000101568c04();
  (*pcVar2)(param_2 + 0x30,&UNK_110790c80,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1036541c0; end: 103654253;  */

void FUN_1036541c0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x38;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015d5420();
  (*pcVar2)(param_2 + 0x38,&UNK_110790b00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103654254; end: 1036542e7;  */

void FUN_103654254(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x58;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x00010365975c();
  (*pcVar2)(param_2 + 0x58,&UNK_110675ef0,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1036542e8; end: 10365437b;  */

void FUN_1036542e8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x70;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015fdfec();
  (*pcVar2)(param_2 + 0x70,&UNK_110790c00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10365437c; end: 10365440f;  */

void FUN_10365437c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x88;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 0x88,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103654410; end: 1036544a3;  */

void FUN_103654410(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0xa8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x180);
  func_0x0001036596dc();
  (*pcVar2)(param_2 + 0xa8,&UNK_1106760a8,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1036544a4; end: 103654537;  */

void FUN_1036544a4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0xb8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 0xb8,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103654538; end: 1036545cb;  */

void FUN_103654538(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0xd0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x180);
  func_0x00010164ac74();
  (*pcVar2)(param_2 + 0xd0,&UNK_110676238,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1036545cc; end: 10365465f;  */

void FUN_1036545cc(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0xe0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x00010365971c();
  (*pcVar2)(param_2 + 0xe0,&UNK_110675c78,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103654660; end: 1036546f3;  */

void FUN_103654660(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0xf8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 0xf8,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1036546f4; end: 103654787;  */

void FUN_1036546f4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x110;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 0x110,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103654788; end: 10365481b;  */

void FUN_103654788(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x128;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 0x128,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10365481c; end: 1036548af;  */

void FUN_10365481c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x140;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 0x140,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1036548b0; end: 103654943;  */

void FUN_1036548b0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x158;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 0x158,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103654944; end: 1036549d7;  */

void FUN_103654944(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x1a0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015fdfec();
  (*pcVar2)(param_2 + 0x1a0,&UNK_110790c00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1036549d8; end: 103654a6b;  */

void FUN_1036549d8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x1b8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x000101568c04();
  (*pcVar2)(param_2 + 0x1b8,&UNK_110790c80,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103654a6c; end: 103654aff;  */

void FUN_103654a6c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x1d8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015fdfec();
  (*pcVar2)(param_2 + 0x1d8,&UNK_110790c00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103654b00; end: 103654b93;  */

void FUN_103654b00(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x1f0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x180);
  func_0x00010365965c();
  (*pcVar2)(param_2 + 0x1f0,&UNK_110675a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103654b94; end: 103654c27;  */

void FUN_103654b94(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x220;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x180);
  func_0x00010365969c();
  (*pcVar2)(param_2 + 0x220,&UNK_110675a90,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103654c28; end: 103654c93;  */

void FUN_103654c28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x21;
  
  FUN_103654c94(param_4,param_1,param_5,param_6);
  if (unaff_x21 == 0) {
    func_0x000100076224(param_1,param_2,param_3,param_5,param_6);
  }
  return;
}



/* Entry: 103654c94; end: 1036558c3;  */

/* WARNING: Removing unreachable block (ram,0x000103655388) */

void FUN_103654c94(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  long unaff_x21;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  undefined1 auStack_3a8 [24];
  undefined1 auStack_390 [24];
  undefined1 auStack_378 [24];
  long lStack_360;
  undefined1 uStack_358;
  undefined1 auStack_348 [24];
  undefined1 auStack_330 [24];
  undefined1 auStack_318 [24];
  undefined1 auStack_300 [24];
  undefined1 auStack_2e8 [24];
  undefined1 auStack_2d0 [24];
  undefined1 auStack_2b8 [24];
  undefined1 auStack_2a0 [24];
  undefined1 auStack_288 [24];
  undefined1 auStack_270 [24];
  undefined1 auStack_258 [24];
  long lStack_240;
  undefined1 uStack_238;
  undefined1 auStack_228 [24];
  undefined1 auStack_210 [24];
  undefined1 auStack_1f8 [24];
  undefined1 auStack_1e0 [24];
  undefined1 auStack_1c8 [24];
  long lStack_1b0;
  undefined1 uStack_1a8;
  undefined1 auStack_198 [24];
  undefined1 auStack_180 [24];
  long lStack_168;
  undefined1 uStack_160;
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  if (((*(char *)(param_1 + 0x10) != '\x01') ||
      ((**(code **)(param_4 + 0x68))(1,1,param_3,param_4), unaff_x21 == 0)) &&
     ((func_0x000107c61428(param_1 + 0x11,auStack_90,0,0), *(char *)(param_1 + 0x11) != '\x01' ||
      ((**(code **)(param_4 + 0x68))(1,2,param_3,param_4), unaff_x21 == 0)))) {
    func_0x000107c61428(param_1 + 0x18,auStack_a8,0,0);
    if ((*(long *)(param_1 + 0x18) == 0) ||
       ((**(code **)(param_4 + 0x20))(*(long *)(param_1 + 0x18),3,param_3,param_4), unaff_x21 == 0))
    {
      func_0x000107c61428(param_1 + 0x20,auStack_c0,0,0);
      if (((*(long *)(param_1 + 0x20) == 0) ||
          ((**(code **)(param_4 + 0x20))(*(long *)(param_1 + 0x20),4,param_3,param_4),
          unaff_x21 == 0)) &&
         (((func_0x000107c61428(param_1 + 0x28,auStack_d8,0,0), *(char *)(param_1 + 0x28) != '\x01'
           || ((**(code **)(param_4 + 0x68))(1,5,param_3,param_4), unaff_x21 == 0)) &&
          ((func_0x000107c61428(param_1 + 0x29,auStack_f0,0,0), *(char *)(param_1 + 0x29) != '\x01'
           || ((**(code **)(param_4 + 0x68))(1,6,param_3,param_4), unaff_x21 == 0)))))) {
        func_0x000107c61428(param_1 + 0x30,auStack_108,0,0);
        lVar3 = *(long *)(param_1 + 0x30);
        if (*(long *)(lVar3 + 0x10) != 0) {
          pcVar4 = *(code **)(param_4 + 0x118);
          func_0x000101568c04();
          func_0x000107c61434(lVar3);
          (*pcVar4)();
          if (unaff_x21 != 0) {
            func_0x000107c6142c(lVar3);
            return;
          }
          func_0x000107c6142c(lVar3);
        }
        FUN_1036558c4(param_1,param_2,param_3,param_4);
        if (unaff_x21 == 0) {
          func_0x000107c61428(param_1 + 0x50,auStack_120,0,0);
          if (*(long *)(param_1 + 0x50) != 0) {
            (**(code **)(param_4 + 0x20))(*(long *)(param_1 + 0x50),9,param_3,param_4);
          }
          FUN_10365596c(param_1,param_2,param_3,param_4);
          FUN_103655a0c(param_1,param_2,param_3,param_4);
          FUN_103655ab4(param_1,param_2,param_3,param_4);
          func_0x000107c61428(param_1 + 0xa0,auStack_138,0,0);
          if (*(int *)(param_1 + 0xa0) != 0) {
            (**(code **)(param_4 + 0x18))(*(int *)(param_1 + 0xa0),0xd,param_3,param_4);
          }
          lVar3 = param_1 + 0xa8;
          func_0x000107c61428(lVar3,auStack_150,0,0);
          if (*(long *)(param_1 + 0xa8) != 0) {
            uStack_160 = *(undefined1 *)(param_1 + 0xb0);
            pcVar4 = *(code **)(param_4 + 0x80);
            lStack_168 = *(long *)(param_1 + 0xa8);
            func_0x0001036596dc();
            (*pcVar4)(&lStack_168,0xe,&UNK_1106760a8,lVar3,param_3,param_4);
          }
          func_0x000107c61428(param_1 + 0xb1,&lStack_168,0,0);
          if (*(char *)(param_1 + 0xb1) == '\x01') {
            (**(code **)(param_4 + 0x68))(1,0xf,param_3,param_4);
          }
          func_0x000107c61428(param_1 + 0xb2,auStack_180,0,0);
          if (*(char *)(param_1 + 0xb2) == '\x01') {
            (**(code **)(param_4 + 0x68))(1,0x10,param_3,param_4);
          }
          FUN_103655b5c(param_1,param_2,param_3,param_4);
          lVar3 = param_1 + 0xd0;
          func_0x000107c61428(lVar3,auStack_198,0,0);
          if (*(long *)(param_1 + 0xd0) != 0) {
            uStack_1a8 = *(undefined1 *)(param_1 + 0xd8);
            pcVar4 = *(code **)(param_4 + 0x80);
            lStack_1b0 = *(long *)(param_1 + 0xd0);
            func_0x00010164ac74();
            (*pcVar4)(&lStack_1b0,0x12,&UNK_110676238,lVar3,param_3,param_4);
          }
          func_0x000107c61428(param_1 + 0xd9,&lStack_1b0,0,0);
          if (*(char *)(param_1 + 0xd9) == '\x01') {
            (**(code **)(param_4 + 0x68))(1,0x13,param_3,param_4);
          }
          FUN_103655c04(param_1,param_2,param_3,param_4);
          FUN_103655ca4(param_1,param_2,param_3,param_4);
          FUN_103655d4c(param_1,param_2,param_3,param_4);
          FUN_103655df4(param_1,param_2,param_3,param_4);
          FUN_103655ea0(param_1,param_2,param_3,param_4);
          FUN_103655f48(param_1,param_2,param_3,param_4);
          func_0x000107c61428((char *)(param_1 + 0x170),auStack_1c8,0,0);
          if (*(char *)(param_1 + 0x170) == '\x01') {
            (**(code **)(param_4 + 0x68))(1,0x1a,param_3,param_4);
          }
          func_0x000107c61428(param_1 + 0x178,auStack_1e0,0,0);
          uVar2 = *(ulong *)(param_1 + 0x178);
          uVar5 = *(ulong *)(param_1 + 0x180);
          uVar1 = uVar2 & 0xffffffffffff;
          if ((uVar5 & 0x2000000000000000) != 0) {
            uVar1 = uVar5 >> 0x38 & 0xf;
          }
          if (uVar1 != 0) {
            pcVar4 = *(code **)(param_4 + 0x70);
            func_0x000107c61434(uVar5);
            (*pcVar4)(uVar2,uVar5,0x1b,param_3,param_4);
            func_0x000107c6142c(uVar5);
          }
          func_0x000107c61428(param_1 + 0x188,auStack_1f8,0,0);
          if (*(char *)(param_1 + 0x188) == '\x01') {
            (**(code **)(param_4 + 0x68))(1,0x1c,param_3,param_4);
          }
          func_0x000107c61428(param_1 + 400,auStack_210,0,0);
          uVar2 = *(ulong *)(param_1 + 400);
          uVar5 = *(ulong *)(param_1 + 0x198);
          uVar1 = uVar2 & 0xffffffffffff;
          if ((uVar5 & 0x2000000000000000) != 0) {
            uVar1 = uVar5 >> 0x38 & 0xf;
          }
          if (uVar1 != 0) {
            pcVar4 = *(code **)(param_4 + 0x70);
            func_0x000107c61434(uVar5);
            (*pcVar4)(uVar2,uVar5,0x1d,param_3,param_4);
            func_0x000107c6142c(uVar5);
          }
          FUN_103655ff4(param_1,param_2,param_3,param_4);
          FUN_1036560a0(param_1,param_2,param_3,param_4);
          FUN_103656148(param_1,param_2,param_3,param_4);
          lVar3 = param_1 + 0x1f0;
          func_0x000107c61428(lVar3,auStack_228,0,0);
          if (*(long *)(param_1 + 0x1f0) != 0) {
            uStack_238 = *(undefined1 *)(param_1 + 0x1f8);
            pcVar4 = *(code **)(param_4 + 0x80);
            lStack_240 = *(long *)(param_1 + 0x1f0);
            func_0x00010365965c();
            (*pcVar4)(&lStack_240,0x21,&UNK_110675a00,lVar3,param_3,param_4);
          }
          func_0x000107c61428(param_1 + 0x1f9,&lStack_240,0,0);
          if (*(char *)(param_1 + 0x1f9) == '\x01') {
            (**(code **)(param_4 + 0x68))(1,0x22,param_3,param_4);
          }
          func_0x000107c61428(param_1 + 0x1fa,auStack_258,0,0);
          if (*(char *)(param_1 + 0x1fa) == '\x01') {
            (**(code **)(param_4 + 0x68))(1,0x23,param_3,param_4);
          }
          func_0x000107c61428(param_1 + 0x1fb,auStack_270,0,0);
          if (*(char *)(param_1 + 0x1fb) == '\x01') {
            (**(code **)(param_4 + 0x68))(1,0x24,param_3,param_4);
          }
          func_0x000107c61428(param_1 + 0x1fc,auStack_288,0,0);
          if (*(char *)(param_1 + 0x1fc) == '\x01') {
            (**(code **)(param_4 + 0x68))(1,0x25,param_3,param_4);
          }
          func_0x000107c61428(param_1 + 0x200,auStack_2a0,0,0);
          uVar2 = *(ulong *)(param_1 + 0x200);
          uVar5 = *(ulong *)(param_1 + 0x208);
          uVar1 = uVar2 & 0xffffffffffff;
          if ((uVar5 & 0x2000000000000000) != 0) {
            uVar1 = uVar5 >> 0x38 & 0xf;
          }
          if (uVar1 != 0) {
            pcVar4 = *(code **)(param_4 + 0x70);
            func_0x000107c61434(uVar5);
            (*pcVar4)(uVar2,uVar5,0x26,param_3,param_4);
            func_0x000107c6142c(uVar5);
          }
          func_0x000107c61428(param_1 + 0x210,auStack_2b8,0,0);
          if (*(int *)(param_1 + 0x210) != 0) {
            (**(code **)(param_4 + 0x18))(*(int *)(param_1 + 0x210),0x27,param_3,param_4);
          }
          func_0x000107c61428(param_1 + 0x214,auStack_2d0,0,0);
          if (*(int *)(param_1 + 0x214) != 0) {
            (**(code **)(param_4 + 0x18))(*(int *)(param_1 + 0x214),0x28,param_3,param_4);
          }
          func_0x000107c61428(param_1 + 0x218,auStack_2e8,0,0);
          if (*(char *)(param_1 + 0x218) == '\x01') {
            (**(code **)(param_4 + 0x68))(1,0x29,param_3,param_4);
          }
          func_0x000107c61428(param_1 + 0x219,auStack_300,0,0);
          if (*(char *)(param_1 + 0x219) == '\x01') {
            (**(code **)(param_4 + 0x68))(1,0x2a,param_3,param_4);
          }
          func_0x000107c61428(param_1 + 0x21a,auStack_318,0,0);
          if (*(char *)(param_1 + 0x21a) == '\x01') {
            (**(code **)(param_4 + 0x68))(1,0x2b,param_3,param_4);
          }
          func_0x000107c61428(param_1 + 0x21b,auStack_330,0,0);
          if (*(char *)(param_1 + 0x21b) == '\x01') {
            (**(code **)(param_4 + 0x68))(1,0x2c,param_3,param_4);
          }
          lVar3 = param_1 + 0x220;
          func_0x000107c61428(lVar3,auStack_348,0,0);
          if (*(long *)(param_1 + 0x220) != 0) {
            uStack_358 = *(undefined1 *)(param_1 + 0x228);
            pcVar4 = *(code **)(param_4 + 0x80);
            lStack_360 = *(long *)(param_1 + 0x220);
            func_0x00010365969c();
            (*pcVar4)(&lStack_360,0x2d,&UNK_110675a90,lVar3,param_3,param_4);
          }
          func_0x000107c61428(param_1 + 0x229,&lStack_360,0,0);
          if (*(char *)(param_1 + 0x229) == '\x01') {
            (**(code **)(param_4 + 0x68))(1,0x2e,param_3,param_4);
          }
          func_0x000107c61428(param_1 + 0x22a,auStack_378,0,0);
          if (*(char *)(param_1 + 0x22a) == '\x01') {
            (**(code **)(param_4 + 0x68))(1,0x2f,param_3,param_4);
          }
          func_0x000107c61428(param_1 + 0x22b,auStack_390,0,0);
          if (*(char *)(param_1 + 0x22b) == '\x01') {
            (**(code **)(param_4 + 0x68))(1,0x30,param_3,param_4);
          }
          func_0x000107c61428(param_1 + 0x22c,auStack_3a8,0,0);
          if (*(char *)(param_1 + 0x22c) == '\x01') {
            (**(code **)(param_4 + 0x68))(1,0x31,param_3,param_4);
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1036558c4; end: 10365596b;  */

void FUN_1036558c4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined4 auStack_70 [2];
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x38;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x48);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x40);
    auStack_70[0] = (undefined4)*(undefined8 *)(param_1 + 0x38);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015d5420();
    (*pcVar2)(auStack_70,8,&UNK_110790b00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 10365596c; end: 103655a0b;  */

void FUN_10365596c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x58;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lStack_60 = *(long *)(param_1 + 0x68);
  if (lStack_60 != 0) {
    uStack_68 = *(undefined8 *)(param_1 + 0x60);
    uStack_70 = *(undefined8 *)(param_1 + 0x58);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x00010365975c();
    (*pcVar2)(&uStack_70,10,&UNK_110675ef0,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103655a0c; end: 103655ab3;  */

void FUN_103655a0c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  byte abStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x70;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  if (*(byte *)(param_1 + 0x70) != 2) {
    abStack_70[0] = *(byte *)(param_1 + 0x70) & 1;
    uStack_60 = *(undefined8 *)(param_1 + 0x80);
    uStack_68 = *(undefined8 *)(param_1 + 0x78);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar2)(abStack_70,0xb,&UNK_110790c00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103655ab4; end: 103655b5b;  */

void FUN_103655ab4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x88;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x98);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x90);
    uStack_70 = *(undefined8 *)(param_1 + 0x88);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar2)(&uStack_70,0xc,&UNK_110790a00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103655b5c; end: 103655c03;  */

void FUN_103655b5c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0xb8;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 200);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0xc0);
    uStack_70 = *(undefined8 *)(param_1 + 0xb8);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar2)(&uStack_70,0x11,&UNK_110790a00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103655c04; end: 103655ca3;  */

void FUN_103655c04(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0xe0;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lStack_60 = *(long *)(param_1 + 0xf0);
  if (lStack_60 != 0) {
    uStack_68 = *(undefined8 *)(param_1 + 0xe8);
    uStack_70 = *(undefined8 *)(param_1 + 0xe0);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x00010365971c();
    (*pcVar2)(&uStack_70,0x14,&UNK_110675c78,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103655ca4; end: 103655d4b;  */

void FUN_103655ca4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0xf8;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x108);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x100);
    uStack_70 = *(undefined8 *)(param_1 + 0xf8);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar2)(&uStack_70,0x15,&UNK_110790a00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103655d4c; end: 103655df3;  */

void FUN_103655d4c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x110;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x120);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x118);
    uStack_70 = *(undefined8 *)(param_1 + 0x110);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar2)(&uStack_70,0x16,&UNK_110790a00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103655df4; end: 103655e9f;  */

void FUN_103655df4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  puVar1 = (undefined8 *)(param_1 + 0x128);
  puVar2 = puVar1;
  func_0x000107c61428(puVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x138);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x130);
    uStack_70 = *puVar1;
    pcVar3 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar3)(&uStack_70,0x17,&UNK_110790a00,puVar2,param_3,param_4);
  }
  return;
}



/* Entry: 103655ea0; end: 103655f47;  */

void FUN_103655ea0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x140;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x150);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x148);
    uStack_70 = *(undefined8 *)(param_1 + 0x140);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar2)(&uStack_70,0x18,&UNK_110790a00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103655f48; end: 103655ff3;  */

void FUN_103655f48(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  puVar1 = (undefined8 *)(param_1 + 0x158);
  puVar2 = puVar1;
  func_0x000107c61428(puVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x168);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x160);
    uStack_70 = *puVar1;
    pcVar3 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar3)(&uStack_70,0x19,&UNK_110790a00,puVar2,param_3,param_4);
  }
  return;
}



/* Entry: 103655ff4; end: 10365609f;  */

void FUN_103655ff4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  byte abStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x1a0;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  if (*(byte *)(param_1 + 0x1a0) != 2) {
    abStack_70[0] = *(byte *)(param_1 + 0x1a0) & 1;
    uStack_60 = *(undefined8 *)(param_1 + 0x1b0);
    uStack_68 = *(undefined8 *)(param_1 + 0x1a8);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar2)(abStack_70,0x1e,&UNK_110790c00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1036560a0; end: 103656147;  */

void FUN_1036560a0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x1b8;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lStack_70 = *(long *)(param_1 + 0x1c0);
  if (lStack_70 != 0) {
    uStack_78 = *(undefined8 *)(param_1 + 0x1b8);
    uStack_60 = *(undefined8 *)(param_1 + 0x1d0);
    uStack_68 = *(undefined8 *)(param_1 + 0x1c8);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x000101568c04();
    (*pcVar2)(&uStack_78,0x1f,&UNK_110790c80,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103656148; end: 1036561ef;  */

void FUN_103656148(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  byte abStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x1d8;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  if (*(byte *)(param_1 + 0x1d8) != 2) {
    abStack_70[0] = *(byte *)(param_1 + 0x1d8) & 1;
    uStack_60 = *(undefined8 *)(param_1 + 0x1e8);
    uStack_68 = *(undefined8 *)(param_1 + 0x1e0);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar2)(abStack_70,0x20,&UNK_110790c00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1036561f0; end: 10365629f;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1036561f0(byte *param_1,byte *param_2,ulong param_3,long param_4,ulong param_5,
                    ulong param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  byte *pbVar8;
  undefined8 uVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  byte *pbVar20;
  byte *unaff_x19;
  long lVar21;
  ulong unaff_x20;
  undefined8 unaff_x21;
  ulong unaff_x22;
  long lVar22;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  undefined1 auVar39 [16];
  
  if (param_3 != param_6) {
    func_0x000107c6157c(param_3);
    func_0x000107c6157c(param_6);
    uVar17 = param_3;
    FUN_1036562a0(param_3,param_6);
    func_0x000107c61574(param_6);
    func_0x000107c61574(param_3);
    if ((uVar17 & 1) == 0) {
      return (byte *)0x0;
    }
  }
  do {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)param_2 >> 0x20);
    uVar15 = uVar4 >> 0x1e;
    uVar5 = (uint)(param_5 >> 0x20);
    uVar18 = uVar5 >> 0x1e;
    iVar7 = (int)param_1;
    pbVar11 = param_2;
    if ((ulong)param_2 >> 0x3e == 3) {
      uVar17 = 0;
      if ((((param_1 != (byte *)0x0) || (param_2 != (byte *)0xc000000000000000)) ||
          (param_5 >> 0x3e < 3)) || ((uVar17 = 0, param_4 != 0 || (param_5 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar15 == 0) {
        uVar17 = (ulong)param_2 >> 0x30 & 0xff;
      }
      else {
        iVar16 = (int)((ulong)param_1 >> 0x20);
        if (SBORROW4(iVar16,iVar7)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar17 = (ulong)(iVar16 - iVar7);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar18 == 0) {
        uVar19 = param_5 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar16 = (int)((ulong)param_4 >> 0x20);
      if (SBORROW4(iVar16,(int)param_4)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar17 == (long)(iVar16 - (int)param_4)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar15 == 2) {
        uVar17 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
        if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar17 = 0;
      if (uVar18 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar18 == 2) {
        uVar19 = *(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10);
        if (SBORROW8(*(long *)(param_4 + 0x18),*(long *)(param_4 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar17 != uVar19) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar17 < 1) goto code_r0x000100e26128;
        if (uVar15 < 2) {
          if (uVar15 == 0) {
            *(char *)((long)register0x00000008 + -0x70) = (char)param_1;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)param_1 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)param_1 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)param_1 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)param_1 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)param_1 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)param_1 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)param_1 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)param_2;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)param_2 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)param_2 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)param_2 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)param_2 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)param_2 >> 0x28);
            pbVar11 = (byte *)((long)register0x00000008 + (((ulong)param_2 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar7;
          unaff_x23 = (byte *)(((long)param_1 >> 0x20) - (long)unaff_x25);
          if ((long)param_1 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = param_2;
          if (param_1 == (byte *)0x0) {
            func_0x000107c5ec38();
            param_1 = (byte *)0x0;
          }
          else {
            pbVar11 = param_1;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar11)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            param_1 = param_1 + ((long)unaff_x25 - (long)pbVar11);
            func_0x000107c5ec38();
            unaff_x19 = param_1;
            if (param_1 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar11) {
                pbVar11 = unaff_x23;
              }
              pbVar11 = pbVar11 + (long)param_1;
              goto code_r0x000100e262a4;
            }
          }
          pbVar11 = (byte *)0x0;
        }
        else {
          if (uVar15 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar11 = (byte *)((long)register0x00000008 + -0x70);
            goto code_r0x000100e26260;
          }
          lVar21 = *(long *)(param_1 + 0x10);
          unaff_x24 = *(byte **)(param_1 + 0x18);
          func_0x000107c5ec30();
          pbVar11 = param_1;
          if (param_1 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar21,(long)pbVar11)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            param_1 = param_1 + (lVar21 - (long)pbVar11);
          }
          unaff_x23 = unaff_x24 + -lVar21;
          if (SBORROW8((long)unaff_x24,lVar21)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = param_1;
          unaff_x25 = param_2;
          if (param_1 == (byte *)0x0) {
            pbVar11 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar11) {
              pbVar11 = unaff_x23;
            }
            pbVar11 = pbVar11 + (long)param_1;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong)param_2 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),param_1,pbVar11,param_4
                            ,param_5);
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = param_5;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar17 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return pbVar8;
    }
    func_0x000107c60e78();
    *(byte **)((long)register0x00000008 + -0xc0) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0xb8) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0xa0) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x88) = &UNK_100e26304;
    pbVar10 = *(byte **)pbVar8;
    param_1 = *(byte **)(pbVar8 + 8);
    pbVar20 = *(byte **)(pbVar8 + 0x18);
    bVar23 = pbVar8[0x28];
    param_2 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
    pbVar12 = param_1;
    if (bVar23 < 3) {
      if (bVar23 == 0) {
        if (pbVar11[0x28] == 0) {
          lVar21 = *(long *)pbVar11;
          uVar9 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar10,lVar21,uVar9);
          return (byte *)(ulong)((uint)pbVar10 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar23 == 1) {
        if (pbVar11[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar13 = *(byte **)(pbVar11 + 8);
        pbVar14 = *(byte **)(pbVar11 + 0x10);
        lVar21 = *(long *)pbVar11;
        uVar9 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar10,lVar21,uVar9);
        if (((ulong)pbVar10 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar10 = param_1;
        pbVar12 = param_2;
        if ((param_1 == pbVar13) && (param_2 == pbVar14)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar11[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar13 = *(byte **)pbVar11;
        pbVar14 = *(byte **)(pbVar11 + 8);
        lVar21 = *(long *)(pbVar11 + 0x18);
        if ((pbVar10 == pbVar13) && (param_1 == pbVar14)) {
          if (((pbVar8[0x10] ^ pbVar11[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar20 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar21 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar21);
          func_0x000107c61174();
          pbVar11 = pbVar20;
          func_0x000107c60118();
          func_0x000107c61170(pbVar20);
          func_0x000107c61170(lVar21);
          pbVar20 = pbVar11;
joined_r0x000100e266a4:
          if (((ulong)pbVar20 & 1) == 0) {
            return (byte *)0x0;
          }
          return (byte *)0x1;
        }
      }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar10,pbVar12,pbVar13,pbVar14,0);
      return pbVar10;
    }
    lVar22 = *(long *)(pbVar8 + 0x20);
    if (bVar23 < 5) {
      if (bVar23 != 3) {
        if (pbVar11[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar13 = *(byte **)pbVar11;
        pbVar14 = *(byte **)(pbVar11 + 8);
        if (((pbVar10 == pbVar13) && (param_1 == pbVar14)) &&
           (pbVar10 = param_2, pbVar12 = pbVar20, pbVar13 = *(byte **)(pbVar11 + 0x10),
           pbVar14 = *(byte **)(pbVar11 + 0x18),
           param_2 == *(byte **)(pbVar11 + 0x10) && pbVar20 == *(byte **)(pbVar11 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar11[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar11 != ((uint)pbVar10 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar14 = *(byte **)(pbVar11 + 0x10);
      lVar21 = *(long *)(pbVar11 + 0x20);
      if (param_2 == (byte *)0x0) {
        if (pbVar14 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar14 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar13 = *(byte **)(pbVar11 + 8);
        pbVar10 = param_1;
        pbVar12 = param_2;
        if ((param_1 != pbVar13) || (param_2 != pbVar14)) goto code_r0x000107c605b8;
      }
      if (lVar22 != 0) {
        if (lVar21 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar20 == *(byte **)(pbVar11 + 0x18)) && (lVar22 == lVar21)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar20,lVar22,*(byte **)(pbVar11 + 0x18),lVar21,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar21 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar23 != 5) {
      if ((((pbVar20 == (byte *)0x0 && param_1 == (byte *)0x0) && pbVar10 == (byte *)0x0) &&
          lVar22 == 0) && param_2 == (byte *)0x0) {
        if (pbVar11[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar22 = *(long *)(pbVar11 + 0x20);
        lVar21 = *(long *)(pbVar11 + 0x18);
        bVar23 = pbVar11[8] | (byte)lVar21;
        bVar24 = pbVar11[9] | (byte)((ulong)lVar21 >> 8);
        bVar25 = pbVar11[10] | (byte)((ulong)lVar21 >> 0x10);
        bVar26 = pbVar11[0xb] | (byte)((ulong)lVar21 >> 0x18);
        bVar27 = pbVar11[0xc] | (byte)((ulong)lVar21 >> 0x20);
        bVar28 = pbVar11[0xd] | (byte)((ulong)lVar21 >> 0x28);
        bVar29 = pbVar11[0xe] | (byte)((ulong)lVar21 >> 0x30);
        bVar30 = pbVar11[0xf] | (byte)((ulong)lVar21 >> 0x38);
        bVar31 = pbVar11[0x10] | (byte)lVar22;
        bVar32 = pbVar11[0x11] | (byte)((ulong)lVar22 >> 8);
        bVar33 = pbVar11[0x12] | (byte)((ulong)lVar22 >> 0x10);
        bVar34 = pbVar11[0x13] | (byte)((ulong)lVar22 >> 0x18);
        bVar35 = pbVar11[0x14] | (byte)((ulong)lVar22 >> 0x20);
        bVar36 = pbVar11[0x15] | (byte)((ulong)lVar22 >> 0x28);
        bVar37 = pbVar11[0x16] | (byte)((ulong)lVar22 >> 0x30);
        bVar38 = pbVar11[0x17] | (byte)((ulong)lVar22 >> 0x38);
        auVar39[1] = bVar24;
        auVar39[0] = bVar23;
        auVar39[2] = bVar25;
        auVar39[3] = bVar26;
        auVar39[4] = bVar27;
        auVar39[5] = bVar28;
        auVar39[6] = bVar29;
        auVar39[7] = bVar30;
        auVar39[8] = bVar31;
        auVar39[9] = bVar32;
        auVar39[10] = bVar33;
        auVar39[0xb] = bVar34;
        auVar39[0xc] = bVar35;
        auVar39[0xd] = bVar36;
        auVar39[0xe] = bVar37;
        auVar39[0xf] = bVar38;
        auVar3[1] = bVar24;
        auVar3[0] = bVar23;
        auVar3[2] = bVar25;
        auVar3[3] = bVar26;
        auVar3[4] = bVar27;
        auVar3[5] = bVar28;
        auVar3[6] = bVar29;
        auVar3[7] = bVar30;
        auVar3[8] = bVar31;
        auVar3[9] = bVar32;
        auVar3[10] = bVar33;
        auVar3[0xb] = bVar34;
        auVar3[0xc] = bVar35;
        auVar3[0xd] = bVar36;
        auVar3[0xe] = bVar37;
        auVar3[0xf] = bVar38;
        auVar39 = NEON_ext(auVar39,auVar3,8,1);
        if (CONCAT17(bVar30 | auVar39[7],
                     CONCAT16(bVar29 | auVar39[6],
                              CONCAT15(bVar28 | auVar39[5],
                                       CONCAT14(bVar27 | auVar39[4],
                                                CONCAT13(bVar26 | auVar39[3],
                                                         CONCAT12(bVar25 | auVar39[2],
                                                                  CONCAT11(bVar24 | auVar39[1],
                                                                           bVar23 | auVar39[0]))))))
                    ) == 0 && *(long *)pbVar11 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar10 == (byte *)0x1) &&
         (((pbVar20 == (byte *)0x0 && param_1 == (byte *)0x0) && param_2 == (byte *)0x0) &&
          lVar22 == 0)) {
        if (pbVar11[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar11 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar11[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar11 != 2) {
          return (byte *)0x0;
        }
      }
      lVar22 = *(long *)(pbVar11 + 0x20);
      lVar21 = *(long *)(pbVar11 + 0x18);
      bVar23 = pbVar11[8] | (byte)lVar21;
      bVar24 = pbVar11[9] | (byte)((ulong)lVar21 >> 8);
      bVar25 = pbVar11[10] | (byte)((ulong)lVar21 >> 0x10);
      bVar26 = pbVar11[0xb] | (byte)((ulong)lVar21 >> 0x18);
      bVar27 = pbVar11[0xc] | (byte)((ulong)lVar21 >> 0x20);
      bVar28 = pbVar11[0xd] | (byte)((ulong)lVar21 >> 0x28);
      bVar29 = pbVar11[0xe] | (byte)((ulong)lVar21 >> 0x30);
      bVar30 = pbVar11[0xf] | (byte)((ulong)lVar21 >> 0x38);
      bVar31 = pbVar11[0x10] | (byte)lVar22;
      bVar32 = pbVar11[0x11] | (byte)((ulong)lVar22 >> 8);
      bVar33 = pbVar11[0x12] | (byte)((ulong)lVar22 >> 0x10);
      bVar34 = pbVar11[0x13] | (byte)((ulong)lVar22 >> 0x18);
      bVar35 = pbVar11[0x14] | (byte)((ulong)lVar22 >> 0x20);
      bVar36 = pbVar11[0x15] | (byte)((ulong)lVar22 >> 0x28);
      bVar37 = pbVar11[0x16] | (byte)((ulong)lVar22 >> 0x30);
      bVar38 = pbVar11[0x17] | (byte)((ulong)lVar22 >> 0x38);
      auVar1[1] = bVar24;
      auVar1[0] = bVar23;
      auVar1[2] = bVar25;
      auVar1[3] = bVar26;
      auVar1[4] = bVar27;
      auVar1[5] = bVar28;
      auVar1[6] = bVar29;
      auVar1[7] = bVar30;
      auVar1[8] = bVar31;
      auVar1[9] = bVar32;
      auVar1[10] = bVar33;
      auVar1[0xb] = bVar34;
      auVar1[0xc] = bVar35;
      auVar1[0xd] = bVar36;
      auVar1[0xe] = bVar37;
      auVar1[0xf] = bVar38;
      auVar2[1] = bVar24;
      auVar2[0] = bVar23;
      auVar2[2] = bVar25;
      auVar2[3] = bVar26;
      auVar2[4] = bVar27;
      auVar2[5] = bVar28;
      auVar2[6] = bVar29;
      auVar2[7] = bVar30;
      auVar2[8] = bVar31;
      auVar2[9] = bVar32;
      auVar2[10] = bVar33;
      auVar2[0xb] = bVar34;
      auVar2[0xc] = bVar35;
      auVar2[0xd] = bVar36;
      auVar2[0xe] = bVar37;
      auVar2[0xf] = bVar38;
      auVar39 = NEON_ext(auVar1,auVar2,8,1);
      lVar21 = CONCAT17(bVar30 | auVar39[7],
                        CONCAT16(bVar29 | auVar39[6],
                                 CONCAT15(bVar28 | auVar39[5],
                                          CONCAT14(bVar27 | auVar39[4],
                                                   CONCAT13(bVar26 | auVar39[3],
                                                            CONCAT12(bVar25 | auVar39[2],
                                                                     CONCAT11(bVar24 | auVar39[1],
                                                                              bVar23 | auVar39[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar11[0x28] != 5) {
      return (byte *)0x0;
    }
    param_4 = *(long *)(pbVar11 + 8);
    param_5 = *(ulong *)(pbVar11 + 0x10);
    lVar21 = *(long *)pbVar11;
    uVar9 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar10,lVar21,uVar9);
    if (((ulong)pbVar10 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
    unaff_x20 = *(ulong *)((long)register0x00000008 + -0xa0);
    unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
    unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
    unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  } while( true );
}



/* Entry: 1036562a0; end: 103657bdf;  */

byte FUN_1036562a0(long param_1,long param_2)

{
  int iVar1;
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined1 auStack_950 [24];
  undefined1 auStack_938 [24];
  undefined1 auStack_920 [24];
  undefined1 auStack_908 [24];
  undefined1 auStack_8f0 [24];
  undefined1 auStack_8d8 [24];
  undefined1 auStack_8c0 [24];
  undefined1 auStack_8a8 [24];
  undefined1 auStack_890 [24];
  undefined1 auStack_878 [24];
  undefined1 auStack_860 [24];
  undefined1 auStack_848 [24];
  undefined1 auStack_830 [24];
  undefined1 auStack_818 [24];
  undefined1 auStack_800 [24];
  undefined1 auStack_7e8 [24];
  undefined1 auStack_7d0 [24];
  undefined1 auStack_7b8 [24];
  undefined1 auStack_7a0 [24];
  undefined1 auStack_788 [24];
  undefined1 auStack_770 [24];
  undefined1 auStack_758 [24];
  undefined1 auStack_740 [24];
  undefined1 auStack_728 [24];
  undefined1 auStack_710 [24];
  undefined1 auStack_6f8 [24];
  undefined1 auStack_6e0 [24];
  undefined1 auStack_6c8 [24];
  undefined1 auStack_6b0 [24];
  undefined1 auStack_698 [24];
  undefined1 auStack_680 [24];
  undefined1 auStack_668 [24];
  undefined1 auStack_650 [24];
  undefined1 auStack_638 [24];
  undefined1 auStack_620 [24];
  undefined1 auStack_608 [24];
  undefined1 auStack_5f0 [24];
  undefined1 auStack_5d8 [24];
  undefined1 auStack_5c0 [24];
  undefined1 auStack_5a8 [24];
  undefined1 auStack_590 [24];
  undefined1 auStack_578 [24];
  undefined1 auStack_560 [24];
  undefined1 auStack_548 [24];
  undefined1 auStack_530 [24];
  undefined1 auStack_518 [24];
  undefined1 auStack_500 [24];
  undefined1 auStack_4e8 [24];
  undefined1 auStack_4d0 [24];
  undefined1 auStack_4b8 [24];
  undefined1 auStack_4a0 [24];
  undefined1 auStack_488 [24];
  undefined1 auStack_470 [24];
  undefined1 auStack_458 [24];
  undefined1 auStack_440 [24];
  undefined1 auStack_428 [24];
  undefined1 auStack_410 [24];
  undefined1 auStack_3f8 [24];
  undefined1 auStack_3e0 [24];
  undefined1 auStack_3c8 [24];
  undefined1 auStack_3b0 [24];
  undefined1 auStack_398 [24];
  undefined1 auStack_380 [24];
  undefined1 auStack_368 [24];
  undefined1 auStack_350 [24];
  undefined1 auStack_338 [24];
  undefined1 auStack_320 [24];
  undefined1 auStack_308 [24];
  undefined1 auStack_2f0 [24];
  undefined1 auStack_2d8 [24];
  undefined1 auStack_2c0 [24];
  undefined1 auStack_2a8 [24];
  undefined1 auStack_290 [24];
  undefined1 auStack_278 [24];
  undefined1 auStack_260 [24];
  undefined1 auStack_248 [24];
  undefined1 auStack_230 [24];
  undefined1 auStack_218 [24];
  undefined1 auStack_200 [24];
  undefined1 auStack_1e8 [24];
  undefined1 auStack_1d0 [24];
  undefined1 auStack_1b8 [24];
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  func_0x000107c61428(param_1 + 0x10,auStack_80,0,0);
  cVar2 = *(char *)(param_1 + 0x10);
  func_0x000107c61428(param_2 + 0x10,auStack_98,0,0);
  if (cVar2 == *(char *)(param_2 + 0x10)) {
    func_0x000107c61428(param_1 + 0x11,auStack_b0,0,0);
    cVar2 = *(char *)(param_1 + 0x11);
    func_0x000107c61428(param_2 + 0x11,auStack_c8,0,0);
    if (cVar2 == *(char *)(param_2 + 0x11)) {
      func_0x000107c61428(param_1 + 0x18,auStack_e0,0,0);
      lVar6 = *(long *)(param_1 + 0x18);
      func_0x000107c61428(param_2 + 0x18,auStack_f8,0,0);
      if (lVar6 == *(long *)(param_2 + 0x18)) {
        func_0x000107c61428(param_1 + 0x20,auStack_110,0,0);
        lVar6 = *(long *)(param_1 + 0x20);
        func_0x000107c61428(param_2 + 0x20,auStack_128,0,0);
        if (lVar6 == *(long *)(param_2 + 0x20)) {
          func_0x000107c61428(param_1 + 0x28,auStack_140,0,0);
          cVar2 = *(char *)(param_1 + 0x28);
          func_0x000107c61428(param_2 + 0x28,auStack_158,0,0);
          if (cVar2 == *(char *)(param_2 + 0x28)) {
            func_0x000107c61428(param_1 + 0x29,auStack_170,0,0);
            cVar2 = *(char *)(param_1 + 0x29);
            func_0x000107c61428(param_2 + 0x29,auStack_188,0,0);
            if (cVar2 == *(char *)(param_2 + 0x29)) {
              func_0x000107c61428(param_1 + 0x30,auStack_1a0,0,0);
              uVar7 = *(ulong *)(param_1 + 0x30);
              func_0x000107c61428(param_2 + 0x30,auStack_1b8,0,0);
              uVar9 = *(undefined8 *)(param_2 + 0x30);
              func_0x000107c61434(uVar7);
              func_0x000107c61434(uVar9);
              uVar4 = uVar7;
              func_0x000101565c24(uVar7,uVar9);
              func_0x000107c6142c(uVar7);
              func_0x000107c6142c(uVar9);
              if ((uVar4 & 1) != 0) {
                func_0x000107c61428(param_1 + 0x38,auStack_1d0,0,0);
                func_0x000107c61428(param_2 + 0x38,auStack_1e8,0,0);
                lVar13 = *(long *)(param_1 + 0x38);
                uVar7 = *(ulong *)(param_1 + 0x40);
                uVar8 = *(ulong *)(param_1 + 0x48);
                lVar6 = *(long *)(param_2 + 0x38);
                uVar4 = *(ulong *)(param_2 + 0x40);
                uVar11 = *(ulong *)(param_2 + 0x48);
                if (uVar8 >> 0x3c < 0xf) {
                  if (uVar11 >> 0x3c < 0xf) {
                    func_0x000100d57448(lVar13,uVar7,uVar8);
                    func_0x000100d57448(lVar6,uVar4,uVar11);
                    if ((int)lVar13 == (int)lVar6) {
                      uVar3 = uVar7;
                      func_0x000100e25fcc(uVar7,uVar8,uVar4,uVar11);
                      func_0x000100d57464(lVar6,uVar4,uVar11);
                      if ((uVar3 & 1) != 0) goto LAB_1036564ec;
                    }
                    else {
LAB_103657160:
                      func_0x000100d57464(lVar6,uVar4,uVar11);
                    }
                    goto LAB_10365717c;
                  }
LAB_1036565e4:
                  func_0x000100d57448(lVar13,uVar7,uVar8);
                  func_0x000100d57448(lVar6,uVar4,uVar11);
                  func_0x000100d57464(lVar13,uVar7,uVar8);
                  lVar13 = lVar6;
                  uVar7 = uVar4;
                  uVar8 = uVar11;
                }
                else {
                  if (uVar11 >> 0x3c < 0xf) goto LAB_1036565e4;
                  func_0x000100d57448(lVar13,uVar7,uVar8);
                  func_0x000100d57448(lVar6,uVar4,uVar11);
LAB_1036564ec:
                  func_0x000100d57464(lVar13,uVar7,uVar8);
                  func_0x000107c61428(param_1 + 0x50,auStack_200,0,0);
                  lVar6 = *(long *)(param_1 + 0x50);
                  func_0x000107c61428(param_2 + 0x50,auStack_218,0,0);
                  if (lVar6 != *(long *)(param_2 + 0x50)) goto LAB_103657180;
                  func_0x000107c61428(param_1 + 0x58,auStack_230,0,0);
                  func_0x000107c61428(param_2 + 0x58,auStack_248,0,0);
                  uVar4 = *(ulong *)(param_1 + 0x58);
                  uVar12 = *(undefined8 *)(param_1 + 0x60);
                  lVar6 = *(long *)(param_1 + 0x68);
                  uVar9 = *(undefined8 *)(param_2 + 0x58);
                  uVar10 = *(undefined8 *)(param_2 + 0x60);
                  lVar13 = *(long *)(param_2 + 0x68);
                  if (lVar6 != 0) {
                    if (lVar13 == 0) {
LAB_103656680:
                      FUN_10365906c(uVar4,uVar12,lVar6);
                      FUN_10365906c(uVar9,uVar10,lVar13);
                      func_0x000103659098(uVar4,uVar12,lVar6);
                      func_0x000103659098(uVar9,uVar10,lVar13);
                    }
                    else {
                      FUN_10365906c(uVar4,uVar12,lVar6);
                      FUN_10365906c(uVar9,uVar10,lVar13);
                      uVar7 = uVar4;
                      FUN_103663e94(uVar4,uVar12,lVar6,uVar9,uVar10,lVar13);
                      func_0x000103659098(uVar9,uVar10,lVar13);
                      func_0x000103659098(uVar4,uVar12,lVar6);
                      if ((uVar7 & 1) != 0) goto LAB_1036566f4;
                    }
                    goto LAB_103657180;
                  }
                  if (lVar13 != 0) goto LAB_103656680;
                  FUN_10365906c(uVar4,uVar12,0);
                  FUN_10365906c(uVar9,uVar10,0);
                  func_0x000103659098(uVar4,uVar12,0);
LAB_1036566f4:
                  func_0x000107c61428(param_1 + 0x70,auStack_260,0,0);
                  func_0x000107c61428(param_2 + 0x70,auStack_278,0,0);
                  uVar4 = *(ulong *)(param_1 + 0x70);
                  uVar8 = *(ulong *)(param_1 + 0x78);
                  uVar9 = *(undefined8 *)(param_1 + 0x80);
                  uVar7 = *(ulong *)(param_2 + 0x70);
                  uVar11 = *(ulong *)(param_2 + 0x78);
                  uVar12 = *(undefined8 *)(param_2 + 0x80);
                  if ((uVar4 & 0xff) != 2) {
                    if ((uVar7 & 0xff) == 2) goto LAB_103656884;
                    func_0x000101541464(uVar4,uVar8,uVar9);
                    func_0x000101541464(uVar7,uVar11,uVar12);
                    if ((((uint)uVar7 ^ (uint)uVar4) & 1) == 0) {
                      uVar3 = uVar8;
                      func_0x000100e25fcc(uVar8,uVar9,uVar11,uVar12);
                      func_0x000101556278(uVar7,uVar11,uVar12);
                      if ((uVar3 & 1) != 0) goto LAB_103656764;
                    }
                    else {
                      func_0x000101556278(uVar7,uVar11,uVar12);
                    }
LAB_103656998:
                    func_0x000101556278(uVar4,uVar8,uVar9);
                    goto LAB_103657180;
                  }
                  if ((uVar7 & 0xff) != 2) {
LAB_103656884:
                    func_0x000101541464(uVar4,uVar8,uVar9);
                    func_0x000101541464(uVar7,uVar11,uVar12);
                    func_0x000101556278(uVar4,uVar8,uVar9);
                    uVar4 = uVar7;
                    uVar8 = uVar11;
                    uVar9 = uVar12;
                    goto LAB_103656998;
                  }
                  func_0x000101541464(uVar4,uVar8,uVar9);
                  func_0x000101541464(uVar7,uVar11,uVar12);
LAB_103656764:
                  func_0x000101556278(uVar4,uVar8,uVar9);
                  func_0x000107c61428(param_1 + 0x88,auStack_290,0,0);
                  func_0x000107c61428(param_2 + 0x88,auStack_2a8,0,0);
                  lVar13 = *(long *)(param_1 + 0x88);
                  uVar7 = *(ulong *)(param_1 + 0x90);
                  uVar8 = *(ulong *)(param_1 + 0x98);
                  lVar6 = *(long *)(param_2 + 0x88);
                  uVar4 = *(ulong *)(param_2 + 0x90);
                  uVar11 = *(ulong *)(param_2 + 0x98);
                  if (uVar8 >> 0x3c < 0xf) {
                    if (uVar11 >> 0x3c < 0xf) {
                      func_0x000100d57448(lVar13,uVar7,uVar8);
                      if (lVar13 == lVar6) {
                        func_0x000100d57448(lVar13,uVar4,uVar11);
                        uVar3 = uVar7;
                        func_0x000100e25fcc(uVar7,uVar8,uVar4,uVar11);
                        func_0x000100d57464(lVar13,uVar4,uVar11);
                        if ((uVar3 & 1) == 0) goto LAB_10365717c;
                        goto LAB_1036567e4;
                      }
LAB_103657150:
                      func_0x000100d57448(lVar6,uVar4,uVar11);
                      goto LAB_103657160;
                    }
                    goto LAB_1036565e4;
                  }
                  if (uVar11 >> 0x3c < 0xf) goto LAB_1036565e4;
                  func_0x000100d57448(lVar13,uVar7,uVar8);
                  func_0x000100d57448(lVar6,uVar4,uVar11);
LAB_1036567e4:
                  func_0x000100d57464(lVar13,uVar7,uVar8);
                  func_0x000107c61428(param_1 + 0xa0,auStack_2c0,0,0);
                  iVar1 = *(int *)(param_1 + 0xa0);
                  func_0x000107c61428(param_2 + 0xa0,auStack_2d8,0,0);
                  if (iVar1 != *(int *)(param_2 + 0xa0)) goto LAB_103657180;
                  func_0x000107c61428(param_1 + 0xa8,auStack_2f0,0,0);
                  lVar13 = *(long *)(param_1 + 0xa8);
                  func_0x000107c61428(param_2 + 0xa8,auStack_308,0,0);
                  lVar6 = *(long *)(param_2 + 0xa8);
                  if (*(char *)(param_2 + 0xb0) != '\x01') {
                    if (lVar13 == lVar6) goto LAB_1036569a8;
                    goto LAB_103657180;
                  }
                  if (1 < lVar6) {
                    if (lVar6 == 2) {
                      if (lVar13 == 2) goto LAB_1036569a8;
                    }
                    else if (lVar13 == 3) goto LAB_1036569a8;
                    goto LAB_103657180;
                  }
                  if (lVar6 != 0) {
                    if (lVar13 == 1) goto LAB_1036569a8;
                    goto LAB_103657180;
                  }
                  if (lVar13 != 0) goto LAB_103657180;
LAB_1036569a8:
                  func_0x000107c61428(param_1 + 0xb1,auStack_320,0,0);
                  cVar2 = *(char *)(param_1 + 0xb1);
                  func_0x000107c61428(param_2 + 0xb1,auStack_338,0,0);
                  if (cVar2 != *(char *)(param_2 + 0xb1)) goto LAB_103657180;
                  func_0x000107c61428(param_1 + 0xb2,auStack_350,0,0);
                  cVar2 = *(char *)(param_1 + 0xb2);
                  func_0x000107c61428(param_2 + 0xb2,auStack_368,0,0);
                  if (cVar2 != *(char *)(param_2 + 0xb2)) goto LAB_103657180;
                  func_0x000107c61428(param_1 + 0xb8,auStack_380,0,0);
                  func_0x000107c61428(param_2 + 0xb8,auStack_398,0,0);
                  lVar13 = *(long *)(param_1 + 0xb8);
                  uVar7 = *(ulong *)(param_1 + 0xc0);
                  uVar8 = *(ulong *)(param_1 + 200);
                  lVar6 = *(long *)(param_2 + 0xb8);
                  uVar4 = *(ulong *)(param_2 + 0xc0);
                  uVar11 = *(ulong *)(param_2 + 200);
                  if (uVar8 >> 0x3c < 0xf) {
                    if (uVar11 >> 0x3c < 0xf) {
                      func_0x000100d57448(lVar13,uVar7,uVar8);
                      if (lVar13 != lVar6) goto LAB_103657150;
                      func_0x000100d57448(lVar13,uVar4,uVar11);
                      uVar3 = uVar7;
                      func_0x000100e25fcc(uVar7,uVar8,uVar4,uVar11);
                      func_0x000100d57464(lVar13,uVar4,uVar11);
                      if ((uVar3 & 1) == 0) goto LAB_10365717c;
                      goto LAB_103656a88;
                    }
                    goto LAB_1036565e4;
                  }
                  if (uVar11 >> 0x3c < 0xf) goto LAB_1036565e4;
                  func_0x000100d57448(lVar13,uVar7,uVar8);
                  func_0x000100d57448(lVar6,uVar4,uVar11);
LAB_103656a88:
                  func_0x000100d57464(lVar13,uVar7,uVar8);
                  func_0x000107c61428(param_1 + 0xd0,auStack_3b0,0,0);
                  lVar13 = *(long *)(param_1 + 0xd0);
                  func_0x000107c61428(param_2 + 0xd0,auStack_3c8,0,0);
                  lVar6 = *(long *)(param_2 + 0xd0);
                  if (*(char *)(param_2 + 0xd8) != '\x01') {
                    if (lVar13 == lVar6) goto LAB_103656b7c;
                    goto LAB_103657180;
                  }
                  if (1 < lVar6) {
                    if (lVar6 == 2) {
                      if (lVar13 == 2) goto LAB_103656b7c;
                    }
                    else if (lVar13 == 3) goto LAB_103656b7c;
                    goto LAB_103657180;
                  }
                  if (lVar6 != 0) {
                    if (lVar13 == 1) goto LAB_103656b7c;
                    goto LAB_103657180;
                  }
                  if (lVar13 != 0) goto LAB_103657180;
LAB_103656b7c:
                  func_0x000107c61428(param_1 + 0xd9,auStack_3e0,0,0);
                  cVar2 = *(char *)(param_1 + 0xd9);
                  func_0x000107c61428(param_2 + 0xd9,auStack_3f8,0,0);
                  if (cVar2 != *(char *)(param_2 + 0xd9)) goto LAB_103657180;
                  func_0x000107c61428(param_1 + 0xe0,auStack_410,0,0);
                  func_0x000107c61428(param_2 + 0xe0,auStack_428,0,0);
                  uVar4 = *(ulong *)(param_1 + 0xe0);
                  uVar12 = *(undefined8 *)(param_1 + 0xe8);
                  lVar6 = *(long *)(param_1 + 0xf0);
                  uVar9 = *(undefined8 *)(param_2 + 0xe0);
                  uVar10 = *(undefined8 *)(param_2 + 0xe8);
                  lVar13 = *(long *)(param_2 + 0xf0);
                  if (lVar6 != 0) {
                    if (lVar13 == 0) goto LAB_103656680;
                    FUN_10365906c(uVar4,uVar12,lVar6);
                    FUN_10365906c(uVar9,uVar10,lVar13);
                    uVar7 = uVar4;
                    FUN_10365c844(uVar4,uVar12,lVar6,uVar9,uVar10,lVar13);
                    func_0x000103659098(uVar9,uVar10,lVar13);
                    func_0x000103659098(uVar4,uVar12,lVar6);
                    if ((uVar7 & 1) != 0) goto LAB_103656cbc;
                    goto LAB_103657180;
                  }
                  if (lVar13 != 0) goto LAB_103656680;
                  FUN_10365906c(uVar4,uVar12,0);
                  FUN_10365906c(uVar9,uVar10,0);
                  func_0x000103659098(uVar4,uVar12,0);
LAB_103656cbc:
                  func_0x000107c61428(param_1 + 0xf8,auStack_440,0,0);
                  func_0x000107c61428(param_2 + 0xf8,auStack_458,0,0);
                  lVar13 = *(long *)(param_1 + 0xf8);
                  uVar7 = *(ulong *)(param_1 + 0x100);
                  uVar8 = *(ulong *)(param_1 + 0x108);
                  lVar6 = *(long *)(param_2 + 0xf8);
                  uVar4 = *(ulong *)(param_2 + 0x100);
                  uVar11 = *(ulong *)(param_2 + 0x108);
                  if (uVar8 >> 0x3c < 0xf) {
                    if (uVar11 >> 0x3c < 0xf) {
                      func_0x000100d57448(lVar13,uVar7,uVar8);
                      if (lVar13 != lVar6) goto LAB_103657150;
                      func_0x000100d57448(lVar13,uVar4,uVar11);
                      uVar3 = uVar7;
                      func_0x000100e25fcc(uVar7,uVar8,uVar4,uVar11);
                      func_0x000100d57464(lVar13,uVar4,uVar11);
                      if ((uVar3 & 1) == 0) goto LAB_10365717c;
                      goto LAB_103656d2c;
                    }
                    goto LAB_1036565e4;
                  }
                  if (uVar11 >> 0x3c < 0xf) goto LAB_1036565e4;
                  func_0x000100d57448(lVar13,uVar7,uVar8);
                  func_0x000100d57448(lVar6,uVar4,uVar11);
LAB_103656d2c:
                  func_0x000100d57464(lVar13,uVar7,uVar8);
                  func_0x000107c61428(param_1 + 0x110,auStack_470,0,0);
                  func_0x000107c61428(param_2 + 0x110,auStack_488,0,0);
                  lVar13 = *(long *)(param_1 + 0x110);
                  uVar7 = *(ulong *)(param_1 + 0x118);
                  uVar8 = *(ulong *)(param_1 + 0x120);
                  lVar6 = *(long *)(param_2 + 0x110);
                  uVar4 = *(ulong *)(param_2 + 0x118);
                  uVar11 = *(ulong *)(param_2 + 0x120);
                  if (uVar8 >> 0x3c < 0xf) {
                    if (uVar11 >> 0x3c < 0xf) {
                      func_0x000100d57448(lVar13,uVar7,uVar8);
                      if (lVar13 != lVar6) goto LAB_103657150;
                      func_0x000100d57448(lVar13,uVar4,uVar11);
                      uVar3 = uVar7;
                      func_0x000100e25fcc(uVar7,uVar8,uVar4,uVar11);
                      func_0x000100d57464(lVar13,uVar4,uVar11);
                      if ((uVar3 & 1) == 0) goto LAB_10365717c;
                      goto LAB_103656e70;
                    }
                    goto LAB_1036565e4;
                  }
                  if (uVar11 >> 0x3c < 0xf) goto LAB_1036565e4;
                  func_0x000100d57448(lVar13,uVar7,uVar8);
                  func_0x000100d57448(lVar6,uVar4,uVar11);
LAB_103656e70:
                  func_0x000100d57464(lVar13,uVar7,uVar8);
                  func_0x000107c61428(param_1 + 0x128,auStack_4a0,0,0);
                  func_0x000107c61428(param_2 + 0x128,auStack_4b8,0,0);
                  lVar13 = *(long *)(param_1 + 0x128);
                  uVar7 = *(ulong *)(param_1 + 0x130);
                  uVar8 = *(ulong *)(param_1 + 0x138);
                  lVar6 = *(long *)(param_2 + 0x128);
                  uVar4 = *(ulong *)(param_2 + 0x130);
                  uVar11 = *(ulong *)(param_2 + 0x138);
                  if (uVar8 >> 0x3c < 0xf) {
                    if (uVar11 >> 0x3c < 0xf) {
                      func_0x000100d57448(lVar13,uVar7,uVar8);
                      if (lVar13 != lVar6) goto LAB_103657150;
                      func_0x000100d57448(lVar13,uVar4,uVar11);
                      uVar3 = uVar7;
                      func_0x000100e25fcc(uVar7,uVar8,uVar4,uVar11);
                      func_0x000100d57464(lVar13,uVar4,uVar11);
                      if ((uVar3 & 1) == 0) goto LAB_10365717c;
                      goto LAB_103656f54;
                    }
                    goto LAB_1036565e4;
                  }
                  if (uVar11 >> 0x3c < 0xf) goto LAB_1036565e4;
                  func_0x000100d57448(lVar13,uVar7,uVar8);
                  func_0x000100d57448(lVar6,uVar4,uVar11);
LAB_103656f54:
                  func_0x000100d57464(lVar13,uVar7,uVar8);
                  func_0x000107c61428(param_1 + 0x140,auStack_4d0,0,0);
                  func_0x000107c61428(param_2 + 0x140,auStack_4e8,0,0);
                  lVar13 = *(long *)(param_1 + 0x140);
                  uVar7 = *(ulong *)(param_1 + 0x148);
                  uVar8 = *(ulong *)(param_1 + 0x150);
                  lVar6 = *(long *)(param_2 + 0x140);
                  uVar4 = *(ulong *)(param_2 + 0x148);
                  uVar11 = *(ulong *)(param_2 + 0x150);
                  if (uVar8 >> 0x3c < 0xf) {
                    if (uVar11 >> 0x3c < 0xf) {
                      func_0x000100d57448(lVar13,uVar7,uVar8);
                      if (lVar13 != lVar6) goto LAB_103657150;
                      func_0x000100d57448(lVar13,uVar4,uVar11);
                      uVar3 = uVar7;
                      func_0x000100e25fcc(uVar7,uVar8,uVar4,uVar11);
                      func_0x000100d57464(lVar13,uVar4,uVar11);
                      if ((uVar3 & 1) == 0) goto LAB_10365717c;
                      goto LAB_103656fd4;
                    }
                    goto LAB_1036565e4;
                  }
                  if (uVar11 >> 0x3c < 0xf) goto LAB_1036565e4;
                  func_0x000100d57448(lVar13,uVar7,uVar8);
                  func_0x000100d57448(lVar6,uVar4,uVar11);
LAB_103656fd4:
                  func_0x000100d57464(lVar13,uVar7,uVar8);
                  func_0x000107c61428(param_1 + 0x158,auStack_500,0,0);
                  func_0x000107c61428(param_2 + 0x158,auStack_518,0,0);
                  lVar6 = *(long *)(param_1 + 0x158);
                  uVar4 = *(ulong *)(param_1 + 0x160);
                  uVar11 = *(ulong *)(param_1 + 0x168);
                  lVar13 = *(long *)(param_2 + 0x158);
                  uVar7 = *(ulong *)(param_2 + 0x160);
                  uVar8 = *(ulong *)(param_2 + 0x168);
                  if (uVar11 >> 0x3c < 0xf) {
                    if (0xe < uVar8 >> 0x3c) goto LAB_1036571b4;
                    func_0x000100d57448(lVar6,uVar4,uVar11);
                    if (lVar6 == lVar13) {
                      func_0x000100d57448(lVar6,uVar7,uVar8);
                      uVar3 = uVar4;
                      func_0x000100e25fcc(uVar4,uVar11,uVar7,uVar8);
                      func_0x000100d57464(lVar6,uVar7,uVar8);
                      lVar13 = lVar6;
                      uVar7 = uVar4;
                      uVar8 = uVar11;
                      if ((uVar3 & 1) != 0) goto LAB_103657054;
                    }
                    else {
                      func_0x000100d57448(lVar13,uVar7,uVar8);
                      func_0x000100d57464(lVar13,uVar7,uVar8);
                      lVar13 = lVar6;
                      uVar7 = uVar4;
                      uVar8 = uVar11;
                    }
                  }
                  else {
                    if (0xe < uVar8 >> 0x3c) {
                      func_0x000100d57448(lVar6,uVar4,uVar11);
                      func_0x000100d57448(lVar13,uVar7,uVar8);
LAB_103657054:
                      func_0x000100d57464(lVar6,uVar4,uVar11);
                      func_0x000107c61428((char *)(param_1 + 0x170),auStack_530,0,0);
                      cVar2 = *(char *)(param_1 + 0x170);
                      func_0x000107c61428((char *)(param_2 + 0x170),auStack_548,0,0);
                      if (cVar2 == *(char *)(param_2 + 0x170)) {
                        func_0x000107c61428(param_1 + 0x178,auStack_560,0,0);
                        func_0x000107c61428(param_2 + 0x178,auStack_578,0x20,0);
                        uVar4 = *(ulong *)(param_1 + 0x178);
                        if ((uVar4 == *(ulong *)(param_2 + 0x178)) &&
                           (*(long *)(param_1 + 0x180) == *(long *)(param_2 + 0x180))) {
                          func_0x000107c614a8(auStack_578);
                        }
                        else {
                          func_0x000107c605b8();
                          func_0x000107c614a8(auStack_578);
                          if ((uVar4 & 1) == 0) goto LAB_103657180;
                        }
                        func_0x000107c61428(param_1 + 0x188,auStack_578,0,0);
                        cVar2 = *(char *)(param_1 + 0x188);
                        func_0x000107c61428(param_2 + 0x188,auStack_590,0,0);
                        if (cVar2 == *(char *)(param_2 + 0x188)) {
                          func_0x000107c61428(param_1 + 400,auStack_5a8,0,0);
                          func_0x000107c61428(param_2 + 400,auStack_5c0,0x20,0);
                          uVar4 = *(ulong *)(param_1 + 400);
                          if ((uVar4 == *(ulong *)(param_2 + 400)) &&
                             (*(long *)(param_1 + 0x198) == *(long *)(param_2 + 0x198))) {
                            func_0x000107c614a8(auStack_5c0);
                          }
                          else {
                            func_0x000107c605b8();
                            func_0x000107c614a8(auStack_5c0);
                            if ((uVar4 & 1) == 0) goto LAB_103657180;
                          }
                          func_0x000107c61428(param_1 + 0x1a0,auStack_5c0,0,0);
                          func_0x000107c61428(param_2 + 0x1a0,auStack_5d8,0,0);
                          uVar4 = *(ulong *)(param_1 + 0x1a0);
                          uVar8 = *(ulong *)(param_1 + 0x1a8);
                          uVar9 = *(undefined8 *)(param_1 + 0x1b0);
                          uVar7 = *(ulong *)(param_2 + 0x1a0);
                          uVar11 = *(ulong *)(param_2 + 0x1a8);
                          uVar12 = *(undefined8 *)(param_2 + 0x1b0);
                          if ((uVar4 & 0xff) == 2) {
                            if ((uVar7 & 0xff) == 2) {
                              func_0x000101541464(uVar4,uVar8,uVar9);
                              func_0x000101541464(uVar7,uVar11,uVar12);
LAB_103657458:
                              func_0x000101556278(uVar4,uVar8,uVar9);
                              func_0x000107c61428(param_1 + 0x1b8,auStack_5f0,0,0);
                              func_0x000107c61428(param_2 + 0x1b8,auStack_608,0,0);
                              uVar4 = *(ulong *)(param_1 + 0x1b8);
                              lVar6 = *(long *)(param_1 + 0x1c0);
                              uVar7 = *(ulong *)(param_1 + 0x1c8);
                              uVar9 = *(undefined8 *)(param_1 + 0x1d0);
                              uVar8 = *(ulong *)(param_2 + 0x1b8);
                              lVar13 = *(long *)(param_2 + 0x1c0);
                              uVar11 = *(ulong *)(param_2 + 0x1c8);
                              uVar12 = *(undefined8 *)(param_2 + 0x1d0);
                              if (lVar6 != 0) {
                                if (lVar13 == 0) {
LAB_10365754c:
                                  func_0x000101597350(uVar4,lVar6,uVar7,uVar9);
                                  func_0x000101597350(uVar8,lVar13,uVar11,uVar12);
                                  func_0x000101597ae4(uVar4,lVar6,uVar7,uVar9);
                                  uVar4 = uVar8;
                                  lVar6 = lVar13;
                                  uVar7 = uVar11;
                                  uVar9 = uVar12;
                                }
                                else if (((uVar4 == uVar8) && (lVar6 == lVar13)) ||
                                        (uVar3 = uVar4,
                                        func_0x000107c605b8(uVar4,lVar6,uVar8,lVar13,0),
                                        (uVar3 & 1) != 0)) {
                                  func_0x000101597350(uVar4,lVar6,uVar7,uVar9);
                                  func_0x000101597350(uVar8,lVar13,uVar11,uVar12);
                                  uVar3 = uVar7;
                                  func_0x000100e25fcc(uVar7,uVar9,uVar11,uVar12);
                                  func_0x000101597ae4(uVar8,lVar13,uVar11,uVar12);
                                  if ((uVar3 & 1) != 0) goto LAB_1036575cc;
                                }
                                else {
                                  func_0x000101597350(uVar4,lVar6,uVar7,uVar9);
                                  func_0x000101597350(uVar8,lVar13,uVar11,uVar12);
                                  func_0x000101597ae4(uVar8,lVar13,uVar11,uVar12);
                                }
                                func_0x000101597ae4(uVar4,lVar6,uVar7,uVar9);
                                goto LAB_103657180;
                              }
                              if (lVar13 != 0) goto LAB_10365754c;
                              func_0x000101597350(uVar4,0,uVar7,uVar9);
                              func_0x000101597350(uVar8,0,uVar11,uVar12);
LAB_1036575cc:
                              func_0x000101597ae4(uVar4,lVar6,uVar7,uVar9);
                              func_0x000107c61428(param_1 + 0x1d8,auStack_620,0,0);
                              func_0x000107c61428(param_2 + 0x1d8,auStack_638,0,0);
                              uVar4 = *(ulong *)(param_1 + 0x1d8);
                              uVar8 = *(ulong *)(param_1 + 0x1e0);
                              uVar9 = *(undefined8 *)(param_1 + 0x1e8);
                              uVar7 = *(ulong *)(param_2 + 0x1d8);
                              uVar11 = *(ulong *)(param_2 + 0x1e0);
                              uVar12 = *(undefined8 *)(param_2 + 0x1e8);
                              if ((uVar4 & 0xff) == 2) {
                                if ((uVar7 & 0xff) == 2) {
                                  func_0x000101541464(uVar4,uVar8,uVar9);
                                  func_0x000101541464(uVar7,uVar11,uVar12);
LAB_1036576b8:
                                  func_0x000101556278(uVar4,uVar8,uVar9);
                                  func_0x000107c61428(param_1 + 0x1f0,auStack_650,0,0);
                                  lVar13 = *(long *)(param_1 + 0x1f0);
                                  func_0x000107c61428(param_2 + 0x1f0,auStack_668,0,0);
                                  lVar6 = *(long *)(param_2 + 0x1f0);
                                  if (*(char *)(param_2 + 0x1f8) == '\x01') {
                                    if (lVar6 < 2) {
                                      if (lVar6 == 0) {
                                        if (lVar13 == 0) {
LAB_103657798:
                                          func_0x000107c61428(param_1 + 0x1f9,auStack_680,0,0);
                                          cVar2 = *(char *)(param_1 + 0x1f9);
                                          func_0x000107c61428(param_2 + 0x1f9,auStack_698,0,0);
                                          if (cVar2 == *(char *)(param_2 + 0x1f9)) {
                                            func_0x000107c61428(param_1 + 0x1fa,auStack_6b0,0,0);
                                            cVar2 = *(char *)(param_1 + 0x1fa);
                                            func_0x000107c61428(param_2 + 0x1fa,auStack_6c8,0,0);
                                            if (cVar2 == *(char *)(param_2 + 0x1fa)) {
                                              func_0x000107c61428(param_1 + 0x1fb,auStack_6e0,0,0);
                                              cVar2 = *(char *)(param_1 + 0x1fb);
                                              func_0x000107c61428(param_2 + 0x1fb,auStack_6f8,0,0);
                                              if (cVar2 == *(char *)(param_2 + 0x1fb)) {
                                                func_0x000107c61428(param_1 + 0x1fc,auStack_710,0,0)
                                                ;
                                                cVar2 = *(char *)(param_1 + 0x1fc);
                                                func_0x000107c61428(param_2 + 0x1fc,auStack_728,0,0)
                                                ;
                                                if (cVar2 == *(char *)(param_2 + 0x1fc)) {
                                                  func_0x000107c61428(param_1 + 0x200,auStack_740,0,
                                                                      0);
                                                  func_0x000107c61428(param_2 + 0x200,auStack_758,
                                                                      0x20,0);
                                                  uVar4 = *(ulong *)(param_1 + 0x200);
                                                  if ((uVar4 == *(ulong *)(param_2 + 0x200)) &&
                                                     (*(long *)(param_1 + 0x208) ==
                                                      *(long *)(param_2 + 0x208))) {
                                                    func_0x000107c614a8(auStack_758);
                                                  }
                                                  else {
                                                    func_0x000107c605b8();
                                                    func_0x000107c614a8(auStack_758);
                                                    if ((uVar4 & 1) == 0) goto LAB_103657180;
                                                  }
                                                  func_0x000107c61428(param_1 + 0x210,auStack_758,0,
                                                                      0);
                                                  iVar1 = *(int *)(param_1 + 0x210);
                                                  func_0x000107c61428(param_2 + 0x210,auStack_770,0,
                                                                      0);
                                                  if (iVar1 == *(int *)(param_2 + 0x210)) {
                                                    func_0x000107c61428(param_1 + 0x214,auStack_788,
                                                                        0,0);
                                                    iVar1 = *(int *)(param_1 + 0x214);
                                                    func_0x000107c61428(param_2 + 0x214,auStack_7a0,
                                                                        0,0);
                                                    if (iVar1 == *(int *)(param_2 + 0x214)) {
                                                      func_0x000107c61428(param_1 + 0x218,
                                                                          auStack_7b8,0,0);
                                                      cVar2 = *(char *)(param_1 + 0x218);
                                                      func_0x000107c61428(param_2 + 0x218,
                                                                          auStack_7d0,0,0);
                                                      if (cVar2 == *(char *)(param_2 + 0x218)) {
                                                        func_0x000107c61428(param_1 + 0x219,
                                                                            auStack_7e8,0,0);
                                                        cVar2 = *(char *)(param_1 + 0x219);
                                                        func_0x000107c61428(param_2 + 0x219,
                                                                            auStack_800,0,0);
                                                        if (cVar2 == *(char *)(param_2 + 0x219)) {
                                                          func_0x000107c61428(param_1 + 0x21a,
                                                                              auStack_818,0,0);
                                                          cVar2 = *(char *)(param_1 + 0x21a);
                                                          func_0x000107c61428(param_2 + 0x21a,
                                                                              auStack_830,0,0);
                                                          if (cVar2 == *(char *)(param_2 + 0x21a)) {
                                                            func_0x000107c61428(param_1 + 0x21b,
                                                                                auStack_848,0,0);
                                                            cVar2 = *(char *)(param_1 + 0x21b);
                                                            func_0x000107c61428(param_2 + 0x21b,
                                                                                auStack_860,0,0);
                                                            if (cVar2 == *(char *)(param_2 + 0x21b))
                                                            {
                                                              func_0x000107c61428(param_1 + 0x220,
                                                                                  auStack_878,0,0);
                                                              lVar13 = *(long *)(param_1 + 0x220);
                                                              func_0x000107c61428(param_2 + 0x220,
                                                                                  auStack_890,0,0);
                                                              lVar6 = *(long *)(param_2 + 0x220);
                                                              if (*(char *)(param_2 + 0x228) ==
                                                                  '\x01') {
                                                                if (lVar6 < 2) {
                                                                  if (lVar6 == 0) {
                                                                    if (lVar13 == 0) {
LAB_103657afc:
                                                                      func_0x000107c61428(param_1 + 
                                                  0x229,auStack_8a8,0,0);
                                                  cVar2 = *(char *)(param_1 + 0x229);
                                                  func_0x000107c61428(param_2 + 0x229,auStack_8c0,0,
                                                                      0);
                                                  if (cVar2 == *(char *)(param_2 + 0x229)) {
                                                    func_0x000107c61428(param_1 + 0x22a,auStack_8d8,
                                                                        0,0);
                                                    cVar2 = *(char *)(param_1 + 0x22a);
                                                    func_0x000107c61428(param_2 + 0x22a,auStack_8f0,
                                                                        0,0);
                                                    if (cVar2 == *(char *)(param_2 + 0x22a)) {
                                                      func_0x000107c61428(param_1 + 0x22b,
                                                                          auStack_908,0,0);
                                                      cVar2 = *(char *)(param_1 + 0x22b);
                                                      func_0x000107c61428(param_2 + 0x22b,
                                                                          auStack_920,0,0);
                                                      if (cVar2 == *(char *)(param_2 + 0x22b)) {
                                                        func_0x000107c61428(param_1 + 0x22c,
                                                                            auStack_938,0,0);
                                                        bVar5 = *(byte *)(param_1 + 0x22c);
                                                        func_0x000107c61428(param_2 + 0x22c,
                                                                            auStack_950,0,0);
                                                        bVar5 = bVar5 ^ *(byte *)(param_2 + 0x22c) ^
                                                                1;
                                                        goto LAB_103657184;
                                                      }
                                                    }
                                                  }
                                                  }
                                                  }
                                                  else if (lVar13 == 1) goto LAB_103657afc;
                                                  }
                                                  else if (lVar6 == 2) {
                                                    if (lVar13 == 2) goto LAB_103657afc;
                                                  }
                                                  else if (lVar6 == 3) {
                                                    if (lVar13 == 3) goto LAB_103657afc;
                                                  }
                                                  else if (lVar13 == 4) goto LAB_103657afc;
                                                  }
                                                  else if (lVar13 == lVar6) goto LAB_103657afc;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                      else if (lVar13 == 1) goto LAB_103657798;
                                    }
                                    else if (lVar6 == 2) {
                                      if (lVar13 == 2) goto LAB_103657798;
                                    }
                                    else if (lVar6 == 3) {
                                      if (lVar13 == 3) goto LAB_103657798;
                                    }
                                    else if (lVar13 == 4) goto LAB_103657798;
                                  }
                                  else if (lVar13 == lVar6) goto LAB_103657798;
                                  goto LAB_103657180;
                                }
                              }
                              else if ((uVar7 & 0xff) != 2) {
                                func_0x000101541464(uVar4,uVar8,uVar9);
                                func_0x000101541464(uVar7,uVar11,uVar12);
                                if ((((uint)uVar7 ^ (uint)uVar4) & 1) != 0) goto LAB_103657414;
                                uVar3 = uVar8;
                                func_0x000100e25fcc(uVar8,uVar9,uVar11,uVar12);
                                func_0x000101556278(uVar7,uVar11,uVar12);
                                if ((uVar3 & 1) == 0) goto LAB_103656998;
                                goto LAB_1036576b8;
                              }
                            }
                          }
                          else if ((uVar7 & 0xff) != 2) {
                            func_0x000101541464(uVar4,uVar8,uVar9);
                            func_0x000101541464(uVar7,uVar11,uVar12);
                            if ((((uint)uVar7 ^ (uint)uVar4) & 1) == 0) {
                              uVar3 = uVar8;
                              func_0x000100e25fcc(uVar8,uVar9,uVar11,uVar12);
                              func_0x000101556278(uVar7,uVar11,uVar12);
                              if ((uVar3 & 1) == 0) goto LAB_103656998;
                              goto LAB_103657458;
                            }
LAB_103657414:
                            func_0x000101556278(uVar7,uVar11,uVar12);
                            goto LAB_103656998;
                          }
                          func_0x000101541464(uVar4,uVar8,uVar9);
                          func_0x000101541464(uVar7,uVar11,uVar12);
                          func_0x000101556278(uVar4,uVar8,uVar9);
                          uVar4 = uVar7;
                          uVar8 = uVar11;
                          uVar9 = uVar12;
                          goto LAB_103656998;
                        }
                      }
                      goto LAB_103657180;
                    }
LAB_1036571b4:
                    func_0x000100d57448(lVar6,uVar4,uVar11);
                    func_0x000100d57448(lVar13,uVar7,uVar8);
                    func_0x000100d57464(lVar6,uVar4,uVar11);
                  }
                }
LAB_10365717c:
                func_0x000100d57464(lVar13,uVar7,uVar8);
              }
            }
          }
        }
      }
    }
  }
LAB_103657180:
  bVar5 = 0;
LAB_103657184:
  return bVar5 & 1;
}



/* Entry: 103657be0; end: 103657c3f;  */

void FUN_103657be0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (lRam0000000112f81af8 != -1) {
    func_0x000107c61568(0x112f81af8,FUN_103653768);
  }
  uVar1 = uRam0000000112f81b00;
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 103657c40; end: 103657c63;  */

undefined1  [16] FUN_103657c40(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f156d10;
  auVar1._0_8_ = 0xd00000000000002a;
  return auVar1;
}



/* Entry: 103657c64; end: 103657c93;  */

undefined1  [16] FUN_103657c64(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 103657c94; end: 103657cc7;  */

void FUN_103657c94(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 103657cc8; end: 103657cdb;  */

undefined8 FUN_103657cc8(void)

{
  return 0x103657cd8;
}



/* Entry: 103657cdc; end: 103657d13;  */

void FUN_103657cdc(void)

{
  FUN_10365397c();
  return;
}



/* Entry: 103657d14; end: 103657d17;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103657d14(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 103657d18; end: 103657d4f;  */

uint FUN_103657d18(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  FUN_10365961c();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 103657d50; end: 103657df7;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103657d50(long *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined8 uVar10;
  byte *pbVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  byte *pbVar21;
  byte *unaff_x19;
  long lVar22;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar23;
  ulong unaff_x22;
  long lVar24;
  byte *unaff_x23;
  ulong uVar25;
  byte *unaff_x24;
  ulong uVar26;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  
  lVar22 = *param_1;
  uVar16 = param_1[1];
  uVar26 = param_1[2];
  pbVar9 = (byte *)*unaff_x20;
  pbVar23 = (byte *)unaff_x20[1];
  uVar25 = unaff_x20[2];
  if (uVar25 != uVar26) {
    func_0x000107c6157c(uVar25);
    func_0x000107c6157c(uVar26);
    uVar12 = uVar25;
    FUN_1036562a0(uVar25,uVar26);
    func_0x000107c61574(uVar26);
    func_0x000107c61574(uVar25);
    if ((uVar12 & 1) == 0) {
      return (byte *)0x0;
    }
  }
  do {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar23 >> 0x20);
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar16 >> 0x20);
    uVar20 = uVar5 >> 0x1e;
    iVar7 = (int)pbVar9;
    pbVar13 = pbVar23;
    if ((ulong)pbVar23 >> 0x3e == 3) {
      uVar25 = 0;
      if ((((pbVar9 != (byte *)0x0) || (pbVar23 != (byte *)0xc000000000000000)) ||
          (uVar16 >> 0x3e < 3)) || ((uVar25 = 0, lVar22 != 0 || (uVar16 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar25 = (ulong)pbVar23 >> 0x30 & 0xff;
      }
      else {
        iVar19 = (int)((ulong)pbVar9 >> 0x20);
        if (SBORROW4(iVar19,iVar7)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar25 = (ulong)(iVar19 - iVar7);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar20 == 0) {
        uVar26 = uVar16 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar19 = (int)((ulong)lVar22 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar22)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar25 == (long)(iVar19 - (int)lVar22)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar25 = *(long *)(pbVar9 + 0x18) - *(long *)(pbVar9 + 0x10);
        if (SBORROW8(*(long *)(pbVar9 + 0x18),*(long *)(pbVar9 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar25 = 0;
      if (uVar20 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar20 == 2) {
        uVar26 = *(long *)(lVar22 + 0x18) - *(long *)(lVar22 + 0x10);
        if (SBORROW8(*(long *)(lVar22 + 0x18),*(long *)(lVar22 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar25 != uVar26) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar25 < 1) goto code_r0x000100e26128;
        if (uVar18 < 2) {
          if (uVar18 == 0) {
            *(char *)((long)register0x00000008 + -0x70) = (char)pbVar9;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar9 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar9 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar9 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar9 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar9 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar9 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar9 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)pbVar23;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar23 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar23 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar23 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar23 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar23 >> 0x28);
            pbVar13 = (byte *)((long)register0x00000008 + (((ulong)pbVar23 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar7;
          unaff_x23 = (byte *)(((long)pbVar9 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar9 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar23;
          if (pbVar9 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar9 = (byte *)0x0;
          }
          else {
            pbVar13 = pbVar9;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + ((long)unaff_x25 - (long)pbVar13);
            func_0x000107c5ec38();
            unaff_x19 = pbVar9;
            if (pbVar9 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar13) {
                pbVar13 = unaff_x23;
              }
              pbVar13 = pbVar13 + (long)pbVar9;
              goto code_r0x000100e262a4;
            }
          }
          pbVar13 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar13 = (byte *)((long)register0x00000008 + -0x70);
            goto code_r0x000100e26260;
          }
          lVar24 = *(long *)(pbVar9 + 0x10);
          unaff_x24 = *(byte **)(pbVar9 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar9;
          if (pbVar9 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar24,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + (lVar24 - (long)pbVar13);
          }
          unaff_x23 = unaff_x24 + -lVar24;
          if (SBORROW8((long)unaff_x24,lVar24)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar9;
          unaff_x25 = pbVar23;
          if (pbVar9 == (byte *)0x0) {
            pbVar13 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar13) {
              pbVar13 = unaff_x23;
            }
            pbVar13 = pbVar13 + (long)pbVar9;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (undefined8 *)((ulong)pbVar23 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar13,lVar22,
                            uVar16);
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar16;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar25 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return pbVar8;
    }
    func_0x000107c60e78();
    *(byte **)((long)register0x00000008 + -0xc0) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0xb8) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0xa0) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x88) = &UNK_100e26304;
    pbVar11 = *(byte **)pbVar8;
    pbVar9 = *(byte **)(pbVar8 + 8);
    pbVar21 = *(byte **)(pbVar8 + 0x18);
    bVar27 = pbVar8[0x28];
    pbVar23 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
    pbVar14 = pbVar9;
    if (bVar27 < 3) {
      if (bVar27 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar22 = *(long *)pbVar13;
          uVar10 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar11,lVar22,uVar10);
          return (byte *)(ulong)((uint)pbVar11 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar27 == 1) {
        if (pbVar13[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar17 = *(byte **)(pbVar13 + 0x10);
        lVar22 = *(long *)pbVar13;
        uVar10 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar11,lVar22,uVar10);
        if (((ulong)pbVar11 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar11 = pbVar9;
        pbVar14 = pbVar23;
        if ((pbVar9 == pbVar15) && (pbVar23 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar13[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        lVar22 = *(long *)(pbVar13 + 0x18);
        if ((pbVar11 == pbVar15) && (pbVar9 == pbVar17)) {
          if (((pbVar8[0x10] ^ pbVar13[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar21 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar22 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar22);
          func_0x000107c61174();
          pbVar9 = pbVar21;
          func_0x000107c60118();
          func_0x000107c61170(pbVar21);
          func_0x000107c61170(lVar22);
          pbVar21 = pbVar9;
joined_r0x000100e266a4:
          if (((ulong)pbVar21 & 1) == 0) {
            return (byte *)0x0;
          }
          return (byte *)0x1;
        }
      }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar11,pbVar14,pbVar15,pbVar17,0);
      return pbVar11;
    }
    lVar24 = *(long *)(pbVar8 + 0x20);
    if (bVar27 < 5) {
      if (bVar27 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        if (((pbVar11 == pbVar15) && (pbVar9 == pbVar17)) &&
           (pbVar11 = pbVar23, pbVar14 = pbVar21, pbVar15 = *(byte **)(pbVar13 + 0x10),
           pbVar17 = *(byte **)(pbVar13 + 0x18),
           pbVar23 == *(byte **)(pbVar13 + 0x10) && pbVar21 == *(byte **)(pbVar13 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar13[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar13 != ((uint)pbVar11 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar17 = *(byte **)(pbVar13 + 0x10);
      lVar22 = *(long *)(pbVar13 + 0x20);
      if (pbVar23 == (byte *)0x0) {
        if (pbVar17 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar17 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar11 = pbVar9;
        pbVar14 = pbVar23;
        if ((pbVar9 != pbVar15) || (pbVar23 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar24 != 0) {
        if (lVar22 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar21 == *(byte **)(pbVar13 + 0x18)) && (lVar24 == lVar22)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar21,lVar24,*(byte **)(pbVar13 + 0x18),lVar22,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar22 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar27 != 5) {
      if ((((pbVar21 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar11 == (byte *)0x0) &&
          lVar24 == 0) && pbVar23 == (byte *)0x0) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar24 = *(long *)(pbVar13 + 0x20);
        lVar22 = *(long *)(pbVar13 + 0x18);
        bVar27 = pbVar13[8] | (byte)lVar22;
        bVar28 = pbVar13[9] | (byte)((ulong)lVar22 >> 8);
        bVar29 = pbVar13[10] | (byte)((ulong)lVar22 >> 0x10);
        bVar30 = pbVar13[0xb] | (byte)((ulong)lVar22 >> 0x18);
        bVar31 = pbVar13[0xc] | (byte)((ulong)lVar22 >> 0x20);
        bVar32 = pbVar13[0xd] | (byte)((ulong)lVar22 >> 0x28);
        bVar33 = pbVar13[0xe] | (byte)((ulong)lVar22 >> 0x30);
        bVar34 = pbVar13[0xf] | (byte)((ulong)lVar22 >> 0x38);
        bVar35 = pbVar13[0x10] | (byte)lVar24;
        bVar36 = pbVar13[0x11] | (byte)((ulong)lVar24 >> 8);
        bVar37 = pbVar13[0x12] | (byte)((ulong)lVar24 >> 0x10);
        bVar38 = pbVar13[0x13] | (byte)((ulong)lVar24 >> 0x18);
        bVar39 = pbVar13[0x14] | (byte)((ulong)lVar24 >> 0x20);
        bVar40 = pbVar13[0x15] | (byte)((ulong)lVar24 >> 0x28);
        bVar41 = pbVar13[0x16] | (byte)((ulong)lVar24 >> 0x30);
        bVar42 = pbVar13[0x17] | (byte)((ulong)lVar24 >> 0x38);
        auVar43[1] = bVar28;
        auVar43[0] = bVar27;
        auVar43[2] = bVar29;
        auVar43[3] = bVar30;
        auVar43[4] = bVar31;
        auVar43[5] = bVar32;
        auVar43[6] = bVar33;
        auVar43[7] = bVar34;
        auVar43[8] = bVar35;
        auVar43[9] = bVar36;
        auVar43[10] = bVar37;
        auVar43[0xb] = bVar38;
        auVar43[0xc] = bVar39;
        auVar43[0xd] = bVar40;
        auVar43[0xe] = bVar41;
        auVar43[0xf] = bVar42;
        auVar3[1] = bVar28;
        auVar3[0] = bVar27;
        auVar3[2] = bVar29;
        auVar3[3] = bVar30;
        auVar3[4] = bVar31;
        auVar3[5] = bVar32;
        auVar3[6] = bVar33;
        auVar3[7] = bVar34;
        auVar3[8] = bVar35;
        auVar3[9] = bVar36;
        auVar3[10] = bVar37;
        auVar3[0xb] = bVar38;
        auVar3[0xc] = bVar39;
        auVar3[0xd] = bVar40;
        auVar3[0xe] = bVar41;
        auVar3[0xf] = bVar42;
        auVar43 = NEON_ext(auVar43,auVar3,8,1);
        if (CONCAT17(bVar34 | auVar43[7],
                     CONCAT16(bVar33 | auVar43[6],
                              CONCAT15(bVar32 | auVar43[5],
                                       CONCAT14(bVar31 | auVar43[4],
                                                CONCAT13(bVar30 | auVar43[3],
                                                         CONCAT12(bVar29 | auVar43[2],
                                                                  CONCAT11(bVar28 | auVar43[1],
                                                                           bVar27 | auVar43[0]))))))
                    ) == 0 && *(long *)pbVar13 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar11 == (byte *)0x1) &&
         (((pbVar21 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar23 == (byte *)0x0) &&
          lVar24 == 0)) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 2) {
          return (byte *)0x0;
        }
      }
      lVar24 = *(long *)(pbVar13 + 0x20);
      lVar22 = *(long *)(pbVar13 + 0x18);
      bVar27 = pbVar13[8] | (byte)lVar22;
      bVar28 = pbVar13[9] | (byte)((ulong)lVar22 >> 8);
      bVar29 = pbVar13[10] | (byte)((ulong)lVar22 >> 0x10);
      bVar30 = pbVar13[0xb] | (byte)((ulong)lVar22 >> 0x18);
      bVar31 = pbVar13[0xc] | (byte)((ulong)lVar22 >> 0x20);
      bVar32 = pbVar13[0xd] | (byte)((ulong)lVar22 >> 0x28);
      bVar33 = pbVar13[0xe] | (byte)((ulong)lVar22 >> 0x30);
      bVar34 = pbVar13[0xf] | (byte)((ulong)lVar22 >> 0x38);
      bVar35 = pbVar13[0x10] | (byte)lVar24;
      bVar36 = pbVar13[0x11] | (byte)((ulong)lVar24 >> 8);
      bVar37 = pbVar13[0x12] | (byte)((ulong)lVar24 >> 0x10);
      bVar38 = pbVar13[0x13] | (byte)((ulong)lVar24 >> 0x18);
      bVar39 = pbVar13[0x14] | (byte)((ulong)lVar24 >> 0x20);
      bVar40 = pbVar13[0x15] | (byte)((ulong)lVar24 >> 0x28);
      bVar41 = pbVar13[0x16] | (byte)((ulong)lVar24 >> 0x30);
      bVar42 = pbVar13[0x17] | (byte)((ulong)lVar24 >> 0x38);
      auVar1[1] = bVar28;
      auVar1[0] = bVar27;
      auVar1[2] = bVar29;
      auVar1[3] = bVar30;
      auVar1[4] = bVar31;
      auVar1[5] = bVar32;
      auVar1[6] = bVar33;
      auVar1[7] = bVar34;
      auVar1[8] = bVar35;
      auVar1[9] = bVar36;
      auVar1[10] = bVar37;
      auVar1[0xb] = bVar38;
      auVar1[0xc] = bVar39;
      auVar1[0xd] = bVar40;
      auVar1[0xe] = bVar41;
      auVar1[0xf] = bVar42;
      auVar2[1] = bVar28;
      auVar2[0] = bVar27;
      auVar2[2] = bVar29;
      auVar2[3] = bVar30;
      auVar2[4] = bVar31;
      auVar2[5] = bVar32;
      auVar2[6] = bVar33;
      auVar2[7] = bVar34;
      auVar2[8] = bVar35;
      auVar2[9] = bVar36;
      auVar2[10] = bVar37;
      auVar2[0xb] = bVar38;
      auVar2[0xc] = bVar39;
      auVar2[0xd] = bVar40;
      auVar2[0xe] = bVar41;
      auVar2[0xf] = bVar42;
      auVar43 = NEON_ext(auVar1,auVar2,8,1);
      lVar22 = CONCAT17(bVar34 | auVar43[7],
                        CONCAT16(bVar33 | auVar43[6],
                                 CONCAT15(bVar32 | auVar43[5],
                                          CONCAT14(bVar31 | auVar43[4],
                                                   CONCAT13(bVar30 | auVar43[3],
                                                            CONCAT12(bVar29 | auVar43[2],
                                                                     CONCAT11(bVar28 | auVar43[1],
                                                                              bVar27 | auVar43[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar13[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar22 = *(long *)(pbVar13 + 8);
    uVar16 = *(ulong *)(pbVar13 + 0x10);
    lVar24 = *(long *)pbVar13;
    uVar10 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar11,lVar24,uVar10);
    if (((ulong)pbVar11 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
    unaff_x20 = *(undefined8 **)((long)register0x00000008 + -0xa0);
    unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
    unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
    unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  } while( true );
}



/* Entry: 103657df8; end: 103657e97;  */

/* WARNING: Possible PIC construction at 0x000103657e44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103657e54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103657e48) */
/* WARNING: Removing unreachable block (ram,0x000103657e58) */

void FUN_103657df8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f81b08 != -1) {
    func_0x000107c61568(0x112f81b08,FUN_103653720);
  }
  uVar5 = uRam000000011380b128;
  uVar4 = uRam000000011380b120;
  uVar3 = uRam000000011380b118;
  uVar2 = uRam000000011380b110;
  uVar1 = uRam000000011380b108;
  *param_1 = uRam000000011380b100;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 103657e98; end: 103657ed3;  */

void FUN_103657e98(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f82248;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f82248,&UNK_10dbf2ed8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103657ed4; end: 103657fd7;  */

void FUN_103657ed4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_98 [72];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_40 = unaff_x20[2];
  uStack_48 = unaff_x20[1];
  uStack_50 = *unaff_x20;
  func_0x000107c6068c(auStack_98,0);
  func_0x000107c5fa50(auStack_98,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103657fd8; end: 10365807f;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103657fd8(undefined8 *param_1,long *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined8 uVar10;
  byte *pbVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  byte *pbVar21;
  byte *unaff_x19;
  long lVar22;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar23;
  ulong unaff_x22;
  long lVar24;
  byte *unaff_x23;
  ulong uVar25;
  byte *unaff_x24;
  ulong uVar26;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  
  pbVar9 = (byte *)*param_1;
  pbVar23 = (byte *)param_1[1];
  uVar25 = param_1[2];
  lVar22 = *param_2;
  uVar16 = param_2[1];
  uVar26 = param_2[2];
  if (uVar25 != uVar26) {
    func_0x000107c6157c(uVar25);
    func_0x000107c6157c(uVar26);
    uVar12 = uVar25;
    FUN_1036562a0(uVar25,uVar26);
    func_0x000107c61574(uVar26);
    func_0x000107c61574(uVar25);
    if ((uVar12 & 1) == 0) {
      return (byte *)0x0;
    }
  }
  do {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar23 >> 0x20);
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar16 >> 0x20);
    uVar20 = uVar5 >> 0x1e;
    iVar7 = (int)pbVar9;
    pbVar13 = pbVar23;
    if ((ulong)pbVar23 >> 0x3e == 3) {
      uVar25 = 0;
      if ((((pbVar9 != (byte *)0x0) || (pbVar23 != (byte *)0xc000000000000000)) ||
          (uVar16 >> 0x3e < 3)) || ((uVar25 = 0, lVar22 != 0 || (uVar16 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar25 = (ulong)pbVar23 >> 0x30 & 0xff;
      }
      else {
        iVar19 = (int)((ulong)pbVar9 >> 0x20);
        if (SBORROW4(iVar19,iVar7)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar25 = (ulong)(iVar19 - iVar7);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar20 == 0) {
        uVar26 = uVar16 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar19 = (int)((ulong)lVar22 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar22)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar25 == (long)(iVar19 - (int)lVar22)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar25 = *(long *)(pbVar9 + 0x18) - *(long *)(pbVar9 + 0x10);
        if (SBORROW8(*(long *)(pbVar9 + 0x18),*(long *)(pbVar9 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar25 = 0;
      if (uVar20 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar20 == 2) {
        uVar26 = *(long *)(lVar22 + 0x18) - *(long *)(lVar22 + 0x10);
        if (SBORROW8(*(long *)(lVar22 + 0x18),*(long *)(lVar22 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar25 != uVar26) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar25 < 1) goto code_r0x000100e26128;
        if (uVar18 < 2) {
          if (uVar18 == 0) {
            *(char *)((long)register0x00000008 + -0x70) = (char)pbVar9;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar9 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar9 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar9 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar9 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar9 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar9 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar9 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)pbVar23;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar23 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar23 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar23 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar23 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar23 >> 0x28);
            pbVar13 = (byte *)((long)register0x00000008 + (((ulong)pbVar23 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar7;
          unaff_x23 = (byte *)(((long)pbVar9 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar9 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar23;
          if (pbVar9 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar9 = (byte *)0x0;
          }
          else {
            pbVar13 = pbVar9;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + ((long)unaff_x25 - (long)pbVar13);
            func_0x000107c5ec38();
            unaff_x19 = pbVar9;
            if (pbVar9 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar13) {
                pbVar13 = unaff_x23;
              }
              pbVar13 = pbVar13 + (long)pbVar9;
              goto code_r0x000100e262a4;
            }
          }
          pbVar13 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar13 = (byte *)((long)register0x00000008 + -0x70);
            goto code_r0x000100e26260;
          }
          lVar24 = *(long *)(pbVar9 + 0x10);
          unaff_x24 = *(byte **)(pbVar9 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar9;
          if (pbVar9 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar24,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + (lVar24 - (long)pbVar13);
          }
          unaff_x23 = unaff_x24 + -lVar24;
          if (SBORROW8((long)unaff_x24,lVar24)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar9;
          unaff_x25 = pbVar23;
          if (pbVar9 == (byte *)0x0) {
            pbVar13 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar13) {
              pbVar13 = unaff_x23;
            }
            pbVar13 = pbVar13 + (long)pbVar9;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong)pbVar23 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar13,lVar22,
                            uVar16);
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar16;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar25 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return pbVar8;
    }
    func_0x000107c60e78();
    *(byte **)((long)register0x00000008 + -0xc0) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0xb8) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0xa0) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x88) = &UNK_100e26304;
    pbVar11 = *(byte **)pbVar8;
    pbVar9 = *(byte **)(pbVar8 + 8);
    pbVar21 = *(byte **)(pbVar8 + 0x18);
    bVar27 = pbVar8[0x28];
    pbVar23 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
    pbVar14 = pbVar9;
    if (bVar27 < 3) {
      if (bVar27 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar22 = *(long *)pbVar13;
          uVar10 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar11,lVar22,uVar10);
          return (byte *)(ulong)((uint)pbVar11 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar27 == 1) {
        if (pbVar13[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar17 = *(byte **)(pbVar13 + 0x10);
        lVar22 = *(long *)pbVar13;
        uVar10 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar11,lVar22,uVar10);
        if (((ulong)pbVar11 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar11 = pbVar9;
        pbVar14 = pbVar23;
        if ((pbVar9 == pbVar15) && (pbVar23 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar13[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        lVar22 = *(long *)(pbVar13 + 0x18);
        if ((pbVar11 == pbVar15) && (pbVar9 == pbVar17)) {
          if (((pbVar8[0x10] ^ pbVar13[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar21 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar22 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar22);
          func_0x000107c61174();
          pbVar9 = pbVar21;
          func_0x000107c60118();
          func_0x000107c61170(pbVar21);
          func_0x000107c61170(lVar22);
          pbVar21 = pbVar9;
joined_r0x000100e266a4:
          if (((ulong)pbVar21 & 1) == 0) {
            return (byte *)0x0;
          }
          return (byte *)0x1;
        }
      }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar11,pbVar14,pbVar15,pbVar17,0);
      return pbVar11;
    }
    lVar24 = *(long *)(pbVar8 + 0x20);
    if (bVar27 < 5) {
      if (bVar27 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        if (((pbVar11 == pbVar15) && (pbVar9 == pbVar17)) &&
           (pbVar11 = pbVar23, pbVar14 = pbVar21, pbVar15 = *(byte **)(pbVar13 + 0x10),
           pbVar17 = *(byte **)(pbVar13 + 0x18),
           pbVar23 == *(byte **)(pbVar13 + 0x10) && pbVar21 == *(byte **)(pbVar13 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar13[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar13 != ((uint)pbVar11 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar17 = *(byte **)(pbVar13 + 0x10);
      lVar22 = *(long *)(pbVar13 + 0x20);
      if (pbVar23 == (byte *)0x0) {
        if (pbVar17 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar17 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar11 = pbVar9;
        pbVar14 = pbVar23;
        if ((pbVar9 != pbVar15) || (pbVar23 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar24 != 0) {
        if (lVar22 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar21 == *(byte **)(pbVar13 + 0x18)) && (lVar24 == lVar22)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar21,lVar24,*(byte **)(pbVar13 + 0x18),lVar22,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar22 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar27 != 5) {
      if ((((pbVar21 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar11 == (byte *)0x0) &&
          lVar24 == 0) && pbVar23 == (byte *)0x0) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar24 = *(long *)(pbVar13 + 0x20);
        lVar22 = *(long *)(pbVar13 + 0x18);
        bVar27 = pbVar13[8] | (byte)lVar22;
        bVar28 = pbVar13[9] | (byte)((ulong)lVar22 >> 8);
        bVar29 = pbVar13[10] | (byte)((ulong)lVar22 >> 0x10);
        bVar30 = pbVar13[0xb] | (byte)((ulong)lVar22 >> 0x18);
        bVar31 = pbVar13[0xc] | (byte)((ulong)lVar22 >> 0x20);
        bVar32 = pbVar13[0xd] | (byte)((ulong)lVar22 >> 0x28);
        bVar33 = pbVar13[0xe] | (byte)((ulong)lVar22 >> 0x30);
        bVar34 = pbVar13[0xf] | (byte)((ulong)lVar22 >> 0x38);
        bVar35 = pbVar13[0x10] | (byte)lVar24;
        bVar36 = pbVar13[0x11] | (byte)((ulong)lVar24 >> 8);
        bVar37 = pbVar13[0x12] | (byte)((ulong)lVar24 >> 0x10);
        bVar38 = pbVar13[0x13] | (byte)((ulong)lVar24 >> 0x18);
        bVar39 = pbVar13[0x14] | (byte)((ulong)lVar24 >> 0x20);
        bVar40 = pbVar13[0x15] | (byte)((ulong)lVar24 >> 0x28);
        bVar41 = pbVar13[0x16] | (byte)((ulong)lVar24 >> 0x30);
        bVar42 = pbVar13[0x17] | (byte)((ulong)lVar24 >> 0x38);
        auVar43[1] = bVar28;
        auVar43[0] = bVar27;
        auVar43[2] = bVar29;
        auVar43[3] = bVar30;
        auVar43[4] = bVar31;
        auVar43[5] = bVar32;
        auVar43[6] = bVar33;
        auVar43[7] = bVar34;
        auVar43[8] = bVar35;
        auVar43[9] = bVar36;
        auVar43[10] = bVar37;
        auVar43[0xb] = bVar38;
        auVar43[0xc] = bVar39;
        auVar43[0xd] = bVar40;
        auVar43[0xe] = bVar41;
        auVar43[0xf] = bVar42;
        auVar3[1] = bVar28;
        auVar3[0] = bVar27;
        auVar3[2] = bVar29;
        auVar3[3] = bVar30;
        auVar3[4] = bVar31;
        auVar3[5] = bVar32;
        auVar3[6] = bVar33;
        auVar3[7] = bVar34;
        auVar3[8] = bVar35;
        auVar3[9] = bVar36;
        auVar3[10] = bVar37;
        auVar3[0xb] = bVar38;
        auVar3[0xc] = bVar39;
        auVar3[0xd] = bVar40;
        auVar3[0xe] = bVar41;
        auVar3[0xf] = bVar42;
        auVar43 = NEON_ext(auVar43,auVar3,8,1);
        if (CONCAT17(bVar34 | auVar43[7],
                     CONCAT16(bVar33 | auVar43[6],
                              CONCAT15(bVar32 | auVar43[5],
                                       CONCAT14(bVar31 | auVar43[4],
                                                CONCAT13(bVar30 | auVar43[3],
                                                         CONCAT12(bVar29 | auVar43[2],
                                                                  CONCAT11(bVar28 | auVar43[1],
                                                                           bVar27 | auVar43[0]))))))
                    ) == 0 && *(long *)pbVar13 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar11 == (byte *)0x1) &&
         (((pbVar21 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar23 == (byte *)0x0) &&
          lVar24 == 0)) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 2) {
          return (byte *)0x0;
        }
      }
      lVar24 = *(long *)(pbVar13 + 0x20);
      lVar22 = *(long *)(pbVar13 + 0x18);
      bVar27 = pbVar13[8] | (byte)lVar22;
      bVar28 = pbVar13[9] | (byte)((ulong)lVar22 >> 8);
      bVar29 = pbVar13[10] | (byte)((ulong)lVar22 >> 0x10);
      bVar30 = pbVar13[0xb] | (byte)((ulong)lVar22 >> 0x18);
      bVar31 = pbVar13[0xc] | (byte)((ulong)lVar22 >> 0x20);
      bVar32 = pbVar13[0xd] | (byte)((ulong)lVar22 >> 0x28);
      bVar33 = pbVar13[0xe] | (byte)((ulong)lVar22 >> 0x30);
      bVar34 = pbVar13[0xf] | (byte)((ulong)lVar22 >> 0x38);
      bVar35 = pbVar13[0x10] | (byte)lVar24;
      bVar36 = pbVar13[0x11] | (byte)((ulong)lVar24 >> 8);
      bVar37 = pbVar13[0x12] | (byte)((ulong)lVar24 >> 0x10);
      bVar38 = pbVar13[0x13] | (byte)((ulong)lVar24 >> 0x18);
      bVar39 = pbVar13[0x14] | (byte)((ulong)lVar24 >> 0x20);
      bVar40 = pbVar13[0x15] | (byte)((ulong)lVar24 >> 0x28);
      bVar41 = pbVar13[0x16] | (byte)((ulong)lVar24 >> 0x30);
      bVar42 = pbVar13[0x17] | (byte)((ulong)lVar24 >> 0x38);
      auVar1[1] = bVar28;
      auVar1[0] = bVar27;
      auVar1[2] = bVar29;
      auVar1[3] = bVar30;
      auVar1[4] = bVar31;
      auVar1[5] = bVar32;
      auVar1[6] = bVar33;
      auVar1[7] = bVar34;
      auVar1[8] = bVar35;
      auVar1[9] = bVar36;
      auVar1[10] = bVar37;
      auVar1[0xb] = bVar38;
      auVar1[0xc] = bVar39;
      auVar1[0xd] = bVar40;
      auVar1[0xe] = bVar41;
      auVar1[0xf] = bVar42;
      auVar2[1] = bVar28;
      auVar2[0] = bVar27;
      auVar2[2] = bVar29;
      auVar2[3] = bVar30;
      auVar2[4] = bVar31;
      auVar2[5] = bVar32;
      auVar2[6] = bVar33;
      auVar2[7] = bVar34;
      auVar2[8] = bVar35;
      auVar2[9] = bVar36;
      auVar2[10] = bVar37;
      auVar2[0xb] = bVar38;
      auVar2[0xc] = bVar39;
      auVar2[0xd] = bVar40;
      auVar2[0xe] = bVar41;
      auVar2[0xf] = bVar42;
      auVar43 = NEON_ext(auVar1,auVar2,8,1);
      lVar22 = CONCAT17(bVar34 | auVar43[7],
                        CONCAT16(bVar33 | auVar43[6],
                                 CONCAT15(bVar32 | auVar43[5],
                                          CONCAT14(bVar31 | auVar43[4],
                                                   CONCAT13(bVar30 | auVar43[3],
                                                            CONCAT12(bVar29 | auVar43[2],
                                                                     CONCAT11(bVar28 | auVar43[1],
                                                                              bVar27 | auVar43[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar13[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar22 = *(long *)(pbVar13 + 8);
    uVar16 = *(ulong *)(pbVar13 + 0x10);
    lVar24 = *(long *)pbVar13;
    uVar10 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar11,lVar24,uVar10);
    if (((ulong)pbVar11 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
    unaff_x20 = *(ulong *)((long)register0x00000008 + -0xa0);
    unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
    unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
    unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  } while( true );
}



/* Entry: 103658080; end: 1036580c7;  */

void FUN_103658080(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbf2f30,0x4f,2);
  uRam000000011380b138 = uStack_38;
  uRam000000011380b130 = uStack_40;
  uRam000000011380b148 = uStack_28;
  uRam000000011380b140 = uStack_30;
  uRam000000011380b158 = uStack_18;
  uRam000000011380b150 = uStack_20;
  return;
}



/* Entry: 1036580c8; end: 103658167;  */

/* WARNING: Possible PIC construction at 0x000103658114: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103658124: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103658118) */
/* WARNING: Removing unreachable block (ram,0x000103658128) */

void FUN_1036580c8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f81b18 != -1) {
    func_0x000107c61568(0x112f81b18,FUN_103658080);
  }
  uVar5 = uRam000000011380b158;
  uVar4 = uRam000000011380b150;
  uVar3 = uRam000000011380b148;
  uVar2 = uRam000000011380b140;
  uVar1 = uRam000000011380b138;
  *param_1 = uRam000000011380b130;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 103658168; end: 1036581af;  */

void FUN_103658168(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbf2ee0,0x42,2);
  uRam000000011380b168 = uStack_38;
  uRam000000011380b160 = uStack_40;
  uRam000000011380b178 = uStack_28;
  uRam000000011380b170 = uStack_30;
  uRam000000011380b188 = uStack_18;
  uRam000000011380b180 = uStack_20;
  return;
}



/* Entry: 1036581b0; end: 10365824f;  */

/* WARNING: Possible PIC construction at 0x0001036581fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010365820c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103658200) */
/* WARNING: Removing unreachable block (ram,0x000103658210) */

void FUN_1036581b0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f81b20 != -1) {
    func_0x000107c61568(0x112f81b20,FUN_103658168);
  }
  uVar5 = uRam000000011380b188;
  uVar4 = uRam000000011380b180;
  uVar3 = uRam000000011380b178;
  uVar2 = uRam000000011380b170;
  uVar1 = uRam000000011380b168;
  *param_1 = uRam000000011380b160;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 103658250; end: 10365906b;  */

void FUN_103658250(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long unaff_x20;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined2 *puVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  undefined2 *puVar24;
  undefined8 uVar25;
  undefined1 auStack_998 [24];
  undefined1 auStack_980 [24];
  undefined1 auStack_968 [24];
  undefined1 auStack_950 [24];
  undefined1 auStack_938 [24];
  undefined1 auStack_920 [24];
  undefined1 auStack_908 [24];
  undefined1 auStack_8f0 [24];
  undefined1 auStack_8d8 [24];
  undefined1 auStack_8c0 [24];
  undefined1 auStack_8a8 [24];
  undefined1 auStack_890 [24];
  undefined1 auStack_878 [24];
  undefined1 auStack_860 [24];
  undefined1 auStack_848 [24];
  undefined1 auStack_830 [24];
  undefined1 auStack_818 [24];
  undefined1 auStack_800 [24];
  undefined1 auStack_7e8 [24];
  undefined1 auStack_7d0 [24];
  undefined1 auStack_7b8 [24];
  undefined1 auStack_7a0 [24];
  undefined1 auStack_788 [24];
  undefined1 auStack_770 [24];
  undefined1 auStack_758 [24];
  undefined1 auStack_740 [24];
  undefined1 auStack_728 [24];
  undefined1 auStack_710 [24];
  undefined1 auStack_6f8 [24];
  undefined1 auStack_6e0 [24];
  undefined1 auStack_6c8 [24];
  undefined1 auStack_6b0 [24];
  undefined1 auStack_698 [24];
  undefined1 auStack_680 [24];
  undefined1 auStack_668 [24];
  undefined1 auStack_650 [24];
  undefined1 auStack_638 [24];
  undefined1 auStack_620 [24];
  undefined1 auStack_608 [24];
  undefined1 auStack_5f0 [24];
  undefined1 auStack_5d8 [24];
  undefined1 auStack_5c0 [24];
  undefined1 auStack_5a8 [24];
  undefined1 auStack_590 [24];
  undefined1 auStack_578 [24];
  undefined1 auStack_560 [24];
  undefined1 auStack_548 [24];
  undefined1 auStack_530 [24];
  undefined1 auStack_518 [24];
  undefined1 auStack_500 [24];
  undefined1 auStack_4e8 [24];
  undefined1 auStack_4d0 [24];
  undefined1 auStack_4b8 [24];
  undefined1 auStack_4a0 [24];
  undefined1 auStack_488 [24];
  undefined1 auStack_470 [24];
  undefined1 auStack_458 [24];
  undefined1 auStack_440 [24];
  undefined1 auStack_428 [24];
  undefined1 auStack_410 [24];
  undefined1 auStack_3f8 [24];
  undefined1 auStack_3e0 [24];
  undefined1 auStack_3c8 [24];
  undefined1 auStack_3b0 [24];
  undefined1 auStack_398 [24];
  undefined1 auStack_380 [24];
  undefined1 auStack_368 [24];
  undefined1 auStack_350 [24];
  undefined1 auStack_338 [24];
  undefined1 auStack_320 [24];
  undefined1 auStack_308 [24];
  undefined1 auStack_2f0 [24];
  undefined1 auStack_2d8 [24];
  undefined1 auStack_2c0 [24];
  undefined1 auStack_2a8 [24];
  undefined1 auStack_290 [24];
  undefined1 auStack_278 [24];
  undefined1 auStack_260 [24];
  undefined1 auStack_248 [24];
  undefined1 auStack_230 [24];
  undefined1 auStack_218 [24];
  undefined1 auStack_200 [24];
  undefined1 auStack_1e8 [24];
  undefined1 auStack_1d0 [24];
  undefined1 auStack_1b8 [24];
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  puVar21 = (undefined2 *)(unaff_x20 + 0x10);
  *puVar21 = 0;
  puVar24 = (undefined2 *)(unaff_x20 + 0x28);
  *puVar24 = 0;
  puVar20 = (undefined8 *)(unaff_x20 + 0x20);
  *puVar20 = 0;
  puVar17 = (undefined8 *)(unaff_x20 + 0x18);
  *puVar17 = 0;
  puVar22 = (undefined8 *)(unaff_x20 + 0x30);
  *puVar22 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar19 = (undefined8 *)(unaff_x20 + 0x38);
  *puVar19 = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  puVar6 = (undefined8 *)(unaff_x20 + 0x50);
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *puVar6 = 0;
  puVar7 = (undefined8 *)(unaff_x20 + 0x70);
  *puVar7 = 2;
  puVar8 = (undefined8 *)(unaff_x20 + 0x88);
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  *puVar8 = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x98) = 0xf000000000000000;
  puVar9 = (undefined4 *)(unaff_x20 + 0xa0);
  *puVar9 = 0;
  puVar10 = (undefined8 *)(unaff_x20 + 0xa8);
  *puVar10 = 0;
  puVar11 = (undefined1 *)(unaff_x20 + 0xb2);
  *puVar11 = 0;
  *(undefined2 *)(unaff_x20 + 0xb0) = 1;
  *(undefined8 *)(unaff_x20 + 0xc0) = 0;
  puVar12 = (undefined8 *)(unaff_x20 + 0xb8);
  *puVar12 = 0;
  *(undefined8 *)(unaff_x20 + 0xd0) = 0;
  *(undefined8 *)(unaff_x20 + 200) = 0xf000000000000000;
  *(undefined2 *)(unaff_x20 + 0xd8) = 1;
  puVar13 = (undefined8 *)(unaff_x20 + 0xe0);
  *(undefined8 *)(unaff_x20 + 0xe8) = 0;
  *puVar13 = 0;
  *(undefined8 *)(unaff_x20 + 0xf8) = 0;
  *(undefined8 *)(unaff_x20 + 0xf0) = 0;
  *(undefined8 *)(unaff_x20 + 0x100) = 0;
  *(undefined8 *)(unaff_x20 + 0x108) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x110) = 0;
  *(undefined8 *)(unaff_x20 + 0x118) = 0;
  *(undefined8 *)(unaff_x20 + 0x120) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x128) = 0;
  *(undefined8 *)(unaff_x20 + 0x130) = 0;
  *(undefined8 *)(unaff_x20 + 0x138) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x140) = 0;
  *(undefined8 *)(unaff_x20 + 0x148) = 0;
  *(undefined8 *)(unaff_x20 + 0x150) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x158) = 0;
  *(undefined8 *)(unaff_x20 + 0x160) = 0;
  *(undefined8 *)(unaff_x20 + 0x168) = 0xf000000000000000;
  *(undefined1 *)(unaff_x20 + 0x170) = 0;
  *(undefined8 *)(unaff_x20 + 0x178) = 0;
  *(undefined8 *)(unaff_x20 + 0x180) = 0xe000000000000000;
  *(undefined1 *)(unaff_x20 + 0x188) = 0;
  *(undefined8 *)(unaff_x20 + 400) = 0;
  *(undefined8 *)(unaff_x20 + 0x198) = 0xe000000000000000;
  *(undefined8 *)(unaff_x20 + 0x1a0) = 2;
  *(undefined8 *)(unaff_x20 + 0x1c0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1b8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1d0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1c8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1b0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1a8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1d8) = 2;
  *(undefined8 *)(unaff_x20 + 0x1e0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1e8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1f0) = 0;
  *(undefined1 *)(unaff_x20 + 0x1f8) = 1;
  *(undefined8 *)(unaff_x20 + 0x200) = 0;
  *(undefined4 *)(unaff_x20 + 0x1f9) = 0;
  *(undefined8 *)(unaff_x20 + 0x208) = 0xe000000000000000;
  *(undefined8 *)(unaff_x20 + 0x220) = 0;
  *(undefined8 *)(unaff_x20 + 0x210) = 0;
  *(undefined4 *)(unaff_x20 + 0x218) = 0;
  *(undefined1 *)(unaff_x20 + 0x228) = 1;
  puVar5 = (undefined4 *)(unaff_x20 + 0x229);
  *puVar5 = 0;
  func_0x000107c61428(param_1 + 0x10,auStack_80,0,0);
  uVar4 = *(undefined1 *)(param_1 + 0x10);
  func_0x000107c61428(puVar21,auStack_98,1,0);
  *(undefined1 *)puVar21 = uVar4;
  func_0x000107c61428(param_1 + 0x11,auStack_b0,0,0);
  uVar4 = *(undefined1 *)(param_1 + 0x11);
  func_0x000107c61428(unaff_x20 + 0x11,auStack_c8,1,0);
  *(undefined1 *)(unaff_x20 + 0x11) = uVar4;
  func_0x000107c61428(param_1 + 0x18,auStack_e0,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c61428(puVar17,auStack_f8,1,0);
  *puVar17 = uVar14;
  func_0x000107c61428(param_1 + 0x20,auStack_110,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c61428(puVar20,auStack_128,1,0);
  *puVar20 = uVar14;
  func_0x000107c61428(param_1 + 0x28,auStack_140,0,0);
  uVar4 = *(undefined1 *)(param_1 + 0x28);
  func_0x000107c61428(puVar24,auStack_158,1,0);
  *(undefined1 *)puVar24 = uVar4;
  func_0x000107c61428(param_1 + 0x29,auStack_170,0,0);
  uVar4 = *(undefined1 *)(param_1 + 0x29);
  func_0x000107c61428(unaff_x20 + 0x29,auStack_188,1,0);
  *(undefined1 *)(unaff_x20 + 0x29) = uVar4;
  func_0x000107c61428(param_1 + 0x30,auStack_1a0,0,0);
  uVar18 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c61428(puVar22,auStack_1b8,1,0);
  *puVar22 = uVar18;
  func_0x000107c61428(param_1 + 0x38,auStack_1d0,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x38);
  uVar15 = *(undefined8 *)(param_1 + 0x40);
  uVar23 = *(undefined8 *)(param_1 + 0x48);
  func_0x000107c61428(puVar19,auStack_1e8,1,0);
  uVar25 = *puVar19;
  uVar16 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
  *puVar19 = uVar14;
  *(undefined8 *)(unaff_x20 + 0x40) = uVar15;
  *(undefined8 *)(unaff_x20 + 0x48) = uVar23;
  func_0x000107c61434(uVar18);
  func_0x000100d57448(uVar14,uVar15,uVar23);
  func_0x000100d57464(uVar25,uVar16,uVar1);
  func_0x000107c61428(param_1 + 0x50,auStack_200,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x50);
  func_0x000107c61428(puVar6,auStack_218,1,0);
  *puVar6 = uVar14;
  func_0x000107c61428(param_1 + 0x58,auStack_230,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x58);
  uVar15 = *(undefined8 *)(param_1 + 0x60);
  uVar18 = *(undefined8 *)(param_1 + 0x68);
  func_0x000107c61428(unaff_x20 + 0x58,auStack_248,1,0);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar23 = *(undefined8 *)(unaff_x20 + 0x68);
  *(undefined8 *)(unaff_x20 + 0x58) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x60) = uVar15;
  *(undefined8 *)(unaff_x20 + 0x68) = uVar18;
  FUN_10365906c(uVar14,uVar15,uVar18);
  func_0x000103659098(uVar16,uVar1,uVar23);
  func_0x000107c61428(param_1 + 0x70,auStack_260,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x70);
  uVar15 = *(undefined8 *)(param_1 + 0x78);
  uVar18 = *(undefined8 *)(param_1 + 0x80);
  func_0x000107c61428(puVar7,auStack_278,1,0);
  uVar23 = *puVar7;
  uVar16 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x80);
  *puVar7 = uVar14;
  *(undefined8 *)(unaff_x20 + 0x78) = uVar15;
  *(undefined8 *)(unaff_x20 + 0x80) = uVar18;
  func_0x000101541464(uVar14,uVar15,uVar18);
  func_0x000101556278(uVar23,uVar16,uVar1);
  func_0x000107c61428(param_1 + 0x88,auStack_290,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x88);
  uVar15 = *(undefined8 *)(param_1 + 0x90);
  uVar18 = *(undefined8 *)(param_1 + 0x98);
  func_0x000107c61428(puVar8,auStack_2a8,1,0);
  uVar23 = *puVar8;
  uVar16 = *(undefined8 *)(unaff_x20 + 0x90);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x98);
  *puVar8 = uVar14;
  *(undefined8 *)(unaff_x20 + 0x90) = uVar15;
  *(undefined8 *)(unaff_x20 + 0x98) = uVar18;
  func_0x000100d57448(uVar14,uVar15,uVar18);
  func_0x000100d57464(uVar23,uVar16,uVar1);
  func_0x000107c61428(param_1 + 0xa0,auStack_2c0,0,0);
  uVar3 = *(undefined4 *)(param_1 + 0xa0);
  func_0x000107c61428(puVar9,auStack_2d8,1,0);
  *puVar9 = uVar3;
  func_0x000107c61428(param_1 + 0xa8,auStack_2f0,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0xa8);
  uVar4 = *(undefined1 *)(param_1 + 0xb0);
  func_0x000107c61428(puVar10,auStack_308,1,0);
  *puVar10 = uVar14;
  *(undefined1 *)(unaff_x20 + 0xb0) = uVar4;
  func_0x000107c61428(param_1 + 0xb1,auStack_320,0,0);
  uVar4 = *(undefined1 *)(param_1 + 0xb1);
  func_0x000107c61428(unaff_x20 + 0xb1,auStack_338,1,0);
  *(undefined1 *)(unaff_x20 + 0xb1) = uVar4;
  func_0x000107c61428(param_1 + 0xb2,auStack_350,0,0);
  uVar4 = *(undefined1 *)(param_1 + 0xb2);
  func_0x000107c61428(puVar11,auStack_368,1,0);
  *puVar11 = uVar4;
  func_0x000107c61428(param_1 + 0xb8,auStack_380,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0xb8);
  uVar15 = *(undefined8 *)(param_1 + 0xc0);
  uVar18 = *(undefined8 *)(param_1 + 200);
  func_0x000107c61428(puVar12,auStack_398,1,0);
  uVar23 = *puVar12;
  uVar16 = *(undefined8 *)(unaff_x20 + 0xc0);
  uVar1 = *(undefined8 *)(unaff_x20 + 200);
  *puVar12 = uVar14;
  *(undefined8 *)(unaff_x20 + 0xc0) = uVar15;
  *(undefined8 *)(unaff_x20 + 200) = uVar18;
  func_0x000100d57448(uVar14,uVar15,uVar18);
  func_0x000100d57464(uVar23,uVar16,uVar1);
  func_0x000107c61428(param_1 + 0xd0,auStack_3b0,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0xd0);
  uVar4 = *(undefined1 *)(param_1 + 0xd8);
  func_0x000107c61428(unaff_x20 + 0xd0,auStack_3c8,1,0);
  *(undefined8 *)(unaff_x20 + 0xd0) = uVar14;
  *(undefined1 *)(unaff_x20 + 0xd8) = uVar4;
  func_0x000107c61428(param_1 + 0xd9,auStack_3e0,0,0);
  uVar4 = *(undefined1 *)(param_1 + 0xd9);
  func_0x000107c61428(unaff_x20 + 0xd9,auStack_3f8,1,0);
  *(undefined1 *)(unaff_x20 + 0xd9) = uVar4;
  func_0x000107c61428(param_1 + 0xe0,auStack_410,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0xe0);
  uVar15 = *(undefined8 *)(param_1 + 0xe8);
  uVar18 = *(undefined8 *)(param_1 + 0xf0);
  func_0x000107c61428(puVar13,auStack_428,1,0);
  uVar23 = *puVar13;
  uVar16 = *(undefined8 *)(unaff_x20 + 0xe8);
  uVar1 = *(undefined8 *)(unaff_x20 + 0xf0);
  *puVar13 = uVar14;
  *(undefined8 *)(unaff_x20 + 0xe8) = uVar15;
  *(undefined8 *)(unaff_x20 + 0xf0) = uVar18;
  FUN_10365906c(uVar14,uVar15,uVar18);
  func_0x000103659098(uVar23,uVar16,uVar1);
  func_0x000107c61428(param_1 + 0xf8,auStack_440,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0xf8);
  uVar15 = *(undefined8 *)(param_1 + 0x100);
  uVar18 = *(undefined8 *)(param_1 + 0x108);
  func_0x000107c61428(unaff_x20 + 0xf8,auStack_458,1,0);
  uVar16 = *(undefined8 *)(unaff_x20 + 0xf8);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x100);
  uVar23 = *(undefined8 *)(unaff_x20 + 0x108);
  *(undefined8 *)(unaff_x20 + 0xf8) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x100) = uVar15;
  *(undefined8 *)(unaff_x20 + 0x108) = uVar18;
  func_0x000100d57448(uVar14,uVar15,uVar18);
  func_0x000100d57464(uVar16,uVar1,uVar23);
  func_0x000107c61428(param_1 + 0x110,auStack_470,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x110);
  uVar15 = *(undefined8 *)(param_1 + 0x118);
  uVar18 = *(undefined8 *)(param_1 + 0x120);
  func_0x000107c61428(unaff_x20 + 0x110,auStack_488,1,0);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x110);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x118);
  uVar23 = *(undefined8 *)(unaff_x20 + 0x120);
  *(undefined8 *)(unaff_x20 + 0x110) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x118) = uVar15;
  *(undefined8 *)(unaff_x20 + 0x120) = uVar18;
  func_0x000100d57448(uVar14,uVar15,uVar18);
  func_0x000100d57464(uVar16,uVar1,uVar23);
  func_0x000107c61428(param_1 + 0x128,auStack_4a0,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x128);
  uVar15 = *(undefined8 *)(param_1 + 0x130);
  uVar18 = *(undefined8 *)(param_1 + 0x138);
  func_0x000107c61428(unaff_x20 + 0x128,auStack_4b8,1,0);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x128);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x130);
  uVar23 = *(undefined8 *)(unaff_x20 + 0x138);
  *(undefined8 *)(unaff_x20 + 0x128) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x130) = uVar15;
  *(undefined8 *)(unaff_x20 + 0x138) = uVar18;
  func_0x000100d57448(uVar14,uVar15,uVar18);
  func_0x000100d57464(uVar16,uVar1,uVar23);
  func_0x000107c61428(param_1 + 0x140,auStack_4d0,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x140);
  uVar15 = *(undefined8 *)(param_1 + 0x148);
  uVar18 = *(undefined8 *)(param_1 + 0x150);
  func_0x000107c61428(unaff_x20 + 0x140,auStack_4e8,1,0);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x140);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x148);
  uVar23 = *(undefined8 *)(unaff_x20 + 0x150);
  *(undefined8 *)(unaff_x20 + 0x140) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x148) = uVar15;
  *(undefined8 *)(unaff_x20 + 0x150) = uVar18;
  func_0x000100d57448(uVar14,uVar15,uVar18);
  func_0x000100d57464(uVar16,uVar1,uVar23);
  func_0x000107c61428(param_1 + 0x158,auStack_500,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x158);
  uVar15 = *(undefined8 *)(param_1 + 0x160);
  uVar18 = *(undefined8 *)(param_1 + 0x168);
  func_0x000107c61428(unaff_x20 + 0x158,auStack_518,1,0);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x158);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x160);
  uVar23 = *(undefined8 *)(unaff_x20 + 0x168);
  *(undefined8 *)(unaff_x20 + 0x158) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x160) = uVar15;
  *(undefined8 *)(unaff_x20 + 0x168) = uVar18;
  func_0x000100d57448(uVar14,uVar15,uVar18);
  func_0x000100d57464(uVar16,uVar1,uVar23);
  func_0x000107c61428(param_1 + 0x170,auStack_530,0,0);
  uVar4 = *(undefined1 *)(param_1 + 0x170);
  func_0x000107c61428(unaff_x20 + 0x170,auStack_548,1,0);
  *(undefined1 *)(unaff_x20 + 0x170) = uVar4;
  func_0x000107c61428(param_1 + 0x178,auStack_560,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x178);
  uVar16 = *(undefined8 *)(param_1 + 0x180);
  func_0x000107c61428(unaff_x20 + 0x178,auStack_578,1,0);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x180);
  *(undefined8 *)(unaff_x20 + 0x178) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x180) = uVar16;
  func_0x000107c61434(uVar16);
  func_0x000107c6142c(uVar15);
  func_0x000107c61428(param_1 + 0x188,auStack_590,0,0);
  uVar4 = *(undefined1 *)(param_1 + 0x188);
  func_0x000107c61428(unaff_x20 + 0x188,auStack_5a8,1,0);
  *(undefined1 *)(unaff_x20 + 0x188) = uVar4;
  func_0x000107c61428(param_1 + 400,auStack_5c0,0,0);
  uVar14 = *(undefined8 *)(param_1 + 400);
  uVar16 = *(undefined8 *)(param_1 + 0x198);
  func_0x000107c61428(unaff_x20 + 400,auStack_5d8,1,0);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x198);
  *(undefined8 *)(unaff_x20 + 400) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x198) = uVar16;
  func_0x000107c61434(uVar16);
  func_0x000107c6142c(uVar15);
  func_0x000107c61428(param_1 + 0x1a0,auStack_5f0,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x1a0);
  uVar15 = *(undefined8 *)(param_1 + 0x1a8);
  uVar18 = *(undefined8 *)(param_1 + 0x1b0);
  func_0x000107c61428(unaff_x20 + 0x1a0,auStack_608,1,0);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x1a0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x1a8);
  uVar23 = *(undefined8 *)(unaff_x20 + 0x1b0);
  *(undefined8 *)(unaff_x20 + 0x1a0) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x1a8) = uVar15;
  *(undefined8 *)(unaff_x20 + 0x1b0) = uVar18;
  func_0x000101541464(uVar14,uVar15,uVar18);
  func_0x000101556278(uVar16,uVar1,uVar23);
  func_0x000107c61428(param_1 + 0x1b8,auStack_620,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x1b8);
  uVar18 = *(undefined8 *)(param_1 + 0x1c0);
  uVar16 = *(undefined8 *)(param_1 + 0x1c8);
  uVar23 = *(undefined8 *)(param_1 + 0x1d0);
  func_0x000107c61428(unaff_x20 + 0x1b8,auStack_638,1,0);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x1b8);
  uVar25 = *(undefined8 *)(unaff_x20 + 0x1c0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x1c8);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x1d0);
  *(undefined8 *)(unaff_x20 + 0x1b8) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x1c0) = uVar18;
  *(undefined8 *)(unaff_x20 + 0x1c8) = uVar16;
  *(undefined8 *)(unaff_x20 + 0x1d0) = uVar23;
  func_0x000101597350(uVar14,uVar18,uVar16,uVar23);
  func_0x000101597ae4(uVar15,uVar25,uVar1,uVar2);
  func_0x000107c61428(param_1 + 0x1d8,auStack_650,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x1d8);
  uVar15 = *(undefined8 *)(param_1 + 0x1e0);
  uVar18 = *(undefined8 *)(param_1 + 0x1e8);
  func_0x000107c61428(unaff_x20 + 0x1d8,auStack_668,1,0);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x1d8);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x1e0);
  uVar23 = *(undefined8 *)(unaff_x20 + 0x1e8);
  *(undefined8 *)(unaff_x20 + 0x1d8) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x1e0) = uVar15;
  *(undefined8 *)(unaff_x20 + 0x1e8) = uVar18;
  func_0x000101541464(uVar14,uVar15,uVar18);
  func_0x000101556278(uVar16,uVar1,uVar23);
  func_0x000107c61428(param_1 + 0x1f0,auStack_680,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x1f0);
  uVar4 = *(undefined1 *)(param_1 + 0x1f8);
  func_0x000107c61428(unaff_x20 + 0x1f0,auStack_698,1,0);
  *(undefined8 *)(unaff_x20 + 0x1f0) = uVar14;
  *(undefined1 *)(unaff_x20 + 0x1f8) = uVar4;
  func_0x000107c61428(param_1 + 0x1f9,auStack_6b0,0,0);
  uVar4 = *(undefined1 *)(param_1 + 0x1f9);
  func_0x000107c61428((undefined4 *)(unaff_x20 + 0x1f9),auStack_6c8,1,0);
  *(undefined1 *)(unaff_x20 + 0x1f9) = uVar4;
  func_0x000107c61428(param_1 + 0x1fa,auStack_6e0,0,0);
  uVar4 = *(undefined1 *)(param_1 + 0x1fa);
  func_0x000107c61428(unaff_x20 + 0x1fa,auStack_6f8,1,0);
  *(undefined1 *)(unaff_x20 + 0x1fa) = uVar4;
  func_0x000107c61428(param_1 + 0x1fb,auStack_710,0,0);
  uVar4 = *(undefined1 *)(param_1 + 0x1fb);
  func_0x000107c61428(unaff_x20 + 0x1fb,auStack_728,1,0);
  *(undefined1 *)(unaff_x20 + 0x1fb) = uVar4;
  func_0x000107c61428(param_1 + 0x1fc,auStack_740,0,0);
  uVar4 = *(undefined1 *)(param_1 + 0x1fc);
  func_0x000107c61428(unaff_x20 + 0x1fc,auStack_758,1,0);
  *(undefined1 *)(unaff_x20 + 0x1fc) = uVar4;
  func_0x000107c61428(param_1 + 0x200,auStack_770,0,0);
  uVar15 = *(undefined8 *)(param_1 + 0x200);
  uVar14 = *(undefined8 *)(param_1 + 0x208);
  func_0x000107c61428(unaff_x20 + 0x200,auStack_788,1,0);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x208);
  *(undefined8 *)(unaff_x20 + 0x200) = uVar15;
  *(undefined8 *)(unaff_x20 + 0x208) = uVar14;
  func_0x000107c61434(uVar14);
  func_0x000107c6142c(uVar16);
  func_0x000107c61428(param_1 + 0x210,auStack_7a0,0,0);
  uVar3 = *(undefined4 *)(param_1 + 0x210);
  func_0x000107c61428(unaff_x20 + 0x210,auStack_7b8,1,0);
  *(undefined4 *)(unaff_x20 + 0x210) = uVar3;
  func_0x000107c61428(param_1 + 0x214,auStack_7d0,0,0);
  uVar3 = *(undefined4 *)(param_1 + 0x214);
  func_0x000107c61428(unaff_x20 + 0x214,auStack_7e8,1,0);
  *(undefined4 *)(unaff_x20 + 0x214) = uVar3;
  func_0x000107c61428(param_1 + 0x218,auStack_800,0,0);
  uVar4 = *(undefined1 *)(param_1 + 0x218);
  func_0x000107c61428(unaff_x20 + 0x218,auStack_818,1,0);
  *(undefined1 *)(unaff_x20 + 0x218) = uVar4;
  func_0x000107c61428(param_1 + 0x219,auStack_830,0,0);
  uVar4 = *(undefined1 *)(param_1 + 0x219);
  func_0x000107c61428(unaff_x20 + 0x219,auStack_848,1,0);
  *(undefined1 *)(unaff_x20 + 0x219) = uVar4;
  func_0x000107c61428(param_1 + 0x21a,auStack_860,0,0);
  uVar4 = *(undefined1 *)(param_1 + 0x21a);
  func_0x000107c61428(unaff_x20 + 0x21a,auStack_878,1,0);
  *(undefined1 *)(unaff_x20 + 0x21a) = uVar4;
  func_0x000107c61428(param_1 + 0x21b,auStack_890,0,0);
  uVar4 = *(undefined1 *)(param_1 + 0x21b);
  func_0x000107c61428(unaff_x20 + 0x21b,auStack_8a8,1,0);
  *(undefined1 *)(unaff_x20 + 0x21b) = uVar4;
  func_0x000107c61428(param_1 + 0x220,auStack_8c0,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x220);
  uVar4 = *(undefined1 *)(param_1 + 0x228);
  func_0x000107c61428(unaff_x20 + 0x220,auStack_8d8,1,0);
  *(undefined8 *)(unaff_x20 + 0x220) = uVar14;
  *(undefined1 *)(unaff_x20 + 0x228) = uVar4;
  func_0x000107c61428(param_1 + 0x229,auStack_8f0,0,0);
  uVar4 = *(undefined1 *)(param_1 + 0x229);
  func_0x000107c61428(puVar5,auStack_908,1,0);
  *(undefined1 *)puVar5 = uVar4;
  func_0x000107c61428(param_1 + 0x22a,auStack_920,0,0);
  uVar4 = *(undefined1 *)(param_1 + 0x22a);
  func_0x000107c61428(unaff_x20 + 0x22a,auStack_938,1,0);
  *(undefined1 *)(unaff_x20 + 0x22a) = uVar4;
  func_0x000107c61428(param_1 + 0x22b,auStack_950,0,0);
  uVar4 = *(undefined1 *)(param_1 + 0x22b);
  func_0x000107c61428(unaff_x20 + 0x22b,auStack_968,1,0);
  *(undefined1 *)(unaff_x20 + 0x22b) = uVar4;
  func_0x000107c61428(param_1 + 0x22c,auStack_980,0,0);
  uVar4 = *(undefined1 *)(param_1 + 0x22c);
  func_0x000107c61428(unaff_x20 + 0x22c,auStack_998,1,0);
  *(undefined1 *)(unaff_x20 + 0x22c) = uVar4;
  return;
}


