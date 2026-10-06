/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b502564; end: 10b502567;  */

long FUN_10b502564(long param_1)

{
  func_0x00010b504218();
  FUN_10b502a4c(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b502568; end: 10b50257b;  */

void FUN_10b502568(void)

{
  FUN_10b502538();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b50257c; end: 10b502587;  */

undefined ** FUN_10b50257c(void)

{
  return &PTR_DAT_110cf6be0;
}



/* Entry: 10b502588; end: 10b50260f;  */

long * FUN_10b502588(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int iVar3;
  int unaff_w22;
  int iVar4;
  
  func_0x00010b504084();
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    func_0x00010b50402c();
    unaff_w21 = *(int *)(unaff_x20 + 0x30);
    func_0x00010b504368();
    func_0x00010b5040c8();
    param_4 = param_1;
  }
  func_0x00010b5045c0();
  while (unaff_w22 != unaff_w21) {
    func_0x00010b503fa4();
    func_0x00010b504100();
    func_0x00010b504330();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00010b504254();
  if ((long)param_3 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
      iVar3 = (int)param_3;
      uVar1 = iVar3 - iVar4;
      param_3 = (ulong)uVar1;
      if (uVar1 == 0 || iVar3 < iVar4) break;
      func_0x00010b4d5738();
      param_4 = unaff_x19;
      func_0x000107c303e4();
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4,lVar2,param_3 & 0xffffffff);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 10b502610; end: 10b50266f;  */

void FUN_10b502610(void)

{
  long unaff_x19;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  func_0x00010b503f38();
  while (unaff_x22 != 0) {
    func_0x00010b4fd770(*unaff_x21);
    func_0x00010b5043fc();
    unaff_x21 = unaff_x21 + 1;
  }
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    func_0x00010b50404c((long)*(int *)(unaff_x19 + 0x30));
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b504268();
  }
  func_0x00010b504324();
  return;
}



/* Entry: 10b502670; end: 10b502673;  */

void FUN_10b502670(ulong *param_1,long param_2)

{
  ulong extraout_x8;
  long unaff_x19;
  
  func_0x00010b50433c();
  func_0x00010b4fd7cc();
  if ((*(uint *)(param_2 + 0x10) & 1) != 0) {
    *(undefined4 *)(unaff_x19 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  }
  func_0x00010b504780();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b504170();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b502674; end: 10b50269b;  */

undefined8 FUN_10b502674(undefined8 param_1)

{
  func_0x00010b504218();
  func_0x00010b504508();
  return param_1;
}



/* Entry: 10b50269c; end: 10b50269f;  */

undefined8 FUN_10b50269c(undefined8 param_1)

{
  func_0x00010b504218();
  func_0x00010b504508();
  return param_1;
}



/* Entry: 10b5026a0; end: 10b5026b3;  */

void FUN_10b5026a0(void)

{
  FUN_10b502674();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5026b4; end: 10b5026bf;  */

undefined ** FUN_10b5026b4(void)

{
  return &PTR_DAT_110cf6c30;
}



/* Entry: 10b5026c0; end: 10b5026f3;  */

void FUN_10b5026c0(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x00010b5045a0();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b504424();
  }
  func_0x00010b5045e0();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < *(char *)((long)unaff_x19 + 0x17)) {
    *(undefined1 *)unaff_x19 = 0;
    *(undefined1 *)((long)unaff_x19 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*unaff_x19 = 0;
  unaff_x19[1] = 0;
  return;
}



/* Entry: 10b5026f4; end: 10b502763;  */

long * FUN_10b5026f4(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  int iVar3;
  int iVar4;
  
  func_0x00010b503fd4();
  if ((unaff_w21 >> 1 & 1) != 0) {
    func_0x00010b50442c();
    func_0x000107c282e4();
    param_4 = param_1;
  }
  if ((unaff_w21 & 1) != 0) {
    func_0x00010b5042f8(*(undefined8 *)(unaff_x20 + 0x18));
    func_0x00010b504694();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b504254();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        uVar1 = iVar3 - iVar4;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar3 < iVar4) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 10b502764; end: 10b5027e3;  */

void FUN_10b502764(int param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  long lVar1;
  long extraout_x9;
  long unaff_x19;
  uint unaff_w20;
  
  func_0x00010b5041a4();
  if ((bool)in_ZR) {
    param_1 = 0;
  }
  else {
    if ((unaff_w20 & 1) == 0) {
      param_1 = 0;
    }
    else {
      func_0x00010b50444c(*(undefined8 *)(unaff_x19 + 0x18));
      param_1 = param_1 + 1;
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      param_1 = ((int)LZCOUNT((long)*(int *)(unaff_x19 + 0x20)) * -9 + 0x2c0U >> 6) + param_1;
    }
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b504268();
    lVar1 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    param_1 = (int)lVar1 + param_1;
  }
  *(int *)(unaff_x19 + 0x14) = param_1;
  return;
}



/* Entry: 10b5027e4; end: 10b5027e7;  */

void FUN_10b5027e4(ulong *param_1,undefined8 param_2,ulong param_3)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  uint unaff_w21;
  
  func_0x00010b5041cc();
  if (!(bool)in_ZR) {
    if ((unaff_w21 & 1) != 0) {
      func_0x00010b50406c();
      if ((param_3 & 1) != 0) {
        func_0x00010b504304();
      }
      func_0x00010b504198();
    }
    if ((unaff_w21 >> 1 & 1) != 0) {
      func_0x00010b504754();
    }
  }
  func_0x00010b504130();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b504170();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b5027e8; end: 10b502837;  */

void FUN_10b5027e8(ulong *param_1,undefined8 param_2,ulong param_3)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  uint unaff_w21;
  
  func_0x00010b5041cc();
  if (!(bool)in_ZR) {
    if ((unaff_w21 & 1) != 0) {
      func_0x00010b50406c();
      if ((param_3 & 1) != 0) {
        func_0x00010b504304();
      }
      func_0x00010b504198();
    }
    if ((unaff_w21 >> 1 & 1) != 0) {
      func_0x00010b504754();
    }
  }
  func_0x00010b504130();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b504170();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b502838; end: 10b50286b;  */

void FUN_10b502838(long param_1,long param_2,ulong param_3)

{
  undefined1 uVar1;
  ulong extraout_x8;
  ulong *unaff_x20;
  uint unaff_w21;
  
  uVar1 = param_2 == param_1;
  if ((bool)uVar1) {
    return;
  }
  func_0x00010b5043d0();
  FUN_10b5026c0();
  func_0x00010b5041cc();
  if (!(bool)uVar1) {
    if ((unaff_w21 & 1) != 0) {
      func_0x00010b50406c();
      if ((param_3 & 1) != 0) {
        func_0x00010b504304();
      }
      func_0x00010b504198();
    }
    if ((unaff_w21 >> 1 & 1) != 0) {
      func_0x00010b504754();
    }
  }
  func_0x00010b504130();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b504170();
    if ((*unaff_x20 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b50286c; end: 10b50299b;  */

void FUN_10b50286c(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  func_0x00010b504630();
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_2 + 0x20) = uVar1;
  return;
}



/* Entry: 10b50299c; end: 10b5029bb;  */

void FUN_10b50299c(void)

{
  func_0x00010b5042c8();
  FUN_10b4fcd34();
  return;
}



/* Entry: 10b5029bc; end: 10b5029e3;  */

void FUN_10b5029bc(void)

{
  long extraout_x8;
  
  func_0x00010b504510();
  if (extraout_x8 != 0) {
    func_0x00010b504454();
  }
  return;
}



/* Entry: 10b5029e4; end: 10b502a23;  */

void FUN_10b5029e4(void)

{
  func_0x00010b5042c8();
  FUN_10b4fd7b8();
  return;
}



/* Entry: 10b502a24; end: 10b502a4b;  */

void FUN_10b502a24(void)

{
  long extraout_x8;
  
  func_0x00010b504510();
  if (extraout_x8 != 0) {
    func_0x00010b504454();
  }
  return;
}



/* Entry: 10b502a4c; end: 10b502a73;  */

void FUN_10b502a4c(void)

{
  long extraout_x8;
  
  func_0x00010b504510();
  if (extraout_x8 != 0) {
    func_0x00010b504454();
  }
  return;
}



/* Entry: 10b502a74; end: 10b502ae3;  */

long FUN_10b502a74(long param_1)

{
  FUN_10b502a24(param_1 + 0x60);
  FUN_10b502a4c(param_1 + 0x48);
  func_0x000107c282dc(param_1 + 0x38);
  FUN_10b502a24(param_1 + 0x20);
  FUN_10b502a24(param_1 + 8);
  return param_1;
}



/* Entry: 10b502ae4; end: 10b502b0b;  */

void FUN_10b502ae4(void)

{
  long extraout_x8;
  
  func_0x00010b504510();
  if (extraout_x8 != 0) {
    func_0x00010b504454();
  }
  return;
}



/* Entry: 10b502b0c; end: 10b502b33;  */

void FUN_10b502b0c(void)

{
  long extraout_x8;
  
  func_0x00010b504510();
  if (extraout_x8 != 0) {
    func_0x00010b504454();
  }
  return;
}



/* Entry: 10b502b34; end: 10b502b53;  */

void FUN_10b502b34(void)

{
  func_0x00010b5042c8();
  FUN_10b501770();
  return;
}



/* Entry: 10b502b54; end: 10b502b7b;  */

void FUN_10b502b54(void)

{
  long extraout_x8;
  
  func_0x00010b504510();
  if (extraout_x8 != 0) {
    func_0x00010b504454();
  }
  return;
}



/* Entry: 10b502b7c; end: 10b502ba3;  */

void FUN_10b502b7c(void)

{
  long extraout_x8;
  
  func_0x00010b504510();
  if (extraout_x8 != 0) {
    func_0x00010b504454();
  }
  return;
}



/* Entry: 10b502ba4; end: 10b50302b;  */

void FUN_10b502ba4(long param_1)

{
  undefined8 extraout_x8;
  
  if (param_1 == 0) {
    func_0x00010b5042e8();
  }
  else {
    func_0x00010b504144();
  }
  func_0x00010b5042a0(&PTR_FUN_110cf58d8);
  *(undefined8 *)(param_1 + 0x18) = extraout_x8;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 10b50302c; end: 10b50307b;  */

void FUN_10b50302c(ulong *param_1)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  
  if ((int)param_1[1] < 1) {
    return;
  }
  lVar4 = 0;
  uVar3 = param_1[1];
  puVar2 = param_1;
  if ((*param_1 & 1) != 0) {
    puVar2 = (ulong *)(*param_1 + 7);
  }
  do {
    lVar1 = lVar4 + 1;
    (**(code **)(*(long *)puVar2[lVar4] + 0x18))();
    lVar4 = lVar1;
  } while (lVar1 < (int)uVar3);
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 10b50307c; end: 10b5031fb;  */

undefined8 * FUN_10b50307c(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 *unaff_x21;
  
  func_0x00010b504318();
  if (param_1 == 0) {
    puVar2 = (undefined8 *)0xd0;
    __Znwm();
  }
  else {
    puVar2 = unaff_x21;
    FUN_10b4d80e0();
  }
  puVar2[1] = unaff_x21;
  *puVar2 = &PTR_FUN_110cf61e8;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b504094();
  }
  func_0x00010b50437c();
  FUN_10b5029e4();
  func_0x00010b5044a4(puVar2 + 6);
  func_0x000107c282d4(puVar2 + 9);
  func_0x00010b502a04(puVar2 + 0xb);
  func_0x00010b5044a4(puVar2 + 0xe);
  lVar3 = unaff_x20 + 0x88;
  func_0x00010b504444();
  puVar2[0x11] = lVar3;
  lVar3 = unaff_x20 + 0x90;
  func_0x00010b504444();
  puVar2[0x12] = lVar3;
  lVar3 = unaff_x20 + 0x98;
  func_0x00010b504444();
  puVar2[0x13] = lVar3;
  lVar3 = unaff_x20 + 0xa0;
  func_0x00010b504444();
  puVar2[0x14] = lVar3;
  uVar1 = *(uint *)(puVar2 + 2);
  if ((uVar1 >> 4 & 1) == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = unaff_x21;
    func_0x00010b5031fc();
  }
  puVar2[0x15] = puVar4;
  if ((uVar1 >> 5 & 1) == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = unaff_x21;
    func_0x00010b503280();
  }
  puVar2[0x16] = puVar4;
  if ((uVar1 >> 6 & 1) == 0) {
    unaff_x21 = (undefined8 *)0x0;
  }
  else {
    func_0x00010b503344();
  }
  puVar2[0x17] = unaff_x21;
  uVar5 = *(undefined8 *)(unaff_x20 + 0xc0);
  *(undefined4 *)((long)puVar2 + 199) = *(undefined4 *)(unaff_x20 + 199);
  puVar2[0x18] = uVar5;
  return puVar2;
}



/* Entry: 10b5031fc; end: 10b503393;  */

void FUN_10b5031fc(long param_1)

{
  long lVar1;
  ulong extraout_x8;
  undefined8 uVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 uVar3;
  
  func_0x00010b5043d0();
  if (param_1 == 0) {
    unaff_x20 = 0x48;
    __Znwm();
  }
  else {
    FUN_10b4d80e0();
  }
  func_0x00010b504468();
  func_0x00010b50445c(&PTR_FUN_110cf5c48);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b504094();
  }
  func_0x00010b5040d4();
  *(undefined8 *)(unaff_x21 + 0x18) = unaff_x20;
  lVar1 = unaff_x19 + 0x20;
  func_0x00010b5043f4();
  *(long *)(unaff_x21 + 0x20) = lVar1;
  lVar1 = unaff_x19 + 0x28;
  func_0x00010b5043f4();
  *(long *)(unaff_x21 + 0x28) = lVar1;
  uVar2 = *(undefined8 *)(unaff_x19 + 0x40);
  uVar3 = *(undefined8 *)(unaff_x19 + 0x30);
  *(undefined8 *)(unaff_x21 + 0x38) = *(undefined8 *)(unaff_x19 + 0x38);
  *(undefined8 *)(unaff_x21 + 0x30) = uVar3;
  *(undefined8 *)(unaff_x21 + 0x40) = uVar2;
  return;
}



/* Entry: 10b503394; end: 10b5033ef;  */

undefined8 * FUN_10b503394(undefined8 *param_1)

{
  undefined8 *unaff_x21;
  
  func_0x00010b504560();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b504414();
  }
  else {
    param_1 = unaff_x21;
    func_0x00010b50441c();
  }
  *param_1 = &PTR_FUN_110cf5978;
  param_1[1] = unaff_x21;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_10b4fde18();
  return param_1;
}



/* Entry: 10b5033f0; end: 10b5034fb;  */

undefined8 * FUN_10b5033f0(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  puVar2 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b504474();
  }
  else {
    func_0x00010b50447c();
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR_FUN_110cf5e78;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b504094();
  }
  *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((long)puVar2 + 0x14) = 0;
  FUN_10b502b34(puVar2 + 3,param_1,param_2 + 0x18);
  lVar3 = param_2 + 0x30;
  func_0x00010b5043f4();
  puVar2[6] = lVar3;
  uVar1 = *(uint *)(puVar2 + 2);
  if ((uVar1 >> 1 & 1) == 0) {
    lVar3 = 0;
  }
  else {
    func_0x00010b504660();
  }
  puVar2[7] = lVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    lVar3 = 0;
  }
  else {
    func_0x00010b504660();
  }
  puVar2[8] = lVar3;
  if ((uVar1 >> 3 & 1) == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = param_1;
    func_0x00010b503344(param_1,*(undefined8 *)(param_2 + 0x48));
  }
  puVar2[9] = puVar4;
  if ((uVar1 >> 4 & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    FUN_10b503ab8(param_1,*(undefined8 *)(param_2 + 0x50));
  }
  puVar2[10] = param_1;
  if ((uVar1 >> 5 & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    func_0x00010b504660();
  }
  puVar2[0xb] = param_1;
  return puVar2;
}



/* Entry: 10b5034fc; end: 10b50359f;  */

void FUN_10b5034fc(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b5043d0();
  if (param_1 == 0) {
    func_0x00010b50467c();
  }
  else {
    param_1 = unaff_x20;
    func_0x00010b504684();
  }
  func_0x00010b504468();
  func_0x00010b50445c(&PTR_FUN_110cf5dd8);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b504094();
  }
  func_0x00010b5040d4();
  *(long *)(unaff_x21 + 0x18) = param_1;
  lVar2 = unaff_x19 + 0x20;
  func_0x00010b5043f4();
  *(long *)(unaff_x21 + 0x20) = lVar2;
  uVar1 = *(uint *)(unaff_x21 + 0x10);
  if ((uVar1 >> 2 & 1) == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = unaff_x20;
    func_0x00010b5037c0();
  }
  *(long *)(unaff_x21 + 0x28) = lVar2;
  if ((uVar1 >> 3 & 1) == 0) {
    unaff_x20 = 0;
  }
  else {
    func_0x00010b50381c();
  }
  *(long *)(unaff_x21 + 0x30) = unaff_x20;
  *(undefined1 *)(unaff_x21 + 0x38) = *(undefined1 *)(unaff_x19 + 0x38);
  return;
}



/* Entry: 10b5035a0; end: 10b503737;  */

undefined8 * FUN_10b5035a0(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uVar5;
  undefined8 uVar6;
  
  func_0x00010b504318();
  if (param_1 == 0) {
    puVar2 = (undefined8 *)0xc0;
    __Znwm();
  }
  else {
    puVar2 = unaff_x21;
    FUN_10b4d80e0();
  }
  puVar2[1] = unaff_x21;
  *puVar2 = &PTR_FUN_110cf6198;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b504094();
  }
  func_0x00010b50437c();
  FUN_10b5029e4();
  func_0x00010b5044a4(puVar2 + 6);
  func_0x00010b5044a4(puVar2 + 9);
  lVar3 = unaff_x20 + 0x60;
  func_0x00010b504444();
  puVar2[0xc] = lVar3;
  lVar3 = unaff_x20 + 0x68;
  func_0x00010b504444();
  puVar2[0xd] = lVar3;
  uVar1 = *(uint *)(puVar2 + 2);
  if ((uVar1 >> 2 & 1) == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = unaff_x21;
    func_0x00010b5037c0();
  }
  puVar2[0xe] = puVar4;
  if ((uVar1 >> 3 & 1) == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = unaff_x21;
    func_0x00010b503280();
  }
  puVar2[0xf] = puVar4;
  if ((uVar1 >> 4 & 1) == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = unaff_x21;
    func_0x00010b503344();
  }
  puVar2[0x10] = puVar4;
  if ((uVar1 >> 5 & 1) == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = unaff_x21;
    FUN_10b5038e8();
  }
  puVar2[0x11] = puVar4;
  if ((uVar1 >> 6 & 1) == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = unaff_x21;
    FUN_10b5039bc();
  }
  puVar2[0x12] = puVar4;
  if ((uVar1 >> 7 & 1) == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = unaff_x21;
    FUN_10b503394();
  }
  puVar2[0x13] = puVar4;
  if ((uVar1 >> 8 & 1) == 0) {
    unaff_x21 = (undefined8 *)0x0;
  }
  else {
    FUN_10b503ab8();
  }
  puVar2[0x14] = unaff_x21;
  uVar6 = *(undefined8 *)(unaff_x20 + 0xb0);
  uVar5 = *(undefined8 *)(unaff_x20 + 0xa8);
  *(undefined4 *)(puVar2 + 0x17) = *(undefined4 *)(unaff_x20 + 0xb8);
  puVar2[0x16] = uVar6;
  puVar2[0x15] = uVar5;
  return puVar2;
}



/* Entry: 10b503738; end: 10b5038e7;  */

undefined8 * FUN_10b503738(undefined8 *param_1,long param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  int extraout_w8;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b504414();
  }
  else {
    func_0x00010b50441c();
  }
  puVar2 = puVar1 + 1;
  *puVar2 = param_1;
  *puVar1 = &PTR_DAT_110cf5f18;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b504094();
  }
  func_0x00010b504720();
  if ((bool)in_ZR) {
    func_0x00010b503894(param_1,*(undefined8 *)(param_2 + 0x10));
  }
  else {
    if ((extraout_w8 != 2) && (extraout_w8 != 1)) {
      return puVar1;
    }
    func_0x00010b5046d0();
    param_1 = puVar2;
  }
  puVar1[2] = param_1;
  return puVar1;
}



/* Entry: 10b5038e8; end: 10b5039bb;  */

undefined8 * FUN_10b5038e8(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long unaff_x19;
  undefined8 *unaff_x21;
  
  func_0x00010b504560();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b504474();
  }
  else {
    param_1 = unaff_x21;
    func_0x00010b50447c();
  }
  param_1[1] = unaff_x21;
  *param_1 = &PTR_FUN_110cf6058;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b504094();
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(unaff_x19 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  FUN_10b502b34(param_1 + 3);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = unaff_x21;
  FUN_10b502524(param_1 + 6,unaff_x19 + 0x30);
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = unaff_x21;
    FUN_10b503e84();
  }
  param_1[9] = puVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    unaff_x21 = (undefined8 *)0x0;
  }
  else {
    func_0x00010b503df4();
  }
  param_1[10] = unaff_x21;
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(unaff_x19 + 0x58);
  return param_1;
}



/* Entry: 10b5039bc; end: 10b503ab7;  */

undefined8 * FUN_10b5039bc(undefined8 *param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long unaff_x19;
  undefined8 *unaff_x21;
  
  func_0x00010b504560();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b504474();
  }
  else {
    param_1 = unaff_x21;
    func_0x00010b50447c();
  }
  param_1[1] = unaff_x21;
  *param_1 = &PTR_FUN_110cf5ec8;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b504094();
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(unaff_x19 + 0x10);
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  param_1[5] = unaff_x21;
  FUN_10b501e80(param_1 + 3,unaff_x19 + 0x18);
  lVar2 = unaff_x19 + 0x30;
  func_0x00010b504444();
  param_1[6] = lVar2;
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 >> 1 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = unaff_x21;
    func_0x00010b50381c();
  }
  param_1[7] = puVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = unaff_x21;
    func_0x00010b50381c();
  }
  param_1[8] = puVar3;
  if ((uVar1 >> 3 & 1) == 0) {
    unaff_x21 = (undefined8 *)0x0;
  }
  else {
    func_0x00010b503df4();
  }
  param_1[9] = unaff_x21;
  uVar4 = *(undefined8 *)(unaff_x19 + 0x50);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(unaff_x19 + 0x58);
  param_1[10] = uVar4;
  return param_1;
}



