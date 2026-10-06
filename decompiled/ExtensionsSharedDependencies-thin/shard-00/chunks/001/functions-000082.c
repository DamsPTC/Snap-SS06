/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00190934; end: 00190a27;  */

undefined8 * FUN_00190934(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x00023304(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 00190a28; end: 00190a77;  */

undefined8 * FUN_00190a28(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  FUN_00023358(uVar1,uVar2);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRelease(uVar1);
  param_1[3] = param_2[3];
  return param_1;
}



/* Entry: 00190a78; end: 00190cdb;  */

int FUN_00190a78(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 00190cdc; end: 00190d5b;  */

undefined8 * FUN_00190cdc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x00023304(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return param_1;
}



/* Entry: 00190d5c; end: 00190d93;  */

undefined8 * FUN_00190d5c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  FUN_00023358(uVar1,uVar2);
  return param_1;
}



/* Entry: 00190d94; end: 00190f97;  */

int FUN_00190d94(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 00190f98; end: 0019105b;  */

undefined8 * FUN_00190f98(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  uVar2 = param_2[2];
  _swift_bridgeObjectRetain();
  func_0x00023304(uVar1,uVar2);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  *(undefined2 *)(param_1 + 3) = *(undefined2 *)(param_2 + 3);
  return param_1;
}



/* Entry: 0019105c; end: 0019106f;  */

void FUN_0019105c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar3 = *(undefined8 *)((long)param_2 + 10);
  *(undefined8 *)((long)param_1 + 0x12) = *(undefined8 *)((long)param_2 + 0x12);
  *(undefined8 *)((long)param_1 + 10) = uVar3;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Entry: 00191070; end: 001910bb;  */

undefined8 * FUN_00191070(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_1[1];
  uVar1 = param_1[2];
  uVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar3;
  FUN_00023358(uVar2,uVar1);
  *(undefined2 *)(param_1 + 3) = *(undefined2 *)(param_2 + 3);
  return param_1;
}



/* Entry: 001910bc; end: 00191157;  */

int FUN_001910bc(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x1a) != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 00191158; end: 00191193;  */

void FUN_00191158(undefined8 *param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE)

{
  FUN_00023358(*param_1,param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00191190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1[2]);
  return;
}



/* Entry: 00191194; end: 0019123f;  */

undefined8 * FUN_00191194(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x00023304(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = param_2[2];
  _swift_retain();
  return param_1;
}



/* Entry: 00191240; end: 00191287;  */

undefined8 * FUN_00191240(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  FUN_00023358(uVar1,uVar2);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_release(uVar1);
  return param_1;
}



/* Entry: 00191288; end: 00191323;  */

int FUN_00191288(int *param_1,int param_2)

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



/* Entry: 00191324; end: 00191353;  */

void FUN_00191324(undefined8 *param_1)

{
  _swift_bridgeObjectRelease(*param_1);
  FUN_00023358(param_1[1],param_1[2]);
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(param_1[3]);
  return;
}



/* Entry: 00191354; end: 00191357;  */

undefined8 * FUN_00191354(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  uVar2 = param_2[2];
  _swift_bridgeObjectRetain();
  func_0x00023304(uVar1,uVar2);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 00191358; end: 001913af;  */

undefined8 * FUN_00191358(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  uVar2 = param_2[2];
  _swift_bridgeObjectRetain();
  func_0x00023304(uVar1,uVar2);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 001913b0; end: 001913b3;  */

undefined8 * FUN_001913b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  uVar4 = param_2[1];
  uVar2 = param_2[2];
  func_0x00023304(uVar4,uVar2);
  uVar1 = param_1[1];
  uVar3 = param_1[2];
  param_1[1] = uVar4;
  param_1[2] = uVar2;
  FUN_00023358(uVar1,uVar3);
  uVar4 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  return param_1;
}



/* Entry: 001913b4; end: 0019142b;  */

undefined8 * FUN_001913b4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  uVar4 = param_2[1];
  uVar2 = param_2[2];
  func_0x00023304(uVar4,uVar2);
  uVar1 = param_1[1];
  uVar3 = param_1[2];
  param_1[1] = uVar4;
  param_1[2] = uVar2;
  FUN_00023358(uVar1,uVar3);
  uVar4 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  return param_1;
}



/* Entry: 0019142c; end: 0019142f;  */

undefined8 * FUN_0019142c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_1[1];
  uVar1 = param_1[2];
  uVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar3;
  FUN_00023358(uVar2,uVar1);
  uVar2 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Entry: 00191430; end: 00191483;  */

undefined8 * FUN_00191430(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_1[1];
  uVar1 = param_1[2];
  uVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar3;
  FUN_00023358(uVar2,uVar1);
  uVar2 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Entry: 00191484; end: 00191523;  */

int FUN_00191484(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 00191524; end: 0019156b;  */

void FUN_00191524(undefined8 *param_1)

{
  _swift_bridgeObjectRelease(*param_1);
  _swift_bridgeObjectRelease(param_1[1]);
  _swift_bridgeObjectRelease(param_1[2]);
  FUN_00023358(param_1[3],param_1[4]);
  _swift_bridgeObjectRelease(param_1[6]);
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(param_1[8]);
  return;
}



/* Entry: 0019156c; end: 001915f3;  */

undefined8 * FUN_0019156c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  param_1[2] = uVar1;
  uVar4 = param_2[4];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar1);
  func_0x00023304(uVar3,uVar4);
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  uVar1 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar1;
  uVar1 = param_2[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar1;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  return param_1;
}



/* Entry: 001915f4; end: 001916c3;  */

undefined8 * FUN_001915f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  uVar4 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  uVar4 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  uVar4 = param_2[3];
  uVar2 = param_2[4];
  func_0x00023304(uVar4,uVar2);
  uVar1 = param_1[3];
  uVar3 = param_1[4];
  param_1[3] = uVar4;
  param_1[4] = uVar2;
  FUN_00023358(uVar1,uVar3);
  param_1[5] = param_2[5];
  uVar4 = param_1[6];
  param_1[6] = param_2[6];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  param_1[7] = param_2[7];
  uVar4 = param_1[8];
  param_1[8] = param_2[8];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  return param_1;
}



/* Entry: 001916c4; end: 0019173f;  */

undefined8 * FUN_001916c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _swift_bridgeObjectRelease(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[3];
  uVar2 = param_1[4];
  uVar3 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar3;
  FUN_00023358(uVar1,uVar2);
  uVar1 = param_2[6];
  uVar2 = param_1[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[8];
  uVar2 = param_1[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Entry: 00191740; end: 001917ef;  */

int FUN_00191740(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[9] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 001917f0; end: 00191817;  */

void FUN_001917f0(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  _swift_bridgeObjectRelease(*param_1);
  uVar1 = param_1[2];
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    _swift_release(param_1[1]);
  }
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 00191818; end: 001918bf;  */

undefined8 * FUN_00191818(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  uVar2 = param_2[2];
  _swift_bridgeObjectRetain();
  func_0x00023304(uVar1,uVar2);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return param_1;
}



/* Entry: 001918c0; end: 00191903;  */

undefined8 * FUN_001918c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_1[1];
  uVar1 = param_1[2];
  uVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar3;
  FUN_00023358(uVar2,uVar1);
  return param_1;
}



/* Entry: 00191904; end: 0019199b;  */

int FUN_00191904(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[3] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 0019199c; end: 001919cb;  */

void FUN_0019199c(undefined8 *param_1)

{
  _swift_bridgeObjectRelease(*param_1);
  FUN_00023358(param_1[1],param_1[2]);
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(param_1[4]);
  return;
}



/* Entry: 001919cc; end: 00191aeb;  */

undefined8 * FUN_001919cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  uVar2 = param_2[2];
  _swift_bridgeObjectRetain();
  func_0x00023304(uVar1,uVar2);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  uVar1 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined1 *)((long)param_1 + 0x2c) = *(undefined1 *)((long)param_2 + 0x2c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined2 *)((long)param_1 + 0x34) = *(undefined2 *)((long)param_2 + 0x34);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 00191aec; end: 00191b07;  */

void FUN_00191aec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar6 = param_2[5];
  uVar5 = param_2[4];
  *(undefined8 *)((long)param_1 + 0x2e) = *(undefined8 *)((long)param_2 + 0x2e);
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[5] = uVar6;
  param_1[4] = uVar5;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Entry: 00191b08; end: 00191b7b;  */

undefined8 * FUN_00191b08(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar3;
  FUN_00023358(uVar1,uVar2);
  uVar1 = param_2[4];
  uVar2 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined1 *)((long)param_1 + 0x2c) = *(undefined1 *)((long)param_2 + 0x2c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined2 *)((long)param_1 + 0x34) = *(undefined2 *)((long)param_2 + 0x34);
  return param_1;
}



/* Entry: 00191b7c; end: 00191d7b;  */

int FUN_00191b7c(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x36) != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 00191d7c; end: 00191df7;  */

void FUN_00191d7c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                 undefined8 param_9)

{
  if (param_1 == 0) {
    return;
  }
  _swift_bridgeObjectRelease();
  FUN_00023358(param_2,param_3);
  _swift_bridgeObjectRelease(param_4);
  if (param_8 != 0) {
    FUN_00023358(param_6,param_7,param_8,param_9);
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(param_8);
    return;
  }
  return;
}



/* Entry: 00191df8; end: 00191ef3;  */

undefined8 FUN_00191df8(undefined8 param_1,undefined8 param_2)

{
  FUN_0018b36c(param_2,param_1,&UNK_009b1880);
  return param_2;
}



/* Entry: 00191ef4; end: 00191f33;  */

void FUN_00191ef4(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af25f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_007dc568;
  _swift_getWitnessTable(&DAT_007dc568,&UNK_009b3478);
  puRam0000000000af25f0 = puVar1;
  return;
}



/* Entry: 00191f34; end: 00192033;  */

undefined8 FUN_00191f34(undefined8 param_1,undefined8 param_2)

{
  FUN_001919cc(param_2,param_1,&UNK_009b33d0);
  return param_2;
}



/* Entry: 00192034; end: 0019241f;  */

void FUN_00192034(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2600 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_007db128;
  _swift_getWitnessTable(&DAT_007db128,&UNK_009b16f0);
  puRam0000000000af2600 = puVar1;
  return;
}



/* Entry: 00192420; end: 0019247f;  */

undefined8 FUN_00192420(undefined8 param_1,undefined8 param_2)

{
  FUN_0018de50(param_2,param_1,&UNK_009b20d8);
  return param_2;
}



/* Entry: 00192480; end: 001925ef;  */

void FUN_00192480(void)

{
  long unaff_x20;
  
  FUN_00023358(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x48));
  if (*(long *)(unaff_x20 + 0x50) != 0) {
    _swift_bridgeObjectRelease();
    FUN_00023358(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)(unaff_x20 + 0x60));
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x68));
    if (*(long *)(unaff_x20 + 0x88) != 0) {
      FUN_00023358(*(undefined8 *)(unaff_x20 + 0x78),*(undefined8 *)(unaff_x20 + 0x80));
      _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x88));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 001925f0; end: 0019276f;  */

undefined8 FUN_001925f0(undefined8 param_1,undefined8 param_2)

{
  FUN_0018d128(param_2,param_1,&UNK_009b1e40);
  return param_2;
}



/* Entry: 00192770; end: 0019282f;  */

void FUN_00192770(void)

{
  long unaff_x20;
  
  FUN_00023358(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    _swift_bridgeObjectRelease();
    FUN_00023358(*(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x48));
    if (*(long *)(unaff_x20 + 0x60) != 0) {
      FUN_00023358(*(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
      _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x60));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 00192830; end: 0019288f;  */

undefined8 FUN_00192830(undefined8 param_1,undefined8 param_2)

{
  FUN_0018d870(param_2,param_1,&UNK_009b2050);
  return param_2;
}



/* Entry: 00192890; end: 00192a6f;  */

void FUN_00192890(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  FUN_00023358(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  if (*(ulong *)(unaff_x20 + 0x70) >> 0x3c < 0xf) {
    FUN_00023358(*(undefined8 *)(unaff_x20 + 0x68));
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 00192a70; end: 00192b3f;  */

undefined8 FUN_00192a70(undefined8 param_1,undefined8 param_2)

{
  FUN_0018c72c(param_2,param_1,&UNK_009b1be8);
  return param_2;
}



/* Entry: 00192b40; end: 00192fc7;  */

void FUN_00192b40(long *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20 + 1;
  return;
}



/* Entry: 00192fc8; end: 00192fdb;  */

void FUN_00192fc8(void)

{
  FUN_00167728();
  return;
}



/* Entry: 00192fdc; end: 00193317;  */

uint FUN_00192fdc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  FUN_00183174(uVar1,param_1[1],(ulong)*(uint5 *)(param_1 + 2),(ulong)*(uint5 *)(param_1 + 3),
               *param_2,param_2[1],(ulong)*(uint5 *)(param_2 + 2),(ulong)*(uint5 *)(param_2 + 3));
  return (uint)uVar1 & 1;
}



/* Entry: 00193318; end: 0019333f;  */

void FUN_00193318(void)

{
  FUN_00167894();
  return;
}



/* Entry: 00193340; end: 00193393;  */

undefined8 * FUN_00193340(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x00023304(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return param_1;
}



/* Entry: 00193394; end: 001933a7;  */

void FUN_00193394(void)

{
  func_0x0016773c();
  return;
}



/* Entry: 001933a8; end: 00193433;  */

void FUN_001933a8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  FUN_00023358(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 00193434; end: 00193467;  */

undefined1  [16]
FUN_00193434(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  
  func_0x00023304(param_3,param_4);
  auVar1._8_8_ = param_4;
  auVar1._0_8_ = param_3;
  return auVar1;
}



/* Entry: 00193468; end: 0019349b;  */

void FUN_00193468(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_00023358(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 0019349c; end: 001934d7;  */

undefined1  [16] FUN_0019349c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x1934ac;
  return auVar1;
}



/* Entry: 001934d8; end: 00193597;  */

void FUN_001934d8(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_0011ae80();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_0099b8f0;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_000de3ec(&UNK_007e0060,0x11,&uStack_48,&lStack_40);
  puRam0000000000b65688 = puStack_38;
  lRam0000000000b65680 = lStack_40;
  puRam0000000000b65698 = puStack_28;
  puRam0000000000b65690 = puStack_30;
  puRam0000000000b656a8 = puStack_18;
  puRam0000000000b656a0 = puStack_20;
  return;
}



/* Entry: 00193598; end: 00193637;  */

void FUN_00193598(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af26a0 != -1) {
    _swift_once(0xaf26a0,FUN_001934d8);
  }
  uVar5 = uRam0000000000b656a8;
  uVar4 = uRam0000000000b656a0;
  uVar3 = uRam0000000000b65698;
  uVar2 = uRam0000000000b65690;
  uVar1 = uRam0000000000b65688;
  *param_1 = uRam0000000000b65680;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 00193638; end: 001936cf;  */

void FUN_00193638(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
LAB_0019368c:
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if ((unaff_x21 != 0) || (((uint)lVar2 & 0xff) == 1)) {
    return;
  }
  if (lVar1 != 1) goto code_r0x001936a8;
  pcVar3 = *(code **)(param_3 + 0x60);
  goto LAB_00193674;
code_r0x001936a8:
  if (lVar1 == 2) {
    pcVar3 = *(code **)(param_3 + 0x48);
LAB_00193674:
    (*pcVar3)();
  }
  goto LAB_0019368c;
}



/* Entry: 001936d0; end: 00193767;  */

void FUN_001936d0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,long param_7)

{
  long unaff_x21;
  
  if (((param_2 == 0) || ((**(code **)(param_7 + 0x20))(param_2,1,param_6,param_7), unaff_x21 == 0))
     && (((int)param_3 == 0 ||
         ((**(code **)(param_7 + 0x18))(param_3,2,param_6,param_7), unaff_x21 == 0)))) {
    FUN_0013ad2c(param_1,param_4,param_5,param_6,param_7);
  }
  return;
}



/* Entry: 00193768; end: 00193793;  */

ulong FUN_00193768(long param_1,int param_2,long param_3,byte *param_4,long param_5,int param_6,
                  long param_7,ulong param_8)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  byte *pbVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong *unaff_x20;
  ulong uVar16;
  long lVar17;
  byte bStack_71;
  byte abStack_70 [24];
  long lStack_58;
  
  if ((param_1 != param_5) || (param_2 != param_6)) {
    return 0;
  }
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = (uint)((ulong)param_4 >> 0x20);
  uVar10 = uVar2 >> 0x1e;
  uVar3 = (uint)(param_8 >> 0x20);
  uVar13 = uVar3 >> 0x1e;
  iVar5 = (int)param_3;
  if ((ulong)param_4 >> 0x3e == 3) {
    uVar12 = 0;
    if ((((param_3 != 0) || (param_4 != (byte *)0xc000000000000000)) || (param_8 >> 0x3e < 3)) ||
       ((uVar12 = 0, param_7 != 0 || (param_8 != 0xc000000000000000)))) goto joined_r0x000389b8;
  }
  else {
    if (uVar2 >> 0x1e < 2) {
      if (uVar10 == 0) {
        uVar12 = (ulong)param_4 >> 0x30 & 0xff;
      }
      else {
        iVar11 = (int)((ulong)param_3 >> 0x20);
        if (SBORROW4(iVar11,iVar5)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b38);
          (*pcVar4)();
        }
        uVar12 = (ulong)(iVar11 - iVar5);
      }
joined_r0x000389b8:
      if (uVar3 >> 0x1e < 2) goto LAB_000388cc;
LAB_00038898:
      if (uVar13 != 2) {
        uVar12 = (ulong)(uVar12 == 0);
        goto LAB_00038af8;
      }
      uVar14 = *(long *)(param_7 + 0x18) - *(long *)(param_7 + 0x10);
      if (SBORROW8(*(long *)(param_7 + 0x18),*(long *)(param_7 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar4)();
      }
LAB_000388d4:
      if (uVar12 != uVar14) {
LAB_0003899c:
        uVar12 = 0;
        goto LAB_00038af8;
      }
    }
    else {
      if (uVar10 == 2) {
        uVar12 = *(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10);
        if (SBORROW8(*(long *)(param_3 + 0x18),*(long *)(param_3 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b34);
          (*pcVar4)();
        }
        goto joined_r0x000389b8;
      }
      uVar12 = 0;
      if (1 < uVar13) goto LAB_00038898;
LAB_000388cc:
      if (uVar13 == 0) {
        uVar14 = param_8 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar11 = (int)((ulong)param_7 >> 0x20);
      if (SBORROW4(iVar11,(int)param_7)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar4)();
      }
      if (uVar12 != (long)(iVar11 - (int)param_7)) goto LAB_0003899c;
    }
    if (0 < (long)uVar12) {
      if (uVar10 < 2) {
        if (uVar10 == 0) {
          abStack_70[0] = (byte)param_3;
          abStack_70[1] = (byte)((ulong)param_3 >> 8);
          abStack_70[2] = (byte)((ulong)param_3 >> 0x10);
          abStack_70[3] = (byte)((ulong)param_3 >> 0x18);
          abStack_70[4] = (byte)((ulong)param_3 >> 0x20);
          abStack_70[5] = (byte)((ulong)param_3 >> 0x28);
          abStack_70[6] = (byte)((ulong)param_3 >> 0x30);
          abStack_70[7] = (byte)((ulong)param_3 >> 0x38);
          abStack_70[8] = (byte)param_4;
          abStack_70[9] = (byte)((ulong)param_4 >> 8);
          abStack_70[10] = (byte)((ulong)param_4 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)param_4 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)param_4 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)param_4 >> 0x28);
          param_4 = abStack_70 + ((ulong)param_4 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          uVar12 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar17 = (long)iVar5;
        lVar6 = (param_3 >> 0x20) - lVar17;
        if (param_3 >> 0x20 < lVar17) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b3c);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (param_3 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          param_3 = 0;
        }
        else {
          lVar7 = param_3;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,lVar7)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar4)();
          }
          param_3 = (lVar17 - lVar7) + param_3;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (param_3 != 0) {
            if (lVar6 <= lVar7) {
              lVar7 = lVar6;
            }
            pbVar9 = (byte *)(lVar7 + param_3);
            goto LAB_00038aec;
          }
        }
        pbVar9 = (byte *)0x0;
      }
      else {
        if (uVar10 != 2) {
          abStack_70[8] = 0;
          abStack_70[9] = 0;
          abStack_70[10] = 0;
          abStack_70[0xb] = 0;
          abStack_70[0xc] = 0;
          abStack_70[0xd] = 0;
          abStack_70[0] = 0;
          abStack_70[1] = 0;
          abStack_70[2] = 0;
          abStack_70[3] = 0;
          abStack_70[4] = 0;
          abStack_70[5] = 0;
          abStack_70[6] = 0;
          abStack_70[7] = 0;
          param_4 = abStack_70;
          goto LAB_00038aa8;
        }
        lVar17 = *(long *)(param_3 + 0x10);
        lVar7 = *(long *)(param_3 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        lVar6 = param_3;
        if (param_3 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,lVar6)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar4)();
          }
          param_3 = (lVar17 - lVar6) + param_3;
        }
        lVar1 = lVar7 - lVar17;
        if (SBORROW8(lVar7,lVar17)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (param_3 == 0) {
          pbVar9 = (byte *)0x0;
        }
        else {
          if (lVar1 <= lVar6) {
            lVar6 = lVar1;
          }
          pbVar9 = (byte *)(lVar6 + param_3);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)param_4 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,param_3,pbVar9,param_7,param_8);
      uVar12 = (ulong)abStack_70[0];
      param_4 = pbVar9;
      goto LAB_00038af8;
    }
  }
  uVar12 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar12;
  }
  ___stack_chk_fail();
  lVar6 = (long)param_4 - uVar12;
  if (SBORROW8((long)param_4,uVar12)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar4)();
  }
  uVar16 = *unaff_x20;
  uVar15 = uVar16 & 0xffffffffffffff8;
  uVar12 = uVar15 + 0x20 + uVar12 * 8;
  uVar8 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  uVar14 = uVar12;
  _swift_arrayDestroy(uVar12,lVar6,uVar8);
  lVar17 = param_7 - lVar6;
  if (SBORROW8(param_7,lVar6)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar4)();
  }
  if (lVar17 != 0) {
    if (uVar16 >> 0x3e == 0) {
      uVar14 = *(ulong *)(uVar15 + 0x10);
      lVar6 = uVar14 - (long)param_4;
    }
    else {
      uVar14 = uVar15;
      if ((uVar16 & 0x8000000000000000) != 0) {
        uVar14 = uVar16;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar6 = uVar14 - (long)param_4;
    }
    if (SBORROW8(uVar14,(long)param_4)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar4)();
    }
    uVar12 = uVar12 + param_7 * 8;
    uVar14 = uVar15 + 0x20 + (long)param_4 * 8;
    if (uVar12 != uVar14 || uVar14 + lVar6 * 8 <= uVar12) {
      _memmove(uVar12,uVar14,lVar6 << 3);
    }
    if (uVar16 >> 0x3e == 0) {
      uVar14 = *(ulong *)(uVar15 + 0x10);
    }
    else {
      uVar14 = uVar15;
      if ((uVar16 & 0x8000000000000000) != 0) {
        uVar14 = uVar16;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar14,lVar17)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar4)();
    }
    *(ulong *)(uVar15 + 0x10) = uVar14 + lVar17;
  }
  if (0 < param_7) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c58);
    (*pcVar4)();
  }
  return uVar14;
}



