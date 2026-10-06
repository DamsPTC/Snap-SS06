/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1035e431c; end: 1035e4443;  */

/* WARNING: Possible PIC construction at 0x0001035e4334: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035e435c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035e438c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035e43bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035e43ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035e4400: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035e4338) */
/* WARNING: Removing unreachable block (ram,0x0001035e4344) */
/* WARNING: Removing unreachable block (ram,0x0001035e434c) */
/* WARNING: Removing unreachable block (ram,0x0001035e4360) */
/* WARNING: Removing unreachable block (ram,0x0001035e4370) */
/* WARNING: Removing unreachable block (ram,0x0001035e4378) */
/* WARNING: Removing unreachable block (ram,0x0001035e4390) */
/* WARNING: Removing unreachable block (ram,0x0001035e43a0) */
/* WARNING: Removing unreachable block (ram,0x0001035e43a8) */
/* WARNING: Removing unreachable block (ram,0x0001035e43c0) */
/* WARNING: Removing unreachable block (ram,0x0001035e43d0) */
/* WARNING: Removing unreachable block (ram,0x0001035e43d8) */
/* WARNING: Removing unreachable block (ram,0x0001035e43f0) */
/* WARNING: Removing unreachable block (ram,0x0001035e4404) */
/* WARNING: Removing unreachable block (ram,0x0001035e4410) */
/* WARNING: Removing unreachable block (ram,0x0001035e4418) */
/* WARNING: Removing unreachable block (ram,0x0001035e4434) */
/* WARNING: Removing unreachable block (ram,0x0001035e4428) */
/* WARNING: Removing unreachable block (ram,0x0001035e43f8) */
/* WARNING: Removing unreachable block (ram,0x0001035e43e8) */
/* WARNING: Removing unreachable block (ram,0x0001035e43b8) */
/* WARNING: Removing unreachable block (ram,0x0001035e4388) */
/* WARNING: Removing unreachable block (ram,0x0001035e4358) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1035e431c(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x18) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x18) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 1035e4444; end: 1035e4e5b;  */

undefined8 * FUN_1035e4444(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  func_0x00010006c00c(uVar4,uVar5);
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  cVar1 = *(char *)(param_2 + 4);
  if (cVar1 == '\x02') {
    uVar4 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = uVar4;
    param_1[6] = param_2[6];
  }
  else {
    *(char *)(param_1 + 4) = cVar1;
    uVar4 = param_2[5];
    uVar5 = param_2[6];
    func_0x00010006c00c(uVar4,uVar5);
    param_1[5] = uVar4;
    param_1[6] = uVar5;
  }
  cVar1 = *(char *)(param_2 + 7);
  if (cVar1 == '\x02') {
    uVar4 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar4;
    param_1[9] = param_2[9];
  }
  else {
    *(char *)(param_1 + 7) = cVar1;
    uVar4 = param_2[8];
    uVar5 = param_2[9];
    func_0x00010006c00c(uVar4,uVar5);
    param_1[8] = uVar4;
    param_1[9] = uVar5;
  }
  uVar3 = param_2[0xc];
  if (uVar3 >> 0x3c < 0xf) {
    uVar4 = param_2[0xb];
    param_1[10] = param_2[10];
    func_0x00010006c00c(uVar4,uVar3);
    param_1[0xb] = uVar4;
    param_1[0xc] = uVar3;
  }
  else {
    uVar4 = param_2[10];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar4;
    param_1[0xc] = param_2[0xc];
  }
  uVar3 = param_2[0xf];
  if (uVar3 >> 0x3c < 0xf) {
    uVar4 = param_2[0xe];
    param_1[0xd] = param_2[0xd];
    func_0x00010006c00c(uVar4,uVar3);
    param_1[0xe] = uVar4;
    param_1[0xf] = uVar3;
  }
  else {
    uVar4 = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar4;
    param_1[0xf] = param_2[0xf];
  }
  uVar3 = param_2[0x12];
  if (uVar3 >> 0x3c < 0xf) {
    uVar4 = param_2[0x11];
    param_1[0x10] = param_2[0x10];
    func_0x00010006c00c(uVar4,uVar3);
    param_1[0x11] = uVar4;
    param_1[0x12] = uVar3;
  }
  else {
    uVar4 = param_2[0x10];
    param_1[0x11] = param_2[0x11];
    param_1[0x10] = uVar4;
    param_1[0x12] = param_2[0x12];
  }
  uVar3 = param_2[0x15];
  if (uVar3 >> 0x3c < 0xf) {
    uVar4 = param_2[0x14];
    param_1[0x13] = param_2[0x13];
    func_0x00010006c00c(uVar4,uVar3);
    param_1[0x14] = uVar4;
    param_1[0x15] = uVar3;
  }
  else {
    uVar4 = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar4;
    param_1[0x15] = param_2[0x15];
  }
  uVar3 = param_2[0x18];
  if (uVar3 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0x16);
    uVar4 = param_2[0x17];
    func_0x00010006c00c(uVar4,uVar3);
    param_1[0x17] = uVar4;
    param_1[0x18] = uVar3;
  }
  else {
    uVar4 = param_2[0x16];
    param_1[0x17] = param_2[0x17];
    param_1[0x16] = uVar4;
    param_1[0x18] = param_2[0x18];
  }
  uVar3 = param_2[0x1b];
  if (uVar3 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 0x19);
    uVar4 = param_2[0x1a];
    func_0x00010006c00c(uVar4,uVar3);
    param_1[0x1a] = uVar4;
    param_1[0x1b] = uVar3;
    lVar2 = param_2[0x1e];
  }
  else {
    uVar4 = param_2[0x19];
    param_1[0x1a] = param_2[0x1a];
    param_1[0x19] = uVar4;
    param_1[0x1b] = param_2[0x1b];
    lVar2 = param_2[0x1e];
  }
  if (lVar2 == 0) {
    uVar4 = param_2[0x1c];
    uVar6 = param_2[0x1f];
    uVar5 = param_2[0x1e];
    param_1[0x1d] = param_2[0x1d];
    param_1[0x1c] = uVar4;
    param_1[0x1f] = uVar6;
    param_1[0x1e] = uVar5;
    param_1[0x20] = param_2[0x20];
  }
  else {
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    param_1[0x1d] = param_2[0x1d];
    param_1[0x1e] = lVar2;
    uVar4 = param_2[0x1f];
    uVar5 = param_2[0x20];
    func_0x000107c61434();
    func_0x00010006c00c(uVar4,uVar5);
    param_1[0x1f] = uVar4;
    param_1[0x20] = uVar5;
  }
  if (*(char *)(param_2 + 0x21) == '\x02') {
    uVar4 = param_2[0x21];
    param_1[0x22] = param_2[0x22];
    param_1[0x21] = uVar4;
    param_1[0x23] = param_2[0x23];
  }
  else {
    *(char *)(param_1 + 0x21) = *(char *)(param_2 + 0x21);
    uVar4 = param_2[0x22];
    uVar5 = param_2[0x23];
    func_0x00010006c00c(uVar4,uVar5);
    param_1[0x22] = uVar4;
    param_1[0x23] = uVar5;
  }
  uVar3 = param_2[0x26];
  if (uVar3 >> 0x3c < 0xf) {
    uVar4 = param_2[0x25];
    param_1[0x24] = param_2[0x24];
    func_0x00010006c00c(uVar4,uVar3);
    param_1[0x25] = uVar4;
    param_1[0x26] = uVar3;
  }
  else {
    uVar4 = param_2[0x24];
    param_1[0x25] = param_2[0x25];
    param_1[0x24] = uVar4;
    param_1[0x26] = param_2[0x26];
  }
  return param_1;
}



/* Entry: 1035e4e5c; end: 1035e4e8b;  */

long FUN_1035e4e5c(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x10));
  func_0x00010006c090(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  return param_1;
}



/* Entry: 1035e4e8c; end: 1035e525f;  */

undefined8 * FUN_1035e4e8c(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  char *pcVar6;
  undefined8 uVar7;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  uVar7 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar7;
  func_0x00010006c090(uVar2,uVar3);
  pcVar6 = (char *)(param_1 + 4);
  if (*pcVar6 == '\x02') {
LAB_1035e4eec:
    uVar2 = param_2[4];
    param_1[5] = param_2[5];
    *(undefined8 *)pcVar6 = uVar2;
    param_1[6] = param_2[6];
  }
  else {
    if (*(byte *)(param_2 + 4) == 2) {
      func_0x0001015fd618(pcVar6);
      goto LAB_1035e4eec;
    }
    *(byte *)(param_1 + 4) = *(byte *)(param_2 + 4) & 1;
    uVar2 = param_1[5];
    uVar3 = param_1[6];
    uVar7 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar7;
    func_0x00010006c090(uVar2,uVar3);
  }
  pcVar6 = (char *)(param_1 + 7);
  if (*pcVar6 == '\x02') {
LAB_1035e4f3c:
    uVar2 = param_2[7];
    param_1[8] = param_2[8];
    *(undefined8 *)pcVar6 = uVar2;
    param_1[9] = param_2[9];
  }
  else {
    if (*(byte *)(param_2 + 7) == 2) {
      func_0x0001015fd618(pcVar6);
      goto LAB_1035e4f3c;
    }
    *(byte *)(param_1 + 7) = *(byte *)(param_2 + 7) & 1;
    uVar2 = param_1[8];
    uVar3 = param_1[9];
    uVar7 = param_2[8];
    param_1[9] = param_2[9];
    param_1[8] = uVar7;
    func_0x00010006c090(uVar2,uVar3);
  }
  if ((ulong)param_1[0xc] >> 0x3c < 0xf) {
    uVar4 = param_2[0xc];
    if (0xe < uVar4 >> 0x3c) {
      func_0x00010159d670(param_1 + 10);
      goto LAB_1035e4f90;
    }
    uVar2 = param_1[0xb];
    uVar3 = param_2[10];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar3;
    param_1[0xc] = uVar4;
    func_0x00010006c090(uVar2);
  }
  else {
LAB_1035e4f90:
    uVar2 = param_2[10];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar2;
    param_1[0xc] = param_2[0xc];
  }
  if ((ulong)param_1[0xf] >> 0x3c < 0xf) {
    uVar4 = param_2[0xf];
    if (0xe < uVar4 >> 0x3c) {
      func_0x00010159d670(param_1 + 0xd);
      goto LAB_1035e4fe0;
    }
    uVar2 = param_1[0xe];
    uVar3 = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar3;
    param_1[0xf] = uVar4;
    func_0x00010006c090(uVar2);
  }
  else {
LAB_1035e4fe0:
    uVar2 = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar2;
    param_1[0xf] = param_2[0xf];
  }
  if ((ulong)param_1[0x12] >> 0x3c < 0xf) {
    uVar4 = param_2[0x12];
    if (0xe < uVar4 >> 0x3c) {
      func_0x00010159d670(param_1 + 0x10);
      goto LAB_1035e5030;
    }
    uVar2 = param_1[0x11];
    uVar3 = param_2[0x10];
    param_1[0x11] = param_2[0x11];
    param_1[0x10] = uVar3;
    param_1[0x12] = uVar4;
    func_0x00010006c090(uVar2);
  }
  else {
LAB_1035e5030:
    uVar2 = param_2[0x10];
    param_1[0x11] = param_2[0x11];
    param_1[0x10] = uVar2;
    param_1[0x12] = param_2[0x12];
  }
  if ((ulong)param_1[0x15] >> 0x3c < 0xf) {
    uVar4 = param_2[0x15];
    if (0xe < uVar4 >> 0x3c) {
      func_0x00010159d670(param_1 + 0x13);
      goto LAB_1035e5080;
    }
    uVar2 = param_1[0x14];
    uVar3 = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar3;
    param_1[0x15] = uVar4;
    func_0x00010006c090(uVar2);
  }
  else {
LAB_1035e5080:
    uVar2 = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar2;
    param_1[0x15] = param_2[0x15];
  }
  if ((ulong)param_1[0x18] >> 0x3c < 0xf) {
    uVar4 = param_2[0x18];
    if (0xe < uVar4 >> 0x3c) {
      FUN_1035249f0(param_1 + 0x16);
      goto LAB_1035e50d0;
    }
    *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0x16);
    uVar2 = param_1[0x17];
    param_1[0x17] = param_2[0x17];
    param_1[0x18] = uVar4;
    func_0x00010006c090(uVar2);
  }
  else {
LAB_1035e50d0:
    uVar2 = param_2[0x16];
    param_1[0x17] = param_2[0x17];
    param_1[0x16] = uVar2;
    param_1[0x18] = param_2[0x18];
  }
  if ((ulong)param_1[0x1b] >> 0x3c < 0xf) {
    uVar4 = param_2[0x1b];
    if (0xe < uVar4 >> 0x3c) {
      FUN_1035249f0(param_1 + 0x19);
      goto LAB_1035e5124;
    }
    *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 0x19);
    uVar2 = param_1[0x1a];
    param_1[0x1a] = param_2[0x1a];
    param_1[0x1b] = uVar4;
    func_0x00010006c090(uVar2);
    if (param_1[0x1e] != 0) goto LAB_1035e5160;
LAB_1035e5198:
    uVar2 = param_2[0x1c];
    uVar7 = param_2[0x1f];
    uVar3 = param_2[0x1e];
    param_1[0x1d] = param_2[0x1d];
    param_1[0x1c] = uVar2;
    param_1[0x1f] = uVar7;
    param_1[0x1e] = uVar3;
    param_1[0x20] = param_2[0x20];
  }
  else {
LAB_1035e5124:
    uVar2 = param_2[0x19];
    param_1[0x1a] = param_2[0x1a];
    param_1[0x19] = uVar2;
    param_1[0x1b] = param_2[0x1b];
    if (param_1[0x1e] == 0) goto LAB_1035e5198;
LAB_1035e5160:
    lVar5 = param_2[0x1e];
    if (lVar5 == 0) {
      FUN_1035e4e5c(param_1 + 0x1c);
      goto LAB_1035e5198;
    }
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    param_1[0x1d] = param_2[0x1d];
    param_1[0x1e] = lVar5;
    func_0x000107c6142c();
    uVar2 = param_1[0x1f];
    uVar3 = param_1[0x20];
    uVar7 = param_2[0x1f];
    param_1[0x20] = param_2[0x20];
    param_1[0x1f] = uVar7;
    func_0x00010006c090(uVar2,uVar3);
  }
  if (*(char *)(param_1 + 0x21) != '\x02') {
    bVar1 = *(byte *)(param_2 + 0x21);
    if (bVar1 != 2) {
      *(byte *)(param_1 + 0x21) = bVar1 & 1;
      uVar2 = param_1[0x22];
      uVar3 = param_1[0x23];
      uVar7 = param_2[0x22];
      param_1[0x23] = param_2[0x23];
      param_1[0x22] = uVar7;
      func_0x00010006c090(uVar2,uVar3);
      goto LAB_1035e51fc;
    }
    func_0x0001015fd618(param_1 + 0x21);
  }
  uVar2 = param_2[0x21];
  param_1[0x22] = param_2[0x22];
  param_1[0x21] = uVar2;
  param_1[0x23] = param_2[0x23];
