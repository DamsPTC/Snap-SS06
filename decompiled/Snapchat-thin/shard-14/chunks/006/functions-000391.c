/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b4fde6c; end: 10b4fde7f;  */

void FUN_10b4fde6c(void)

{
  FUN_10b4fde44();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4fde80; end: 10b4fdea3;  */

undefined ** FUN_10b4fde80(void)

{
  return &PTR_DAT_110cf6428;
}



/* Entry: 10b4fdea4; end: 10b4fdeff;  */

long * FUN_10b4fdea4(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b504084();
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    func_0x00010b50442c();
    func_0x000105991a14();
    param_4 = param_1;
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



/* Entry: 10b4fdf00; end: 10b4fdf4f;  */

ulong FUN_10b4fdf00(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (ulong)((int)LZCOUNT(*(undefined8 *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x14) = (int)uVar1;
  return uVar1;
}



/* Entry: 10b4fdf50; end: 10b4fdf93;  */

long FUN_10b4fdf50(long param_1)

{
  func_0x00010b504218();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b4fde44();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b5014a8();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b4fdf94; end: 10b4fdf97;  */

long FUN_10b4fdf94(long param_1)

{
  func_0x00010b504218();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b4fde44();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b5014a8();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b4fdf98; end: 10b4fdfab;  */

void FUN_10b4fdf98(void)

{
  FUN_10b4fdf50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4fdfac; end: 10b4fdfb7;  */

undefined ** FUN_10b4fdfac(void)

{
  return &PTR_DAT_110cf6468;
}



/* Entry: 10b4fdfb8; end: 10b4fdfdf;  */

void FUN_10b4fdfb8(long param_1)

{
  if ((*(byte *)(param_1 + 0x10) >> 1 & 1) != 0) {
    func_0x00010b50154c();
  }
  return;
}



/* Entry: 10b4fdfe0; end: 10b4fe0bf;  */

void FUN_10b4fdfe0(void)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  ulong *unaff_x19;
  uint unaff_w20;
  
  func_0x00010b5041a4();
  if (!(bool)in_ZR) {
    if ((unaff_w20 & 1) != 0) {
      func_0x00010b5046a4();
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      func_0x00010b4fe024(unaff_x19[4]);
    }
  }
  func_0x00010b504370();
  if ((extraout_x8 & 1) == 0) {
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



/* Entry: 10b4fe0c0; end: 10b4fe19b;  */

long * FUN_10b4fe0c0(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

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
  if ((unaff_w21 & 1) != 0) {
    func_0x00010b5040ac();
    param_4 = param_1;
  }
  if ((unaff_w21 >> 1 & 1) != 0) {
    func_0x00010b503fc4();
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



/* Entry: 10b4fe19c; end: 10b4fe1b3;  */

void FUN_10b4fe19c(void)

{
  FUN_10b4fdf00();
  FUN_10b503ee4();
  return;
}



/* Entry: 10b4fe1b4; end: 10b4fe36b;  */

void FUN_10b4fe1b4(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x21;
  ulong *unaff_x22;
  uint unaff_w23;
  
  func_0x00010b503fe8();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00010b5043dc();
  }
  func_0x00010b5047ac();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x00010b504618();
      if (param_1 == (ulong *)0x0) {
        func_0x00010b5045ac();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_10b4fde18();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x00010b504760();
      if (param_1 == (ulong *)0x0) {
        FUN_10b5033f0();
        *(ulong **)(unaff_x21 + 0x20) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        func_0x00010b4fe238();
      }
    }
  }
  func_0x00010b504018();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x00010b50410c();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b4fe36c; end: 10b4fe397;  */

undefined8 FUN_10b4fe36c(undefined8 param_1)

{
  func_0x00010b504218();
  FUN_10b4fe398(param_1);
  return param_1;
}



/* Entry: 10b4fe398; end: 10b4fe3e7;  */

long FUN_10b4fe398(long param_1)

{
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_10b4fedb0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_10b4ff840();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_10b4ff684();
  }
  __ZdlPv();
  FUN_10b502ae4(param_1 + 0x30);
  FUN_10b5029bc(param_1 + 0x18);
  return param_1 + 0x10;
}



/* Entry: 10b4fe3e8; end: 10b4fe3eb;  */

undefined8 FUN_10b4fe3e8(undefined8 param_1)

{
  func_0x00010b504218();
  FUN_10b4fe398(param_1);
  return param_1;
}



/* Entry: 10b4fe3ec; end: 10b4fe3ff;  */

void FUN_10b4fe3ec(void)

{
  FUN_10b4fe36c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4fe400; end: 10b4fe40b;  */

undefined ** FUN_10b4fe400(void)

{
  return &PTR_DAT_110cf64b8;
}



/* Entry: 10b4fe40c; end: 10b4fe4ab;  */

void FUN_10b4fe40c(long param_1)

{
  ulong *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  ulong *puVar5;
  long unaff_x19;
  ulong uVar6;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 >> 3 & 1) != 0) {
    func_0x00010b50433c();
    iVar3 = (int)param_1;
    FUN_10b4fcf60();
    if (iVar3 != 0) {
      uVar6 = *(ulong *)(unaff_x19 + 0x30);
      iVar3 = *(uint *)(unaff_x19 + 0x38) + 1;
      puVar5 = (ulong *)(uVar6 + (ulong)*(uint *)(unaff_x19 + 0x38) * 8 + -1);
      do {
        iVar3 = iVar3 + -1;
        if (iVar3 < 1) {
          if ((uVar2 & 1) != 0) {
            iVar3 = (int)*(undefined8 *)(unaff_x19 + 0x48);
            FUN_10b4fee40();
            if (iVar3 == 0) {
              return;
            }
          }
          if ((uVar2 >> 1 & 1) == 0) {
            return;
          }
          FUN_10b4ff93c();
          return;
        }
        puVar1 = (ulong *)(unaff_x19 + 0x30);
        if ((uVar6 & 1) != 0) {
          puVar1 = puVar5;
        }
        uVar4 = *puVar1;
        FUN_10b4fdfb8();
        puVar5 = puVar5 + -1;
      } while ((uVar4 & 1) != 0);
    }
  }
  return;
}



/* Entry: 10b4fe4ac; end: 10b4fe6cb;  */

void FUN_10b4fe4ac(void)

{
  uint uVar1;
  ulong extraout_x8;
  ulong *unaff_x19;
  
  func_0x00010b50433c();
  FUN_10b50302c();
  if (0 < (int)unaff_x19[7]) {
    func_0x0001053936e4(unaff_x19 + 6);
  }
  uVar1 = (uint)unaff_x19[2];
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b4fe534(unaff_x19[9]);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010b4fe5a8(unaff_x19[10]);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x00010b4fe69c(unaff_x19[0xb]);
    }
    *(undefined4 *)(unaff_x19 + 0xc) = 1;
  }
  func_0x00010b504370();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (*(char *)((long)unaff_x19 + 0x17) < '\0') {
    *(undefined1 *)*unaff_x19 = 0;
    unaff_x19[1] = 0;
    return;
  }
  *(undefined1 *)unaff_x19 = 0;
  *(undefined1 *)((long)unaff_x19 + 0x17) = 0;
  return;
}



/* Entry: 10b4fe6cc; end: 10b4fedaf;  */

long * FUN_10b4fe6cc(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int iVar3;
  int unaff_w23;
  int iVar4;
  
  func_0x00010b504084();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 >> 3 & 1) != 0) {
    func_0x00010b50402c();
    unaff_w21 = *(int *)(unaff_x20 + 0x60);
    func_0x00010b504368();
    func_0x00010b5040c8();
    param_4 = param_1;
  }
  if ((uVar1 & 1) != 0) {
    func_0x00010b504150();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x50) + 0x14);
    param_4 = (long *)0x4;
    func_0x00010b5041e8();
  }
  func_0x00010b504358();
  while (unaff_w23 != unaff_w21) {
    func_0x00010b503f18();
    func_0x00010b5041e8(6);
    func_0x00010b504330();
  }
  func_0x00010b5045d0();
  while (unaff_w23 != unaff_w21) {
    func_0x00010b503f18();
    func_0x00010b5041e8(7);
    func_0x00010b504330();
  }
  if ((uVar1 >> 2 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x58) + 0x18);
    param_4 = (long *)0x8;
    func_0x00010b5041e8();
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
  if ((long)(int)param_3 <= *unaff_x19 - (long)param_4) {
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
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



/* Entry: 10b4fedb0; end: 10b4feddb;  */

undefined8 FUN_10b4fedb0(undefined8 param_1)

{
  func_0x00010b504218();
  FUN_10b4feddc(param_1);
  return param_1;
}



/* Entry: 10b4feddc; end: 10b4fee1b;  */

void FUN_10b4feddc(void)

{
  long unaff_x19;
  
  func_0x00010b50433c();
  func_0x000107c30258();
  func_0x00010b5046ac();
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    FUN_10b4ff190();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    FUN_10b4ff2e0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4fee1c; end: 10b4fee1f;  */

undefined8 FUN_10b4fee1c(undefined8 param_1)

{
  func_0x00010b504218();
  FUN_10b4feddc(param_1);
  return param_1;
}



/* Entry: 10b4fee20; end: 10b4fee33;  */

void FUN_10b4fee20(void)

{
  FUN_10b4fedb0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4fee34; end: 10b4fee3f;  */

undefined ** FUN_10b4fee34(void)

{
  return &PTR_DAT_110cf6500;
}



/* Entry: 10b4fee40; end: 10b4feefb;  */

void FUN_10b4fee40(void)

{
  int iVar1;
  long unaff_x19;
  uint unaff_w20;
  
  func_0x00010b5043c4();
  if ((unaff_w20 >> 2 & 1) != 0) {
    iVar1 = (int)*(undefined8 *)(unaff_x19 + 0x28);
    func_0x00010b4ff1dc();
    if (iVar1 == 0) {
      return;
    }
  }
  if ((unaff_w20 >> 3 & 1) != 0) {
    func_0x00010b4ff354();
  }
  return;
}



/* Entry: 10b4feefc; end: 10b4ff08b;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_10b4feefc(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

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
  if ((unaff_w21 >> 2 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x28) + 0x14);
    param_1 = (long *)0x5;
    func_0x00010b5041e8();
    param_4 = param_1;
  }
  if ((unaff_w21 >> 3 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x30) + 0x14);
    param_1 = (long *)0x8;
    func_0x00010b5041e8();
    param_4 = param_1;
  }
  if ((unaff_w21 & 1) != 0) {
    func_0x00010b5042f8(*(undefined8 *)(unaff_x20 + 0x18));
    func_0x000107c280a0();
    param_4 = param_1;
  }
  if ((unaff_w21 >> 1 & 1) != 0) {
    func_0x00010b5042f8(*(undefined8 *)(unaff_x20 + 0x20));
    func_0x000107c280a0();
    param_4 = param_1;
  }
  if ((unaff_w21 >> 4 & 1) != 0) {
    func_0x00010b50402c();
    param_4 = (long *)0xe8;
    func_0x000107c280a8(0xe8,param_1);
    func_0x00010b5040bc();
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
  if ((long)(int)param_3 <= *unaff_x19 - (long)param_4) {
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
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



/* Entry: 10b4ff08c; end: 10b4ff0bb;  */

void FUN_10b4ff08c(void)

{
  FUN_10b4ff268();
  FUN_10b503ee4();
  return;
}



/* Entry: 10b4ff0bc; end: 10b4ff0bf;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b4ff0bc(ulong *param_1)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong extraout_x8;
  undefined8 uVar4;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b504318();
  puVar3 = (ulong *)param_1[1];
  puVar2 = puVar3;
  if (((ulong)puVar3 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
      *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | 1;
      if (((ulong)puVar3 & 1) != 0) {
        func_0x00010b504304(uVar4);
      }
      param_1 = (ulong *)(unaff_x21 + 0x18);
      func_0x00010b504260();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010b5044cc(*(undefined8 *)(unaff_x20 + 0x20));
      if (((ulong)puVar3 & 1) != 0) {
        func_0x00010b504304();
      }
      param_1 = (ulong *)(unaff_x21 + 0x20);
      func_0x00010b504260();
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        func_0x00010b5037c0();
        *(ulong **)(unaff_x21 + 0x28) = puVar2;
        param_1 = puVar2;
      }
      else {
        func_0x00010b4ff0c0();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x30);
      if (param_1 == (ulong *)0x0) {
        func_0x00010b5046fc();
        *(ulong **)(unaff_x21 + 0x30) = param_1;
      }
      else {
        func_0x00010b4ff130();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0x38) = *(undefined1 *)(unaff_x20 + 0x38);
    }
  }
  func_0x00010b504018();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x00010b50410c();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b4ff0c0; end: 10b4ff18f;  */

void FUN_10b4ff0c0(ulong *param_1,long param_2,ulong param_3)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b5043e8();
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b50406c();
      if ((param_3 & 1) != 0) {
        func_0x00010b504304();
      }
      func_0x00010b504198();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010b504754();
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(unaff_x20 + 0x24);
    }
  }
  func_0x00010b504130();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
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



/* Entry: 10b4ff190; end: 10b4ff1b7;  */

undefined8 FUN_10b4ff190(undefined8 param_1)

{
  func_0x00010b504218();
  func_0x00010b504508();
  return param_1;
}



/* Entry: 10b4ff1b8; end: 10b4ff1bb;  */

undefined8 FUN_10b4ff1b8(undefined8 param_1)

{
  func_0x00010b504218();
  func_0x00010b504508();
  return param_1;
}



/* Entry: 10b4ff1bc; end: 10b4ff1cf;  */

void FUN_10b4ff1bc(void)

{
  FUN_10b4ff190();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4ff1d0; end: 10b4ff1df;  */

undefined ** FUN_10b4ff1d0(void)

{
  return &PTR_DAT_110cf6548;
}



/* Entry: 10b4ff1e0; end: 10b4ff267;  */

long * FUN_10b4ff1e0(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

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
  if ((unaff_w21 & 1) != 0) {
    func_0x00010b504038();
    param_4 = param_1;
  }
  if ((unaff_w21 >> 1 & 1) != 0) {
    func_0x00010b50442c();
    func_0x00010598f43c();
    param_4 = param_1;
  }
  if ((unaff_w21 >> 2 & 1) != 0) {
    func_0x00010b50442c();
    func_0x000107c282ac();
    param_4 = param_1;
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
  if ((long)(int)param_3 <= *unaff_x19 - (long)param_4) {
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
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



/* Entry: 10b4ff268; end: 10b4ff2db;  */

void FUN_10b4ff268(int param_1)

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
      func_0x00010b504234();
      param_1 = param_1 + 1;
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      func_0x00010b50456c((long)*(int *)(unaff_x19 + 0x20));
    }
  }
  if ((unaff_w20 >> 2 & 1) != 0) {
    func_0x00010b50456c((long)*(int *)(unaff_x19 + 0x24));
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



/* Entry: 10b4ff2dc; end: 10b4ff2df;  */

void FUN_10b4ff2dc(ulong *param_1,long param_2,ulong param_3)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b5043e8();
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b50406c();
      if ((param_3 & 1) != 0) {
        func_0x00010b504304();
      }
      func_0x00010b504198();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010b504754();
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(unaff_x20 + 0x24);
    }
  }
  func_0x00010b504130();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
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



/* Entry: 10b4ff2e0; end: 10b4ff30b;  */

undefined8 FUN_10b4ff2e0(undefined8 param_1)

{
  func_0x00010b504218();
  FUN_10b4ff30c(param_1);
  return param_1;
}



/* Entry: 10b4ff30c; end: 10b4ff32f;  */

/* WARNING: Possible PIC construction at 0x00010b4ff31c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b4ff320) */

void FUN_10b4ff30c(ulong *param_1)

{
  ulong uVar1;
  
  func_0x00010b50433c();
  uVar1 = *param_1 ^ 2;
  if ((uVar1 & 3) != 0) {
    uVar1 = 0;
  }
  if (uVar1 != 0) {
    func_0x000107c60ca0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(uVar1);
  return;
}



/* Entry: 10b4ff330; end: 10b4ff333;  */

undefined8 FUN_10b4ff330(undefined8 param_1)

{
  func_0x00010b504218();
  FUN_10b4ff30c(param_1);
  return param_1;
}



/* Entry: 10b4ff334; end: 10b4ff347;  */

void FUN_10b4ff334(void)

{
  FUN_10b4ff2e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4ff348; end: 10b4ff357;  */

undefined ** FUN_10b4ff348(void)

{
  return &PTR_DAT_110cf6598;
}



/* Entry: 10b4ff358; end: 10b4ff42f;  */

long * FUN_10b4ff358(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

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
  if ((unaff_w21 & 1) != 0) {
    func_0x00010b504038();
    param_4 = param_1;
  }
  if ((unaff_w21 >> 1 & 1) != 0) {
    func_0x00010b5042f8(*(undefined8 *)(unaff_x20 + 0x20));
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



/* Entry: 10b4ff430; end: 10b4ff433;  */

void FUN_10b4ff430(ulong *param_1,undefined8 param_2,ulong param_3)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x19;
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
      func_0x00010b5043ac();
      if ((param_3 & 1) != 0) {
        func_0x00010b504304();
      }
      param_1 = (ulong *)(unaff_x19 + 0x20);
      func_0x00010b504260();
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



/* Entry: 10b4ff434; end: 10b4ff46b;  */

long FUN_10b4ff434(long param_1)

{
  func_0x00010b504218();
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 10b4ff46c; end: 10b4ff46f;  */

long FUN_10b4ff46c(long param_1)

{
  func_0x00010b504218();
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 10b4ff470; end: 10b4ff483;  */

void FUN_10b4ff470(void)

{
  FUN_10b4ff434();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4ff484; end: 10b4ff48f;  */

undefined ** FUN_10b4ff484(void)

{
  return &PTR_DAT_110cf65e0;
}



/* Entry: 10b4ff490; end: 10b4ff4cf;  */

void FUN_10b4ff490(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
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



/* Entry: 10b4ff4d0; end: 10b4ff543;  */

long * FUN_10b4ff4d0(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b504084();
  iVar3 = *(int *)(param_1 + 0x18);
  while (iVar3 != 0) {
    func_0x00010b503fa4();
    func_0x00010b5041e8(1);
    func_0x00010b504330();
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



/* Entry: 10b4ff544; end: 10b4ff59f;  */

long FUN_10b4ff544(void)

{
  long extraout_x8;
  long lVar1;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  func_0x00010b504438();
  func_0x00010b503f8c();
  while (unaff_x22 != 0) {
    FUN_10b4ff5a0(*unaff_x21);
    func_0x00010b5043fc();
    unaff_x21 = unaff_x21 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b504268();
    lVar1 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    unaff_x20 = lVar1 + unaff_x20;
  }
  *(int *)(unaff_x19 + 0x28) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 10b4ff5a0; end: 10b4ff5b7;  */

void FUN_10b4ff5a0(void)

{
  FUN_10b4fc894();
  FUN_10b503ee4();
  return;
}



/* Entry: 10b4ff5b8; end: 10b4ff5bb;  */

void FUN_10b4ff5b8(long param_1)

{
  ulong *puVar1;
  long unaff_x20;
  
  func_0x00010b5043e8();
  puVar1 = (ulong *)(param_1 + 0x10);
  FUN_10b4ff5f4();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b504170();
    if ((*puVar1 & 1) == 0) {
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



/* Entry: 10b4ff5bc; end: 10b4ff5f3;  */

void FUN_10b4ff5bc(long param_1)

{
  ulong *puVar1;
  long unaff_x20;
  
  func_0x00010b5043e8();
  puVar1 = (ulong *)(param_1 + 0x10);
  FUN_10b4ff5f4();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b504170();
    if ((*puVar1 & 1) == 0) {
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



/* Entry: 10b4ff5f4; end: 10b4ff603;  */

void FUN_10b4ff5f4(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  int unaff_w20;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x25;
  long unaff_x26;
  
  if (*(int *)(param_2 + 8) == 0) {
    return;
  }
  func_0x000100361ce4();
  plVar2 = param_1;
  func_0x00010064e8bc();
  plVar3 = (long *)*unaff_x25;
  func_0x000100361e44();
  plVar5 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x000107c39cb4();
    param_1 = param_1 + (int)plVar2;
    plVar5 = unaff_x25 + (int)plVar2;
  }
  lVar4 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, plVar5 < unaff_x25 + unaff_x26; plVar5 = plVar5 + 1) {
    plVar2 = plVar3;
    (**(code **)(*plVar3 + 0x10))(plVar3,lVar4);
    *param_1 = (long)plVar2;
    func_0x00010064e8d4();
    param_1 = param_1 + 1;
  }
  func_0x000100361e74();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 10b4ff604; end: 10b4ff683;  */

void FUN_10b4ff604(void)

{
  undefined1 in_ZR;
  int extraout_w8;
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  
  func_0x00010b5044f0();
  if ((bool)in_ZR) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b5045b4();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_10b4ff660;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_10b4ff434();
    }
  }
  else {
    if ((extraout_w8 != 2) && (extraout_w8 != 1)) goto LAB_10b4ff660;
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b5045b4();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_10b4ff660;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      func_0x000107c316b0();
    }
  }
  __ZdlPv();
LAB_10b4ff660:
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 10b4ff684; end: 10b4ff6af;  */

undefined8 FUN_10b4ff684(undefined8 param_1)

{
  func_0x00010b504218();
  FUN_10b4ff6b0(param_1);
  return param_1;
}



/* Entry: 10b4ff6b0; end: 10b4ff6c3;  */

void FUN_10b4ff6b0(long param_1)

{
  undefined1 in_ZR;
  int extraout_w8;
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  func_0x00010b5044f0();
  if ((bool)in_ZR) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b5045b4();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_10b4ff660;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_10b4ff434();
    }
  }
  else {
    if ((extraout_w8 != 2) && (extraout_w8 != 1)) goto LAB_10b4ff660;
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b5045b4();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_10b4ff660;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      func_0x000107c316b0();
    }
  }
  __ZdlPv();
LAB_10b4ff660:
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 10b4ff6c4; end: 10b4ff6d7;  */

void FUN_10b4ff6c4(void)

{
  FUN_10b4ff684();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4ff6d8; end: 10b4ff6e3;  */

undefined ** FUN_10b4ff6d8(void)

{
  return &PTR_DAT_110cf6638;
}



/* Entry: 10b4ff6e4; end: 10b4ff7c7;  */

long * FUN_10b4ff6e4(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x00010b504084();
  plVar2 = (long *)(ulong)*(uint *)(param_1 + 0x1c);
  uVar1 = *(uint *)(param_1 + 0x1c) - 1;
  if (uVar1 < 3) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x10) +
                              *(long *)(&UNK_10e5b89c8 + (ulong)uVar1 * 8));
    func_0x00010b5041e8();
    param_4 = plVar2;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00010b504254();
  if ((long)param_3 < 0) {
    lVar3 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar3 = extraout_x8 + 8;
  }
  if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar5 = ((int)*unaff_x19 - (int)param_4) + 0x10;
      iVar4 = (int)param_3;
      uVar1 = iVar4 - iVar5;
      param_3 = (ulong)uVar1;
      if (uVar1 == 0 || iVar4 < iVar5) break;
      func_0x00010b4d5738();
      param_4 = unaff_x19;
      func_0x000107c303e4();
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar4);
  }
  _memcpy(param_4,lVar3,param_3 & 0xffffffff);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 10b4ff7c8; end: 10b4ff7cb;  */

void FUN_10b4ff7c8(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  func_0x00010b503fe8();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00010b5043dc();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 == 0) goto LAB_10b4fed94;
  iVar2 = *(int *)((long)unaff_x21 + 0x1c);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      param_1 = unaff_x21;
      FUN_10b4ff604();
    }
    *(int *)((long)unaff_x21 + 0x1c) = iVar1;
  }
  if (iVar1 == 3) {
    if (iVar2 == 3) {
      param_1 = (ulong *)unaff_x21[2];
      FUN_10b4ff5bc();
      goto LAB_10b4fed94;
    }
    func_0x00010b503894();
    param_1 = unaff_x22;
LAB_10b4fed90:
    unaff_x21[2] = (ulong)param_1;
  }
  else {
    if (iVar1 == 2) {
      if (iVar2 != 2) {
LAB_10b4fed50:
        func_0x00010b5046bc();
        goto LAB_10b4fed90;
      }
      func_0x00010b5041b4();
    }
    else {
      if (iVar1 != 1) goto LAB_10b4fed94;
      if (iVar2 != 1) goto LAB_10b4fed50;
      func_0x00010b5041b4();
    }
    func_0x00010bd1b688();
  }
LAB_10b4fed94:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b50410c();
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



/* Entry: 10b4ff7cc; end: 10b4ff7f7;  */

undefined8 * FUN_10b4ff7cc(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110cf6198;
  param_1[1] = param_2;
  FUN_10b4ff7f8();
  return param_1;
}



/* Entry: 10b4ff7f8; end: 10b4ff83f;  */

void FUN_10b4ff7f8(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = param_2;
  *(undefined8 *)(param_1 + 0x40) = param_2;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined **)(param_1 + 0x60) = &DAT_11383d918;
  *(undefined **)(param_1 + 0x68) = &DAT_11383d918;
  *(undefined8 *)(param_1 + 0xb0) = 0x100000001;
  *(undefined4 *)(param_1 + 0xb8) = 1;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  return;
}



/* Entry: 10b4ff840; end: 10b4ff86b;  */

undefined8 FUN_10b4ff840(undefined8 param_1)

{
  func_0x00010b504218();
  FUN_10b4ff86c(param_1);
  return param_1;
}



/* Entry: 10b4ff86c; end: 10b4ff917;  */

undefined8 FUN_10b4ff86c(long param_1)

{
  long extraout_x8;
  undefined8 unaff_x19;
  
  func_0x000107c30258(param_1 + 0x60);
  func_0x000107c30258(param_1 + 0x68);
  if (*(long *)(param_1 + 0x70) != 0) {
    FUN_10b4ff190();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x78) != 0) {
    FUN_10b50115c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x80) != 0) {
    FUN_10b5017c4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x88) != 0) {
    FUN_10b502304();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x90) != 0) {
    FUN_10b501b1c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x98) != 0) {
    FUN_10b4fde44();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xa0) != 0) {
    FUN_10b502538();
  }
  __ZdlPv();
  FUN_10b502a24(param_1 + 0x48);
  func_0x00010b5046b4();
  func_0x00010b504510(param_1 + 0x18);
  if (extraout_x8 != 0) {
    func_0x00010b504454();
  }
  return unaff_x19;
}



/* Entry: 10b4ff918; end: 10b4ff91b;  */

undefined8 FUN_10b4ff918(undefined8 param_1)

{
  func_0x00010b504218();
  FUN_10b4ff86c(param_1);
  return param_1;
}



/* Entry: 10b4ff91c; end: 10b4ff92f;  */

void FUN_10b4ff91c(void)

{
  FUN_10b4ff840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4ff930; end: 10b4ff93b;  */

undefined ** FUN_10b4ff930(void)

{
  return &PTR_DAT_110cf6690;
}



/* Entry: 10b4ff93c; end: 10b4ffaff;  */

void FUN_10b4ff93c(long param_1)

{
  uint uVar1;
  int iVar2;
  long unaff_x19;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 >> 0xc & 1) != 0) {
    func_0x00010b50433c();
    iVar2 = (int)param_1;
    FUN_10b4fda0c();
    if (iVar2 != 0) {
      iVar2 = (int)unaff_x19 + 0x30;
      FUN_10b4fda0c();
      if (iVar2 != 0) {
        iVar2 = (int)unaff_x19 + 0x48;
        FUN_10b4fda0c();
        if (iVar2 != 0) {
          if ((uVar1 >> 2 & 1) != 0) {
            iVar2 = (int)*(undefined8 *)(unaff_x19 + 0x70);
            func_0x00010b4ff1dc();
            if (iVar2 == 0) {
              return;
            }
          }
          if ((uVar1 >> 5 & 1) != 0) {
            iVar2 = (int)*(undefined8 *)(unaff_x19 + 0x88);
            func_0x00010b502384();
            if (iVar2 == 0) {
              return;
            }
          }
          if ((uVar1 >> 6 & 1) != 0) {
            FUN_10b501ba4();
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10b4ffb00; end: 10b4ffd5f;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_10b4ffb00(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  int iVar4;
  uint unaff_w23;
  int iVar5;
  
  func_0x00010b504084();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 >> 0xc & 1) != 0) {
    func_0x00010b50402c();
    unaff_w21 = *(uint *)(unaff_x20 + 0xb4);
    func_0x00010b504368();
    func_0x00010b5040c8();
    param_4 = param_1;
  }
  if ((uVar1 >> 9 & 1) != 0) {
    func_0x00010b50402c();
    unaff_w21 = (uint)*(byte *)(unaff_x20 + 0xa8);
    param_4 = (long *)0x88;
    func_0x000107c280a8(0x88,param_1);
    func_0x00010b5040bc();
    param_1 = param_4;
  }
  if ((uVar1 & 1) != 0) {
    func_0x00010b5042f8(*(undefined8 *)(unaff_x20 + 0x60));
    func_0x000107c280a0();
    param_4 = param_1;
  }
  plVar2 = param_1;
  if ((uVar1 >> 10 & 1) != 0) {
    func_0x00010b50402c();
    unaff_w21 = *(uint *)(unaff_x20 + 0xac);
    plVar2 = (long *)0xf0;
    func_0x000107c280a8(0xf0,param_1);
    func_0x00010b5040c8();
    param_4 = plVar2;
  }
  func_0x00010b504358();
  while (unaff_w23 != unaff_w21) {
    func_0x00010b503f18();
    plVar2 = (long *)0x23;
    func_0x00010b5041e8();
    func_0x00010b504330();
  }
  func_0x00010b5045d0();
  while (unaff_w23 != unaff_w21) {
    func_0x00010b503f18();
    plVar2 = (long *)0x24;
    func_0x00010b5041e8();
    func_0x00010b504330();
  }
  if ((uVar1 >> 2 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x70) + 0x14);
    plVar2 = (long *)0x29;
    func_0x00010b5041e8();
    param_4 = plVar2;
  }
  if ((uVar1 >> 0xd & 1) != 0) {
    func_0x00010b50402c();
    param_4 = (long *)0x160;
    func_0x000107c280a8(0x160,plVar2);
    func_0x00010b5040c8();
    plVar2 = param_4;
  }
  if ((uVar1 >> 0xb & 1) != 0) {
    func_0x00010b50402c();
    param_4 = (long *)0x168;
    func_0x000107c280a8(0x168,plVar2);
    func_0x00010b5040c8();
    plVar2 = param_4;
  }
  if ((uVar1 >> 3 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x78) + 0x14);
    plVar2 = (long *)0x34;
    func_0x00010b5041e8();
    param_4 = plVar2;
  }
  if ((uVar1 >> 4 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x80) + 0x14);
    plVar2 = (long *)0x35;
    func_0x00010b5041e8();
    param_4 = plVar2;
  }
  if ((uVar1 >> 5 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x88) + 0x14);
    plVar2 = (long *)0x36;
    func_0x00010b5041e8();
    param_4 = plVar2;
  }
  if ((uVar1 >> 6 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x90) + 0x14);
    plVar2 = (long *)0x37;
    func_0x00010b5041e8();
    param_4 = plVar2;
  }
  if ((uVar1 >> 7 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x98) + 0x14);
    plVar2 = (long *)0x38;
    func_0x00010b5041e8();
    param_4 = plVar2;
  }
  if ((uVar1 >> 8 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0xa0) + 0x14);
    plVar2 = (long *)0x39;
    func_0x00010b5041e8();
    param_4 = plVar2;
  }
  iVar4 = *(int *)(unaff_x20 + 0x50);
  while (iVar4 != 0) {
    func_0x00010b503f18();
    plVar2 = (long *)0x3a;
    func_0x00010b5041e8();
    func_0x00010b504330();
  }
  if ((uVar1 >> 1 & 1) != 0) {
    func_0x00010b5042f8(*(undefined8 *)(unaff_x20 + 0x68));
    func_0x000107c280a0();
    param_4 = plVar2;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00010b504254();
  if ((long)param_3 < 0) {
    lVar3 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar3 = extraout_x8 + 8;
  }
  if ((long)(int)param_3 <= *unaff_x19 - (long)param_4) {
    _memcpy(param_4,lVar3,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  while( true ) {
    iVar5 = ((int)*unaff_x19 - (int)param_4) + 0x10;
    iVar4 = (int)param_3;
    uVar1 = iVar4 - iVar5;
    param_3 = (ulong)uVar1;
    if (uVar1 == 0 || iVar4 < iVar5) break;
    func_0x00010b4d5738();
    param_4 = unaff_x19;
    func_0x000107c303e4();
  }
  func_0x00010b4d5738();
  return (long *)((long)param_4 + (long)iVar4);
}



/* Entry: 10b4ffd60; end: 10b4fff37;  */

/* WARNING: Removing unreachable block (ram,0x00010b4ffda4) */
/* WARNING: Removing unreachable block (ram,0x00010b4ffdc8) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10b4ffd60(void)

{
  uint uVar1;
  long unaff_x19;
  long unaff_x22;
  
  func_0x00010b504438();
  func_0x00010b50411c();
  while (unaff_x22 != 0) {
    func_0x00010b504500();
    func_0x00010b5043fc();
  }
  func_0x00010b504484();
  func_0x00010b50411c();
  func_0x00010b50411c();
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b504310(*(undefined8 *)(unaff_x19 + 0x60));
      func_0x00010b504408();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010b50444c(*(undefined8 *)(unaff_x19 + 0x68));
      func_0x00010b504408();
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_10b4ff08c(*(undefined8 *)(unaff_x19 + 0x70));
      func_0x00010b504408();
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x00010b4fd788(*(undefined8 *)(unaff_x19 + 0x78));
      func_0x00010b504408();
    }
    if ((uVar1 >> 4 & 1) != 0) {
      func_0x00010b4fd7a0(*(undefined8 *)(unaff_x19 + 0x80));
      func_0x00010b504408();
    }
    if ((uVar1 >> 5 & 1) != 0) {
      func_0x00010b502464(*(undefined8 *)(unaff_x19 + 0x88));
      func_0x00010b503f00();
    }
    if ((uVar1 >> 6 & 1) != 0) {
      FUN_10b501d6c(*(undefined8 *)(unaff_x19 + 0x90));
      func_0x00010b503f00();
    }
    if ((uVar1 >> 7 & 1) != 0) {
      FUN_10b4fe19c(*(undefined8 *)(unaff_x19 + 0x98));
      func_0x00010b504408();
    }
  }
  if ((uVar1 & 0xf00) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      FUN_10b4fff38(*(undefined8 *)(unaff_x19 + 0xa0));
      func_0x00010b504408();
    }
    if ((uVar1 >> 10 & 1) != 0) {
      func_0x00010b504394((long)*(int *)(unaff_x19 + 0xac));
    }
    if ((uVar1 >> 0xb & 1) != 0) {
      func_0x00010b504394((long)*(int *)(unaff_x19 + 0xb0));
    }
  }
  if ((uVar1 >> 0xc & 1) != 0) {
    func_0x00010b504394((long)*(int *)(unaff_x19 + 0xb4));
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b504268();
  }
  func_0x00010b504324();
  return;
}



/* Entry: 10b4fff38; end: 10b4fff4f;  */

void FUN_10b4fff38(void)

{
  FUN_10b502610();
  FUN_10b503ee4();
  return;
}



/* Entry: 10b4fff50; end: 10b4fff53;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b4fff50(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  ulong *puVar2;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x00010b503fe8();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00010b5043dc();
  }
  func_0x00010b50451c();
  FUN_10b4fd7b8();
  func_0x00010b5047a0();
  func_0x00010b4fd7bc();
  puVar2 = (ulong *)(unaff_x21 + 0x48);
  func_0x00010b4fd7bc();
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b5042b4(*(undefined8 *)(unaff_x20 + 0x60));
      if ((param_3 & 1) != 0) {
        func_0x00010b504304();
      }
      puVar2 = (ulong *)(unaff_x21 + 0x60);
      func_0x00010b504260();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010b5044cc(*(undefined8 *)(unaff_x20 + 0x68));
      if ((param_3 & 1) != 0) {
        func_0x00010b504304();
      }
      puVar2 = (ulong *)(unaff_x21 + 0x68);
      func_0x00010b504260();
    }
    if ((uVar1 >> 2 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x70);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        func_0x00010b5037c0();
        *(ulong **)(unaff_x21 + 0x70) = puVar2;
      }
      else {
        FUN_10b4ff0c0();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x78);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        func_0x00010b503280();
        *(ulong **)(unaff_x21 + 0x78) = puVar2;
      }
      else {
        FUN_10b4fd8a8();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x80);
      if (puVar2 == (ulong *)0x0) {
        func_0x00010b5046ec();
        *(ulong **)(unaff_x21 + 0x80) = puVar2;
      }
      else {
        FUN_10b4fd988();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x88);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        FUN_10b5038e8();
        *(ulong **)(unaff_x21 + 0x88) = puVar2;
      }
      else {
        func_0x00010b4fff54();
      }
    }
    if ((uVar1 >> 6 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x90);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        FUN_10b5039bc();
        *(ulong **)(unaff_x21 + 0x90) = puVar2;
      }
      else {
        func_0x00010b50000c();
      }
    }
    if ((uVar1 >> 7 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x98);
      if (puVar2 == (ulong *)0x0) {
        func_0x00010b5045ac();
        *(ulong **)(unaff_x21 + 0x98) = puVar2;
      }
      else {
        FUN_10b4fde18();
      }
    }
  }
  if ((uVar1 & 0x3f00) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0xa0);
      if (puVar2 == (ulong *)0x0) {
        FUN_10b503ab8();
        *(ulong **)(unaff_x21 + 0xa0) = unaff_x22;
        puVar2 = unaff_x22;
      }
      else {
        FUN_10b500120();
      }
    }
    if ((uVar1 >> 9 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0xa8) = *(undefined1 *)(unaff_x20 + 0xa8);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      *(undefined4 *)(unaff_x21 + 0xac) = *(undefined4 *)(unaff_x20 + 0xac);
    }
    if ((uVar1 >> 0xb & 1) != 0) {
      *(undefined4 *)(unaff_x21 + 0xb0) = *(undefined4 *)(unaff_x20 + 0xb0);
    }
    if ((uVar1 >> 0xc & 1) != 0) {
      *(undefined4 *)(unaff_x21 + 0xb4) = *(undefined4 *)(unaff_x20 + 0xb4);
    }
    if ((uVar1 >> 0xd & 1) != 0) {
      *(undefined4 *)(unaff_x21 + 0xb8) = *(undefined4 *)(unaff_x20 + 0xb8);
    }
  }
  func_0x00010b504018();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b50410c();
    if ((*puVar2 & 1) == 0) {
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



/* Entry: 10b4fff54; end: 10b50011f;  */

void FUN_10b4fff54(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x00010b503fe8();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00010b5043dc();
  }
  func_0x00010b50451c();
  FUN_10b501770();
  func_0x00010b5047a0();
  FUN_10b502524();
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b504714();
      if (param_1 == (ulong *)0x0) {
        FUN_10b503e84();
        *(ulong **)(unaff_x21 + 0x48) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_10b502098();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x50);
      if (param_1 == (ulong *)0x0) {
        func_0x00010b504704();
        *(ulong **)(unaff_x21 + 0x50) = param_1;
      }
      else {
        FUN_10b501a94();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined4 *)(unaff_x21 + 0x58) = *(undefined4 *)(unaff_x20 + 0x58);
    }
  }
  func_0x00010b504018();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x00010b50410c();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b500120; end: 10b500207;  */

