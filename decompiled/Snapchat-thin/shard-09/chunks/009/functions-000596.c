/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1072c7020; end: 1072c704b;  */

long * FUN_1072c7020(long *param_1)

{
  FUN_1072c704c();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1072c704c; end: 1072c7053;  */

void FUN_1072c704c(long param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x20;
  
  func_0x0001072ce940(param_1,*(undefined8 *)(param_1 + 8));
  while (func_0x0001072cf020(), !(bool)in_ZR) {
    *(long *)(unaff_x20 + 0x10) = extraout_x8 + -0x70;
    func_0x0001072c6ccc();
  }
  return;
}



/* Entry: 1072c7054; end: 1072c7083;  */

void FUN_1072c7054(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x20;
  
  func_0x0001072ce940();
  while (func_0x0001072cf020(), !(bool)in_ZR) {
    *(long *)(unaff_x20 + 0x10) = extraout_x8 + -0x70;
    func_0x0001072c6ccc();
  }
  return;
}



/* Entry: 1072c7084; end: 1072c70d7;  */

void FUN_1072c7084(int *param_1,long *param_2)

{
  undefined1 uVar1;
  bool bVar2;
  undefined8 uVar3;
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
    FUN_1072c70f8(*param_2 + 0x68,&stack0xffffffffffffffef,*(undefined8 *)param_2[1],param_2[2]);
    return;
  }
  if (*param_1 == 6) {
    func_0x0001072ce8d4(*param_2,param_1 + 2,*(undefined8 *)param_2[1],param_2[2]);
    FUN_1072c7350();
    func_0x0001072cea9c(unaff_x21 + 0x68,&stack0xffffffffffffffcc);
    func_0x0001072c7324();
    return;
  }
  if (*param_1 == 5) {
    lVar5 = *param_2;
    uVar3 = *(undefined8 *)param_2[1];
    lVar4 = param_2[2];
    FUN_1072c75c4(&stack0xffffffffffffffb8);
    if (in_stack_ffffffffffffffb8 != in_stack_ffffffffffffffc0) {
      if (*(char *)(lVar5 + 0x28) == '\x01') {
        FUN_107268400(&stack0xffffffffffffffa8,uVar3);
        dStack_60 = *(double *)(param_1 + 10) / *(double *)(param_1 + 8);
        FUN_1072c7648(auStack_78,&stack0xffffffffffffffa8,&UNK_10f409200,&dStack_60);
        dStack_60 = *(double *)(param_1 + 0xc) / *(double *)(param_1 + 8);
        FUN_1072c76ac(auStack_78,&stack0xffffffffffffffa8,&UNK_10f409212,&dStack_60);
        FUN_1072c7710(lVar5 + 0x68,&stack0xffffffffffffffb8,&stack0xffffffffffffffa8,lVar4);
        func_0x000104c335c0(&stack0xffffffffffffffa8);
      }
      else {
        func_0x0001072c773c(lVar5 + 0x68,&stack0xffffffffffffffb8,uVar3,lVar4);
      }
    }
    func_0x000104c336c8(&stack0xffffffffffffffb8);
    return;
  }
  uVar1 = *param_1 == 4;
  if ((bool)uVar1) {
    func_0x0001072ce8d4(*param_2,param_1 + 2,*(undefined8 *)param_2[1],param_2[2]);
    FUN_1072c7bc8(&stack0xffffffffffffffb8);
    func_0x0001072d01bc();
    if (!(bool)uVar1) {
      func_0x0001072cea9c(unaff_x21 + 0x68,&stack0xffffffffffffffb8);
      FUN_1072c7c50();
    }
    func_0x0001072c6820(&stack0xffffffffffffffb8);
  }
  else if (*param_1 == 3) {
    func_0x0001072ce8d4(*param_2,param_1 + 2,*(undefined8 *)param_2[1],param_2[2]);
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
    bVar2 = *param_1 == 2;
    if (bVar2) {
      func_0x0001072ce8d4(*param_2,param_1 + 2,*(undefined8 *)param_2[1],param_2[2]);
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
      if (!bVar2) {
        func_0x0001072ce8d4(*(undefined8 *)param_1);
        lVar4 = param_2[1];
        for (lVar5 = *param_2; lVar5 != lVar4; lVar5 = lVar5 + 0x38) {
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



/* Entry: 1072c70d8; end: 1072c70f7;  */

void FUN_1072c70d8(long param_1)

{
  undefined1 uStack_11;
  
  FUN_1072c70f8(param_1 + 0x68,&uStack_11);
  return;
}



/* Entry: 1072c70f8; end: 1072c7123;  */

void FUN_1072c70f8(void)

{
  undefined1 in_CY;
  
  func_0x0001072ce2a8();
  FUN_1072c5cdc();
  func_0x0001072ce4d4();
  func_0x0001072ce4e8();
  if ((bool)in_CY) {
    FUN_1072c717c();
  }
  else {
    FUN_1072c7154();
  }
  func_0x0001072cf410();
  return;
}



/* Entry: 1072c7124; end: 1072c7153;  */

void FUN_1072c7124(void)

{
  undefined1 in_CY;
  
  func_0x0001072ce4e8();
  if ((bool)in_CY) {
    FUN_1072c717c();
  }
  else {
    FUN_1072c7154();
  }
  func_0x0001072cf410();
  return;
}



/* Entry: 1072c7154; end: 1072c717b;  */

void FUN_1072c7154(void)

{
  func_0x0001072ceb2c();
  FUN_1072c71c4();
  func_0x0001072cf378();
  return;
}



/* Entry: 1072c717c; end: 1072c71c3;  */

void FUN_1072c717c(void)

{
  undefined8 in_stack_00000018;
  
  func_0x0001072d00ec();
  func_0x0001072ce030();
  func_0x0001072ce0b0();
  func_0x0001072ce640(in_stack_00000018);
  FUN_1072c71c4();
  func_0x0001072ce824();
  func_0x0001072ce684();
  func_0x0001072ce730();
  return;
}



/* Entry: 1072c71c4; end: 1072c720b;  */

long FUN_1072c71c4(long param_1)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x0001072ce1d0();
  func_0x0001072cfe5c();
  func_0x0001072ceb24();
  func_0x0001072ce080();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001072ce724();
  func_0x0001072ce900();
  func_0x0001072cebd4();
  lVar2 = lVar1;
  FUN_1072c60ac();
  FUN_107268400(lVar2 + 0x20);
  func_0x000107269bac(lVar1 + 0x30);
  return lVar1;
}



/* Entry: 1072c720c; end: 1072c7267;  */

long FUN_1072c720c(long param_1)

{
  long lVar1;
  
  func_0x0001072cebd4();
  lVar1 = param_1;
  FUN_1072c60ac();
  FUN_107268400(lVar1 + 0x20);
  func_0x000107269bac(param_1 + 0x30);
  return param_1;
}



/* Entry: 1072c7268; end: 1072c72bb;  */

long FUN_1072c7268(undefined8 *param_1,ulong param_2)

{
  undefined4 uVar1;
  long lVar2;
  long extraout_x8;
  ulong extraout_x9;
  long extraout_x10;
  long unaff_x21;
  undefined4 uStack_44;
  
  if (param_2 < 0x24924924924924a) {
    func_0x0001072d0100();
    lVar2 = extraout_x10;
    if (0x124924924924923 < extraout_x9) {
      lVar2 = extraout_x8;
    }
    return lVar2;
  }
  FUN_1072c5f98();
  uVar1 = (undefined4)*param_1;
  func_0x0001072ce8d4();
  FUN_1072c7350();
  lVar2 = unaff_x21 + 0x68;
  uStack_44 = uVar1;
  func_0x0001072cea9c(lVar2,&uStack_44);
  func_0x0001072c7324();
  return lVar2;
}



/* Entry: 1072c72bc; end: 1072c72eb;  */

void FUN_1072c72bc(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long unaff_x21;
  undefined4 uStack_34;
  undefined8 uVar2;
  
  uVar2 = *param_1;
  func_0x0001072ce8d4(uVar2,param_2,*(undefined8 *)param_1[1],param_1[2]);
  uVar1 = (undefined4)uVar2;
  FUN_1072c7350();
  uStack_34 = uVar1;
  func_0x0001072cea9c(unaff_x21 + 0x68,&uStack_34);
  func_0x0001072c7324();
  return;
}



/* Entry: 1072c72ec; end: 1072c734f;  */

void FUN_1072c72ec(undefined4 param_1)

{
  long unaff_x21;
  undefined4 uStack_34;
  
  func_0x0001072ce8d4();
  FUN_1072c7350();
  uStack_34 = param_1;
  func_0x0001072cea9c(unaff_x21 + 0x68,&uStack_34);
  func_0x0001072c7324();
  return;
}



/* Entry: 1072c7350; end: 1072c739b;  */

uint FUN_1072c7350(ushort *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar1 = (double)NEON_ucvtf((ulong)*(uint *)(param_1 + 2));
  dVar3 = *param_2;
  dVar5 = param_2[1];
  dVar4 = (double)NEON_ucvtf((ulong)*param_1);
  *(int *)(param_1 + 0x3e) = *(int *)(param_1 + 0x3e) + 1;
  dVar2 = (double)NEON_ucvtf((ulong)*(uint *)(param_1 + 4));
  return (int)((dVar3 * *(double *)(param_1 + 8) - dVar1) * dVar4) & 0xffffU |
         (int)((dVar5 * *(double *)(param_1 + 8) - dVar2) * dVar4) << 0x10;
}



/* Entry: 1072c739c; end: 1072c73cb;  */

void FUN_1072c739c(void)

{
  undefined1 in_CY;
  
  func_0x0001072ce4e8();
  if ((bool)in_CY) {
    FUN_1072c73f4();
  }
  else {
    FUN_1072c73cc();
  }
  func_0x0001072cf410();
  return;
}



/* Entry: 1072c73cc; end: 1072c73f3;  */

void FUN_1072c73cc(void)

{
  func_0x0001072ceb2c();
  FUN_1072c743c();
  func_0x0001072cf378();
  return;
}



/* Entry: 1072c73f4; end: 1072c743b;  */

void FUN_1072c73f4(void)

{
  undefined8 in_stack_00000018;
  
  func_0x0001072d00ec();
  func_0x0001072ce030();
  func_0x0001072ce0b0();
  func_0x0001072ce640(in_stack_00000018);
  FUN_1072c743c();
  func_0x0001072ce824();
  func_0x0001072ce684();
  func_0x0001072ce730();
  return;
}



/* Entry: 1072c743c; end: 1072c747f;  */

long * FUN_1072c743c(long *param_1,long param_2)

{
  long lVar1;
  undefined1 in_ZR;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_c8 [24];
  double dStack_b0;
  undefined1 auStack_a8 [16];
  long lStack_98;
  long lStack_90;
  
  plVar2 = param_1;
  func_0x0001072ce1d0();
  func_0x0001072d0260();
  func_0x0001072cfe5c();
  func_0x0001072ceb24();
  func_0x0001072ce080();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001072ce724();
  func_0x0001072ce900();
  lVar1 = *plVar2;
  uVar3 = *(undefined8 *)plVar2[1];
  lVar4 = plVar2[2];
  FUN_1072c75c4(&lStack_98);
  if (lStack_98 != lStack_90) {
    if (*(char *)(lVar1 + 0x28) == '\x01') {
      FUN_107268400(auStack_a8,uVar3);
      dStack_b0 = *(double *)(param_2 + 0x20) / *(double *)(param_2 + 0x18);
      FUN_1072c7648(auStack_c8,auStack_a8,&UNK_10f409200,&dStack_b0);
      dStack_b0 = *(double *)(param_2 + 0x28) / *(double *)(param_2 + 0x18);
      FUN_1072c76ac(auStack_c8,auStack_a8,&UNK_10f409212,&dStack_b0);
      FUN_1072c7710(lVar1 + 0x68,&lStack_98,auStack_a8,lVar4);
      func_0x000104c335c0(auStack_a8);
    }
    else {
      func_0x0001072c773c(lVar1 + 0x68,&lStack_98,uVar3,lVar4);
    }
  }
  plVar2 = &lStack_98;
  func_0x000104c336c8(plVar2);
  return plVar2;
}



/* Entry: 1072c7480; end: 1072c74af;  */

void FUN_1072c7480(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_78 [24];
  double dStack_60;
  undefined1 auStack_58 [16];
  long lStack_48;
  long lStack_40;
  
  lVar1 = *param_1;
  uVar2 = *(undefined8 *)param_1[1];
  lVar3 = param_1[2];
  FUN_1072c75c4(&lStack_48);
  if (lStack_48 != lStack_40) {
    if (*(char *)(lVar1 + 0x28) == '\x01') {
      FUN_107268400(auStack_58,uVar2);
      dStack_60 = *(double *)(param_2 + 0x20) / *(double *)(param_2 + 0x18);
      FUN_1072c7648(auStack_78,auStack_58,&UNK_10f409200,&dStack_60);
      dStack_60 = *(double *)(param_2 + 0x28) / *(double *)(param_2 + 0x18);
      FUN_1072c76ac(auStack_78,auStack_58,&UNK_10f409212,&dStack_60);
      FUN_1072c7710(lVar1 + 0x68,&lStack_48,auStack_58,lVar3);
      func_0x000104c335c0(auStack_58);
    }
    else {
      func_0x0001072c773c(lVar1 + 0x68,&lStack_48,uVar2,lVar3);
    }
  }
  func_0x000104c336c8(&lStack_48);
  return;
}



/* Entry: 1072c74b0; end: 1072c75c3;  */

void FUN_1072c74b0(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_78 [24];
  double dStack_60;
  undefined1 auStack_58 [16];
  long lStack_48;
  long lStack_40;
  
  FUN_1072c75c4(&lStack_48);
  if (lStack_48 != lStack_40) {
    if (*(char *)(param_1 + 0x28) == '\x01') {
      FUN_107268400(auStack_58,param_3);
      dStack_60 = *(double *)(param_2 + 0x20) / *(double *)(param_2 + 0x18);
      FUN_1072c7648(auStack_78,auStack_58,&UNK_10f409200,&dStack_60);
      dStack_60 = *(double *)(param_2 + 0x28) / *(double *)(param_2 + 0x18);
      FUN_1072c76ac(auStack_78,auStack_58,&UNK_10f409212,&dStack_60);
      FUN_1072c7710(param_1 + 0x68,&lStack_48,auStack_58,param_4);
      func_0x000104c335c0(auStack_58);
    }
    else {
      func_0x0001072c773c(param_1 + 0x68,&lStack_48,param_3,param_4);
    }
  }
  func_0x000104c336c8(&lStack_48);
  return;
}



/* Entry: 1072c75c4; end: 1072c7647;  */

void FUN_1072c75c4(undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (*(double *)(param_2 + 0x18) < *(double *)(param_3 + 0x18)) {
    func_0x0001072ce790();
    func_0x0001072ce670();
    func_0x0001072cfe30();
    lVar1 = unaff_x22[1];
    for (lVar2 = *unaff_x22; lVar2 != lVar1; lVar2 = lVar2 + 0x18) {
      if (*(double *)(unaff_x20 + 0x20) < *(double *)(lVar2 + 0x10)) {
        func_0x0001072cea6c();
        FUN_1072c7350();
        func_0x0001072cf36c();
      }
    }
  }
  return;
}



/* Entry: 1072c7648; end: 1072c76ab;  */

void FUN_1072c7648(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  
  func_0x0001072ce248();
  func_0x0001072684ec();
  func_0x0001072cfd58();
  func_0x0001072cf480();
  func_0x0001072cf1cc();
  func_0x0001072ce098();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001072ce928();
    func_0x000104c2f714();
    func_0x0001072ce900();
    func_0x0001072ce248();
    func_0x0001072684ec();
    func_0x0001072cfd58();
    func_0x0001072cf480();
    func_0x0001072cf1cc();
    func_0x0001072ce098();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x0001072ce928();
      func_0x000104c2f714();
      func_0x0001072ce900();
      func_0x0001072ce2a8();
      FUN_1072c5cdc();
      func_0x0001072ce4d4();
      func_0x0001072ce4e8();
      if ((bool)in_CY) {
        FUN_1072c7984();
      }
      else {
        FUN_1072c795c();
      }
      func_0x0001072cf410();
      return;
    }
  }
  return;
}



/* Entry: 1072c76ac; end: 1072c770f;  */

void FUN_1072c76ac(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  
  func_0x0001072ce248();
  func_0x0001072684ec();
  func_0x0001072cfd58();
  func_0x0001072cf480();
  func_0x0001072cf1cc();
  func_0x0001072ce098();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072ce928();
  func_0x000104c2f714();
  func_0x0001072ce900();
  func_0x0001072ce2a8();
  FUN_1072c5cdc();
  func_0x0001072ce4d4();
  func_0x0001072ce4e8();
  if ((bool)in_CY) {
    FUN_1072c7984();
  }
  else {
    FUN_1072c795c();
  }
  func_0x0001072cf410();
  return;
}



/* Entry: 1072c7710; end: 1072c7767;  */

void FUN_1072c7710(void)

{
  undefined1 in_CY;
  
  func_0x0001072ce2a8();
  FUN_1072c5cdc();
  func_0x0001072ce4d4();
  func_0x0001072ce4e8();
  if ((bool)in_CY) {
    FUN_1072c7984();
  }
  else {
    FUN_1072c795c();
  }
  func_0x0001072cf410();
  return;
}



/* Entry: 1072c7768; end: 1072c77a7;  */

undefined4 * FUN_1072c7768(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *unaff_x19;
  
  func_0x0001072cea78();
  if (param_1 < *(undefined4 **)(unaff_x19 + 4)) {
    puVar1 = param_1 + 1;
    *param_1 = *param_2;
  }
  else {
    puVar1 = unaff_x19;
    FUN_1072c77a8();
  }
  *(undefined4 **)(unaff_x19 + 2) = puVar1;
  return puVar1 + -1;
}



/* Entry: 1072c77a8; end: 1072c7823;  */

void FUN_1072c77a8(undefined8 param_1)

{
  long *unaff_x19;
  undefined4 *unaff_x20;
  undefined1 auStack_48 [16];
  undefined4 *puStack_38;
  
  func_0x0001072ce314();
  func_0x000104c33fb8();
  func_0x000104c33da8(auStack_48,param_1,unaff_x19[1] - *unaff_x19 >> 2,unaff_x19 + 2);
  *puStack_38 = *unaff_x20;
  puStack_38 = puStack_38 + 1;
  func_0x0001072ce9c4();
  func_0x000104c33d88();
  func_0x0001072ceb54();
  func_0x000104c33e24();
  return;
}



/* Entry: 1072c7824; end: 1072c78e7;  */

void FUN_1072c7824(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 extraout_x8;
  long *unaff_x19;
  undefined8 uVar7;
  undefined4 auStack_88 [2];
  undefined8 uStack_80;
  undefined8 uStack_48;
  
  plVar1 = param_1;
  puVar4 = param_2;
  puVar6 = param_3;
  func_0x0001072ce294();
  uStack_48 = extraout_x8;
  func_0x000104c32bd8();
  if (((ulong)puVar4 & 1) == 0) {
    uStack_80 = *param_3;
    auStack_88[0] = 3;
    plVar5 = (long *)auStack_88;
    func_0x000104c3302c(param_1[1] + (long)plVar1 * 0x78 + 0x38);
    plVar2 = (long *)auStack_88;
    func_0x000104c3323c();
  }
  else {
    plVar2 = param_1;
    plVar5 = plVar1;
    FUN_1072c78e8(param_1,plVar1,param_2);
    puVar6 = param_2;
    param_4 = param_3;
  }
  lVar3 = param_1[1];
  *unaff_x19 = *param_1 + (long)plVar1;
  unaff_x19[1] = lVar3 + (long)plVar1 * 0x78;
  *(char *)(unaff_x19 + 2) = (char)puVar4;
  func_0x0001072ce0cc(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  lVar3 = plVar2[1] + (long)plVar5 * 0x78;
  func_0x000104c318bc(lVar3,puVar6);
  uVar7 = *param_4;
  *(undefined4 *)(lVar3 + 0x38) = 3;
  *(undefined8 *)(lVar3 + 0x40) = uVar7;
  return;
}



/* Entry: 1072c78e8; end: 1072c78ff;  */

void FUN_1072c78e8(long param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 8) + param_2 * 0x78;
  func_0x000104c318bc(lVar1,param_3);
  uVar2 = *param_4;
  *(undefined4 *)(lVar1 + 0x38) = 3;
  *(undefined8 *)(lVar1 + 0x40) = uVar2;
  return;
}



/* Entry: 1072c7900; end: 1072c795b;  */

void FUN_1072c7900(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  func_0x000104c318bc();
  uVar1 = *param_3;
  *(undefined4 *)(param_1 + 0x38) = 3;
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  return;
}



/* Entry: 1072c795c; end: 1072c7983;  */

void FUN_1072c795c(void)

{
  func_0x0001072ceb2c();
  FUN_1072c79cc();
  func_0x0001072cf378();
  return;
}



/* Entry: 1072c7984; end: 1072c79cb;  */

void FUN_1072c7984(void)

{
  undefined8 in_stack_00000018;
  
  func_0x0001072d00ec();
  func_0x0001072ce030();
  func_0x0001072ce0b0();
  func_0x0001072ce640(in_stack_00000018);
  FUN_1072c79cc();
  func_0x0001072ce824();
  func_0x0001072ce684();
  func_0x0001072ce730();
  return;
}



/* Entry: 1072c79cc; end: 1072c7a1b;  */

void FUN_1072c79cc(void)

{
  undefined1 in_ZR;
  undefined8 uStack_38;
  
  func_0x0001072cebd4();
  func_0x0001072ce1e4();
  func_0x0001072cf918();
  FUN_1072c7a1c();
  func_0x0001072ce404();
  func_0x0001072ceb24();
  func_0x0001072ce0cc(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072ce724();
  func_0x0001072ce900();
  func_0x0001072cf3dc();
  FUN_1072c7a3c();
  return;
}



/* Entry: 1072c7a1c; end: 1072c7a3b;  */

void FUN_1072c7a1c(void)

{
  func_0x0001072cf3dc();
  FUN_1072c7a3c();
  return;
}



/* Entry: 1072c7a3c; end: 1072c7a53;  */

void FUN_1072c7a3c(void)

{
  FUN_107297530();
  return;
}



/* Entry: 1072c7a54; end: 1072c7a83;  */

void FUN_1072c7a54(void)

{
  undefined1 in_CY;
  
  func_0x0001072ce4e8();
  if ((bool)in_CY) {
    FUN_1072c7aac();
  }
  else {
    FUN_1072c7a84();
  }
  func_0x0001072cf410();
  return;
}



/* Entry: 1072c7a84; end: 1072c7aab;  */

void FUN_1072c7a84(void)

{
  func_0x0001072ceb2c();
  FUN_1072c7af4();
  func_0x0001072cf378();
  return;
}



/* Entry: 1072c7aac; end: 1072c7af3;  */

void FUN_1072c7aac(void)

{
  undefined8 in_stack_00000018;
  
  func_0x0001072d00ec();
  func_0x0001072ce030();
  func_0x0001072ce0b0();
  func_0x0001072ce640(in_stack_00000018);
  FUN_1072c7af4();
  func_0x0001072ce824();
  func_0x0001072ce684();
  func_0x0001072ce730();
  return;
}



/* Entry: 1072c7af4; end: 1072c7b43;  */

void FUN_1072c7af4(undefined8 *param_1)

{
  undefined1 in_ZR;
  long unaff_x21;
  undefined1 auStack_a8 [24];
  undefined8 uStack_38;
  
  func_0x0001072cebd4();
  func_0x0001072ce1e4();
  func_0x0001072cf918();
  FUN_1072c7a1c();
  func_0x0001072ce404();
  func_0x0001072ceb24();
  func_0x0001072ce0cc(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072ce724();
  func_0x0001072ce900();
  func_0x0001072ce8d4(*param_1);
  FUN_1072c7bc8(auStack_a8);
  func_0x0001072d01bc();
  if (!(bool)in_ZR) {
    func_0x0001072cea9c(unaff_x21 + 0x68,auStack_a8);
    FUN_1072c7c50();
  }
  func_0x0001072c6820(auStack_a8);
  return;
}



/* Entry: 1072c7b44; end: 1072c7b73;  */

void FUN_1072c7b44(undefined8 *param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  long unaff_x21;
  undefined1 auStack_48 [24];
  
  func_0x0001072ce8d4(*param_1,param_2,*(undefined8 *)param_1[1],param_1[2]);
  FUN_1072c7bc8(auStack_48);
  func_0x0001072d01bc();
  if (!(bool)in_ZR) {
    func_0x0001072cea9c(unaff_x21 + 0x68,auStack_48);
    FUN_1072c7c50();
  }
  func_0x0001072c6820(auStack_48);
  return;
}



/* Entry: 1072c7b74; end: 1072c7bc7;  */

void FUN_1072c7b74(void)

{
  undefined1 in_ZR;
  long unaff_x21;
  undefined1 auStack_48 [24];
  
  func_0x0001072ce8d4();
  FUN_1072c7bc8(auStack_48);
  func_0x0001072d01bc();
  if (!(bool)in_ZR) {
    func_0x0001072cea9c(unaff_x21 + 0x68,auStack_48);
    FUN_1072c7c50();
  }
  func_0x0001072c6820(auStack_48);
  return;
}



/* Entry: 1072c7bc8; end: 1072c7c4f;  */

void FUN_1072c7bc8(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  undefined1 auStack_48 [24];
  
  func_0x0001072ce650();
  FUN_1072c7d00();
  lVar1 = unaff_x22[1];
  for (lVar2 = *unaff_x22; lVar2 != lVar1; lVar2 = lVar2 + 0x20) {
    if (*(double *)(unaff_x20 + 0x20) < *(double *)(lVar2 + 0x18)) {
      func_0x0001072cea6c(auStack_48);
      FUN_1072c7c7c();
      func_0x0001072ce9c4();
      func_0x0001072c7e7c();
      func_0x0001072cf42c();
    }
  }
  return;
}



/* Entry: 1072c7c50; end: 1072c7c7b;  */

void FUN_1072c7c50(void)

{
  undefined1 in_CY;
  
  func_0x0001072ce2a8();
  FUN_1072c5cdc();
  func_0x0001072ce4d4();
  func_0x0001072ce4e8();
  if ((bool)in_CY) {
    FUN_1072c7f78();
  }
  else {
    FUN_1072c7f50();
  }
  func_0x0001072cf410();
  return;
}



/* Entry: 1072c7c7c; end: 1072c7cff;  */

void FUN_1072c7c7c(undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (*(double *)(param_2 + 0x20) < *(double *)(param_3 + 0x18)) {
    func_0x0001072ce790();
    func_0x0001072ce670();
    func_0x0001072cfe30();
    lVar1 = unaff_x22[1];
    for (lVar2 = *unaff_x22; lVar2 != lVar1; lVar2 = lVar2 + 0x18) {
      if (*(double *)(unaff_x20 + 0x20) < *(double *)(lVar2 + 0x10)) {
        func_0x0001072cea6c();
        FUN_1072c7350();
        func_0x0001072cf36c();
      }
    }
  }
  return;
}



/* Entry: 1072c7d00; end: 1072c7d4f;  */

void FUN_1072c7d00(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 auStack_48 [40];
  
  func_0x0001072ce424();
  if ((bool)in_CY && !(bool)in_ZR) {
    func_0x0001072ce8b4();
    if ((bool)in_CY) {
      FUN_1072c61e8();
      func_0x0001072ce934();
      func_0x0001072c7e20();
      func_0x0001072ce900();
      func_0x0001072ce2cc();
      func_0x0001072cee2c();
      FUN_1072c7dac();
      func_0x0001072cdfc8();
      return;
    }
    func_0x0001072ce548();
    FUN_1072c7d78();
    func_0x0001072ce9c4();
    FUN_1072c7d50();
    func_0x0001072c7e20(auStack_48);
  }
  return;
}



/* Entry: 1072c7d50; end: 1072c7d77;  */

void FUN_1072c7d50(void)

{
  func_0x0001072ce2cc();
  func_0x0001072cee2c();
  FUN_1072c7dac();
  func_0x0001072cdfc8();
  return;
}



/* Entry: 1072c7d78; end: 1072c7dab;  */

void FUN_1072c7d78(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001072ce6ac();
  if (param_2 != 0) {
    FUN_1072c61f4(param_4);
  }
  func_0x0001072ce27c(0x18);
  return;
}



/* Entry: 1072c7dac; end: 1072c7df3;  */

void FUN_1072c7dac(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1072c7df4();
  FUN_1072c62a8(auStack_50);
  return;
}



/* Entry: 1072c7df4; end: 1072c7e4b;  */

void FUN_1072c7df4(long param_1)

{
  long unaff_x19;
  
  func_0x0001072cf120();
  for (; param_1 != unaff_x19; param_1 = param_1 + 0x18) {
    func_0x000104c336c8();
  }
  return;
}



/* Entry: 1072c7e4c; end: 1072c7e53;  */

void FUN_1072c7e4c(long param_1)

{
  undefined1 in_ZR;
  
  func_0x0001072ce940(param_1,*(undefined8 *)(param_1 + 8));
  while (func_0x0001072cf020(), !(bool)in_ZR) {
    func_0x0001072cffcc();
  }
  return;
}



/* Entry: 1072c7e54; end: 1072c7eab;  */

void FUN_1072c7e54(void)

{
  undefined1 in_ZR;
  
  func_0x0001072ce940();
  while (func_0x0001072cf020(), !(bool)in_ZR) {
    func_0x0001072cffcc();
  }
  return;
}



/* Entry: 1072c7eac; end: 1072c7eaf;  */

void FUN_1072c7eac(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  uVar2 = *param_2;
  puVar1[1] = param_2[1];
  *puVar1 = uVar2;
  puVar1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined8 **)(param_1 + 8) = puVar1 + 3;
  return;
}



/* Entry: 1072c7eb0; end: 1072c7eff;  */

void FUN_1072c7eb0(void)

{
  func_0x0001072ce2e4();
  FUN_1072c7f00();
  func_0x0001072ce15c();
  FUN_1072c7d78();
  func_0x0001072ce6bc();
  func_0x0001072ce9c4();
  FUN_1072c7d50();
  func_0x0001072ceb54();
  func_0x0001072c7e20();
  return;
}



/* Entry: 1072c7f00; end: 1072c7f1f;  */

long * FUN_1072c7f00(long *param_1,long *param_2)

{
  ulong uVar1;
  undefined1 uVar2;
  long *plVar3;
  long unaff_x20;
  
  uVar2 = (long *)0xaaaaaaaaaaaaaa9 < param_2;
  if ((long *)0xaaaaaaaaaaaaaaa < param_2) {
    FUN_1072c61e8();
    func_0x0001072ce4e8();
    if ((bool)uVar2) {
      FUN_1072c7f78();
    }
    else {
      FUN_1072c7f50();
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



/* Entry: 1072c7f20; end: 1072c7f4f;  */

void FUN_1072c7f20(void)

{
  undefined1 in_CY;
  
  func_0x0001072ce4e8();
  if ((bool)in_CY) {
    FUN_1072c7f78();
  }
  else {
    FUN_1072c7f50();
  }
  func_0x0001072cf410();
  return;
}



/* Entry: 1072c7f50; end: 1072c7f77;  */

void FUN_1072c7f50(void)

{
  func_0x0001072ceb2c();
  FUN_1072c7fc0();
  func_0x0001072cf378();
  return;
}



/* Entry: 1072c7f78; end: 1072c7fbf;  */

void FUN_1072c7f78(void)

{
  undefined8 in_stack_00000018;
  
  func_0x0001072d00ec();
  func_0x0001072ce030();
  func_0x0001072ce0b0();
  func_0x0001072ce640(in_stack_00000018);
  FUN_1072c7fc0();
  func_0x0001072ce824();
  func_0x0001072ce684();
  func_0x0001072ce730();
  return;
}



/* Entry: 1072c7fc0; end: 1072c800f;  */

undefined4 * FUN_1072c7fc0(undefined4 *param_1)

{
  undefined1 in_ZR;
  undefined4 *unaff_x19;
  undefined8 uStack_38;
  
  func_0x0001072cebd4();
  func_0x0001072ce1e4();
  func_0x0001072cf918();
  FUN_1072c8010();
  func_0x0001072ce404();
  func_0x0001072ceb24();
  func_0x0001072ce0cc(uStack_38);
  if ((bool)in_ZR) {
    return unaff_x19;
  }
  ___stack_chk_fail();
  func_0x0001072ce724();
  func_0x0001072ce900();
  *param_1 = 4;
  FUN_1072c8038(param_1 + 2);
  return param_1;
}



/* Entry: 1072c8010; end: 1072c8037;  */

undefined4 * FUN_1072c8010(undefined4 *param_1)

{
  *param_1 = 4;
  FUN_1072c8038(param_1 + 2);
  return param_1;
}



/* Entry: 1072c8038; end: 1072c804f;  */

void FUN_1072c8038(void)

{
  FUN_1072c6128();
  return;
}



/* Entry: 1072c8050; end: 1072c807f;  */

void FUN_1072c8050(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x21;
  long lStack_48;
  long lStack_40;
  
  func_0x0001072ce8d4(*param_1,param_2,*(undefined8 *)param_1[1],param_1[2]);
  FUN_1072c80f0(&lStack_48);
  lVar1 = lStack_40 - lStack_48 >> 2;
  if (lVar1 != 0) {
    if (lVar1 == 1) {
      func_0x0001072cea9c(unaff_x21 + 0x68);
      FUN_1072c8150();
    }
    else {
      func_0x0001072cea9c(unaff_x21 + 0x68,&lStack_48);
      func_0x0001072c817c();
    }
  }
  func_0x0001072cf42c();
  return;
}



/* Entry: 1072c8080; end: 1072c80ef;  */

void FUN_1072c8080(void)

{
  long lVar1;
  long unaff_x21;
  long lStack_48;
  long lStack_40;
  
  func_0x0001072ce8d4();
  FUN_1072c80f0(&lStack_48);
  lVar1 = lStack_40 - lStack_48 >> 2;
  if (lVar1 != 0) {
    if (lVar1 == 1) {
      func_0x0001072cea9c(unaff_x21 + 0x68);
      FUN_1072c8150();
    }
    else {
      func_0x0001072cea9c(unaff_x21 + 0x68,&lStack_48);
      func_0x0001072c817c();
    }
  }
  func_0x0001072cf42c();
  return;
}



/* Entry: 1072c80f0; end: 1072c814f;  */

void FUN_1072c80f0(void)

{
  long lVar1;
  long lVar2;
  long *unaff_x22;
  
  func_0x0001072ce650();
  func_0x0001072cfe30();
  lVar1 = unaff_x22[1];
  for (lVar2 = *unaff_x22; lVar2 != lVar1; lVar2 = lVar2 + 0x18) {
    func_0x0001072cea6c();
    FUN_1072c7350();
    func_0x0001072cf36c();
  }
  return;
}



/* Entry: 1072c8150; end: 1072c81a7;  */

void FUN_1072c8150(void)

{
  undefined1 in_CY;
  
  func_0x0001072ce2a8();
  FUN_1072c5cdc();
  func_0x0001072ce4d4();
  func_0x0001072ce4e8();
  if ((bool)in_CY) {
    FUN_1072c8200();
  }
  else {
    FUN_1072c81d8();
  }
  func_0x0001072cf410();
  return;
}



/* Entry: 1072c81a8; end: 1072c81d7;  */

void FUN_1072c81a8(void)

{
  undefined1 in_CY;
  
  func_0x0001072ce4e8();
  if ((bool)in_CY) {
    FUN_1072c8200();
  }
  else {
    FUN_1072c81d8();
  }
  func_0x0001072cf410();
  return;
}



/* Entry: 1072c81d8; end: 1072c81ff;  */

void FUN_1072c81d8(void)

{
  func_0x0001072ceb2c();
  FUN_1072c8248();
  func_0x0001072cf378();
  return;
}



/* Entry: 1072c8200; end: 1072c8247;  */

void FUN_1072c8200(void)

{
  undefined8 in_stack_00000018;
  
  func_0x0001072d00ec();
  func_0x0001072ce030();
  func_0x0001072ce0b0();
  func_0x0001072ce640(in_stack_00000018);
  FUN_1072c8248();
  func_0x0001072ce824();
  func_0x0001072ce684();
  func_0x0001072ce730();
  return;
}



/* Entry: 1072c8248; end: 1072c828b;  */

long FUN_1072c8248(long param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar1;
  long unaff_x20;
  
  lVar1 = param_1;
  func_0x0001072ce1d0();
  func_0x0001072d0260();
  func_0x0001072cfe5c();
  func_0x0001072ceb24();
  func_0x0001072ce080();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001072ce724();
  func_0x0001072ce900();
  func_0x0001072ce4e8();
  if ((bool)in_CY) {
    FUN_1072c82e4();
  }
  else {
    FUN_1072c82bc();
    lVar1 = unaff_x20 + 0x70;
  }
  func_0x0001072cf410();
  return lVar1;
}



/* Entry: 1072c828c; end: 1072c82bb;  */

void FUN_1072c828c(void)

{
  undefined1 in_CY;
  
  func_0x0001072ce4e8();
  if ((bool)in_CY) {
    FUN_1072c82e4();
  }
  else {
    FUN_1072c82bc();
  }
  func_0x0001072cf410();
  return;
}



/* Entry: 1072c82bc; end: 1072c82e3;  */

void FUN_1072c82bc(void)

{
  func_0x0001072ceb2c();
  FUN_1072c832c();
  func_0x0001072cf378();
  return;
}



/* Entry: 1072c82e4; end: 1072c832b;  */

void FUN_1072c82e4(void)

{
  undefined8 in_stack_00000018;
  
  func_0x0001072d00ec();
  func_0x0001072ce030();
  func_0x0001072ce0b0();
  func_0x0001072ce640(in_stack_00000018);
  FUN_1072c832c();
  func_0x0001072ce824();
  func_0x0001072ce684();
  func_0x0001072ce730();
  return;
}



/* Entry: 1072c832c; end: 1072c837b;  */

undefined4 * FUN_1072c832c(undefined4 *param_1)

{
  undefined1 in_ZR;
  undefined4 *unaff_x19;
  undefined8 uStack_38;
  
  func_0x0001072cebd4();
  func_0x0001072ce1e4();
  func_0x0001072cf918();
  FUN_1072c837c();
  func_0x0001072ce404();
  func_0x0001072ceb24();
  func_0x0001072ce0cc(uStack_38);
  if ((bool)in_ZR) {
    return unaff_x19;
  }
  ___stack_chk_fail();
  func_0x0001072ce724();
  func_0x0001072ce900();
  *param_1 = 3;
  FUN_1072c83a4(param_1 + 2);
  return param_1;
}



/* Entry: 1072c837c; end: 1072c83a3;  */

undefined4 * FUN_1072c837c(undefined4 *param_1)

{
  *param_1 = 3;
  FUN_1072c83a4(param_1 + 2);
  return param_1;
}



/* Entry: 1072c83a4; end: 1072c83bb;  */

void FUN_1072c83a4(void)

{
  FUN_107297530();
  return;
}



/* Entry: 1072c83bc; end: 1072c83df;  */

void FUN_1072c83bc(undefined8 *param_1,undefined8 param_2)

{
  long extraout_x8;
  long unaff_x21;
  undefined1 auStack_48 [24];
  
  func_0x0001072ce8d4(*param_1,param_2,*(undefined8 *)param_1[1],param_1[2]);
  FUN_1072c844c(auStack_48);
  func_0x0001072d0238();
  if (extraout_x8 != 0) {
    if (extraout_x8 == 1) {
      func_0x0001072cea9c(unaff_x21 + 0x68);
      func_0x0001072c773c();
    }
    else {
      func_0x0001072cea9c(unaff_x21 + 0x68,auStack_48);
      FUN_1072c84d8();
    }
  }
  FUN_1072c6be8(auStack_48);
  return;
}



/* Entry: 1072c83e0; end: 1072c844b;  */

void FUN_1072c83e0(void)

{
  long extraout_x8;
  long unaff_x21;
  undefined1 auStack_48 [24];
  
  func_0x0001072ce8d4();
  FUN_1072c844c(auStack_48);
  func_0x0001072d0238();
  if (extraout_x8 != 0) {
    if (extraout_x8 == 1) {
      func_0x0001072cea9c(unaff_x21 + 0x68);
      func_0x0001072c773c();
    }
    else {
      func_0x0001072cea9c(unaff_x21 + 0x68,auStack_48);
      FUN_1072c84d8();
    }
  }
  FUN_1072c6be8(auStack_48);
  return;
}



/* Entry: 1072c844c; end: 1072c84d7;  */

void FUN_1072c844c(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  undefined1 auStack_48 [24];
  
  func_0x0001072ce650();
  FUN_1072c8504();
  lVar1 = unaff_x22[1];
  for (lVar2 = *unaff_x22; lVar2 != lVar1; lVar2 = lVar2 + 0x30) {
    if (*(double *)(unaff_x20 + 0x18) < *(double *)(lVar2 + 0x18)) {
      func_0x0001072cea6c(auStack_48);
      FUN_1072c75c4();
      func_0x0001072ce9c4();
      func_0x0001072c8680();
      func_0x0001072cf42c();
    }
  }
  return;
}



/* Entry: 1072c84d8; end: 1072c8503;  */

void FUN_1072c84d8(void)

{
  undefined1 in_CY;
  
  func_0x0001072ce2a8();
  FUN_1072c5cdc();
  func_0x0001072ce4d4();
  func_0x0001072ce4e8();
  if ((bool)in_CY) {
    FUN_1072c877c();
  }
  else {
    FUN_1072c8754();
  }
  func_0x0001072cf410();
  return;
}



/* Entry: 1072c8504; end: 1072c8553;  */

void FUN_1072c8504(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 auStack_48 [40];
  
  func_0x0001072ce424();
  if ((bool)in_CY && !(bool)in_ZR) {
    func_0x0001072ce8b4();
    if ((bool)in_CY) {
      FUN_1072c647c();
      func_0x0001072ce934();
      func_0x0001072c8624();
      func_0x0001072ce900();
      func_0x0001072ce2cc();
      func_0x0001072cee2c();
      FUN_1072c85b0();
      func_0x0001072cdfc8();
      return;
    }
    func_0x0001072ce548();
    FUN_1072c857c();
    func_0x0001072ce9c4();
    FUN_1072c8554();
    func_0x0001072c8624(auStack_48);
  }
  return;
}



/* Entry: 1072c8554; end: 1072c857b;  */

void FUN_1072c8554(void)

{
  func_0x0001072ce2cc();
  func_0x0001072cee2c();
  FUN_1072c85b0();
  func_0x0001072cdfc8();
  return;
}



/* Entry: 1072c857c; end: 1072c85af;  */

void FUN_1072c857c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001072ce6ac();
  if (param_2 != 0) {
    FUN_1072c6488(param_4);
  }
  func_0x0001072ce27c(0x18);
  return;
}



/* Entry: 1072c85b0; end: 1072c85f7;  */

void FUN_1072c85b0(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1072c85f8();
  FUN_1072c653c(auStack_50);
  return;
}



/* Entry: 1072c85f8; end: 1072c864f;  */

void FUN_1072c85f8(long param_1)

{
  long unaff_x19;
  
  func_0x0001072cf120();
  for (; param_1 != unaff_x19; param_1 = param_1 + 0x18) {
    func_0x000104c336c8();
  }
  return;
}



/* Entry: 1072c8650; end: 1072c8657;  */

void FUN_1072c8650(long param_1)

{
  undefined1 in_ZR;
  
  func_0x0001072ce940(param_1,*(undefined8 *)(param_1 + 8));
  while (func_0x0001072cf020(), !(bool)in_ZR) {
    func_0x0001072cffcc();
  }
  return;
}



/* Entry: 1072c8658; end: 1072c86af;  */

void FUN_1072c8658(void)

{
  undefined1 in_ZR;
  
  func_0x0001072ce940();
  while (func_0x0001072cf020(), !(bool)in_ZR) {
    func_0x0001072cffcc();
  }
  return;
}



/* Entry: 1072c86b0; end: 1072c86b3;  */

void FUN_1072c86b0(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  uVar2 = *param_2;
  puVar1[1] = param_2[1];
  *puVar1 = uVar2;
  puVar1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined8 **)(param_1 + 8) = puVar1 + 3;
  return;
}



/* Entry: 1072c86b4; end: 1072c8703;  */

void FUN_1072c86b4(void)

{
  func_0x0001072ce2e4();
  FUN_1072c8704();
  func_0x0001072ce15c();
  FUN_1072c857c();
  func_0x0001072ce6bc();
  func_0x0001072ce9c4();
  FUN_1072c8554();
  func_0x0001072ceb54();
  func_0x0001072c8624();
  return;
}



/* Entry: 1072c8704; end: 1072c8723;  */

long * FUN_1072c8704(long *param_1,long *param_2)

{
  ulong uVar1;
  undefined1 uVar2;
  long *plVar3;
  long unaff_x20;
  
  uVar2 = (long *)0xaaaaaaaaaaaaaa9 < param_2;
  if ((long *)0xaaaaaaaaaaaaaaa < param_2) {
    FUN_1072c647c();
    func_0x0001072ce4e8();
    if ((bool)uVar2) {
      FUN_1072c877c();
    }
    else {
      FUN_1072c8754();
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



/* Entry: 1072c8724; end: 1072c8753;  */

void FUN_1072c8724(void)

{
  undefined1 in_CY;
  
  func_0x0001072ce4e8();
  if ((bool)in_CY) {
    FUN_1072c877c();
  }
  else {
    FUN_1072c8754();
  }
  func_0x0001072cf410();
  return;
}



/* Entry: 1072c8754; end: 1072c877b;  */

void FUN_1072c8754(void)

{
  func_0x0001072ceb2c();
  FUN_1072c87c4();
  func_0x0001072cf378();
  return;
}



/* Entry: 1072c877c; end: 1072c87c3;  */

void FUN_1072c877c(void)

{
  undefined8 in_stack_00000018;
  
  func_0x0001072d00ec();
  func_0x0001072ce030();
  func_0x0001072ce0b0();
  func_0x0001072ce640(in_stack_00000018);
  FUN_1072c87c4();
  func_0x0001072ce824();
  func_0x0001072ce684();
  func_0x0001072ce730();
  return;
}



/* Entry: 1072c87c4; end: 1072c8813;  */

undefined4 * FUN_1072c87c4(undefined4 *param_1)

{
  undefined1 in_ZR;
  undefined4 *unaff_x19;
  undefined8 uStack_38;
  
  func_0x0001072cebd4();
  func_0x0001072ce1e4();
  func_0x0001072cf918();
  FUN_1072c8814();
  func_0x0001072ce404();
  func_0x0001072ceb24();
  func_0x0001072ce0cc(uStack_38);
  if ((bool)in_ZR) {
    return unaff_x19;
  }
  ___stack_chk_fail();
  func_0x0001072ce724();
  func_0x0001072ce900();
  *param_1 = 2;
  FUN_1072c883c(param_1 + 2);
  return param_1;
}



/* Entry: 1072c8814; end: 1072c883b;  */

undefined4 * FUN_1072c8814(undefined4 *param_1)

{
  *param_1 = 2;
  FUN_1072c883c(param_1 + 2);
  return param_1;
}



/* Entry: 1072c883c; end: 1072c8853;  */

void FUN_1072c883c(void)

{
  FUN_1072c63bc();
  return;
}



/* Entry: 1072c8854; end: 1072c885f;  */

void FUN_1072c8854(undefined8 *param_1,undefined8 param_2)

{
  long extraout_x8;
  long unaff_x21;
  undefined1 auStack_48 [24];
  
  func_0x0001072ce8d4(*param_1,param_2,*(undefined8 *)param_1[1],param_1[2]);
  FUN_1072c88cc(auStack_48);
  func_0x0001072d0238();
  if (extraout_x8 != 0) {
    if (extraout_x8 == 1) {
      func_0x0001072cea9c(unaff_x21 + 0x68);
      FUN_1072c7c50();
    }
    else {
      func_0x0001072cea9c(unaff_x21 + 0x68,auStack_48);
      FUN_1072c8954();
    }
  }
  FUN_1072c6c1c(auStack_48);
  return;
}



/* Entry: 1072c8860; end: 1072c88cb;  */

void FUN_1072c8860(void)

{
  long extraout_x8;
  long unaff_x21;
  undefined1 auStack_48 [24];
  
  func_0x0001072ce8d4();
  FUN_1072c88cc(auStack_48);
  func_0x0001072d0238();
  if (extraout_x8 != 0) {
    if (extraout_x8 == 1) {
      func_0x0001072cea9c(unaff_x21 + 0x68);
      FUN_1072c7c50();
    }
    else {
      func_0x0001072cea9c(unaff_x21 + 0x68,auStack_48);
      FUN_1072c8954();
    }
  }
  FUN_1072c6c1c(auStack_48);
  return;
}



/* Entry: 1072c88cc; end: 1072c8953;  */

void FUN_1072c88cc(void)

{
  long lVar1;
  undefined1 uVar2;
  long lVar3;
  long *unaff_x22;
  undefined1 auStack_48 [24];
  
  func_0x0001072ce650();
  FUN_1072c8980();
  lVar1 = unaff_x22[1];
  for (lVar3 = *unaff_x22; uVar2 = lVar3 == lVar1, !(bool)uVar2; lVar3 = lVar3 + 0x18) {
    func_0x0001072cea6c(auStack_48);
    FUN_1072c7bc8();
    func_0x0001072d01bc();
    if (!(bool)uVar2) {
      func_0x0001072ce9c4();
      func_0x0001072c8b04();
    }
    func_0x0001072c6820(auStack_48);
  }
  return;
}



/* Entry: 1072c8954; end: 1072c897f;  */

void FUN_1072c8954(void)

{
  undefined1 in_CY;
  
  func_0x0001072ce2a8();
  FUN_1072c5cdc();
  func_0x0001072ce4d4();
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



/* Entry: 1072c8980; end: 1072c89cf;  */

void FUN_1072c8980(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 auStack_48 [40];
  
  func_0x0001072ce424();
  if ((bool)in_CY && !(bool)in_ZR) {
    func_0x0001072ce8b4();
    if ((bool)in_CY) {
      FUN_1072c66f8();
      func_0x0001072ce934();
      func_0x0001072c8aa0();
      func_0x0001072ce900();
      func_0x0001072ce2cc();
      func_0x0001072cee2c();
      FUN_1072c8a2c();
      func_0x0001072cdfc8();
      return;
    }
    func_0x0001072ce548();
    FUN_1072c89f8();
    func_0x0001072ce9c4();
    FUN_1072c89d0();
    func_0x0001072c8aa0(auStack_48);
  }
  return;
}



/* Entry: 1072c89d0; end: 1072c89f7;  */

void FUN_1072c89d0(void)

{
  func_0x0001072ce2cc();
  func_0x0001072cee2c();
  FUN_1072c8a2c();
  func_0x0001072cdfc8();
  return;
}