LAB_1035e51fc:
  if ((ulong)param_1[0x26] >> 0x3c < 0xf) {
    uVar4 = param_2[0x26];
    if (uVar4 >> 0x3c < 0xf) {
      uVar2 = param_1[0x25];
      uVar3 = param_2[0x24];
      param_1[0x25] = param_2[0x25];
      param_1[0x24] = uVar3;
      param_1[0x26] = uVar4;
      func_0x00010006c090(uVar2);
      return param_1;
    }
    func_0x00010159d670(param_1 + 0x24);
  }
  uVar2 = param_2[0x24];
  param_1[0x25] = param_2[0x25];
  param_1[0x24] = uVar2;
  param_1[0x26] = param_2[0x26];
  return param_1;
}



/* Entry: 1035e5260; end: 1035e540f;  */

int FUN_1035e5260(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x4e] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 0x3c);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1035e5410; end: 1035e5437;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1035e5410(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x10));
  uVar1 = *(ulong *)(param_1 + 0x18);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x20) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x20) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 1035e5438; end: 1035e54f7;  */

undefined4 * FUN_1035e5438(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 6);
  uVar2 = *(undefined8 *)(param_2 + 8);
  func_0x000107c61434();
  func_0x00010006c00c(uVar1,uVar2);
  *(undefined8 *)(param_1 + 6) = uVar1;
  *(undefined8 *)(param_1 + 8) = uVar2;
  return param_1;
}



/* Entry: 1035e54f8; end: 1035e5543;  */

undefined4 * FUN_1035e54f8(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 4);
  uVar2 = *(undefined8 *)(param_1 + 4);
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 6);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 6) = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 1035e5544; end: 1035e55e3;  */

int FUN_1035e5544(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1035e55e4; end: 1035e5663;  */

void FUN_1035e55e4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7cda8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbe43dc;
  func_0x000107c61520(&DAT_10dbe43dc,&UNK_11066b0f8);
  puRam0000000112f7cda8 = puVar1;
  return;
}



/* Entry: 1035e5664; end: 1035e567f;  */

