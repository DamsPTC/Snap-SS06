/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1072c89f8; end: 1072c8a2b;  */

void FUN_1072c89f8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001072ce6ac();
  if (param_2 != 0) {
    FUN_1072c6704(param_4);
  }
  func_0x0001072ce27c(0x18);
  return;
}



/* Entry: 1072c8a2c; end: 1072c8a73;  */

void FUN_1072c8a2c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  undefined1 auStack_50 [48];
  
  func_0x0001072ce9a4();
  lVar1 = extraout_x8;
  while (lVar1 != param_3) {
    func_0x0001072ce760();
    lVar1 = extraout_x8_00;
  }
  func_0x0001072cebf4();
  FUN_1072c8a74();
  FUN_1072c67b8(auStack_50);
  return;
}



/* Entry: 1072c8a74; end: 1072c8acb;  */

void FUN_1072c8a74(long param_1)

{
  long unaff_x19;
  
  func_0x0001072cf120();
  for (; param_1 != unaff_x19; param_1 = param_1 + 0x18) {
    func_0x0001072c6820();
  }
  return;
}



/* Entry: 1072c8acc; end: 1072c8ad3;  */

void FUN_1072c8acc(long param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x20;
  
  func_0x0001072ce940(param_1,*(undefined8 *)(param_1 + 8));
  while (func_0x0001072cf020(), !(bool)in_ZR) {
    *(long *)(unaff_x20 + 0x10) = extraout_x8 + -0x18;
    func_0x0001072c6820();
  }
  return;
}



/* Entry: 1072c8ad4; end: 1072c8b57;  */

void FUN_1072c8ad4(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x20;
  
  func_0x0001072ce940();
  while (func_0x0001072cf020(), !(bool)in_ZR) {
    *(long *)(unaff_x20 + 0x10) = extraout_x8 + -0x18;
    func_0x0001072c6820();
  }
  return;
}



/* Entry: 1072c8b58; end: 1072c8baf;  */

void FUN_1072c8b58(void)

{
  func_0x0001072ce2e4();
  FUN_1072c8bb0();
  func_0x0001072ce15c();
  FUN_1072c89f8();
  func_0x0001072cfa50();
  FUN_1072c8038();
  func_0x0001072ceac4();
  func_0x0001072ce9c4();
  FUN_1072c89d0();
  func_0x0001072ceb54();
  func_0x0001072c8aa0();
  return;
}



/* Entry: 1072c8bb0; end: 1072c8bcf;  */

long * FUN_1072c8bb0(long *param_1,long *param_2)

{
  ulong uVar1;
  undefined1 uVar2;
  long *plVar3;
  long unaff_x20;
  
  uVar2 = (long *)0xaaaaaaaaaaaaaa9 < param_2;
  if ((long *)0xaaaaaaaaaaaaaaa < param_2) {
    FUN_1072c66f8();
    func_0x0001072ce4e8();
    if ((bool)uVar2) {
      FUN_1072c8c28();
    }
    else {
      FUN_1072c8c00();
      param_1 = (long *)(unaff_x20 + 0x70);
    }
    func_0x0001072cf410();
    return param_1;
  }
  uVar1 = (param_1[2] - *param_1) / 0x18;
  plVar3 = (long *)(uVar1 * 2);
  if (plVar3 < param_2 || (long)plVar3 - (long)param_2 == 0) {
    plVar3 = param_2;
  }
  if (0x555555555555554 < uVar1) {
    plVar3 = (long *)0xaaaaaaaaaaaaaaa;
  }
  return plVar3;
}



/* Entry: 1072c8bd0; end: 1072c8bff;  */

void FUN_1072c8bd0(void)

{
  undefined1 in_CY;
  
  func_0x0001072ce4e8();
  if ((bool)in_CY) {
    FUN_1072c8c28();
  }
  else {
    FUN_1072c8c00();
  }
  func_0x0001072cf410();
  return;
}



/* Entry: 1072c8c00; end: 1072c8c27;  */

void FUN_1072c8c00(void)

{
  func_0x0001072ceb2c();
  FUN_1072c8c70();
  func_0x0001072cf378();
  return;
}



/* Entry: 1072c8c28; end: 1072c8c6f;  */

void FUN_1072c8c28(void)

{
  undefined8 in_stack_00000018;
  
  func_0x0001072d00ec();
  func_0x0001072ce030();
  func_0x0001072ce0b0();
  func_0x0001072ce640(in_stack_00000018);
  FUN_1072c8c70();
  func_0x0001072ce824();
  func_0x0001072ce684();
  func_0x0001072ce730();
  return;
}



/* Entry: 1072c8c70; end: 1072c8cbf;  */

undefined4 * FUN_1072c8c70(undefined4 *param_1)

{
  undefined1 in_ZR;
  undefined4 *unaff_x19;
  undefined8 uStack_38;
  
  func_0x0001072cebd4();
  func_0x0001072ce1e4();
  func_0x0001072cf918();
  FUN_1072c8cc0();
  func_0x0001072ce404();
  func_0x0001072ceb24();
  func_0x0001072ce0cc(uStack_38);
  if ((bool)in_ZR) {
    return unaff_x19;
  }
  ___stack_chk_fail();
  func_0x0001072ce724();
  func_0x0001072ce900();
  *param_1 = 1;
  FUN_1072c8ce8(param_1 + 2);
  return param_1;
}