/* Entry: 10b503ab8; end: 10b503b93;  */

void FUN_10b503ab8(long param_1)

{
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x21;
  
  func_0x00010b5043d0();
  if (param_1 == 0) {
    func_0x00010b5046dc();
  }
  else {
    func_0x00010b504654();
  }
  func_0x00010b504468();
  func_0x00010b50445c(&PTR_FUN_110cf5c98);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b504094();
  }
  *(undefined4 *)(unaff_x21 + 0x10) = *(undefined4 *)(unaff_x19 + 0x10);
  *(undefined4 *)(unaff_x21 + 0x14) = 0;
  func_0x00010b502a04(unaff_x21 + 0x18);
  *(undefined4 *)(unaff_x21 + 0x30) = *(undefined4 *)(unaff_x19 + 0x30);
  return;
}



/* Entry: 10b503b94; end: 10b503bef;  */

undefined8 * FUN_10b503b94(undefined8 *param_1)

{
  undefined8 *unaff_x21;
  
  func_0x00010b504560();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b504414();
  }
  else {
    param_1 = unaff_x21;
    func_0x00010b50441c();
  }
  *param_1 = &PTR_FUN_110cf5bf8;
  param_1[1] = unaff_x21;
  param_1[2] = 0;
  param_1[3] = 0;
  func_0x00010b4fc778();
  return param_1;
}



