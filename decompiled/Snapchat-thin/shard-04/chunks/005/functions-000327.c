/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103557154; end: 103557353;  */

undefined8 FUN_103557154(undefined8 param_1)

{
  FUN_103557440(param_1,&UNK_110664848);
  return param_1;
}



/* Entry: 103557354; end: 10355743f;  */

int FUN_103557354(int *param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xf3 < param_2) && ((char)param_1[0x4a] != '\0')) {
    return *param_1 + 0xf4;
  }
  iVar1 = (*(byte *)(param_1 + 0x38) ^ 0xff) - 1;
  if (*(byte *)(param_1 + 0x38) < 0xc) {
    iVar1 = -1;
  }
  return iVar1 + 1;
}



/* Entry: 103557440; end: 10355749f;  */

void FUN_103557440(undefined8 *param_1)

{
  FUN_10355677c(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                param_1[7],param_1[8],param_1[9],param_1[10],param_1[0xb],param_1[0xc],param_1[0xd],
                param_1[0xe],param_1[0xf],param_1[0x10],param_1[0x11],param_1[0x12],param_1[0x13],
                param_1[0x14],param_1[0x15],param_1[0x16],param_1[0x17],
                *(undefined1 *)(param_1 + 0x18));
  return;
}



/* Entry: 1035574a0; end: 10355776f;  */

undefined8 * FUN_1035574a0(undefined8 *param_1,undefined8 *param_2)

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
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined1 uVar25;
  
  uVar1 = *param_2;
  uVar13 = param_2[1];
  uVar2 = param_2[2];
  uVar14 = param_2[3];
  uVar3 = param_2[4];
  uVar15 = param_2[5];
  uVar4 = param_2[6];
  uVar16 = param_2[7];
  uVar5 = param_2[8];
  uVar17 = param_2[9];
  uVar6 = param_2[10];
  uVar18 = param_2[0xb];
  uVar7 = param_2[0xc];
  uVar19 = param_2[0xd];
  uVar8 = param_2[0xe];
  uVar20 = param_2[0xf];
  uVar9 = param_2[0x10];
  uVar21 = param_2[0x11];
  uVar10 = param_2[0x12];
  uVar22 = param_2[0x13];
  uVar11 = param_2[0x14];
  uVar23 = param_2[0x15];
  uVar12 = param_2[0x16];
  uVar24 = param_2[0x17];
  uVar25 = *(undefined1 *)(param_2 + 0x18);
  FUN_1035563b0(uVar1,uVar13);
  *param_1 = uVar1;
  param_1[1] = uVar13;
  param_1[2] = uVar2;
  param_1[3] = uVar14;
  param_1[4] = uVar3;
  param_1[5] = uVar15;
  param_1[6] = uVar4;
  param_1[7] = uVar16;
  param_1[8] = uVar5;
  param_1[9] = uVar17;
  param_1[10] = uVar6;
  param_1[0xb] = uVar18;
  param_1[0xc] = uVar7;
  param_1[0xd] = uVar19;
  param_1[0xe] = uVar8;
  param_1[0xf] = uVar20;
  param_1[0x10] = uVar9;
  param_1[0x11] = uVar21;
  param_1[0x12] = uVar10;
  param_1[0x13] = uVar22;
  param_1[0x14] = uVar11;
  param_1[0x15] = uVar23;
  param_1[0x16] = uVar12;
  param_1[0x17] = uVar24;
  *(undefined1 *)(param_1 + 0x18) = uVar25;
  return param_1;
}



/* Entry: 103557770; end: 1035577b3;  */

void FUN_103557770(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  uVar4 = param_2[5];
  uVar3 = param_2[4];
  uVar5 = param_2[6];
  uVar7 = param_2[9];
  uVar6 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar5;
  param_1[9] = uVar7;
  param_1[8] = uVar6;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  uVar2 = param_2[0xb];
  uVar1 = param_2[10];
  uVar4 = param_2[0xd];
  uVar3 = param_2[0xc];
  uVar5 = param_2[0xe];
  uVar7 = param_2[0x11];
  uVar6 = param_2[0x10];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar5;
  param_1[0x11] = uVar7;
  param_1[0x10] = uVar6;
  param_1[0xb] = uVar2;
  param_1[10] = uVar1;
  param_1[0xd] = uVar4;
  param_1[0xc] = uVar3;
  uVar2 = param_2[0x13];
  uVar1 = param_2[0x12];
  uVar4 = param_2[0x15];
  uVar3 = param_2[0x14];
  uVar6 = param_2[0x17];
  uVar5 = param_2[0x16];
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  param_1[0x15] = uVar4;
  param_1[0x14] = uVar3;
  param_1[0x17] = uVar6;
  param_1[0x16] = uVar5;
  param_1[0x13] = uVar2;
  param_1[0x12] = uVar1;
  return;
}



/* Entry: 1035577b4; end: 10355785f;  */

undefined8 * FUN_1035577b4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  
  uVar9 = *(undefined1 *)(param_2 + 0x18);
  uVar11 = *param_1;
  uVar1 = param_1[1];
  uVar5 = param_1[2];
  uVar2 = param_1[3];
  uVar6 = param_1[4];
  uVar3 = param_1[5];
  uVar7 = param_1[6];
  uVar12 = param_1[7];
  uVar14 = param_1[9];
  uVar13 = param_1[8];
  uVar16 = param_1[0xb];
  uVar15 = param_1[10];
  uVar18 = param_1[0xd];
  uVar17 = param_1[0xc];
  uVar20 = param_1[0xf];
  uVar19 = param_1[0xe];
  uVar22 = param_1[0x11];
  uVar21 = param_1[0x10];
  uVar24 = param_1[0x13];
  uVar23 = param_1[0x12];
  uVar26 = param_1[0x15];
  uVar25 = param_1[0x14];
  uVar4 = param_1[0x16];
  uVar8 = param_1[0x17];
  uVar10 = *(undefined1 *)(param_1 + 0x18);
  uVar27 = *param_2;
  uVar29 = param_2[3];
  uVar28 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar27;
  param_1[3] = uVar29;
  param_1[2] = uVar28;
  uVar27 = param_2[4];
  uVar29 = param_2[7];
  uVar28 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar27;
  param_1[7] = uVar29;
  param_1[6] = uVar28;
  uVar27 = param_2[8];
  uVar29 = param_2[0xb];
  uVar28 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar27;
  param_1[0xb] = uVar29;
  param_1[10] = uVar28;
  uVar27 = param_2[0xc];
  uVar29 = param_2[0xf];
  uVar28 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar27;
  param_1[0xf] = uVar29;
  param_1[0xe] = uVar28;
  uVar27 = param_2[0x10];
  uVar29 = param_2[0x13];
  uVar28 = param_2[0x12];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar27;
  param_1[0x13] = uVar29;
  param_1[0x12] = uVar28;
  uVar27 = param_2[0x14];
  uVar29 = param_2[0x17];
  uVar28 = param_2[0x16];
  param_1[0x15] = param_2[0x15];
  param_1[0x14] = uVar27;
  param_1[0x17] = uVar29;
  param_1[0x16] = uVar28;
  *(undefined1 *)(param_1 + 0x18) = uVar9;
  FUN_10355677c(uVar11,uVar1,uVar5,uVar2,uVar6,uVar3,uVar7,uVar12,uVar13,uVar14,uVar15,uVar16,uVar17
                ,uVar18,uVar19,uVar20,uVar21,uVar22,uVar23,uVar24,uVar25,uVar26,uVar4,uVar8,uVar10);
  return param_1;
}



/* Entry: 103557860; end: 103557943;  */

int FUN_103557860(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xf4 < param_2) && (*(char *)((long)param_1 + 0xc1) != '\0')) {
    return *param_1 + 0xf5;
  }
  uVar1 = *(byte *)(param_1 + 0x30) ^ 0xff;
  if (*(byte *)(param_1 + 0x30) < 0xc) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103557944; end: 103557aaf;  */

/* WARNING: Possible PIC construction at 0x000103557980: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035579a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035579d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035579fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103557a24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103557a50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103557a80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103557984) */
/* WARNING: Removing unreachable block (ram,0x000103557990) */
/* WARNING: Removing unreachable block (ram,0x000103557998) */
/* WARNING: Removing unreachable block (ram,0x0001035579ac) */
/* WARNING: Removing unreachable block (ram,0x0001035579b8) */
/* WARNING: Removing unreachable block (ram,0x0001035579c0) */
/* WARNING: Removing unreachable block (ram,0x0001035579d8) */
/* WARNING: Removing unreachable block (ram,0x0001035579e4) */
/* WARNING: Removing unreachable block (ram,0x0001035579ec) */
/* WARNING: Removing unreachable block (ram,0x000103557a00) */
/* WARNING: Removing unreachable block (ram,0x000103557a0c) */
/* WARNING: Removing unreachable block (ram,0x000103557a14) */
/* WARNING: Removing unreachable block (ram,0x000103557a28) */
/* WARNING: Removing unreachable block (ram,0x000103557a34) */
/* WARNING: Removing unreachable block (ram,0x000103557a3c) */
/* WARNING: Removing unreachable block (ram,0x000103557a54) */
/* WARNING: Removing unreachable block (ram,0x000103557a64) */
/* WARNING: Removing unreachable block (ram,0x000103557a6c) */
/* WARNING: Removing unreachable block (ram,0x000103557a84) */
/* WARNING: Removing unreachable block (ram,0x000103557aa0) */
/* WARNING: Removing unreachable block (ram,0x000103557a94) */
/* WARNING: Removing unreachable block (ram,0x000103557a7c) */
/* WARNING: Removing unreachable block (ram,0x000103557a4c) */
/* WARNING: Removing unreachable block (ram,0x000103557a20) */
/* WARNING: Removing unreachable block (ram,0x0001035579f8) */
/* WARNING: Removing unreachable block (ram,0x0001035579d0) */
/* WARNING: Removing unreachable block (ram,0x0001035579a4) */