/* Entry: 00193794; end: 001937f7;  */

void FUN_00193794(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_78 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  func_0x00192fb0(auStack_78,param_1,param_2,param_3,param_4);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001937f8; end: 0019382b;  */

void FUN_001937f8(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[3] = 0xc000000000000000;
  param_1[2] = 0;
  return;
}



/* Entry: 0019382c; end: 0019385b;  */

undefined1  [16] FUN_0019382c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x00023304(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                  *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 0019385c; end: 0019388f;  */

void FUN_0019385c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_00023358(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 00193890; end: 001938a3;  */

undefined1  [16] FUN_00193890(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x1938a0;
  return auVar1;
}



/* Entry: 001938a4; end: 001938df;  */

void FUN_001938a4(void)

{
  FUN_00193638();
  return;
}



/* Entry: 001938e0; end: 0019397f;  */

void FUN_001938e0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af26a0 != -1) {
    _swift_once(0xaf26a0,FUN_001934d8);
  }
  uVar5 = uRam0000000000b656a8;
  uVar4 = uRam0000000000b656a0;
  uVar3 = uRam0000000000b65698;
  uVar2 = uRam0000000000b65690;
  uVar1 = uRam0000000000b65688;
  *param_1 = uRam0000000000b65680;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 00193980; end: 001939bb;  */

void FUN_00193980(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0xaf26c0;
  uStack_18 = param_1;
  func_0x000115a8(0xaf26c0,&UNK_007e0050);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 001939bc; end: 00193a1b;  */

void FUN_001939bc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar4 = *unaff_x20;
  uVar3 = *(undefined4 *)(unaff_x20 + 1);
  uVar1 = unaff_x20[2];
  uVar2 = unaff_x20[3];
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  func_0x00192fb0(auStack_78,uVar4,uVar3,uVar1,uVar2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00193a1c; end: 00193a2b;  */

void FUN_00193a1c(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long *unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  lVar4 = *unaff_x20;
  lVar6 = unaff_x20[1];
  lVar1 = unaff_x20[2];
  uVar2 = unaff_x20[3];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_50 = param_1[8];
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  if (lVar4 != 0) {
    __ss6HasherV8_combineyySuF(1);
    __ss6HasherV8_combineyys6UInt64VF(lVar4);
  }
  if ((int)lVar6 != 0) {
    __ss6HasherV8_combineyySuF(2);
    __ss6HasherV8_combineyys6UInt64VF((long)(int)lVar6);
  }
  uVar3 = (uint)(uVar2 >> 0x20);
  uVar5 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar5 != 0) {
      lVar6 = (long)(int)lVar1;
      lVar4 = lVar1 >> 0x20;
      goto LAB_0014db50;
    }
    if ((uVar2 & 0xff000000000000) == 0) goto LAB_0014db68;
  }
  else {
    if (uVar5 != 2) goto LAB_0014db68;
    lVar6 = *(long *)(lVar1 + 0x10);
    lVar4 = *(long *)(lVar1 + 0x18);
LAB_0014db50:
    if (lVar6 == lVar4) goto LAB_0014db68;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_90,lVar1,uVar2);
LAB_0014db68:
  param_1[5] = uStack_68;
  param_1[4] = uStack_70;
  param_1[7] = uStack_58;
  param_1[6] = uStack_60;
  param_1[8] = uStack_50;
  param_1[1] = uStack_88;
  *param_1 = uStack_90;
  param_1[3] = uStack_78;
  param_1[2] = uStack_80;
  return;
}



/* Entry: 00193a2c; end: 00193a87;  */

void FUN_00193a2c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar4 = *unaff_x20;
  uVar3 = *(undefined4 *)(unaff_x20 + 1);
  uVar1 = unaff_x20[2];
  uVar2 = unaff_x20[3];
  __ss6HasherV5_seedABSi_tcfC(auStack_78);
  func_0x00192fb0(auStack_78,uVar4,uVar3,uVar1,uVar2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00193a88; end: 00193ab7;  */

ulong FUN_00193a88(long *param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  byte *pbVar11;
  byte *pbVar12;
  long lVar13;
  uint uVar14;
  int iVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  ulong *unaff_x20;
  ulong uVar19;
  long lVar20;
  byte bStack_71;
  byte abStack_70 [24];
  long lStack_58;
  
  if (*param_1 != *param_2 || (int)param_1[1] != (int)param_2[1]) {
    return 0;
  }
  lVar13 = param_2[2];
  uVar8 = param_2[3];
  lVar9 = param_1[2];
  pbVar11 = (byte *)param_1[3];
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = (uint)((ulong)pbVar11 >> 0x20);
  uVar14 = uVar2 >> 0x1e;
  uVar3 = (uint)(uVar8 >> 0x20);
  uVar17 = uVar3 >> 0x1e;
  iVar5 = (int)lVar9;
  if ((ulong)pbVar11 >> 0x3e == 3) {
    uVar16 = 0;
    if ((((lVar9 != 0) || (pbVar11 != (byte *)0xc000000000000000)) || (uVar8 >> 0x3e < 3)) ||
       ((uVar16 = 0, lVar13 != 0 || (uVar8 != 0xc000000000000000)))) goto joined_r0x000389b8;
  }
  else {
    if (uVar2 >> 0x1e < 2) {
      if (uVar14 == 0) {
        uVar16 = (ulong)pbVar11 >> 0x30 & 0xff;
      }
      else {
        iVar15 = (int)((ulong)lVar9 >> 0x20);
        if (SBORROW4(iVar15,iVar5)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b38);
          (*pcVar4)();
        }
        uVar16 = (ulong)(iVar15 - iVar5);
      }
joined_r0x000389b8:
      if (uVar3 >> 0x1e < 2) goto LAB_000388cc;
LAB_00038898:
      if (uVar17 != 2) {
        uVar8 = (ulong)(uVar16 == 0);
        goto LAB_00038af8;
      }
      uVar18 = *(long *)(lVar13 + 0x18) - *(long *)(lVar13 + 0x10);
      if (SBORROW8(*(long *)(lVar13 + 0x18),*(long *)(lVar13 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar4)();
      }
LAB_000388d4:
      if (uVar16 != uVar18) {
LAB_0003899c:
        uVar8 = 0;
        goto LAB_00038af8;
      }
    }
    else {
      if (uVar14 == 2) {
        uVar16 = *(long *)(lVar9 + 0x18) - *(long *)(lVar9 + 0x10);
        if (SBORROW8(*(long *)(lVar9 + 0x18),*(long *)(lVar9 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b34);
          (*pcVar4)();
        }
        goto joined_r0x000389b8;
      }
      uVar16 = 0;
      if (1 < uVar17) goto LAB_00038898;
LAB_000388cc:
      if (uVar17 == 0) {
        uVar18 = uVar8 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar15 = (int)((ulong)lVar13 >> 0x20);
      if (SBORROW4(iVar15,(int)lVar13)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar4)();
      }
      if (uVar16 != (long)(iVar15 - (int)lVar13)) goto LAB_0003899c;
    }
    if (0 < (long)uVar16) {
      if (uVar14 < 2) {
        if (uVar14 == 0) {
          abStack_70[0] = (byte)lVar9;
          abStack_70[1] = (byte)((ulong)lVar9 >> 8);
          abStack_70[2] = (byte)((ulong)lVar9 >> 0x10);
          abStack_70[3] = (byte)((ulong)lVar9 >> 0x18);
          abStack_70[4] = (byte)((ulong)lVar9 >> 0x20);
          abStack_70[5] = (byte)((ulong)lVar9 >> 0x28);
          abStack_70[6] = (byte)((ulong)lVar9 >> 0x30);
          abStack_70[7] = (byte)((ulong)lVar9 >> 0x38);
          abStack_70[8] = (byte)pbVar11;
          abStack_70[9] = (byte)((ulong)pbVar11 >> 8);
          abStack_70[10] = (byte)((ulong)pbVar11 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)pbVar11 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)pbVar11 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)pbVar11 >> 0x28);
          pbVar11 = abStack_70 + ((ulong)pbVar11 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          uVar8 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar20 = (long)iVar5;
        lVar6 = (lVar9 >> 0x20) - lVar20;
        if (lVar9 >> 0x20 < lVar20) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b3c);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (lVar9 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          lVar9 = 0;
        }
        else {
          lVar7 = lVar9;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar20,lVar7)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar4)();
          }
          lVar9 = (lVar20 - lVar7) + lVar9;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (lVar9 != 0) {
            if (lVar6 <= lVar7) {
              lVar7 = lVar6;
            }
            pbVar12 = (byte *)(lVar7 + lVar9);
            goto LAB_00038aec;
          }
        }
        pbVar12 = (byte *)0x0;
      }
      else {
        if (uVar14 != 2) {
          abStack_70[8] = 0;
          abStack_70[9] = 0;
          abStack_70[10] = 0;
          abStack_70[0xb] = 0;
          abStack_70[0xc] = 0;
          abStack_70[0xd] = 0;
          abStack_70[0] = 0;
          abStack_70[1] = 0;
          abStack_70[2] = 0;
          abStack_70[3] = 0;
          abStack_70[4] = 0;
          abStack_70[5] = 0;
          abStack_70[6] = 0;
          abStack_70[7] = 0;
          pbVar11 = abStack_70;
          goto LAB_00038aa8;
        }
        lVar20 = *(long *)(lVar9 + 0x10);
        lVar7 = *(long *)(lVar9 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        lVar6 = lVar9;
        if (lVar9 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar20,lVar6)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar4)();
          }
          lVar9 = (lVar20 - lVar6) + lVar9;
        }
        lVar1 = lVar7 - lVar20;
        if (SBORROW8(lVar7,lVar20)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (lVar9 == 0) {
          pbVar12 = (byte *)0x0;
        }
        else {
          if (lVar1 <= lVar6) {
            lVar6 = lVar1;
          }
          pbVar12 = (byte *)(lVar6 + lVar9);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)pbVar11 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,lVar9,pbVar12,lVar13,uVar8);
      uVar8 = (ulong)abStack_70[0];
      pbVar11 = pbVar12;
      goto LAB_00038af8;
    }
  }
  uVar8 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar8;
  }
  ___stack_chk_fail();
  lVar9 = (long)pbVar11 - uVar8;
  if (SBORROW8((long)pbVar11,uVar8)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar4)();
  }
  uVar19 = *unaff_x20;
  uVar18 = uVar19 & 0xffffffffffffff8;
  uVar8 = uVar18 + 0x20 + uVar8 * 8;
  uVar10 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  uVar16 = uVar8;
  _swift_arrayDestroy(uVar8,lVar9,uVar10);
  lVar6 = lVar13 - lVar9;
  if (SBORROW8(lVar13,lVar9)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar4)();
  }
  if (lVar6 != 0) {
    if (uVar19 >> 0x3e == 0) {
      uVar16 = *(ulong *)(uVar18 + 0x10);
      lVar9 = uVar16 - (long)pbVar11;
    }
    else {
      uVar16 = uVar18;
      if ((uVar19 & 0x8000000000000000) != 0) {
        uVar16 = uVar19;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar9 = uVar16 - (long)pbVar11;
    }
    if (SBORROW8(uVar16,(long)pbVar11)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar4)();
    }
    uVar8 = uVar8 + lVar13 * 8;
    uVar16 = uVar18 + 0x20 + (long)pbVar11 * 8;
    if (uVar8 != uVar16 || uVar16 + lVar9 * 8 <= uVar8) {
      _memmove(uVar8,uVar16,lVar9 << 3);
    }
    if (uVar19 >> 0x3e == 0) {
      uVar16 = *(ulong *)(uVar18 + 0x10);
    }
    else {
      uVar16 = uVar18;
      if ((uVar19 & 0x8000000000000000) != 0) {
        uVar16 = uVar19;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar16,lVar6)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar4)();
    }
    *(ulong *)(uVar18 + 0x10) = uVar16 + lVar6;
  }
  if (0 < lVar13) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c58);
    (*pcVar4)();
  }
  return uVar16;
}