/* Entry: 10b503bf0; end: 10b503d43;  */

void FUN_10b503bf0(long param_1)

{
  ulong extraout_x8;
  long unaff_x21;
  
  func_0x00010b5043d0();
  if (param_1 == 0) {
    func_0x00010b50468c();
  }
  else {
    func_0x00010b504670();
  }
  func_0x00010b504468();
  func_0x00010b50445c(&PTR_FUN_110cf5fb8);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b504094();
  }
  func_0x00010b504740();
  FUN_10b500e70();
  *(undefined4 *)(unaff_x21 + 0x28) = 0;
  return;
}



/* Entry: 10b503d44; end: 10b503da3;  */

undefined8 * FUN_10b503d44(undefined8 *param_1)

{
  undefined8 *unaff_x21;
  
  func_0x00010b504560();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b504414();
  }
  else {
    param_1 = unaff_x21;
    func_0x00010b50441c();
  }
  *param_1 = &PTR_FUN_110cf5a68;
  param_1[1] = unaff_x21;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  FUN_10b501364();
  return param_1;
}



/* Entry: 10b503da4; end: 10b503e83;  */

void FUN_10b503da4(long param_1)

{
  ulong extraout_x8;
  
  func_0x00010b5043d0();
  if (param_1 == 0) {
    func_0x00010b5042e8();
  }
  else {
    func_0x00010b5042f0();
  }
  func_0x00010b504468();
  func_0x00010b50445c(&PTR_FUN_110cf5a18);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b504094();
  }
  func_0x00010b5040d4();
  func_0x00010b50476c();
  return;
}



/* Entry: 10b503e84; end: 10b503ee3;  */

undefined8 * FUN_10b503e84(undefined8 *param_1)

{
  undefined8 *unaff_x21;
  
  func_0x00010b504560();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5042e8();
  }
  else {
    param_1 = unaff_x21;
    func_0x00010b5042f0();
  }
  *param_1 = &PTR_FUN_110cf5928;
  param_1[1] = unaff_x21;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  FUN_10b502098();
  return param_1;
}



/* Entry: 10b503ee4; end: 10b5047f7;  */

long FUN_10b503ee4(long param_1)

{
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 10b5047f8; end: 10b50481f;  */

long FUN_10b5047f8(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b504820; end: 10b504867;  */

undefined8 * FUN_10b504820(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110cf6f90;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  func_0x00010b5047b8(param_1,param_3);
  return param_1;
}



/* Entry: 10b504868; end: 10b50486b;  */

long FUN_10b504868(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b50486c; end: 10b50487f;  */

void FUN_10b50486c(void)

{
  FUN_10b5047f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b504880; end: 10b5048a3;  */

undefined ** FUN_10b504880(void)

{
  return &PTR_DAT_110cf6fd0;
}



/* Entry: 10b5048a4; end: 10b50493f;  */

long * FUN_10b5048a4(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  plVar1 = param_2;
  if (*(int *)(param_1 + 0x10) != 0) {
    plVar1 = param_3;
    func_0x000107c282e4(param_3,*(int *)(param_1 + 0x10),param_2);
  }
  plVar2 = plVar1;
  if (*(int *)(param_1 + 0x14) != 0) {
    plVar2 = param_3;
    func_0x00010598f43c(param_3,*(int *)(param_1 + 0x14),plVar1);
  }
  plVar1 = plVar2;
  if (*(int *)(param_1 + 0x18) != 0) {
    plVar1 = param_3;
    func_0x000107c282ac(param_3,*(int *)(param_1 + 0x18),plVar2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar3 = *(long *)(uVar5 + 8);
      uVar4 = *(ulong *)(uVar5 + 0x10);
    }
    else {
      lVar3 = uVar5 + 8;
    }
    if (*param_3 - (long)plVar1 < (long)(int)uVar4) {
      while( true ) {
        iVar7 = ((int)*param_3 - (int)plVar1) + 0x10;
        iVar6 = (int)uVar4;
        uVar4 = (ulong)(uint)(iVar6 - iVar7);
        if (iVar6 - iVar7 == 0 || iVar6 < iVar7) break;
        func_0x00010b4d5738();
        lVar3 = (long)plVar1 + (long)iVar7;
        plVar1 = param_3;
        func_0x000107c303e4(param_3,lVar3);
      }
      func_0x00010b4d5738();
      return (long *)((long)plVar1 + (long)iVar6);
    }
    _memcpy(plVar1,lVar3,uVar4 & 0xffffffff);
    return (long *)((long)plVar1 + (long)(int)uVar4);
  }
  return plVar1;
}



/* Entry: 10b504940; end: 10b5049d3;  */

ulong FUN_10b504940(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar1 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x14)) * -9 + 0x2c0U >> 6) + uVar1;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar1 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + uVar1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x1c) = (int)uVar1;
  return uVar1;
}



