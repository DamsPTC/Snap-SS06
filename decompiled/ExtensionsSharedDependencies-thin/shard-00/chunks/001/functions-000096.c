/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 001c6408; end: 001c6447;  */

void FUN_001c6408(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af35f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e3b88;
  _swift_getWitnessTable(&UNK_007e3b88,&UNK_009b6d20);
  puRam0000000000af35f0 = puVar1;
  return;
}



/* Entry: 001c6448; end: 001c65df;  */

void FUN_001c6448(void)

{
  return;
}



/* Entry: 001c65e0; end: 001c660b;  */

undefined8 * FUN_001c65e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 001c660c; end: 001c6613;  */

void FUN_001c660c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 001c6614; end: 001c6683;  */

undefined8 * FUN_001c6614(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 001c6684; end: 001c6717;  */

int FUN_001c6684(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 001c6718; end: 001c677b;  */

long FUN_001c6718(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 001c677c; end: 001c68c3;  */

undefined1 * FUN_001c677c(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  param_1[0x38] = param_2[0x38];
  uVar3 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_2 + 0x50);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  return param_1;
}



/* Entry: 001c68c4; end: 001c68e7;  */

void FUN_001c68c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar2 = param_2[5];
  uVar1 = param_2[4];
  uVar4 = param_2[7];
  uVar3 = param_2[6];
  uVar6 = param_2[9];
  uVar5 = param_2[8];
  *(undefined2 *)(param_1 + 10) = *(undefined2 *)(param_2 + 10);
  param_1[7] = uVar4;
  param_1[6] = uVar3;
  param_1[9] = uVar6;
  param_1[8] = uVar5;
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  return;
}



/* Entry: 001c68e8; end: 001c6963;  */

undefined1 * FUN_001c68e8(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  param_1[0x38] = param_2[0x38];
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_2 + 0x50);
  return param_1;
}



/* Entry: 001c6964; end: 001c6a73;  */

int FUN_001c6964(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x52) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 001c6a74; end: 001c6af3;  */

void FUN_001c6a74(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  if (*(ulong *)(param_1 + 0x18) >> 0x3c < 0xf) {
    FUN_00023358(*(undefined8 *)(param_1 + 0x10));
  }
  if (*(ulong *)(param_1 + 0x28) >> 0x3c < 0xf) {
    FUN_00023358(*(undefined8 *)(param_1 + 0x20));
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x38));
  if (*(ulong *)(param_1 + 0x48) >> 0x3c < 0xf) {
    FUN_00023358(*(undefined8 *)(param_1 + 0x40));
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(*(undefined8 *)(param_1 + 0x68));
  return;
}



/* Entry: 001c6af4; end: 001c6deb;  */

undefined8 * FUN_001c6af4(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar1 = param_2[3];
  _swift_bridgeObjectRetain();
  if (uVar1 >> 0x3c < 0xf) {
    uVar2 = param_2[2];
    func_0x00023304(uVar2,uVar1);
    param_1[2] = uVar2;
    param_1[3] = uVar1;
  }
  else {
    uVar2 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = uVar2;
  }
  uVar1 = param_2[5];
  if (uVar1 >> 0x3c < 0xf) {
    uVar2 = param_2[4];
    func_0x00023304(uVar2,uVar1);
    param_1[4] = uVar2;
    param_1[5] = uVar1;
  }
  else {
    uVar2 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = uVar2;
  }
  uVar2 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar2;
  uVar1 = param_2[9];
  _swift_bridgeObjectRetain();
  if (uVar1 >> 0x3c < 0xf) {
    uVar2 = param_2[8];
    func_0x00023304(uVar2,uVar1);
    param_1[8] = uVar2;
    param_1[9] = uVar1;
  }
  else {
    uVar2 = param_2[8];
    param_1[9] = param_2[9];
    param_1[8] = uVar2;
  }
  uVar2 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar2;
  uVar2 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar2);
  return param_1;
}



/* Entry: 001c6dec; end: 001c6f1b;  */

undefined8 * FUN_001c6dec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  if ((ulong)param_1[3] >> 0x3c < 0xf) {
    uVar3 = param_2[3];
    if (0xe < uVar3 >> 0x3c) {
      func_0x0005c328(param_1 + 2);
      goto LAB_001c6e38;
    }
    uVar2 = param_1[2];
    param_1[2] = param_2[2];
    param_1[3] = uVar3;
    FUN_00023358(uVar2);
  }
  else {
LAB_001c6e38:
    uVar2 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = uVar2;
  }
  if ((ulong)param_1[5] >> 0x3c < 0xf) {
    uVar3 = param_2[5];
    if (0xe < uVar3 >> 0x3c) {
      func_0x0005c328(param_1 + 4);
      goto LAB_001c6e7c;
    }
    uVar2 = param_1[4];
    param_1[4] = param_2[4];
    param_1[5] = uVar3;
    FUN_00023358(uVar2);
  }
  else {
LAB_001c6e7c:
    uVar2 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = uVar2;
  }
  uVar2 = param_2[7];
  uVar1 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  if ((ulong)param_1[9] >> 0x3c < 0xf) {
    uVar3 = param_2[9];
    if (uVar3 >> 0x3c < 0xf) {
      uVar2 = param_1[8];
      param_1[8] = param_2[8];
      param_1[9] = uVar3;
      FUN_00023358(uVar2);
      goto LAB_001c6eec;
    }
    func_0x0005c328(param_1 + 8);
  }
  uVar2 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar2;