/* Entry: 00193ab8; end: 00193adb;  */

void FUN_00193ab8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_00193adc();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 00193adc; end: 00193b1b;  */

void FUN_00193adc(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af26a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007dff98;
  _swift_getWitnessTable(&UNK_007dff98,&UNK_009b3780);
  puRam0000000000af26a8 = puVar1;
  return;
}



/* Entry: 00193b1c; end: 00193b47;  */

void FUN_00193b1c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_00193b48();
  *(long *)(param_1 + 8) = lVar1;
  func_0x000eb9e0();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 00193b48; end: 00193b87;  */

void FUN_00193b48(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af26b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007dffc0;
  _swift_getWitnessTable(&UNK_007dffc0,&UNK_009b3780);
  puRam0000000000af26b0 = puVar1;
  return;
}



/* Entry: 00193b88; end: 00193b8b;  */

void FUN_00193b88(void)

{
  undefined8 uVar1;
  
  if (lRam0000000000af26b8 != 0) {
    return;
  }
  uVar1 = 0x7e0000;
  _swift_getWitnessTable(0x7e0000,&UNK_009b3780);
  lRam0000000000af26b8 = uVar1;
  return;
}



/* Entry: 00193b8c; end: 00193bcb;  */

void FUN_00193b8c(void)

{
  undefined8 uVar1;
  
  if (lRam0000000000af26b8 != 0) {
    return;
  }
  uVar1 = 0x7e0000;
  _swift_getWitnessTable(0x7e0000,&UNK_009b3780);
  lRam0000000000af26b8 = uVar1;
  return;
}



