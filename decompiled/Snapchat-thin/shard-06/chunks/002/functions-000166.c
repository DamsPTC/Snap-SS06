/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1045fdee8; end: 1045fdf43;  */

void FUN_1045fdee8(undefined8 *param_1)

{
  long lVar1;
  
  _swift_bridgeObjectRelease(*param_1);
  _swift_bridgeObjectRelease(param_1[1]);
  func_0x00010006c090(param_1[2],param_1[3]);
  _swift_bridgeObjectRelease(param_1[4]);
  lVar1 = param_1[7];
  if (lVar1 != 0) {
    func_0x00010006c090(param_1[5],param_1[6]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar1);
    return;
  }
  return;
}



/* Entry: 1045fdf44; end: 1045fdff7;  */

undefined8 * FUN_1045fdf44(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar4 = param_2[2];
  uVar2 = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  func_0x00010006c00c(uVar4,uVar2);
  param_1[2] = uVar4;
  param_1[3] = uVar2;
  param_1[4] = param_2[4];
  lVar3 = param_2[7];
  _swift_bridgeObjectRetain();
  if (lVar3 == 0) {
    uVar4 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar4;
    uVar4 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar4;
  }
  else {
    uVar4 = param_2[5];
    uVar1 = param_2[6];
    func_0x00010006c00c(uVar4,uVar1);
    param_1[5] = uVar4;
    param_1[6] = uVar1;
    param_1[7] = lVar3;
    param_1[8] = param_2[8];
    _swift_bridgeObjectRetain(lVar3);
  }
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  return param_1;
}



/* Entry: 1045fdff8; end: 1045fe26f;  */

undefined8 * FUN_1045fdff8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  func_0x00010006c00c(uVar2,uVar4);
  uVar3 = param_1[2];
  uVar1 = param_1[3];
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  func_0x00010006c090(uVar3,uVar1);
  uVar2 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  if (param_1[7] == 0) {
    if (param_2[7] == 0) {
      uVar3 = param_2[6];
      uVar2 = param_2[5];
      uVar4 = param_2[7];
      param_1[8] = param_2[8];
      param_1[7] = uVar4;
      param_1[6] = uVar3;
      param_1[5] = uVar2;
    }
    else {
      uVar2 = param_2[5];
      uVar3 = param_2[6];
      func_0x00010006c00c(uVar2,uVar3);
      param_1[5] = uVar2;
      param_1[6] = uVar3;
      param_1[7] = param_2[7];
      *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
      *(undefined1 *)((long)param_1 + 0x41) = *(undefined1 *)((long)param_2 + 0x41);
      *(undefined1 *)((long)param_1 + 0x42) = *(undefined1 *)((long)param_2 + 0x42);
      *(undefined1 *)((long)param_1 + 0x43) = *(undefined1 *)((long)param_2 + 0x43);
      *(undefined1 *)((long)param_1 + 0x44) = *(undefined1 *)((long)param_2 + 0x44);
      *(undefined1 *)((long)param_1 + 0x45) = *(undefined1 *)((long)param_2 + 0x45);
      *(undefined1 *)((long)param_1 + 0x46) = *(undefined1 *)((long)param_2 + 0x46);
      *(undefined1 *)((long)param_1 + 0x47) = *(undefined1 *)((long)param_2 + 0x47);
      _swift_bridgeObjectRetain();
    }
  }
  else if (param_2[7] == 0) {
    func_0x0001045f89d8(param_1 + 5);
    uVar3 = param_2[8];
    uVar2 = param_2[7];
    uVar4 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar4;
    param_1[8] = uVar3;
    param_1[7] = uVar2;
  }
  else {
    uVar2 = param_2[5];
    uVar4 = param_2[6];
    func_0x00010006c00c(uVar2,uVar4);
    uVar3 = param_1[5];
    uVar1 = param_1[6];
    param_1[5] = uVar2;
    param_1[6] = uVar4;
    func_0x00010006c090(uVar3,uVar1);
    uVar2 = param_1[7];
    param_1[7] = param_2[7];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar2);
    *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
    *(undefined1 *)((long)param_1 + 0x41) = *(undefined1 *)((long)param_2 + 0x41);
    *(undefined1 *)((long)param_1 + 0x42) = *(undefined1 *)((long)param_2 + 0x42);
    *(undefined1 *)((long)param_1 + 0x43) = *(undefined1 *)((long)param_2 + 0x43);
    *(undefined1 *)((long)param_1 + 0x44) = *(undefined1 *)((long)param_2 + 0x44);
    *(undefined1 *)((long)param_1 + 0x45) = *(undefined1 *)((long)param_2 + 0x45);
    *(undefined1 *)((long)param_1 + 0x46) = *(undefined1 *)((long)param_2 + 0x46);
    *(undefined1 *)((long)param_1 + 0x47) = *(undefined1 *)((long)param_2 + 0x47);
  }
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  return param_1;
}



/* Entry: 1045fe270; end: 1045fe46f;  */

int FUN_1045fe270(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x49) != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1045fe470; end: 1045fe4a3;  */

void FUN_1045fe470(undefined8 *param_1)

{
  func_0x00010006c090(*param_1,param_1[1]);
  _swift_bridgeObjectRelease(param_1[4]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1[6]);
  return;
}



/* Entry: 1045fe4a4; end: 1045fe5bf;  */

undefined8 * FUN_1045fe4a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x00010006c00c(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined1 *)((long)param_1 + 0x14) = *(undefined1 *)((long)param_2 + 0x14);
  uVar1 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  uVar1 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar1;
  *(undefined2 *)(param_1 + 7) = *(undefined2 *)(param_2 + 7);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  return param_1;
}



/* Entry: 1045fe5c0; end: 1045fe62f;  */

undefined8 * FUN_1045fe5c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined1 *)((long)param_1 + 0x14) = *(undefined1 *)((long)param_2 + 0x14);
  uVar1 = param_2[4];
  uVar2 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[6];
  uVar2 = param_1[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  *(undefined2 *)(param_1 + 7) = *(undefined2 *)(param_2 + 7);
  return param_1;
}



/* Entry: 1045fe630; end: 1045fe6ff;  */

int FUN_1045fe630(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && (*(char *)((long)param_1 + 0x3a) != '\0')) {
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



/* Entry: 1045fe700; end: 1045fe777;  */

void FUN_1045fe700(undefined8 *param_1)

{
  long lVar1;
  
  func_0x00010006c090(*param_1,param_1[1]);
  _swift_bridgeObjectRelease(param_1[3]);
  _swift_bridgeObjectRelease(param_1[6]);
  _swift_bridgeObjectRelease(param_1[8]);
  _swift_bridgeObjectRelease(param_1[10]);
  _swift_bridgeObjectRelease(param_1[0xd]);
  lVar1 = param_1[0x10];
  if (lVar1 != 0) {
    func_0x00010006c090(param_1[0xe],param_1[0xf]);
    _swift_bridgeObjectRelease(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_1[0x11]);
    return;
  }
  return;
}



/* Entry: 1045fe778; end: 1045fe883;  */

undefined8 * FUN_1045fe778(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = *param_2;
  uVar4 = param_2[1];
  func_0x00010006c00c(uVar3,uVar4);
  *param_1 = uVar3;
  param_1[1] = uVar4;
  uVar3 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined1 *)((long)param_1 + 0x24) = *(undefined1 *)((long)param_2 + 0x24);
  *(undefined2 *)((long)param_1 + 0x25) = *(undefined2 *)((long)param_2 + 0x25);
  uVar3 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar3;
  uVar4 = param_2[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar4;
  uVar5 = param_2[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar5;
  *(undefined1 *)((long)param_1 + 0x5c) = *(undefined1 *)((long)param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  uVar1 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar1;
  lVar2 = param_2[0x10];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar1);
  if (lVar2 == 0) {
    uVar3 = param_2[0xe];
    uVar5 = param_2[0x11];
    uVar4 = param_2[0x10];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar3;
    param_1[0x11] = uVar5;
    param_1[0x10] = uVar4;
  }
  else {
    uVar3 = param_2[0xe];
    uVar4 = param_2[0xf];
    func_0x00010006c00c(uVar3,uVar4);
    param_1[0xe] = uVar3;
    param_1[0xf] = uVar4;
    uVar3 = param_2[0x11];
    param_1[0x10] = lVar2;
    param_1[0x11] = uVar3;
    _swift_bridgeObjectRetain(lVar2);
    _swift_retain(uVar3);
  }
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x12);
  return param_1;
}



/* Entry: 1045fe884; end: 1045fea57;  */

undefined8 * FUN_1045fe884(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = *param_2;
  uVar5 = param_2[1];
  func_0x00010006c00c(uVar3,uVar5);
  uVar4 = *param_1;
  uVar1 = param_1[1];
  *param_1 = uVar3;
  param_1[1] = uVar5;
  func_0x00010006c090(uVar4,uVar1);
  param_1[2] = param_2[2];
  uVar3 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  uVar2 = *(undefined4 *)(param_2 + 4);
  *(undefined1 *)((long)param_1 + 0x24) = *(undefined1 *)((long)param_2 + 0x24);
  *(undefined4 *)(param_1 + 4) = uVar2;
  *(undefined1 *)((long)param_1 + 0x25) = *(undefined1 *)((long)param_2 + 0x25);
  *(undefined1 *)((long)param_1 + 0x26) = *(undefined1 *)((long)param_2 + 0x26);
  param_1[5] = param_2[5];
  uVar3 = param_1[6];
  param_1[6] = param_2[6];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  param_1[7] = param_2[7];
  uVar3 = param_1[8];
  param_1[8] = param_2[8];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  param_1[9] = param_2[9];
  uVar3 = param_1[10];
  param_1[10] = param_2[10];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  uVar2 = *(undefined4 *)(param_2 + 0xb);
  *(undefined1 *)((long)param_1 + 0x5c) = *(undefined1 *)((long)param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0xb) = uVar2;
  param_1[0xc] = param_2[0xc];
  uVar3 = param_1[0xd];
  param_1[0xd] = param_2[0xd];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  if (param_1[0x10] == 0) {
    if (param_2[0x10] == 0) {
      uVar3 = param_2[0xe];
      uVar5 = param_2[0x11];
      uVar4 = param_2[0x10];
      param_1[0xf] = param_2[0xf];
      param_1[0xe] = uVar3;
      param_1[0x11] = uVar5;
      param_1[0x10] = uVar4;
    }
    else {
      uVar3 = param_2[0xe];
      uVar4 = param_2[0xf];
      func_0x00010006c00c(uVar3,uVar4);
      param_1[0xe] = uVar3;
      param_1[0xf] = uVar4;
      param_1[0x10] = param_2[0x10];
      uVar3 = param_2[0x11];
      param_1[0x11] = uVar3;
      _swift_bridgeObjectRetain();
      _swift_retain(uVar3);
    }
  }
  else if (param_2[0x10] == 0) {
    FUN_1045fea58(param_1 + 0xe);
    uVar5 = param_2[0xe];
    uVar4 = param_2[0x11];
    uVar3 = param_2[0x10];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar5;
    param_1[0x11] = uVar4;
    param_1[0x10] = uVar3;
  }
  else {
    uVar3 = param_2[0xe];
    uVar5 = param_2[0xf];
    func_0x00010006c00c(uVar3,uVar5);
    uVar4 = param_1[0xe];
    uVar1 = param_1[0xf];
    param_1[0xe] = uVar3;
    param_1[0xf] = uVar5;
    func_0x00010006c090(uVar4,uVar1);
    uVar3 = param_1[0x10];
    param_1[0x10] = param_2[0x10];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar3);
    uVar3 = param_1[0x11];
    param_1[0x11] = param_2[0x11];
    _swift_retain();
    _swift_release(uVar3);
  }
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x12);
  return param_1;
}