LAB_001c6eec:
  uVar2 = param_2[0xb];
  uVar1 = param_1[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[0xd];
  uVar1 = param_1[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 001c6f1c; end: 001c737f;  */

int FUN_001c6f1c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x1c] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 001c7380; end: 001c73bf;  */

void FUN_001c7380(void)

{
  undefined *puVar1;
  
  if (puRam0000000000b4dad0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e3f58;
  _swift_getWitnessTable(&UNK_007e3f58,&UNK_009b6fa8);
  puRam0000000000b4dad0 = puVar1;
  return;
}



/* Entry: 001c73c0; end: 001c73c3;  */

void FUN_001c73c0(void)

{
  undefined *puVar1;
  
  if (puRam0000000000b4dce0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e4010;
  _swift_getWitnessTable(&UNK_007e4010,&UNK_009b6f18);
  puRam0000000000b4dce0 = puVar1;
  return;
}



/* Entry: 001c73c4; end: 001c7403;  */

void FUN_001c73c4(void)

{
  undefined *puVar1;
  
  if (puRam0000000000b4dce0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e4010;
  _swift_getWitnessTable(&UNK_007e4010,&UNK_009b6f18);
  puRam0000000000b4dce0 = puVar1;
  return;
}



/* Entry: 001c7404; end: 001c7407;  */

void FUN_001c7404(void)

{
  undefined *puVar1;
  
  if (puRam0000000000b4def0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e40c8;
  _swift_getWitnessTable(&UNK_007e40c8,&UNK_009b6e88);
  puRam0000000000b4def0 = puVar1;
  return;
}



/* Entry: 001c7408; end: 001c7447;  */

void FUN_001c7408(void)

{
  undefined *puVar1;
  
  if (puRam0000000000b4def0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e40c8;
  _swift_getWitnessTable(&UNK_007e40c8,&UNK_009b6e88);
  puRam0000000000b4def0 = puVar1;
  return;
}



/* Entry: 001c7448; end: 001c744b;  */

void FUN_001c7448(void)

{
  undefined *puVar1;
  
  if (puRam0000000000b4e000 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e4060;
  _swift_getWitnessTable(&UNK_007e4060,&UNK_009b6e88);
  puRam0000000000b4e000 = puVar1;
  return;
}



/* Entry: 001c744c; end: 001c748b;  */

void FUN_001c744c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000b4e000 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e4060;
  _swift_getWitnessTable(&UNK_007e4060,&UNK_009b6e88);
  puRam0000000000b4e000 = puVar1;
  return;
}



/* Entry: 001c748c; end: 001c748f;  */

void FUN_001c748c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000b4e008 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e4038;
  _swift_getWitnessTable(&UNK_007e4038,&UNK_009b6e88);
  puRam0000000000b4e008 = puVar1;
  return;
}



/* Entry: 001c7490; end: 001c74cf;  */

void FUN_001c7490(void)

{
  undefined *puVar1;
  
  if (puRam0000000000b4e008 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e4038;
  _swift_getWitnessTable(&UNK_007e4038,&UNK_009b6e88);
  puRam0000000000b4e008 = puVar1;
  return;
}



/* Entry: 001c74d0; end: 001c74d3;  */

void FUN_001c74d0(void)

{
  undefined *puVar1;
  
  if (puRam0000000000b4e090 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e3fa8;
  _swift_getWitnessTable(&UNK_007e3fa8,&UNK_009b6f18);
  puRam0000000000b4e090 = puVar1;
  return;
}



/* Entry: 001c74d4; end: 001c7513;  */

void FUN_001c74d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000000b4e090 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e3fa8;
  _swift_getWitnessTable(&UNK_007e3fa8,&UNK_009b6f18);
  puRam0000000000b4e090 = puVar1;
  return;
}



/* Entry: 001c7514; end: 001c7517;  */

void FUN_001c7514(void)

{
  undefined *puVar1;
  
  if (puRam0000000000b4e098 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e3f80;
  _swift_getWitnessTable(&UNK_007e3f80,&UNK_009b6f18);
  puRam0000000000b4e098 = puVar1;
  return;
}



/* Entry: 001c7518; end: 001c7557;  */

void FUN_001c7518(void)

{
  undefined *puVar1;
  
  if (puRam0000000000b4e098 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e3f80;
  _swift_getWitnessTable(&UNK_007e3f80,&UNK_009b6f18);
  puRam0000000000b4e098 = puVar1;
  return;
}



/* Entry: 001c7558; end: 001c755b;  */

void FUN_001c7558(void)

{
  undefined *puVar1;
  
  if (puRam0000000000b4e120 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e3eb8;
  _swift_getWitnessTable(&UNK_007e3eb8,&UNK_009b6fa8);
  puRam0000000000b4e120 = puVar1;
  return;
}



/* Entry: 001c755c; end: 001c759b;  */

void FUN_001c755c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000b4e120 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e3eb8;
  _swift_getWitnessTable(&UNK_007e3eb8,&UNK_009b6fa8);
  puRam0000000000b4e120 = puVar1;
  return;
}



/* Entry: 001c759c; end: 001c759f;  */

void FUN_001c759c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000b4e128 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e3e90;
  _swift_getWitnessTable(&UNK_007e3e90,&UNK_009b6fa8);
  puRam0000000000b4e128 = puVar1;
  return;
}



/* Entry: 001c75a0; end: 001c76df;  */

void FUN_001c75a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000000b4e128 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e3e90;
  _swift_getWitnessTable(&UNK_007e3e90,&UNK_009b6fa8);
  puRam0000000000b4e128 = puVar1;
  return;
}



/* Entry: 001c76e0; end: 001c76ef;  */

undefined8 * FUN_001c76e0(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar2;
  uVar1 = param_1[3];
  _swift_bridgeObjectRetain();
  if (uVar1 >> 0x3c < 0xf) {
    uVar2 = param_1[2];
    func_0x00023304(uVar2,uVar1);
    param_2[2] = uVar2;
    param_2[3] = uVar1;
  }
  else {
    uVar2 = param_1[2];
    param_2[3] = param_1[3];
    param_2[2] = uVar2;
  }
  uVar1 = param_1[5];
  if (uVar1 >> 0x3c < 0xf) {
    uVar2 = param_1[4];
    func_0x00023304(uVar2,uVar1);
    param_2[4] = uVar2;
    param_2[5] = uVar1;
  }
  else {
    uVar2 = param_1[4];
    param_2[5] = param_1[5];
    param_2[4] = uVar2;
  }
  uVar2 = param_1[7];
  param_2[6] = param_1[6];
  param_2[7] = uVar2;
  uVar1 = param_1[9];
  _swift_bridgeObjectRetain();
  if (uVar1 >> 0x3c < 0xf) {
    uVar2 = param_1[8];
    func_0x00023304(uVar2,uVar1);
    param_2[8] = uVar2;
    param_2[9] = uVar1;
  }
  else {
    uVar2 = param_1[8];
    param_2[9] = param_1[9];
    param_2[8] = uVar2;
  }
  uVar2 = param_1[0xb];
  param_2[10] = param_1[10];
  param_2[0xb] = uVar2;
  uVar2 = param_1[0xd];
  param_2[0xc] = param_1[0xc];
  param_2[0xd] = uVar2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar2);
  return param_2;
}



/* Entry: 001c76f0; end: 001c7713;  */

undefined8 FUN_001c76f0(undefined8 param_1)

{
  func_0x001c6744();
  return param_1;
}



/* Entry: 001c7714; end: 001c7813;  */

void FUN_001c7714(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af3718 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e36d0;
  _swift_getWitnessTable(&UNK_007e36d0,&UNK_009b6988);
  puRam0000000000af3718 = puVar1;
  return;
}



/* Entry: 001c7814; end: 001c788b;  */

undefined1 * FUN_001c7814(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_2 = *param_1;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_2 + 0x10) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_2 + 0x20) = uVar1;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_2 + 0x30) = uVar2;
  param_2[0x38] = param_1[0x38];
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_2 + 0x48) = uVar3;
  *(undefined2 *)(param_2 + 0x50) = *(undefined2 *)(param_1 + 0x50);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  return param_2;
}



/* Entry: 001c788c; end: 001c795f;  */

void FUN_001c788c(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001c7960; end: 001c797f;  */

void FUN_001c7960(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 001c7980; end: 001c799b; -[SCSnapTaskPriority description] */

void FUN_001c7980(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 001c799c; end: 001c79e3; -[SCSnapTaskPriority init] */

void FUN_001c799c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapConcurrency/SnapTaskPriorityWrapper.swift",0x2d,2,0x35,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1c79e4);
  (*pcVar1)();
}



/* Entry: 001c79e4; end: 001c79e7; -[SCSnapTaskPriority copyWithZone:] */

void FUN_001c79e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 001c79e8; end: 001c79ef; +[SCSnapTaskPriority low] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001c79e8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af3738) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 001c79f0; end: 001c79f7; +[SCSnapTaskPriority medium] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001c79f0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af3738) = 1;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 001c79f8; end: 001c79ff; +[SCSnapTaskPriority high] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001c79f8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af3738) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 001c7a00; end: 001c7a07; +[SCSnapTaskPriority userInitiated] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001c7a00(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af3738) = 3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 001c7a08; end: 001c7a57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001c7a08(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af3738) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 001c7a58; end: 001c7a93; -[SCSnapTaskPriority matchLow:medium:high:userInitiated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001c7a58(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                 long param_6)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + _DAT_00af3738);
  if (bVar1 < 2) {
    param_5 = param_3;
    if (bVar1 != 0) {
      param_5 = param_4;
    }
  }
  else if (bVar1 != 2) {
    param_5 = param_6;
  }
                    /* WARNING: Could not recover jumptable at 0x001c7a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_5 + 0x10))(param_5);
  return;
}



/* Entry: 001c7a94; end: 001c7ae7;  */

void FUN_001c7a94(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 001c7ae8; end: 001c7c4f;  */

int FUN_001c7ae8(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_001c7b64;
        goto LAB_001c7b48;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_001c7b48:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_001c7b64:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 001c7c50; end: 001c7c8f;  */

void FUN_001c7c50(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af3768 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e4248;
  _swift_getWitnessTable(&UNK_007e4248,&UNK_009b71e8);
  puRam0000000000af3768 = puVar1;
  return;
}



/* Entry: 001c7c90; end: 001c7c9f;  */

ulong FUN_001c7c90(ulong param_1)

{
  if (3 < param_1) {
    param_1 = 4;
  }
  return param_1;
}



/* Entry: 001c7ca0; end: 001c7d27;  */

void FUN_001c7ca0(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = 0;
  FUN_001c7e04(0,param_1);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_001d4b9c(0,lVar1);
  _swift_storeEnumTagMultiPayload(&stack0xffffffffffffffd0 + -extraout_x8,lVar1,2);
  FUN_001d4828(&stack0xffffffffffffffd0 + -extraout_x8);
  return;
}



/* Entry: 001c7d28; end: 001c7e03;  */

undefined1 * FUN_001c7d28(code *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long extraout_x8;
  
  lVar1 = 0;
  FUN_001c7e04(0,param_3);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &stack0xffffffffffffffc0 + -extraout_x8;
  FUN_001d4b9c(0,lVar1);
  _swift_storeEnumTagMultiPayload(puVar2,lVar1,2);
  FUN_001d4828(puVar2);
  FUN_001caa00(0,param_3);
  puVar3 = puVar2;
  FUN_001ca8b8(puVar2);
  _swift_retain(puVar2);
  (*param_1)(puVar3);
  _swift_release(puVar3);
  return puVar2;
}



/* Entry: 001c7e04; end: 001c7e0f;  */

void FUN_001c7e04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&UNK_008466fc);
  return;
}



/* Entry: 001c7e10; end: 001c7e63;  */

void FUN_001c7e10(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_001c7ca0();
  FUN_001caa00(0,param_1);
  FUN_001ca8b8(uVar1);
  _swift_retain(uVar1);
  return;
}



/* Entry: 001c7e64; end: 001c7e7f;  */

void FUN_001c7e64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_3;
  *(undefined8 *)(unaff_x22 + 0x50) = param_4;
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001c7e80,0,0);
  return;
}