/* Entry: 10b5049d4; end: 10b504a17;  */

void FUN_10b5049d4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x20);
  }
  *puVar1 = &PTR_FUN_110cf6f90;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  return;
}



/* Entry: 10b504a18; end: 10b504a1f;  */

void FUN_10b504a18(void)

{
  return;
}



/* Entry: 10b504a20; end: 10b504a87;  */

undefined8 * FUN_10b504a20(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110cf7040;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  param_3 = param_3 + 0x10;
  func_0x000107c2809c(param_3,param_2);
  param_1[2] = param_3;
  *(undefined4 *)(param_1 + 3) = 0;
  return param_1;
}



/* Entry: 10b504a88; end: 10b504ab7;  */

long FUN_10b504a88(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b504ab8; end: 10b504abb;  */

long FUN_10b504ab8(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b504abc; end: 10b504acf;  */

void FUN_10b504abc(void)

{
  FUN_10b504a88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b504ad0; end: 10b504adb;  */

undefined ** FUN_10b504ad0(void)

{
  return &PTR_DAT_110cf7080;
}



/* Entry: 10b504adc; end: 10b504bfb;  */

void FUN_10b504adc(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x10);
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10b504bfc; end: 10b504bff;  */

void FUN_10b504bfc(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x10,uVar1,uVar2);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b504c00; end: 10b504c6f;  */

void FUN_10b504c00(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x10,uVar1,uVar2);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b504c70; end: 10b504c77;  */

void FUN_10b504c70(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x20);
  }
  *puVar1 = &PTR_FUN_110cf7040;
  puVar1[1] = param_2;
  puVar1[2] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 3) = 0;
  return;
}



/* Entry: 10b504c78; end: 10b504cc7;  */

void FUN_10b504c78(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x20);
  }
  *puVar1 = &PTR_FUN_110cf7040;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 3) = 0;
  return;
}



/* Entry: 10b504cc8; end: 10b504cef;  */

void FUN_10b504cc8(void)

{
  return;
}



/* Entry: 10b504cf0; end: 10b504d77;  */

void FUN_10b504cf0(int param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar1 = param_5;
  func_0x000107c28094(param_5,param_4);
  func_0x000107c280a8(param_1 << 3 | 2,uVar1);
  uVar1 = param_2;
  func_0x00010b504fd0(param_2,param_3);
  func_0x000107c280a8();
  uVar2 = 1;
  func_0x0001098cc8ac(1,param_2,uVar1,param_5);
  uVar1 = param_5;
  func_0x000107c28094(param_5,uVar2);
  uVar3 = (ulong)*(uint *)(param_3 + 5);
  uVar2 = param_5;
  func_0x0001001a597c(param_5,uVar1);
  uVar1 = 0x12;
  func_0x0001001a59d0(0x12,uVar2);
  func_0x0001001a59d0(uVar3,uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001006018cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x38))(param_3,uVar3,param_5);
  return;
}



/* Entry: 10b504d78; end: 10b504dcb;  */

long FUN_10b504d78(int *param_1,long param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  FUN_10b505054(param_2);
  param_2 = param_2 + (ulong)(((int)LZCOUNT((long)iVar1) * -9 + 0x280U >> 6) + 2);
  return param_2 + (ulong)((int)LZCOUNT((int)param_2) * -9 + 0x160U >> 6);
}



/* Entry: 10b504dcc; end: 10b504e1b;  */

undefined8 * FUN_10b504dcc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  param_1[1] = 0x100000000;
  *param_1 = 0x100000000;
  param_1[2] = &DAT_10e5b4a18;
  param_1[3] = param_2;
  FUN_10b505080(param_1,param_3);
  return param_1;
}



/* Entry: 10b504e1c; end: 10b504e5f;  */

long FUN_10b504e1c(long param_1)

{
  if (*(int *)(param_1 + 4) != 1) {
    func_0x000107c30320(param_1,0x400400010,0);
  }
  return param_1;
}



/* Entry: 10b504e60; end: 10b504e83;  */

undefined8 FUN_10b504e60(undefined8 param_1)

{
  FUN_10b504e84(param_1,0);
  return param_1;
}



/* Entry: 10b504e84; end: 10b504ebf;  */

void FUN_10b504e84(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)();
    return;
  }
  return;
}



/* Entry: 10b504ec0; end: 10b504f87;  */

ulong * FUN_10b504ec0(ulong *param_1,uint *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  ulong uVar4;
  long alStack_58 [3];
  
  uVar1 = *param_2;
  uVar4 = (ulong)uVar1;
  *param_1 = uVar4;
  if (uVar1 == 0) {
    param_1[1] = 0;
  }
  else {
    puVar2 = (undefined4 *)(uVar4 << 4);
    __Znam();
    puVar3 = puVar2;
    do {
      *puVar3 = 0;
      *(undefined8 *)(puVar3 + 2) = 0;
      puVar3 = puVar3 + 4;
    } while (puVar3 != puVar2 + uVar4 * 4);
    param_1[1] = (ulong)puVar2;
    func_0x00010564c19c(alStack_58,param_2);
    while (alStack_58[0] != 0) {
      *puVar2 = *(undefined4 *)(alStack_58[0] + 8);
      *(undefined4 **)(puVar2 + 2) = (undefined4 *)(alStack_58[0] + 8);
      func_0x00010b5051f4();
      puVar2 = puVar2 + 4;
    }
    FUN_10b504f88(param_1[1],param_1[1] + *param_1 * 0x10);
  }
  return param_1;
}



/* Entry: 10b504f88; end: 10b504fa7;  */

void FUN_10b504f88(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_10b504fa8(param_1,param_2,&uStack_11);
  return;
}



/* Entry: 10b504fa8; end: 10b505007;  */

/* WARNING: Possible PIC construction at 0x00010934d264: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010934d268) */
/* WARNING: Removing unreachable block (ram,0x00010934de08) */
/* WARNING: Removing unreachable block (ram,0x00010934de0c) */
/* WARNING: Removing unreachable block (ram,0x00010934de1c) */
/* WARNING: Removing unreachable block (ram,0x00010934de48) */

int * FUN_10b504fa8(int *param_1,int *param_2,undefined8 param_3)