/* Entry: 1045fea58; end: 1045fea83;  */

undefined8 FUN_1045fea58(undefined8 param_1)

{
  func_0x000100dbc080(param_1,&UNK_11078d990);
  return param_1;
}



/* Entry: 1045fea84; end: 1045feb93;  */

undefined8 * FUN_1045fea84(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  func_0x00010006c090(uVar1,uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined1 *)((long)param_1 + 0x24) = *(undefined1 *)((long)param_2 + 0x24);
  *(undefined2 *)((long)param_1 + 0x25) = *(undefined2 *)((long)param_2 + 0x25);
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
  uVar1 = param_2[10];
  uVar2 = param_1[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  *(undefined1 *)((long)param_1 + 0x5c) = *(undefined1 *)((long)param_2 + 0x5c);
  uVar1 = param_2[0xd];
  uVar2 = param_1[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  lVar3 = param_1[0x10];
  if (lVar3 != 0) {
    lVar4 = param_2[0x10];
    if (lVar4 != 0) {
      uVar1 = param_1[0xe];
      uVar2 = param_1[0xf];
      uVar5 = param_2[0xe];
      param_1[0xf] = param_2[0xf];
      param_1[0xe] = uVar5;
      func_0x00010006c090(uVar1,uVar2);
      param_1[0x10] = lVar4;
      _swift_bridgeObjectRelease(lVar3);
      uVar1 = param_1[0x11];
      param_1[0x11] = param_2[0x11];
      _swift_release(uVar1);
      goto LAB_1045feb78;
    }
    FUN_1045fea58(param_1 + 0xe);
  }
  uVar1 = param_2[0xe];
  uVar5 = param_2[0x11];
  uVar2 = param_2[0x10];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar1;
  param_1[0x11] = uVar5;
  param_1[0x10] = uVar2;
LAB_1045feb78:
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x12);
  return param_1;
}



/* Entry: 1045feb94; end: 1045fede3;  */

int FUN_1045feb94(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && (*(char *)((long)param_1 + 0x91) != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1045fede4; end: 1045fee4f;  */

void FUN_1045fede4(undefined8 *param_1)

{
  long lVar1;
  
  func_0x00010006c090(*param_1,param_1[1]);
  _swift_bridgeObjectRelease(param_1[3]);
  if (param_1[4] != 0) {
    _swift_bridgeObjectRelease();
    func_0x00010006c090(param_1[5],param_1[6]);
    _swift_bridgeObjectRelease(param_1[7]);
    lVar1 = param_1[10];
    if (lVar1 != 0) {
      func_0x00010006c090(param_1[8],param_1[9]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 1045fee50; end: 1045ff163;  */

undefined8 * FUN_1045fee50(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  func_0x00010006c00c(uVar2,uVar3);
  *param_1 = uVar2;
  param_1[1] = uVar3;
  lVar1 = param_2[4];
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  _swift_bridgeObjectRetain();
  if (lVar1 == 0) {
    lVar1 = param_2[4];
    uVar3 = param_2[7];
    uVar2 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = lVar1;
    param_1[7] = uVar3;
    param_1[6] = uVar2;
    uVar3 = param_2[9];
    uVar2 = param_2[8];
    uVar5 = param_2[0xb];
    uVar4 = param_2[10];
  }
  else {
    param_1[4] = lVar1;
    uVar2 = param_2[5];
    uVar3 = param_2[6];
    _swift_bridgeObjectRetain(lVar1);
    func_0x00010006c00c(uVar2,uVar3);
    param_1[5] = uVar2;
    param_1[6] = uVar3;
    param_1[7] = param_2[7];
    lVar1 = param_2[10];
    _swift_bridgeObjectRetain();
    if (lVar1 != 0) {
      uVar2 = param_2[8];
      uVar3 = param_2[9];
      func_0x00010006c00c(uVar2,uVar3);
      param_1[8] = uVar2;
      param_1[9] = uVar3;
      param_1[10] = lVar1;
      param_1[0xb] = param_2[0xb];
      _swift_bridgeObjectRetain(lVar1);
      return param_1;
    }
    uVar3 = param_2[9];
    uVar2 = param_2[8];
    uVar5 = param_2[0xb];
    uVar4 = param_2[10];
  }
  param_1[9] = uVar3;
  param_1[8] = uVar2;
  param_1[0xb] = uVar5;
  param_1[10] = uVar4;
  return param_1;
}



/* Entry: 1045ff164; end: 1045ff253;  */

undefined8 * FUN_1045ff164(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  func_0x00010006c090(uVar1,uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  plVar3 = param_1 + 4;
  if (*plVar3 != 0) {
    if (param_2[4] != 0) {
      param_1[4] = param_2[4];
      _swift_bridgeObjectRelease();
      uVar1 = param_1[5];
      uVar2 = param_1[6];
      uVar5 = param_2[5];
      param_1[6] = param_2[6];
      param_1[5] = uVar5;
      func_0x00010006c090(uVar1,uVar2);
      uVar1 = param_1[7];
      param_1[7] = param_2[7];
      _swift_bridgeObjectRelease(uVar1);
      if (param_1[10] != 0) {
        lVar4 = param_2[10];
        if (lVar4 != 0) {
          uVar1 = param_1[8];
          uVar2 = param_1[9];
          uVar5 = param_2[8];
          param_1[9] = param_2[9];
          param_1[8] = uVar5;
          func_0x00010006c090(uVar1,uVar2);
          uVar1 = param_1[10];
          param_1[10] = lVar4;
          _swift_bridgeObjectRelease(uVar1);
          param_1[0xb] = param_2[0xb];
          return param_1;
        }
        func_0x0001045f89d8(param_1 + 8);
      }
      uVar1 = param_2[8];
      uVar5 = param_2[0xb];
      uVar2 = param_2[10];
      param_1[9] = param_2[9];
      param_1[8] = uVar1;
      param_1[0xb] = uVar5;
      param_1[10] = uVar2;
      return param_1;
    }
    func_0x0001045f8ab0(plVar3);
  }
  lVar4 = param_2[4];
  uVar2 = param_2[7];
  uVar1 = param_2[6];
  param_1[5] = param_2[5];
  *plVar3 = lVar4;
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  uVar1 = param_2[8];
  uVar5 = param_2[0xb];
  uVar2 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar1;
  param_1[0xb] = uVar5;
  param_1[10] = uVar2;
  return param_1;
}



/* Entry: 1045ff254; end: 1045ff33b;  */

int FUN_1045ff254(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x18] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1045ff33c; end: 1045ff403;  */

undefined8 * FUN_1045ff33c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x00010006c00c(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined1 *)((long)param_1 + 0x14) = *(undefined1 *)((long)param_2 + 0x14);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined1 *)((long)param_1 + 0x1c) = *(undefined1 *)((long)param_2 + 0x1c);
  return param_1;
}



/* Entry: 1045ff404; end: 1045ff45b;  */

undefined8 * FUN_1045ff404(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined1 *)((long)param_1 + 0x14) = *(undefined1 *)((long)param_2 + 0x14);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined1 *)((long)param_1 + 0x1c) = *(undefined1 *)((long)param_2 + 0x1c);
  return param_1;
}



/* Entry: 1045ff45c; end: 1045ff527;  */

int FUN_1045ff45c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && (*(char *)((long)param_1 + 0x1d) != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1045ff528; end: 1045ff597;  */

void FUN_1045ff528(undefined8 *param_1)

{
  long lVar1;
  
  _swift_bridgeObjectRelease(*param_1);
  func_0x00010006c090(param_1[1],param_1[2]);
  _swift_bridgeObjectRelease(param_1[4]);
  if (param_1[5] != 0) {
    _swift_bridgeObjectRelease();
    func_0x00010006c090(param_1[6],param_1[7]);
    _swift_bridgeObjectRelease(param_1[8]);
    lVar1 = param_1[0xb];
    if (lVar1 != 0) {
      func_0x00010006c090(param_1[9],param_1[10]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 1045ff598; end: 1045ff92b;  */

undefined8 * FUN_1045ff598(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  uVar2 = param_2[2];
  _swift_bridgeObjectRetain();
  func_0x00010006c00c(uVar3,uVar2);
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  lVar1 = param_2[5];
  uVar3 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar3;
  _swift_bridgeObjectRetain();
  if (lVar1 == 0) {
    uVar2 = param_2[6];
    lVar1 = param_2[5];
    uVar3 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar3;
    uVar3 = param_2[9];
    uVar5 = param_2[0xc];
    uVar4 = param_2[0xb];
    param_1[10] = param_2[10];
    param_1[9] = uVar3;
    param_1[0xc] = uVar5;
    param_1[0xb] = uVar4;
    *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
    param_1[6] = uVar2;
    param_1[5] = lVar1;
  }
  else {
    param_1[5] = lVar1;
    uVar3 = param_2[6];
    uVar2 = param_2[7];
    _swift_bridgeObjectRetain(lVar1);
    func_0x00010006c00c(uVar3,uVar2);
    param_1[6] = uVar3;
    param_1[7] = uVar2;
    param_1[8] = param_2[8];
    lVar1 = param_2[0xb];
    _swift_bridgeObjectRetain();
    if (lVar1 == 0) {
      uVar3 = param_2[9];
      param_1[10] = param_2[10];
      param_1[9] = uVar3;
      uVar3 = param_2[0xb];
      param_1[0xc] = param_2[0xc];
      param_1[0xb] = uVar3;
    }
    else {
      uVar3 = param_2[9];
      uVar2 = param_2[10];
      func_0x00010006c00c(uVar3,uVar2);
      param_1[9] = uVar3;
      param_1[10] = uVar2;
      param_1[0xb] = lVar1;
      param_1[0xc] = param_2[0xc];
      _swift_bridgeObjectRetain(lVar1);
    }
    *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  }
  return param_1;
}



/* Entry: 1045ff92c; end: 1045ffa47;  */

undefined8 * FUN_1045ff92c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar5 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar5;
  func_0x00010006c090(uVar1,uVar2);
  uVar1 = param_2[4];
  uVar2 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  plVar3 = param_1 + 5;
  if (*plVar3 == 0) {
LAB_1045ff9f0:
    uVar2 = param_2[8];
    uVar1 = param_2[7];
    uVar5 = param_2[9];
    uVar7 = param_2[0xc];
    uVar6 = param_2[0xb];
    param_1[10] = param_2[10];
    param_1[9] = uVar5;
    param_1[0xc] = uVar7;
    param_1[0xb] = uVar6;
    *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
    lVar4 = param_2[5];
    param_1[6] = param_2[6];
    *plVar3 = lVar4;
    param_1[8] = uVar2;
    param_1[7] = uVar1;
    return param_1;
  }
  if (param_2[5] == 0) {
    func_0x0001045f8eac(plVar3);
    goto LAB_1045ff9f0;
  }
  param_1[5] = param_2[5];
  _swift_bridgeObjectRelease();
  uVar1 = param_1[6];
  uVar2 = param_1[7];
  uVar5 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar5;
  func_0x00010006c090(uVar1,uVar2);
  uVar1 = param_1[8];
  param_1[8] = param_2[8];
  _swift_bridgeObjectRelease(uVar1);
  if (param_1[0xb] != 0) {
    lVar4 = param_2[0xb];
    if (lVar4 != 0) {
      uVar1 = param_1[9];
      uVar2 = param_1[10];
      uVar5 = param_2[9];
      param_1[10] = param_2[10];
      param_1[9] = uVar5;
      func_0x00010006c090(uVar1,uVar2);
      uVar1 = param_1[0xb];
      param_1[0xb] = lVar4;
      _swift_bridgeObjectRelease(uVar1);
      param_1[0xc] = param_2[0xc];
      goto LAB_1045ffa2c;
    }
    func_0x0001045f89d8(param_1 + 9);
  }
  uVar1 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar1;
  uVar1 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar1;
LAB_1045ffa2c:
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  return param_1;
}



/* Entry: 1045ffa48; end: 1045ffafb;  */

int FUN_1045ffa48(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x69) != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1045ffafc; end: 1045ffb77;  */

void FUN_1045ffafc(undefined8 *param_1)

{
  long lVar1;
  
  func_0x00010006c090(*param_1,param_1[1]);
  _swift_bridgeObjectRelease(param_1[3]);
  _swift_bridgeObjectRelease(param_1[5]);
  _swift_bridgeObjectRelease(param_1[7]);
  if (param_1[8] != 0) {
    _swift_bridgeObjectRelease();
    func_0x00010006c090(param_1[9],param_1[10]);
    _swift_bridgeObjectRelease(param_1[0xb]);
    lVar1 = param_1[0xf];
    if (lVar1 != 0) {
      func_0x00010006c090(param_1[0xd],param_1[0xe]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 1045ffb78; end: 1045fff6f;  */

undefined8 * FUN_1045ffb78(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  func_0x00010006c00c(uVar2,uVar3);
  *param_1 = uVar2;
  param_1[1] = uVar3;
  lVar1 = param_2[8];
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  uVar3 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar3;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  if (lVar1 == 0) {
    uVar2 = param_2[0xc];
    uVar4 = param_2[0xf];
    uVar3 = param_2[0xe];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar2;
    param_1[0xf] = uVar4;
    param_1[0xe] = uVar3;
    param_1[0x10] = param_2[0x10];
    lVar1 = param_2[8];
    uVar3 = param_2[0xb];
    uVar2 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = lVar1;
    param_1[0xb] = uVar3;
    param_1[10] = uVar2;
  }
  else {
    param_1[8] = lVar1;
    uVar2 = param_2[9];
    uVar3 = param_2[10];
    _swift_bridgeObjectRetain(lVar1);
    func_0x00010006c00c(uVar2,uVar3);
    param_1[9] = uVar2;
    param_1[10] = uVar3;
    param_1[0xb] = param_2[0xb];
    *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_2 + 0xc);
    lVar1 = param_2[0xf];
    _swift_bridgeObjectRetain();
    if (lVar1 == 0) {
      uVar2 = param_2[0xd];
      param_1[0xe] = param_2[0xe];
      param_1[0xd] = uVar2;
      uVar2 = param_2[0xf];
      param_1[0x10] = param_2[0x10];
      param_1[0xf] = uVar2;
    }
    else {
      uVar2 = param_2[0xd];
      uVar3 = param_2[0xe];
      func_0x00010006c00c(uVar2,uVar3);
      param_1[0xd] = uVar2;
      param_1[0xe] = uVar3;
      param_1[0xf] = lVar1;
      param_1[0x10] = param_2[0x10];
      _swift_bridgeObjectRetain(lVar1);
    }
  }
  *(undefined2 *)(param_1 + 0x11) = *(undefined2 *)(param_2 + 0x11);
  return param_1;
}



/* Entry: 1045fff70; end: 1045fffa3;  */

void FUN_1045fff70(undefined8 *param_1,undefined8 *param_2)

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
  uVar6 = param_2[0xf];
  uVar5 = param_2[0xe];
  uVar7 = *(undefined8 *)((long)param_2 + 0x7a);
  *(undefined8 *)((long)param_1 + 0x82) = *(undefined8 *)((long)param_2 + 0x82);
  *(undefined8 *)((long)param_1 + 0x7a) = uVar7;
  param_1[0xd] = uVar4;
  param_1[0xc] = uVar3;
  param_1[0xf] = uVar6;
  param_1[0xe] = uVar5;
  param_1[0xb] = uVar2;
  param_1[10] = uVar1;
  return;
}



/* Entry: 1045fffa4; end: 1046000d3;  */

undefined8 * FUN_1045fffa4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  func_0x00010006c090(uVar1,uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[7];
  uVar2 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  plVar3 = param_1 + 8;
  if (*plVar3 != 0) {
    if (param_2[8] != 0) {
      param_1[8] = param_2[8];
      _swift_bridgeObjectRelease();
      uVar1 = param_1[9];
      uVar2 = param_1[10];
      uVar5 = param_2[9];
      param_1[10] = param_2[10];
      param_1[9] = uVar5;
      func_0x00010006c090(uVar1,uVar2);
      uVar1 = param_1[0xb];
      param_1[0xb] = param_2[0xb];
      _swift_bridgeObjectRelease(uVar1);
      *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_2 + 0xc);
      if (param_1[0xf] != 0) {
        lVar4 = param_2[0xf];
        if (lVar4 != 0) {
          uVar1 = param_1[0xd];
          uVar2 = param_1[0xe];
          uVar5 = param_2[0xd];
          param_1[0xe] = param_2[0xe];
          param_1[0xd] = uVar5;
          func_0x00010006c090(uVar1,uVar2);
          uVar1 = param_1[0xf];
          param_1[0xf] = lVar4;
          _swift_bridgeObjectRelease(uVar1);
          param_1[0x10] = param_2[0x10];
          goto LAB_1046000b8;
        }
        func_0x0001045f89d8(param_1 + 0xd);
      }
      uVar1 = param_2[0xd];
      param_1[0xe] = param_2[0xe];
      param_1[0xd] = uVar1;
      uVar1 = param_2[0xf];
      param_1[0x10] = param_2[0x10];
      param_1[0xf] = uVar1;
      goto LAB_1046000b8;
    }
    func_0x0001045f8f0c(plVar3);
  }
  uVar1 = param_2[0xc];
  uVar5 = param_2[0xf];
  uVar2 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar1;
  param_1[0xf] = uVar5;
  param_1[0xe] = uVar2;
  param_1[0x10] = param_2[0x10];
  lVar4 = param_2[8];
  uVar2 = param_2[0xb];
  uVar1 = param_2[10];
  param_1[9] = param_2[9];
  *plVar3 = lVar4;
  param_1[0xb] = uVar2;
  param_1[10] = uVar1;
LAB_1046000b8:
  *(undefined2 *)(param_1 + 0x11) = *(undefined2 *)(param_2 + 0x11);
  return param_1;
}



/* Entry: 1046000d4; end: 1046001db;  */

int FUN_1046000d4(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && (*(char *)((long)param_1 + 0x8a) != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1046001dc; end: 10460028f;  */

undefined8 * FUN_1046001dc(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  uVar2 = param_2[2];
  _swift_bridgeObjectRetain();
  func_0x00010006c00c(uVar3,uVar2);
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = param_2[3];
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined1 *)((long)param_1 + 0x24) = *(undefined1 *)((long)param_2 + 0x24);
  lVar1 = param_2[7];
  _swift_bridgeObjectRetain();
  if (lVar1 == 0) {
    uVar3 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar3;
    uVar3 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar3;
  }
  else {
    uVar3 = param_2[5];
    uVar2 = param_2[6];
    func_0x00010006c00c(uVar3,uVar2);
    param_1[5] = uVar3;
    param_1[6] = uVar2;
    param_1[7] = lVar1;
    param_1[8] = param_2[8];
    _swift_bridgeObjectRetain(lVar1);
  }
  return param_1;
}



/* Entry: 104600290; end: 104600507;  */

undefined8 * FUN_104600290(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_2[1];
  uVar4 = param_2[2];
  func_0x00010006c00c(uVar2,uVar4);
  uVar3 = param_1[1];
  uVar1 = param_1[2];
  param_1[1] = uVar2;
  param_1[2] = uVar4;
  func_0x00010006c090(uVar3,uVar1);
  uVar2 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  *(undefined1 *)((long)param_1 + 0x21) = *(undefined1 *)((long)param_2 + 0x21);
  *(undefined1 *)((long)param_1 + 0x22) = *(undefined1 *)((long)param_2 + 0x22);
  *(undefined1 *)((long)param_1 + 0x23) = *(undefined1 *)((long)param_2 + 0x23);
  *(undefined1 *)((long)param_1 + 0x24) = *(undefined1 *)((long)param_2 + 0x24);
  if (param_1[7] == 0) {
    if (param_2[7] == 0) {
      uVar3 = param_2[6];
      uVar2 = param_2[5];
      uVar4 = param_2[7];
      param_1[8] = param_2[8];
      param_1[7] = uVar4;
      param_1[6] = uVar3;
      param_1[5] = uVar2;
    }
    else {
      uVar2 = param_2[5];
      uVar3 = param_2[6];
      func_0x00010006c00c(uVar2,uVar3);
      param_1[5] = uVar2;
      param_1[6] = uVar3;
      param_1[7] = param_2[7];
      *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
      *(undefined1 *)((long)param_1 + 0x41) = *(undefined1 *)((long)param_2 + 0x41);
      *(undefined1 *)((long)param_1 + 0x42) = *(undefined1 *)((long)param_2 + 0x42);
      *(undefined1 *)((long)param_1 + 0x43) = *(undefined1 *)((long)param_2 + 0x43);
      *(undefined1 *)((long)param_1 + 0x44) = *(undefined1 *)((long)param_2 + 0x44);
      *(undefined1 *)((long)param_1 + 0x45) = *(undefined1 *)((long)param_2 + 0x45);
      *(undefined1 *)((long)param_1 + 0x46) = *(undefined1 *)((long)param_2 + 0x46);
      *(undefined1 *)((long)param_1 + 0x47) = *(undefined1 *)((long)param_2 + 0x47);
      _swift_bridgeObjectRetain();
    }
  }
  else if (param_2[7] == 0) {
    func_0x0001045f89d8(param_1 + 5);
    uVar3 = param_2[8];
    uVar2 = param_2[7];
    uVar4 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar4;
    param_1[8] = uVar3;
    param_1[7] = uVar2;
  }
  else {
    uVar2 = param_2[5];
    uVar4 = param_2[6];
    func_0x00010006c00c(uVar2,uVar4);
    uVar3 = param_1[5];
    uVar1 = param_1[6];
    param_1[5] = uVar2;
    param_1[6] = uVar4;
    func_0x00010006c090(uVar3,uVar1);
    uVar2 = param_1[7];
    param_1[7] = param_2[7];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar2);
    *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
    *(undefined1 *)((long)param_1 + 0x41) = *(undefined1 *)((long)param_2 + 0x41);
    *(undefined1 *)((long)param_1 + 0x42) = *(undefined1 *)((long)param_2 + 0x42);
    *(undefined1 *)((long)param_1 + 0x43) = *(undefined1 *)((long)param_2 + 0x43);
    *(undefined1 *)((long)param_1 + 0x44) = *(undefined1 *)((long)param_2 + 0x44);
    *(undefined1 *)((long)param_1 + 0x45) = *(undefined1 *)((long)param_2 + 0x45);
    *(undefined1 *)((long)param_1 + 0x46) = *(undefined1 *)((long)param_2 + 0x46);
    *(undefined1 *)((long)param_1 + 0x47) = *(undefined1 *)((long)param_2 + 0x47);
  }
  return param_1;
}



/* Entry: 104600508; end: 104600517;  */

undefined1  [16] FUN_104600508(void)

{
  return ZEXT816(0x11078d8f0);
}



/* Entry: 104600518; end: 10460054b;  */

void FUN_104600518(undefined8 *param_1)

{
  func_0x00010006c090(*param_1,param_1[1]);
  _swift_bridgeObjectRelease(param_1[2]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1[3]);
  return;
}



/* Entry: 10460054c; end: 104600617;  */

undefined8 * FUN_10460054c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x00010006c00c(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRetain();
  _swift_retain(uVar1);
  return param_1;
}



/* Entry: 104600618; end: 104600667;  */

undefined8 * FUN_104600618(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  _swift_bridgeObjectRelease(param_1[2]);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  _swift_release(uVar1);
  return param_1;
}



/* Entry: 104600668; end: 104600807;  */

undefined1  [16] FUN_104600668(void)

{
  return ZEXT816(0x11078d990);
}



/* Entry: 104600808; end: 1046008cb;  */

undefined8 * FUN_104600808(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x00010006c00c(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar1 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 1046008cc; end: 10460091b;  */

undefined8 * FUN_1046008cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar1 = param_2[4];
  uVar2 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Entry: 10460091c; end: 1046009e3;  */

int FUN_10460091c(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[10] != '\0')) {
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



/* Entry: 1046009e4; end: 104600a0f;  */

void FUN_1046009e4(undefined8 *param_1)

{
  func_0x00010006c090(*param_1,param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1[4]);
  return;
}



/* Entry: 104600a10; end: 104600aeb;  */

undefined8 * FUN_104600a10(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x00010006c00c(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  uVar1 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 104600aec; end: 104600b43;  */

undefined8 * FUN_104600aec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  uVar1 = param_2[4];
  uVar2 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  return param_1;
}



/* Entry: 104600b44; end: 104600c0f;  */

int FUN_104600b44(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && (*(char *)((long)param_1 + 0x29) != '\0')) {
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



/* Entry: 104600c10; end: 104600cab;  */

undefined8 * FUN_104600c10(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  uVar2 = param_2[2];
  _swift_bridgeObjectRetain();
  func_0x00010006c00c(uVar3,uVar2);
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = param_2[3];
  lVar1 = param_2[6];
  _swift_bridgeObjectRetain();
  if (lVar1 == 0) {
    uVar3 = param_2[4];
    uVar4 = param_2[7];
    uVar2 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar3;
    param_1[7] = uVar4;
    param_1[6] = uVar2;
  }
  else {
    uVar3 = param_2[4];
    uVar2 = param_2[5];
    func_0x00010006c00c(uVar3,uVar2);
    param_1[4] = uVar3;
    param_1[5] = uVar2;
    param_1[6] = lVar1;
    param_1[7] = param_2[7];
    _swift_bridgeObjectRetain(lVar1);
  }
  return param_1;
}



/* Entry: 104600cac; end: 104600ed3;  */

undefined8 * FUN_104600cac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_2[1];
  uVar4 = param_2[2];
  func_0x00010006c00c(uVar2,uVar4);
  uVar3 = param_1[1];
  uVar1 = param_1[2];
  param_1[1] = uVar2;
  param_1[2] = uVar4;
  func_0x00010006c090(uVar3,uVar1);
  uVar2 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  if (param_1[6] == 0) {
    if (param_2[6] == 0) {
      uVar2 = param_2[4];
      uVar4 = param_2[7];
      uVar3 = param_2[6];
      param_1[5] = param_2[5];
      param_1[4] = uVar2;
      param_1[7] = uVar4;
      param_1[6] = uVar3;
    }
    else {
      uVar2 = param_2[4];
      uVar3 = param_2[5];
      func_0x00010006c00c(uVar2,uVar3);
      param_1[4] = uVar2;
      param_1[5] = uVar3;
      param_1[6] = param_2[6];
      *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
      *(undefined1 *)((long)param_1 + 0x39) = *(undefined1 *)((long)param_2 + 0x39);
      *(undefined1 *)((long)param_1 + 0x3a) = *(undefined1 *)((long)param_2 + 0x3a);
      *(undefined1 *)((long)param_1 + 0x3b) = *(undefined1 *)((long)param_2 + 0x3b);
      *(undefined1 *)((long)param_1 + 0x3c) = *(undefined1 *)((long)param_2 + 0x3c);
      *(undefined1 *)((long)param_1 + 0x3d) = *(undefined1 *)((long)param_2 + 0x3d);
      *(undefined1 *)((long)param_1 + 0x3e) = *(undefined1 *)((long)param_2 + 0x3e);
      *(undefined1 *)((long)param_1 + 0x3f) = *(undefined1 *)((long)param_2 + 0x3f);
      _swift_bridgeObjectRetain();
    }
  }
  else if (param_2[6] == 0) {
    func_0x0001045f89d8(param_1 + 4);
    uVar4 = param_2[4];
    uVar3 = param_2[7];
    uVar2 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar4;
    param_1[7] = uVar3;
    param_1[6] = uVar2;
  }
  else {
    uVar2 = param_2[4];
    uVar4 = param_2[5];
    func_0x00010006c00c(uVar2,uVar4);
    uVar3 = param_1[4];
    uVar1 = param_1[5];
    param_1[4] = uVar2;
    param_1[5] = uVar4;
    func_0x00010006c090(uVar3,uVar1);
    uVar2 = param_1[6];
    param_1[6] = param_2[6];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar2);
    *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
    *(undefined1 *)((long)param_1 + 0x39) = *(undefined1 *)((long)param_2 + 0x39);
    *(undefined1 *)((long)param_1 + 0x3a) = *(undefined1 *)((long)param_2 + 0x3a);
    *(undefined1 *)((long)param_1 + 0x3b) = *(undefined1 *)((long)param_2 + 0x3b);
    *(undefined1 *)((long)param_1 + 0x3c) = *(undefined1 *)((long)param_2 + 0x3c);
    *(undefined1 *)((long)param_1 + 0x3d) = *(undefined1 *)((long)param_2 + 0x3d);
    *(undefined1 *)((long)param_1 + 0x3e) = *(undefined1 *)((long)param_2 + 0x3e);
    *(undefined1 *)((long)param_1 + 0x3f) = *(undefined1 *)((long)param_2 + 0x3f);
  }
  return param_1;
}



/* Entry: 104600ed4; end: 104600f7b;  */

int FUN_104600ed4(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 104600f7c; end: 10460102f;  */

undefined8 * FUN_104600f7c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  uVar2 = param_2[2];
  _swift_bridgeObjectRetain();
  func_0x00010006c00c(uVar3,uVar2);
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  *(undefined2 *)((long)param_1 + 0x21) = *(undefined2 *)((long)param_2 + 0x21);
  lVar1 = param_2[7];
  _swift_bridgeObjectRetain();
  if (lVar1 == 0) {
    uVar3 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar3;
    uVar3 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar3;
  }
  else {
    uVar3 = param_2[5];
    uVar2 = param_2[6];
    func_0x00010006c00c(uVar3,uVar2);
    param_1[5] = uVar3;
    param_1[6] = uVar2;
    param_1[7] = lVar1;
    param_1[8] = param_2[8];
    _swift_bridgeObjectRetain(lVar1);
  }
  return param_1;
}



/* Entry: 104601030; end: 104601297;  */

undefined8 * FUN_104601030(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_2[1];
  uVar4 = param_2[2];
  func_0x00010006c00c(uVar2,uVar4);
  uVar3 = param_1[1];
  uVar1 = param_1[2];
  param_1[1] = uVar2;
  param_1[2] = uVar4;
  func_0x00010006c090(uVar3,uVar1);
  uVar2 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  *(undefined1 *)((long)param_1 + 0x21) = *(undefined1 *)((long)param_2 + 0x21);
  *(undefined1 *)((long)param_1 + 0x22) = *(undefined1 *)((long)param_2 + 0x22);
  if (param_1[7] == 0) {
    if (param_2[7] == 0) {
      uVar3 = param_2[6];
      uVar2 = param_2[5];
      uVar4 = param_2[7];
      param_1[8] = param_2[8];
      param_1[7] = uVar4;
      param_1[6] = uVar3;
      param_1[5] = uVar2;
    }
    else {
      uVar2 = param_2[5];
      uVar3 = param_2[6];
      func_0x00010006c00c(uVar2,uVar3);
      param_1[5] = uVar2;
      param_1[6] = uVar3;
      param_1[7] = param_2[7];
      *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
      *(undefined1 *)((long)param_1 + 0x41) = *(undefined1 *)((long)param_2 + 0x41);
      *(undefined1 *)((long)param_1 + 0x42) = *(undefined1 *)((long)param_2 + 0x42);
      *(undefined1 *)((long)param_1 + 0x43) = *(undefined1 *)((long)param_2 + 0x43);
      *(undefined1 *)((long)param_1 + 0x44) = *(undefined1 *)((long)param_2 + 0x44);
      *(undefined1 *)((long)param_1 + 0x45) = *(undefined1 *)((long)param_2 + 0x45);
      *(undefined1 *)((long)param_1 + 0x46) = *(undefined1 *)((long)param_2 + 0x46);
      *(undefined1 *)((long)param_1 + 0x47) = *(undefined1 *)((long)param_2 + 0x47);
      _swift_bridgeObjectRetain();
    }
  }
  else if (param_2[7] == 0) {
    func_0x0001045f89d8(param_1 + 5);
    uVar3 = param_2[8];
    uVar2 = param_2[7];
    uVar4 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar4;
    param_1[8] = uVar3;
    param_1[7] = uVar2;
  }
  else {
    uVar2 = param_2[5];
    uVar4 = param_2[6];
    func_0x00010006c00c(uVar2,uVar4);
    uVar3 = param_1[5];
    uVar1 = param_1[6];
    param_1[5] = uVar2;
    param_1[6] = uVar4;
    func_0x00010006c090(uVar3,uVar1);
    uVar2 = param_1[7];
    param_1[7] = param_2[7];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar2);
    *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
    *(undefined1 *)((long)param_1 + 0x41) = *(undefined1 *)((long)param_2 + 0x41);
    *(undefined1 *)((long)param_1 + 0x42) = *(undefined1 *)((long)param_2 + 0x42);
    *(undefined1 *)((long)param_1 + 0x43) = *(undefined1 *)((long)param_2 + 0x43);
    *(undefined1 *)((long)param_1 + 0x44) = *(undefined1 *)((long)param_2 + 0x44);
    *(undefined1 *)((long)param_1 + 0x45) = *(undefined1 *)((long)param_2 + 0x45);
    *(undefined1 *)((long)param_1 + 0x46) = *(undefined1 *)((long)param_2 + 0x46);
    *(undefined1 *)((long)param_1 + 0x47) = *(undefined1 *)((long)param_2 + 0x47);
  }
  return param_1;
}



/* Entry: 104601298; end: 1046012a7;  */

undefined1  [16] FUN_104601298(void)

{
  return ZEXT816(0x11078ddf8);
}



/* Entry: 1046012a8; end: 104601317;  */

void FUN_1046012a8(undefined8 *param_1)

{
  long lVar1;
  
  _swift_bridgeObjectRelease(*param_1);
  func_0x00010006c090(param_1[1],param_1[2]);
  _swift_bridgeObjectRelease(param_1[3]);
  lVar1 = param_1[7];
  if (lVar1 != 0) {
    func_0x00010006c090(param_1[5],param_1[6]);
    _swift_bridgeObjectRelease(lVar1);
  }
  lVar1 = param_1[0xe];
  if (lVar1 == 1) {
    return;
  }
  func_0x00010006c090(param_1[10],param_1[0xb]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar1);
  return;
}



/* Entry: 104601318; end: 10460141f;  */

undefined8 * FUN_104601318(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  uVar2 = param_2[2];
  _swift_bridgeObjectRetain();
  func_0x00010006c00c(uVar3,uVar2);
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  lVar1 = param_2[7];
  _swift_bridgeObjectRetain();
  if (lVar1 == 0) {
    uVar3 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar3;
    uVar3 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar3;
  }
  else {
    uVar3 = param_2[5];
    uVar2 = param_2[6];
    func_0x00010006c00c(uVar3,uVar2);
    param_1[5] = uVar3;
    param_1[6] = uVar2;
    param_1[7] = lVar1;
    param_1[8] = param_2[8];
    _swift_bridgeObjectRetain(lVar1);
  }
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  lVar1 = param_2[0xe];
  if (lVar1 == 1) {
    uVar3 = param_2[10];
    uVar4 = param_2[0xd];
    uVar2 = param_2[0xc];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar3;
    param_1[0xd] = uVar4;
    param_1[0xc] = uVar2;
    uVar3 = *(undefined8 *)((long)param_2 + 0x69);
    *(undefined8 *)((long)param_1 + 0x71) = *(undefined8 *)((long)param_2 + 0x71);
    *(undefined8 *)((long)param_1 + 0x69) = uVar3;
  }
  else {
    uVar3 = param_2[10];
    uVar2 = param_2[0xb];
    func_0x00010006c00c(uVar3,uVar2);
    param_1[10] = uVar3;
    param_1[0xb] = uVar2;
    *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_2 + 0xc);
    param_1[0xd] = param_2[0xd];
    param_1[0xe] = lVar1;
    *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
    _swift_bridgeObjectRetain(lVar1);
  }
  return param_1;
}



/* Entry: 104601420; end: 1046016ab;  */

undefined8 * FUN_104601420(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_2[1];
  uVar3 = param_2[2];
  func_0x00010006c00c(uVar1,uVar3);
  uVar2 = param_1[1];
  uVar4 = param_1[2];
  param_1[1] = uVar1;
  param_1[2] = uVar3;
  func_0x00010006c090(uVar2,uVar4);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  if (param_1[7] == 0) {
    if (param_2[7] == 0) {
      uVar2 = param_2[6];
      uVar1 = param_2[5];
      uVar3 = param_2[7];
      param_1[8] = param_2[8];
      param_1[7] = uVar3;
      param_1[6] = uVar2;
      param_1[5] = uVar1;
    }
    else {
      uVar1 = param_2[5];
      uVar2 = param_2[6];
      func_0x00010006c00c(uVar1,uVar2);
      param_1[5] = uVar1;
      param_1[6] = uVar2;
      param_1[7] = param_2[7];
      *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
      *(undefined1 *)((long)param_1 + 0x41) = *(undefined1 *)((long)param_2 + 0x41);
      *(undefined1 *)((long)param_1 + 0x42) = *(undefined1 *)((long)param_2 + 0x42);
      *(undefined1 *)((long)param_1 + 0x43) = *(undefined1 *)((long)param_2 + 0x43);
      *(undefined1 *)((long)param_1 + 0x44) = *(undefined1 *)((long)param_2 + 0x44);
      *(undefined1 *)((long)param_1 + 0x45) = *(undefined1 *)((long)param_2 + 0x45);
      *(undefined1 *)((long)param_1 + 0x46) = *(undefined1 *)((long)param_2 + 0x46);
      *(undefined1 *)((long)param_1 + 0x47) = *(undefined1 *)((long)param_2 + 0x47);
      _swift_bridgeObjectRetain();
    }
  }
  else if (param_2[7] == 0) {
    func_0x0001045f89d8(param_1 + 5);
    uVar2 = param_2[8];
    uVar1 = param_2[7];
    uVar3 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar3;
    param_1[8] = uVar2;
    param_1[7] = uVar1;
  }
  else {
    uVar1 = param_2[5];
    uVar3 = param_2[6];
    func_0x00010006c00c(uVar1,uVar3);
    uVar2 = param_1[5];
    uVar4 = param_1[6];
    param_1[5] = uVar1;
    param_1[6] = uVar3;
    func_0x00010006c090(uVar2,uVar4);
    uVar1 = param_1[7];
    param_1[7] = param_2[7];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar1);
    *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
    *(undefined1 *)((long)param_1 + 0x41) = *(undefined1 *)((long)param_2 + 0x41);
    *(undefined1 *)((long)param_1 + 0x42) = *(undefined1 *)((long)param_2 + 0x42);
    *(undefined1 *)((long)param_1 + 0x43) = *(undefined1 *)((long)param_2 + 0x43);
    *(undefined1 *)((long)param_1 + 0x44) = *(undefined1 *)((long)param_2 + 0x44);
    *(undefined1 *)((long)param_1 + 0x45) = *(undefined1 *)((long)param_2 + 0x45);
    *(undefined1 *)((long)param_1 + 0x46) = *(undefined1 *)((long)param_2 + 0x46);
    *(undefined1 *)((long)param_1 + 0x47) = *(undefined1 *)((long)param_2 + 0x47);
  }
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  if (param_1[0xe] == 1) {
    if (param_2[0xe] == 1) {
      uVar2 = param_2[0xb];
      uVar1 = param_2[10];
      uVar4 = param_2[0xd];
      uVar3 = param_2[0xc];
      uVar5 = *(undefined8 *)((long)param_2 + 0x69);
      *(undefined8 *)((long)param_1 + 0x71) = *(undefined8 *)((long)param_2 + 0x71);
      *(undefined8 *)((long)param_1 + 0x69) = uVar5;
      param_1[0xb] = uVar2;
      param_1[10] = uVar1;
      param_1[0xd] = uVar4;
      param_1[0xc] = uVar3;
    }
    else {
      uVar1 = param_2[10];
      uVar2 = param_2[0xb];
      func_0x00010006c00c(uVar1,uVar2);
      param_1[10] = uVar1;
      param_1[0xb] = uVar2;
      *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
      *(undefined1 *)((long)param_1 + 0x61) = *(undefined1 *)((long)param_2 + 0x61);
      param_1[0xd] = param_2[0xd];
      param_1[0xe] = param_2[0xe];
      *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
      _swift_bridgeObjectRetain();
    }
  }
  else if (param_2[0xe] == 1) {
    FUN_1046016ac(param_1 + 10);
    uVar2 = *(undefined8 *)((long)param_2 + 0x71);
    uVar1 = *(undefined8 *)((long)param_2 + 0x69);
    uVar5 = param_2[10];
    uVar4 = param_2[0xd];
    uVar3 = param_2[0xc];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar5;
    param_1[0xd] = uVar4;
    param_1[0xc] = uVar3;
    *(undefined8 *)((long)param_1 + 0x71) = uVar2;
    *(undefined8 *)((long)param_1 + 0x69) = uVar1;
  }
  else {
    uVar1 = param_2[10];
    uVar3 = param_2[0xb];
    func_0x00010006c00c(uVar1,uVar3);
    uVar2 = param_1[10];
    uVar4 = param_1[0xb];
    param_1[10] = uVar1;
    param_1[0xb] = uVar3;
    func_0x00010006c090(uVar2,uVar4);
    *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
    *(undefined1 *)((long)param_1 + 0x61) = *(undefined1 *)((long)param_2 + 0x61);
    param_1[0xd] = param_2[0xd];
    uVar1 = param_1[0xe];
    param_1[0xe] = param_2[0xe];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar1);
    *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
  }
  return param_1;
}



/* Entry: 1046016ac; end: 1046016df;  */

undefined8 * FUN_1046016ac(undefined8 *param_1)

{
  func_0x00010006c090(*param_1,param_1[1]);
  _swift_bridgeObjectRelease(param_1[4]);
  return param_1;
}



/* Entry: 1046016e0; end: 1046017ff;  */

undefined8 * FUN_1046016e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[1];
  uVar4 = param_1[2];
  uVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar3;
  func_0x00010006c090(uVar1,uVar4);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  if (param_1[7] != 0) {
    lVar2 = param_2[7];
    if (lVar2 != 0) {
      uVar1 = param_1[5];
      uVar4 = param_1[6];
      uVar3 = param_2[5];
      param_1[6] = param_2[6];
      param_1[5] = uVar3;
      func_0x00010006c090(uVar1,uVar4);
      uVar1 = param_1[7];
      param_1[7] = lVar2;
      _swift_bridgeObjectRelease(uVar1);
      param_1[8] = param_2[8];
      goto LAB_104601780;
    }
    func_0x0001045f89d8(param_1 + 5);
  }
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  uVar1 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar1;
LAB_104601780:
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  if (param_1[0xe] != 1) {
    lVar2 = param_2[0xe];
    if (lVar2 != 1) {
      uVar1 = param_1[10];
      uVar4 = param_1[0xb];
      uVar3 = param_2[10];
      param_1[0xb] = param_2[0xb];
      param_1[10] = uVar3;
      func_0x00010006c090(uVar1,uVar4);
      *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_2 + 0xc);
      uVar1 = param_1[0xe];
      param_1[0xd] = param_2[0xd];
      param_1[0xe] = lVar2;
      _swift_bridgeObjectRelease(uVar1);
      *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
      return param_1;
    }
    FUN_1046016ac(param_1 + 10);
  }
  uVar1 = param_2[10];
  uVar3 = param_2[0xd];
  uVar4 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar1;
  param_1[0xd] = uVar3;
  param_1[0xc] = uVar4;
  uVar1 = *(undefined8 *)((long)param_2 + 0x69);
  *(undefined8 *)((long)param_1 + 0x71) = *(undefined8 *)((long)param_2 + 0x71);
  *(undefined8 *)((long)param_1 + 0x69) = uVar1;
  return param_1;
}



/* Entry: 104601800; end: 1046018b7;  */

int FUN_104601800(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x79) != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1046018b8; end: 10460190b;  */

void FUN_1046018b8(undefined8 *param_1)

{
  long lVar1;
  
  _swift_bridgeObjectRelease(*param_1);
  func_0x00010006c090(param_1[1],param_1[2]);
  _swift_bridgeObjectRelease(param_1[3]);
  lVar1 = param_1[6];
  if (lVar1 != 0) {
    func_0x00010006c090(param_1[4],param_1[5]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10460190c; end: 1046019af;  */

undefined8 * FUN_10460190c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  uVar2 = param_2[2];
  _swift_bridgeObjectRetain();
  func_0x00010006c00c(uVar3,uVar2);
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = param_2[3];
  lVar1 = param_2[6];
  _swift_bridgeObjectRetain();
  if (lVar1 == 0) {
    uVar3 = param_2[4];
    uVar4 = param_2[7];
    uVar2 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar3;
    param_1[7] = uVar4;
    param_1[6] = uVar2;
  }
  else {
    uVar3 = param_2[4];
    uVar2 = param_2[5];
    func_0x00010006c00c(uVar3,uVar2);
    param_1[4] = uVar3;
    param_1[5] = uVar2;
    param_1[6] = lVar1;
    param_1[7] = param_2[7];
    _swift_bridgeObjectRetain(lVar1);
  }
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  return param_1;
}



/* Entry: 1046019b0; end: 104601be7;  */

undefined8 * FUN_1046019b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_2[1];
  uVar4 = param_2[2];
  func_0x00010006c00c(uVar2,uVar4);
  uVar3 = param_1[1];
  uVar1 = param_1[2];
  param_1[1] = uVar2;
  param_1[2] = uVar4;
  func_0x00010006c090(uVar3,uVar1);
  uVar2 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  if (param_1[6] == 0) {
    if (param_2[6] == 0) {
      uVar2 = param_2[4];
      uVar4 = param_2[7];
      uVar3 = param_2[6];
      param_1[5] = param_2[5];
      param_1[4] = uVar2;
      param_1[7] = uVar4;
      param_1[6] = uVar3;
    }
    else {
      uVar2 = param_2[4];
      uVar3 = param_2[5];
      func_0x00010006c00c(uVar2,uVar3);
      param_1[4] = uVar2;
      param_1[5] = uVar3;
      param_1[6] = param_2[6];
      *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
      *(undefined1 *)((long)param_1 + 0x39) = *(undefined1 *)((long)param_2 + 0x39);
      *(undefined1 *)((long)param_1 + 0x3a) = *(undefined1 *)((long)param_2 + 0x3a);
      *(undefined1 *)((long)param_1 + 0x3b) = *(undefined1 *)((long)param_2 + 0x3b);
      *(undefined1 *)((long)param_1 + 0x3c) = *(undefined1 *)((long)param_2 + 0x3c);
      *(undefined1 *)((long)param_1 + 0x3d) = *(undefined1 *)((long)param_2 + 0x3d);
      *(undefined1 *)((long)param_1 + 0x3e) = *(undefined1 *)((long)param_2 + 0x3e);
      *(undefined1 *)((long)param_1 + 0x3f) = *(undefined1 *)((long)param_2 + 0x3f);
      _swift_bridgeObjectRetain();
    }
  }
  else if (param_2[6] == 0) {
    func_0x0001045f89d8(param_1 + 4);
    uVar4 = param_2[4];
    uVar3 = param_2[7];
    uVar2 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar4;
    param_1[7] = uVar3;
    param_1[6] = uVar2;
  }
  else {
    uVar2 = param_2[4];
    uVar4 = param_2[5];
    func_0x00010006c00c(uVar2,uVar4);
    uVar3 = param_1[4];
    uVar1 = param_1[5];
    param_1[4] = uVar2;
    param_1[5] = uVar4;
    func_0x00010006c090(uVar3,uVar1);
    uVar2 = param_1[6];
    param_1[6] = param_2[6];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar2);
    *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
    *(undefined1 *)((long)param_1 + 0x39) = *(undefined1 *)((long)param_2 + 0x39);
    *(undefined1 *)((long)param_1 + 0x3a) = *(undefined1 *)((long)param_2 + 0x3a);
    *(undefined1 *)((long)param_1 + 0x3b) = *(undefined1 *)((long)param_2 + 0x3b);
    *(undefined1 *)((long)param_1 + 0x3c) = *(undefined1 *)((long)param_2 + 0x3c);
    *(undefined1 *)((long)param_1 + 0x3d) = *(undefined1 *)((long)param_2 + 0x3d);
    *(undefined1 *)((long)param_1 + 0x3e) = *(undefined1 *)((long)param_2 + 0x3e);
    *(undefined1 *)((long)param_1 + 0x3f) = *(undefined1 *)((long)param_2 + 0x3f);
  }
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  return param_1;
}



/* Entry: 104601be8; end: 104601c93;  */

int FUN_104601be8(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x41) != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 104601c94; end: 104601ce7;  */

void FUN_104601c94(undefined8 *param_1)

{
  long lVar1;
  
  _swift_bridgeObjectRelease(*param_1);
  func_0x00010006c090(param_1[1],param_1[2]);
  _swift_bridgeObjectRelease(param_1[3]);
  lVar1 = param_1[7];
  if (lVar1 != 0) {
    func_0x00010006c090(param_1[5],param_1[6]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar1);
    return;
  }
  return;
}



/* Entry: 104601ce8; end: 104601d93;  */

undefined8 * FUN_104601ce8(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  uVar2 = param_2[2];
  _swift_bridgeObjectRetain();
  func_0x00010006c00c(uVar3,uVar2);
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = param_2[3];
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 4);
  lVar1 = param_2[7];
  _swift_bridgeObjectRetain();
  if (lVar1 == 0) {
    uVar3 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar3;
    uVar3 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar3;
  }
  else {
    uVar3 = param_2[5];
    uVar2 = param_2[6];
    func_0x00010006c00c(uVar3,uVar2);
    param_1[5] = uVar3;
    param_1[6] = uVar2;
    param_1[7] = lVar1;
    param_1[8] = param_2[8];
    _swift_bridgeObjectRetain(lVar1);
  }
  return param_1;
}



/* Entry: 104601d94; end: 104601feb;  */

undefined8 * FUN_104601d94(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_2[1];
  uVar4 = param_2[2];
  func_0x00010006c00c(uVar2,uVar4);
  uVar3 = param_1[1];
  uVar1 = param_1[2];
  param_1[1] = uVar2;
  param_1[2] = uVar4;
  func_0x00010006c090(uVar3,uVar1);
  uVar2 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  *(undefined1 *)((long)param_1 + 0x21) = *(undefined1 *)((long)param_2 + 0x21);
  if (param_1[7] == 0) {
    if (param_2[7] == 0) {
      uVar3 = param_2[6];
      uVar2 = param_2[5];
      uVar4 = param_2[7];
      param_1[8] = param_2[8];
      param_1[7] = uVar4;
      param_1[6] = uVar3;
      param_1[5] = uVar2;
    }
    else {
      uVar2 = param_2[5];
      uVar3 = param_2[6];
      func_0x00010006c00c(uVar2,uVar3);
      param_1[5] = uVar2;
      param_1[6] = uVar3;
      param_1[7] = param_2[7];
      *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
      *(undefined1 *)((long)param_1 + 0x41) = *(undefined1 *)((long)param_2 + 0x41);
      *(undefined1 *)((long)param_1 + 0x42) = *(undefined1 *)((long)param_2 + 0x42);
      *(undefined1 *)((long)param_1 + 0x43) = *(undefined1 *)((long)param_2 + 0x43);
      *(undefined1 *)((long)param_1 + 0x44) = *(undefined1 *)((long)param_2 + 0x44);
      *(undefined1 *)((long)param_1 + 0x45) = *(undefined1 *)((long)param_2 + 0x45);
      *(undefined1 *)((long)param_1 + 0x46) = *(undefined1 *)((long)param_2 + 0x46);
      *(undefined1 *)((long)param_1 + 0x47) = *(undefined1 *)((long)param_2 + 0x47);
      _swift_bridgeObjectRetain();
    }
  }
  else if (param_2[7] == 0) {
    func_0x0001045f89d8(param_1 + 5);
    uVar3 = param_2[8];
    uVar2 = param_2[7];
    uVar4 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar4;
    param_1[8] = uVar3;
    param_1[7] = uVar2;
  }
  else {
    uVar2 = param_2[5];
    uVar4 = param_2[6];
    func_0x00010006c00c(uVar2,uVar4);
    uVar3 = param_1[5];
    uVar1 = param_1[6];
    param_1[5] = uVar2;
    param_1[6] = uVar4;
    func_0x00010006c090(uVar3,uVar1);
    uVar2 = param_1[7];
    param_1[7] = param_2[7];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar2);
    *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
    *(undefined1 *)((long)param_1 + 0x41) = *(undefined1 *)((long)param_2 + 0x41);
    *(undefined1 *)((long)param_1 + 0x42) = *(undefined1 *)((long)param_2 + 0x42);
    *(undefined1 *)((long)param_1 + 0x43) = *(undefined1 *)((long)param_2 + 0x43);
    *(undefined1 *)((long)param_1 + 0x44) = *(undefined1 *)((long)param_2 + 0x44);
    *(undefined1 *)((long)param_1 + 0x45) = *(undefined1 *)((long)param_2 + 0x45);
    *(undefined1 *)((long)param_1 + 0x46) = *(undefined1 *)((long)param_2 + 0x46);
    *(undefined1 *)((long)param_1 + 0x47) = *(undefined1 *)((long)param_2 + 0x47);
  }
  return param_1;
}



/* Entry: 104601fec; end: 10460200f;  */

undefined1  [16] FUN_104601fec(void)

{
  return ZEXT816(0x11078dfb8);
}



/* Entry: 104602010; end: 10460205f;  */

void FUN_104602010(undefined8 *param_1)

{
  _swift_bridgeObjectRelease(*param_1);
  func_0x00010006c090(param_1[1],param_1[2]);
  _swift_bridgeObjectRelease(param_1[4]);
  if ((ulong)param_1[0xc] >> 0x3c < 0xf) {
    func_0x00010006c090(param_1[0xb]);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1[0xe]);
  return;
}



/* Entry: 104602060; end: 104602267;  */

undefined8 * FUN_104602060(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  uVar2 = param_2[2];
  _swift_bridgeObjectRetain();
  func_0x00010006c00c(uVar3,uVar2);
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  uVar3 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar3;
  param_1[5] = param_2[5];
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  param_1[7] = param_2[7];
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  param_1[9] = param_2[9];
  uVar1 = param_2[0xc];
  _swift_bridgeObjectRetain();
  if (uVar1 >> 0x3c < 0xf) {
    uVar3 = param_2[0xb];
    func_0x00010006c00c(uVar3,uVar1);
    param_1[0xb] = uVar3;
    param_1[0xc] = uVar1;
  }
  else {
    uVar3 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar3;
  }
  uVar3 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = uVar3;
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 104602268; end: 10460233f;  */

undefined8 * FUN_104602268(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar4 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar4;
  func_0x00010006c090(uVar1,uVar2);
  uVar1 = param_2[4];
  uVar2 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  param_1[5] = param_2[5];
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  param_1[7] = param_2[7];
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  param_1[9] = param_2[9];
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  if ((ulong)param_1[0xc] >> 0x3c < 0xf) {
    uVar3 = param_2[0xc];
    if (uVar3 >> 0x3c < 0xf) {
      uVar1 = param_1[0xb];
      param_1[0xb] = param_2[0xb];
      param_1[0xc] = uVar3;
      func_0x00010006c090(uVar1);
      goto LAB_104602320;
    }
    func_0x0001006e5814(param_1 + 0xb);
  }
  uVar1 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar1;
LAB_104602320:
  uVar1 = param_2[0xe];
  uVar2 = param_1[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Entry: 104602340; end: 1046023f3;  */

int FUN_104602340(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xf] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1046023f4; end: 10460241f;  */

void FUN_1046023f4(undefined8 *param_1)

{
  func_0x00010006c090(*param_1,param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1[3]);
  return;
}



/* Entry: 104602420; end: 1046024e3;  */

undefined8 * FUN_104602420(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x00010006c00c(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 1046024e4; end: 104602533;  */

undefined8 * FUN_1046024e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  return param_1;
}



/* Entry: 104602534; end: 104602603;  */

int FUN_104602534(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && (*(char *)((long)param_1 + 0x21) != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 104602604; end: 1046026f7;  */

undefined8 * FUN_104602604(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x00010006c00c(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 1046026f8; end: 104602747;  */

undefined8 * FUN_1046026f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRelease(uVar1);
  param_1[3] = param_2[3];
  return param_1;
}



/* Entry: 104602748; end: 1046029ab;  */

int FUN_104602748(int *param_1,int param_2)

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



/* Entry: 1046029ac; end: 1046029ef;  */

undefined8 * FUN_1046029ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  func_0x00010006c00c(uVar1,uVar3);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  func_0x00010006c090(uVar2,uVar4);
  return param_1;
}



/* Entry: 1046029f0; end: 104602a27;  */

undefined8 * FUN_1046029f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 104602a28; end: 104602c2b;  */

int FUN_104602a28(int *param_1,uint param_2)

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



/* Entry: 104602c2c; end: 104602cef;  */

undefined8 * FUN_104602c2c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  uVar2 = param_2[2];
  _swift_bridgeObjectRetain();
  func_0x00010006c00c(uVar1,uVar2);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  *(undefined2 *)(param_1 + 3) = *(undefined2 *)(param_2 + 3);
  return param_1;
}



/* Entry: 104602cf0; end: 104602d3b;  */

undefined8 * FUN_104602cf0(undefined8 *param_1,undefined8 *param_2)

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
  func_0x00010006c090(uVar2,uVar1);
  *(undefined2 *)(param_1 + 3) = *(undefined2 *)(param_2 + 3);
  return param_1;
}



/* Entry: 104602d3c; end: 104602dd7;  */

int FUN_104602d3c(ulong *param_1,int param_2)

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



/* Entry: 104602dd8; end: 104602e13;  */

void FUN_104602dd8(undefined8 *param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE)

{
  func_0x00010006c090(*param_1,param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x000104602e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1[2]);
  return;
}



/* Entry: 104602e14; end: 104602ebf;  */

undefined8 * FUN_104602e14(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x00010006c00c(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = param_2[2];
  _swift_retain();
  return param_1;
}



/* Entry: 104602ec0; end: 104602f07;  */

undefined8 * FUN_104602ec0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_release(uVar1);
  return param_1;
}



/* Entry: 104602f08; end: 104602f9f;  */

int FUN_104602f08(int *param_1,int param_2)

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



/* Entry: 104602fa0; end: 104602fcf;  */

void FUN_104602fa0(undefined8 *param_1)

{
  _swift_bridgeObjectRelease(*param_1);
  func_0x00010006c090(param_1[1],param_1[2]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1[3]);
  return;
}



/* Entry: 104602fd0; end: 10460309f;  */

undefined8 * FUN_104602fd0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  uVar2 = param_2[2];
  _swift_bridgeObjectRetain();
  func_0x00010006c00c(uVar1,uVar2);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 1046030a0; end: 1046030f3;  */

undefined8 * FUN_1046030a0(undefined8 *param_1,undefined8 *param_2)

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
  func_0x00010006c090(uVar2,uVar1);
  uVar2 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Entry: 1046030f4; end: 10460318b;  */

int FUN_1046030f4(ulong *param_1,int param_2)

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



/* Entry: 10460318c; end: 1046031d3;  */

void FUN_10460318c(undefined8 *param_1)

{
  _swift_bridgeObjectRelease(*param_1);
  _swift_bridgeObjectRelease(param_1[1]);
  _swift_bridgeObjectRelease(param_1[2]);
  func_0x00010006c090(param_1[3],param_1[4]);
  _swift_bridgeObjectRelease(param_1[6]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1[8]);
  return;
}



/* Entry: 1046031d4; end: 10460325b;  */

undefined8 * FUN_1046031d4(undefined8 *param_1,undefined8 *param_2)

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
  func_0x00010006c00c(uVar3,uVar4);
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



/* Entry: 10460325c; end: 10460332b;  */

undefined8 * FUN_10460325c(undefined8 *param_1,undefined8 *param_2)

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
  func_0x00010006c00c(uVar4,uVar2);
  uVar1 = param_1[3];
  uVar3 = param_1[4];
  param_1[3] = uVar4;
  param_1[4] = uVar2;
  func_0x00010006c090(uVar1,uVar3);
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



/* Entry: 10460332c; end: 1046033a7;  */

undefined8 * FUN_10460332c(undefined8 *param_1,undefined8 *param_2)

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
  func_0x00010006c090(uVar1,uVar2);
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



/* Entry: 1046033a8; end: 10460344f;  */

int FUN_1046033a8(ulong *param_1,int param_2)

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



/* Entry: 104603450; end: 104603477;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_104603450(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  _swift_bridgeObjectRelease(*param_1);
  uVar1 = param_1[1];
  uVar2 = (uint)((ulong)param_1[2] >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = param_1[2] & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 104603478; end: 10460351f;  */

undefined8 * FUN_104603478(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  uVar2 = param_2[2];
  _swift_bridgeObjectRetain();
  func_0x00010006c00c(uVar1,uVar2);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return param_1;
}



/* Entry: 104603520; end: 104603563;  */

undefined8 * FUN_104603520(undefined8 *param_1,undefined8 *param_2)

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
  func_0x00010006c090(uVar2,uVar1);
  return param_1;
}



/* Entry: 104603564; end: 1046035fb;  */

int FUN_104603564(ulong *param_1,int param_2)

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



/* Entry: 1046035fc; end: 10460362b;  */

void FUN_1046035fc(undefined8 *param_1)

{
  _swift_bridgeObjectRelease(*param_1);
  func_0x00010006c090(param_1[1],param_1[2]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1[4]);
  return;
}



/* Entry: 10460362c; end: 10460374b;  */

undefined8 * FUN_10460362c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  uVar2 = param_2[2];
  _swift_bridgeObjectRetain();
  func_0x00010006c00c(uVar1,uVar2);
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