/* Entry: 001c7e80; end: 001c7f2b;  */

void FUN_001c7e80(void)

{
  code *pcVar1;
  qword *pqVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  qword unaff_x22;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x50);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x40);
  pcVar1 = FUN_001c7fcc;
  FUN_001c7d28(FUN_001c7fcc,unaff_x22 + 0x10,uVar5);
  *(code **)(unaff_x22 + 0x58) = pcVar1;
  *(undefined8 *)(unaff_x22 + 0x30) = pcVar1;
  pqVar2 = &section_00000068.size;
  _swift_task_alloc();
  *(qword **)(unaff_x22 + 0x60) = pqVar2;
  uVar3 = 0;
  FUN_001c800c(0,uVar5);
  puVar4 = &DAT_007e4308;
  _swift_getWitnessTable(&DAT_007e4308,uVar3);
  *pqVar2 = unaff_x22;
  pqVar2[1] = (qword)FUN_001c7f2c;
  uVar5 = *(undefined8 *)(unaff_x22 + 0x38);
  pqVar2[0xe] = (qword)puVar4;
  pqVar2[0xf] = unaff_x22 + 0x30;
  pqVar2[0xd] = uVar3;
  pqVar2[7] = uVar5;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001ca160,0,0);
  return;
}



/* Entry: 001c7f2c; end: 001c7f97;  */

void FUN_001c7f2c(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(long *)(lVar1 + 0x68) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x60));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001c7f98,0,0);
    return;
  }
  _swift_release(*(undefined8 *)(lVar1 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x001c7f94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 001c7f98; end: 001c7fcb;  */

void FUN_001c7f98(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x001c7fc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 001c7fcc; end: 001c800b;  */

void FUN_001c7fcc(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  _swift_retain();
  (*pcVar1)(FUN_001ca134,param_1);
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(param_1);
  return;
}



/* Entry: 001c800c; end: 001c8017;  */

void FUN_001c800c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&DAT_008466cc);
  return;
}



/* Entry: 001c8018; end: 001c8077;  */

void FUN_001c8018(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,long param_7)

{
  ulong uVar1;
  long lVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x98) = param_6;
  *(long *)(unaff_x22 + 0xa0) = param_7;
  *(undefined8 *)(unaff_x22 + 0x88) = param_4;
  *(undefined8 *)(unaff_x22 + 0x90) = param_5;
  *(undefined8 *)(unaff_x22 + 0x78) = param_2;
  *(undefined8 *)(unaff_x22 + 0x80) = param_3;
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
  lVar2 = *(long *)(param_7 + -8);
  *(long *)(unaff_x22 + 0xa8) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb0) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001c8078,0,0);
  return;
}



/* Entry: 001c8078; end: 001c81af;  */

void FUN_001c8078(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  segment_command *psVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa0);
  pcVar2 = *(code **)(unaff_x22 + 0x78);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar4 = uVar1;
  FUN_001c7e10();
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar4;
  puVar5 = &UNK_009b7260;
  _swift_allocObject(&UNK_009b7260,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar3;
  *(undefined8 *)(puVar5 + 0x18) = param_2;
  _swift_retain(param_2);
  (*pcVar2)(uVar7,FUN_001c82ec,puVar5);
  _swift_release(puVar5);
  _swift_release(param_2);
  *(undefined8 *)(unaff_x22 + 0x60) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x68) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x70) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar7;
  psVar6 = &segment_command_00000020;
  _swift_retain(uVar4);
  _swift_task_alloc();
  *(segment_command **)(unaff_x22 + 0xc0) = psVar6;
  psVar6->cmd = (int)unaff_x22;
  psVar6->cmdsize = (int)((ulong)unaff_x22 >> 0x20);
  *(code **)psVar6->segname = FUN_001c81b0;
                    /* WARNING: Could not recover jumptable at 0x001c81ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_001ca3f0(*(undefined8 *)(unaff_x22 + 0x48),&UNK_007e42f0,unaff_x22 + 0x50,FUN_001c84b8,
               unaff_x22 + 0x10,0,0,*(undefined8 *)(unaff_x22 + 0x98));
  return;
}



/* Entry: 001c81b0; end: 001c8213;  */

void FUN_001c81b0(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 200) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xc0));
  if (unaff_x20 == 0) {
    _swift_release(*(undefined8 *)(lVar2 + 0xb8));
    pcVar1 = FUN_001c8214;
  }
  else {
    pcVar1 = FUN_001c826c;
  }
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(pcVar1,0,0);
  return;
}



/* Entry: 001c8214; end: 001c826b;  */

void FUN_001c8214(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
  lVar3 = *(long *)(unaff_x22 + 0xa8);
  _swift_release(*(undefined8 *)(unaff_x22 + 0xb8));
  (**(code **)(lVar3 + 8))(uVar1,uVar2);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x001c8268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 001c826c; end: 001c82c7;  */

void FUN_001c826c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
  lVar3 = *(long *)(unaff_x22 + 0xa8);
  _swift_release_n(*(undefined8 *)(unaff_x22 + 0xb8),2);
  (**(code **)(lVar3 + 8))(uVar1,uVar2);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x001c82c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 001c82c8; end: 001c82eb;  */

void FUN_001c82c8(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 001c82ec; end: 001c830b;  */

void FUN_001c82ec(void)

{
  FUN_001ca8e8();
  return;
}



/* Entry: 001c830c; end: 001c839b;  */

void FUN_001c830c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  qword *pqVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  int *piVar10;
  qword unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  pqVar2 = &segment_command_00000020.vmsize;
  _swift_task_alloc();
  *(qword **)(unaff_x22 + 0x18) = pqVar2;
  uVar3 = 0;
  FUN_001c800c(0,param_3);
  puVar4 = &DAT_007e4308;
  _swift_getWitnessTable(&DAT_007e4308,uVar3);
  *pqVar2 = unaff_x22;
  pqVar2[1] = (qword)FUN_001c839c;
  pqVar2[3] = param_1;
  uVar5 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,puVar4,uVar3,&UNK_0084673c,&UNK_00846744);
  uVar6 = 0xae60d0;
  FUN_00016c74(0xae60d0,&UNK_007ccdd0);
  lVar7 = 0;
  __ss6ResultOMa(0,uVar5,uVar6,PTR___ss5ErrorWS_0099b720);
  pqVar2[4] = lVar7;
  uVar8 = *(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  pqVar2[5] = uVar8;
  piVar10 = *(int **)(puVar4 + 0x10);
  iVar1 = *piVar10;
  puVar9 = (undefined8 *)(ulong)(uint)piVar10[1];
  _swift_task_alloc();
  pqVar2[6] = (qword)puVar9;
  *puVar9 = pqVar2;
  puVar9[1] = FUN_001ca344;
                    /* WARNING: Could not recover jumptable at 0x001ca340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar10))(puVar9,uVar8,uVar3,puVar4);
  return;
}



/* Entry: 001c839c; end: 001c83f7;  */

void FUN_001c839c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x20) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x18));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_001c83f8;
  }
  else {
    pcVar1 = (code *)0x1c8404;
  }
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(pcVar1,0,0);
  return;
}



/* Entry: 001c83f8; end: 001c840f;  */

void FUN_001c83f8(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x001c8400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 001c8410; end: 001c847b;  */

void FUN_001c8410(undefined8 param_1)

{
  int iVar1;
  qword *pqVar2;
  undefined8 uVar3;
  undefined *puVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  int *piVar11;
  long unaff_x20;
  qword qVar12;
  long unaff_x22;
  
  uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
  qVar12 = *(qword *)(unaff_x20 + 0x20);
  pcVar5 = segment_command_00000020.segname + 8;
  _swift_task_alloc();
  *(char **)(unaff_x22 + 0x10) = pcVar5;
  *(long *)pcVar5 = unaff_x22;
  *(code **)(pcVar5 + 8) = FUN_001c847c;
  *(qword *)(pcVar5 + 0x10) = qVar12;
  pqVar2 = &segment_command_00000020.vmsize;
  _swift_task_alloc();
  *(qword **)(pcVar5 + 0x18) = pqVar2;
  uVar3 = 0;
  FUN_001c800c(0,uVar7);
  puVar4 = &DAT_007e4308;
  _swift_getWitnessTable(&DAT_007e4308,uVar3);
  *pqVar2 = (qword)pcVar5;
  pqVar2[1] = (qword)FUN_001c839c;
  pqVar2[3] = param_1;
  uVar6 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,puVar4,uVar3,&UNK_0084673c,&UNK_00846744);
  uVar7 = 0xae60d0;
  FUN_00016c74(0xae60d0,&UNK_007ccdd0);
  lVar8 = 0;
  __ss6ResultOMa(0,uVar6,uVar7,PTR___ss5ErrorWS_0099b720);
  pqVar2[4] = lVar8;
  uVar9 = *(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  pqVar2[5] = uVar9;
  piVar11 = *(int **)(puVar4 + 0x10);
  iVar1 = *piVar11;
  puVar10 = (undefined8 *)(ulong)(uint)piVar11[1];
  _swift_task_alloc();
  pqVar2[6] = (qword)puVar10;
  *puVar10 = pqVar2;
  puVar10[1] = FUN_001ca344;
                    /* WARNING: Could not recover jumptable at 0x001ca340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar11))(puVar10,uVar9,uVar3,puVar4);
  return;
}



/* Entry: 001c847c; end: 001c84b7;  */

void FUN_001c847c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x001c84b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 001c84b8; end: 001c84df;  */

void FUN_001c84b8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x20))
            (*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Entry: 001c84e0; end: 001c8547;  */

void FUN_001c84e0(undefined8 param_1,long param_2)

{
  qword *pqVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  qword unaff_x22;
  
  uVar3 = *unaff_x20;
  pqVar1 = &segment_command_00000020.filesize;
  _swift_task_alloc();
  *(qword **)(unaff_x22 + 0x10) = pqVar1;
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  *pqVar1 = unaff_x22;
  pqVar1[1] = (qword)FUN_001c8548;
  pqVar1[7] = uVar3;
  pqVar1[8] = uVar2;
  pqVar1[6] = param_1;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001c85a0,0,0);
  return;
}