/* Entry: 1072c8cc0; end: 1072c8ce7;  */

undefined4 * FUN_1072c8cc0(undefined4 *param_1)

{
  *param_1 = 1;
  FUN_1072c8ce8(param_1 + 2);
  return param_1;
}



/* Entry: 1072c8ce8; end: 1072c8cff;  */

void FUN_1072c8ce8(void)

{
  FUN_1072c6638();
  return;
}



/* Entry: 1072c8d00; end: 1072c8d0b;  */

void FUN_1072c8d00(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x0001072ce8d4(*param_1,param_2,*(undefined8 *)param_1[1],param_1[2]);
  lVar1 = param_2[1];
  for (lVar2 = *param_2; lVar2 != lVar1; lVar2 = lVar2 + 0x38) {
    FUN_1072c8d64(lVar2,&stack0xffffffffffffffa8);
  }
  return;
}



/* Entry: 1072c8d0c; end: 1072c8d63;  */

void FUN_1072c8d0c(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x0001072ce8d4();
  lVar1 = param_2[1];
  for (lVar2 = *param_2; lVar2 != lVar1; lVar2 = lVar2 + 0x38) {
    FUN_1072c8d64(lVar2,&stack0xffffffffffffffa8);
  }
  return;
}



/* Entry: 1072c8d64; end: 1072c8e93;  */

void FUN_1072c8d64(int *param_1,long *param_2)

{
  long lVar1;
  undefined1 uVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x21;
  undefined1 auStack_78 [24];
  double dStack_60;
  long in_stack_ffffffffffffffb8;
  long in_stack_ffffffffffffffc0;
  
  if (*param_1 == 7) {
    FUN_1072c70f8(*param_2 + 0x68,&stack0xffffffffffffffef,param_2[1],param_2[2]);
    return;
  }
  if (*param_1 == 6) {
    func_0x0001072ce8d4(*param_2,param_1 + 2,param_2[1],param_2[2]);
    FUN_1072c7350();
    func_0x0001072cea9c(unaff_x21 + 0x68,&stack0xffffffffffffffcc);
    func_0x0001072c7324();
    return;
  }
  if (*param_1 == 5) {
    lVar5 = *param_2;
    lVar1 = param_2[1];
    lVar4 = param_2[2];
    FUN_1072c75c4(&stack0xffffffffffffffb8);
    if (in_stack_ffffffffffffffb8 != in_stack_ffffffffffffffc0) {
      if (*(char *)(lVar5 + 0x28) == '\x01') {
        FUN_107268400(&stack0xffffffffffffffa8,lVar1);
        dStack_60 = *(double *)(param_1 + 10) / *(double *)(param_1 + 8);
        FUN_1072c7648(auStack_78,&stack0xffffffffffffffa8,&UNK_10f409200,&dStack_60);
        dStack_60 = *(double *)(param_1 + 0xc) / *(double *)(param_1 + 8);
        FUN_1072c76ac(auStack_78,&stack0xffffffffffffffa8,&UNK_10f409212,&dStack_60);
        FUN_1072c7710(lVar5 + 0x68,&stack0xffffffffffffffb8,&stack0xffffffffffffffa8,lVar4);
        func_0x000104c335c0(&stack0xffffffffffffffa8);
      }
      else {
        func_0x0001072c773c(lVar5 + 0x68,&stack0xffffffffffffffb8,lVar1,lVar4);
      }
    }
    func_0x000104c336c8(&stack0xffffffffffffffb8);
    return;
  }
  uVar2 = *param_1 == 4;
  if ((bool)uVar2) {
    func_0x0001072ce8d4(*param_2,param_1 + 2,param_2[1],param_2[2]);
    FUN_1072c7bc8(&stack0xffffffffffffffb8);
    func_0x0001072d01bc();
    if (!(bool)uVar2) {
      func_0x0001072cea9c(unaff_x21 + 0x68,&stack0xffffffffffffffb8);
      FUN_1072c7c50();
    }
    func_0x0001072c6820(&stack0xffffffffffffffb8);
  }
  else if (*param_1 == 3) {
    func_0x0001072ce8d4(*param_2,param_1 + 2,param_2[1],param_2[2]);
    FUN_1072c80f0(&stack0xffffffffffffffb8);
    lVar5 = in_stack_ffffffffffffffc0 - in_stack_ffffffffffffffb8 >> 2;
    if (lVar5 != 0) {
      if (lVar5 == 1) {
        func_0x0001072cea9c(unaff_x21 + 0x68);
        FUN_1072c8150();
      }
      else {
        func_0x0001072cea9c(unaff_x21 + 0x68,&stack0xffffffffffffffb8);
        func_0x0001072c817c();
      }
    }
    func_0x0001072cf42c();
  }
  else {
    bVar3 = *param_1 == 2;
    if (bVar3) {
      func_0x0001072ce8d4(*param_2,param_1 + 2,param_2[1],param_2[2]);
      FUN_1072c844c(&stack0xffffffffffffffb8);
      func_0x0001072d0238();
      if (extraout_x8 != 0) {
        if (extraout_x8 == 1) {
          func_0x0001072cea9c(unaff_x21 + 0x68);
          func_0x0001072c773c();
        }
        else {
          func_0x0001072cea9c(unaff_x21 + 0x68,&stack0xffffffffffffffb8);
          FUN_1072c84d8();
        }
      }
      FUN_1072c6be8(&stack0xffffffffffffffb8);
    }
    else {
      func_0x0001072cf5e8();
      if (!bVar3) {
        func_0x0001072ce8d4(*(undefined8 *)param_1);
        lVar1 = param_2[1];
        for (lVar5 = *param_2; lVar5 != lVar1; lVar5 = lVar5 + 0x38) {
          FUN_1072c8d64(lVar5,&stack0xffffffffffffffa8);
        }
        return;
      }
      func_0x0001072ce8d4(*(undefined8 *)param_1);
      FUN_1072c88cc(&stack0xffffffffffffffb8);
      func_0x0001072d0238();
      if (extraout_x8_00 != 0) {
        if (extraout_x8_00 == 1) {
          func_0x0001072cea9c(unaff_x21 + 0x68);
          FUN_1072c7c50();
        }
        else {
          func_0x0001072cea9c(unaff_x21 + 0x68,&stack0xffffffffffffffb8);
          FUN_1072c8954();
        }
      }
      FUN_1072c6c1c(&stack0xffffffffffffffb8);
    }
  }
  return;
}