/* Entry: 00193bcc; end: 00193bf7;  */

long FUN_00193bcc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 00193bf8; end: 00193c03;  */

void FUN_00193bf8(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x18);
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    _swift_release(*(undefined8 *)(param_1 + 0x10));
  }
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 00193c04; end: 00193ca3;  */

undefined8 * FUN_00193c04(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  func_0x00023304(uVar1,uVar2);
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  return param_1;
}



/* Entry: 00193ca4; end: 00193ceb;  */

undefined8 * FUN_00193ca4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  uVar3 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  FUN_00023358(uVar1,uVar2);
  return param_1;
}



/* Entry: 00193cec; end: 00193d9f;  */

int FUN_00193cec(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[8] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 00193da0; end: 00193dcb;  */

undefined1  [16] FUN_00193da0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  
  func_0x00023304();
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 00193dcc; end: 00193dff;  */

void FUN_00193dcc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  FUN_00023358(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 00193e00; end: 00193e47;  */

undefined8 FUN_00193e00(void)

{
  return 0x193e10;
}



/* Entry: 00193e48; end: 00193ed3;  */

void FUN_00193e48(void)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_0011ae80();
  _swift_allocObject();
  puRam0000000000b656d0 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_0099b8f0;
  lRam0000000000b656b0 = lVar1;
  puRam0000000000b656b8 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puRam0000000000b656c0 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puRam0000000000b656c8 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puRam0000000000b656d8 = puRam0000000000b656d0;
  return;
}



/* Entry: 00193ed4; end: 00193f73;  */

void FUN_00193ed4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af26c8 != -1) {
    _swift_once(0xaf26c8,FUN_00193e48);
  }
  uVar5 = uRam0000000000b656d8;
  uVar4 = uRam0000000000b656d0;
  uVar3 = uRam0000000000b656c8;
  uVar2 = uRam0000000000b656c0;
  uVar1 = uRam0000000000b656b8;
  *param_1 = uRam0000000000b656b0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 00193f74; end: 00193fbf;  */