/* Entry: 001c8548; end: 001c8583;  */

void FUN_001c8548(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x001c8580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 001c8584; end: 001c859f;  */

void FUN_001c8584(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_2;
  *(undefined8 *)(unaff_x22 + 0x40) = param_3;
  *(undefined8 *)(unaff_x22 + 0x30) = param_1;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_001c85a0,0,0);
  return;
}



/* Entry: 001c85a0; end: 001c864b;  */

void FUN_001c85a0(void)

{
  undefined8 uVar1;
  segment_command *psVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x38);
  psVar2 = &segment_command_00000020;
  _swift_task_alloc();
  *(segment_command **)(unaff_x22 + 0x48) = psVar2;
  uVar4 = 0xae60d0;
  FUN_00016c74(0xae60d0,&UNK_007ccdd0);
  uVar3 = 0;
  __ss6ResultOMa(0,uVar1,uVar4,PTR___ss5ErrorWS_0099b720);
  psVar2->cmd = (int)unaff_x22;
  psVar2->cmdsize = (int)((ulong)unaff_x22 >> 0x20);
  *(code **)psVar2->segname = FUN_001c864c;
  uVar4 = *(undefined8 *)(unaff_x22 + 0x30);
  pcVar5 = section_00000068.sectname + 8;
  _swift_task_alloc();
  *(char **)(psVar2->segname + 8) = pcVar5;
  *(segment_command **)pcVar5 = psVar2;
  *(code **)(pcVar5 + 8) = FUN_001d4208;
                    /* WARNING: Could not recover jumptable at 0x001d4204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_001d4244(pcVar5,uVar4,0,0,FUN_001c8c18,unaff_x22 + 0x10,uVar3);
  return;
}



/* Entry: 001c864c; end: 001c8687;  */

void FUN_001c864c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x001c8684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 001c8688; end: 001c8697;  */

void FUN_001c8688(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined8 *unaff_x20;
  undefined8 *puVar4;
  undefined8 auStack_60 [2];
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  long lStack_38;
  
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = 0xae60d0;
  FUN_00016c74(*unaff_x20,0xae60d0,&UNK_007ccdd0);
  lVar1 = 0;
  __ss6ResultOMa(0,uVar3,uVar2,PTR___ss5ErrorWS_0099b720);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = (undefined8 *)((long)auStack_60 - extraout_x8);
  uVar2 = 0xff;
  uStack_40 = uVar3;
  __sSccMa(0xff,lVar1,PTR___ss5NeverON_0099b788,PTR___ss5NeverOs5ErrorsWP_0099b790);
  uVar3 = 0;
  __sSqMa(0,uVar2);
  FUN_001d496c(&lStack_38,0x1c8f54,auStack_50,uVar3);
  if (lStack_38 != 0) {
    uVar3 = 0;
    __sScEMa();
    uVar2 = uVar3;
    func_0x001c8f6c();
    _swift_allocError(uVar3,uVar2,0,0);
    __sS2cEycfC(uVar2);
    *puVar4 = uVar3;
    _swift_storeEnumTagMultiPayload(puVar4,lVar1,1);
    FUN_00087fac(puVar4,lStack_38,lVar1);
  }
  return;
}



/* Entry: 001c8698; end: 001c87c3;  */

void FUN_001c8698(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined8 *puVar4;
  undefined8 auStack_60 [2];
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  long lStack_38;
  
  uVar2 = 0xae60d0;
  FUN_00016c74(0xae60d0,&UNK_007ccdd0);
  lVar1 = 0;
  __ss6ResultOMa(0,param_2,uVar2,PTR___ss5ErrorWS_0099b720);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = (undefined8 *)((long)auStack_60 - extraout_x8);
  uVar2 = 0xff;
  uStack_40 = param_2;
  __sSccMa(0xff,lVar1,PTR___ss5NeverON_0099b788,PTR___ss5NeverOs5ErrorsWP_0099b790);
  uVar3 = 0;
  __sSqMa(0,uVar2);
  FUN_001d496c(&lStack_38,0x1c8f54,auStack_50,uVar3);
  if (lStack_38 != 0) {
    uVar3 = 0;
    __sScEMa();
    uVar2 = uVar3;
    func_0x001c8f6c();
    _swift_allocError(uVar3,uVar2,0,0);
    __sS2cEycfC(uVar2);
    *puVar4 = uVar3;
    _swift_storeEnumTagMultiPayload(puVar4,lVar1,1);
    FUN_00087fac(puVar4,lStack_38,lVar1);
  }
  return;
}



/* Entry: 001c87c4; end: 001c88cb;  */

void FUN_001c87c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long extraout_x8;
  long lVar4;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  uVar2 = 0xae60d0;
  FUN_00016c74(0xae60d0,&UNK_007ccdd0);
  lVar1 = 0;
  __ss6ResultOMa(0,param_3,uVar2,PTR___ss5ErrorWS_0099b720);
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar2 = 0xff;
  uStack_60 = param_3;
  uStack_58 = param_1;
  __sSccMa(0xff,lVar1,PTR___ss5NeverON_0099b788,PTR___ss5NeverOs5ErrorsWP_0099b790);
  uVar3 = 0;
  __sSqMa(0,uVar2);
  FUN_001d496c(&lStack_48,0x1ca11c,auStack_70,uVar3);
  if (lStack_48 != 0) {
    (**(code **)(lVar4 + 0x10))(auStack_80 + -extraout_x8,param_1,lVar1);
    FUN_00087fac(auStack_80 + -extraout_x8,lStack_48,lVar1);
  }
  return;
}



/* Entry: 001c88cc; end: 001c8a2b;  */

void FUN_001c88cc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long extraout_x8;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  
  lVar2 = 0;
  FUN_001c7e04(0,param_4);
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = (undefined8 *)(&stack0xffffffffffffffb0 + -extraout_x8);
  (**(code **)(lVar6 + 0x10))(puVar5,param_2,lVar2);
  puVar3 = puVar5;
  _swift_getEnumCaseMultiPayload(puVar5,lVar2);
  iVar1 = (int)puVar3;
  if (iVar1 < 3) {
    if (iVar1 == 0) {
      (**(code **)(lVar6 + 8))(param_2,lVar2);
      uVar4 = *puVar5;
      _swift_storeEnumTagMultiPayload(param_2,lVar2,4);
      goto LAB_001c8a08;
    }
    if (iVar1 == 1) {
      (**(code **)(lVar6 + 8))(puVar5,lVar2);
    }
    else {
      (**(code **)(lVar6 + 8))(param_2,lVar2);
      uVar4 = 0xae60d0;
      FUN_00016c74(0xae60d0,&UNK_007ccdd0);
      lVar6 = 0;
      __ss6ResultOMa(0,param_4,uVar4,PTR___ss5ErrorWS_0099b720);
      (**(code **)(*(long *)(lVar6 + -8) + 0x10))(param_2,param_3,lVar6);
      _swift_storeEnumTagMultiPayload(param_2,lVar2,1);
    }
  }
  uVar4 = 0;
LAB_001c8a08:
  *param_1 = uVar4;
  return;
}



/* Entry: 001c8a2c; end: 001c8c17;  */