/* Entry: 1072c8e94; end: 1072c8ebf;  */

long FUN_1072c8e94(long param_1)

{
  FUN_1072c8f3c(param_1 + 0x68);
  func_0x0001072c3ca8(param_1 + 0x30);
  return param_1;
}



/* Entry: 1072c8ec0; end: 1072c8ed7;  */

void FUN_1072c8ec0(void)

{
  FUN_1072c8ed8();
  return;
}



/* Entry: 1072c8ed8; end: 1072c8ef7;  */

void FUN_1072c8ed8(void)

{
  func_0x0001072cfc8c();
  FUN_1072c8ef8();
  return;
}



/* Entry: 1072c8ef8; end: 1072c8f3b;  */

void FUN_1072c8ef8(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 unaff_x30;
  undefined8 uVar2;
  
  lVar1 = param_3[1];
  uVar2 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001072ced88();
    } while (extraout_w10 != 0);
  }
  if (*param_2 != 0) {
    do {
      func_0x0001072cfb28(unaff_x30);
    } while (extraout_w10_00 != 0);
  }
  return;
}



/* Entry: 1072c8f3c; end: 1072c8f9b;  */

void FUN_1072c8f3c(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar2 = param_1;
  FUN_1072c5d20();
  pcVar1 = pcRam00000001138369a8;
  if ((puVar2 == (undefined8 *)0x1) && (pcRam00000001138369a8 != (code *)0x0)) {
    uStack_28 = param_1[1];
    uStack_30 = *param_1;
    *param_1 = 0;
    param_1[1] = 0;
    (*pcVar1)(&uStack_30);
    func_0x0001000df524(&uStack_30);
  }
  FUN_1072c6dc4(param_1);
  return;
}



/* Entry: 1072c8f9c; end: 1072c8fb3;  */

void FUN_1072c8f9c(void)

{
  FUN_1072c8fb4();
  return;
}



/* Entry: 1072c8fb4; end: 1072c8fd3;  */

void FUN_1072c8fb4(void)

{
  func_0x0001072cfc8c();
  FUN_1072c8fd4();
  return;
}



/* Entry: 1072c8fd4; end: 1072c9057;  */

void FUN_1072c8fd4(void)