void FUN_00193f74(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long unaff_x21;
  code *pcVar2;
  
  pcVar2 = *(code **)(param_3 + 0x10);
  do {
    lVar1 = param_3;
    (*pcVar2)(param_2);
    if (unaff_x21 != 0) {
      return;
    }
  } while (((uint)lVar1 & 0xff) != 1);
  return;
}



/* Entry: 00193fc0; end: 00193fd3;  */

void FUN_00193fc0(void)

{
  FUN_0013ad2c();
  return;
}



/* Entry: 00193fd4; end: 00193fd7;  */

void FUN_00193fd4(long param_1,byte *param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  byte *pbVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  ulong *unaff_x20;
  ulong uVar16;
  long lVar17;
  byte bStack_71;
  byte abStack_70 [24];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar3 = (uint)((ulong)param_2 >> 0x20);
  uVar11 = uVar3 >> 0x1e;
  uVar4 = (uint)(param_4 >> 0x20);
  uVar14 = uVar4 >> 0x1e;
  iVar6 = (int)param_1;
  if ((ulong)param_2 >> 0x3e == 3) {
    uVar13 = 0;
    if ((((param_1 != 0) || (param_2 != (byte *)0xc000000000000000)) || (param_4 >> 0x3e < 3)) ||
       ((uVar13 = 0, param_3 != 0 || (param_4 != 0xc000000000000000)))) goto joined_r0x000389b8;
  }
  else {
    if (uVar3 >> 0x1e < 2) {
      if (uVar11 == 0) {
        uVar13 = (ulong)param_2 >> 0x30 & 0xff;
      }
      else {
        iVar12 = (int)((ulong)param_1 >> 0x20);
        if (SBORROW4(iVar12,iVar6)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x38b38);
          (*pcVar5)();
        }
        uVar13 = (ulong)(iVar12 - iVar6);
      }
joined_r0x000389b8:
      if (uVar4 >> 0x1e < 2) goto LAB_000388cc;
LAB_00038898:
      if (uVar14 != 2) {
        uVar13 = (ulong)(uVar13 == 0);
        goto LAB_00038af8;
      }
      uVar15 = *(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10);
      if (SBORROW8(*(long *)(param_3 + 0x18),*(long *)(param_3 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar5)();
      }
LAB_000388d4:
      if (uVar13 != uVar15) {
LAB_0003899c:
        uVar13 = 0;
        goto LAB_00038af8;
      }
    }
    else {
      if (uVar11 == 2) {
        uVar13 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
        if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x38b34);
          (*pcVar5)();
        }
        goto joined_r0x000389b8;
      }
      uVar13 = 0;
      if (1 < uVar14) goto LAB_00038898;
LAB_000388cc:
      if (uVar14 == 0) {
        uVar15 = param_4 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar12 = (int)((ulong)param_3 >> 0x20);
      if (SBORROW4(iVar12,(int)param_3)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar5)();
      }
      if (uVar13 != (long)(iVar12 - (int)param_3)) goto LAB_0003899c;
    }
    if (0 < (long)uVar13) {
      if (uVar11 < 2) {
        if (uVar11 == 0) {
          abStack_70[0] = (byte)param_1;
          abStack_70[1] = (byte)((ulong)param_1 >> 8);
          abStack_70[2] = (byte)((ulong)param_1 >> 0x10);
          abStack_70[3] = (byte)((ulong)param_1 >> 0x18);
          abStack_70[4] = (byte)((ulong)param_1 >> 0x20);
          abStack_70[5] = (byte)((ulong)param_1 >> 0x28);
          abStack_70[6] = (byte)((ulong)param_1 >> 0x30);
          abStack_70[7] = (byte)((ulong)param_1 >> 0x38);
          abStack_70[8] = (byte)param_2;
          abStack_70[9] = (byte)((ulong)param_2 >> 8);
          abStack_70[10] = (byte)((ulong)param_2 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)param_2 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)param_2 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)param_2 >> 0x28);
          param_2 = abStack_70 + ((ulong)param_2 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          uVar13 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar17 = (long)iVar6;
        lVar7 = (param_1 >> 0x20) - lVar17;
        if (param_1 >> 0x20 < lVar17) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x38b3c);
          (*pcVar5)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (param_1 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          param_1 = 0;
        }
        else {
          lVar8 = param_1;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,lVar8)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar5)();
          }
          param_1 = (lVar17 - lVar8) + param_1;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (param_1 != 0) {
            if (lVar7 <= lVar8) {
              lVar8 = lVar7;
            }
            pbVar10 = (byte *)(lVar8 + param_1);
            goto LAB_00038aec;
          }
        }
        pbVar10 = (byte *)0x0;
      }
      else {
        if (uVar11 != 2) {
          abStack_70[8] = 0;
          abStack_70[9] = 0;
          abStack_70[10] = 0;
          abStack_70[0xb] = 0;
          abStack_70[0xc] = 0;
          abStack_70[0xd] = 0;
          abStack_70[0] = 0;
          abStack_70[1] = 0;
          abStack_70[2] = 0;
          abStack_70[3] = 0;
          abStack_70[4] = 0;
          abStack_70[5] = 0;
          abStack_70[6] = 0;
          abStack_70[7] = 0;
          param_2 = abStack_70;
          goto LAB_00038aa8;
        }
        lVar17 = *(long *)(param_1 + 0x10);
        lVar8 = *(long *)(param_1 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        lVar7 = param_1;
        if (param_1 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,lVar7)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar5)();
          }
          param_1 = (lVar17 - lVar7) + param_1;
        }
        lVar2 = lVar8 - lVar17;
        if (SBORROW8(lVar8,lVar17)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar5)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (param_1 == 0) {
          pbVar10 = (byte *)0x0;
        }
        else {
          if (lVar2 <= lVar7) {
            lVar7 = lVar2;
          }
          pbVar10 = (byte *)(lVar7 + param_1);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)param_2 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,param_1,pbVar10,param_3,param_4);
      uVar13 = (ulong)abStack_70[0];
      param_2 = pbVar10;
      goto LAB_00038af8;
    }
  }
  uVar13 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  lVar7 = (long)param_2 - uVar13;
  if (SBORROW8((long)param_2,uVar13)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar5)();
  }
  uVar16 = *unaff_x20;
  uVar15 = uVar16 & 0xffffffffffffff8;
  lVar17 = uVar15 + 0x20 + uVar13 * 8;
  uVar9 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  _swift_arrayDestroy(lVar17,lVar7,uVar9);
  lVar8 = param_3 - lVar7;
  if (SBORROW8(param_3,lVar7)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar5)();
  }
  if (lVar8 != 0) {
    if (uVar16 >> 0x3e == 0) {
      uVar13 = *(ulong *)(uVar15 + 0x10);
      lVar7 = uVar13 - (long)param_2;
    }
    else {
      uVar13 = uVar15;
      if ((uVar16 & 0x8000000000000000) != 0) {
        uVar13 = uVar16;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar7 = uVar13 - (long)param_2;
    }
    if (SBORROW8(uVar13,(long)param_2)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar5)();
    }
    uVar13 = lVar17 + param_3 * 8;
    uVar1 = uVar15 + 0x20 + (long)param_2 * 8;
    if (uVar13 != uVar1 || uVar1 + lVar7 * 8 <= uVar13) {
      _memmove(uVar13,uVar1,lVar7 << 3);
    }
    if (uVar16 >> 0x3e == 0) {
      uVar13 = *(ulong *)(uVar15 + 0x10);
    }
    else {
      uVar13 = uVar15;
      if ((uVar16 & 0x8000000000000000) != 0) {
        uVar13 = uVar16;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar13,lVar8)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar5)();
    }
    *(ulong *)(uVar15 + 0x10) = uVar13 + lVar8;
  }
  if (0 < param_3) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x38c58);
    (*pcVar5)();
  }
  return;
}