{
  bool bVar1;
  undefined1 *puVar2;
  int *piVar3;
  int *piVar4;
  ulong uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  int *unaff_x19;
  int *unaff_x20;
  long lVar14;
  undefined8 unaff_x21;
  int *piVar15;
  undefined8 unaff_x22;
  int *unaff_x23;
  int *unaff_x24;
  long lVar16;
  int *unaff_x25;
  undefined8 unaff_x26;
  long unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  
  if (param_1 == param_2) {
    return param_1;
  }
  uVar5 = LZCOUNT((long)param_2 - (long)param_1 >> 4) << 1 ^ 0x7e;
  uVar6 = 1;
  puVar2 = (undefined1 *)register0x00000008;
code_r0x00010934cd94:
  *(undefined8 *)(puVar2 + -0x60) = unaff_x28;
  *(long *)(puVar2 + -0x58) = unaff_x27;
  *(undefined8 *)(puVar2 + -0x50) = unaff_x26;
  *(int **)(puVar2 + -0x48) = unaff_x25;
  *(int **)(puVar2 + -0x40) = unaff_x24;
  *(int **)(puVar2 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar2 + -0x28) = unaff_x21;
  *(int **)(puVar2 + -0x20) = unaff_x20;
  *(int **)(puVar2 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
  *(undefined **)(puVar2 + -8) = unaff_x30;
  unaff_x29 = puVar2 + -0x10;
  unaff_x26 = 1;
  unaff_x19 = param_1;
  unaff_x20 = param_2;
code_r0x00010934cdc8:
  unaff_x27 = -uVar5;
  unaff_x24 = unaff_x19;
code_r0x00010934cdcc:
  unaff_x19 = unaff_x24;
  unaff_x27 = unaff_x27 + 1;
  uVar5 = (long)unaff_x20 - (long)unaff_x19 >> 4;
  if ((long)uVar5 < 3) {
    if (uVar5 < 2) {
      return param_1;
    }
    if (uVar5 == 2) {
      iVar9 = *unaff_x19;
      if (iVar9 <= unaff_x20[-4]) {
        return param_1;
      }
      *unaff_x19 = unaff_x20[-4];
      unaff_x20[-4] = iVar9;
code_r0x00010934d314:
      uVar6 = *(undefined8 *)(unaff_x19 + 2);
      *(undefined8 *)(unaff_x19 + 2) = *(undefined8 *)(unaff_x20 + -2);
      *(undefined8 *)(unaff_x20 + -2) = uVar6;
      return param_1;
    }
  }
  else {
    if (uVar5 == 3) {
      iVar9 = unaff_x19[4];
      iVar11 = *unaff_x19;
      iVar8 = unaff_x20[-4];
      if (iVar9 < iVar11) {
        if (iVar9 <= iVar8) {
          *unaff_x19 = iVar9;
          unaff_x19[4] = iVar11;
          uVar6 = *(undefined8 *)(unaff_x19 + 2);
          *(undefined8 *)(unaff_x19 + 2) = *(undefined8 *)(unaff_x19 + 6);
          *(undefined8 *)(unaff_x19 + 6) = uVar6;
          if (iVar11 <= unaff_x20[-4]) {
            return param_1;
          }
          unaff_x19[4] = unaff_x20[-4];
          unaff_x20[-4] = iVar11;
          *(undefined8 *)(unaff_x19 + 6) = *(undefined8 *)(unaff_x20 + -2);
          *(undefined8 *)(unaff_x20 + -2) = uVar6;
          return param_1;
        }
        *unaff_x19 = iVar8;
        unaff_x20[-4] = iVar11;
        goto code_r0x00010934d314;
      }
      if (iVar9 <= iVar8) {
        return param_1;
      }
      unaff_x19[4] = iVar8;
      unaff_x20[-4] = iVar9;
      uVar6 = *(undefined8 *)(unaff_x19 + 6);
      *(undefined8 *)(unaff_x19 + 6) = *(undefined8 *)(unaff_x20 + -2);
      *(undefined8 *)(unaff_x20 + -2) = uVar6;
      iVar9 = *unaff_x19;
      if (iVar9 <= unaff_x19[4]) {
        return param_1;
      }
      *unaff_x19 = unaff_x19[4];
      unaff_x19[4] = iVar9;
      uVar6 = *(undefined8 *)(unaff_x19 + 2);
      uVar10 = *(undefined8 *)(unaff_x19 + 6);
      goto code_r0x00010934d53c;
    }
    if (uVar5 == 4) {
      iVar9 = unaff_x19[4];
      iVar11 = *unaff_x19;
      iVar8 = unaff_x19[8];
      iVar7 = iVar8;
      if (iVar9 < iVar11) {
        if (iVar8 < iVar9) {
          *unaff_x19 = iVar8;
          unaff_x19[8] = iVar11;
          uVar6 = *(undefined8 *)(unaff_x19 + 2);
          *(undefined8 *)(unaff_x19 + 2) = *(undefined8 *)(unaff_x19 + 10);
        }
        else {
          *unaff_x19 = iVar9;
          unaff_x19[4] = iVar11;
          uVar6 = *(undefined8 *)(unaff_x19 + 2);
          *(undefined8 *)(unaff_x19 + 2) = *(undefined8 *)(unaff_x19 + 6);
          *(undefined8 *)(unaff_x19 + 6) = uVar6;
          if (iVar11 <= iVar8) goto code_r0x00010934d4d8;
          unaff_x19[4] = iVar8;
          unaff_x19[8] = iVar11;
          *(undefined8 *)(unaff_x19 + 6) = *(undefined8 *)(unaff_x19 + 10);
        }
        *(undefined8 *)(unaff_x19 + 10) = uVar6;
        iVar7 = iVar11;
      }
      else if (iVar8 < iVar9) {
        unaff_x19[4] = iVar8;
        unaff_x19[8] = iVar9;
        uVar10 = *(undefined8 *)(unaff_x19 + 6);
        uVar6 = *(undefined8 *)(unaff_x19 + 10);
        *(undefined8 *)(unaff_x19 + 6) = uVar6;
        *(undefined8 *)(unaff_x19 + 10) = uVar10;
        iVar7 = iVar9;
        if (iVar8 < iVar11) {
          *unaff_x19 = iVar8;
          unaff_x19[4] = iVar11;
          uVar10 = *(undefined8 *)(unaff_x19 + 2);
          *(undefined8 *)(unaff_x19 + 2) = uVar6;
          *(undefined8 *)(unaff_x19 + 6) = uVar10;
        }
      }
code_r0x00010934d4d8:
      if (iVar7 <= unaff_x20[-4]) {
        return param_1;
      }
      unaff_x19[8] = unaff_x20[-4];
      unaff_x20[-4] = iVar7;
      uVar6 = *(undefined8 *)(unaff_x19 + 10);
      *(undefined8 *)(unaff_x19 + 10) = *(undefined8 *)(unaff_x20 + -2);
      *(undefined8 *)(unaff_x20 + -2) = uVar6;
      iVar9 = unaff_x19[8];
      iVar11 = unaff_x19[4];
      if (iVar11 <= iVar9) {
        return param_1;
      }
      unaff_x19[4] = iVar9;
      unaff_x19[8] = iVar11;
      uVar6 = *(undefined8 *)(unaff_x19 + 6);
      uVar10 = *(undefined8 *)(unaff_x19 + 10);
      *(undefined8 *)(unaff_x19 + 6) = uVar10;
      *(undefined8 *)(unaff_x19 + 10) = uVar6;
      iVar11 = *unaff_x19;
      if (iVar11 <= iVar9) {
        return param_1;
      }
      *unaff_x19 = iVar9;
      unaff_x19[4] = iVar11;
      uVar6 = *(undefined8 *)(unaff_x19 + 2);
code_r0x00010934d53c:
      *(undefined8 *)(unaff_x19 + 2) = uVar10;
      *(undefined8 *)(unaff_x19 + 6) = uVar6;
      return param_1;
    }
    if (uVar5 == 5) {
      piVar4 = unaff_x19 + 4;
      piVar3 = unaff_x19 + 8;
      piVar15 = unaff_x19 + 0xc;
      iVar9 = *piVar4;
      iVar11 = *unaff_x19;
      iVar8 = *piVar3;
      if (iVar9 < iVar11) {
        if (iVar8 < iVar9) {
          *unaff_x19 = iVar8;
          *piVar3 = iVar11;
          uVar6 = *(undefined8 *)(unaff_x19 + 2);
          *(undefined8 *)(unaff_x19 + 2) = *(undefined8 *)(unaff_x19 + 10);
          *(undefined8 *)(unaff_x19 + 10) = uVar6;
          iVar8 = iVar11;
        }
        else {
          *unaff_x19 = iVar9;
          *piVar4 = iVar11;
          uVar6 = *(undefined8 *)(unaff_x19 + 2);
          *(undefined8 *)(unaff_x19 + 2) = *(undefined8 *)(unaff_x19 + 6);
          *(undefined8 *)(unaff_x19 + 6) = uVar6;
          iVar8 = *piVar3;
          if (iVar8 < iVar11) {
            *piVar4 = iVar8;
            *piVar3 = iVar11;
            *(undefined8 *)(unaff_x19 + 6) = *(undefined8 *)(unaff_x19 + 10);
            *(undefined8 *)(unaff_x19 + 10) = uVar6;
            iVar8 = iVar11;
          }
        }
      }
      else if (iVar8 < iVar9) {
        *piVar4 = iVar8;
        *piVar3 = iVar9;
        uVar6 = *(undefined8 *)(unaff_x19 + 6);
        *(undefined8 *)(unaff_x19 + 6) = *(undefined8 *)(unaff_x19 + 10);
        *(undefined8 *)(unaff_x19 + 10) = uVar6;
        iVar11 = *unaff_x19;
        iVar8 = iVar9;
        if (*piVar4 < iVar11) {
          *unaff_x19 = *piVar4;
          *piVar4 = iVar11;
          uVar6 = *(undefined8 *)(unaff_x19 + 2);
          *(undefined8 *)(unaff_x19 + 2) = *(undefined8 *)(unaff_x19 + 6);
          *(undefined8 *)(unaff_x19 + 6) = uVar6;
          iVar8 = *piVar3;
        }
      }
      if (*piVar15 < iVar8) {
        *piVar3 = *piVar15;
        *piVar15 = iVar8;
        uVar6 = *(undefined8 *)(unaff_x19 + 10);
        *(undefined8 *)(unaff_x19 + 10) = *(undefined8 *)(unaff_x19 + 0xe);
        *(undefined8 *)(unaff_x19 + 0xe) = uVar6;
        iVar9 = *piVar4;
        if (*piVar3 < iVar9) {
          *piVar4 = *piVar3;
          *piVar3 = iVar9;
          uVar6 = *(undefined8 *)(unaff_x19 + 6);
          *(undefined8 *)(unaff_x19 + 6) = *(undefined8 *)(unaff_x19 + 10);
          *(undefined8 *)(unaff_x19 + 10) = uVar6;
          iVar9 = *unaff_x19;
          if (*piVar4 < iVar9) {
            *unaff_x19 = *piVar4;
            *piVar4 = iVar9;
            uVar6 = *(undefined8 *)(unaff_x19 + 2);
            *(undefined8 *)(unaff_x19 + 2) = *(undefined8 *)(unaff_x19 + 6);
            *(undefined8 *)(unaff_x19 + 6) = uVar6;
          }
        }
      }
      iVar9 = unaff_x20[-4];
      iVar11 = *piVar15;
      if (iVar9 < iVar11) {
        *piVar15 = iVar9;
        unaff_x20[-4] = iVar11;
        uVar6 = *(undefined8 *)(unaff_x19 + 0xe);
        *(undefined8 *)(unaff_x19 + 0xe) = *(undefined8 *)(unaff_x20 + -2);
        *(undefined8 *)(unaff_x20 + -2) = uVar6;
        iVar9 = *piVar3;
        if (*piVar15 < iVar9) {
          *piVar3 = *piVar15;
          *piVar15 = iVar9;
          uVar6 = *(undefined8 *)(unaff_x19 + 10);
          *(undefined8 *)(unaff_x19 + 10) = *(undefined8 *)(unaff_x19 + 0xe);
          *(undefined8 *)(unaff_x19 + 0xe) = uVar6;
          iVar9 = *piVar4;
          if (*piVar3 < iVar9) {
            *piVar4 = *piVar3;
            *piVar3 = iVar9;
            uVar6 = *(undefined8 *)(unaff_x19 + 6);
            *(undefined8 *)(unaff_x19 + 6) = *(undefined8 *)(unaff_x19 + 10);
            *(undefined8 *)(unaff_x19 + 10) = uVar6;
            iVar9 = *unaff_x19;
            if (*piVar4 < iVar9) {
              *unaff_x19 = *piVar4;
              *piVar4 = iVar9;
              uVar6 = *(undefined8 *)(unaff_x19 + 2);
              *(undefined8 *)(unaff_x19 + 2) = *(undefined8 *)(unaff_x19 + 6);
              *(undefined8 *)(unaff_x19 + 6) = uVar6;
            }
          }
        }
      }
      return unaff_x19;
    }
  }
  if (0x17 < (long)uVar5) {
    if (unaff_x27 == 1) {
      if (unaff_x19 == unaff_x20) {
        return param_1;
      }
      *(undefined8 *)(puVar2 + -0x50) = *(undefined8 *)(puVar2 + -0x50);
      *(undefined8 *)(puVar2 + -0x48) = *(undefined8 *)(puVar2 + -0x48);
      *(undefined8 *)(puVar2 + -0x40) = *(undefined8 *)(puVar2 + -0x40);
      *(undefined8 *)(puVar2 + -0x38) = *(undefined8 *)(puVar2 + -0x38);
      *(undefined8 *)(puVar2 + -0x30) = *(undefined8 *)(puVar2 + -0x30);
      *(undefined8 *)(puVar2 + -0x28) = *(undefined8 *)(puVar2 + -0x28);
      *(undefined8 *)(puVar2 + -0x20) = *(undefined8 *)(puVar2 + -0x20);
      *(undefined8 *)(puVar2 + -0x18) = *(undefined8 *)(puVar2 + -0x18);
      *(undefined8 *)(puVar2 + -0x10) = *(undefined8 *)(puVar2 + -0x10);
      *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
      if (unaff_x19 != unaff_x20) {
        lVar14 = (long)unaff_x20 - (long)unaff_x19 >> 4;
        if (1 < lVar14) {
          uVar5 = lVar14 - 2U >> 1;
          lVar16 = uVar5 + 1;
          piVar4 = unaff_x19 + uVar5 * 4;
          do {
            func_0x00010934deec(unaff_x19,param_3,lVar14,piVar4);
            piVar4 = piVar4 + -4;
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
        }
        piVar4 = unaff_x20;
        if (1 < lVar14) {
          do {
            piVar15 = piVar4 + -4;
            iVar9 = *unaff_x19;
            uVar6 = *(undefined8 *)(unaff_x19 + 2);
            piVar3 = unaff_x19;
            func_0x00010934dfc4(unaff_x19,param_3,lVar14);
            if (piVar15 == piVar3) {
              *piVar3 = iVar9;
              *(undefined8 *)(piVar3 + 2) = uVar6;
            }
            else {
              *piVar3 = *piVar15;
              *(undefined8 *)(piVar3 + 2) = *(undefined8 *)(piVar4 + -2);
              *piVar15 = iVar9;
              *(undefined8 *)(piVar4 + -2) = uVar6;
              func_0x00010934e038(unaff_x19,piVar3 + 4,param_3,
                                  (long)(piVar3 + 4) - (long)unaff_x19 >> 4);
            }
            bVar1 = 2 < lVar14;
            lVar14 = lVar14 + -1;
            piVar4 = piVar15;
          } while (bVar1);
        }
      }
      return unaff_x20;
    }
    piVar4 = unaff_x19 + (uVar5 >> 1) * 4;
    iVar9 = unaff_x20[-4];
    if (uVar5 < 0x81) {
      iVar11 = *unaff_x19;
      iVar8 = *piVar4;
      if (iVar11 < iVar8) {
        if (iVar9 < iVar11) {
          *piVar4 = iVar9;
          unaff_x20[-4] = iVar8;
          uVar10 = *(undefined8 *)(piVar4 + 2);
          *(undefined8 *)(piVar4 + 2) = *(undefined8 *)(unaff_x20 + -2);
        }
        else {
          *piVar4 = iVar11;
          *unaff_x19 = iVar8;
          uVar10 = *(undefined8 *)(piVar4 + 2);
          *(undefined8 *)(piVar4 + 2) = *(undefined8 *)(unaff_x19 + 2);
          *(undefined8 *)(unaff_x19 + 2) = uVar10;
          if (iVar8 <= unaff_x20[-4]) goto joined_r0x00010934d020;
          *unaff_x19 = unaff_x20[-4];
          unaff_x20[-4] = iVar8;
          *(undefined8 *)(unaff_x19 + 2) = *(undefined8 *)(unaff_x20 + -2);
        }
        *(undefined8 *)(unaff_x20 + -2) = uVar10;
      }
      else if (iVar9 < iVar11) {
        *unaff_x19 = iVar9;
        unaff_x20[-4] = iVar11;
        uVar10 = *(undefined8 *)(unaff_x19 + 2);
        *(undefined8 *)(unaff_x19 + 2) = *(undefined8 *)(unaff_x20 + -2);
        *(undefined8 *)(unaff_x20 + -2) = uVar10;
        iVar9 = *piVar4;
        if (*unaff_x19 < iVar9) {
          *piVar4 = *unaff_x19;
          *unaff_x19 = iVar9;
          uVar10 = *(undefined8 *)(piVar4 + 2);
          *(undefined8 *)(piVar4 + 2) = *(undefined8 *)(unaff_x19 + 2);
          *(undefined8 *)(unaff_x19 + 2) = uVar10;
        }
      }
    }
    else {
      iVar11 = *piVar4;
      iVar8 = *unaff_x19;
      if (iVar11 < iVar8) {
        if (iVar9 < iVar11) {
          *unaff_x19 = iVar9;
          unaff_x20[-4] = iVar8;
          uVar10 = *(undefined8 *)(unaff_x19 + 2);
          *(undefined8 *)(unaff_x19 + 2) = *(undefined8 *)(unaff_x20 + -2);
        }
        else {
          *unaff_x19 = iVar11;
          *piVar4 = iVar8;
          uVar10 = *(undefined8 *)(unaff_x19 + 2);
          *(undefined8 *)(unaff_x19 + 2) = *(undefined8 *)(piVar4 + 2);
          *(undefined8 *)(piVar4 + 2) = uVar10;
          if (iVar8 <= unaff_x20[-4]) goto code_r0x00010934cf64;
          *piVar4 = unaff_x20[-4];
          unaff_x20[-4] = iVar8;
          *(undefined8 *)(piVar4 + 2) = *(undefined8 *)(unaff_x20 + -2);
        }
        *(undefined8 *)(unaff_x20 + -2) = uVar10;
      }
      else if (iVar9 < iVar11) {
        *piVar4 = iVar9;
        unaff_x20[-4] = iVar11;
        uVar10 = *(undefined8 *)(piVar4 + 2);
        *(undefined8 *)(piVar4 + 2) = *(undefined8 *)(unaff_x20 + -2);
        *(undefined8 *)(unaff_x20 + -2) = uVar10;
        iVar9 = *unaff_x19;
        if (*piVar4 < iVar9) {
          *unaff_x19 = *piVar4;
          *piVar4 = iVar9;
          uVar10 = *(undefined8 *)(unaff_x19 + 2);
          *(undefined8 *)(unaff_x19 + 2) = *(undefined8 *)(piVar4 + 2);
          *(undefined8 *)(piVar4 + 2) = uVar10;
        }
      }
code_r0x00010934cf64:
      iVar11 = piVar4[-4];
      iVar9 = unaff_x19[4];
      iVar8 = unaff_x20[-8];
      if (iVar11 < iVar9) {
        if (iVar8 < iVar11) {
          unaff_x19[4] = iVar8;
          unaff_x20[-8] = iVar9;
          uVar10 = *(undefined8 *)(unaff_x19 + 6);
          *(undefined8 *)(unaff_x19 + 6) = *(undefined8 *)(unaff_x20 + -6);
          *(undefined8 *)(unaff_x20 + -6) = uVar10;
        }
        else {
          unaff_x19[4] = iVar11;
          piVar4[-4] = iVar9;
          uVar10 = *(undefined8 *)(unaff_x19 + 6);
          *(undefined8 *)(unaff_x19 + 6) = *(undefined8 *)(piVar4 + -2);
          *(undefined8 *)(piVar4 + -2) = uVar10;
          if (unaff_x20[-8] < iVar9) {
            piVar4[-4] = unaff_x20[-8];
            unaff_x20[-8] = iVar9;
            *(undefined8 *)(piVar4 + -2) = *(undefined8 *)(unaff_x20 + -6);
            *(undefined8 *)(unaff_x20 + -6) = uVar10;
          }
        }
      }
      else if (iVar8 < iVar11) {
        piVar4[-4] = iVar8;
        unaff_x20[-8] = iVar11;
        uVar10 = *(undefined8 *)(piVar4 + -2);
        *(undefined8 *)(piVar4 + -2) = *(undefined8 *)(unaff_x20 + -6);
        *(undefined8 *)(unaff_x20 + -6) = uVar10;
        iVar9 = unaff_x19[4];
        if (piVar4[-4] < iVar9) {
          unaff_x19[4] = piVar4[-4];
          piVar4[-4] = iVar9;
          uVar10 = *(undefined8 *)(unaff_x19 + 6);
          *(undefined8 *)(unaff_x19 + 6) = *(undefined8 *)(piVar4 + -2);
          *(undefined8 *)(piVar4 + -2) = uVar10;
        }
      }
      iVar9 = piVar4[4];
      iVar11 = unaff_x19[8];
      iVar8 = unaff_x20[-0xc];
      if (iVar9 < iVar11) {
        if (iVar8 < iVar9) {
          unaff_x19[8] = iVar8;
          unaff_x20[-0xc] = iVar11;
          uVar10 = *(undefined8 *)(unaff_x19 + 10);
          *(undefined8 *)(unaff_x19 + 10) = *(undefined8 *)(unaff_x20 + -10);
          *(undefined8 *)(unaff_x20 + -10) = uVar10;
        }
        else {
          unaff_x19[8] = iVar9;
          piVar4[4] = iVar11;
          uVar10 = *(undefined8 *)(unaff_x19 + 10);
          *(undefined8 *)(unaff_x19 + 10) = *(undefined8 *)(piVar4 + 6);
          *(undefined8 *)(piVar4 + 6) = uVar10;
          if (unaff_x20[-0xc] < iVar11) {
            piVar4[4] = unaff_x20[-0xc];
            unaff_x20[-0xc] = iVar11;
            *(undefined8 *)(piVar4 + 6) = *(undefined8 *)(unaff_x20 + -10);
            *(undefined8 *)(unaff_x20 + -10) = uVar10;
          }
        }
      }
      else if (iVar8 < iVar9) {
        piVar4[4] = iVar8;
        unaff_x20[-0xc] = iVar9;
        uVar10 = *(undefined8 *)(piVar4 + 6);
        *(undefined8 *)(piVar4 + 6) = *(undefined8 *)(unaff_x20 + -10);
        *(undefined8 *)(unaff_x20 + -10) = uVar10;
        iVar9 = unaff_x19[8];
        if (piVar4[4] < iVar9) {
          unaff_x19[8] = piVar4[4];
          piVar4[4] = iVar9;
          uVar10 = *(undefined8 *)(unaff_x19 + 10);
          *(undefined8 *)(unaff_x19 + 10) = *(undefined8 *)(piVar4 + 6);
          *(undefined8 *)(piVar4 + 6) = uVar10;
        }
      }
      iVar9 = *piVar4;
      iVar8 = piVar4[-4];
      iVar11 = piVar4[4];
      if (iVar9 < iVar8) {
        if (iVar11 < iVar9) {
          piVar4[-4] = iVar11;
          piVar4[4] = iVar8;
          uVar10 = *(undefined8 *)(piVar4 + -2);
          *(undefined8 *)(piVar4 + -2) = *(undefined8 *)(piVar4 + 6);
          *(undefined8 *)(piVar4 + 6) = uVar10;
        }
        else {
          piVar4[-4] = iVar9;
          *piVar4 = iVar8;
          uVar10 = *(undefined8 *)(piVar4 + -2);
          *(undefined8 *)(piVar4 + -2) = *(undefined8 *)(piVar4 + 2);
          *(undefined8 *)(piVar4 + 2) = uVar10;
          iVar9 = iVar8;
          if (iVar11 < iVar8) {
            *piVar4 = iVar11;
            piVar4[4] = iVar8;
            *(undefined8 *)(piVar4 + 2) = *(undefined8 *)(piVar4 + 6);
            *(undefined8 *)(piVar4 + 6) = uVar10;
            iVar9 = iVar11;
          }
        }
      }
      else if (iVar11 < iVar9) {
        *piVar4 = iVar11;
        piVar4[4] = iVar9;
        uVar12 = *(undefined8 *)(piVar4 + 2);
        uVar10 = *(undefined8 *)(piVar4 + 6);
        *(undefined8 *)(piVar4 + 2) = uVar10;
        *(undefined8 *)(piVar4 + 6) = uVar12;
        iVar9 = iVar11;
        if (iVar11 < iVar8) {
          piVar4[-4] = iVar11;
          *piVar4 = iVar8;
          uVar12 = *(undefined8 *)(piVar4 + -2);
          *(undefined8 *)(piVar4 + -2) = uVar10;
          *(undefined8 *)(piVar4 + 2) = uVar12;
          iVar9 = iVar8;
        }
      }
      iVar11 = *unaff_x19;
      *unaff_x19 = iVar9;
      *piVar4 = iVar11;
      uVar10 = *(undefined8 *)(unaff_x19 + 2);
      *(undefined8 *)(unaff_x19 + 2) = *(undefined8 *)(piVar4 + 2);
      *(undefined8 *)(piVar4 + 2) = uVar10;
    }
joined_r0x00010934d020:
    if (((int)uVar6 == 0) && (*unaff_x19 <= unaff_x19[-4])) {
      func_0x00010934d840(unaff_x19,unaff_x20,param_3);
      uVar6 = 0;
      uVar5 = -unaff_x27;
      param_1 = unaff_x19;
    }
    else {
      param_2 = unaff_x19;
      piVar4 = unaff_x20;
      func_0x00010934d910(unaff_x19,unaff_x20,param_3);
      unaff_x24 = unaff_x19;
      if (((ulong)piVar4 & 1) == 0) goto code_r0x00010934d250;
      unaff_x25 = unaff_x19;
      func_0x00010934d9e8(unaff_x19,param_2,param_3);
      unaff_x24 = param_2 + 4;
      param_1 = unaff_x24;
      func_0x00010934d9e8(unaff_x24,unaff_x20,param_3);
      if ((int)param_1 == 0) goto code_r0x00010934d248;
      uVar5 = -unaff_x27;
      unaff_x20 = param_2;
      if (((ulong)unaff_x25 & 1) != 0) {
        return param_1;
      }
    }
    goto code_r0x00010934cdc8;
  }
  if ((int)uVar6 == 0) {
    if ((unaff_x19 != unaff_x20) && (unaff_x19 + 4 != unaff_x20)) {
      piVar4 = unaff_x19 + 6;
      piVar3 = unaff_x19;
      piVar15 = unaff_x19 + 4;
      do {
        unaff_x19 = piVar15;
        iVar9 = piVar3[4];
        iVar11 = *piVar3;
        if (iVar9 < iVar11) {
          uVar6 = *(undefined8 *)(piVar3 + 6);
          piVar3 = piVar4;
          do {
            piVar15 = piVar3;
            piVar15[-2] = iVar11;
            piVar3 = piVar15 + -4;
            *(undefined8 *)piVar15 = *(undefined8 *)piVar3;
            iVar11 = piVar15[-10];
          } while (iVar9 < iVar11);
          piVar15[-6] = iVar9;
          *(undefined8 *)piVar3 = uVar6;
        }
        piVar4 = piVar4 + 4;
        piVar3 = unaff_x19;
        piVar15 = unaff_x19 + 4;
      } while (unaff_x19 + 4 != unaff_x20);
    }
    return unaff_x19;
  }
  if (unaff_x19 == unaff_x20) {
    return unaff_x19;
  }
  if (unaff_x19 + 4 == unaff_x20) {
    return unaff_x19;
  }
  lVar14 = 0;
  piVar4 = unaff_x19 + 4;
  piVar3 = unaff_x19;
code_r0x00010934d760:
  piVar15 = piVar4;
  iVar9 = piVar3[4];
  iVar11 = *piVar3;
  if (iVar9 < iVar11) {
    uVar6 = *(undefined8 *)(piVar3 + 6);
    lVar16 = lVar14;
    do {
      lVar13 = lVar16;
      *(int *)((long)unaff_x19 + lVar13 + 0x10) = iVar11;
      *(undefined8 *)((long)unaff_x19 + lVar13 + 0x18) =
           *(undefined8 *)((long)unaff_x19 + lVar13 + 8);
      piVar4 = unaff_x19;
      if (lVar13 == 0) goto code_r0x00010934d7b0;
      iVar11 = *(int *)((long)unaff_x19 + lVar13 + -0x10);
      lVar16 = lVar13 + -0x10;
    } while (iVar9 < iVar11);
    piVar4 = (int *)((long)unaff_x19 + lVar13);
code_r0x00010934d7b0:
    *piVar4 = iVar9;
    *(undefined8 *)(piVar4 + 2) = uVar6;
  }
  piVar4 = piVar15 + 4;
  lVar14 = lVar14 + 0x10;
  piVar3 = piVar15;
  if (piVar4 == unaff_x20) {
    return unaff_x19;
  }
  goto code_r0x00010934d760;
code_r0x00010934d248:
  if (((ulong)unaff_x25 & 1) == 0) {
code_r0x00010934d250:
    uVar5 = -unaff_x27;
    unaff_x30 = &UNK_10934d268;
    puVar2 = puVar2 + -0x60;
    param_1 = unaff_x19;
    unaff_x21 = param_3;
    unaff_x22 = uVar6;
    unaff_x23 = param_2;
    goto code_r0x00010934cd94;
  }
  goto code_r0x00010934cdcc;
}



/* Entry: 10b505008; end: 10b505053;  */

void FUN_10b505008(int param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  uVar3 = param_4;
  func_0x000107c28094(param_4,param_3);
  uVar4 = (ulong)*(uint *)(param_2 + 5);
  uVar1 = param_4;
  func_0x0001001a597c(param_4,uVar3);
  uVar2 = (ulong)(param_1 << 3 | 2);
  func_0x0001001a59d0(uVar2,uVar1);
  func_0x0001001a59d0(uVar4,uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001006018cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x38))(param_2,uVar4,param_4);
  return;
}



/* Entry: 10b505054; end: 10b50507f;  */

long FUN_10b505054(long param_1)

{
  FUN_10b507510();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 10b505080; end: 10b5050cb;  */

void FUN_10b505080(undefined8 param_1)

{
  undefined8 uStack_38;
  
  func_0x00010b5051fc();
  while (uStack_38 != 0) {
    FUN_10b5050cc(param_1,uStack_38 + 8);
    FUN_10b507610();
    func_0x00010b5051f4();
  }
  return;
}



/* Entry: 10b5050cc; end: 10b5050f3;  */

long FUN_10b5050cc(void)

{
  long alStack_30 [4];
  
  FUN_10b5050f4(alStack_30);
  return alStack_30[0] + 0x10;
}



/* Entry: 10b5050f4; end: 10b5051c7;  */

void FUN_10b5050f4(undefined8 *param_1,int *param_2,uint *param_3)

{
  int *piVar1;
  ulong uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  
  uVar2 = (ulong)*param_3;
  piVar1 = param_2;
  func_0x000105689068(param_2,uVar2,0);
  if (piVar1 == (int *)0x0) {
    piVar1 = param_2;
    func_0x000105689120(param_2,*param_2 + 1);
    if ((int)piVar1 != 0) {
      uVar2 = (ulong)*param_3;
      func_0x000105689068(param_2,uVar2,0);
    }
    piVar1 = param_2;
    func_0x000107c27d64(param_2,0x40);
    piVar1[2] = *param_3;
    uVar4 = *(undefined8 *)(param_2 + 6);
    *(undefined ***)(piVar1 + 4) = &PTR_FUN_110cf7500;
    *(undefined8 *)(piVar1 + 6) = uVar4;
    piVar1[8] = 0;
    piVar1[9] = 0;
    piVar1[10] = 0;
    piVar1[0xb] = 0;
    *(undefined8 *)(piVar1 + 0xc) = uVar4;
    piVar1[0xe] = 0;
    func_0x0001056891b0(param_2,uVar2,piVar1);
    *param_2 = *param_2 + 1;
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  *param_1 = piVar1;
  param_1[1] = param_2;
  *(int *)(param_1 + 2) = (int)uVar2;
  *(undefined1 *)(param_1 + 3) = uVar3;
  return;
}



/* Entry: 10b5051c8; end: 10b505203;  */

void FUN_10b5051c8(void)

{
  return;
}



/* Entry: 10b505204; end: 10b505243;  */

long FUN_10b505204(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b507b38();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b505244; end: 10b505247;  */

long FUN_10b505244(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b507b38();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b505248; end: 10b50525b;  */

void FUN_10b505248(void)

{
  FUN_10b505204();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b50525c; end: 10b505267;  */

undefined ** FUN_10b50525c(void)

{
  return &PTR_DAT_110cf7138;
}



/* Entry: 10b505268; end: 10b5052bb;  */

void FUN_10b505268(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x18);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x00010b507bd0(*(undefined8 *)(param_1 + 0x20));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10b5052bc; end: 10b5053c3;  */

long * FUN_10b5052bc(long param_1,long *param_2,long *param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  
  puVar9 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  lVar5 = (long)*(char *)((long)puVar9 + 0x17);
  if (lVar5 < 0) {
    lVar5 = puVar9[1];
    if (lVar5 == 0) goto LAB_10b505328;
    puVar2 = (undefined8 *)*puVar9;
  }
  else {
    puVar2 = puVar9;
    if (*(char *)((long)puVar9 + 0x17) == '\0') goto LAB_10b505328;
  }
  func_0x000107c303d4(puVar2,lVar5,1,&UNK_10f7761c8);
  plVar4 = param_3;
  func_0x000107c280a0(param_3,1,puVar9,param_2);
  param_2 = plVar4;
LAB_10b505328:
  if (*(int *)(param_1 + 0x28) != 0) {
    plVar4 = param_3;
    func_0x000107c28094(param_3,param_2);
    uVar1 = *(undefined4 *)(param_1 + 0x28);
    puVar3 = (undefined4 *)0x15;
    func_0x000107c280a8(0x15,plVar4);
    param_2 = (long *)(puVar3 + 1);
    *puVar3 = uVar1;
  }
  plVar4 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    plVar4 = (long *)0x3;
    func_0x000107c303cc(3,*(long *)(param_1 + 0x20),
                        *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x18),param_2,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar7 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar6 = (ulong)*(char *)(uVar7 + 0x1f);
    if ((long)uVar6 < 0) {
      lVar5 = *(long *)(uVar7 + 8);
      uVar6 = *(ulong *)(uVar7 + 0x10);
    }
    else {
      lVar5 = uVar7 + 8;
    }
    if (*param_3 - (long)plVar4 < (long)(int)uVar6) {
      while( true ) {
        iVar10 = ((int)*param_3 - (int)plVar4) + 0x10;
        iVar8 = (int)uVar6;
        uVar6 = (ulong)(uint)(iVar8 - iVar10);
        if (iVar8 - iVar10 == 0 || iVar8 < iVar10) break;
        func_0x00010b4d5738();
        lVar5 = (long)plVar4 + (long)iVar10;
        plVar4 = param_3;
        func_0x000107c303e4(param_3,lVar5);
      }
      func_0x00010b4d5738();
      return (long *)((long)plVar4 + (long)iVar8);
    }
    _memcpy(plVar4,lVar5,uVar6 & 0xffffffff);
    return (long *)((long)plVar4 + (long)(int)uVar6);
  }
  return plVar4;
}



/* Entry: 10b5053c4; end: 10b505453;  */

void FUN_10b5053c4(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  
  uVar3 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  if (*(char *)(uVar3 + 0x17) < '\0') {
    if (*(long *)(uVar3 + 8) == 0) goto LAB_10b5053fc;
  }
  else if (*(char *)(uVar3 + 0x17) == '\0') {
LAB_10b5053fc:
    iVar2 = 0;
    goto LAB_10b505400;
  }
  func_0x000107c282a0();
  iVar2 = (int)uVar3 + 1;
LAB_10b505400:
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    FUN_10b505454();
    iVar2 = iVar2 + iVar1 + 1;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    iVar2 = iVar2 + 5;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar3 + 0x10);
    }
    iVar2 = (int)lVar4 + iVar2;
  }
  *(int *)(param_1 + 0x14) = iVar2;
  return;
}



/* Entry: 10b505454; end: 10b50547f;  */

long FUN_10b505454(long param_1)

{
  FUN_10b507c68();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 10b505480; end: 10b505483;  */

void FUN_10b505480(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = *(ulong *)(param_1 + 8);
  uVar2 = uVar4;
  if ((uVar4 & 1) != 0) {
    uVar2 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  uVar3 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x18,uVar3,uVar4);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
      func_0x00010b5055fc(uVar2,*(undefined8 *)(param_2 + 0x20));
      *(ulong *)(param_1 + 0x20) = uVar2;
    }
    else {
      func_0x00010b507b04();
    }
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x28);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b505484; end: 10b505567;  */

void FUN_10b505484(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = *(ulong *)(param_1 + 8);
  uVar2 = uVar4;
  if ((uVar4 & 1) != 0) {
    uVar2 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  uVar3 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x18,uVar3,uVar4);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
      func_0x00010b5055fc(uVar2,*(undefined8 *)(param_2 + 0x20));
      *(ulong *)(param_1 + 0x20) = uVar2;
    }
    else {
      func_0x00010b507b04();
    }
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x28);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b505568; end: 10b50559f;  */

void FUN_10b505568(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  if (param_2 == param_1) {
    return;
  }
  FUN_10b505268();
  uVar4 = *(ulong *)(param_1 + 8);
  uVar2 = uVar4;
  if ((uVar4 & 1) != 0) {
    uVar2 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  uVar3 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x18,uVar3,uVar4);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
      func_0x00010b5055fc(uVar2,*(undefined8 *)(param_2 + 0x20));
      *(ulong *)(param_1 + 0x20) = uVar2;
    }
    else {
      func_0x00010b507b04();
    }
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x28);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b5055a0; end: 10b5055a7;  */