{
  int iVar1;
  long extraout_x8;
  int extraout_w10;
  
  if ((bRam00000001131ad248 & 1) == 0) {
    iVar1 = 0x131ad248;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_1072c9058(0x1131ad238);
      ___cxa_guard_release(0x1131ad248);
    }
  }
  func_0x0001072cfb08();
  if (extraout_x8 != 0) {
    do {
      func_0x0001072ced88();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 1072c9058; end: 1072c9073;  */

void FUN_1072c9058(void)

{
  undefined1 uStack_11;
  
  FUN_1072c9074(&uStack_11);
  return;
}



/* Entry: 1072c9074; end: 1072c90db;  */

void FUN_1072c9074(long param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 uVar1;
  undefined8 *puStack_30;
  
  func_0x0001072ce294();
  func_0x0001072cf450();
  FUN_1072c5e00();
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  *puStack_30 = &PTR_FUN_11099bdf8;
  puStack_30[4] = 0;
  puStack_30[3] = 0;
  puStack_30[6] = 0;
  puStack_30[5] = 0;
  func_0x0001072ce344();
  FUN_1072c6db4();
  func_0x0001072ce0cc(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x0001072ce5c4();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x0001072ce508(uVar1);
  return;
}



/* Entry: 1072c90dc; end: 1072c9187;  */

void FUN_1072c90dc(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x0001072ce5c4();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x0001072ce508(uVar1);
  return;
}



/* Entry: 1072c9188; end: 1072c919f;  */

void FUN_1072c9188(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1072c91a0; end: 1072c928f;  */

long FUN_1072c91a0(long param_1)

{
  func_0x0001072c91e8(param_1 + 0xe0);
  func_0x0001072c920c(param_1 + 0xc0);
  func_0x0001072c9240(param_1 + 0xa0);
  func_0x0001072bf730(param_1 + 0x68);
  FUN_1072c9368(param_1 + 0x38);
  func_0x0001072ced78();
  return param_1;
}



/* Entry: 1072c9290; end: 1072c9297;  */

void FUN_1072c9290(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x0001072ce520(param_1,*param_1);
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0xb;
    func_0x0001072c92c8();
  }
  *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1072c9298; end: 1072c9367;  */

void FUN_1072c9298(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072ce520();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x58;
    func_0x0001072c92c8();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1072c9368; end: 1072c93ab;  */

void FUN_1072c9368(long param_1)

{
  if (*(uint *)(param_1 + 8) != 0xffffffff) {
    func_0x0001072ce6fc((&PTR_FUN_11099ace0)[*(uint *)(param_1 + 8)]);
  }
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}



/* Entry: 1072c93ac; end: 1072c93bb;  */

void FUN_1072c93ac(undefined8 param_1,long param_2)

{
  undefined8 *unaff_x19;
  
  func_0x0001072cea84();
  *unaff_x19 = 0;
  if (param_2 != 0) {
    func_0x0001072ce338();
  }
  return;
}



/* Entry: 1072c93bc; end: 1072c94df;  */

void FUN_1072c93bc(long param_1)

{
  undefined8 *unaff_x19;
  
  func_0x0001072cea84();
  *unaff_x19 = 0;
  if (param_1 != 0) {
    func_0x0001072ce338();
  }
  return;
}



/* Entry: 1072c94e0; end: 1072c94ff;  */

void FUN_1072c94e0(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    FUN_1072c9500();
  }
  return;
}



/* Entry: 1072c9500; end: 1072c953b;  */

long * FUN_1072c9500(long *param_1)

{
  if (param_1[2] != 0) {
    FUN_1072c953c(param_1);
    __ZdlPv(*param_1 + -8);
  }
  return param_1;
}



/* Entry: 1072c953c; end: 1072c95cf;  */

void FUN_1072c953c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  
  pcVar3 = (char *)*param_1;
  lVar1 = param_1[1];
  for (lVar2 = param_1[2]; lVar2 != 0; lVar2 = lVar2 + -1) {
    if (-1 < *pcVar3) {
      func_0x0001072c9578(lVar1);
    }
    pcVar3 = pcVar3 + 1;
    lVar1 = lVar1 + 0x48;
  }
  return;
}



/* Entry: 1072c95d0; end: 1072c95ef;  */

void FUN_1072c95d0(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    func_0x0001072c9b9c();
  }
  return;
}



/* Entry: 1072c95f0; end: 1072c9663;  */

undefined8 * FUN_1072c95f0(undefined8 *param_1,undefined1 param_2)

{
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[7] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  FUN_1072c9664(param_1 + 8);
  *(undefined1 *)(param_1 + 10) = param_2;
  *(undefined1 *)((long)param_1 + 0x51) = 1;
  return param_1;
}



/* Entry: 1072c9664; end: 1072c967f;  */

void FUN_1072c9664(void)

{
  undefined1 uStack_11;
  
  FUN_1072c9680(&uStack_11);
  return;
}



/* Entry: 1072c9680; end: 1072c96df;  */

void FUN_1072c9680(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 *puStack_30;
  
  func_0x0001072ce294();
  func_0x0001072cf450();
  FUN_1072c96e0();
  *puStack_30 = &PTR_FUN_11099bca8;
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  puStack_30[3] = 0;
  puStack_30[4] = 0;
  puStack_30[5] = 0;
  func_0x0001072ce344();
  FUN_1072c9820();
  func_0x0001072ce0cc(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x0001072cfca4();
  FUN_1072c9700();
  func_0x0001072cfbc0();
  return;
}



/* Entry: 1072c96e0; end: 1072c96ff;  */

void FUN_1072c96e0(void)

{
  func_0x0001072cfca4();
  FUN_1072c9700();
  func_0x0001072cfbc0();
  return;
}



/* Entry: 1072c9700; end: 1072c9723;  */

void FUN_1072c9700(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x555555555555556) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x30);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_11099bca8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1072c9724; end: 1072c9727;  */

void FUN_1072c9724(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099bca8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1072c9728; end: 1072c973b;  */

void FUN_1072c9728(void)

{
  func_0x0001072c9748();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072c973c; end: 1072c9753;  */

void FUN_1072c973c(long param_1)

{
  func_0x0001072ce4a0(param_1 + 0x18);
  func_0x0001072c9778();
  return;
}



/* Entry: 1072c9754; end: 1072c97a3;  */

void FUN_1072c9754(void)

{
  func_0x0001072ce4a0();
  func_0x0001072c9778();
  return;
}



/* Entry: 1072c97a4; end: 1072c97ab;  */

void FUN_1072c97a4(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x0001072ce520(param_1,*param_1);
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -6;
    func_0x0001072c97dc();
  }
  *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1072c97ac; end: 1072c981f;  */

void FUN_1072c97ac(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072ce520();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x30;
    func_0x0001072c97dc();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1072c9820; end: 1072c982f;  */

void FUN_1072c9820(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1072c9830; end: 1072c9883;  */

void FUN_1072c9830(long param_1)

{
  func_0x0001072cea78();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1072c9884; end: 1072c98c7;  */

void FUN_1072c9884(long param_1)

{
  if (*(uint *)(param_1 + 8) != 0xffffffff) {
    func_0x0001072ce6fc((&PTR_FUN_11099acf0)[*(uint *)(param_1 + 8)]);
  }
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}



/* Entry: 1072c98c8; end: 1072c98fb;  */

void FUN_1072c98c8(void)

{
  return;
}



/* Entry: 1072c98fc; end: 1072c991b;  */

void FUN_1072c98fc(void)

{
  func_0x0001072cebb4();
  FUN_1072c991c();
  return;
}



/* Entry: 1072c991c; end: 1072c9933;  */

void FUN_1072c991c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_1072c9884(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 1072c9934; end: 1072c995b;  */

void FUN_1072c9934(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_1072c9884(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 1072c995c; end: 1072c99a7;  */

ulong * FUN_1072c995c(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  puVar1 = param_1 + 1;
  if ((*param_1 & 1) == 0) {
    uVar4 = 4;
  }
  else {
    puVar1 = (ulong *)param_1[1];
    uVar4 = param_1[2];
  }
  uVar3 = *param_1 >> 1;
  if (uVar3 != uVar4) {
    puVar1 = puVar1 + uVar3 * 2;
    uVar4 = *param_2;
    puVar1[1] = param_2[1];
    *puVar1 = uVar4;
    *param_2 = 0;
    param_2[1] = 0;
    *param_1 = *param_1 + 2;
    return puVar1;
  }
  puStack_58 = param_1 + 1;
  uVar4 = *param_1;
  if ((uVar4 & 1) == 0) {
    lVar2 = 8;
  }
  else {
    puStack_58 = (ulong *)param_1[1];
    lVar2 = param_1[2] << 1;
  }
  uStack_50 = 0;
  uStack_48 = 0;
  puVar1 = &uStack_50;
  FUN_1072c9aa8(puVar1,lVar2);
  uVar4 = uVar4 >> 1;
  puVar1 = puVar1 + uVar4 * 2;
  uVar3 = *param_2;
  puVar1[1] = param_2[1];
  *puVar1 = uVar3;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1072c9ac8(param_1,uStack_50,&puStack_58,uVar4);
  func_0x0001072cf0f0();
  FUN_1072c9af4();
  FUN_1072c9b28(param_1);
  uVar3 = uStack_48;
  uVar4 = uStack_50;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[1] = uVar4;
  param_1[2] = uVar3;
  *param_1 = (*param_1 | 1) + 2;
  FUN_1072c9b78(&uStack_50);
  return puVar1;
}



/* Entry: 1072c99a8; end: 1072c9aa7;  */

ulong * FUN_1072c99a8(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  puStack_58 = param_1 + 1;
  uVar3 = *param_1;
  if ((uVar3 & 1) == 0) {
    lVar2 = 8;
  }
  else {
    puStack_58 = (ulong *)param_1[1];
    lVar2 = param_1[2] << 1;
  }
  uStack_50 = 0;
  uStack_48 = 0;
  puVar1 = &uStack_50;
  FUN_1072c9aa8(puVar1,lVar2);
  uVar3 = uVar3 >> 1;
  puVar1 = puVar1 + uVar3 * 2;
  uVar4 = *param_2;
  puVar1[1] = param_2[1];
  *puVar1 = uVar4;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1072c9ac8(param_1,uStack_50,&puStack_58,uVar3);
  func_0x0001072cf0f0();
  FUN_1072c9af4();
  FUN_1072c9b28(param_1);
  uVar4 = uStack_48;
  uVar3 = uStack_50;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  *param_1 = (*param_1 | 1) + 2;
  FUN_1072c9b78(&uStack_50);
  return puVar1;
}



/* Entry: 1072c9aa8; end: 1072c9ac7;  */

void FUN_1072c9aa8(long *param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = param_1;
  FUN_1072c9b3c();
  *param_1 = (long)plVar1;
  param_1[1] = param_2;
  return;
}



/* Entry: 1072c9ac8; end: 1072c9af3;  */

void FUN_1072c9ac8(undefined8 param_1,undefined8 *param_2,long *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    puVar1 = (undefined8 *)*param_3;
    uVar2 = *puVar1;
    param_2[1] = puVar1[1];
    *param_2 = uVar2;
    *puVar1 = 0;
    puVar1[1] = 0;
    *param_3 = *param_3 + 0x10;
    param_2 = param_2 + 2;
  }
  return;
}



/* Entry: 1072c9af4; end: 1072c9b27;  */

void FUN_1072c9af4(undefined8 param_1,long param_2,long param_3)

{
  param_2 = param_2 + param_3 * 0x10;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    param_2 = param_2 + -0x10;
    func_0x0001072c9b9c(param_2);
  }
  return;
}



/* Entry: 1072c9b28; end: 1072c9b3b;  */

void FUN_1072c9b28(byte *param_1)

{
  if ((*param_1 & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1072c9b3c; end: 1072c9b5b;  */

void FUN_1072c9b3c(void)

{
  FUN_1072c9b5c();
  return;
}



/* Entry: 1072c9b5c; end: 1072c9b77;  */

void FUN_1072c9b5c(long param_1,ulong param_2)

{
  if (param_2 >> 0x3c == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 4);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001072cea84();
  if (param_1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 1072c9b78; end: 1072c9bbf;  */

void FUN_1072c9b78(long param_1)

{
  func_0x0001072cea84();
  if (param_1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 1072c9bc0; end: 1072c9c33;  */

void FUN_1072c9bc0(undefined8 *param_1)

{
  ulong uVar1;
  ulong *unaff_x19;
  ulong *unaff_x20;
  
  func_0x0001003ac1fc();
  *param_1 = 0;
  if ((*unaff_x20 & 1) == 0) {
    FUN_1072c9ac8();
    *unaff_x19 = *unaff_x20 & 0xfffffffffffffffe;
  }
  else {
    uVar1 = unaff_x20[2];
    unaff_x19[1] = unaff_x20[1];
    unaff_x19[2] = uVar1;
    *unaff_x19 = *unaff_x20 | 1;
    *unaff_x20 = 0;
  }
  return;
}



/* Entry: 1072c9c34; end: 1072c9c63;  */

long * FUN_1072c9c34(long *param_1)

{
  if (*param_1 != 0) {
    FUN_1072c9c64(param_1);
  }
  return param_1;
}



/* Entry: 1072c9c64; end: 1072c9c9f;  */

void FUN_1072c9c64(ulong *param_1)

{
  ulong *puVar1;
  
  puVar1 = param_1 + 1;
  if ((*param_1 & 1) != 0) {
    puVar1 = (ulong *)*puVar1;
  }
  FUN_1072c9af4(param_1,puVar1,*param_1 >> 1);
  if ((*param_1 & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1[1]);
  return;
}



/* Entry: 1072c9ca0; end: 1072c9cd7;  */

undefined8 * FUN_1072c9ca0(undefined8 *param_1,long param_2,long param_3)

{
  *param_1 = 0;
  FUN_1072c9cd8(param_1,param_2,param_3 - param_2 >> 4);
  return param_1;
}



/* Entry: 1072c9cd8; end: 1072c9d53;  */

void FUN_1072c9cd8(ulong *param_1,undefined8 param_2,ulong param_3)

{
  ulong *puVar1;
  ulong uVar2;
  undefined8 uStack_28;
  
  uStack_28 = param_2;
  if (param_3 < 5) {
    puVar1 = param_1 + 1;
  }
  else {
    uVar2 = param_3;
    if (param_3 < 9) {
      uVar2 = 8;
    }
    puVar1 = param_1;
    FUN_1072c9b3c();
    param_1[1] = (ulong)puVar1;
    param_1[2] = uVar2;
    *param_1 = *param_1 | 1;
  }
  FUN_1072c9d54(param_1,puVar1,&uStack_28,param_3);
  *param_1 = *param_1 + param_3 * 2;
  return;
}



/* Entry: 1072c9d54; end: 1072c9dd7;  */

void FUN_1072c9d54(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  for (lVar1 = 0; param_4 != lVar1; lVar1 = lVar1 + 1) {
    FUN_1072c9dd8(param_3,param_1,param_2);
    param_2 = param_2 + 0x10;
  }
  return;
}



/* Entry: 1072c9dd8; end: 1072c9e0f;  */

void FUN_1072c9dd8(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)*param_1;
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_3[1] = puVar1[1];
  *param_3 = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x0001072ced88();
    } while (extraout_w10 != 0);
    puVar1 = (undefined8 *)*param_1;
  }
  *param_1 = (long)(puVar1 + 2);
  return;
}



/* Entry: 1072c9e10; end: 1072c9e8f;  */

void FUN_1072c9e10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x19;
  undefined1 auStack_30 [16];
  
  func_0x0001072cf12c();
  FUN_1072c9ff4();
  FUN_1072c9e90();
  FUN_1072c9f9c();
  FUN_1072c9884(auStack_30);
  *unaff_x19 = &PTR_DAT_1109be438;
  FUN_1072c9bc0(unaff_x19 + 9,param_3);
  return;
}



/* Entry: 1072c9e90; end: 1072c9f9b;  */

ulong FUN_1072c9e90(ulong *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  byte bVar8;
  ulong uVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  
  bVar7 = 0;
  puVar1 = param_1 + 1;
  if ((*param_1 & 1) != 0) {
    puVar1 = (ulong *)param_1[1];
  }
  uVar2 = *param_1 & 0x1ffffffffffffffe;
  uVar9 = uVar2 << 3;
  bVar10 = 1;
  bVar12 = 1;
  bVar11 = 1;
  bVar8 = 1;
  uVar6 = 1;
  do {
    if (uVar2 == 0) {
      uVar2 = 0x10000000000;
      if ((bVar7 & 1) == 0) {
        uVar2 = 0;
      }
      uVar9 = 0x100000000;
      if ((bVar10 & 1) == 0) {
        uVar9 = 0;
      }
      uVar3 = 0x1000000;
      if ((bVar12 & 1) == 0) {
        uVar3 = 0;
      }
      uVar4 = 0x10000;
      if ((bVar11 & 1) == 0) {
        uVar4 = 0;
      }
      uVar5 = 0x100;
      if ((bVar8 & 1) == 0) {
        uVar5 = 0;
      }
      return uVar2 | uVar9 | uVar3 | uVar4 | uVar5 | uVar6 & 1;
    }
    if ((uVar6 & 1) == 0) {
      uVar6 = 0;
      if ((bVar8 & 1) == 0) goto LAB_1072c9ed4;
LAB_1072c9f08:
      bVar8 = *(byte *)(*puVar1 + 0x21);
      if ((bVar11 & 1) == 0) goto LAB_1072c9edc;
LAB_1072c9f14:
      bVar11 = *(byte *)(*puVar1 + 0x22);
      if ((uVar6 & 1) == 0) goto LAB_1072c9ee4;
LAB_1072c9f20:
      bVar12 = *(byte *)(*puVar1 + 0x23);
      if ((bVar10 & 1) == 0) goto LAB_1072c9eec;
LAB_1072c9f2c:
      bVar10 = *(byte *)(*puVar1 + 0x24);
      if ((bVar7 & 1) == 0) goto LAB_1072c9ef4;
LAB_1072c9f38:
      bVar7 = 1;
    }
    else {
      uVar6 = (ulong)*(byte *)(*puVar1 + 0x20);
      if ((bVar8 & 1) != 0) goto LAB_1072c9f08;
LAB_1072c9ed4:
      bVar8 = 0;
      if ((bVar11 & 1) != 0) goto LAB_1072c9f14;
LAB_1072c9edc:
      bVar11 = 0;
      if ((uVar6 & 1) != 0) goto LAB_1072c9f20;
LAB_1072c9ee4:
      bVar12 = 0;
      if ((bVar10 & 1) != 0) goto LAB_1072c9f2c;
LAB_1072c9eec:
      bVar10 = 0;
      if ((bVar7 & 1) != 0) goto LAB_1072c9f38;
LAB_1072c9ef4:
      bVar7 = *(byte *)(*puVar1 + 0x25);
    }
    puVar1 = puVar1 + 2;
    uVar9 = uVar9 - 0x10;
    uVar2 = uVar9;
  } while( true );
}



/* Entry: 1072c9f9c; end: 1072c9ff3;  */

undefined8 *
FUN_1072c9f9c(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  *param_1 = &PTR_DAT_1109d4888;
  *(undefined4 *)(param_1 + 1) = param_2;
  FUN_1072ca12c(param_1 + 2,param_3);
  uVar1 = *param_4;
  *(undefined2 *)((long)param_1 + 0x24) = *(undefined2 *)(param_4 + 1);
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  return param_1;
}



/* Entry: 1072c9ff4; end: 1072ca023;  */

void FUN_1072c9ff4(long param_1)

{
  undefined4 extraout_w8;
  
  func_0x0001072cfb38();
  *(undefined4 *)(param_1 + 8) = extraout_w8;
  FUN_1072ca024();
  return;
}



/* Entry: 1072ca024; end: 1072ca067;  */

void FUN_1072ca024(void)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001003ac1fc();
  FUN_1072c9884();
  iVar1 = *(int *)(unaff_x20 + 8);
  if (iVar1 != -1) {
    func_0x0001072ced04(&PTR_FUN_11099ad50);
    *(int *)(unaff_x19 + 8) = iVar1;
  }
  return;
}



/* Entry: 1072ca068; end: 1072ca09f;  */

void FUN_1072ca068(void)

{
  return;
}



/* Entry: 1072ca0a0; end: 1072ca0c7;  */

undefined8 FUN_1072ca0a0(undefined8 param_1,undefined8 *param_2)

{
  FUN_1072ca0c8(param_1,*param_2);
  return param_1;
}



/* Entry: 1072ca0c8; end: 1072ca107;  */

void FUN_1072ca0c8(undefined8 *param_1,undefined8 param_2)

{
  func_0x0001072cf4dc();
  FUN_1072ca108();
  *param_1 = param_2;
  return;
}



/* Entry: 1072ca108; end: 1072ca12b;  */

void FUN_1072ca108(long param_1,long param_2)

{
  undefined8 uVar1;
  
  FUN_1072c9ff4();
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  return;
}



/* Entry: 1072ca12c; end: 1072ca153;  */

void FUN_1072ca12c(long param_1)

{
  undefined4 extraout_w8;
  
  func_0x0001072cfb38();
  *(undefined4 *)(param_1 + 8) = extraout_w8;
  FUN_1072ca154();
  return;
}



/* Entry: 1072ca154; end: 1072ca197;  */

void FUN_1072ca154(void)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001003ac1fc();
  FUN_1072c9884();
  iVar1 = *(int *)(unaff_x20 + 8);
  if (iVar1 != -1) {
    func_0x0001072ced04(&PTR_FUN_11099adb0);
    *(int *)(unaff_x19 + 8) = iVar1;
  }
  return;
}



/* Entry: 1072ca198; end: 1072ca1cf;  */

void FUN_1072ca198(void)

{
  return;
}



/* Entry: 1072ca1d0; end: 1072ca1fb;  */

undefined8 FUN_1072ca1d0(undefined8 param_1,undefined8 *param_2)

{
  FUN_1072ca1fc(param_1,*param_2);
  return param_1;
}



/* Entry: 1072ca1fc; end: 1072ca247;  */

void FUN_1072ca1fc(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  func_0x0001003ac6c4();
  func_0x0001072cf4dc();
  func_0x0001072ca224();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1072ca248; end: 1072ca263;  */

void FUN_1072ca248(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long unaff_x19;
  
  if (*(int *)(param_1 + 0x18) == 1) {
    return;
  }
  func_0x00010563ab98();
  func_0x0001072cf3c4();
  *param_2 = 0;
  param_2[1] = 0;
  func_0x0001072cfd38();
  func_0x0001072cf1b4();
  FUN_1072ca2b0(unaff_x19 + 0x28,param_3);
  return;
}



/* Entry: 1072ca264; end: 1072ca2af;  */

void FUN_1072ca264(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  long unaff_x19;
  
  func_0x0001072cf3c4();
  *param_2 = 0;
  param_2[1] = 0;
  func_0x0001072cfd38();
  func_0x0001072cf1b4();
  FUN_1072ca2b0(unaff_x19 + 0x28,param_3);
  return;
}



/* Entry: 1072ca2b0; end: 1072ca2db;  */

undefined1 * FUN_1072ca2b0(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x60] = 0;
  FUN_1072ca2dc();
  return param_1;
}



/* Entry: 1072ca2dc; end: 1072ca2ef;  */

void FUN_1072ca2dc(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_10726ccd4();
    *(undefined1 *)(param_1 + 0x60) = 1;
    return;
  }
  return;
}



/* Entry: 1072ca2f0; end: 1072ca30b;  */

void FUN_1072ca2f0(long param_1)

{
  FUN_10726ccd4();
  *(undefined1 *)(param_1 + 0x60) = 1;
  return;
}



/* Entry: 1072ca30c; end: 1072ca333;  */

long FUN_1072ca30c(long param_1)

{
  FUN_1072ca334(param_1 + 8);
  return param_1;
}



/* Entry: 1072ca334; end: 1072ca34f;  */

void FUN_1072ca334(long param_1)

{
  FUN_1072ca350();
  *(undefined4 *)(param_1 + 0x90) = 2;
  return;
}



/* Entry: 1072ca350; end: 1072ca37b;  */

void FUN_1072ca350(long param_1)

{
  long unaff_x19;
  
  func_0x0001072ce940();
  FUN_10727da70();
  FUN_1072ca2b0(param_1 + 0x28,unaff_x19 + 0x28);
  return;
}



/* Entry: 1072ca37c; end: 1072ca3bf;  */

void FUN_1072ca37c(long param_1)

{
  if (*(uint *)(param_1 + 0x90) != 0xffffffff) {
    func_0x0001072ce6fc((&PTR_FUN_11099ae10)[*(uint *)(param_1 + 0x90)]);
  }
  *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
  return;
}



/* Entry: 1072ca3c0; end: 1072ca3d3;  */

void FUN_1072ca3c0(void)

{
  return;
}



/* Entry: 1072ca3d4; end: 1072ca3fb;  */

long FUN_1072ca3d4(long param_1)

{
  long lVar1;
  long unaff_x19;
  
  FUN_10726b144(param_1 + 0x28);
  func_0x000107274b8c(param_1);
  func_0x000107266aa8();
  lVar1 = unaff_x19;
  func_0x000107274970();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 1072ca3fc; end: 1072ca44b;  */

void FUN_1072ca3fc(long *param_1,long *param_2)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar1;
  
  func_0x0001003ac1fc();
  lVar1 = *param_2;
  *param_1 = lVar1;
  if (lVar1 == 0) {
    param_1 = (long *)0x0;
  }
  else {
    func_0x0001072cf4dc();
    *param_1 = (long)&PTR_FUN_11099ae38;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = lVar1;
  }
  *(long **)(unaff_x19 + 8) = param_1;
  *unaff_x20 = 0;
  return;
}



/* Entry: 1072ca44c; end: 1072ca44f;  */

void FUN_1072ca44c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1072ca450; end: 1072ca463;  */

void FUN_1072ca450(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