long FUN_1035e5664(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1035e5680; end: 1035e56af;  */

void FUN_1035e5680(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  FUN_1035e58e0();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 1035e56b0; end: 1035e56b7;  */

undefined8 FUN_1035e56b0(void)

{
  undefined8 *unaff_x20;
  
  return *unaff_x20;
}



/* Entry: 1035e56b8; end: 1035e572b;  */

void FUN_1035e56b8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f7cee8;
  func_0x0001000285a8(0x112f7cee8,&UNK_10dbe4760);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 1035e572c; end: 1035e5737;  */

void FUN_1035e572c(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1035e5738; end: 1035e57e3;  */

void FUN_1035e5738(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1035e57e4; end: 1035e57f7;  */

bool FUN_1035e57e4(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1035e57f8; end: 1035e583f;  */

void FUN_1035e57f8(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbe48d0,0x1fa,2);
  uRam0000000113809438 = uStack_38;
  uRam0000000113809430 = uStack_40;
  uRam0000000113809448 = uStack_28;
  uRam0000000113809440 = uStack_30;
  uRam0000000113809458 = uStack_18;
  uRam0000000113809450 = uStack_20;
  return;
}



/* Entry: 1035e5840; end: 1035e58df;  */

/* WARNING: Possible PIC construction at 0x0001035e588c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035e589c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035e5890) */
/* WARNING: Removing unreachable block (ram,0x0001035e58a0) */

void FUN_1035e5840(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7cef0 != -1) {
    func_0x000107c61568(0x112f7cef0,FUN_1035e57f8);
  }
  uVar5 = uRam0000000113809458;
  uVar4 = uRam0000000113809450;
  uVar3 = uRam0000000113809448;
  uVar2 = uRam0000000113809440;
  uVar1 = uRam0000000113809438;
  *param_1 = uRam0000000113809430;
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



/* Entry: 1035e58e0; end: 1035e58eb;  */

void FUN_1035e58e0(void)

{
  return;
}



/* Entry: 1035e58ec; end: 1035e5917;  */

void FUN_1035e58ec(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035e5918();
  *(long *)(param_1 + 8) = lVar1;
  func_0x0001035e5958();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1035e5918; end: 1035e5997;  */

void FUN_1035e5918(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7cef8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe4800;
  func_0x000107c61520(&UNK_10dbe4800,&UNK_11066b2b8);
  puRam0000000112f7cef8 = puVar1;
  return;
}



/* Entry: 1035e5998; end: 1035e599b;  */

void FUN_1035e5998(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f7cf08 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f7cf10;
  func_0x00010002969c(0x112f7cf10,&UNK_10dbe4788);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112f7cf08 = puVar2;
  return;
}



/* Entry: 1035e599c; end: 1035e59eb;  */

void FUN_1035e599c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f7cf08 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f7cf10;
  func_0x00010002969c(0x112f7cf10,&UNK_10dbe4788);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112f7cf08 = puVar2;
  return;
}



/* Entry: 1035e59ec; end: 1035e59ef;  */

void FUN_1035e59ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7cf18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe4840;
  func_0x000107c61520(&UNK_10dbe4840,&UNK_11066b2b8);
  puRam0000000112f7cf18 = puVar1;
  return;
}



/* Entry: 1035e59f0; end: 1035e5a2f;  */

void FUN_1035e59f0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7cf18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe4840;
  func_0x000107c61520(&UNK_10dbe4840,&UNK_11066b2b8);
  puRam0000000112f7cf18 = puVar1;
  return;
}



/* Entry: 1035e5a30; end: 1035e5ae3;  */

int FUN_1035e5a30(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 1035e5ae4; end: 1035e5b13;  */

void FUN_1035e5ae4(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  FUN_1035e5d44();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 1035e5b14; end: 1035e5b1b;  */

undefined8 FUN_1035e5b14(void)

{
  undefined8 *unaff_x20;
  
  return *unaff_x20;
}



/* Entry: 1035e5b1c; end: 1035e5b8f;  */

void FUN_1035e5b1c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f7cfb8;
  func_0x0001000285a8(0x112f7cfb8,&UNK_10dbe4ad0);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 1035e5b90; end: 1035e5b9b;  */

void FUN_1035e5b90(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1035e5b9c; end: 1035e5c47;  */

void FUN_1035e5b9c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1035e5c48; end: 1035e5c5b;  */

bool FUN_1035e5c48(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1035e5c5c; end: 1035e5ca3;  */

void FUN_1035e5c5c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbe4c40,0xa0,2);
  uRam0000000113809468 = uStack_38;
  uRam0000000113809460 = uStack_40;
  uRam0000000113809478 = uStack_28;
  uRam0000000113809470 = uStack_30;
  uRam0000000113809488 = uStack_18;
  uRam0000000113809480 = uStack_20;
  return;
}



/* Entry: 1035e5ca4; end: 1035e5d43;  */

/* WARNING: Possible PIC construction at 0x0001035e5cf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035e5d00: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035e5cf4) */
/* WARNING: Removing unreachable block (ram,0x0001035e5d04) */

void FUN_1035e5ca4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7cfc0 != -1) {
    func_0x000107c61568(0x112f7cfc0,FUN_1035e5c5c);
  }
  uVar5 = uRam0000000113809488;
  uVar4 = uRam0000000113809480;
  uVar3 = uRam0000000113809478;
  uVar2 = uRam0000000113809470;
  uVar1 = uRam0000000113809468;
  *param_1 = uRam0000000113809460;
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



/* Entry: 1035e5d44; end: 1035e5d4f;  */

void FUN_1035e5d44(void)

{
  return;
}



/* Entry: 1035e5d50; end: 1035e5d7b;  */

void FUN_1035e5d50(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035e5d7c();
  *(long *)(param_1 + 8) = lVar1;
  func_0x0001035e5dbc();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1035e5d7c; end: 1035e5dfb;  */

void FUN_1035e5d7c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7cfc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe4b70;
  func_0x000107c61520(&UNK_10dbe4b70,&UNK_11066b448);
  puRam0000000112f7cfc8 = puVar1;
  return;
}



/* Entry: 1035e5dfc; end: 1035e5dff;  */

void FUN_1035e5dfc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f7cfd8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f7cfe0;
  func_0x00010002969c(0x112f7cfe0,&UNK_10dbe4af8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112f7cfd8 = puVar2;
  return;
}



/* Entry: 1035e5e00; end: 1035e5e4f;  */

void FUN_1035e5e00(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f7cfd8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f7cfe0;
  func_0x00010002969c(0x112f7cfe0,&UNK_10dbe4af8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112f7cfd8 = puVar2;
  return;
}



/* Entry: 1035e5e50; end: 1035e5e53;  */

void FUN_1035e5e50(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7cfe8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe4bb0;
  func_0x000107c61520(&UNK_10dbe4bb0,&UNK_11066b448);
  puRam0000000112f7cfe8 = puVar1;
  return;
}



/* Entry: 1035e5e54; end: 1035e5e93;  */

void FUN_1035e5e54(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7cfe8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe4bb0;
  func_0x000107c61520(&UNK_10dbe4bb0,&UNK_11066b448);
  puRam0000000112f7cfe8 = puVar1;
  return;
}



/* Entry: 1035e5e94; end: 1035e5f63;  */

int FUN_1035e5e94(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 1035e5f64; end: 1035e5fa3;  */

void FUN_1035e5f64(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f7d048;
  func_0x0001000285a8(0x112f7d048,&UNK_10dbe4d00);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 1035e5fa4; end: 1035e5fcb;  */

void FUN_1035e5fa4(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = uVar1 < 3;
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}



/* Entry: 1035e5fcc; end: 1035e6077;  */

void FUN_1035e5fcc(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1035e6078; end: 1035e6103;  */

bool FUN_1035e6078(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1035e6104; end: 1035e614b;  */

void FUN_1035e6104(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbe50d0,0x5e,2);
  uRam0000000113809498 = uStack_38;
  uRam0000000113809490 = uStack_40;
  uRam00000001138094a8 = uStack_28;
  uRam00000001138094a0 = uStack_30;
  uRam00000001138094b8 = uStack_18;
  uRam00000001138094b0 = uStack_20;
  return;
}



/* Entry: 1035e614c; end: 1035e61eb;  */

/* WARNING: Possible PIC construction at 0x0001035e6198: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035e61a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035e619c) */
/* WARNING: Removing unreachable block (ram,0x0001035e61ac) */

void FUN_1035e614c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7d050 != -1) {
    func_0x000107c61568(0x112f7d050,FUN_1035e6104);
  }
  uVar5 = uRam00000001138094b8;
  uVar4 = uRam00000001138094b0;
  uVar3 = uRam00000001138094a8;
  uVar2 = uRam00000001138094a0;
  uVar1 = uRam0000000113809498;
  *param_1 = uRam0000000113809490;
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



/* Entry: 1035e61ec; end: 1035e6233;  */

void FUN_1035e61ec(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbe4f90,0x134,2);
  uRam00000001138094c8 = uStack_38;
  uRam00000001138094c0 = uStack_40;
  uRam00000001138094d8 = uStack_28;
  uRam00000001138094d0 = uStack_30;
  uRam00000001138094e8 = uStack_18;
  uRam00000001138094e0 = uStack_20;
  return;
}



/* Entry: 1035e6234; end: 1035e645f;  */

/* WARNING: Removing unreachable block (ram,0x0001035e645c) */

void FUN_1035e6234(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  uVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      switch(uVar1) {
      case 1:
        pcVar3 = *(code **)(param_3 + 0x198);
        func_0x0001015fdfec();
        break;
      case 2:
        pcVar3 = *(code **)(param_3 + 0x198);
        func_0x0001015fdfec();
        break;
      case 3:
        pcVar3 = *(code **)(param_3 + 0x198);
        func_0x0001015fdfec();
        break;
      case 4:
        pcVar3 = *(code **)(param_3 + 0x1a0);
        func_0x0001015c5cfc();
        break;
      case 5:
        pcVar3 = *(code **)(param_3 + 0x198);
        func_0x0001015fdfec();
        break;
      case 6:
        pcVar3 = *(code **)(param_3 + 0x198);
        func_0x0001015fdfec();
        break;
      case 7:
        pcVar3 = *(code **)(param_3 + 0x198);
        func_0x000101568c04();
        break;
      case 8:
        pcVar3 = *(code **)(param_3 + 0x198);
        func_0x0001015fdfec();
        break;
      case 9:
        pcVar3 = *(code **)(param_3 + 0x1a0);
        func_0x0001015c5cfc();
        break;
      case 10:
        pcVar3 = *(code **)(param_3 + 0x180);
        FUN_1035e715c();
        break;
      case 0xb:
        pcVar3 = *(code **)(param_3 + 0x198);
        func_0x0001015fdfec();
        break;
      case 0xc:
        pcVar3 = *(code **)(param_3 + 0x198);
        func_0x0001015fdfec();
        break;
      case 0xd:
        pcVar3 = *(code **)(param_3 + 0x198);
        func_0x0001015fdfec();
        break;
      case 0xe:
        pcVar3 = *(code **)(param_3 + 0x1a0);
        func_0x0001015c5cfc();
        break;
      case 0xf:
        pcVar3 = *(code **)(param_3 + 0x198);
        func_0x0001015d5420();
        break;
      default:
        goto LAB_1035e644c;
      }
      (*pcVar3)();
LAB_1035e644c:
      uVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 1035e6460; end: 1035e66df;  */

/* WARNING: Removing unreachable block (ram,0x0001035e6664) */

void FUN_1035e6460(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long *unaff_x20;
  long unaff_x21;
  long lVar2;
  long *plVar3;
  code *pcVar4;
  long lStack_60;
  undefined1 uStack_58;
  
  FUN_1035e66e0();
  if (unaff_x21 == 0) {
    FUN_1035e6768();
    plVar1 = unaff_x20;
    FUN_1035e67f0();
    lVar2 = *unaff_x20;
    if (*(long *)(lVar2 + 0x10) != 0) {
      pcVar4 = *(code **)(param_3 + 0x118);
      func_0x0001015c5cfc();
      (*pcVar4)(lVar2,4,&UNK_110790a00,plVar1,param_2,param_3);
    }
    FUN_1035e6878();
    FUN_1035e6900();
    FUN_1035e6988();
    plVar1 = unaff_x20;
    FUN_1035e6a0c();
    plVar3 = (long *)unaff_x20[1];
    if (plVar3[2] != 0) {
      pcVar4 = *(code **)(param_3 + 0x118);
      func_0x0001015c5cfc();
      (*pcVar4)(plVar3,9,&UNK_110790a00,plVar1,param_2,param_3);
      plVar1 = plVar3;
    }
    if (unaff_x20[2] != 0) {
      uStack_58 = (undefined1)unaff_x20[3];
      pcVar4 = *(code **)(param_3 + 0x80);
      lStack_60 = unaff_x20[2];
      FUN_1035e715c();
      (*pcVar4)(&lStack_60,10,&UNK_11066b668,plVar1,param_2,param_3);
    }
    FUN_1035e6a94();
    FUN_1035e6b1c();
    plVar1 = unaff_x20;
    FUN_1035e6ba8();
    lVar2 = unaff_x20[4];
    if (*(long *)(lVar2 + 0x10) != 0) {
      pcVar4 = *(code **)(param_3 + 0x118);
      func_0x0001015c5cfc();
      (*pcVar4)(lVar2,0xe,&UNK_110790a00,plVar1,param_2,param_3);
    }
    FUN_1035e6c30();
    func_0x000100076224(param_1,unaff_x20[5],unaff_x20[6],param_2,param_3);
  }
  return;
}



/* Entry: 1035e66e0; end: 1035e6767;  */

void FUN_1035e66e0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = *(ulong *)(param_1 + 0x38);
  if ((uStack_58 & 0xff) != 2) {
    uStack_48 = *(undefined8 *)(param_1 + 0x48);
    uStack_50 = *(undefined8 *)(param_1 + 0x40);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar1)(&uStack_58,1,&UNK_110790c00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035e6768; end: 1035e67ef;  */

void FUN_1035e6768(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = *(ulong *)(param_1 + 0x50);
  if ((uStack_58 & 0xff) != 2) {
    uStack_48 = *(undefined8 *)(param_1 + 0x60);
    uStack_50 = *(undefined8 *)(param_1 + 0x58);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar1)(&uStack_58,2,&UNK_110790c00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035e67f0; end: 1035e6877;  */

void FUN_1035e67f0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = *(ulong *)(param_1 + 0x68);
  if ((uStack_58 & 0xff) != 2) {
    uStack_48 = *(undefined8 *)(param_1 + 0x78);
    uStack_50 = *(undefined8 *)(param_1 + 0x70);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar1)(&uStack_58,3,&UNK_110790c00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035e6878; end: 1035e68ff;  */

void FUN_1035e6878(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = *(ulong *)(param_1 + 0x80);
  if ((uStack_58 & 0xff) != 2) {
    uStack_48 = *(undefined8 *)(param_1 + 0x90);
    uStack_50 = *(undefined8 *)(param_1 + 0x88);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar1)(&uStack_58,5,&UNK_110790c00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035e6900; end: 1035e6987;  */

void FUN_1035e6900(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = *(ulong *)(param_1 + 0x98);
  if ((uStack_58 & 0xff) != 2) {
    uStack_48 = *(undefined8 *)(param_1 + 0xa8);
    uStack_50 = *(undefined8 *)(param_1 + 0xa0);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar1)(&uStack_58,6,&UNK_110790c00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035e6988; end: 1035e6a0b;  */

void FUN_1035e6988(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_58 = *(long *)(param_1 + 0xb8);
  if (lStack_58 != 0) {
    uStack_60 = *(undefined8 *)(param_1 + 0xb0);
    uStack_48 = *(undefined8 *)(param_1 + 200);
    uStack_50 = *(undefined8 *)(param_1 + 0xc0);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000101568c04();
    (*pcVar1)(&uStack_60,7,&UNK_110790c80,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035e6a0c; end: 1035e6a93;  */

void FUN_1035e6a0c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = *(ulong *)(param_1 + 0xd0);
  if ((uStack_58 & 0xff) != 2) {
    uStack_48 = *(undefined8 *)(param_1 + 0xe0);
    uStack_50 = *(undefined8 *)(param_1 + 0xd8);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar1)(&uStack_58,8,&UNK_110790c00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035e6a94; end: 1035e6b1b;  */

void FUN_1035e6a94(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = *(ulong *)(param_1 + 0xe8);
  if ((uStack_58 & 0xff) != 2) {
    uStack_48 = *(undefined8 *)(param_1 + 0xf8);
    uStack_50 = *(undefined8 *)(param_1 + 0xf0);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar1)(&uStack_58,0xb,&UNK_110790c00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035e6b1c; end: 1035e6ba7;  */

void FUN_1035e6b1c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = *(ulong *)(param_1 + 0x100);
  if ((uStack_58 & 0xff) != 2) {
    uStack_48 = *(undefined8 *)(param_1 + 0x110);
    uStack_50 = *(undefined8 *)(param_1 + 0x108);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar1)(&uStack_58,0xc,&UNK_110790c00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035e6ba8; end: 1035e6c2f;  */

void FUN_1035e6ba8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = *(ulong *)(param_1 + 0x118);
  if ((uStack_58 & 0xff) != 2) {
    uStack_48 = *(undefined8 *)(param_1 + 0x128);
    uStack_50 = *(undefined8 *)(param_1 + 0x120);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar1)(&uStack_58,0xd,&UNK_110790c00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035e6c30; end: 1035e6cb7;  */

void FUN_1035e6c30(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x140);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x138);
    uStack_60 = *(undefined8 *)(param_1 + 0x130);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015d5420();
    (*pcVar1)(&uStack_60,0xf,&UNK_110790b00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035e6cb8; end: 1035e6d57;  */

uint FUN_1035e6cb8(ulong *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auStack_348 [24];
  ulong uStack_330;
  ulong uStack_328;
  ulong uStack_320;
  ulong uStack_310;
  ulong uStack_308;
  ulong uStack_300;
  ulong uStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  ulong uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  
  uVar7 = param_1[8];
  uVar8 = param_1[7];
  uVar5 = param_1[9];
  uVar10 = param_2[8];
  uVar9 = param_2[7];
  uVar6 = param_2[9];
  uStack_b0 = uVar9;
  uStack_a8 = uVar10;
  uStack_a0 = uVar6;
  uStack_90 = uVar8;
  uStack_88 = uVar7;
  uStack_80 = uVar5;
  if ((uVar8 & 0xff) == 2) {
    if ((uVar9 & 0xff) != 2) {
LAB_1035e7570:
      func_0x0001035e7114(&uStack_90,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
      puVar3 = &uStack_b0;
      uVar11 = uVar5;
      uVar12 = uVar7;
      uVar2 = uVar8;
      uVar5 = uVar6;
      uVar7 = uVar10;
      uVar8 = uVar9;
LAB_1035e76d4:
      puVar4 = &uStack_1d0;
LAB_1035e76d8:
      func_0x0001035e7114(puVar3,puVar4,0x112db94f0,&UNK_10d96af00);
      func_0x000101556278(uVar2,uVar12,uVar11);
      goto LAB_1035e77cc;
    }
    func_0x0001035e7114(&uStack_90,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
    func_0x0001035e7114(&uStack_b0,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
LAB_1035e7248:
    func_0x000101556278(uVar8,uVar7,uVar5);
    uVar7 = param_1[0xb];
    uVar8 = param_1[10];
    uVar5 = param_1[0xc];
    uVar10 = param_2[0xb];
    uVar9 = param_2[10];
    uVar6 = param_2[0xc];
    uStack_f0 = uVar9;
    uStack_e8 = uVar10;
    uStack_e0 = uVar6;
    uStack_d0 = uVar8;
    uStack_c8 = uVar7;
    uStack_c0 = uVar5;
    if ((uVar8 & 0xff) == 2) {
      if ((uVar9 & 0xff) != 2) {
LAB_1035e75d8:
        func_0x0001035e7114(&uStack_d0,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
        puVar3 = &uStack_f0;
        uVar11 = uVar5;
        uVar12 = uVar7;
        uVar2 = uVar8;
        uVar5 = uVar6;
        uVar7 = uVar10;
        uVar8 = uVar9;
        goto LAB_1035e76d4;
      }
      func_0x0001035e7114(&uStack_d0,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
      func_0x0001035e7114(&uStack_f0,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
    }
    else {
      if ((uVar9 & 0xff) == 2) goto LAB_1035e75d8;
      if ((((uint)uVar9 ^ (uint)uVar8) & 1) != 0) {
        func_0x0001035e7114(&uStack_d0,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
        puVar3 = &uStack_f0;
        goto LAB_1035e77a0;
      }
      func_0x0001035e7114(&uStack_d0,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
      func_0x0001035e7114(&uStack_f0,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
      uVar11 = uVar7;
      func_0x000100e25fcc(uVar7,uVar5,uVar10,uVar6);
      func_0x000101556278(uVar9,uVar10,uVar6);
      if ((uVar11 & 1) == 0) goto LAB_1035e77cc;
    }
    func_0x000101556278(uVar8,uVar7,uVar5);
    uVar7 = param_1[0xe];
    uVar8 = param_1[0xd];
    uVar5 = param_1[0xf];
    uVar10 = param_2[0xe];
    uVar9 = param_2[0xd];
    uVar6 = param_2[0xf];
    uStack_130 = uVar9;
    uStack_128 = uVar10;
    uStack_120 = uVar6;
    uStack_110 = uVar8;
    uStack_108 = uVar7;
    uStack_100 = uVar5;
    if ((uVar8 & 0xff) == 2) {
      if ((uVar9 & 0xff) != 2) {
LAB_1035e76ac:
        func_0x0001035e7114(&uStack_110,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
        puVar3 = &uStack_130;
        uVar11 = uVar5;
        uVar12 = uVar7;
        uVar2 = uVar8;
        uVar5 = uVar6;
        uVar7 = uVar10;
        uVar8 = uVar9;
        goto LAB_1035e76d4;
      }
      func_0x0001035e7114(&uStack_110,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
      func_0x0001035e7114(&uStack_130,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
    }
    else {
      if ((uVar9 & 0xff) == 2) goto LAB_1035e76ac;
      if ((((uint)uVar9 ^ (uint)uVar8) & 1) != 0) {
        func_0x0001035e7114(&uStack_110,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
        puVar3 = &uStack_130;
        goto LAB_1035e77a0;
      }
      func_0x0001035e7114(&uStack_110,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
      func_0x0001035e7114(&uStack_130,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
      uVar11 = uVar7;
      func_0x000100e25fcc(uVar7,uVar5,uVar10,uVar6);
      func_0x000101556278(uVar9,uVar10,uVar6);
      if ((uVar11 & 1) == 0) goto LAB_1035e77cc;
    }
    func_0x000101556278(uVar8,uVar7,uVar5);
    uVar5 = *param_1;
    FUN_10359f120(uVar5,*param_2);
    if ((uVar5 & 1) == 0) goto LAB_1035e77d0;
    uVar7 = param_1[0x11];
    uVar8 = param_1[0x10];
    uVar5 = param_1[0x12];
    uVar10 = param_2[0x11];
    uVar9 = param_2[0x10];
    uVar6 = param_2[0x12];
    uStack_170 = uVar9;
    uStack_168 = uVar10;
    uStack_160 = uVar6;
    uStack_150 = uVar8;
    uStack_148 = uVar7;
    uStack_140 = uVar5;
    if ((uVar8 & 0xff) == 2) {
      if ((uVar9 & 0xff) != 2) {
LAB_1035e786c:
        func_0x0001035e7114(&uStack_150,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
        puVar3 = &uStack_170;
        uVar11 = uVar5;
        uVar12 = uVar7;
        uVar2 = uVar8;
        uVar5 = uVar6;
        uVar7 = uVar10;
        uVar8 = uVar9;
        goto LAB_1035e76d4;
      }
      func_0x0001035e7114(&uStack_150,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
      func_0x0001035e7114(&uStack_170,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
    }
    else {
      if ((uVar9 & 0xff) == 2) goto LAB_1035e786c;
      if ((((uint)uVar9 ^ (uint)uVar8) & 1) != 0) {
        func_0x0001035e7114(&uStack_150,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
        puVar3 = &uStack_170;
        goto LAB_1035e77a0;
      }
      func_0x0001035e7114(&uStack_150,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
      func_0x0001035e7114(&uStack_170,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
      uVar11 = uVar7;
      func_0x000100e25fcc(uVar7,uVar5,uVar10,uVar6);
      func_0x000101556278(uVar9,uVar10,uVar6);
      if ((uVar11 & 1) == 0) goto LAB_1035e77cc;
    }
    func_0x000101556278(uVar8,uVar7,uVar5);
    uVar7 = param_1[0x14];
    uVar8 = param_1[0x13];
    uVar5 = param_1[0x15];
    uVar10 = param_2[0x14];
    uVar9 = param_2[0x13];
    uVar6 = param_2[0x15];
    uStack_1b0 = uVar9;
    uStack_1a8 = uVar10;
    uStack_1a0 = uVar6;
    uStack_190 = uVar8;
    uStack_188 = uVar7;
    uStack_180 = uVar5;
    if ((uVar8 & 0xff) == 2) {
      if ((uVar9 & 0xff) != 2) {
LAB_1035e78d4:
        func_0x0001035e7114(&uStack_190,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
        puVar3 = &uStack_1b0;
        uVar11 = uVar5;
        uVar12 = uVar7;
        uVar2 = uVar8;
        uVar5 = uVar6;
        uVar7 = uVar10;
        uVar8 = uVar9;
        goto LAB_1035e76d4;
      }
      func_0x0001035e7114(&uStack_190,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
      func_0x0001035e7114(&uStack_1b0,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
    }
    else {
      if ((uVar9 & 0xff) == 2) goto LAB_1035e78d4;
      if ((((uint)uVar9 ^ (uint)uVar8) & 1) != 0) {
        func_0x0001035e7114(&uStack_190,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
        puVar3 = &uStack_1b0;
        goto LAB_1035e77a0;
      }
      func_0x0001035e7114(&uStack_190,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
      func_0x0001035e7114(&uStack_1b0,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
      uVar11 = uVar7;
      func_0x000100e25fcc(uVar7,uVar5,uVar10,uVar6);
      func_0x000101556278(uVar9,uVar10,uVar6);
      if ((uVar11 & 1) == 0) goto LAB_1035e77cc;
    }
    func_0x000101556278(uVar8,uVar7,uVar5);
    uVar7 = param_1[0x17];
    uVar5 = param_1[0x16];
    uVar6 = param_1[0x19];
    uVar8 = param_1[0x18];
    uVar9 = param_2[0x17];
    uVar10 = param_2[0x16];
    uVar12 = param_2[0x19];
    uVar11 = param_2[0x18];
    uStack_1f0 = uVar10;
    uStack_1e8 = uVar9;
    uStack_1e0 = uVar11;
    uStack_1d8 = uVar12;
    uStack_1d0 = uVar5;
    uStack_1c8 = uVar7;
    uStack_1c0 = uVar8;
    uStack_1b8 = uVar6;
    if (uVar7 == 0) {
      if (uVar9 != 0) {
LAB_1035e7a10:
        func_0x0001035e7114(&uStack_1d0,&uStack_330,0x112db6f40,&UNK_10d9681d0);
        func_0x0001035e7114(&uStack_1f0,&uStack_330,0x112db6f40,&UNK_10d9681d0);
        func_0x000101597ae4(uVar5,uVar7,uVar8,uVar6);
        uVar5 = uVar10;
        uVar7 = uVar9;
        uVar8 = uVar11;
        uVar6 = uVar12;
        goto LAB_1035e7a6c;
      }
      func_0x0001035e7114(&uStack_1d0,&uStack_330,0x112db6f40,&UNK_10d9681d0);
      func_0x0001035e7114(&uStack_1f0,&uStack_330,0x112db6f40,&UNK_10d9681d0);
LAB_1035e7ab0:
      func_0x000101597ae4(uVar5,uVar7,uVar8,uVar6);
      uVar7 = param_1[0x1b];
      uVar8 = param_1[0x1a];
      uVar5 = param_1[0x1c];
      uVar10 = param_2[0x1b];
      uVar9 = param_2[0x1a];
      uVar6 = param_2[0x1c];
      uStack_330 = uVar8;
      uStack_328 = uVar7;
      uStack_320 = uVar5;
      uStack_210 = uVar9;
      uStack_208 = uVar10;
      uStack_200 = uVar6;
      if ((uVar8 & 0xff) == 2) {
        if ((uVar9 & 0xff) != 2) {
LAB_1035e7b94:
          func_0x0001035e7114(&uStack_330,&uStack_230,0x112db94f0,&UNK_10d96af00);
          puVar3 = &uStack_210;
          puVar4 = &uStack_230;
          uVar11 = uVar5;
          uVar12 = uVar7;
          uVar2 = uVar8;
          uVar5 = uVar6;
          uVar7 = uVar10;
          uVar8 = uVar9;
          goto LAB_1035e76d8;
        }
        func_0x0001035e7114(&uStack_330,&uStack_230,0x112db94f0,&UNK_10d96af00);
        func_0x0001035e7114(&uStack_210,&uStack_230,0x112db94f0,&UNK_10d96af00);
      }
      else {
        if ((uVar9 & 0xff) == 2) goto LAB_1035e7b94;
        if ((((uint)uVar9 ^ (uint)uVar8) & 1) != 0) {
          func_0x0001035e7114(&uStack_330,&uStack_230,0x112db94f0,&UNK_10d96af00);
          puVar3 = &uStack_210;
          puVar4 = &uStack_230;
          goto LAB_1035e77a4;
        }
        func_0x0001035e7114(&uStack_330,&uStack_230,0x112db94f0,&UNK_10d96af00);
        func_0x0001035e7114(&uStack_210,&uStack_230,0x112db94f0,&UNK_10d96af00);
        uVar11 = uVar7;
        func_0x000100e25fcc(uVar7,uVar5,uVar10,uVar6);
        func_0x000101556278(uVar9,uVar10,uVar6);
        if ((uVar11 & 1) == 0) goto LAB_1035e77cc;
      }
      func_0x000101556278(uVar8,uVar7,uVar5);
      uVar5 = param_1[1];
      FUN_10359f120(uVar5,param_2[1]);
      if ((uVar5 & 1) != 0) {
        uVar5 = param_1[2];
        uVar7 = param_2[2];
        if (*(char *)(param_2 + 3) == '\x01') {
          if (uVar7 == 0) {
            if (uVar5 == 0) goto LAB_1035e7ce0;
          }
          else if (uVar7 == 1) {
            if (uVar5 == 1) {
LAB_1035e7ce0:
              uVar7 = param_1[0x1e];
              uVar8 = param_1[0x1d];
              uVar5 = param_1[0x1f];
              uVar10 = param_2[0x1e];
              uVar9 = param_2[0x1d];
              uVar6 = param_2[0x1f];
              uStack_250 = uVar9;
              uStack_248 = uVar10;
              uStack_240 = uVar6;
              uStack_230 = uVar8;
              uStack_228 = uVar7;
              uStack_220 = uVar5;
              if ((uVar8 & 0xff) == 2) {
                if ((uVar9 & 0xff) != 2) {
LAB_1035e7f3c:
                  func_0x0001035e7114(&uStack_230,&uStack_270,0x112db94f0,&UNK_10d96af00);
                  puVar3 = &uStack_250;
                  puVar4 = &uStack_270;
                  uVar11 = uVar5;
                  uVar12 = uVar7;
                  uVar2 = uVar8;
                  uVar5 = uVar6;
                  uVar7 = uVar10;
                  uVar8 = uVar9;
                  goto LAB_1035e76d8;
                }
                func_0x0001035e7114(&uStack_230,&uStack_270,0x112db94f0,&UNK_10d96af00);
                func_0x0001035e7114(&uStack_250,&uStack_270,0x112db94f0,&UNK_10d96af00);
              }
              else {
                if ((uVar9 & 0xff) == 2) goto LAB_1035e7f3c;
                if ((((uint)uVar9 ^ (uint)uVar8) & 1) != 0) {
                  func_0x0001035e7114(&uStack_230,&uStack_270,0x112db94f0,&UNK_10d96af00);
                  puVar3 = &uStack_250;
                  puVar4 = &uStack_270;
                  goto LAB_1035e77a4;
                }
                func_0x0001035e7114(&uStack_230,&uStack_270,0x112db94f0,&UNK_10d96af00);
                func_0x0001035e7114(&uStack_250,&uStack_270,0x112db94f0,&UNK_10d96af00);
                uVar11 = uVar7;
                func_0x000100e25fcc(uVar7,uVar5,uVar10,uVar6);
                func_0x000101556278(uVar9,uVar10,uVar6);
                if ((uVar11 & 1) == 0) goto LAB_1035e77cc;
              }
              func_0x000101556278(uVar8,uVar7,uVar5);
              uVar7 = param_1[0x21];
              uVar8 = param_1[0x20];
              uVar5 = param_1[0x22];
              uVar10 = param_2[0x21];
              uVar9 = param_2[0x20];
              uVar6 = param_2[0x22];
              uStack_290 = uVar9;
              uStack_288 = uVar10;
              uStack_280 = uVar6;
              uStack_270 = uVar8;
              uStack_268 = uVar7;
              uStack_260 = uVar5;
              if ((uVar8 & 0xff) == 2) {
                if ((uVar9 & 0xff) != 2) {
LAB_1035e7fac:
                  func_0x0001035e7114(&uStack_270,&uStack_2b0,0x112db94f0,&UNK_10d96af00);
                  puVar3 = &uStack_290;
                  puVar4 = &uStack_2b0;
                  uVar11 = uVar5;
                  uVar12 = uVar7;
                  uVar2 = uVar8;
                  uVar5 = uVar6;
                  uVar7 = uVar10;
                  uVar8 = uVar9;
                  goto LAB_1035e76d8;
                }
                func_0x0001035e7114(&uStack_270,&uStack_2b0,0x112db94f0,&UNK_10d96af00);
                func_0x0001035e7114(&uStack_290,&uStack_2b0,0x112db94f0,&UNK_10d96af00);
              }
              else {
                if ((uVar9 & 0xff) == 2) goto LAB_1035e7fac;
                if ((((uint)uVar9 ^ (uint)uVar8) & 1) != 0) {
                  func_0x0001035e7114(&uStack_270,&uStack_2b0,0x112db94f0,&UNK_10d96af00);
                  puVar3 = &uStack_290;
                  puVar4 = &uStack_2b0;
                  goto LAB_1035e77a4;
                }
                func_0x0001035e7114(&uStack_270,&uStack_2b0,0x112db94f0,&UNK_10d96af00);
                func_0x0001035e7114(&uStack_290,&uStack_2b0,0x112db94f0,&UNK_10d96af00);
                uVar11 = uVar7;
                func_0x000100e25fcc(uVar7,uVar5,uVar10,uVar6);
                func_0x000101556278(uVar9,uVar10,uVar6);
                if ((uVar11 & 1) == 0) goto LAB_1035e77cc;
              }
              func_0x000101556278(uVar8,uVar7,uVar5);
              uVar7 = param_1[0x24];
              uVar8 = param_1[0x23];
              uVar5 = param_1[0x25];
              uVar10 = param_2[0x24];
              uVar9 = param_2[0x23];
              uVar6 = param_2[0x25];
              uStack_2d0 = uVar9;
              uStack_2c8 = uVar10;
              uStack_2c0 = uVar6;
              uStack_2b0 = uVar8;
              uStack_2a8 = uVar7;
              uStack_2a0 = uVar5;
              if ((uVar8 & 0xff) == 2) {
                if ((uVar9 & 0xff) != 2) {
LAB_1035e8084:
                  func_0x0001035e7114(&uStack_2b0,&uStack_2f0,0x112db94f0,&UNK_10d96af00);
                  puVar3 = &uStack_2d0;
                  puVar4 = &uStack_2f0;
                  uVar11 = uVar5;
                  uVar12 = uVar7;
                  uVar2 = uVar8;
                  uVar5 = uVar6;
                  uVar7 = uVar10;
                  uVar8 = uVar9;
                  goto LAB_1035e76d8;
                }
                func_0x0001035e7114(&uStack_2b0,&uStack_2f0,0x112db94f0,&UNK_10d96af00);
                func_0x0001035e7114(&uStack_2d0,&uStack_2f0,0x112db94f0,&UNK_10d96af00);
              }
              else {
                if ((uVar9 & 0xff) == 2) goto LAB_1035e8084;
                if ((((uint)uVar9 ^ (uint)uVar8) & 1) != 0) {
                  func_0x0001035e7114(&uStack_2b0,&uStack_2f0,0x112db94f0,&UNK_10d96af00);
                  puVar3 = &uStack_2d0;
                  puVar4 = &uStack_2f0;
                  goto LAB_1035e77a4;
                }
                func_0x0001035e7114(&uStack_2b0,&uStack_2f0,0x112db94f0,&UNK_10d96af00);
                func_0x0001035e7114(&uStack_2d0,&uStack_2f0,0x112db94f0,&UNK_10d96af00);
                uVar11 = uVar7;
                func_0x000100e25fcc(uVar7,uVar5,uVar10,uVar6);
                func_0x000101556278(uVar9,uVar10,uVar6);
                if ((uVar11 & 1) == 0) goto LAB_1035e77cc;
              }
              func_0x000101556278(uVar8,uVar7,uVar5);
              uVar5 = param_1[4];
              FUN_10359f120(uVar5,param_2[4]);
              if ((uVar5 & 1) != 0) {
                uVar7 = param_1[0x27];
                uVar5 = param_1[0x26];
                uVar8 = param_1[0x28];
                uVar9 = param_2[0x27];
                uVar10 = param_2[0x26];
                uVar6 = param_2[0x28];
                uStack_310 = uVar10;
                uStack_308 = uVar9;
                uStack_300 = uVar6;
                uStack_2f0 = uVar5;
                uStack_2e8 = uVar7;
                uStack_2e0 = uVar8;
                if (uVar8 >> 0x3c < 0xf) {
                  if (0xe < uVar6 >> 0x3c) goto LAB_1035e81c8;
                  if ((int)uVar5 == (int)uVar10) {
                    func_0x0001035e7114(&uStack_2f0,auStack_348,0x112db80f8,&UNK_10d9671e0);
                    func_0x0001035e7114(&uStack_310,auStack_348,0x112db80f8,&UNK_10d9671e0);
                    uVar11 = uVar7;
                    func_0x000100e25fcc(uVar7,uVar8,uVar9,uVar6);
                    func_0x0001015dc5d0(uVar10,uVar9,uVar6);
                    if ((uVar11 & 1) != 0) goto LAB_1035e7f14;
                  }
                  else {
                    func_0x0001035e7114(&uStack_2f0,auStack_348,0x112db80f8,&UNK_10d9671e0);
                    func_0x0001035e7114(&uStack_310,auStack_348,0x112db80f8,&UNK_10d9671e0);
                    func_0x0001015dc5d0(uVar10,uVar9,uVar6);
                  }
                }
                else {
                  if (0xe < uVar6 >> 0x3c) {
                    func_0x0001035e7114(&uStack_2f0,auStack_348,0x112db80f8,&UNK_10d9671e0);
                    func_0x0001035e7114(&uStack_310,auStack_348,0x112db80f8,&UNK_10d9671e0);
LAB_1035e7f14:
                    func_0x0001015dc5d0(uVar5,uVar7,uVar8);
                    uVar5 = param_1[5];
                    func_0x000100e25fcc(uVar5,param_1[6],param_2[5],param_2[6]);
                    uVar1 = (uint)uVar5;
                    goto LAB_1035e77d4;
                  }
LAB_1035e81c8:
                  func_0x0001035e7114(&uStack_2f0,auStack_348,0x112db80f8,&UNK_10d9671e0);
                  func_0x0001035e7114(&uStack_310,auStack_348,0x112db80f8,&UNK_10d9671e0);
                  func_0x0001015dc5d0(uVar5,uVar7,uVar8);
                  uVar5 = uVar10;
                  uVar7 = uVar9;
                  uVar8 = uVar6;
                }
                func_0x0001015dc5d0(uVar5,uVar7,uVar8);
              }
            }
          }
          else if (uVar5 == 2) goto LAB_1035e7ce0;
        }
        else if (uVar5 == uVar7) goto LAB_1035e7ce0;
      }
    }
    else {
      if (uVar9 == 0) goto LAB_1035e7a10;
      if (((uVar5 == uVar10) && (uVar7 == uVar9)) ||
         (uVar2 = uVar5, func_0x000107c605b8(uVar5,uVar7,uVar10,uVar9,0), (uVar2 & 1) != 0)) {
        func_0x0001035e7114(&uStack_1d0,&uStack_330,0x112db6f40,&UNK_10d9681d0);
        func_0x0001035e7114(&uStack_1f0,&uStack_330,0x112db6f40,&UNK_10d9681d0);
        uVar2 = uVar8;
        func_0x000100e25fcc(uVar8,uVar6,uVar11,uVar12);
        func_0x000101597ae4(uVar10,uVar9,uVar11,uVar12);
        if ((uVar2 & 1) != 0) goto LAB_1035e7ab0;
      }
      else {
        func_0x0001035e7114(&uStack_1d0,&uStack_330,0x112db6f40,&UNK_10d9681d0);
        func_0x0001035e7114(&uStack_1f0,&uStack_330,0x112db6f40,&UNK_10d9681d0);
        func_0x000101597ae4(uVar10,uVar9,uVar11,uVar12);
      }
LAB_1035e7a6c:
      func_0x000101597ae4(uVar5,uVar7,uVar8,uVar6);
    }
  }
  else {
    if ((uVar9 & 0xff) == 2) goto LAB_1035e7570;
    if ((((uint)uVar9 ^ (uint)uVar8) & 1) == 0) {
      func_0x0001035e7114(&uStack_90,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
      func_0x0001035e7114(&uStack_b0,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
      uVar11 = uVar7;
      func_0x000100e25fcc(uVar7,uVar5,uVar10,uVar6);
      func_0x000101556278(uVar9,uVar10,uVar6);
      if ((uVar11 & 1) != 0) goto LAB_1035e7248;
    }
    else {
      func_0x0001035e7114(&uStack_90,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
      puVar3 = &uStack_b0;
LAB_1035e77a0:
      puVar4 = &uStack_1d0;
LAB_1035e77a4:
      func_0x0001035e7114(puVar3,puVar4,0x112db94f0,&UNK_10d96af00);
      func_0x000101556278(uVar9,uVar10,uVar6);
    }
LAB_1035e77cc:
    func_0x000101556278(uVar8,uVar7,uVar5);
  }
LAB_1035e77d0:
  uVar1 = 0;
LAB_1035e77d4:
  return uVar1 & 1;
}



/* Entry: 1035e6d58; end: 1035e6d87;  */

undefined1  [16] FUN_1035e6d58(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x28);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  return auVar1;
}



/* Entry: 1035e6d88; end: 1035e6dbb;  */

void FUN_1035e6d88(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  *(undefined8 *)(unaff_x20 + 0x30) = param_2;
  return;
}



/* Entry: 1035e6dbc; end: 1035e6dcf;  */

undefined1  [16] FUN_1035e6dbc(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x28;
  auVar1._0_8_ = 0x1035e6dcc;
  return auVar1;
}



/* Entry: 1035e6dd0; end: 1035e6de3;  */

void FUN_1035e6dd0(void)

{
  FUN_1035e6234();
  return;
}



/* Entry: 1035e6de4; end: 1035e6e4b;  */

void FUN_1035e6de4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_188 [328];
  
  func_0x000107c610b4(auStack_188);
  FUN_1035e6460(param_1,param_2,param_3);
  return;
}



/* Entry: 1035e6e4c; end: 1035e6e4f;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1035e6e4c(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1035e6e50; end: 1035e6e87;  */

uint FUN_1035e6e50(long param_1,long param_2)

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
  FUN_1035e9644();
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



/* Entry: 1035e6e88; end: 1035e6ed7;  */

uint FUN_1035e6e88(undefined8 param_1)

{
  uint uVar1;
  undefined1 auStack_2b0 [328];
  undefined1 auStack_168 [328];
  
  uVar1 = 0;
  func_0x000107c610b4(auStack_168,param_1,0x148);
  func_0x000107c610b4(auStack_2b0);
  FUN_1035e719c(auStack_2b0,auStack_168);
  return uVar1 & 1;
}



/* Entry: 1035e6ed8; end: 1035e6f77;  */

/* WARNING: Possible PIC construction at 0x0001035e6f24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035e6f34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035e6f28) */
/* WARNING: Removing unreachable block (ram,0x0001035e6f38) */

void FUN_1035e6ed8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7d058 != -1) {
    func_0x000107c61568(0x112f7d058,FUN_1035e61ec);
  }
  uVar5 = uRam00000001138094e8;
  uVar4 = uRam00000001138094e0;
  uVar3 = uRam00000001138094d8;
  uVar2 = uRam00000001138094d0;
  uVar1 = uRam00000001138094c8;
  *param_1 = uRam00000001138094c0;
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



/* Entry: 1035e6f78; end: 1035e6fb3;  */

void FUN_1035e6f78(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f7d0a8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f7d0a8,&UNK_10dbe4f80);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1035e6fb4; end: 1035e70bf;  */

void FUN_1035e6fb4(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_1c0 [72];
  undefined1 auStack_178 [328];
  
  func_0x000107c610b4(auStack_178);
  func_0x000107c6068c(auStack_1c0,0);
  func_0x000107c5fa50(auStack_1c0,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1035e70c0; end: 1035e715b;  */

uint FUN_1035e70c0(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 auStack_2b0 [328];
  undefined1 auStack_168 [328];
  
  uVar1 = 0;
  func_0x000107c610b4(auStack_2b0,param_1,0x148);
  func_0x000107c610b4(auStack_168,param_2,0x148);
  FUN_1035e719c(auStack_2b0,auStack_168);
  return uVar1 & 1;
}



/* Entry: 1035e715c; end: 1035e719b;  */

void FUN_1035e715c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7d060 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbe4d10;
  func_0x000107c61520(&DAT_10dbe4d10,&UNK_11066b668);
  puRam0000000112f7d060 = puVar1;
  return;
}



/* Entry: 1035e719c; end: 1035e82eb;  */

uint FUN_1035e719c(ulong *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auStack_348 [24];
  ulong uStack_330;
  ulong uStack_328;
  ulong uStack_320;
  ulong uStack_310;
  ulong uStack_308;
  ulong uStack_300;
  ulong uStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  ulong uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  
  uVar7 = param_1[8];
  uVar8 = param_1[7];
  uVar5 = param_1[9];
  uVar10 = param_2[8];
  uVar9 = param_2[7];
  uVar6 = param_2[9];
  uStack_b0 = uVar9;
  uStack_a8 = uVar10;
  uStack_a0 = uVar6;
  uStack_90 = uVar8;
  uStack_88 = uVar7;
  uStack_80 = uVar5;
  if ((uVar8 & 0xff) == 2) {
    if ((uVar9 & 0xff) != 2) {
LAB_1035e7570:
      func_0x0001035e7114(&uStack_90,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
      puVar3 = &uStack_b0;
      uVar11 = uVar5;
      uVar12 = uVar7;
      uVar2 = uVar8;
      uVar5 = uVar6;
      uVar7 = uVar10;
      uVar8 = uVar9;
LAB_1035e76d4:
      puVar4 = &uStack_1d0;
LAB_1035e76d8:
      func_0x0001035e7114(puVar3,puVar4,0x112db94f0,&UNK_10d96af00);
      func_0x000101556278(uVar2,uVar12,uVar11);
      goto LAB_1035e77cc;
    }
    func_0x0001035e7114(&uStack_90,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
    func_0x0001035e7114(&uStack_b0,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
LAB_1035e7248:
    func_0x000101556278(uVar8,uVar7,uVar5);
    uVar7 = param_1[0xb];
    uVar8 = param_1[10];
    uVar5 = param_1[0xc];
    uVar10 = param_2[0xb];
    uVar9 = param_2[10];
    uVar6 = param_2[0xc];
    uStack_f0 = uVar9;
    uStack_e8 = uVar10;
    uStack_e0 = uVar6;
    uStack_d0 = uVar8;
    uStack_c8 = uVar7;
    uStack_c0 = uVar5;
    if ((uVar8 & 0xff) == 2) {
      if ((uVar9 & 0xff) != 2) {
LAB_1035e75d8:
        func_0x0001035e7114(&uStack_d0,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
        puVar3 = &uStack_f0;
        uVar11 = uVar5;
        uVar12 = uVar7;
        uVar2 = uVar8;
        uVar5 = uVar6;
        uVar7 = uVar10;
        uVar8 = uVar9;
        goto LAB_1035e76d4;
      }
      func_0x0001035e7114(&uStack_d0,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
      func_0x0001035e7114(&uStack_f0,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
    }
    else {
      if ((uVar9 & 0xff) == 2) goto LAB_1035e75d8;
      if ((((uint)uVar9 ^ (uint)uVar8) & 1) != 0) {
        func_0x0001035e7114(&uStack_d0,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
        puVar3 = &uStack_f0;
        goto LAB_1035e77a0;
      }
      func_0x0001035e7114(&uStack_d0,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
      func_0x0001035e7114(&uStack_f0,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
      uVar11 = uVar7;
      func_0x000100e25fcc(uVar7,uVar5,uVar10,uVar6);
      func_0x000101556278(uVar9,uVar10,uVar6);
      if ((uVar11 & 1) == 0) goto LAB_1035e77cc;
    }
    func_0x000101556278(uVar8,uVar7,uVar5);
    uVar7 = param_1[0xe];
    uVar8 = param_1[0xd];
    uVar5 = param_1[0xf];
    uVar10 = param_2[0xe];
    uVar9 = param_2[0xd];
    uVar6 = param_2[0xf];
    uStack_130 = uVar9;
    uStack_128 = uVar10;
    uStack_120 = uVar6;
    uStack_110 = uVar8;
    uStack_108 = uVar7;
    uStack_100 = uVar5;
    if ((uVar8 & 0xff) == 2) {
      if ((uVar9 & 0xff) != 2) {
LAB_1035e76ac:
        func_0x0001035e7114(&uStack_110,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
        puVar3 = &uStack_130;
        uVar11 = uVar5;
        uVar12 = uVar7;
        uVar2 = uVar8;
        uVar5 = uVar6;
        uVar7 = uVar10;
        uVar8 = uVar9;
        goto LAB_1035e76d4;
      }
      func_0x0001035e7114(&uStack_110,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
      func_0x0001035e7114(&uStack_130,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
    }
    else {
      if ((uVar9 & 0xff) == 2) goto LAB_1035e76ac;
      if ((((uint)uVar9 ^ (uint)uVar8) & 1) != 0) {
        func_0x0001035e7114(&uStack_110,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
        puVar3 = &uStack_130;
        goto LAB_1035e77a0;
      }
      func_0x0001035e7114(&uStack_110,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
      func_0x0001035e7114(&uStack_130,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
      uVar11 = uVar7;
      func_0x000100e25fcc(uVar7,uVar5,uVar10,uVar6);
      func_0x000101556278(uVar9,uVar10,uVar6);
      if ((uVar11 & 1) == 0) goto LAB_1035e77cc;
    }
    func_0x000101556278(uVar8,uVar7,uVar5);
    uVar5 = *param_1;
    FUN_10359f120(uVar5,*param_2);
    if ((uVar5 & 1) == 0) goto LAB_1035e77d0;
    uVar7 = param_1[0x11];
    uVar8 = param_1[0x10];
    uVar5 = param_1[0x12];
    uVar10 = param_2[0x11];
    uVar9 = param_2[0x10];
    uVar6 = param_2[0x12];
    uStack_170 = uVar9;
    uStack_168 = uVar10;
    uStack_160 = uVar6;
    uStack_150 = uVar8;
    uStack_148 = uVar7;
    uStack_140 = uVar5;
    if ((uVar8 & 0xff) == 2) {
      if ((uVar9 & 0xff) != 2) {
LAB_1035e786c:
        func_0x0001035e7114(&uStack_150,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
        puVar3 = &uStack_170;
        uVar11 = uVar5;
        uVar12 = uVar7;
        uVar2 = uVar8;
        uVar5 = uVar6;
        uVar7 = uVar10;
        uVar8 = uVar9;
        goto LAB_1035e76d4;
      }
      func_0x0001035e7114(&uStack_150,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
      func_0x0001035e7114(&uStack_170,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
    }
    else {
      if ((uVar9 & 0xff) == 2) goto LAB_1035e786c;
      if ((((uint)uVar9 ^ (uint)uVar8) & 1) != 0) {
        func_0x0001035e7114(&uStack_150,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
        puVar3 = &uStack_170;
        goto LAB_1035e77a0;
      }
      func_0x0001035e7114(&uStack_150,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
      func_0x0001035e7114(&uStack_170,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
      uVar11 = uVar7;
      func_0x000100e25fcc(uVar7,uVar5,uVar10,uVar6);
      func_0x000101556278(uVar9,uVar10,uVar6);
      if ((uVar11 & 1) == 0) goto LAB_1035e77cc;
    }
    func_0x000101556278(uVar8,uVar7,uVar5);
    uVar7 = param_1[0x14];
    uVar8 = param_1[0x13];
    uVar5 = param_1[0x15];
    uVar10 = param_2[0x14];
    uVar9 = param_2[0x13];
    uVar6 = param_2[0x15];
    uStack_1b0 = uVar9;
    uStack_1a8 = uVar10;
    uStack_1a0 = uVar6;
    uStack_190 = uVar8;
    uStack_188 = uVar7;
    uStack_180 = uVar5;
    if ((uVar8 & 0xff) == 2) {
      if ((uVar9 & 0xff) != 2) {
LAB_1035e78d4:
        func_0x0001035e7114(&uStack_190,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
        puVar3 = &uStack_1b0;
        uVar11 = uVar5;
        uVar12 = uVar7;
        uVar2 = uVar8;
        uVar5 = uVar6;
        uVar7 = uVar10;
        uVar8 = uVar9;
        goto LAB_1035e76d4;
      }
      func_0x0001035e7114(&uStack_190,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
      func_0x0001035e7114(&uStack_1b0,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
    }
    else {
      if ((uVar9 & 0xff) == 2) goto LAB_1035e78d4;
      if ((((uint)uVar9 ^ (uint)uVar8) & 1) != 0) {
        func_0x0001035e7114(&uStack_190,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
        puVar3 = &uStack_1b0;
        goto LAB_1035e77a0;
      }
      func_0x0001035e7114(&uStack_190,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
      func_0x0001035e7114(&uStack_1b0,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
      uVar11 = uVar7;
      func_0x000100e25fcc(uVar7,uVar5,uVar10,uVar6);
      func_0x000101556278(uVar9,uVar10,uVar6);
      if ((uVar11 & 1) == 0) goto LAB_1035e77cc;
    }
    func_0x000101556278(uVar8,uVar7,uVar5);
    uVar7 = param_1[0x17];
    uVar5 = param_1[0x16];
    uVar6 = param_1[0x19];
    uVar8 = param_1[0x18];
    uVar9 = param_2[0x17];
    uVar10 = param_2[0x16];
    uVar12 = param_2[0x19];
    uVar11 = param_2[0x18];
    uStack_1f0 = uVar10;
    uStack_1e8 = uVar9;
    uStack_1e0 = uVar11;
    uStack_1d8 = uVar12;
    uStack_1d0 = uVar5;
    uStack_1c8 = uVar7;
    uStack_1c0 = uVar8;
    uStack_1b8 = uVar6;
    if (uVar7 == 0) {
      if (uVar9 != 0) {
LAB_1035e7a10:
        func_0x0001035e7114(&uStack_1d0,&uStack_330,0x112db6f40,&UNK_10d9681d0);
        func_0x0001035e7114(&uStack_1f0,&uStack_330,0x112db6f40,&UNK_10d9681d0);
        func_0x000101597ae4(uVar5,uVar7,uVar8,uVar6);
        uVar5 = uVar10;
        uVar7 = uVar9;
        uVar8 = uVar11;
        uVar6 = uVar12;
        goto LAB_1035e7a6c;
      }
      func_0x0001035e7114(&uStack_1d0,&uStack_330,0x112db6f40,&UNK_10d9681d0);
      func_0x0001035e7114(&uStack_1f0,&uStack_330,0x112db6f40,&UNK_10d9681d0);
LAB_1035e7ab0:
      func_0x000101597ae4(uVar5,uVar7,uVar8,uVar6);
      uVar7 = param_1[0x1b];
      uVar8 = param_1[0x1a];
      uVar5 = param_1[0x1c];
      uVar10 = param_2[0x1b];
      uVar9 = param_2[0x1a];
      uVar6 = param_2[0x1c];
      uStack_330 = uVar8;
      uStack_328 = uVar7;
      uStack_320 = uVar5;
      uStack_210 = uVar9;
      uStack_208 = uVar10;
      uStack_200 = uVar6;
      if ((uVar8 & 0xff) == 2) {
        if ((uVar9 & 0xff) != 2) {
LAB_1035e7b94:
          func_0x0001035e7114(&uStack_330,&uStack_230,0x112db94f0,&UNK_10d96af00);
          puVar3 = &uStack_210;
          puVar4 = &uStack_230;
          uVar11 = uVar5;
          uVar12 = uVar7;
          uVar2 = uVar8;
          uVar5 = uVar6;
          uVar7 = uVar10;
          uVar8 = uVar9;
          goto LAB_1035e76d8;
        }
        func_0x0001035e7114(&uStack_330,&uStack_230,0x112db94f0,&UNK_10d96af00);
        func_0x0001035e7114(&uStack_210,&uStack_230,0x112db94f0,&UNK_10d96af00);
      }
      else {
        if ((uVar9 & 0xff) == 2) goto LAB_1035e7b94;
        if ((((uint)uVar9 ^ (uint)uVar8) & 1) != 0) {
          func_0x0001035e7114(&uStack_330,&uStack_230,0x112db94f0,&UNK_10d96af00);
          puVar3 = &uStack_210;
          puVar4 = &uStack_230;
          goto LAB_1035e77a4;
        }
        func_0x0001035e7114(&uStack_330,&uStack_230,0x112db94f0,&UNK_10d96af00);
        func_0x0001035e7114(&uStack_210,&uStack_230,0x112db94f0,&UNK_10d96af00);
        uVar11 = uVar7;
        func_0x000100e25fcc(uVar7,uVar5,uVar10,uVar6);
        func_0x000101556278(uVar9,uVar10,uVar6);
        if ((uVar11 & 1) == 0) goto LAB_1035e77cc;
      }
      func_0x000101556278(uVar8,uVar7,uVar5);
      uVar5 = param_1[1];
      FUN_10359f120(uVar5,param_2[1]);
      if ((uVar5 & 1) != 0) {
        uVar5 = param_1[2];
        uVar7 = param_2[2];
        if (*(char *)(param_2 + 3) == '\x01') {
          if (uVar7 == 0) {
            if (uVar5 == 0) goto LAB_1035e7ce0;
          }
          else if (uVar7 == 1) {
            if (uVar5 == 1) {
LAB_1035e7ce0:
              uVar7 = param_1[0x1e];
              uVar8 = param_1[0x1d];
              uVar5 = param_1[0x1f];
              uVar10 = param_2[0x1e];
              uVar9 = param_2[0x1d];
              uVar6 = param_2[0x1f];
              uStack_250 = uVar9;
              uStack_248 = uVar10;
              uStack_240 = uVar6;
              uStack_230 = uVar8;
              uStack_228 = uVar7;
              uStack_220 = uVar5;
              if ((uVar8 & 0xff) == 2) {
                if ((uVar9 & 0xff) != 2) {
LAB_1035e7f3c:
                  func_0x0001035e7114(&uStack_230,&uStack_270,0x112db94f0,&UNK_10d96af00);
                  puVar3 = &uStack_250;
                  puVar4 = &uStack_270;
                  uVar11 = uVar5;
                  uVar12 = uVar7;
                  uVar2 = uVar8;
                  uVar5 = uVar6;
                  uVar7 = uVar10;
                  uVar8 = uVar9;
                  goto LAB_1035e76d8;
                }
                func_0x0001035e7114(&uStack_230,&uStack_270,0x112db94f0,&UNK_10d96af00);
                func_0x0001035e7114(&uStack_250,&uStack_270,0x112db94f0,&UNK_10d96af00);
              }
              else {
                if ((uVar9 & 0xff) == 2) goto LAB_1035e7f3c;
                if ((((uint)uVar9 ^ (uint)uVar8) & 1) != 0) {
                  func_0x0001035e7114(&uStack_230,&uStack_270,0x112db94f0,&UNK_10d96af00);
                  puVar3 = &uStack_250;
                  puVar4 = &uStack_270;
                  goto LAB_1035e77a4;
                }
                func_0x0001035e7114(&uStack_230,&uStack_270,0x112db94f0,&UNK_10d96af00);
                func_0x0001035e7114(&uStack_250,&uStack_270,0x112db94f0,&UNK_10d96af00);
                uVar11 = uVar7;
                func_0x000100e25fcc(uVar7,uVar5,uVar10,uVar6);
                func_0x000101556278(uVar9,uVar10,uVar6);
                if ((uVar11 & 1) == 0) goto LAB_1035e77cc;
              }
              func_0x000101556278(uVar8,uVar7,uVar5);
              uVar7 = param_1[0x21];
              uVar8 = param_1[0x20];
              uVar5 = param_1[0x22];
              uVar10 = param_2[0x21];
              uVar9 = param_2[0x20];
              uVar6 = param_2[0x22];
              uStack_290 = uVar9;
              uStack_288 = uVar10;
              uStack_280 = uVar6;
              uStack_270 = uVar8;
              uStack_268 = uVar7;
              uStack_260 = uVar5;
              if ((uVar8 & 0xff) == 2) {
                if ((uVar9 & 0xff) != 2) {
LAB_1035e7fac:
                  func_0x0001035e7114(&uStack_270,&uStack_2b0,0x112db94f0,&UNK_10d96af00);
                  puVar3 = &uStack_290;
                  puVar4 = &uStack_2b0;
                  uVar11 = uVar5;
                  uVar12 = uVar7;
                  uVar2 = uVar8;
                  uVar5 = uVar6;
                  uVar7 = uVar10;
                  uVar8 = uVar9;
                  goto LAB_1035e76d8;
                }
                func_0x0001035e7114(&uStack_270,&uStack_2b0,0x112db94f0,&UNK_10d96af00);
                func_0x0001035e7114(&uStack_290,&uStack_2b0,0x112db94f0,&UNK_10d96af00);
              }
              else {
                if ((uVar9 & 0xff) == 2) goto LAB_1035e7fac;
                if ((((uint)uVar9 ^ (uint)uVar8) & 1) != 0) {
                  func_0x0001035e7114(&uStack_270,&uStack_2b0,0x112db94f0,&UNK_10d96af00);
                  puVar3 = &uStack_290;
                  puVar4 = &uStack_2b0;
                  goto LAB_1035e77a4;
                }
                func_0x0001035e7114(&uStack_270,&uStack_2b0,0x112db94f0,&UNK_10d96af00);
                func_0x0001035e7114(&uStack_290,&uStack_2b0,0x112db94f0,&UNK_10d96af00);
                uVar11 = uVar7;
                func_0x000100e25fcc(uVar7,uVar5,uVar10,uVar6);
                func_0x000101556278(uVar9,uVar10,uVar6);
                if ((uVar11 & 1) == 0) goto LAB_1035e77cc;
              }
              func_0x000101556278(uVar8,uVar7,uVar5);
              uVar7 = param_1[0x24];
              uVar8 = param_1[0x23];
              uVar5 = param_1[0x25];
              uVar10 = param_2[0x24];
              uVar9 = param_2[0x23];
              uVar6 = param_2[0x25];
              uStack_2d0 = uVar9;
              uStack_2c8 = uVar10;
              uStack_2c0 = uVar6;
              uStack_2b0 = uVar8;
              uStack_2a8 = uVar7;
              uStack_2a0 = uVar5;
              if ((uVar8 & 0xff) == 2) {
                if ((uVar9 & 0xff) != 2) {
LAB_1035e8084:
                  func_0x0001035e7114(&uStack_2b0,&uStack_2f0,0x112db94f0,&UNK_10d96af00);
                  puVar3 = &uStack_2d0;
                  puVar4 = &uStack_2f0;
                  uVar11 = uVar5;
                  uVar12 = uVar7;
                  uVar2 = uVar8;
                  uVar5 = uVar6;
                  uVar7 = uVar10;
                  uVar8 = uVar9;
                  goto LAB_1035e76d8;
                }
                func_0x0001035e7114(&uStack_2b0,&uStack_2f0,0x112db94f0,&UNK_10d96af00);
                func_0x0001035e7114(&uStack_2d0,&uStack_2f0,0x112db94f0,&UNK_10d96af00);
              }
              else {
                if ((uVar9 & 0xff) == 2) goto LAB_1035e8084;
                if ((((uint)uVar9 ^ (uint)uVar8) & 1) != 0) {
                  func_0x0001035e7114(&uStack_2b0,&uStack_2f0,0x112db94f0,&UNK_10d96af00);
                  puVar3 = &uStack_2d0;
                  puVar4 = &uStack_2f0;
                  goto LAB_1035e77a4;
                }
                func_0x0001035e7114(&uStack_2b0,&uStack_2f0,0x112db94f0,&UNK_10d96af00);
                func_0x0001035e7114(&uStack_2d0,&uStack_2f0,0x112db94f0,&UNK_10d96af00);
                uVar11 = uVar7;
                func_0x000100e25fcc(uVar7,uVar5,uVar10,uVar6);
                func_0x000101556278(uVar9,uVar10,uVar6);
                if ((uVar11 & 1) == 0) goto LAB_1035e77cc;
              }
              func_0x000101556278(uVar8,uVar7,uVar5);
              uVar5 = param_1[4];
              FUN_10359f120(uVar5,param_2[4]);
              if ((uVar5 & 1) != 0) {
                uVar7 = param_1[0x27];
                uVar5 = param_1[0x26];
                uVar8 = param_1[0x28];
                uVar9 = param_2[0x27];
                uVar10 = param_2[0x26];
                uVar6 = param_2[0x28];
                uStack_310 = uVar10;
                uStack_308 = uVar9;
                uStack_300 = uVar6;
                uStack_2f0 = uVar5;
                uStack_2e8 = uVar7;
                uStack_2e0 = uVar8;
                if (uVar8 >> 0x3c < 0xf) {
                  if (0xe < uVar6 >> 0x3c) goto LAB_1035e81c8;
                  if ((int)uVar5 == (int)uVar10) {
                    func_0x0001035e7114(&uStack_2f0,auStack_348,0x112db80f8,&UNK_10d9671e0);
                    func_0x0001035e7114(&uStack_310,auStack_348,0x112db80f8,&UNK_10d9671e0);
                    uVar11 = uVar7;
                    func_0x000100e25fcc(uVar7,uVar8,uVar9,uVar6);
                    func_0x0001015dc5d0(uVar10,uVar9,uVar6);
                    if ((uVar11 & 1) != 0) goto LAB_1035e7f14;
                  }
                  else {
                    func_0x0001035e7114(&uStack_2f0,auStack_348,0x112db80f8,&UNK_10d9671e0);
                    func_0x0001035e7114(&uStack_310,auStack_348,0x112db80f8,&UNK_10d9671e0);
                    func_0x0001015dc5d0(uVar10,uVar9,uVar6);
                  }
                }
                else {
                  if (0xe < uVar6 >> 0x3c) {
                    func_0x0001035e7114(&uStack_2f0,auStack_348,0x112db80f8,&UNK_10d9671e0);
                    func_0x0001035e7114(&uStack_310,auStack_348,0x112db80f8,&UNK_10d9671e0);
LAB_1035e7f14:
                    func_0x0001015dc5d0(uVar5,uVar7,uVar8);
                    uVar5 = param_1[5];
                    func_0x000100e25fcc(uVar5,param_1[6],param_2[5],param_2[6]);
                    uVar1 = (uint)uVar5;
                    goto LAB_1035e77d4;
                  }
LAB_1035e81c8:
                  func_0x0001035e7114(&uStack_2f0,auStack_348,0x112db80f8,&UNK_10d9671e0);
                  func_0x0001035e7114(&uStack_310,auStack_348,0x112db80f8,&UNK_10d9671e0);
                  func_0x0001015dc5d0(uVar5,uVar7,uVar8);
                  uVar5 = uVar10;
                  uVar7 = uVar9;
                  uVar8 = uVar6;
                }
                func_0x0001015dc5d0(uVar5,uVar7,uVar8);
              }
            }
          }
          else if (uVar5 == 2) goto LAB_1035e7ce0;
        }
        else if (uVar5 == uVar7) goto LAB_1035e7ce0;
      }
    }
    else {
      if (uVar9 == 0) goto LAB_1035e7a10;
      if (((uVar5 == uVar10) && (uVar7 == uVar9)) ||
         (uVar2 = uVar5, func_0x000107c605b8(uVar5,uVar7,uVar10,uVar9,0), (uVar2 & 1) != 0)) {
        func_0x0001035e7114(&uStack_1d0,&uStack_330,0x112db6f40,&UNK_10d9681d0);
        func_0x0001035e7114(&uStack_1f0,&uStack_330,0x112db6f40,&UNK_10d9681d0);
        uVar2 = uVar8;
        func_0x000100e25fcc(uVar8,uVar6,uVar11,uVar12);
        func_0x000101597ae4(uVar10,uVar9,uVar11,uVar12);
        if ((uVar2 & 1) != 0) goto LAB_1035e7ab0;
      }
      else {
        func_0x0001035e7114(&uStack_1d0,&uStack_330,0x112db6f40,&UNK_10d9681d0);
        func_0x0001035e7114(&uStack_1f0,&uStack_330,0x112db6f40,&UNK_10d9681d0);
        func_0x000101597ae4(uVar10,uVar9,uVar11,uVar12);
      }
LAB_1035e7a6c:
      func_0x000101597ae4(uVar5,uVar7,uVar8,uVar6);
    }
  }
  else {
    if ((uVar9 & 0xff) == 2) goto LAB_1035e7570;
    if ((((uint)uVar9 ^ (uint)uVar8) & 1) == 0) {
      func_0x0001035e7114(&uStack_90,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
      func_0x0001035e7114(&uStack_b0,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
      uVar11 = uVar7;
      func_0x000100e25fcc(uVar7,uVar5,uVar10,uVar6);
      func_0x000101556278(uVar9,uVar10,uVar6);
      if ((uVar11 & 1) != 0) goto LAB_1035e7248;
    }
    else {
      func_0x0001035e7114(&uStack_90,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
      puVar3 = &uStack_b0;
LAB_1035e77a0:
      puVar4 = &uStack_1d0;
LAB_1035e77a4:
      func_0x0001035e7114(puVar3,puVar4,0x112db94f0,&UNK_10d96af00);
      func_0x000101556278(uVar9,uVar10,uVar6);
    }
LAB_1035e77cc:
    func_0x000101556278(uVar8,uVar7,uVar5);
  }
LAB_1035e77d0:
  uVar1 = 0;
LAB_1035e77d4:
  return uVar1 & 1;
}



/* Entry: 1035e82ec; end: 1035e832b;  */

void FUN_1035e82ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7d068 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe4e90;
  func_0x000107c61520(&UNK_10dbe4e90,&UNK_11066b6e0);
  puRam0000000112f7d068 = puVar1;
  return;
}



/* Entry: 1035e832c; end: 1035e833f;  */

void FUN_1035e832c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035e8340();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1035e8380)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1035e8340; end: 1035e83bf;  */

void FUN_1035e8340(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7d070 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe4da8;
  func_0x000107c61520(&UNK_10dbe4da8,&UNK_11066b668);
  puRam0000000112f7d070 = puVar1;
  return;
}



/* Entry: 1035e83c0; end: 1035e83c3;  */

void FUN_1035e83c0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f7d080 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f7d088;
  func_0x00010002969c(0x112f7d088,&UNK_10dbe4d30);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112f7d080 = puVar2;
  return;
}



/* Entry: 1035e83c4; end: 1035e8413;  */

void FUN_1035e83c4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f7d080 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f7d088;
  func_0x00010002969c(0x112f7d088,&UNK_10dbe4d30);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112f7d080 = puVar2;
  return;
}



/* Entry: 1035e8414; end: 1035e8417;  */

void FUN_1035e8414(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7d090 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe4de8;
  func_0x000107c61520(&UNK_10dbe4de8,&UNK_11066b668);
  puRam0000000112f7d090 = puVar1;
  return;
}



/* Entry: 1035e8418; end: 1035e8457;  */

void FUN_1035e8418(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7d090 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe4de8;
  func_0x000107c61520(&UNK_10dbe4de8,&UNK_11066b668);
  puRam0000000112f7d090 = puVar1;
  return;
}



/* Entry: 1035e8458; end: 1035e847b;  */

void FUN_1035e8458(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035e847c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1035e847c; end: 1035e84bb;  */

void FUN_1035e847c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7d098 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe4e68;
  func_0x000107c61520(&UNK_10dbe4e68,&UNK_11066b6e0);
  puRam0000000112f7d098 = puVar1;
  return;
}



/* Entry: 1035e84bc; end: 1035e84cf;  */

void FUN_1035e84bc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035e82ec();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1035e10f8)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1035e84d0; end: 1035e84ff;  */

void FUN_1035e84d0(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1035e8500; end: 1035e8503;  */

void FUN_1035e8500(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7d0a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe4ed0;
  func_0x000107c61520(&UNK_10dbe4ed0,&UNK_11066b6e0);
  puRam0000000112f7d0a0 = puVar1;
  return;
}



/* Entry: 1035e8504; end: 1035e8543;  */

void FUN_1035e8504(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7d0a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe4ed0;
  func_0x000107c61520(&UNK_10dbe4ed0,&UNK_11066b6e0);
  puRam0000000112f7d0a0 = puVar1;
  return;
}



/* Entry: 1035e8544; end: 1035e85e3;  */

int FUN_1035e8544(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 1035e85e4; end: 1035e8733;  */

long FUN_1035e85e4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1035e8734; end: 1035e8a43;  */

undefined8 * FUN_1035e8734(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar6 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar6;
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  uVar3 = param_2[4];
  uVar7 = param_2[5];
  param_1[4] = uVar3;
  uVar5 = param_2[6];
  func_0x000107c61434();
  func_0x000107c61434(uVar6);
  func_0x000107c61434(uVar3);
  func_0x00010006c00c(uVar7,uVar5);
  param_1[5] = uVar7;
  param_1[6] = uVar5;
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
    uVar6 = param_2[9];
    func_0x00010006c00c(uVar3,uVar6);
    param_1[8] = uVar3;
    param_1[9] = uVar6;
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
    uVar6 = param_2[0xc];
    func_0x00010006c00c(uVar3,uVar6);
    param_1[0xb] = uVar3;
    param_1[0xc] = uVar6;
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
    uVar6 = param_2[0xf];
    func_0x00010006c00c(uVar3,uVar6);
    param_1[0xe] = uVar3;
    param_1[0xf] = uVar6;
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
    uVar6 = param_2[0x12];
    func_0x00010006c00c(uVar3,uVar6);
    param_1[0x11] = uVar3;
    param_1[0x12] = uVar6;
  }
  cVar1 = *(char *)(param_2 + 0x13);
  if (cVar1 == '\x02') {
    uVar3 = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar3;
    param_1[0x15] = param_2[0x15];
    lVar2 = param_2[0x17];
  }
  else {
    *(char *)(param_1 + 0x13) = cVar1;
    uVar3 = param_2[0x14];
    uVar6 = param_2[0x15];
    func_0x00010006c00c(uVar3,uVar6);
    param_1[0x14] = uVar3;
    param_1[0x15] = uVar6;
    lVar2 = param_2[0x17];
  }
  if (lVar2 == 0) {
    uVar3 = param_2[0x16];
    uVar7 = param_2[0x19];
    uVar6 = param_2[0x18];
    param_1[0x17] = param_2[0x17];
    param_1[0x16] = uVar3;
    param_1[0x19] = uVar7;
    param_1[0x18] = uVar6;
  }
  else {
    param_1[0x16] = param_2[0x16];
    param_1[0x17] = lVar2;
    uVar3 = param_2[0x18];
    uVar6 = param_2[0x19];
    func_0x000107c61434();
    func_0x00010006c00c(uVar3,uVar6);
    param_1[0x18] = uVar3;
    param_1[0x19] = uVar6;
  }
  cVar1 = *(char *)(param_2 + 0x1a);
  if (cVar1 == '\x02') {
    uVar3 = param_2[0x1a];
    param_1[0x1b] = param_2[0x1b];
    param_1[0x1a] = uVar3;
    param_1[0x1c] = param_2[0x1c];
  }
  else {
    *(char *)(param_1 + 0x1a) = cVar1;
    uVar3 = param_2[0x1b];
    uVar6 = param_2[0x1c];
    func_0x00010006c00c(uVar3,uVar6);
    param_1[0x1b] = uVar3;
    param_1[0x1c] = uVar6;
  }
  cVar1 = *(char *)(param_2 + 0x1d);
  if (cVar1 == '\x02') {
    uVar3 = param_2[0x1d];
    param_1[0x1e] = param_2[0x1e];
    param_1[0x1d] = uVar3;
    param_1[0x1f] = param_2[0x1f];
  }
  else {
    *(char *)(param_1 + 0x1d) = cVar1;
    uVar3 = param_2[0x1e];
    uVar6 = param_2[0x1f];
    func_0x00010006c00c(uVar3,uVar6);
    param_1[0x1e] = uVar3;
    param_1[0x1f] = uVar6;
  }
  if (*(char *)(param_2 + 0x20) == '\x02') {
    uVar3 = param_2[0x20];
    param_1[0x21] = param_2[0x21];
    param_1[0x20] = uVar3;
    param_1[0x22] = param_2[0x22];
  }
  else {
    *(char *)(param_1 + 0x20) = *(char *)(param_2 + 0x20);
    uVar3 = param_2[0x21];
    uVar6 = param_2[0x22];
    func_0x00010006c00c(uVar3,uVar6);
    param_1[0x21] = uVar3;
    param_1[0x22] = uVar6;
  }
  if (*(char *)(param_2 + 0x23) == '\x02') {
    uVar3 = param_2[0x23];
    param_1[0x24] = param_2[0x24];
    param_1[0x23] = uVar3;
    param_1[0x25] = param_2[0x25];
  }
  else {
    *(char *)(param_1 + 0x23) = *(char *)(param_2 + 0x23);
    uVar3 = param_2[0x24];
    uVar6 = param_2[0x25];
    func_0x00010006c00c(uVar3,uVar6);
    param_1[0x24] = uVar3;
    param_1[0x25] = uVar6;
  }
  uVar4 = param_2[0x28];
  if (uVar4 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0x26) = *(undefined4 *)(param_2 + 0x26);
    uVar3 = param_2[0x27];
    func_0x00010006c00c(uVar3,uVar4);
    param_1[0x27] = uVar3;
    param_1[0x28] = uVar4;
  }
  else {
    uVar3 = param_2[0x26];
    param_1[0x27] = param_2[0x27];
    param_1[0x26] = uVar3;
    param_1[0x28] = param_2[0x28];
  }
  return param_1;
}



/* Entry: 1035e8a44; end: 1035e9557;  */

undefined8 * FUN_1035e8a44(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  char *pcVar5;
  long lVar6;
  byte *pbVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar4 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  uVar4 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  uVar4 = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[2] = uVar4;
  uVar4 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  uVar4 = param_2[5];
  uVar9 = param_2[6];
  func_0x00010006c00c(uVar4,uVar9);
  uVar8 = param_1[5];
  uVar2 = param_1[6];
  param_1[5] = uVar4;
  param_1[6] = uVar9;
  func_0x00010006c090(uVar8,uVar2);
  pcVar5 = (char *)(param_1 + 7);
  pbVar7 = (byte *)(param_2 + 7);
  bVar3 = *pbVar7;
  if (*pcVar5 == '\x02') {
    if (bVar3 == 2) {
      uVar8 = param_2[8];
      uVar4 = *(undefined8 *)pbVar7;
      param_1[9] = param_2[9];
      param_1[8] = uVar8;
      *(undefined8 *)pcVar5 = uVar4;
    }
    else {
      *(byte *)(param_1 + 7) = bVar3;
      uVar4 = param_2[8];
      uVar8 = param_2[9];
      func_0x00010006c00c(uVar4,uVar8);
      param_1[8] = uVar4;
      param_1[9] = uVar8;
    }
  }
  else if (bVar3 == 2) {
    func_0x0001015fd618(pcVar5);
    uVar4 = param_2[9];
    uVar8 = *(undefined8 *)pbVar7;
    param_1[8] = param_2[8];
    *(undefined8 *)pcVar5 = uVar8;
    param_1[9] = uVar4;
  }
  else {
    *(byte *)(param_1 + 7) = bVar3 & 1;
    uVar4 = param_2[8];
    uVar9 = param_2[9];
    func_0x00010006c00c(uVar4,uVar9);
    uVar8 = param_1[8];
    uVar2 = param_1[9];
    param_1[8] = uVar4;
    param_1[9] = uVar9;
    func_0x00010006c090(uVar8,uVar2);
  }
  pcVar5 = (char *)(param_1 + 10);
  pbVar7 = (byte *)(param_2 + 10);
  bVar3 = *pbVar7;
  if (*pcVar5 == '\x02') {
    if (bVar3 == 2) {
      uVar8 = param_2[0xb];
      uVar4 = *(undefined8 *)pbVar7;
      param_1[0xc] = param_2[0xc];
      param_1[0xb] = uVar8;
      *(undefined8 *)pcVar5 = uVar4;
    }
    else {
      *(byte *)(param_1 + 10) = bVar3;
      uVar4 = param_2[0xb];
      uVar8 = param_2[0xc];
      func_0x00010006c00c(uVar4,uVar8);
      param_1[0xb] = uVar4;
      param_1[0xc] = uVar8;
    }
  }
  else if (bVar3 == 2) {
    func_0x0001015fd618(pcVar5);
    uVar4 = param_2[0xc];
    uVar8 = *(undefined8 *)pbVar7;
    param_1[0xb] = param_2[0xb];
    *(undefined8 *)pcVar5 = uVar8;
    param_1[0xc] = uVar4;
  }
  else {
    *(byte *)(param_1 + 10) = bVar3 & 1;
    uVar4 = param_2[0xb];
    uVar9 = param_2[0xc];
    func_0x00010006c00c(uVar4,uVar9);
    uVar8 = param_1[0xb];
    uVar2 = param_1[0xc];
    param_1[0xb] = uVar4;
    param_1[0xc] = uVar9;
    func_0x00010006c090(uVar8,uVar2);
  }
  pcVar5 = (char *)(param_1 + 0xd);
  pbVar7 = (byte *)(param_2 + 0xd);
  bVar3 = *pbVar7;
  if (*pcVar5 == '\x02') {
    if (bVar3 == 2) {
      uVar8 = param_2[0xe];
      uVar4 = *(undefined8 *)pbVar7;
      param_1[0xf] = param_2[0xf];
      param_1[0xe] = uVar8;
      *(undefined8 *)pcVar5 = uVar4;
    }
    else {
      *(byte *)(param_1 + 0xd) = bVar3;
      uVar4 = param_2[0xe];
      uVar8 = param_2[0xf];
      func_0x00010006c00c(uVar4,uVar8);
      param_1[0xe] = uVar4;
      param_1[0xf] = uVar8;
    }
  }
  else if (bVar3 == 2) {
    func_0x0001015fd618(pcVar5);
    uVar4 = param_2[0xf];
    uVar8 = *(undefined8 *)pbVar7;
    param_1[0xe] = param_2[0xe];
    *(undefined8 *)pcVar5 = uVar8;
    param_1[0xf] = uVar4;
  }
  else {
    *(byte *)(param_1 + 0xd) = bVar3 & 1;
    uVar4 = param_2[0xe];
    uVar9 = param_2[0xf];
    func_0x00010006c00c(uVar4,uVar9);
    uVar8 = param_1[0xe];
    uVar2 = param_1[0xf];
    param_1[0xe] = uVar4;
    param_1[0xf] = uVar9;
    func_0x00010006c090(uVar8,uVar2);
  }
  pcVar5 = (char *)(param_1 + 0x10);
  pbVar7 = (byte *)(param_2 + 0x10);
  bVar3 = *pbVar7;
  if (*pcVar5 == '\x02') {
    if (bVar3 == 2) {
      uVar8 = param_2[0x11];
      uVar4 = *(undefined8 *)pbVar7;
      param_1[0x12] = param_2[0x12];
      param_1[0x11] = uVar8;
      *(undefined8 *)pcVar5 = uVar4;
    }
    else {
      *(byte *)(param_1 + 0x10) = bVar3;
      uVar4 = param_2[0x11];
      uVar8 = param_2[0x12];
      func_0x00010006c00c(uVar4,uVar8);
      param_1[0x11] = uVar4;
      param_1[0x12] = uVar8;
    }
  }
  else if (bVar3 == 2) {
    func_0x0001015fd618(pcVar5);
    uVar4 = param_2[0x12];
    uVar8 = *(undefined8 *)pbVar7;
    param_1[0x11] = param_2[0x11];
    *(undefined8 *)pcVar5 = uVar8;
    param_1[0x12] = uVar4;
  }
  else {
    *(byte *)(param_1 + 0x10) = bVar3 & 1;
    uVar4 = param_2[0x11];
    uVar9 = param_2[0x12];
    func_0x00010006c00c(uVar4,uVar9);
    uVar8 = param_1[0x11];
    uVar2 = param_1[0x12];
    param_1[0x11] = uVar4;
    param_1[0x12] = uVar9;
    func_0x00010006c090(uVar8,uVar2);
  }
  pcVar5 = (char *)(param_1 + 0x13);
  pbVar7 = (byte *)(param_2 + 0x13);
  bVar3 = *pbVar7;
  if (*pcVar5 == '\x02') {
    if (bVar3 == 2) {
      uVar8 = param_2[0x14];
      uVar4 = *(undefined8 *)pbVar7;
      param_1[0x15] = param_2[0x15];
      param_1[0x14] = uVar8;
      *(undefined8 *)pcVar5 = uVar4;
    }
    else {
      *(byte *)(param_1 + 0x13) = bVar3;
      uVar4 = param_2[0x14];
      uVar8 = param_2[0x15];
      func_0x00010006c00c(uVar4,uVar8);
      param_1[0x14] = uVar4;
      param_1[0x15] = uVar8;
    }
  }
  else if (bVar3 == 2) {
    func_0x0001015fd618(pcVar5);
    uVar4 = param_2[0x15];
    uVar8 = *(undefined8 *)pbVar7;
    param_1[0x14] = param_2[0x14];
    *(undefined8 *)pcVar5 = uVar8;
    param_1[0x15] = uVar4;
  }
  else {
    *(byte *)(param_1 + 0x13) = bVar3 & 1;
    uVar4 = param_2[0x14];
    uVar9 = param_2[0x15];
    func_0x00010006c00c(uVar4,uVar9);
    uVar8 = param_1[0x14];
    uVar2 = param_1[0x15];
    param_1[0x14] = uVar4;
    param_1[0x15] = uVar9;
    func_0x00010006c090(uVar8,uVar2);
  }
  lVar6 = param_1[0x17];
  if (lVar6 == 0) {
    if (param_2[0x17] == 0) {
      uVar4 = param_2[0x16];
      uVar9 = param_2[0x19];
      uVar8 = param_2[0x18];
      param_1[0x17] = param_2[0x17];
      param_1[0x16] = uVar4;
      param_1[0x19] = uVar9;
      param_1[0x18] = uVar8;
    }
    else {
      param_1[0x16] = param_2[0x16];
      param_1[0x17] = param_2[0x17];
      uVar4 = param_2[0x18];
      uVar8 = param_2[0x19];
      func_0x000107c61434();
      func_0x00010006c00c(uVar4,uVar8);
      param_1[0x18] = uVar4;
      param_1[0x19] = uVar8;
    }
  }
  else if (param_2[0x17] == 0) {
    func_0x00010159d63c(param_1 + 0x16);
    uVar9 = param_2[0x16];
    uVar8 = param_2[0x19];
    uVar4 = param_2[0x18];
    param_1[0x17] = param_2[0x17];
    param_1[0x16] = uVar9;
    param_1[0x19] = uVar8;
    param_1[0x18] = uVar4;
  }
  else {
    param_1[0x16] = param_2[0x16];
    param_1[0x17] = param_2[0x17];
    func_0x000107c61434();
    func_0x000107c6142c(lVar6);
    uVar4 = param_2[0x18];
    uVar9 = param_2[0x19];
    func_0x00010006c00c(uVar4,uVar9);
    uVar8 = param_1[0x18];
    uVar2 = param_1[0x19];
    param_1[0x18] = uVar4;
    param_1[0x19] = uVar9;
    func_0x00010006c090(uVar8,uVar2);
  }
  pcVar5 = (char *)(param_1 + 0x1a);
  pbVar7 = (byte *)(param_2 + 0x1a);
  bVar3 = *pbVar7;
  if (*pcVar5 == '\x02') {
    if (bVar3 == 2) {
      uVar8 = param_2[0x1b];
      uVar4 = *(undefined8 *)pbVar7;
      param_1[0x1c] = param_2[0x1c];
      param_1[0x1b] = uVar8;
      *(undefined8 *)pcVar5 = uVar4;
    }
    else {
      *(byte *)(param_1 + 0x1a) = bVar3;
      uVar4 = param_2[0x1b];
      uVar8 = param_2[0x1c];
      func_0x00010006c00c(uVar4,uVar8);
      param_1[0x1b] = uVar4;
      param_1[0x1c] = uVar8;
    }
  }
  else if (bVar3 == 2) {
    func_0x0001015fd618(pcVar5);
    uVar4 = param_2[0x1c];
    uVar8 = *(undefined8 *)pbVar7;
    param_1[0x1b] = param_2[0x1b];
    *(undefined8 *)pcVar5 = uVar8;
    param_1[0x1c] = uVar4;
  }
  else {
    *(byte *)(param_1 + 0x1a) = bVar3 & 1;
    uVar4 = param_2[0x1b];
    uVar9 = param_2[0x1c];
    func_0x00010006c00c(uVar4,uVar9);
    uVar8 = param_1[0x1b];
    uVar2 = param_1[0x1c];
    param_1[0x1b] = uVar4;
    param_1[0x1c] = uVar9;
    func_0x00010006c090(uVar8,uVar2);
  }
  pcVar5 = (char *)(param_1 + 0x1d);
  pbVar7 = (byte *)(param_2 + 0x1d);
  bVar3 = *pbVar7;
  if (*pcVar5 == '\x02') {
    if (bVar3 == 2) {
      uVar8 = param_2[0x1e];
      uVar4 = *(undefined8 *)pbVar7;
      param_1[0x1f] = param_2[0x1f];
      param_1[0x1e] = uVar8;
      *(undefined8 *)pcVar5 = uVar4;
    }
    else {
      *(byte *)(param_1 + 0x1d) = bVar3;
      uVar4 = param_2[0x1e];
      uVar8 = param_2[0x1f];
      func_0x00010006c00c(uVar4,uVar8);
      param_1[0x1e] = uVar4;
      param_1[0x1f] = uVar8;
    }
  }
  else if (bVar3 == 2) {
    func_0x0001015fd618(pcVar5);
    uVar4 = param_2[0x1f];
    uVar8 = *(undefined8 *)pbVar7;
    param_1[0x1e] = param_2[0x1e];
    *(undefined8 *)pcVar5 = uVar8;
    param_1[0x1f] = uVar4;
  }
  else {
    *(byte *)(param_1 + 0x1d) = bVar3 & 1;
    uVar4 = param_2[0x1e];
    uVar9 = param_2[0x1f];
    func_0x00010006c00c(uVar4,uVar9);
    uVar8 = param_1[0x1e];
    uVar2 = param_1[0x1f];
    param_1[0x1e] = uVar4;
    param_1[0x1f] = uVar9;
    func_0x00010006c090(uVar8,uVar2);
  }
  bVar3 = *(byte *)(param_2 + 0x20);
  if (*(char *)(param_1 + 0x20) == '\x02') {
    if (bVar3 == 2) {
      uVar8 = param_2[0x21];
      uVar4 = param_2[0x20];
      param_1[0x22] = param_2[0x22];
      param_1[0x21] = uVar8;
      param_1[0x20] = uVar4;
    }
    else {
      *(byte *)(param_1 + 0x20) = bVar3;
      uVar4 = param_2[0x21];
      uVar8 = param_2[0x22];
      func_0x00010006c00c(uVar4,uVar8);
      param_1[0x21] = uVar4;
      param_1[0x22] = uVar8;
    }
  }
  else if (bVar3 == 2) {
    func_0x0001015fd618(param_1 + 0x20);
    uVar4 = param_2[0x22];
    uVar8 = param_2[0x20];
    param_1[0x21] = param_2[0x21];
    param_1[0x20] = uVar8;
    param_1[0x22] = uVar4;
  }
  else {
    *(byte *)(param_1 + 0x20) = bVar3 & 1;
    uVar4 = param_2[0x21];
    uVar9 = param_2[0x22];
    func_0x00010006c00c(uVar4,uVar9);
    uVar8 = param_1[0x21];
    uVar2 = param_1[0x22];
    param_1[0x21] = uVar4;
    param_1[0x22] = uVar9;
    func_0x00010006c090(uVar8,uVar2);
  }
  puVar1 = param_1 + 0x23;
  bVar3 = *(byte *)(param_2 + 0x23);
  if (*(char *)(param_1 + 0x23) == '\x02') {
    if (bVar3 == 2) {
      uVar8 = param_2[0x24];
      uVar4 = param_2[0x23];
      param_1[0x25] = param_2[0x25];
      param_1[0x24] = uVar8;
      *puVar1 = uVar4;
    }
    else {
      *(byte *)(param_1 + 0x23) = bVar3;
      uVar4 = param_2[0x24];
      uVar8 = param_2[0x25];
      func_0x00010006c00c(uVar4,uVar8);
      param_1[0x24] = uVar4;
      param_1[0x25] = uVar8;
    }
  }
  else if (bVar3 == 2) {
    func_0x0001015fd618(puVar1);
    uVar4 = param_2[0x25];
    uVar8 = param_2[0x23];
    param_1[0x24] = param_2[0x24];
    *puVar1 = uVar8;
    param_1[0x25] = uVar4;
  }
  else {
    *(byte *)(param_1 + 0x23) = bVar3 & 1;
    uVar4 = param_2[0x24];
    uVar9 = param_2[0x25];
    func_0x00010006c00c(uVar4,uVar9);
    uVar8 = param_1[0x24];
    uVar2 = param_1[0x25];
    param_1[0x24] = uVar4;
    param_1[0x25] = uVar9;
    func_0x00010006c090(uVar8,uVar2);
  }
  if ((ulong)param_1[0x28] >> 0x3c < 0xf) {
    if ((ulong)param_2[0x28] >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x26) = *(undefined4 *)(param_2 + 0x26);
      uVar4 = param_2[0x27];
      uVar9 = param_2[0x28];
      func_0x00010006c00c(uVar4,uVar9);
      uVar8 = param_1[0x27];
      uVar2 = param_1[0x28];
      param_1[0x27] = uVar4;
      param_1[0x28] = uVar9;
      func_0x00010006c090(uVar8,uVar2);
    }
    else {
      func_0x0001015d4290(param_1 + 0x26);
      uVar4 = param_2[0x28];
      uVar8 = param_2[0x26];
      param_1[0x27] = param_2[0x27];
      param_1[0x26] = uVar8;
      param_1[0x28] = uVar4;
    }
  }
  else if ((ulong)param_2[0x28] >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0x26) = *(undefined4 *)(param_2 + 0x26);
    uVar4 = param_2[0x27];
    uVar8 = param_2[0x28];
    func_0x00010006c00c(uVar4,uVar8);
    param_1[0x27] = uVar4;
    param_1[0x28] = uVar8;
  }
  else {
    uVar8 = param_2[0x27];
    uVar4 = param_2[0x26];
    param_1[0x28] = param_2[0x28];
    param_1[0x27] = uVar8;
    param_1[0x26] = uVar4;
  }
  return param_1;
}



/* Entry: 1035e9558; end: 1035e9643;  */

int FUN_1035e9558(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x29] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1035e9644; end: 1035e9683;  */

void FUN_1035e9644(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7d0b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbe4e3c;
  func_0x000107c61520(&DAT_10dbe4e3c,&UNK_11066b6e0);
  puRam0000000112f7d0b0 = puVar1;
  return;
}



/* Entry: 1035e9684; end: 1035e96cb;  */

void FUN_1035e9684(undefined8 *param_1)

{
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[2] = 0xc000000000000000;
  param_1[1] = 0;
  param_1[3] = 2;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[8] = 0xf000000000000000;
  param_1[0xc] = 2;
  param_1[0xb] = 0xf000000000000000;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  return;
}



/* Entry: 1035e96cc; end: 1035e9713;  */

void FUN_1035e96cc(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbe5420,0x12,2);
  uRam00000001138094f8 = uStack_38;
  uRam00000001138094f0 = uStack_40;
  uRam0000000113809508 = uStack_28;
  uRam0000000113809500 = uStack_30;
  uRam0000000113809518 = uStack_18;
  uRam0000000113809510 = uStack_20;
  return;
}



/* Entry: 1035e9714; end: 1035e97c7;  */

/* WARNING: Removing unreachable block (ram,0x0001035e97c4) */

void FUN_1035e9714(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 1) {
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x000101568c04();
        (*pcVar4)(unaff_x20 + 0x10,&UNK_110790c80,lVar1,param_2,param_3);
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}