void FUN_10b5055a0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x30);
  }
  *puVar1 = &PTR_FUN_110cf70f8;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  return;
}



/* Entry: 10b5055a8; end: 10b50563f;  */

void FUN_10b5055a8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x30);
  }
  *puVar1 = &PTR_FUN_110cf70f8;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  return;
}



/* Entry: 10b505640; end: 10b505647;  */

void FUN_10b505640(void)

{
  return;
}



/* Entry: 10b505648; end: 10b505673;  */

undefined8 * FUN_10b505648(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110cf71b0;
  param_1[1] = param_2;
  FUN_10b505674();
  return param_1;
}



/* Entry: 10b505674; end: 10b5056af;  */

void FUN_10b505674(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = 0x100000000;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0x100000000;
  *(undefined **)(param_1 + 0x28) = &DAT_10e5b4a18;
  *(undefined8 *)(param_1 + 0x30) = param_2;
  *(undefined8 *)(param_1 + 0x40) = 0x100000000;
  *(undefined8 *)(param_1 + 0x38) = 0x100000000;
  *(undefined **)(param_1 + 0x48) = &DAT_10e5b4a18;
  *(undefined8 *)(param_1 + 0x50) = param_2;
  *(undefined8 *)(param_1 + 0x58) = 0;
  return;
}



/* Entry: 10b5056b0; end: 10b50575b;  */

undefined8 * FUN_10b5056b0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110cf71b0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  FUN_10b505e04(param_1 + 3,param_2,param_3 + 0x18);
  FUN_10b505e7c(param_1 + 7,param_2,param_3 + 0x38);
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    param_2 = 0;
  }
  else {
    FUN_10b505f80(param_2,*(undefined8 *)(param_3 + 0x58));
  }
  param_1[0xb] = param_2;
  return param_1;
}



/* Entry: 10b50575c; end: 10b50578b;  */

long FUN_10b50575c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b50578c(param_1);
  return param_1;
}



/* Entry: 10b50578c; end: 10b5057bb;  */

long FUN_10b50578c(long param_1)

{
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_10b507794();
  }
  __ZdlPv();
  FUN_10b505ebc(param_1 + 0x38);
  FUN_10b505e44(param_1 + 0x18);
  return param_1 + 0x10;
}