void FUN_001c8a2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long lVar5;
  code *pcVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar1 = 0xae60d0;
  uStack_90 = param_2;
  FUN_00016c74(0xae60d0,&UNK_007ccdd0);
  lVar2 = 0;
  __ss6ResultOMa(0,param_3,uVar1,PTR___ss5ErrorWS_0099b720);
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar11 + 0x40));
  puVar7 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar8 = (long)puVar7 - extraout_x12;
  lVar3 = 0;
  __sSqMa(0,lVar2);
  lVar5 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar5 + 0x40));
  lVar10 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar9 = lVar10 - extraout_x12_00;
  uStack_98 = param_1;
  uStack_70 = param_3;
  uStack_68 = param_1;
  FUN_001d496c(lVar9,FUN_001ca104,auStack_80,lVar3);
  (**(code **)(lVar5 + 0x10))(lVar10,lVar9,lVar3);
  lVar4 = lVar10;
  (**(code **)(lVar11 + 0x30))(lVar10,1,lVar2);
  if ((int)lVar4 == 1) {
    pcVar6 = *(code **)(lVar5 + 8);
    (*pcVar6)(lVar9,lVar3);
    (*pcVar6)(lVar10,lVar3);
  }
  else {
    (**(code **)(lVar11 + 0x20))(lVar8,lVar10,lVar2);
    (**(code **)(lVar11 + 0x10))(puVar7,lVar8,lVar2);
    FUN_00087fac(puVar7,uStack_98,lVar2);
    (**(code **)(lVar11 + 8))(lVar8,lVar2);
    (**(code **)(lVar5 + 8))(lVar9,lVar3);
  }
  return;
}



/* Entry: 001c8c18; end: 001c8c1f;  */

void FUN_001c8c18(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long lVar6;
  code *pcVar7;
  long unaff_x20;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_90 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = 0xae60d0;
  FUN_00016c74(0xae60d0,&UNK_007ccdd0);
  lVar3 = 0;
  __ss6ResultOMa(0,uVar1,uVar2,PTR___ss5ErrorWS_0099b720);
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar12 + 0x40));
  puVar8 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar9 = (long)puVar8 - extraout_x12;
  lVar4 = 0;
  __sSqMa(0,lVar3);
  lVar6 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar6 + 0x40));
  lVar11 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar10 = lVar11 - extraout_x12_00;
  uStack_98 = param_1;
  uStack_70 = uVar1;
  uStack_68 = param_1;
  FUN_001d496c(lVar10,FUN_001ca104,auStack_80,lVar4);
  (**(code **)(lVar6 + 0x10))(lVar11,lVar10,lVar4);
  lVar5 = lVar11;
  (**(code **)(lVar12 + 0x30))(lVar11,1,lVar3);
  if ((int)lVar5 == 1) {
    pcVar7 = *(code **)(lVar6 + 8);
    (*pcVar7)(lVar10,lVar4);
    (*pcVar7)(lVar11,lVar4);
  }
  else {
    (**(code **)(lVar12 + 0x20))(lVar9,lVar11,lVar3);
    (**(code **)(lVar12 + 0x10))(puVar8,lVar9,lVar3);
    FUN_00087fac(puVar8,uStack_98,lVar3);
    (**(code **)(lVar12 + 8))(lVar9,lVar3);
    (**(code **)(lVar6 + 8))(lVar10,lVar4);
  }
  return;
}



/* Entry: 001c8c20; end: 001c8e4b;  */

void FUN_001c8c20(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long extraout_x8;
  code *pcVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  
  lVar2 = 0;
  FUN_001c7e04(0,param_4);
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = &stack0xffffffffffffffb0 + -extraout_x8;
  (**(code **)(lVar9 + 0x10))(puVar7,param_2,lVar2);
  puVar3 = puVar7;
  _swift_getEnumCaseMultiPayload(puVar7,lVar2);
  iVar1 = (int)puVar3;
  if (iVar1 < 2) {
    if (iVar1 == 0) goto LAB_001c8cc0;
    (**(code **)(lVar9 + 8))(param_2,lVar2);
    uVar5 = 0xae60d0;
    FUN_00016c74(0xae60d0,&UNK_007ccdd0);
    lVar9 = 0;
    __ss6ResultOMa(0,param_4,uVar5,PTR___ss5ErrorWS_0099b720);
    lVar8 = *(long *)(lVar9 + -8);
    (**(code **)(lVar8 + 0x20))(param_1,puVar7,lVar9);
    _swift_storeEnumTagMultiPayload(param_2,lVar2,4);
    pcVar6 = *(code **)(lVar8 + 0x38);
  }
  else {
    if (iVar1 == 2) {
      (**(code **)(lVar9 + 8))(param_2,lVar2);
      *param_2 = param_3;
      _swift_storeEnumTagMultiPayload(param_2,lVar2,0);
      uVar5 = 0xae60d0;
      FUN_00016c74(0xae60d0,&UNK_007ccdd0);
      lVar9 = 0;
      __ss6ResultOMa(0,param_4,uVar5,PTR___ss5ErrorWS_0099b720);
      pcVar6 = *(code **)(*(long *)(lVar9 + -8) + 0x38);
      uVar5 = 1;
      goto LAB_001c8e28;
    }
LAB_001c8cc0:
    uVar4 = 0;
    __sScEMa();
    uVar5 = uVar4;
    func_0x001c8f6c();
    _swift_allocError(uVar4,uVar5,0,0);
    __sS2cEycfC(uVar5);
    *param_1 = uVar4;
    uVar5 = 0xae60d0;
    FUN_00016c74(0xae60d0,&UNK_007ccdd0);
    lVar9 = 0;
    __ss6ResultOMa(0,param_4,uVar5,PTR___ss5ErrorWS_0099b720);
    _swift_storeEnumTagMultiPayload(param_1,lVar9,1);
    pcVar6 = *(code **)(*(long *)(lVar9 + -8) + 0x38);
  }
  uVar5 = 0;
LAB_001c8e28:
  (*pcVar6)(param_1,uVar5,1,lVar9);
  return;
}



/* Entry: 001c8e4c; end: 001c8f53;  */

void FUN_001c8e4c(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long extraout_x8;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar2 = 0;
  FUN_001c7e04();
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = (undefined8 *)(&stack0xffffffffffffffc0 + -extraout_x8);
  (**(code **)(lVar6 + 0x10))(puVar4,param_2,lVar2);
  puVar3 = puVar4;
  _swift_getEnumCaseMultiPayload(puVar4,lVar2);
  iVar1 = (int)puVar3;
  if (iVar1 < 3) {
    if (iVar1 == 0) {
      (**(code **)(lVar6 + 8))(param_2,lVar2);
      uVar5 = *puVar4;
      _swift_storeEnumTagMultiPayload(param_2,lVar2,3);
      goto LAB_001c8f34;
    }
    if (iVar1 == 1) {
      (**(code **)(lVar6 + 8))(puVar4,lVar2);
    }
    else {
      (**(code **)(lVar6 + 8))(param_2,lVar2);
      _swift_storeEnumTagMultiPayload(param_2,lVar2,3);
    }
  }
  uVar5 = 0;
LAB_001c8f34:
  *param_1 = uVar5;
  return;
}



/* Entry: 001c8f54; end: 001c8faf;  */

void FUN_001c8f54(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_001c8e4c(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 001c8fb0; end: 001c8fb7;  */

void FUN_001c8fb0(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b1f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericValueMetadata_0099b938)();
  return;
}



/* Entry: 001c8fb8; end: 001c904f;  */

void FUN_001c8fb8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_30 = &UNK_007e4360;
  uVar3 = *(ulong *)(param_1 + 0x10);
  uVar1 = 0xae60d0;
  FUN_00016c74(0xae60d0,&UNK_007ccdd0);
  lVar2 = 0x13f;
  __ss6ResultOMa(0x13f,uVar3,uVar1,PTR___ss5ErrorWS_0099b720);
  if (uVar3 < 0x40) {
    lStack_28 = *(long *)(lVar2 + -8) + 0x40;
    _swift_initEnumMetadataMultiPayload(param_1,0,2,&puStack_30);
  }
  return;
}



/* Entry: 001c9050; end: 001c923b;  */

long * FUN_001c9050(long *param_1,uint *param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  lVar4 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar3 = *(ulong *)(lVar4 + 0x40);
  if (uVar3 < 9) {
    uVar3 = 8;
  }
  lVar1 = 8;
  if (8 < uVar3 + 1) {
    lVar1 = uVar3 + 1;
  }
  if ((*(uint *)(lVar4 + 0x50) & 0x1000f8) != 0 || 0x18 < lVar1 + 1U) {
    uVar6 = *(uint *)(lVar4 + 0x50) & 0xf8;
    lVar4 = *(long *)param_2;
    *param_1 = lVar4;
    _swift_retain(lVar4);
    return (long *)(lVar4 + ((ulong)(uVar6 + 0x17 & (uVar6 ^ 0xffffffff)) & 0x1f8));
  }
  bVar2 = *(byte *)((long)param_2 + lVar1);
  uVar6 = (uint)bVar2;
  if (1 < bVar2) {
    uVar7 = (uint)lVar1;
    uVar5 = 4;
    if (uVar7 < 4) {
      uVar5 = uVar7;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_001c9140;
      uVar5 = (uint)(byte)*param_2;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*param_2;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*param_2;
    }
    else {
      uVar5 = *param_2;
    }
    uVar6 = uVar5 | bVar2 - 2 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar6 = uVar5;
    }
    uVar6 = uVar6 + 2;
  }