/* Entry: 00193fd8; end: 0019408f;  */

void FUN_00193fd8(long param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  __ss6HasherV5_seedABSi_tcfC(&uStack_70,0);
  uStack_98 = uStack_48;
  uStack_a0 = uStack_50;
  uStack_88 = uStack_38;
  uStack_90 = uStack_40;
  uStack_80 = uStack_30;
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  uStack_a8 = uStack_58;
  uStack_b0 = uStack_60;
  uVar1 = (uint)(param_2 >> 0x20);
  uVar2 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar2 != 0) {
      lVar3 = (long)(int)param_1;
      lVar4 = param_1 >> 0x20;
      goto LAB_00194048;
    }
    if ((param_2 & 0xff000000000000) == 0) goto LAB_00194060;
  }
  else {
    if (uVar2 != 2) goto LAB_00194060;
    lVar3 = *(long *)(param_1 + 0x10);
    lVar4 = *(long *)(param_1 + 0x18);
LAB_00194048:
    if (lVar3 == lVar4) goto LAB_00194060;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_c0,param_1,param_2);
LAB_00194060:
  uStack_48 = uStack_98;
  uStack_50 = uStack_a0;
  uStack_38 = uStack_88;
  uStack_40 = uStack_90;
  uStack_30 = uStack_80;
  uStack_68 = uStack_b8;
  uStack_70 = uStack_c0;
  uStack_58 = uStack_a8;
  uStack_60 = uStack_b0;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00194090; end: 001940bb;  */

void FUN_00194090(undefined8 *param_1)

{
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  return;
}



/* Entry: 001940bc; end: 001940eb;  */

undefined1  [16] FUN_001940bc(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00023304(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 001940ec; end: 0019411f;  */

void FUN_001940ec(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  FUN_00023358(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 00194120; end: 00194133;  */

undefined8 FUN_00194120(void)

{
  return 0x194130;
}



/* Entry: 00194134; end: 00194167;  */

void FUN_00194134(void)

{
  FUN_00193f74();
  return;
}