void FUN_10b500120(ulong *param_1,long param_2)

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



/* Entry: 10b500208; end: 10b500233;  */

undefined8 FUN_10b500208(undefined8 param_1)

{
  func_0x00010b504218();
  func_0x00010b504508();
  func_0x00010b5046ac();
  return param_1;
}



/* Entry: 10b500234; end: 10b500237;  */

undefined8 FUN_10b500234(undefined8 param_1)

{
  func_0x00010b504218();
  func_0x00010b504508();
  func_0x00010b5046ac();
  return param_1;
}



/* Entry: 10b500238; end: 10b50024b;  */

void FUN_10b500238(void)

{
  FUN_10b500208();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b50024c; end: 10b500263;  */

undefined ** FUN_10b50024c(void)

{
  return &PTR_DAT_110cf66d8;
}



/* Entry: 10b500264; end: 10b5002a3;  */

void FUN_10b500264(void)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  ulong *unaff_x19;
  uint unaff_w20;
  
  func_0x00010b5041a4();
  if (!(bool)in_ZR) {
    if ((unaff_w20 & 1) != 0) {
      func_0x00010b504424();
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      func_0x00010b504558();
    }
  }
  func_0x00010b504370();
  if ((extraout_x8 & 1) == 0) {
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



/* Entry: 10b5002a4; end: 10b5003d3;  */

long * FUN_10b5002a4(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

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
  if ((unaff_w21 & 1) != 0) {
    func_0x00010b504038();
    param_4 = param_1;
  }
  if ((unaff_w21 >> 1 & 1) != 0) {
    func_0x00010b5042f8(*(undefined8 *)(unaff_x20 + 0x20));
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



/* Entry: 10b5003d4; end: 10b5003f7;  */

undefined8 FUN_10b5003d4(undefined8 param_1)

{
  func_0x00010b504218();
  return param_1;
}



/* Entry: 10b5003f8; end: 10b5003fb;  */

undefined8 FUN_10b5003f8(undefined8 param_1)

{
  func_0x00010b504218();
  return param_1;
}



/* Entry: 10b5003fc; end: 10b50040f;  */

void FUN_10b5003fc(void)

{
  FUN_10b5003d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b500410; end: 10b500443;  */

undefined ** FUN_10b500410(void)

{
  return &PTR_DAT_110cf6720;
}



/* Entry: 10b500444; end: 10b5004b3;  */

long * FUN_10b500444(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

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
  if ((unaff_w21 & 1) != 0) {
    func_0x00010b50442c();
    func_0x000107c282e4();
    param_4 = param_1;
  }
  if ((unaff_w21 >> 1 & 1) != 0) {
    func_0x00010b50402c();
    func_0x00010b504538();
    func_0x00010b5040bc();
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



/* Entry: 10b5004b4; end: 10b500573;  */

ulong FUN_10b5004b4(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) == 0) {
    uVar2 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar2 = uVar2 + ((int)LZCOUNT(*(undefined4 *)(param_1 + 0x1c)) * -9 + 0x1a0U >> 6);
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    uVar2 = lVar3 + uVar2;
  }
  *(int *)(param_1 + 0x14) = (int)uVar2;
  return uVar2;
}



/* Entry: 10b500574; end: 10b5005ab;  */

long FUN_10b500574(long param_1)

{
  func_0x00010b504218();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 10b5005ac; end: 10b5005af;  */

long FUN_10b5005ac(long param_1)

{
  func_0x00010b504218();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 10b5005b0; end: 10b5005c3;  */

void FUN_10b5005b0(void)

{
  FUN_10b500574();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5005c4; end: 10b5005cf;  */

undefined ** FUN_10b5005c4(void)

{
  return &PTR_DAT_110cf6768;
}



/* Entry: 10b5005d0; end: 10b50061b;  */

void FUN_10b5005d0(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x0001053936e4(param_1 + 0x18);
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x30) = 1;
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



/* Entry: 10b50061c; end: 10b5006a3;  */

long * FUN_10b50061c(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

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



/* Entry: 10b5006a4; end: 10b500703;  */

void FUN_10b5006a4(void)

{
  long unaff_x19;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  func_0x00010b503f38();
  while (unaff_x22 != 0) {
    FUN_10b4fe19c(*unaff_x21);
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



/* Entry: 10b500704; end: 10b500707;  */

void FUN_10b500704(ulong *param_1,long param_2)

{
  ulong extraout_x8;
  long unaff_x19;
  
  func_0x00010b50433c();
  FUN_10b500750();
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



/* Entry: 10b500708; end: 10b50074f;  */

void FUN_10b500708(ulong *param_1,long param_2)

{
  ulong extraout_x8;
  long unaff_x19;
  
  func_0x00010b50433c();
  FUN_10b500750();
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



/* Entry: 10b500750; end: 10b50075f;  */

void FUN_10b500750(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  int unaff_w20;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x25;
  long unaff_x26;
  
  if (*(int *)(param_2 + 8) == 0) {
    return;
  }
  func_0x000100361ce4();
  plVar2 = param_1;
  func_0x00010064e8bc();
  plVar3 = (long *)*unaff_x25;
  func_0x000100361e44();
  plVar5 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x000107c39cb4();
    param_1 = param_1 + (int)plVar2;
    plVar5 = unaff_x25 + (int)plVar2;
  }
  lVar4 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, plVar5 < unaff_x25 + unaff_x26; plVar5 = plVar5 + 1) {
    plVar2 = plVar3;
    (**(code **)(*plVar3 + 0x10))(plVar3,lVar4);
    *param_1 = (long)plVar2;
    func_0x00010064e8d4();
    param_1 = param_1 + 1;
  }
  func_0x000100361e74();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 10b500760; end: 10b500793;  */

long FUN_10b500760(long param_1)

{
  func_0x00010b504218();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b500574();
  }
  __ZdlPv();
  return param_1;
}