LAB_001c9140:
  if (uVar6 != 1) {
    if (uVar6 == 0) {
      *param_1 = *(long *)param_2;
      *(undefined1 *)((long)param_1 + lVar1) = 0;
      return param_1;
    }
                    /* WARNING: Could not recover jumptable at 0x0077a858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_0099a3f8)(param_1,param_2,lVar1 + 1U);
    return param_1;
  }
  bVar2 = *(byte *)((long)param_2 + uVar3);
  uVar6 = (uint)bVar2;
  if (1 < bVar2) {
    uVar7 = (uint)uVar3;
    uVar5 = 4;
    if (uVar7 < 4) {
      uVar5 = uVar7;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_001c91e4;
      uVar5 = (uint)(byte)*param_2;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*param_2;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*param_2;
    }
    else {
      uVar5 = *param_2;
    }
    uVar6 = uVar5 | bVar2 - 2 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar6 = uVar5;
    }
    uVar6 = uVar6 + 2;
  }
LAB_001c91e4:
  if (uVar6 != 1) {
    (**(code **)(lVar4 + 0x10))();
  }
  else {
    lVar4 = *(long *)param_2;
    _swift_errorRetain(lVar4);
    *param_1 = lVar4;
  }
  *(bool *)((long)param_1 + uVar3) = uVar6 == 1;
  *(undefined1 *)((long)param_1 + lVar1) = 1;
  return param_1;
}



/* Entry: 001c923c; end: 001c936b;  */

void FUN_001c923c(uint *param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  lVar3 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  uVar4 = *(ulong *)(lVar3 + 0x40);
  if (uVar4 < 9) {
    uVar4 = 8;
  }
  lVar1 = 8;
  if (8 < uVar4 + 1) {
    lVar1 = uVar4 + 1;
  }
  bVar2 = *(byte *)((long)param_1 + lVar1);
  uVar6 = (uint)bVar2;
  if (1 < bVar2) {
    uVar5 = (uint)lVar1;
    uVar6 = 4;
    if (uVar5 < 4) {
      uVar6 = uVar5;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) {
        return;
      }
      uVar7 = (uint)(byte)*param_1;
    }
    else if (uVar6 == 2) {
      uVar7 = (uint)(ushort)*param_1;
    }
    else if (uVar6 == 3) {
      uVar7 = (uint)(uint3)*param_1;
    }
    else {
      uVar7 = *param_1;
    }
    uVar6 = uVar7 | bVar2 - 2 << (ulong)((uVar5 & 3) << 3);
    if (3 < uVar5) {
      uVar6 = uVar7;
    }
    uVar6 = uVar6 + 2;
  }
  if (uVar6 != 1) {
    return;
  }
  bVar2 = *(byte *)((long)param_1 + uVar4);
  uVar6 = (uint)bVar2;
  if (1 < bVar2) {
    uVar7 = (uint)uVar4;
    uVar5 = 4;
    if (uVar7 < 4) {
      uVar5 = uVar7;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_001c9354;
      uVar5 = (uint)(byte)*param_1;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*param_1;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*param_1;
    }
    else {
      uVar5 = *param_1;
    }
    uVar6 = uVar5 | bVar2 - 2 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar6 = uVar5;
    }
    uVar6 = uVar6 + 2;
  }