void FUN_103557944(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  if (((param_1[1] ^ 0xffffffffffffffff) & 0x3000000000000000) != 0 ||
      (param_1[2] & 0xf000000000000007) != 0xf000000000000007) {
    func_0x000103555434(*param_1);
  }
  uVar1 = param_1[4];
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    func_0x000107c61574(param_1[3]);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 103557ab0; end: 10355874f;  */

undefined8 * FUN_103557ab0(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  char cVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar4 = param_2[1];
  uVar1 = param_2[2];
  if (((uVar4 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0 &&
      (uVar1 & 0xf000000000000007) == 0xf000000000000007) {
    uVar5 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar5;
    param_1[2] = param_2[2];
  }
  else {
    uVar5 = *param_2;
    FUN_1035553e0(uVar5,uVar4,uVar1);
    *param_1 = uVar5;
    param_1[1] = uVar4;
    param_1[2] = uVar1;
  }
  uVar5 = param_2[3];
  uVar2 = param_2[4];
  func_0x00010006c00c(uVar5,uVar2);
  param_1[3] = uVar5;
  param_1[4] = uVar2;
  cVar3 = *(char *)(param_2 + 5);
  if (cVar3 == '\x02') {
    uVar5 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar5;
    param_1[7] = param_2[7];
  }
  else {
    *(char *)(param_1 + 5) = cVar3;
    uVar5 = param_2[6];
    uVar2 = param_2[7];
    func_0x00010006c00c(uVar5,uVar2);
    param_1[6] = uVar5;
    param_1[7] = uVar2;
  }
  cVar3 = *(char *)(param_2 + 8);
  if (cVar3 == '\x02') {
    uVar5 = param_2[8];
    param_1[9] = param_2[9];
    param_1[8] = uVar5;
    param_1[10] = param_2[10];
  }
  else {
    *(char *)(param_1 + 8) = cVar3;
    uVar5 = param_2[9];
    uVar2 = param_2[10];
    func_0x00010006c00c(uVar5,uVar2);
    param_1[9] = uVar5;
    param_1[10] = uVar2;
  }
  cVar3 = *(char *)(param_2 + 0xb);
  if (cVar3 == '\x02') {
    uVar5 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar5;
    param_1[0xd] = param_2[0xd];
  }
  else {
    *(char *)(param_1 + 0xb) = cVar3;
    uVar5 = param_2[0xc];
    uVar2 = param_2[0xd];
    func_0x00010006c00c(uVar5,uVar2);
    param_1[0xc] = uVar5;
    param_1[0xd] = uVar2;
  }
  uVar4 = param_2[0x10];
  if (uVar4 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
    uVar5 = param_2[0xf];
    func_0x00010006c00c(uVar5,uVar4);
    param_1[0xf] = uVar5;
    param_1[0x10] = uVar4;
  }
  else {
    uVar5 = param_2[0xe];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar5;
    param_1[0x10] = param_2[0x10];
  }
  cVar3 = *(char *)(param_2 + 0x11);
  if (cVar3 == '\x02') {
    uVar5 = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    param_1[0x11] = uVar5;
    param_1[0x13] = param_2[0x13];
  }
  else {
    *(char *)(param_1 + 0x11) = cVar3;
    uVar5 = param_2[0x12];
    uVar2 = param_2[0x13];
    func_0x00010006c00c(uVar5,uVar2);
    param_1[0x12] = uVar5;
    param_1[0x13] = uVar2;
  }
  cVar3 = *(char *)(param_2 + 0x14);
  if (cVar3 == '\x02') {
    uVar5 = param_2[0x14];
    param_1[0x15] = param_2[0x15];
    param_1[0x14] = uVar5;
    param_1[0x16] = param_2[0x16];
  }
  else {
    *(char *)(param_1 + 0x14) = cVar3;
    uVar5 = param_2[0x15];
    uVar2 = param_2[0x16];
    func_0x00010006c00c(uVar5,uVar2);
    param_1[0x15] = uVar5;
    param_1[0x16] = uVar2;
  }
  cVar3 = *(char *)(param_2 + 0x17);
  if (cVar3 == '\x02') {
    uVar5 = param_2[0x17];
    param_1[0x18] = param_2[0x18];
    param_1[0x17] = uVar5;
    param_1[0x19] = param_2[0x19];
  }
  else {
    *(char *)(param_1 + 0x17) = cVar3;
    uVar5 = param_2[0x18];
    uVar2 = param_2[0x19];
    func_0x00010006c00c(uVar5,uVar2);
    param_1[0x18] = uVar5;
    param_1[0x19] = uVar2;
  }
  cVar3 = *(char *)(param_2 + 0x1a);
  if (cVar3 == '\x02') {
    uVar5 = param_2[0x1a];
    param_1[0x1b] = param_2[0x1b];
    param_1[0x1a] = uVar5;
    param_1[0x1c] = param_2[0x1c];
  }
  else {
    *(char *)(param_1 + 0x1a) = cVar3;
    uVar5 = param_2[0x1b];
    uVar2 = param_2[0x1c];
    func_0x00010006c00c(uVar5,uVar2);
    param_1[0x1b] = uVar5;
    param_1[0x1c] = uVar2;
  }
  cVar3 = *(char *)(param_2 + 0x1d);
  if (cVar3 == '\x02') {
    uVar5 = param_2[0x1d];
    param_1[0x1e] = param_2[0x1e];
    param_1[0x1d] = uVar5;
    param_1[0x1f] = param_2[0x1f];
  }
  else {
    *(char *)(param_1 + 0x1d) = cVar3;
    uVar5 = param_2[0x1e];
    uVar2 = param_2[0x1f];
    func_0x00010006c00c(uVar5,uVar2);
    param_1[0x1e] = uVar5;
    param_1[0x1f] = uVar2;
  }
  uVar4 = param_2[0x22];
  if (uVar4 >> 0x3c < 0xf) {
    uVar5 = param_2[0x21];
    param_1[0x20] = param_2[0x20];
    func_0x00010006c00c(uVar5,uVar4);
    param_1[0x21] = uVar5;
    param_1[0x22] = uVar4;
  }
  else {
    uVar5 = param_2[0x20];
    param_1[0x21] = param_2[0x21];
    param_1[0x20] = uVar5;
    param_1[0x22] = param_2[0x22];
  }
  uVar4 = param_2[0x25];
  if (uVar4 >> 0x3c < 0xf) {
    uVar5 = param_2[0x24];
    param_1[0x23] = param_2[0x23];
    func_0x00010006c00c(uVar5,uVar4);
    param_1[0x24] = uVar5;
    param_1[0x25] = uVar4;
  }
  else {
    uVar5 = param_2[0x23];
    param_1[0x24] = param_2[0x24];
    param_1[0x23] = uVar5;
    param_1[0x25] = param_2[0x25];
  }
  uVar4 = param_2[0x28];
  if (uVar4 >> 0x3c < 0xf) {
    uVar5 = param_2[0x27];
    param_1[0x26] = param_2[0x26];
    func_0x00010006c00c(uVar5,uVar4);
    param_1[0x27] = uVar5;
    param_1[0x28] = uVar4;
  }
  else {
    uVar5 = param_2[0x26];
    param_1[0x27] = param_2[0x27];
    param_1[0x26] = uVar5;
    param_1[0x28] = param_2[0x28];
  }
  uVar4 = param_2[0x2b];
  if (uVar4 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0x29) = *(undefined4 *)(param_2 + 0x29);
    uVar5 = param_2[0x2a];
    func_0x00010006c00c(uVar5,uVar4);
    param_1[0x2a] = uVar5;
    param_1[0x2b] = uVar4;
  }
  else {
    uVar5 = param_2[0x29];
    param_1[0x2a] = param_2[0x2a];
    param_1[0x29] = uVar5;
    param_1[0x2b] = param_2[0x2b];
  }
  return param_1;
}



/* Entry: 103558750; end: 103558757;  */

void FUN_103558750(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_1,param_2,0x160);
  return;
}



/* Entry: 103558758; end: 103558c23;  */

undefined8 * FUN_103558758(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (((param_1[1] ^ 0xffffffffffffffff) & 0x3000000000000000) == 0 &&
      (param_1[2] & 0xf000000000000007) == 0xf000000000000007) {
LAB_1035587c8:
    uVar3 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar3;
    param_1[2] = param_2[2];
  }
  else {
    uVar4 = param_2[1];
    uVar2 = param_2[2];
    if (((uVar4 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0 &&
        (uVar2 & 0xf000000000000007) == 0xf000000000000007) {
      func_0x000100d55bdc(param_1);
      goto LAB_1035587c8;
    }
    uVar3 = *param_1;
    *param_1 = *param_2;
    param_1[1] = uVar4;
    param_1[2] = uVar2;
    func_0x000103555434(uVar3);
  }
  uVar3 = param_1[3];
  uVar7 = param_1[4];
  uVar6 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar6;
  func_0x00010006c090(uVar3,uVar7);
  pcVar5 = (char *)(param_1 + 5);
  if (*pcVar5 == '\x02') {
LAB_10355880c:
    uVar3 = param_2[5];
    param_1[6] = param_2[6];
    *(undefined8 *)pcVar5 = uVar3;
    param_1[7] = param_2[7];
  }
  else {
    if (*(byte *)(param_2 + 5) == 2) {
      func_0x0001015fd618(pcVar5);
      goto LAB_10355880c;
    }
    *(byte *)(param_1 + 5) = *(byte *)(param_2 + 5) & 1;
    uVar3 = param_1[6];
    uVar7 = param_1[7];
    uVar6 = param_2[6];
    param_1[7] = param_2[7];
    param_1[6] = uVar6;
    func_0x00010006c090(uVar3,uVar7);
  }
  pcVar5 = (char *)(param_1 + 8);
  if (*pcVar5 == '\x02') {
LAB_10355885c:
    uVar3 = param_2[8];
    param_1[9] = param_2[9];
    *(undefined8 *)pcVar5 = uVar3;
    param_1[10] = param_2[10];
  }
  else {
    if (*(byte *)(param_2 + 8) == 2) {
      func_0x0001015fd618(pcVar5);
      goto LAB_10355885c;
    }
    *(byte *)(param_1 + 8) = *(byte *)(param_2 + 8) & 1;
    uVar3 = param_1[9];
    uVar7 = param_1[10];
    uVar6 = param_2[9];
    param_1[10] = param_2[10];
    param_1[9] = uVar6;
    func_0x00010006c090(uVar3,uVar7);
  }
  pcVar5 = (char *)(param_1 + 0xb);
  if (*pcVar5 == '\x02') {
LAB_1035588ac:
    uVar3 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    *(undefined8 *)pcVar5 = uVar3;
    param_1[0xd] = param_2[0xd];
  }
  else {
    if (*(byte *)(param_2 + 0xb) == 2) {
      func_0x0001015fd618(pcVar5);
      goto LAB_1035588ac;
    }
    *(byte *)(param_1 + 0xb) = *(byte *)(param_2 + 0xb) & 1;
    uVar3 = param_1[0xc];
    uVar7 = param_1[0xd];
    uVar6 = param_2[0xc];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar6;
    func_0x00010006c090(uVar3,uVar7);
  }
  if ((ulong)param_1[0x10] >> 0x3c < 0xf) {
    uVar4 = param_2[0x10];
    if (0xe < uVar4 >> 0x3c) {
      func_0x000101599dcc(param_1 + 0xe);
      goto LAB_103558900;
    }
    *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
    uVar3 = param_1[0xf];
    param_1[0xf] = param_2[0xf];
    param_1[0x10] = uVar4;
    func_0x00010006c090(uVar3);
  }
  else {
LAB_103558900:
    uVar3 = param_2[0xe];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar3;
    param_1[0x10] = param_2[0x10];
  }
  pcVar5 = (char *)(param_1 + 0x11);
  if (*pcVar5 == '\x02') {
LAB_103558950:
    uVar3 = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    *(undefined8 *)pcVar5 = uVar3;
    param_1[0x13] = param_2[0x13];
  }
  else {
    if (*(byte *)(param_2 + 0x11) == 2) {
      func_0x0001015fd618(pcVar5);
      goto LAB_103558950;
    }
    *(byte *)(param_1 + 0x11) = *(byte *)(param_2 + 0x11) & 1;
    uVar3 = param_1[0x12];
    uVar7 = param_1[0x13];
    uVar6 = param_2[0x12];
    param_1[0x13] = param_2[0x13];
    param_1[0x12] = uVar6;
    func_0x00010006c090(uVar3,uVar7);
  }
  pcVar5 = (char *)(param_1 + 0x14);
  if (*pcVar5 == '\x02') {
LAB_1035589a0:
    uVar3 = param_2[0x14];
    param_1[0x15] = param_2[0x15];
    *(undefined8 *)pcVar5 = uVar3;
    param_1[0x16] = param_2[0x16];
  }
  else {
    if (*(byte *)(param_2 + 0x14) == 2) {
      func_0x0001015fd618(pcVar5);
      goto LAB_1035589a0;
    }
    *(byte *)(param_1 + 0x14) = *(byte *)(param_2 + 0x14) & 1;
    uVar3 = param_1[0x15];
    uVar7 = param_1[0x16];
    uVar6 = param_2[0x15];
    param_1[0x16] = param_2[0x16];
    param_1[0x15] = uVar6;
    func_0x00010006c090(uVar3,uVar7);
  }
  pcVar5 = (char *)(param_1 + 0x17);
  if (*pcVar5 == '\x02') {
LAB_1035589f0:
    uVar3 = param_2[0x17];
    param_1[0x18] = param_2[0x18];
    *(undefined8 *)pcVar5 = uVar3;
    param_1[0x19] = param_2[0x19];
  }
  else {
    if (*(byte *)(param_2 + 0x17) == 2) {
      func_0x0001015fd618(pcVar5);
      goto LAB_1035589f0;
    }
    *(byte *)(param_1 + 0x17) = *(byte *)(param_2 + 0x17) & 1;
    uVar3 = param_1[0x18];
    uVar7 = param_1[0x19];
    uVar6 = param_2[0x18];
    param_1[0x19] = param_2[0x19];
    param_1[0x18] = uVar6;
    func_0x00010006c090(uVar3,uVar7);
  }
  pcVar5 = (char *)(param_1 + 0x1a);
  if (*pcVar5 == '\x02') {
LAB_103558a40:
    uVar3 = param_2[0x1a];
    param_1[0x1b] = param_2[0x1b];
    *(undefined8 *)pcVar5 = uVar3;
    param_1[0x1c] = param_2[0x1c];
  }
  else {
    if (*(byte *)(param_2 + 0x1a) == 2) {
      func_0x0001015fd618(pcVar5);
      goto LAB_103558a40;
    }
    *(byte *)(param_1 + 0x1a) = *(byte *)(param_2 + 0x1a) & 1;
    uVar3 = param_1[0x1b];
    uVar7 = param_1[0x1c];
    uVar6 = param_2[0x1b];
    param_1[0x1c] = param_2[0x1c];
    param_1[0x1b] = uVar6;
    func_0x00010006c090(uVar3,uVar7);
  }
  pcVar5 = (char *)(param_1 + 0x1d);
  if (*pcVar5 == '\x02') {
LAB_103558a90:
    uVar3 = param_2[0x1d];
    param_1[0x1e] = param_2[0x1e];
    *(undefined8 *)pcVar5 = uVar3;
    param_1[0x1f] = param_2[0x1f];
  }
  else {
    if (*(byte *)(param_2 + 0x1d) == 2) {
      func_0x0001015fd618(pcVar5);
      goto LAB_103558a90;
    }
    *(byte *)(param_1 + 0x1d) = *(byte *)(param_2 + 0x1d) & 1;
    uVar3 = param_1[0x1e];
    uVar7 = param_1[0x1f];
    uVar6 = param_2[0x1e];
    param_1[0x1f] = param_2[0x1f];
    param_1[0x1e] = uVar6;
    func_0x00010006c090(uVar3,uVar7);
  }
  if ((ulong)param_1[0x22] >> 0x3c < 0xf) {
    uVar4 = param_2[0x22];
    if (0xe < uVar4 >> 0x3c) {
      func_0x00010159d670(param_1 + 0x20);
      goto LAB_103558ae4;
    }
    uVar3 = param_1[0x21];
    uVar7 = param_2[0x20];
    param_1[0x21] = param_2[0x21];
    param_1[0x20] = uVar7;
    param_1[0x22] = uVar4;
    func_0x00010006c090(uVar3);
  }
  else {
LAB_103558ae4:
    uVar3 = param_2[0x20];
    param_1[0x21] = param_2[0x21];
    param_1[0x20] = uVar3;
    param_1[0x22] = param_2[0x22];
  }
  puVar1 = param_1 + 0x23;
  if ((ulong)param_1[0x25] >> 0x3c < 0xf) {
    uVar4 = param_2[0x25];
    if (0xe < uVar4 >> 0x3c) {
      func_0x00010159d670(puVar1);
      goto LAB_103558b3c;
    }
    uVar3 = param_1[0x24];
    uVar7 = param_2[0x23];
    param_1[0x24] = param_2[0x24];
    *puVar1 = uVar7;
    param_1[0x25] = uVar4;
    func_0x00010006c090(uVar3);
  }
  else {
LAB_103558b3c:
    uVar3 = param_2[0x23];
    param_1[0x24] = param_2[0x24];
    *puVar1 = uVar3;
    param_1[0x25] = param_2[0x25];
  }
  if ((ulong)param_1[0x28] >> 0x3c < 0xf) {
    uVar4 = param_2[0x28];
    if (uVar4 >> 0x3c < 0xf) {
      uVar3 = param_1[0x27];
      uVar7 = param_2[0x26];
      param_1[0x27] = param_2[0x27];
      param_1[0x26] = uVar7;
      param_1[0x28] = uVar4;
      func_0x00010006c090(uVar3);
      goto LAB_103558bb4;
    }
    func_0x00010159d670(param_1 + 0x26);
  }
  uVar3 = param_2[0x26];
  param_1[0x27] = param_2[0x27];
  param_1[0x26] = uVar3;
  param_1[0x28] = param_2[0x28];
LAB_103558bb4:
  if ((ulong)param_1[0x2b] >> 0x3c < 0xf) {
    uVar4 = param_2[0x2b];
    if (uVar4 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x29) = *(undefined4 *)(param_2 + 0x29);
      uVar3 = param_1[0x2a];
      param_1[0x2a] = param_2[0x2a];
      param_1[0x2b] = uVar4;
      func_0x00010006c090(uVar3);
      return param_1;
    }
    func_0x000101599dcc(param_1 + 0x29);
  }
  uVar3 = param_2[0x29];
  param_1[0x2a] = param_2[0x2a];
  param_1[0x29] = uVar3;
  param_1[0x2b] = param_2[0x2b];
  return param_1;
}



/* Entry: 103558c24; end: 103558d5b;  */

int FUN_103558c24(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x1fc < param_2) && ((char)param_1[0x58] != '\0')) {
    return *param_1 + 0x1fd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
  uVar1 = uVar1 >> 0x1e |
          ((uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x3c) & 3 |
           ((uint)*(undefined8 *)(param_1 + 4) & 7) << 2 | uVar1 >> 0x17 & 0x60) << 2;
  iVar2 = 0x1fe - uVar1;
  if (0x1fc < (uVar1 ^ 0x1ff)) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103558d5c; end: 103558da3;  */

undefined8 * FUN_103558d5c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  FUN_1035553e0(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  return param_1;
}



/* Entry: 103558da4; end: 103558db3;  */

undefined1  [16] FUN_103558da4(void)

{
  return ZEXT816(0x110664990);
}



/* Entry: 103558db4; end: 103558e33;  */

/* WARNING: Possible PIC construction at 0x000103558df0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103558df4) */
/* WARNING: Removing unreachable block (ram,0x000103558e00) */
/* WARNING: Removing unreachable block (ram,0x000103558e08) */
/* WARNING: Removing unreachable block (ram,0x000103558e24) */
/* WARNING: Removing unreachable block (ram,0x000103558e18) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103558db4(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  if (((param_1[1] ^ 0xffffffffffffffff) & 0x3000000000000000) != 0 ||
      (param_1[2] & 0xf000000000000007) != 0xf000000000000007) {
    func_0x000103555434(*param_1);
  }
  uVar1 = param_1[3];
  uVar2 = (uint)((ulong)param_1[4] >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = param_1[4] & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 103558e34; end: 103559183;  */

undefined8 * FUN_103558e34(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  char cVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar4 = param_2[1];
  uVar1 = param_2[2];
  if (((uVar4 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0 &&
      (uVar1 & 0xf000000000000007) == 0xf000000000000007) {
    uVar5 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar5;
    param_1[2] = param_2[2];
  }
  else {
    uVar5 = *param_2;
    FUN_1035553e0(uVar5,uVar4,uVar1);
    *param_1 = uVar5;
    param_1[1] = uVar4;
    param_1[2] = uVar1;
  }
  uVar5 = param_2[3];
  uVar2 = param_2[4];
  func_0x00010006c00c(uVar5,uVar2);
  param_1[3] = uVar5;
  param_1[4] = uVar2;
  cVar3 = *(char *)(param_2 + 5);
  if (cVar3 == '\x02') {
    uVar5 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar5;
    param_1[7] = param_2[7];
  }
  else {
    *(char *)(param_1 + 5) = cVar3;
    uVar5 = param_2[6];
    uVar2 = param_2[7];
    func_0x00010006c00c(uVar5,uVar2);
    param_1[6] = uVar5;
    param_1[7] = uVar2;
  }
  uVar4 = param_2[10];
  if (uVar4 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    uVar5 = param_2[9];
    func_0x00010006c00c(uVar5,uVar4);
    param_1[9] = uVar5;
    param_1[10] = uVar4;
  }
  else {
    uVar5 = param_2[8];
    param_1[9] = param_2[9];
    param_1[8] = uVar5;
    param_1[10] = param_2[10];
  }
  return param_1;
}



/* Entry: 103559184; end: 1035592cb;  */

undefined8 * FUN_103559184(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  char *pcVar5;
  undefined8 uVar6;
  
  if (((param_1[1] ^ 0xffffffffffffffff) & 0x3000000000000000) == 0 &&
      (param_1[2] & 0xf000000000000007) == 0xf000000000000007) {
LAB_1035591f4:
    uVar3 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar3;
    param_1[2] = param_2[2];
  }
  else {
    uVar4 = param_2[1];
    uVar1 = param_2[2];
    if (((uVar4 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0 &&
        (uVar1 & 0xf000000000000007) == 0xf000000000000007) {
      func_0x000100d55bdc(param_1);
      goto LAB_1035591f4;
    }
    uVar3 = *param_1;
    *param_1 = *param_2;
    param_1[1] = uVar4;
    param_1[2] = uVar1;
    func_0x000103555434(uVar3);
  }
  uVar3 = param_1[3];
  uVar2 = param_1[4];
  uVar6 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar6;
  func_0x00010006c090(uVar3,uVar2);
  pcVar5 = (char *)(param_1 + 5);
  if (*pcVar5 != '\x02') {
    if (*(byte *)(param_2 + 5) != 2) {
      *(byte *)(param_1 + 5) = *(byte *)(param_2 + 5) & 1;
      uVar3 = param_1[6];
      uVar2 = param_1[7];
      uVar6 = param_2[6];
      param_1[7] = param_2[7];
      param_1[6] = uVar6;
      func_0x00010006c090(uVar3,uVar2);
      goto LAB_103559264;
    }
    func_0x0001015fd618(pcVar5);
  }
  uVar3 = param_2[5];
  param_1[6] = param_2[6];
  *(undefined8 *)pcVar5 = uVar3;
  param_1[7] = param_2[7];
LAB_103559264:
  if ((ulong)param_1[10] >> 0x3c < 0xf) {
    uVar4 = param_2[10];
    if (uVar4 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
      uVar3 = param_1[9];
      param_1[9] = param_2[9];
      param_1[10] = uVar4;
      func_0x00010006c090(uVar3);
      return param_1;
    }
    func_0x000101599dcc(param_1 + 8);
  }
  uVar3 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar3;
  param_1[10] = param_2[10];
  return param_1;
}



/* Entry: 1035592cc; end: 1035593bb;  */

int FUN_1035592cc(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x1fc < param_2) && ((char)param_1[0x16] != '\0')) {
    return *param_1 + 0x1fd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
  uVar1 = uVar1 >> 0x1e |
          ((uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x3c) & 3 |
           ((uint)*(undefined8 *)(param_1 + 4) & 7) << 2 | uVar1 >> 0x17 & 0x60) << 2;
  iVar2 = 0x1fe - uVar1;
  if (0x1fc < (uVar1 ^ 0x1ff)) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1035593bc; end: 10355940f;  */

undefined8 * FUN_1035593bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar6 = param_2[2];
  FUN_1035553e0(uVar1,uVar3,uVar6);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  uVar5 = param_1[2];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar6;
  func_0x000103555434(uVar2,uVar4,uVar5);
  return param_1;
}



/* Entry: 103559410; end: 10355944f;  */

undefined8 * FUN_103559410(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = param_2[2];
  uVar3 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  param_1[2] = uVar4;
  func_0x000103555434(uVar3,uVar1,uVar2);
  return param_1;
}



/* Entry: 103559450; end: 103559523;  */

int FUN_103559450(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x1fd < param_2) && ((char)param_1[6] != '\0')) {
    return *param_1 + 0x1fe;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
  uVar1 = (uVar1 >> 0x1e |
          ((uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x3c) & 3 |
           ((uint)*(undefined8 *)(param_1 + 4) & 7) << 2 | uVar1 >> 0x17 & 0x60) << 2) ^ 0x1ff;
  if (0x1fc < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103559524; end: 10355957f;  */

/* WARNING: Possible PIC construction at 0x00010355953c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103559540) */
/* WARNING: Removing unreachable block (ram,0x000103559550) */
/* WARNING: Removing unreachable block (ram,0x000103559558) */
/* WARNING: Removing unreachable block (ram,0x000103559570) */
/* WARNING: Removing unreachable block (ram,0x000103559564) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103559524(ulong *param_1)

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



/* Entry: 103559580; end: 10355989f;  */

undefined8 * FUN_103559580(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  uVar1 = param_2[1];
  func_0x00010006c00c(uVar4,uVar1);
  *param_1 = uVar4;
  param_1[1] = uVar1;
  uVar3 = param_2[4];
  if (uVar3 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    uVar4 = param_2[3];
    func_0x00010006c00c(uVar4,uVar3);
    param_1[3] = uVar4;
    param_1[4] = uVar3;
  }
  else {
    uVar4 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = uVar4;
    param_1[4] = param_2[4];
  }
  cVar2 = *(char *)(param_2 + 5);
  if (cVar2 == '\x02') {
    uVar4 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar4;
    param_1[7] = param_2[7];
  }
  else {
    *(char *)(param_1 + 5) = cVar2;
    uVar4 = param_2[6];
    uVar1 = param_2[7];
    func_0x00010006c00c(uVar4,uVar1);
    param_1[6] = uVar4;
    param_1[7] = uVar1;
  }
  return param_1;
}



/* Entry: 1035598a0; end: 103559963;  */

int FUN_1035598a0(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + 0xfe;
  }
  uVar1 = 0xfffffffe;
  if (1 < *(byte *)(param_1 + 10)) {
    uVar1 = (*(byte *)(param_1 + 10) + 0x7ffffffe & 0x7fffffff) - 1;
  }
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103559964; end: 103559a13;  */

/* WARNING: Possible PIC construction at 0x0001035599dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035599e0) */
/* WARNING: Removing unreachable block (ram,0x000100d55b58) */
/* WARNING: Removing unreachable block (ram,0x000100d55b68) */
/* WARNING: Removing unreachable block (ram,0x000100d55b64) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103559964(undefined8 param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5)

{
  uint uVar1;
  
  if ((((param_2 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
     ((param_3 & 0xf000000000000007) == 0xb000000000000007)) {
    return;
  }
  func_0x000100d55b74();
  uVar1 = (uint)(param_5 >> 0x3e);
  if (uVar1 == 1) {
    param_4 = param_5 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_4);
  return;
}



/* Entry: 103559a14; end: 103559a83;  */

/* WARNING: Possible PIC construction at 0x000103559a50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103559a54) */
/* WARNING: Removing unreachable block (ram,0x000101556278) */
/* WARNING: Removing unreachable block (ram,0x000101556288) */
/* WARNING: Removing unreachable block (ram,0x000101556284) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103559a14(ulong param_1,ulong param_2)

{
  char in_w5;
  uint uVar1;
  
  if (in_w5 == '\x03') {
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



/* Entry: 103559a84; end: 103559bc3;  */

void FUN_103559a84(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f77df0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbda1cc;
  func_0x000107c61520(&DAT_10dbda1cc,&UNK_110664b20);
  puRam0000000112f77df0 = puVar1;
  return;
}



/* Entry: 103559bc4; end: 103559c2f;  */

void FUN_103559bc4(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    func_0x00010006c090();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_3);
    return;
  }
  return;
}



/* Entry: 103559c30; end: 103559c6f;  */

void FUN_103559c30(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f77e40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbe8908;
  func_0x000107c61520(&DAT_10dbe8908,&UNK_11066ffa0);
  puRam0000000112f77e40 = puVar1;
  return;
}



/* Entry: 103559c70; end: 103559cb7;  */

undefined8 FUN_103559c70(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 103559cb8; end: 103559d3f;  */

void FUN_103559cb8(long param_1,long param_2)

{
  *(ulong *)(param_1 + 8) = *(ulong *)(param_1 + 8) & 0xcfffffffffffffff;
  *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) & 0xffffffffffffff8 | param_2 << 0x3e;
  return;
}



/* Entry: 103559d40; end: 103559d6f;  */

void FUN_103559d40(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  FUN_10355a024();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 103559d70; end: 103559d7b;  */

undefined1  [16] FUN_103559d70(void)

{
  unkuint9 *unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._9_7_ = 0;
  auVar1._0_9_ = *unaff_x20;
  return auVar1;
}



/* Entry: 103559d7c; end: 103559ee7;  */

void FUN_103559d7c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f78030;
  func_0x0001000285a8(0x112f78030,&UNK_10dbda900);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 103559ee8; end: 103559f3b;  */

bool FUN_103559ee8(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  lVar3 = *param_2;
  lVar1 = param_2[1];
  func_0x000103559d2c(lVar2,(char)param_1[1]);
  func_0x000103559d2c(lVar3,(char)lVar1);
  return lVar2 == lVar3;
}



/* Entry: 103559f3c; end: 103559f83;  */

void FUN_103559f3c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbdaa60,0x168,2);
  uRam0000000113808618 = uStack_38;
  uRam0000000113808610 = uStack_40;
  uRam0000000113808628 = uStack_28;
  uRam0000000113808620 = uStack_30;
  uRam0000000113808638 = uStack_18;
  uRam0000000113808630 = uStack_20;
  return;
}



/* Entry: 103559f84; end: 10355a023;  */

/* WARNING: Possible PIC construction at 0x000103559fd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103559fe0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103559fd4) */
/* WARNING: Removing unreachable block (ram,0x000103559fe4) */

void FUN_103559f84(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f78038 != -1) {
    func_0x000107c61568(0x112f78038,FUN_103559f3c);
  }
  uVar5 = uRam0000000113808638;
  uVar4 = uRam0000000113808630;
  uVar3 = uRam0000000113808628;
  uVar2 = uRam0000000113808620;
  uVar1 = uRam0000000113808618;
  *param_1 = uRam0000000113808610;
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



/* Entry: 10355a024; end: 10355a02f;  */

void FUN_10355a024(void)

{
  return;
}



/* Entry: 10355a030; end: 10355a05b;  */

void FUN_10355a030(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10355a05c();
  *(long *)(param_1 + 8) = lVar1;
  func_0x00010355a09c();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10355a05c; end: 10355a0db;  */

void FUN_10355a05c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f78040 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbda9a0;
  func_0x000107c61520(&UNK_10dbda9a0,&UNK_110664c98);
  puRam0000000112f78040 = puVar1;
  return;
}



/* Entry: 10355a0dc; end: 10355a0df;  */

void FUN_10355a0dc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f78050 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f78058;
  func_0x00010002969c(0x112f78058,&UNK_10dbda928);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112f78050 = puVar2;
  return;
}



/* Entry: 10355a0e0; end: 10355a12f;  */

void FUN_10355a0e0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f78050 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f78058;
  func_0x00010002969c(0x112f78058,&UNK_10dbda928);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112f78050 = puVar2;
  return;
}



/* Entry: 10355a130; end: 10355a133;  */

void FUN_10355a130(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f78060 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbda9e0;
  func_0x000107c61520(&UNK_10dbda9e0,&UNK_110664c98);
  puRam0000000112f78060 = puVar1;
  return;
}



/* Entry: 10355a134; end: 10355a173;  */

void FUN_10355a134(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f78060 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbda9e0;
  func_0x000107c61520(&UNK_10dbda9e0,&UNK_110664c98);
  puRam0000000112f78060 = puVar1;
  return;
}



/* Entry: 10355a174; end: 10355a227;  */

int FUN_10355a174(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 10355a228; end: 10355a257;  */

void FUN_10355a228(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  FUN_10355a50c();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 10355a258; end: 10355a263;  */

undefined1  [16] FUN_10355a258(void)

{
  unkuint9 *unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._9_7_ = 0;
  auVar1._0_9_ = *unaff_x20;
  return auVar1;
}



/* Entry: 10355a264; end: 10355a3cf;  */

void FUN_10355a264(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f781c0;
  func_0x0001000285a8(0x112f781c0,&UNK_10dbdabd0);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 10355a3d0; end: 10355a423;  */

bool FUN_10355a3d0(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  lVar3 = *param_2;
  lVar1 = param_2[1];
  func_0x00010355a214(lVar2,(char)param_1[1]);
  func_0x00010355a214(lVar3,(char)lVar1);
  return lVar2 == lVar3;
}



/* Entry: 10355a424; end: 10355a46b;  */

void FUN_10355a424(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbdad40,0xf8,2);
  uRam0000000113808648 = uStack_38;
  uRam0000000113808640 = uStack_40;
  uRam0000000113808658 = uStack_28;
  uRam0000000113808650 = uStack_30;
  uRam0000000113808668 = uStack_18;
  uRam0000000113808660 = uStack_20;
  return;
}



/* Entry: 10355a46c; end: 10355a50b;  */

/* WARNING: Possible PIC construction at 0x00010355a4b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010355a4c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010355a4bc) */
/* WARNING: Removing unreachable block (ram,0x00010355a4cc) */

void FUN_10355a46c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f781c8 != -1) {
    func_0x000107c61568(0x112f781c8,FUN_10355a424);
  }
  uVar5 = uRam0000000113808668;
  uVar4 = uRam0000000113808660;
  uVar3 = uRam0000000113808658;
  uVar2 = uRam0000000113808650;
  uVar1 = uRam0000000113808648;
  *param_1 = uRam0000000113808640;
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



/* Entry: 10355a50c; end: 10355a517;  */

void FUN_10355a50c(void)

{
  return;
}



/* Entry: 10355a518; end: 10355a543;  */

void FUN_10355a518(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10355a544();
  *(long *)(param_1 + 8) = lVar1;
  func_0x00010355a584();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10355a544; end: 10355a5c3;  */

void FUN_10355a544(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f781d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdac70;
  func_0x000107c61520(&UNK_10dbdac70,&UNK_110664e28);
  puRam0000000112f781d0 = puVar1;
  return;
}



/* Entry: 10355a5c4; end: 10355a5c7;  */

void FUN_10355a5c4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f781e0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f781e8;
  func_0x00010002969c(0x112f781e8,&UNK_10dbdabf8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112f781e0 = puVar2;
  return;
}



/* Entry: 10355a5c8; end: 10355a617;  */

void FUN_10355a5c8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f781e0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f781e8;
  func_0x00010002969c(0x112f781e8,&UNK_10dbdabf8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112f781e0 = puVar2;
  return;
}



/* Entry: 10355a618; end: 10355a61b;  */

void FUN_10355a618(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f781f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdacb0;
  func_0x000107c61520(&UNK_10dbdacb0,&UNK_110664e28);
  puRam0000000112f781f0 = puVar1;
  return;
}



/* Entry: 10355a61c; end: 10355a65b;  */

void FUN_10355a61c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f781f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdacb0;
  func_0x000107c61520(&UNK_10dbdacb0,&UNK_110664e28);
  puRam0000000112f781f0 = puVar1;
  return;
}



/* Entry: 10355a65c; end: 10355a6fb;  */

int FUN_10355a65c(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 10355a6fc; end: 10355a743;  */

undefined8 FUN_10355a6fc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10355a744; end: 10355a78b;  */

void FUN_10355a744(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbdaf90,0x26,2);
  uRam0000000113808678 = uStack_38;
  uRam0000000113808670 = uStack_40;
  uRam0000000113808688 = uStack_28;
  uRam0000000113808680 = uStack_30;
  uRam0000000113808698 = uStack_18;
  uRam0000000113808690 = uStack_20;
  return;
}



/* Entry: 10355a78c; end: 10355a86f;  */

void FUN_10355a78c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  code *pcVar5;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 1) {
        pcVar5 = *(code **)(param_3 + 0x198);
        func_0x000103510fbc();
        lVar2 = unaff_x20 + 0x10;
        puVar3 = &UNK_11066abb0;
LAB_10355a814:
        (*pcVar5)(lVar2,puVar3,lVar1,param_2,param_3);
      }
      else if (lVar1 == 2) {
        pcVar5 = *(code **)(param_3 + 0x198);
        func_0x0001015fdfec();
        lVar2 = unaff_x20 + 0x28;
        puVar3 = &UNK_110790c00;
        goto LAB_10355a814;
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 10355a870; end: 10355a8e3;  */

void FUN_10355a870(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_10355a8e4();
  if (unaff_x21 == 0) {
    FUN_10355a964();
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 10355a8e4; end: 10355a963;  */

void FUN_10355a8e4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  
  lStack_50 = *(long *)(param_1 + 0x20);
  if (lStack_50 != 0) {
    uStack_58 = *(undefined8 *)(param_1 + 0x18);
    uStack_60 = *(undefined8 *)(param_1 + 0x10);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000103510fbc();
    (*pcVar1)(&uStack_60,1,&UNK_11066abb0,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10355a964; end: 10355a9eb;  */

void FUN_10355a964(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = *(ulong *)(param_1 + 0x28);
  if ((uStack_58 & 0xff) != 2) {
    uStack_48 = *(undefined8 *)(param_1 + 0x38);
    uStack_50 = *(undefined8 *)(param_1 + 0x30);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar1)(&uStack_58,2,&UNK_110790c00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10355a9ec; end: 10355aa33;  */

uint FUN_10355a9ec(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_f8 [24];
  ulong uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  ulong uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  uVar6 = param_1[3];
  uVar7 = param_1[2];
  lVar4 = param_1[4];
  uVar9 = param_2[3];
  uVar3 = param_2[2];
  lVar5 = param_2[4];
  uStack_a0 = uVar3;
  uStack_98 = uVar9;
  lStack_90 = lVar5;
  uStack_80 = uVar7;
  uStack_78 = uVar6;
  lStack_70 = lVar4;
  if (lVar4 == 0) {
    if (lVar5 != 0) goto LAB_10355ae80;
    FUN_10355a6fc(&uStack_80,&uStack_c0,0x112f759a0,&UNK_10dbd33f0);
    FUN_10355a6fc(&uStack_a0,&uStack_c0,0x112f759a0,&UNK_10dbd33f0);
    func_0x00010349f458(uVar7,uVar6,0);
LAB_10355af24:
    uVar10 = param_1[6];
    uVar7 = param_1[5];
    uVar3 = param_1[7];
    uVar11 = param_2[6];
    uVar8 = param_2[5];
    uVar6 = param_2[7];
    uStack_e0 = uVar8;
    uStack_d8 = uVar11;
    uStack_d0 = uVar6;
    uStack_c0 = uVar7;
    uStack_b8 = uVar10;
    uStack_b0 = uVar3;
    if ((uVar7 & 0xff) == 2) {
      if ((uVar8 & 0xff) == 2) {
        FUN_10355a6fc(&uStack_c0,auStack_f8,0x112db94f0,&UNK_10d96af00);
        FUN_10355a6fc(&uStack_e0,auStack_f8,0x112db94f0,&UNK_10d96af00);
LAB_10355af9c:
        func_0x000101556278(uVar7,uVar10,uVar3);
        uVar3 = *param_1;
        func_0x000100e25fcc(uVar3,param_1[1],*param_2,param_2[1]);
        uVar1 = (uint)uVar3;
        goto LAB_10355b0e8;
      }
LAB_10355afc4:
      FUN_10355a6fc(&uStack_c0,auStack_f8,0x112db94f0,&UNK_10d96af00);
      FUN_10355a6fc(&uStack_e0,auStack_f8,0x112db94f0,&UNK_10d96af00);
      func_0x000101556278(uVar7,uVar10,uVar3);
      uVar7 = uVar8;
      uVar10 = uVar11;
      uVar3 = uVar6;
    }
    else {
      if ((uVar8 & 0xff) == 2) goto LAB_10355afc4;
      if ((((uint)uVar8 ^ (uint)uVar7) & 1) == 0) {
        FUN_10355a6fc(&uStack_c0,auStack_f8,0x112db94f0,&UNK_10d96af00);
        FUN_10355a6fc(&uStack_e0,auStack_f8,0x112db94f0,&UNK_10d96af00);
        uVar2 = uVar10;
        func_0x000100e25fcc(uVar10,uVar3,uVar11,uVar6);
        func_0x000101556278(uVar8,uVar11,uVar6);
        if ((uVar2 & 1) != 0) goto LAB_10355af9c;
      }
      else {
        FUN_10355a6fc(&uStack_c0,auStack_f8,0x112db94f0,&UNK_10d96af00);
        FUN_10355a6fc(&uStack_e0,auStack_f8,0x112db94f0,&UNK_10d96af00);
        func_0x000101556278(uVar8,uVar11,uVar6);
      }
    }
    func_0x000101556278(uVar7,uVar10,uVar3);
  }
  else if (lVar5 == 0) {
LAB_10355ae80:
    FUN_10355a6fc(&uStack_80,&uStack_c0,0x112f759a0,&UNK_10dbd33f0);
    FUN_10355a6fc(&uStack_a0,&uStack_c0,0x112f759a0,&UNK_10dbd33f0);
    func_0x00010349f458(uVar7,uVar6,lVar4);
    func_0x00010349f458(uVar3,uVar9,lVar5);
  }
  else {
    FUN_10355a6fc(&uStack_80,&uStack_c0,0x112f759a0,&UNK_10dbd33f0);
    FUN_10355a6fc(&uStack_a0,&uStack_c0,0x112f759a0,&UNK_10dbd33f0);
    uVar10 = uVar7;
    FUN_1035d8f6c(uVar7,uVar6,lVar4,uVar3,uVar9,lVar5);
    func_0x00010349f458(uVar3,uVar9,lVar5);
    func_0x00010349f458(uVar7,uVar6,lVar4);
    if ((uVar10 & 1) != 0) goto LAB_10355af24;
  }
  uVar1 = 0;
LAB_10355b0e8:
  return uVar1 & 1;
}



/* Entry: 10355aa34; end: 10355aa63;  */

undefined1  [16] FUN_10355aa34(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 10355aa64; end: 10355aa97;  */

void FUN_10355aa64(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 10355aa98; end: 10355aaab;  */

undefined8 FUN_10355aa98(void)

{
  return 0x10355aaa8;
}



/* Entry: 10355aaac; end: 10355aabf;  */

void FUN_10355aaac(void)

{
  FUN_10355a78c();
  return;
}



/* Entry: 10355aac0; end: 10355aaf7;  */

void FUN_10355aac0(void)

{
  FUN_10355a870();
  return;
}



/* Entry: 10355aaf8; end: 10355aafb;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10355aaf8(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10355aafc; end: 10355ab33;  */

uint FUN_10355aafc(long param_1,long param_2)

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
  FUN_10355b690();
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



/* Entry: 10355ab34; end: 10355ab7b;  */

uint FUN_10355ab34(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  uStack_28 = param_1[5];
  uStack_30 = param_1[4];
  uStack_18 = param_1[7];
  uStack_20 = param_1[6];
  uStack_88 = unaff_x20[1];
  uStack_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  uStack_68 = unaff_x20[5];
  uStack_70 = unaff_x20[4];
  uStack_58 = unaff_x20[7];
  uStack_60 = unaff_x20[6];
  FUN_10355ada4(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 10355ab7c; end: 10355ac1b;  */

/* WARNING: Possible PIC construction at 0x00010355abc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010355abd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010355abcc) */
/* WARNING: Removing unreachable block (ram,0x00010355abdc) */

void FUN_10355ab7c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f781f8 != -1) {
    func_0x000107c61568(0x112f781f8,FUN_10355a744);
  }
  uVar5 = uRam0000000113808698;
  uVar4 = uRam0000000113808690;
  uVar3 = uRam0000000113808688;
  uVar2 = uRam0000000113808680;
  uVar1 = uRam0000000113808678;
  *param_1 = uRam0000000113808670;
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



/* Entry: 10355ac1c; end: 10355ac57;  */

void FUN_10355ac1c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f78218;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f78218,&UNK_10dbdaf88);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10355ac58; end: 10355ad5b;  */

void FUN_10355ac58(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_b8 [72];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_48 = unaff_x20[5];
  uStack_50 = unaff_x20[4];
  uStack_38 = unaff_x20[7];
  uStack_40 = unaff_x20[6];
  func_0x000107c6068c(auStack_b8,0);
  func_0x000107c5fa50(auStack_b8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10355ad5c; end: 10355ada3;  */

uint FUN_10355ad5c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_18 = param_2[7];
  uStack_20 = param_2[6];
  FUN_10355ada4(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 10355ada4; end: 10355b10b;  */

uint FUN_10355ada4(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_f8 [24];
  ulong uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  ulong uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  uVar6 = param_1[3];
  uVar7 = param_1[2];
  lVar4 = param_1[4];
  uVar9 = param_2[3];
  uVar3 = param_2[2];
  lVar5 = param_2[4];
  uStack_a0 = uVar3;
  uStack_98 = uVar9;
  lStack_90 = lVar5;
  uStack_80 = uVar7;
  uStack_78 = uVar6;
  lStack_70 = lVar4;
  if (lVar4 == 0) {
    if (lVar5 != 0) goto LAB_10355ae80;
    FUN_10355a6fc(&uStack_80,&uStack_c0,0x112f759a0,&UNK_10dbd33f0);
    FUN_10355a6fc(&uStack_a0,&uStack_c0,0x112f759a0,&UNK_10dbd33f0);
    func_0x00010349f458(uVar7,uVar6,0);
LAB_10355af24:
    uVar10 = param_1[6];
    uVar7 = param_1[5];
    uVar3 = param_1[7];
    uVar11 = param_2[6];
    uVar8 = param_2[5];
    uVar6 = param_2[7];
    uStack_e0 = uVar8;
    uStack_d8 = uVar11;
    uStack_d0 = uVar6;
    uStack_c0 = uVar7;
    uStack_b8 = uVar10;
    uStack_b0 = uVar3;
    if ((uVar7 & 0xff) == 2) {
      if ((uVar8 & 0xff) == 2) {
        FUN_10355a6fc(&uStack_c0,auStack_f8,0x112db94f0,&UNK_10d96af00);
        FUN_10355a6fc(&uStack_e0,auStack_f8,0x112db94f0,&UNK_10d96af00);
LAB_10355af9c:
        func_0x000101556278(uVar7,uVar10,uVar3);
        uVar3 = *param_1;
        func_0x000100e25fcc(uVar3,param_1[1],*param_2,param_2[1]);
        uVar1 = (uint)uVar3;
        goto LAB_10355b0e8;
      }
LAB_10355afc4:
      FUN_10355a6fc(&uStack_c0,auStack_f8,0x112db94f0,&UNK_10d96af00);
      FUN_10355a6fc(&uStack_e0,auStack_f8,0x112db94f0,&UNK_10d96af00);
      func_0x000101556278(uVar7,uVar10,uVar3);
      uVar7 = uVar8;
      uVar10 = uVar11;
      uVar3 = uVar6;
    }
    else {
      if ((uVar8 & 0xff) == 2) goto LAB_10355afc4;
      if ((((uint)uVar8 ^ (uint)uVar7) & 1) == 0) {
        FUN_10355a6fc(&uStack_c0,auStack_f8,0x112db94f0,&UNK_10d96af00);
        FUN_10355a6fc(&uStack_e0,auStack_f8,0x112db94f0,&UNK_10d96af00);
        uVar2 = uVar10;
        func_0x000100e25fcc(uVar10,uVar3,uVar11,uVar6);
        func_0x000101556278(uVar8,uVar11,uVar6);
        if ((uVar2 & 1) != 0) goto LAB_10355af9c;
      }
      else {
        FUN_10355a6fc(&uStack_c0,auStack_f8,0x112db94f0,&UNK_10d96af00);
        FUN_10355a6fc(&uStack_e0,auStack_f8,0x112db94f0,&UNK_10d96af00);
        func_0x000101556278(uVar8,uVar11,uVar6);
      }
    }
    func_0x000101556278(uVar7,uVar10,uVar3);
  }
  else if (lVar5 == 0) {
LAB_10355ae80:
    FUN_10355a6fc(&uStack_80,&uStack_c0,0x112f759a0,&UNK_10dbd33f0);
    FUN_10355a6fc(&uStack_a0,&uStack_c0,0x112f759a0,&UNK_10dbd33f0);
    func_0x00010349f458(uVar7,uVar6,lVar4);
    func_0x00010349f458(uVar3,uVar9,lVar5);
  }
  else {
    FUN_10355a6fc(&uStack_80,&uStack_c0,0x112f759a0,&UNK_10dbd33f0);
    FUN_10355a6fc(&uStack_a0,&uStack_c0,0x112f759a0,&UNK_10dbd33f0);
    uVar10 = uVar7;
    FUN_1035d8f6c(uVar7,uVar6,lVar4,uVar3,uVar9,lVar5);
    func_0x00010349f458(uVar3,uVar9,lVar5);
    func_0x00010349f458(uVar7,uVar6,lVar4);
    if ((uVar10 & 1) != 0) goto LAB_10355af24;
  }
  uVar1 = 0;
LAB_10355b0e8:
  return uVar1 & 1;
}



/* Entry: 10355b10c; end: 10355b14b;  */

void FUN_10355b10c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f78200 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdaeb0;
  func_0x000107c61520(&UNK_10dbdaeb0,&UNK_110664ff0);
  puRam0000000112f78200 = puVar1;
  return;
}



/* Entry: 10355b14c; end: 10355b16f;  */

void FUN_10355b14c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10355b170();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10355b170; end: 10355b1af;  */

void FUN_10355b170(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f78208 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdae88;
  func_0x000107c61520(&UNK_10dbdae88,&UNK_110664ff0);
  puRam0000000112f78208 = puVar1;
  return;
}



/* Entry: 10355b1b0; end: 10355b1db;  */

void FUN_10355b1b0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10355b10c();
  *(long *)(param_1 + 8) = lVar1;
  func_0x000103502b94();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10355b1dc; end: 10355b1df;  */

void FUN_10355b1dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f78210 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdaef0;
  func_0x000107c61520(&UNK_10dbdaef0,&UNK_110664ff0);
  puRam0000000112f78210 = puVar1;
  return;
}



/* Entry: 10355b1e0; end: 10355b21f;  */

void FUN_10355b1e0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f78210 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdaef0;
  func_0x000107c61520(&UNK_10dbdaef0,&UNK_110664ff0);
  puRam0000000112f78210 = puVar1;
  return;
}



/* Entry: 10355b220; end: 10355b2a7;  */

long FUN_10355b220(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10355b2a8; end: 10355b367;  */

undefined8 * FUN_10355b2a8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  uVar1 = param_2[1];
  func_0x00010006c00c(uVar4,uVar1);
  *param_1 = uVar4;
  param_1[1] = uVar1;
  lVar3 = param_2[4];
  if (lVar3 == 0) {
    uVar4 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = uVar4;
    param_1[4] = param_2[4];
  }
  else {
    uVar4 = param_2[2];
    uVar1 = param_2[3];
    func_0x00010006c00c(uVar4,uVar1);
    param_1[2] = uVar4;
    param_1[3] = uVar1;
    param_1[4] = lVar3;
    func_0x000107c6157c(lVar3);
  }
  cVar2 = *(char *)(param_2 + 5);
  if (cVar2 == '\x02') {
    uVar4 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar4;
    param_1[7] = param_2[7];
  }
  else {
    *(char *)(param_1 + 5) = cVar2;
    uVar4 = param_2[6];
    uVar1 = param_2[7];
    func_0x00010006c00c(uVar4,uVar1);
    param_1[6] = uVar4;
    param_1[7] = uVar1;
  }
  return param_1;
}



/* Entry: 10355b368; end: 10355b5bf;  */

undefined8 * FUN_10355b368(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  char *pcVar5;
  byte *pbVar6;
  undefined8 uVar7;
  
  uVar4 = *param_2;
  uVar1 = param_2[1];
  func_0x00010006c00c(uVar4,uVar1);
  uVar7 = *param_1;
  uVar2 = param_1[1];
  *param_1 = uVar4;
  param_1[1] = uVar1;
  func_0x00010006c090(uVar7,uVar2);
  if (param_1[4] == 0) {
    if (param_2[4] == 0) {
      uVar7 = param_2[3];
      uVar4 = param_2[2];
      param_1[4] = param_2[4];
      param_1[3] = uVar7;
      param_1[2] = uVar4;
    }
    else {
      uVar4 = param_2[2];
      uVar7 = param_2[3];
      func_0x00010006c00c(uVar4,uVar7);
      param_1[2] = uVar4;
      param_1[3] = uVar7;
      param_1[4] = param_2[4];
      func_0x000107c6157c();
    }
  }
  else if (param_2[4] == 0) {
    FUN_103510d9c(param_1 + 2);
    uVar4 = param_2[4];
    uVar7 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = uVar7;
    param_1[4] = uVar4;
  }
  else {
    uVar4 = param_2[2];
    uVar1 = param_2[3];
    func_0x00010006c00c(uVar4,uVar1);
    uVar7 = param_1[2];
    uVar2 = param_1[3];
    param_1[2] = uVar4;
    param_1[3] = uVar1;
    func_0x00010006c090(uVar7,uVar2);
    uVar4 = param_1[4];
    param_1[4] = param_2[4];
    func_0x000107c6157c();
    func_0x000107c61574(uVar4);
  }
  pcVar5 = (char *)(param_1 + 5);
  pbVar6 = (byte *)(param_2 + 5);
  bVar3 = *pbVar6;
  if (*pcVar5 == '\x02') {
    if (bVar3 == 2) {
      uVar7 = param_2[6];
      uVar4 = *(undefined8 *)pbVar6;
      param_1[7] = param_2[7];
      param_1[6] = uVar7;
      *(undefined8 *)pcVar5 = uVar4;
    }
    else {
      *(byte *)(param_1 + 5) = bVar3;
      uVar4 = param_2[6];
      uVar7 = param_2[7];
      func_0x00010006c00c(uVar4,uVar7);
      param_1[6] = uVar4;
      param_1[7] = uVar7;
    }
  }
  else if (bVar3 == 2) {
    func_0x0001015fd618(pcVar5);
    uVar4 = param_2[7];
    uVar7 = *(undefined8 *)pbVar6;
    param_1[6] = param_2[6];
    *(undefined8 *)pcVar5 = uVar7;
    param_1[7] = uVar4;
  }
  else {
    *(byte *)(param_1 + 5) = bVar3 & 1;
    uVar4 = param_2[6];
    uVar1 = param_2[7];
    func_0x00010006c00c(uVar4,uVar1);
    uVar7 = param_1[6];
    uVar2 = param_1[7];
    param_1[6] = uVar4;
    param_1[7] = uVar1;
    func_0x00010006c090(uVar7,uVar2);
  }
  return param_1;
}



/* Entry: 10355b5c0; end: 10355b68f;  */

int FUN_10355b5c0(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 8);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10355b690; end: 10355b6cf;  */

void FUN_10355b690(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f78220 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbdae5c;
  func_0x000107c61520(&DAT_10dbdae5c,&UNK_110664ff0);
  puRam0000000112f78220 = puVar1;
  return;
}



/* Entry: 10355b6d0; end: 10355b71f;  */

undefined8 FUN_10355b6d0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112f759a0;
  func_0x0001000285a8(0x112f759a0,&UNK_10dbd33f0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10355b720; end: 10355b743;  */

void FUN_10355b720(undefined8 *param_1)

{
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[2] = 0xc000000000000000;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[3] = 0;
  return;
}



/* Entry: 10355b744; end: 10355b78b;  */

void FUN_10355b744(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbdb100,0x3d,2);
  uRam00000001138086a8 = uStack_38;
  uRam00000001138086a0 = uStack_40;
  uRam00000001138086b8 = uStack_28;
  uRam00000001138086b0 = uStack_30;
  uRam00000001138086c8 = uStack_18;
  uRam00000001138086c0 = uStack_20;
  return;
}



/* Entry: 10355b78c; end: 10355b86f;  */

void FUN_10355b78c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
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
        func_0x000103510fbc();
LAB_10355b814:
        (*pcVar4)();
      }
      else if (lVar1 == 2) {
        pcVar4 = *(code **)(param_3 + 0x1a0);
        func_0x000103502914();
        goto LAB_10355b814;
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 10355b870; end: 10355b91b;  */

void FUN_10355b870(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long *unaff_x20;
  long unaff_x21;
  long lVar2;
  code *pcVar3;
  
  plVar1 = unaff_x20;
  FUN_10355b91c();
  if (unaff_x21 == 0) {
    lVar2 = *unaff_x20;
    if (*(long *)(lVar2 + 0x10) != 0) {
      pcVar3 = *(code **)(param_3 + 0x118);
      func_0x000103502914();
      (*pcVar3)(lVar2,2,&UNK_1106659d0,plVar1,param_2,param_3);
    }
    func_0x000100076224(param_1,unaff_x20[1],unaff_x20[2],param_2,param_3);
  }
  return;
}



/* Entry: 10355b91c; end: 10355b99b;  */

void FUN_10355b91c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  
  lStack_50 = *(long *)(param_1 + 0x28);
  if (lStack_50 != 0) {
    uStack_58 = *(undefined8 *)(param_1 + 0x20);
    uStack_60 = *(undefined8 *)(param_1 + 0x18);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000103510fbc();
    (*pcVar1)(&uStack_60,1,&UNK_11066abb0,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10355b99c; end: 10355b9e7;  */

uint FUN_10355b99c(ulong *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined1 auStack_b8 [24];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  uVar7 = param_1[4];
  uVar5 = param_1[3];
  uVar3 = param_1[5];
  uVar8 = param_2[4];
  uVar6 = param_2[3];
  lVar4 = param_2[5];
  uStack_a0 = uVar6;
  uStack_98 = uVar8;
  lStack_90 = lVar4;
  uStack_80 = uVar5;
  uStack_78 = uVar7;
  uStack_70 = uVar3;
  if (uVar3 == 0) {
    if (lVar4 != 0) goto LAB_10355bf0c;
    FUN_10355b6d0(&uStack_80,auStack_b8);
    FUN_10355b6d0(&uStack_a0,auStack_b8);
    func_0x00010349f458(uVar5,uVar7,0);
LAB_10355bf70:
    uVar3 = *param_1;
    FUN_10355bd74(uVar3,*param_2);
    if ((uVar3 & 1) != 0) {
      uVar3 = param_1[1];
      func_0x000100e25fcc(uVar3,param_1[2],param_2[1],param_2[2]);
      uVar1 = (uint)uVar3;
      goto LAB_10355bf94;
    }
  }
  else if (lVar4 == 0) {
LAB_10355bf0c:
    FUN_10355b6d0(&uStack_80,auStack_b8);
    FUN_10355b6d0(&uStack_a0,auStack_b8);
    func_0x00010349f458(uVar5,uVar7,uVar3);
    func_0x00010349f458(uVar6,uVar8,lVar4);
  }
  else {
    FUN_10355b6d0(&uStack_80,auStack_b8);
    FUN_10355b6d0(&uStack_a0,auStack_b8);
    uVar2 = uVar5;
    FUN_1035d8f6c(uVar5,uVar7,uVar3,uVar6,uVar8,lVar4);
    func_0x00010349f458(uVar6,uVar8,lVar4);
    func_0x00010349f458(uVar5,uVar7,uVar3);
    if ((uVar2 & 1) != 0) goto LAB_10355bf70;
  }
  uVar1 = 0;
LAB_10355bf94:
  return uVar1 & 1;
}



/* Entry: 10355b9e8; end: 10355ba17;  */

undefined1  [16] FUN_10355b9e8(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 8),
                      *(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Entry: 10355ba18; end: 10355ba4b;  */

void FUN_10355ba18(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 10355ba4c; end: 10355ba5f;  */

undefined1  [16] FUN_10355ba4c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x10355ba5c;
  return auVar1;
}