LAB_001c9354:
  if (uVar6 != 1) {
                    /* WARNING: Could not recover jumptable at 0x001c9368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077b344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_0099b9d8)(*(undefined8 *)param_1);
  return;
}



/* Entry: 001c936c; end: 001c950f;  */

void FUN_001c936c(undefined8 *param_1,uint *param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  uint uVar8;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar4 = *(ulong *)(lVar3 + 0x40);
  if (uVar4 < 9) {
    uVar4 = 8;
  }
  lVar1 = 8;
  if (8 < uVar4 + 1) {
    lVar1 = uVar4 + 1;
  }
  bVar2 = *(byte *)((long)param_2 + lVar1);
  uVar5 = (uint)bVar2;
  if (1 < bVar2) {
    uVar8 = (uint)lVar1;
    uVar6 = 4;
    if (uVar8 < 4) {
      uVar6 = uVar8;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_001c9414;
      uVar6 = (uint)(byte)*param_2;
    }
    else if (uVar6 == 2) {
      uVar6 = (uint)(ushort)*param_2;
    }
    else if (uVar6 == 3) {
      uVar6 = (uint)(uint3)*param_2;
    }
    else {
      uVar6 = *param_2;
    }
    uVar5 = uVar6 | bVar2 - 2 << (ulong)((uVar8 & 3) << 3);
    if (3 < uVar8) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 2;
  }
LAB_001c9414:
  if (uVar5 != 1) {
    if (uVar5 == 0) {
      *param_1 = *(undefined8 *)param_2;
      *(undefined1 *)((long)param_1 + lVar1) = 0;
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0077a858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_0099a3f8)(param_1,param_2,lVar1 + 1);
    return;
  }
  bVar2 = *(byte *)((long)param_2 + uVar4);
  uVar5 = (uint)bVar2;
  if (1 < bVar2) {
    uVar8 = (uint)uVar4;
    uVar6 = 4;
    if (uVar8 < 4) {
      uVar6 = uVar8;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_001c94b8;
      uVar6 = (uint)(byte)*param_2;
    }
    else if (uVar6 == 2) {
      uVar6 = (uint)(ushort)*param_2;
    }
    else if (uVar6 == 3) {
      uVar6 = (uint)(uint3)*param_2;
    }
    else {
      uVar6 = *param_2;
    }
    uVar5 = uVar6 | bVar2 - 2 << (ulong)((uVar8 & 3) << 3);
    if (3 < uVar8) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 2;
  }
LAB_001c94b8:
  if (uVar5 != 1) {
    (**(code **)(lVar3 + 0x10))();
  }
  else {
    uVar7 = *(undefined8 *)param_2;
    _swift_errorRetain(uVar7);
    *param_1 = uVar7;
  }
  *(bool *)((long)param_1 + uVar4) = uVar5 == 1;
  *(undefined1 *)((long)param_1 + lVar1) = 1;
  return;
}



/* Entry: 001c9510; end: 001c9817;  */

void FUN_001c9510(uint *param_1,uint *param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  
  if (param_1 == param_2) {
    return;
  }
  lVar6 = *(long *)(param_3 + 0x10);
  lVar10 = *(long *)(lVar6 + -8);
  uVar3 = *(ulong *)(lVar10 + 0x40);
  if (uVar3 < 9) {
    uVar3 = 8;
  }
  lVar1 = 8;
  if (8 < uVar3 + 1) {
    lVar1 = uVar3 + 1;
  }
  uVar8 = (uint)lVar1;
  bVar2 = *(byte *)((long)param_1 + lVar1);
  uVar4 = (uint)bVar2;
  uVar9 = (uint)uVar3;
  if (bVar2 < 2) {
LAB_001c95c8:
    if (uVar4 == 1) {
      bVar2 = *(byte *)((long)param_1 + uVar3);
      uVar4 = (uint)bVar2;
      if (1 < bVar2) {
        uVar5 = 4;
        if (uVar9 < 4) {
          uVar5 = uVar9;
        }
        if ((int)uVar5 < 2) {
          if (uVar5 == 0) goto LAB_001c9644;
          uVar5 = (uint)(byte)*param_1;
        }
        else if (uVar5 == 2) {
          uVar5 = (uint)(ushort)*param_1;
        }
        else if (uVar5 == 3) {
          uVar5 = (uint)(uint3)*param_1;
        }
        else {
          uVar5 = *param_1;
        }
        uVar4 = uVar5 | bVar2 - 2 << (ulong)((uVar9 & 3) << 3);
        if (3 < uVar9) {
          uVar4 = uVar5;
        }
        uVar4 = uVar4 + 2;
      }
LAB_001c9644:
      if (uVar4 == 1) {
        _swift_errorRelease(*(undefined8 *)param_1);
      }
      else {
        (**(code **)(lVar10 + 8))(param_1,lVar6);
      }
    }
  }
  else {
    uVar4 = 4;
    if (uVar8 < 4) {
      uVar4 = uVar8;
    }
    if (1 < (int)uVar4) {
      if (uVar4 == 2) {
        uVar5 = (uint)(ushort)*param_1;
      }
      else if (uVar4 == 3) {
        uVar5 = (uint)(uint3)*param_1;
      }
      else {
        uVar5 = *param_1;
      }
LAB_001c95b0:
      uVar4 = uVar5 | bVar2 - 2 << (ulong)(uVar8 << 3 & 0x1f);
      if (3 < uVar8) {
        uVar4 = uVar5;
      }
      uVar4 = uVar4 + 2;
      goto LAB_001c95c8;
    }
    if (uVar4 != 0) {
      uVar5 = (uint)(byte)*param_1;
      goto LAB_001c95b0;
    }
  }
  bVar2 = *(byte *)((long)param_2 + lVar1);
  uVar4 = (uint)bVar2;
  if (1 < bVar2) {
    uVar5 = 4;
    if (uVar8 < 4) {
      uVar5 = uVar8;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_001c96ec;
      uVar5 = (uint)(byte)*param_2;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*param_2;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*param_2;
    }
    else {
      uVar5 = *param_2;
    }
    uVar4 = uVar5 | bVar2 - 2 << (ulong)(uVar8 << 3 & 0x1f);
    if (3 < uVar8) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 2;
  }
LAB_001c96ec:
  if (uVar4 != 1) {
    if (uVar4 == 0) {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      *(byte *)((long)param_1 + lVar1) = 0;
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0077a858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_0099a3f8)(param_1,param_2,lVar1 + 1);
    return;
  }
  bVar2 = *(byte *)((long)param_2 + uVar3);
  uVar4 = (uint)bVar2;
  if (bVar2 < 2) {
LAB_001c9790:
    if (uVar4 == 1) {
LAB_001c9798:
      uVar7 = *(undefined8 *)param_2;
      _swift_errorRetain(uVar7);
      *(undefined8 *)param_1 = uVar7;
      bVar2 = 1;
      goto LAB_001c97f4;
    }
  }
  else {
    uVar8 = 4;
    if (uVar9 < 4) {
      uVar8 = uVar9;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_001c9790;
      uVar4 = (uint)(byte)*param_2;
    }
    else if (uVar8 == 2) {
      uVar4 = (uint)(ushort)*param_2;
    }
    else if (uVar8 == 3) {
      uVar4 = (uint)(uint3)*param_2;
    }
    else {
      uVar4 = *param_2;
    }
    if (3 < uVar9) {
      uVar4 = uVar4 + 2;
      goto LAB_001c9790;
    }
    if ((uVar4 | bVar2 - 2 << (ulong)((uVar9 & 3) << 3)) == 0xffffffff) goto LAB_001c9798;
  }
  (**(code **)(lVar10 + 0x10))(param_1,param_2,lVar6);
  bVar2 = 0;
LAB_001c97f4:
  *(byte *)((long)param_1 + uVar3) = bVar2;
  *(byte *)((long)param_1 + lVar1) = 1;
  return;
}



/* Entry: 001c9818; end: 001c99ab;  */

void FUN_001c9818(undefined8 *param_1,uint *param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar4 = *(ulong *)(lVar3 + 0x40);
  if (uVar4 < 9) {
    uVar4 = 8;
  }
  lVar1 = 8;
  if (8 < uVar4 + 1) {
    lVar1 = uVar4 + 1;
  }
  bVar2 = *(byte *)((long)param_2 + lVar1);
  uVar5 = (uint)bVar2;
  if (1 < bVar2) {
    uVar7 = (uint)lVar1;
    uVar6 = 4;
    if (uVar7 < 4) {
      uVar6 = uVar7;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_001c98c0;
      uVar6 = (uint)(byte)*param_2;
    }
    else if (uVar6 == 2) {
      uVar6 = (uint)(ushort)*param_2;
    }
    else if (uVar6 == 3) {
      uVar6 = (uint)(uint3)*param_2;
    }
    else {
      uVar6 = *param_2;
    }
    uVar5 = uVar6 | bVar2 - 2 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 2;
  }
LAB_001c98c0:
  if (uVar5 != 1) {
    if (uVar5 == 0) {
      *param_1 = *(undefined8 *)param_2;
      *(undefined1 *)((long)param_1 + lVar1) = 0;
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0077a858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_0099a3f8)(param_1,param_2,lVar1 + 1);
    return;
  }
  bVar2 = *(byte *)((long)param_2 + uVar4);
  uVar5 = (uint)bVar2;
  if (1 < bVar2) {
    uVar7 = (uint)uVar4;
    uVar6 = 4;
    if (uVar7 < 4) {
      uVar6 = uVar7;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_001c9964;
      uVar6 = (uint)(byte)*param_2;
    }
    else if (uVar6 == 2) {
      uVar6 = (uint)(ushort)*param_2;
    }
    else if (uVar6 == 3) {
      uVar6 = (uint)(uint3)*param_2;
    }
    else {
      uVar6 = *param_2;
    }
    uVar5 = uVar6 | bVar2 - 2 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 2;
  }
LAB_001c9964:
  if (uVar5 != 1) {
    (**(code **)(lVar3 + 0x20))();
  }
  else {
    *param_1 = *(undefined8 *)param_2;
  }
  *(bool *)((long)param_1 + uVar4) = uVar5 == 1;
  *(undefined1 *)((long)param_1 + lVar1) = 1;
  return;
}



/* Entry: 001c99ac; end: 001c9c87;  */

void FUN_001c99ac(uint *param_1,uint *param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  
  if (param_1 == param_2) {
    return;
  }
  lVar7 = *(long *)(param_3 + 0x10);
  lVar9 = *(long *)(lVar7 + -8);
  uVar3 = *(ulong *)(lVar9 + 0x40);
  if (uVar3 < 9) {
    uVar3 = 8;
  }
  lVar1 = 8;
  if (8 < uVar3 + 1) {
    lVar1 = uVar3 + 1;
  }
  uVar6 = (uint)lVar1;
  bVar2 = *(byte *)((long)param_1 + lVar1);
  uVar4 = (uint)bVar2;
  uVar8 = (uint)uVar3;
  if (bVar2 < 2) {
LAB_001c9a64:
    if (uVar4 == 1) {
      bVar2 = *(byte *)((long)param_1 + uVar3);
      uVar4 = (uint)bVar2;
      if (1 < bVar2) {
        uVar5 = 4;
        if (uVar8 < 4) {
          uVar5 = uVar8;
        }
        if ((int)uVar5 < 2) {
          if (uVar5 == 0) goto LAB_001c9ae0;
          uVar5 = (uint)(byte)*param_1;
        }
        else if (uVar5 == 2) {
          uVar5 = (uint)(ushort)*param_1;
        }
        else if (uVar5 == 3) {
          uVar5 = (uint)(uint3)*param_1;
        }
        else {
          uVar5 = *param_1;
        }
        uVar4 = uVar5 | bVar2 - 2 << (ulong)((uVar8 & 3) << 3);
        if (3 < uVar8) {
          uVar4 = uVar5;
        }
        uVar4 = uVar4 + 2;
      }
LAB_001c9ae0:
      if (uVar4 == 1) {
        _swift_errorRelease(*(undefined8 *)param_1);
      }
      else {
        (**(code **)(lVar9 + 8))(param_1,lVar7);
      }
    }
  }
  else {
    uVar4 = 4;
    if (uVar6 < 4) {
      uVar4 = uVar6;
    }
    if (1 < (int)uVar4) {
      if (uVar4 == 2) {
        uVar5 = (uint)(ushort)*param_1;
      }
      else if (uVar4 == 3) {
        uVar5 = (uint)(uint3)*param_1;
      }
      else {
        uVar5 = *param_1;
      }
LAB_001c9a4c:
      uVar4 = uVar5 | bVar2 - 2 << (ulong)(uVar6 << 3 & 0x1f);
      if (3 < uVar6) {
        uVar4 = uVar5;
      }
      uVar4 = uVar4 + 2;
      goto LAB_001c9a64;
    }
    if (uVar4 != 0) {
      uVar5 = (uint)(byte)*param_1;
      goto LAB_001c9a4c;
    }
  }
  bVar2 = *(byte *)((long)param_2 + lVar1);
  uVar4 = (uint)bVar2;
  if (1 < bVar2) {
    uVar5 = 4;
    if (uVar6 < 4) {
      uVar5 = uVar6;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_001c9b88;
      uVar5 = (uint)(byte)*param_2;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*param_2;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*param_2;
    }
    else {
      uVar5 = *param_2;
    }
    uVar4 = uVar5 | bVar2 - 2 << (ulong)(uVar6 << 3 & 0x1f);
    if (3 < uVar6) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 2;
  }
LAB_001c9b88:
  if (uVar4 != 1) {
    if (uVar4 == 0) {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      *(byte *)((long)param_1 + lVar1) = 0;
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0077a858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_0099a3f8)(param_1,param_2,lVar1 + 1);
    return;
  }
  bVar2 = *(byte *)((long)param_2 + uVar3);
  uVar4 = (uint)bVar2;
  if (1 < bVar2) {
    uVar6 = 4;
    if (uVar8 < 4) {
      uVar6 = uVar8;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_001c9c34;
      uVar6 = (uint)(byte)*param_2;
    }
    else if (uVar6 == 2) {
      uVar6 = (uint)(ushort)*param_2;
    }
    else if (uVar6 == 3) {
      uVar6 = (uint)(uint3)*param_2;
    }
    else {
      uVar6 = *param_2;
    }
    uVar4 = uVar6 | bVar2 - 2 << (ulong)((uVar8 & 3) << 3);
    if (3 < uVar8) {
      uVar4 = uVar6;
    }
    uVar4 = uVar4 + 2;
  }
LAB_001c9c34:
  if (uVar4 != 1) {
    (**(code **)(lVar9 + 0x20))(param_1,param_2,lVar7);
  }
  else {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
  }
  *(bool *)((long)param_1 + uVar3) = uVar4 == 1;
  *(byte *)((long)param_1 + lVar1) = 1;
  return;
}



/* Entry: 001c9c88; end: 001c9dbf;  */

int FUN_001c9c88(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar6 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40);
  if (uVar6 < 9) {
    uVar6 = 8;
  }
  lVar3 = 8;
  if (8 < uVar6 + 1) {
    lVar3 = uVar6 + 1;
  }
  uVar1 = 0xfd;
  if ((uint)lVar3 < 4) {
    uVar1 = 0xfd - (2U >> (ulong)(((uint)lVar3 & 3) << 3));
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 <= uVar1) goto LAB_001c9d58;
  uVar6 = lVar3 + 1;
  uVar7 = (uint)uVar6;
  uVar4 = uVar7 << 3;
  if (uVar7 < 4) {
    uVar8 = ((param_2 + ~(-1 << (ulong)(uVar4 & 0x1f))) - uVar1 >> (ulong)(uVar4 & 0x1f)) + 1;
    if (uVar8 < 0x100) {
      if (uVar8 < 2) goto LAB_001c9d58;
      goto LAB_001c9ce4;
    }
    if (uVar8 >> 0x10 == 0) {
      uVar8 = (uint)*(ushort *)((long)param_1 + uVar6);
    }
    else {
      uVar8 = *(uint *)((long)param_1 + uVar6);
    }
  }
  else {
LAB_001c9ce4:
    uVar8 = (uint)*(byte *)((long)param_1 + uVar6);
  }
  if (uVar8 != 0) {
    uVar2 = 0;
    if (uVar7 < 4) {
      uVar2 = uVar8 - 1 << (ulong)(uVar4 & 0x1f);
    }
    if (uVar7 != 0) {
      uVar4 = 4;
      if (uVar7 < 4) {
        uVar4 = uVar7;
      }
      if ((int)uVar4 < 3) {
        if (uVar4 == 1) {
          uVar6 = (ulong)(byte)*param_1;
        }
        else {
          uVar6 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar4 == 3) {
        uVar6 = (ulong)(uint3)*param_1;
      }
      else {
        uVar6 = (ulong)*param_1;
      }
    }
    return uVar1 + ((uint)uVar6 | uVar2) + 1;
  }
LAB_001c9d58:
  iVar5 = 0x100 - (uint)*(byte *)((long)param_1 + lVar3);
  if (uVar1 <= (*(byte *)((long)param_1 + lVar3) ^ 0xff)) {
    iVar5 = 0;
  }
  return iVar5;
}



/* Entry: 001c9dc0; end: 001c9f8b;  */

void FUN_001c9dc0(uint *param_1,uint param_2,uint param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  undefined2 uVar5;
  byte bVar6;
  ulong uVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  
  uVar7 = *(ulong *)(*(long *)(*(long *)(param_4 + 0x10) + -8) + 0x40);
  if (uVar7 < 9) {
    uVar7 = 8;
  }
  lVar4 = 8;
  if (8 < uVar7 + 1) {
    lVar4 = uVar7 + 1;
  }
  bVar8 = 2;
  uVar3 = 0xfd;
  if ((uint)lVar4 < 4) {
    uVar3 = 0xfd - (2U >> (ulong)(((uint)lVar4 & 3) << 3));
  }
  lVar2 = lVar4 + 1;
  uVar9 = (uint)lVar2;
  if (uVar3 < param_3) {
    uVar1 = ((param_3 + ~(-1 << (ulong)(uVar9 << 3 & 0x1f))) - uVar3 >> (ulong)(uVar9 << 3 & 0x1f))
            + 1;
    if (0xffff < uVar1) {
      bVar8 = 4;
    }
    if (uVar1 < 0x100) {
      bVar8 = 1 < uVar1;
    }
    bVar6 = 1;
    if (uVar9 < 4) {
      bVar6 = bVar8;
    }
  }
  else {
    bVar6 = 0;
  }
  if (uVar3 < param_2) {
    param_2 = param_2 + ~uVar3;
    if (uVar9 < 4) {
      iVar10 = (param_2 >> (ulong)(uVar9 << 3 & 0x1f)) + 1;
      if (uVar9 != 0) {
        uVar3 = param_2 & (-1 << (ulong)(uVar9 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,lVar2);
        uVar5 = (undefined2)uVar3;
        if (uVar9 == 3) {
          *(undefined2 *)param_1 = uVar5;
          *(char *)((long)param_1 + 2) = (char)(uVar3 >> 0x10);
        }
        else if (uVar9 == 2) {
          *(undefined2 *)param_1 = uVar5;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,lVar2);
      *param_1 = param_2;
      iVar10 = 1;
    }
    if (bVar6 < 2) {
      if (bVar6 != 0) {
        *(char *)((long)param_1 + lVar2) = (char)iVar10;
      }
    }
    else if (bVar6 == 2) {
      *(short *)((long)param_1 + lVar2) = (short)iVar10;
    }
    else {
      *(int *)((long)param_1 + lVar2) = iVar10;
    }
  }
  else {
    if (bVar6 < 2) {
      if (bVar6 != 0) {
        *(undefined1 *)((long)param_1 + lVar2) = 0;
      }
    }
    else if (bVar6 == 2) {
      *(undefined2 *)((long)param_1 + lVar2) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar2) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + lVar4) = -(char)param_2;
    }
  }
  return;
}



/* Entry: 001c9f8c; end: 001ca02f;  */

uint FUN_001c9f8c(uint *param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  
  uVar5 = *(ulong *)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 0x40);
  if (uVar5 < 9) {
    uVar5 = 8;
  }
  lVar1 = 8;
  if (8 < uVar5 + 1) {
    lVar1 = uVar5 + 1;
  }
  bVar2 = *(byte *)((long)param_1 + lVar1);
  uVar3 = (uint)bVar2;
  if (1 < bVar2) {
    uVar6 = (uint)lVar1;
    uVar4 = 4;
    if (uVar6 < 4) {
      uVar4 = uVar6;
    }
    if ((int)uVar4 < 2) {
      if (uVar4 == 0) {
        return uVar3;
      }
      uVar4 = (uint)(byte)*param_1;
    }
    else if (uVar4 == 2) {
      uVar4 = (uint)(ushort)*param_1;
    }
    else if (uVar4 == 3) {
      uVar4 = (uint)(uint3)*param_1;
    }
    else {
      uVar4 = *param_1;
    }
    uVar3 = uVar4 | bVar2 - 2 << (ulong)((uVar6 & 3) << 3);
    if (3 < uVar6) {
      uVar3 = uVar4;
    }
    uVar3 = uVar3 + 2;
  }
  return uVar3;
}



/* Entry: 001ca030; end: 001ca103;  */

void FUN_001ca030(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined2 uVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar4 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40);
  if (uVar4 < 9) {
    uVar4 = 8;
  }
  lVar2 = 8;
  if (8 < uVar4 + 1) {
    lVar2 = uVar4 + 1;
  }
  if (param_2 < 2) {
    *(char *)((long)param_1 + lVar2) = (char)param_2;
  }
  else {
    param_2 = param_2 - 2;
    uVar5 = (uint)lVar2;
    if (uVar5 < 4) {
      *(char *)((long)param_1 + lVar2) = (char)(param_2 >> (ulong)(uVar5 << 3 & 0x1f)) + '\x02';
      if (uVar5 != 0) {
        uVar1 = param_2 & (-1 << (ulong)(uVar5 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,lVar2);
        uVar3 = (undefined2)uVar1;
        if (uVar5 == 3) {
          *(undefined2 *)param_1 = uVar3;
          *(char *)((long)param_1 + 2) = (char)(uVar1 >> 0x10);
        }
        else if (uVar5 == 2) {
          *(undefined2 *)param_1 = uVar3;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      *(undefined1 *)((long)param_1 + lVar2) = 2;
      _bzero(param_1,lVar2);
      *param_1 = param_2;
    }
  }
  return;
}


