/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108b32290; end: 108b322a3;  */

void FUN_108b32290(void)

{
  FUN_108b32268();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108b322a4; end: 108b322d7;  */

undefined ** FUN_108b322a4(void)

{
  return &PTR_DAT_110ab2e70;
}



/* Entry: 108b322d8; end: 108b32353;  */

long * FUN_108b322d8(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  int iVar4;
  int iVar5;
  
  FUN_108b33914();
  if ((unaff_w21 & 1) != 0) {
    func_0x000108b33944();
    param_4 = param_1;
  }
  if ((unaff_w21 >> 1 & 1) != 0) {
    func_0x000108b33960();
    param_4 = (long *)(ulong)*(byte *)(unaff_x20 + 0x1c);
    uVar2 = 0x10;
    func_0x000107c280a8(0x10,param_1);
    func_0x000107c280a8(param_4,uVar2);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108b33a30();
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
  return param_4;
}



/* Entry: 108b32354; end: 108b323ef;  */

long FUN_108b32354(long param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong extraout_x8;
  long lVar3;
  long extraout_x9;
  long lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  uVar2 = (ulong)uVar1;
  if ((uVar1 & 3) == 0) {
    lVar3 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      lVar3 = 0;
    }
    else {
      func_0x000108b33b54();
      uVar2 = extraout_x8;
      lVar3 = extraout_x9;
    }
    lVar3 = lVar3 + (uVar2 & 2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar2 + 0x10);
    }
    lVar3 = lVar4 + lVar3;
  }
  *(int *)(param_1 + 0x14) = (int)lVar3;
  return lVar3;
}



/* Entry: 108b323f0; end: 108b32413;  */

undefined8 FUN_108b323f0(undefined8 param_1)

{
  func_0x000108b339f8();
  return param_1;
}



/* Entry: 108b32414; end: 108b32417;  */

undefined8 FUN_108b32414(undefined8 param_1)

{
  func_0x000108b339f8();
  return param_1;
}



/* Entry: 108b32418; end: 108b3242b;  */

void FUN_108b32418(void)

{
  FUN_108b323f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108b3242c; end: 108b3245b;  */

undefined ** FUN_108b3242c(void)

{
  return &PTR_DAT_110ab2ed0;
}



/* Entry: 108b3245c; end: 108b324c3;  */

long * FUN_108b3245c(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  int iVar3;
  int iVar4;
  
  FUN_108b33914();
  if ((unaff_w21 & 1) != 0) {
    func_0x000108b33944();
    param_4 = param_1;
  }
  if ((unaff_w21 >> 1 & 1) != 0) {
    func_0x000108b339d0();
    func_0x00010598f43c();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108b33a30();
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



/* Entry: 108b324c4; end: 108b32573;  */

ulong FUN_108b324c4(long param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong extraout_x8;
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
      func_0x000108b33bbc();
      uVar2 = extraout_x8;
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



/* Entry: 108b32574; end: 108b32597;  */

undefined8 FUN_108b32574(undefined8 param_1)

{
  func_0x000108b339f8();
  return param_1;
}



/* Entry: 108b32598; end: 108b3259b;  */

undefined8 FUN_108b32598(undefined8 param_1)

{
  func_0x000108b339f8();
  return param_1;
}



/* Entry: 108b3259c; end: 108b325af;  */

void FUN_108b3259c(void)

{
  FUN_108b32574();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108b325b0; end: 108b325df;  */

undefined ** FUN_108b325b0(void)

{
  return &PTR_DAT_110ab2f28;
}



/* Entry: 108b325e0; end: 108b32647;  */

long * FUN_108b325e0(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  int iVar3;
  int iVar4;
  
  FUN_108b33914();
  if ((unaff_w21 & 1) != 0) {
    func_0x000108b33944();
    param_4 = param_1;
  }
  if ((unaff_w21 >> 1 & 1) != 0) {
    func_0x000108b339d0();
    func_0x00010598f43c();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108b33a30();
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



/* Entry: 108b32648; end: 108b326f7;  */

ulong FUN_108b32648(long param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong extraout_x8;
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
      func_0x000108b33bbc();
      uVar2 = extraout_x8;
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



/* Entry: 108b326f8; end: 108b3271b;  */

undefined8 FUN_108b326f8(undefined8 param_1)

{
  func_0x000108b339f8();
  return param_1;
}



/* Entry: 108b3271c; end: 108b3271f;  */

undefined8 FUN_108b3271c(undefined8 param_1)

{
  func_0x000108b339f8();
  return param_1;
}



/* Entry: 108b32720; end: 108b32733;  */

void FUN_108b32720(void)

{
  FUN_108b326f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108b32734; end: 108b32763;  */

undefined ** FUN_108b32734(void)

{
  return &PTR_DAT_110ab2f80;
}



/* Entry: 108b32764; end: 108b327cb;  */

long * FUN_108b32764(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  int iVar3;
  int iVar4;
  
  FUN_108b33914();
  if ((unaff_w21 & 1) != 0) {
    func_0x000108b33944();
    param_4 = param_1;
  }
  if ((unaff_w21 >> 1 & 1) != 0) {
    func_0x000108b339d0();
    func_0x00010598f43c();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108b33a30();
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



/* Entry: 108b327cc; end: 108b3287b;  */

ulong FUN_108b327cc(long param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong extraout_x8;
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
      func_0x000108b33bbc();
      uVar2 = extraout_x8;
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



/* Entry: 108b3287c; end: 108b3289f;  */

undefined8 FUN_108b3287c(undefined8 param_1)

{
  func_0x000108b339f8();
  return param_1;
}



/* Entry: 108b328a0; end: 108b328a3;  */

undefined8 FUN_108b328a0(undefined8 param_1)

{
  func_0x000108b339f8();
  return param_1;
}



/* Entry: 108b328a4; end: 108b328b7;  */

void FUN_108b328a4(void)

{
  FUN_108b3287c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108b328b8; end: 108b328e7;  */

undefined ** FUN_108b328b8(void)

{
  return &PTR_DAT_110ab2fd8;
}



/* Entry: 108b328e8; end: 108b32957;  */

long * FUN_108b328e8(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  int iVar3;
  int iVar4;
  
  FUN_108b33914();
  if ((unaff_w21 & 1) != 0) {
    func_0x000108b33944();
    param_4 = param_1;
  }
  if ((unaff_w21 >> 1 & 1) != 0) {
    func_0x000108b33960();
    func_0x000107c280a8(0x15,param_1);
    func_0x000108b33bb0();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108b33a30();
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



/* Entry: 108b32958; end: 108b329bb;  */

long FUN_108b32958(long param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong extraout_x8;
  long lVar3;
  long extraout_x9;
  long lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  uVar2 = (ulong)uVar1;
  if ((uVar1 & 3) == 0) {
    lVar3 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      lVar3 = 0;
    }
    else {
      func_0x000108b33b54();
      uVar2 = extraout_x8;
      lVar3 = extraout_x9;
    }
    if ((uVar2 & 2) != 0) {
      lVar3 = lVar3 + 5;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar2 + 0x10);
    }
    lVar3 = lVar4 + lVar3;
  }
  *(int *)(param_1 + 0x14) = (int)lVar3;
  return lVar3;
}



/* Entry: 108b329bc; end: 108b32b17;  */

void FUN_108b329bc(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  
  switch(*(undefined4 *)(param_1 + 0x28)) {
  case 0x15:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108b33aa8();
      uVar1 = extraout_x8_02;
    }
    if (uVar1 != 0) goto LAB_108b32ab8;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_108b3164c();
    }
    break;
  case 0x16:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108b33aa8();
      uVar1 = extraout_x8_03;
    }
    if (uVar1 != 0) goto LAB_108b32ab8;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_108b31e64();
    }
    break;
  case 0x17:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108b33aa8();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_108b32ab8;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_108b323f0();
    }
    break;
  case 0x18:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108b33aa8();
      uVar1 = extraout_x8_01;
    }
    if (uVar1 != 0) goto LAB_108b32ab8;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_108b32574();
    }
    break;
  case 0x19:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108b33aa8();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_108b32ab8;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_108b326f8();
    }
    break;
  case 0x1a:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108b33aa8();
      uVar1 = extraout_x8_04;
    }
    if (uVar1 != 0) goto LAB_108b32ab8;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_108b31b10();
    }
    break;
  case 0x1b:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108b33aa8();
      uVar1 = extraout_x8_05;
    }
    if (uVar1 != 0) goto LAB_108b32ab8;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_108b32268();
    }
    break;
  default:
    goto LAB_108b32ab8;
  }
  __ZdlPv();
LAB_108b32ab8:
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}



/* Entry: 108b32b18; end: 108b32b5b;  */

long FUN_108b32b18(long param_1)

{
  func_0x000108b339f8();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_108b3287c();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_108b329bc(param_1);
  }
  return param_1;
}



/* Entry: 108b32b5c; end: 108b32b5f;  */

long FUN_108b32b5c(long param_1)

{
  func_0x000108b339f8();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_108b3287c();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_108b329bc(param_1);
  }
  return param_1;
}



/* Entry: 108b32b60; end: 108b32b73;  */

void FUN_108b32b60(void)

{
  FUN_108b32b18();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108b32b74; end: 108b32b7f;  */

undefined ** FUN_108b32b74(void)

{
  return &PTR_DAT_110ab3038;
}



/* Entry: 108b32b80; end: 108b32d2f;  */

void FUN_108b32b80(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x000108b328c4(*(undefined8 *)(param_1 + 0x18));
  }
  FUN_108b329bc(param_1);
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
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



/* Entry: 108b32d30; end: 108b32f33;  */

void FUN_108b32d30(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  func_0x000108b33a44();
  if (((ulong)unaff_x22 & 1) != 0) {
    unaff_x22 = *(ulong **)((ulong)unaff_x22 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = (ulong *)unaff_x21[3];
    if (param_1 == (ulong *)0x0) {
      FUN_108b335cc();
      unaff_x21[3] = (ulong)unaff_x22;
      param_1 = unaff_x22;
    }
    else {
      func_0x000108b32840();
    }
  }
  func_0x000108b33af4();
  iVar1 = *(int *)(unaff_x20 + 0x28);
  if (iVar1 != 0) {
    iVar2 = (int)unaff_x21[5];
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        FUN_108b329bc();
      }
      *(int *)(unaff_x21 + 5) = iVar1;
    }
    switch(iVar1) {
    case 0x15:
      if (iVar2 == iVar1) {
        func_0x000108b339a0();
        FUN_108b3185c();
        goto LAB_108b32f18;
      }
      func_0x000108b33a9c();
      FUN_108b33620();
      break;
    case 0x16:
      if (iVar2 == iVar1) {
        func_0x000108b339a0();
        FUN_108b31d78();
        goto LAB_108b32f18;
      }
      func_0x000108b33a9c();
      FUN_108b336c4();
      break;
    case 0x17:
      if (iVar2 == iVar1) {
        func_0x000108b339a0();
        func_0x000108b323b4();
        goto LAB_108b32f18;
      }
      func_0x000108b33a9c();
      FUN_108b33728();
      break;
    case 0x18:
      if (iVar2 == iVar1) {
        func_0x000108b339a0();
        func_0x000108b32538();
        goto LAB_108b32f18;
      }
      func_0x000108b33a9c();
      FUN_108b3377c();
      break;
    case 0x19:
      if (iVar2 == iVar1) {
        func_0x000108b339a0();
        func_0x000108b326bc();
        goto LAB_108b32f18;
      }
      func_0x000108b33a9c();
      FUN_108b337d0();
      break;
    case 0x1a:
      if (iVar2 == iVar1) {
        func_0x000108b339a0();
        FUN_108b31cdc();
        goto LAB_108b32f18;
      }
      func_0x000108b33a9c();
      FUN_108b33824();
      break;
    case 0x1b:
      if (iVar2 == iVar1) {
        func_0x000108b339a0();
        func_0x000108b3222c();
        goto LAB_108b32f18;
      }
      func_0x000108b33a9c();
      FUN_108b338b8();
      break;
    default:
      goto LAB_108b32f18;
    }
    unaff_x21[4] = (ulong)param_1;
  }
LAB_108b32f18:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108b33b04();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 108b32f34; end: 108b32f5f;  */

long FUN_108b32f34(long param_1)

{
  func_0x000108b339f8();
  FUN_108b3323c(param_1 + 0x18);
  return param_1;
}



/* Entry: 108b32f60; end: 108b32f63;  */

long FUN_108b32f60(long param_1)

{
  func_0x000108b339f8();
  FUN_108b3323c(param_1 + 0x18);
  return param_1;
}



/* Entry: 108b32f64; end: 108b32f77;  */

void FUN_108b32f64(void)

{
  FUN_108b32f34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108b32f78; end: 108b32f83;  */

undefined ** FUN_108b32f78(void)

{
  return &PTR_DAT_110ab3088;
}



/* Entry: 108b32f84; end: 108b32fd7;  */

void FUN_108b32f84(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x0001053936e4(param_1 + 0x18);
  }
  if ((*(byte *)(param_1 + 0x10) & 3) != 0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
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



/* Entry: 108b32fd8; end: 108b3315b;  */

long * FUN_108b32fd8(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  int iVar4;
  long *plVar5;
  int iVar6;
  
  lVar3 = param_1[4];
  plVar2 = param_1;
  plVar5 = param_3;
  for (iVar4 = 0; (int)lVar3 != iVar4; iVar4 = iVar4 + 1) {
    func_0x000108b33990();
    param_2 = plVar2;
  }
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    func_0x000108b339d0();
    func_0x00010598f43c();
    param_2 = plVar2;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    func_0x000108b33960();
    func_0x000107c280a8(0x1d,plVar2);
    func_0x000108b33bb0();
  }
  if ((param_1[1] & 1U) == 0) {
    return param_2;
  }
  func_0x000108b33a30();
  if ((long)plVar5 < 0) {
    lVar3 = *(long *)(extraout_x8 + 8);
    plVar5 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar3 = extraout_x8 + 8;
  }
  if ((long)(int)plVar5 <= *param_3 - (long)param_2) {
    _memcpy(param_2,lVar3,(ulong)plVar5 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)plVar5);
  }
  while( true ) {
    iVar6 = ((int)*param_3 - (int)param_2) + 0x10;
    iVar4 = (int)plVar5;
    plVar5 = (long *)(ulong)(uint)(iVar4 - iVar6);
    if (iVar4 - iVar6 == 0 || iVar4 < iVar6) break;
    func_0x00010b4d5738();
    lVar3 = (long)param_2 + (long)iVar6;
    param_2 = param_3;
    func_0x000107c303e4(param_3,lVar3);
  }
  func_0x00010b4d5738();
  return (long *)((long)param_2 + (long)iVar4);
}



/* Entry: 108b3315c; end: 108b331db;  */

void FUN_108b3315c(long param_1,long param_2)

{
  uint uVar1;
  
  if (*(int *)(param_2 + 0x20) != 0) {
    func_0x000107c303c4(param_1 + 0x18,param_2 + 0x18);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 108b331dc; end: 108b3323b;  */

void FUN_108b331dc(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_2;
  if (param_2 == (undefined8 *)0x0) {
    func_0x000108b33a20();
  }
  else {
    func_0x000108b339b0();
  }
  *puVar1 = &PTR_FUN_110ab28e0;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  *(undefined8 *)((long)puVar1 + 0x15) = 0;
  return;
}



/* Entry: 108b3323c; end: 108b3326b;  */

long * FUN_108b3323c(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 108b3326c; end: 108b33513;  */

void FUN_108b3326c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x000108b33a20();
  }
  else {
    func_0x000108b339b0();
  }
  *puVar1 = &PTR_FUN_110ab28e0;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  *(undefined8 *)((long)puVar1 + 0x15) = 0;
  return;
}



/* Entry: 108b33514; end: 108b3356f;  */

undefined8 * FUN_108b33514(undefined8 *param_1)

{
  undefined8 unaff_x21;
  
  func_0x000108b33a90();
  if (param_1 == (undefined8 *)0x0) {
    func_0x000108b33a58();
  }
  else {
    func_0x000108b33b34();
  }
  *param_1 = &PTR_FUN_110ab29d0;
  param_1[1] = unaff_x21;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  FUN_108b31450();
  return param_1;
}



/* Entry: 108b33570; end: 108b335cb;  */

undefined8 * FUN_108b33570(undefined8 *param_1)

{
  undefined8 unaff_x21;
  
  func_0x000108b33a90();
  if (param_1 == (undefined8 *)0x0) {
    func_0x000108b33a58();
  }
  else {
    func_0x000108b33b34();
  }
  *param_1 = &PTR_FUN_110ab2980;
  param_1[1] = unaff_x21;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  FUN_108b31914();
  return param_1;
}



/* Entry: 108b335cc; end: 108b3361f;  */

long FUN_108b335cc(long param_1)

{
  func_0x000108b33a90();
  if (param_1 == 0) {
    func_0x000108b33a20();
  }
  else {
    func_0x000108b339bc();
  }
  func_0x000108b33b98(&PTR_FUN_110ab2a70);
  func_0x000108b32840();
  return param_1;
}



/* Entry: 108b33620; end: 108b336c3;  */

undefined8 * FUN_108b33620(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x000108b33b4c();
  }
  else {
    func_0x00010b4d80e0(param_1,0x30);
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR_FUN_110ab2bb0;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x000108b33b40();
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  *(uint *)(puVar2 + 2) = uVar1;
  *(undefined4 *)((long)puVar2 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = param_1;
    FUN_108b33514(param_1,*(undefined8 *)(param_2 + 0x18));
  }
  puVar2[3] = puVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    FUN_108b33514(param_1,*(undefined8 *)(param_2 + 0x20));
  }
  puVar2[4] = param_1;
  *(undefined4 *)(puVar2 + 5) = *(undefined4 *)(param_2 + 0x28);
  return puVar2;
}



/* Entry: 108b336c4; end: 108b33727;  */

undefined8 * FUN_108b336c4(long param_1)

{
  undefined8 *puVar1;
  undefined8 *unaff_x21;
  
  func_0x000108b33a90();
  if (param_1 == 0) {
    puVar1 = (undefined8 *)0x48;
    __Znwm();
  }
  else {
    puVar1 = unaff_x21;
    func_0x00010b4d80e0();
  }
  *puVar1 = &PTR_FUN_110ab2930;
  puVar1[1] = unaff_x21;
  func_0x000108b33b6c();
  FUN_108b31d78();
  return puVar1;
}



/* Entry: 108b33728; end: 108b3377b;  */

long FUN_108b33728(long param_1)

{
  func_0x000108b33a90();
  if (param_1 == 0) {
    func_0x000108b33a20();
  }
  else {
    func_0x000108b339bc();
  }
  func_0x000108b33b98(&PTR_FUN_110ab2ac0);
  func_0x000108b323b4();
  return param_1;
}



/* Entry: 108b3377c; end: 108b337cf;  */

long FUN_108b3377c(long param_1)

{
  func_0x000108b33a90();
  if (param_1 == 0) {
    func_0x000108b33a20();
  }
  else {
    func_0x000108b339bc();
  }
  func_0x000108b33b98(&PTR_FUN_110ab2a20);
  func_0x000108b32538();
  return param_1;
}



/* Entry: 108b337d0; end: 108b33823;  */

long FUN_108b337d0(long param_1)

{
  func_0x000108b33a90();
  if (param_1 == 0) {
    func_0x000108b33a20();
  }
  else {
    func_0x000108b339bc();
  }
  func_0x000108b33b98(&PTR_FUN_110ab2b10);
  func_0x000108b326bc();
  return param_1;
}



/* Entry: 108b33824; end: 108b338b7;  */

undefined8 * FUN_108b33824(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x000108b33a58();
  }
  else {
    func_0x000108b339ec();
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR_FUN_110ab2b60;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x000108b33b40();
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  *(uint *)(puVar2 + 2) = uVar1;
  *(undefined4 *)((long)puVar2 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = param_1;
    FUN_108b33570(param_1,*(undefined8 *)(param_2 + 0x18));
  }
  puVar2[3] = puVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    FUN_108b33570(param_1,*(undefined8 *)(param_2 + 0x20));
  }
  puVar2[4] = param_1;
  return puVar2;
}



/* Entry: 108b338b8; end: 108b33913;  */

undefined8 * FUN_108b338b8(undefined8 *param_1)

{
  undefined8 unaff_x21;
  
  func_0x000108b33a90();
  if (param_1 == (undefined8 *)0x0) {
    func_0x000108b33a20();
  }
  else {
    func_0x000108b339bc();
  }
  *param_1 = &PTR_FUN_110ab28e0;
  param_1[1] = unaff_x21;
  param_1[2] = 0;
  *(undefined8 *)((long)param_1 + 0x15) = 0;
  func_0x000108b3222c();
  return param_1;
}



/* Entry: 108b33914; end: 108b33beb;  */

void FUN_108b33914(void)

{
  return;
}



/* Entry: 108b33bec; end: 108b33e77;  */

void FUN_108b33bec(float *param_1,uint param_2,uint param_3,long param_4)

{
  float *pfVar1;
  long lVar2;
  float *pfVar3;
  bool bVar4;
  ulong uVar5;
  bool bVar6;
  float *pfVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  float *pfVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  uint uVar19;
  ulong uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  if (((param_4 != 0) && (param_1 != (float *)0x0)) && (0 < (int)param_2 && 0 < (int)param_3)) {
    pfVar7 = param_1;
    func_0x000108b60674(param_1,param_3 * param_2);
    uVar5 = (ulong)param_3;
    lVar2 = uVar5 * 4;
    uVar15 = (ulong)param_2;
    pfVar14 = param_1;
    for (uVar13 = 0; uVar13 != param_3; uVar13 = uVar13 + 1) {
      fVar21 = *(float *)(param_4 + uVar13 * 4);
      pfVar1 = param_1 + uVar13;
      pfVar3 = pfVar14;
      for (uVar16 = uVar15; uVar16 != 0; uVar16 = uVar16 - 1) {
        fVar22 = *pfVar3;
        fVar23 = fVar21 * fVar22;
        if (0.0 <= fVar23) break;
        *pfVar3 = fVar22 + fVar22 * fVar23;
        pfVar3 = pfVar3 + uVar5;
      }
      if ((int)pfVar7 == 0) {
        uVar16 = 0;
        fVar21 = *pfVar1;
        do {
          uVar19 = (uint)uVar16;
          uVar17 = (ulong)(int)uVar19;
          if ((int)uVar19 <= (int)param_2) {
            uVar19 = param_2;
          }
          lVar18 = lVar2 * uVar17;
          uVar16 = uVar17;
          for (lVar11 = lVar18;
              (uVar20 = (ulong)uVar19, (long)uVar16 < (long)uVar15 &&
              (uVar20 = uVar16, ABS(*(float *)((long)pfVar14 + lVar11)) <= 1.0));
              lVar11 = lVar11 + lVar2) {
            uVar16 = uVar16 + 1;
          }
          uVar19 = (uint)uVar20;
          if (uVar19 == param_2) goto LAB_108b33c94;
          fVar23 = pfVar1[(int)(uVar19 * param_3)];
          fVar22 = ABS(fVar23);
          uVar10 = (ulong)(int)uVar19;
          lVar11 = lVar2 * (uVar10 - 1);
          uVar16 = uVar10;
          uVar8 = uVar19 + 1;
          do {
            uVar9 = uVar19 & (int)uVar19 >> 0x1f;
            if ((long)uVar16 < 1) break;
            pfVar3 = (float *)((long)pfVar14 + lVar11);
            uVar9 = uVar8 - 1;
            lVar11 = lVar11 + uVar5 * -4;
            uVar16 = uVar16 - 1;
            uVar8 = uVar9;
          } while (0.0 <= fVar23 * *pfVar3);
          if ((int)uVar19 <= (int)param_2) {
            uVar19 = param_2;
          }
          for (lVar11 = lVar2 * uVar10;
              (uVar16 = (ulong)uVar19, (long)uVar10 < (long)uVar15 &&
              (uVar16 = uVar10, 0.0 <= fVar23 * *(float *)((long)pfVar14 + lVar11)));
              lVar11 = lVar11 + lVar2) {
            fVar24 = ABS(*(float *)((long)pfVar14 + lVar11));
            uVar8 = (uint)uVar10;
            if (fVar24 <= fVar22) {
              uVar8 = (uint)uVar20;
              fVar24 = fVar22;
            }
            fVar22 = fVar24;
            uVar20 = (ulong)uVar8;
            uVar10 = uVar10 + 1;
          }
          if (uVar9 == 0) {
            bVar6 = 0.0 <= fVar23 * *pfVar1;
          }
          else {
            bVar6 = false;
          }
          fVar24 = (fVar22 + -1.0) / (fVar22 * fVar22);
          fVar22 = -(fVar24 * 2.4e-07) - fVar24;
          if (fVar23 <= 0.0) {
            fVar22 = fVar24 + fVar24 * 2.4e-07;
          }
          lVar11 = (long)(int)uVar9;
          lVar12 = lVar2 * lVar11;
          for (; lVar11 < (int)(uint)uVar16; lVar11 = lVar11 + 1) {
            fVar23 = *(float *)((long)pfVar14 + lVar12);
            *(float *)((long)pfVar14 + lVar12) = fVar23 + fVar23 * fVar22 * fVar23;
            lVar12 = lVar12 + lVar2;
          }
          bVar4 = false;
          if (1 < (int)(uint)uVar20) {
            bVar4 = bVar6;
          }
          if (bVar4) {
            fVar23 = fVar21 - *pfVar1;
            fVar24 = fVar23 / (float)(uVar20 & 0xffffffff);
            for (; (long)uVar17 < (long)(uVar20 & 0xffffffff); uVar17 = uVar17 + 1) {
              fVar23 = fVar23 - fVar24;
              fVar25 = fVar23 + *(float *)((long)pfVar14 + lVar18);
              fVar26 = -1.0;
              if (-1.0 <= fVar25 || 1.0 < fVar25) {
                fVar26 = 1.0;
              }
              if (fVar25 <= 1.0 && -1.0 <= fVar25) {
                fVar26 = fVar25;
              }
              *(float *)((long)pfVar14 + lVar18) = fVar26;
              lVar18 = lVar18 + lVar2;
            }
          }
        } while ((uint)uVar16 != param_2);
      }
      else {
LAB_108b33c94:
        fVar22 = 0.0;
      }
      *(float *)(param_4 + uVar13 * 4) = fVar22;
      pfVar14 = pfVar14 + 1;
    }
  }
  return;
}



/* Entry: 108b33e78; end: 108b33ee7;  */

int FUN_108b33e78(byte *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  bVar1 = *param_1;
  if ((char)bVar1 < '\0') {
    return (param_2 << (ulong)(bVar1 >> 3 & 3)) / 400;
  }
  if (((bVar1 ^ 0xff) & 0x60) != 0) {
    uVar3 = bVar1 >> 3 & 3;
    iVar4 = (param_2 << (ulong)uVar3) / 100;
    if (uVar3 == 3) {
      iVar4 = (param_2 * 0x3c) / 1000;
    }
    return iVar4;
  }
  if ((bVar1 >> 3 & 1) == 0) {
    iVar4 = 100;
  }
  else {
    iVar4 = 0x32;
  }
  iVar2 = 0;
  if (iVar4 != 0) {
    iVar2 = param_2 / iVar4;
  }
  return iVar2;
}



/* Entry: 108b33ee8; end: 108b3425f;  */

ulong FUN_108b33ee8(byte *param_1,int param_2,int param_3,byte *param_4,undefined8 *param_5,
                   short *param_6,int *param_7,int *param_8,undefined8 *param_9,uint *param_10)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  short sVar5;
  bool bVar6;
  short *psVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  byte *pbVar15;
  uint uVar16;
  uint uVar17;
  
  if (param_9 != (undefined8 *)0x0) {
    *param_9 = 0;
    *param_10 = 0;
  }
  if (param_2 < 0) {
    return 0xffffffff;
  }
  if (param_6 == (short *)0x0) {
    return 0xffffffff;
  }
  if (param_2 == 0) {
LAB_108b34108:
    uVar13 = 0xfffffffc;
  }
  else {
    pbVar9 = param_1;
    FUN_108b33e78(param_1,48000);
    pbVar15 = param_1 + 1;
    bVar2 = *param_1;
    uVar17 = param_2 - 1;
    uVar14 = bVar2 & 3;
    uVar13 = 1;
    bVar6 = false;
    uVar16 = uVar17;
    switch(uVar14) {
    case 1:
      if (param_3 == 0) {
        if ((uVar17 & 1) != 0) goto LAB_108b34108;
        uVar14 = 0;
        uVar17 = uVar17 >> 1;
        *param_6 = (short)uVar17;
        uVar13 = 2;
        goto code_r0x000108b34100;
      }
      uVar14 = 0;
      uVar13 = 2;
      bVar6 = true;
      goto code_r0x000108b33fec;
    case 2:
      pbVar9 = pbVar15;
      FUN_108b34260(pbVar15,uVar17,param_6);
      iVar10 = (int)*param_6;
      if (iVar10 < 0) {
        return 0xfffffffc;
      }
      uVar16 = uVar17 - (int)pbVar9;
      uVar17 = uVar16 - iVar10;
      if ((int)uVar16 < iVar10) {
        return 0xfffffffc;
      }
      bVar6 = false;
      uVar14 = 0;
      uVar13 = 2;
      pbVar15 = pbVar15 + (int)pbVar9;
      break;
    case 3:
      if (param_2 != 1) {
        bVar4 = *pbVar15;
        uVar1 = bVar4 & 0x3f;
        uVar13 = (ulong)uVar1;
        if ((bVar4 & 0x3f) == 0) {
          return 0xfffffffc;
        }
        if (0x1680 < (int)(uVar1 * (int)pbVar9)) {
          return 0xfffffffc;
        }
        pbVar9 = param_1 + 2;
        uVar16 = param_2 - 2;
        uVar14 = 0;
        pbVar15 = pbVar9;
        if ((bVar4 >> 6 & 1) != 0) {
          do {
            if ((int)uVar16 < 1) goto LAB_108b34108;
            pbVar15 = pbVar9 + 1;
            bVar3 = *pbVar9;
            uVar11 = (uint)bVar3;
            if (0xfd < uVar11) {
              uVar11 = 0xfe;
            }
            uVar16 = uVar16 + ~uVar11;
            uVar14 = uVar14 + uVar11;
            pbVar9 = pbVar15;
          } while (bVar3 == 0xff);
          if ((int)uVar16 < 0) goto LAB_108b34108;
        }
        if ((char)bVar4 < '\0') {
          psVar7 = param_6;
          uVar17 = uVar16;
          for (uVar12 = (ulong)(uVar1 - 1); uVar12 != 0; uVar12 = uVar12 - 1) {
            pbVar9 = pbVar15;
            FUN_108b34260(pbVar15,uVar16,psVar7);
            sVar5 = *psVar7;
            if (sVar5 < 0) {
              return 0xfffffffc;
            }
            iVar10 = (int)pbVar9;
            uVar16 = uVar16 - iVar10;
            if ((int)uVar16 < (int)sVar5) {
              return 0xfffffffc;
            }
            pbVar15 = pbVar15 + iVar10;
            uVar17 = (uVar17 - iVar10) - (int)sVar5;
            psVar7 = psVar7 + 1;
          }
          if (-1 < (int)uVar17) {
            bVar6 = false;
            break;
          }
        }
        else {
          if (param_3 != 0) {
            bVar6 = true;
            goto code_r0x000108b33fec;
          }
          uVar17 = 0;
          if ((bVar4 & 0x3f) != 0) {
            uVar17 = uVar16 / uVar1;
          }
          if (uVar17 * uVar1 == uVar16) {
            psVar7 = param_6;
            for (uVar12 = (ulong)(uVar1 - 1); uVar12 != 0; uVar12 = uVar12 - 1) {
              *psVar7 = (short)uVar17;
              psVar7 = psVar7 + 1;
            }
            bVar6 = true;
            break;
          }
        }
      }
      goto LAB_108b34108;
    }
    if (param_3 == 0) {
code_r0x000108b34100:
      if (0x4fb < (int)uVar17) goto LAB_108b34108;
      param_6[uVar13 - 1] = (short)uVar17;
    }
    else {
code_r0x000108b33fec:
      pbVar9 = pbVar15;
      FUN_108b34260(pbVar15,uVar16,param_6 + (uVar13 - 1));
      uVar1 = (int)uVar13 - 1;
      sVar5 = param_6[uVar1];
      if (sVar5 < 0) {
        return 0xfffffffc;
      }
      iVar10 = (int)pbVar9;
      if ((int)(uVar16 - iVar10) < (int)sVar5) {
        return 0xfffffffc;
      }
      pbVar15 = pbVar15 + iVar10;
      if (bVar6) {
        if ((int)(uVar16 - iVar10) < (int)uVar13 * (int)sVar5) {
          return 0xfffffffc;
        }
        psVar7 = param_6;
        for (uVar12 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)); uVar12 != 0;
            uVar12 = uVar12 - 1) {
          *psVar7 = sVar5;
          psVar7 = psVar7 + 1;
        }
      }
      else if ((int)uVar17 < iVar10 + sVar5) {
        return 0xfffffffc;
      }
    }
    uVar12 = uVar13;
    puVar8 = param_5;
    if (param_7 != (int *)0x0) {
      *param_7 = (int)pbVar15 - (int)param_1;
    }
    for (; uVar12 != 0; uVar12 = uVar12 - 1) {
      if (param_5 != (undefined8 *)0x0) {
        *puVar8 = pbVar15;
      }
      pbVar15 = pbVar15 + *param_6;
      param_6 = param_6 + 1;
      puVar8 = puVar8 + 1;
    }
    if (param_9 != (undefined8 *)0x0) {
      *param_9 = pbVar15;
      *param_10 = uVar14;
    }
    if (param_8 != (int *)0x0) {
      *param_8 = uVar14 + ((int)pbVar15 - (int)param_1);
    }
    if (param_4 != (byte *)0x0) {
      *param_4 = bVar2;
    }
  }
  return uVar13;
}



/* Entry: 108b34260; end: 108b3429f;  */

undefined8 FUN_108b34260(byte *param_1,int param_2,ushort *param_3)

{
  byte bVar1;
  undefined8 uVar2;
  ushort uVar3;
  
  if (param_2 != 0) {
    bVar1 = *param_1;
    uVar3 = (ushort)bVar1;
    if (bVar1 < 0xfc) {
      uVar2 = 1;
      goto LAB_108b34298;
    }
    if (param_2 != 1) {
      uVar3 = (ushort)bVar1 + (ushort)param_1[1] * 4;
      uVar2 = 2;
      goto LAB_108b34298;
    }
  }
  uVar2 = 0xffffffff;
  uVar3 = 0xffff;
LAB_108b34298:
  *param_3 = uVar3;
  return uVar2;
}



/* Entry: 108b342a0; end: 108b34307;  */

void FUN_108b342a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_108b33ee8(param_1,param_2,0,param_3,param_4,param_5,param_6,0,0,0);
  return;
}



/* Entry: 108b34308; end: 108b344d7;  */

undefined8 FUN_108b34308(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = (uint)param_2;
  if ((((uVar3 != 8000 && uVar3 != 12000) && uVar3 != 16000) && uVar3 != 48000) && uVar3 != 24000) {
    return 0xffffffff;
  }
  iVar4 = (int)param_3;
  if (iVar4 - 3U < 0xfffffffe) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = param_3;
    func_0x000108b342d8(param_3);
    _bzero(param_1,(long)(int)uVar1);
    *param_1 = 0x68000022d0;
    *(int *)((long)param_1 + 0x3c) = iVar4;
    *(undefined4 *)(param_1 + 6) = 0;
    *(int *)(param_1 + 1) = iVar4;
    *(uint *)((long)param_1 + 0xc) = uVar3;
    *(uint *)(param_1 + 3) = uVar3;
    *(int *)(param_1 + 2) = iVar4;
    iVar4 = (int)param_1 + 0x68;
    func_0x000108b507c8();
    if (iVar4 == 0) {
      puVar2 = param_1 + 0x45a;
      FUN_108b47344(puVar2,param_2,param_3);
      if ((int)puVar2 == 0) {
        FUN_108b49614(param_1 + 0x45a,0x2720);
        *(undefined4 *)(param_1 + 9) = 0;
        *(uint *)((long)param_1 + 0x4c) = (uVar3 & 0xffff) / 400;
        *(undefined4 *)(param_1 + 7) = 0;
        return 0;
      }
    }
    uVar1 = 0xfffffffd;
  }
  return uVar1;
}



/* Entry: 108b344d8; end: 108b35347;  */

/* WARNING: Possible PIC construction at 0x000108b348b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108b348b4) */
/* WARNING: Removing unreachable block (ram,0x000108b348b8) */

float * FUN_108b344d8(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                     float *param_6,float *param_7,float *param_8,uint param_9)

{
  uint uVar1;
  float fVar2;
  byte bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  uint uVar11;
  float *pfVar12;
  float *pfVar13;
  float fVar14;
  uint uVar15;
  float *pfVar16;
  float extraout_w8;
  float extraout_w8_00;
  float extraout_w8_01;
  float fVar17;
  float extraout_w8_02;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  ulong uVar18;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  undefined8 extraout_x8_05;
  long extraout_x8_06;
  float *pfVar19;
  uint extraout_w10;
  int iVar20;
  uint uVar21;
  int iVar22;
  float *extraout_x11;
  float *pfVar23;
  float *extraout_x11_00;
  float *extraout_x11_01;
  float extraout_w12;
  undefined1 *puVar24;
  long lVar25;
  ulong uVar26;
  float *unaff_x19;
  float *unaff_x20;
  float *pfVar27;
  float *unaff_x21;
  float *pfVar28;
  uint uVar29;
  float *unaff_x22;
  float *pfVar30;
  float *unaff_x23;
  float fVar31;
  float *unaff_x24;
  float *pfVar32;
  float *unaff_x25;
  float *pfVar33;
  float *unaff_x26;
  float *pfVar34;
  float *unaff_x27;
  undefined1 *puVar35;
  ulong unaff_x28;
  undefined8 uVar36;
  double dVar37;
  float fStack_270;
  uint uStack_26c;
  float *pfStack_268;
  float *pfStack_260;
  uint uStack_254;
  uint uStack_250;
  float fStack_24c;
  byte *pbStack_248;
  uint uStack_23c;
  float *pfStack_238;
  uint uStack_230;
  uint uStack_22c;
  float *pfStack_228;
  undefined2 uStack_220;
  undefined6 uStack_21e;
  uint uStack_218;
  uint uStack_214;
  float afStack_210 [2];
  int iStack_208;
  int iStack_1f8;
  float fStack_1f0;
  undefined1 auStack_1d8 [8];
  undefined8 uStack_1d0;
  ulong uStack_1c0;
  float *pfStack_1b8;
  float *pfStack_1b0;
  float *pfStack_1a8;
  float *pfStack_1a0;
  float *pfStack_198;
  float *pfStack_190;
  float *pfStack_188;
  float *pfStack_180;
  float *pfStack_178;
  undefined1 *puStack_170;
  undefined8 uStack_168;
  float **ppfStack_160;
  uint *puStack_158;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float afStack_138 [21];
  uint uStack_e4;
  float *pfStack_e0;
  undefined1 auStack_d5 [5];
  float afStack_d0 [24];
  undefined8 uStack_70;
  
  func_0x000108b35884();
  pfVar7 = param_1;
  pfVar8 = param_2;
  pfVar12 = param_3;
  pfVar27 = param_4;
  pfVar16 = param_5;
  if ((int)param_1[2] - 1U < 2) {
    fVar31 = param_1[3];
    pfVar8 = (float *)(ulong)(uint)fVar31;
    unaff_x20 = param_1;
    unaff_x23 = param_2;
    if (((((((((fVar31 != 1.12104e-41 && fVar31 != 1.68156e-41) && fVar31 != 2.24208e-41) &&
             fVar31 != 3.36312e-41) && fVar31 != 6.72623e-41) || (param_1[6] != fVar31)) ||
          ((fVar14 = param_1[7], unaff_x19 = param_5, unaff_x21 = param_4, unaff_x22 = param_6,
           unaff_x25 = param_8, unaff_x26 = param_7, unaff_x27 = param_3, fVar14 != 0.0 &&
           ((fVar14 != 1.12104e-41 && fVar14 != 1.68156e-41) && fVar14 != 2.24208e-41)))) ||
         ((((param_1[4] != param_1[2] || (2 < (uint)param_1[5])) || (0x3c < (uint)param_1[8])) ||
          (((1L << ((ulong)(uint)param_1[8] & 0x3f) & 0x1000010000100401U) == 0 ||
           ((int)param_1[0xe] < 0)))))) || (param_1[0xe] != 0.0)) || (1 < (int)param_1[0xf] - 1U))
    goto LAB_108b348d0;
    uVar15 = (uint)param_6;
    uVar4 = uVar15 == 1;
    uStack_70 = extraout_x8;
    if (1 < uVar15) {
LAB_108b3466c:
      unaff_x19 = (float *)0xffffffff;
      goto LAB_108b34670;
    }
    iVar6 = (int)param_3;
    fVar14 = SUB84(param_5,0);
    if (((param_2 == (float *)0x0) || (iVar6 == 0)) || (uVar15 != 0)) {
      uVar5 = ((uint)fVar31 & 0xffff) / 400;
      iVar20 = 0;
      if (uVar5 != 0) {
        iVar20 = (int)fVar14 / (int)uVar5;
      }
      if (fVar14 != (float)(iVar20 * uVar5)) goto LAB_108b3466c;
    }
    if ((param_2 == (float *)0x0) || (iVar6 == 0)) {
      unaff_x22 = (float *)0x0;
      do {
        func_0x000108b35874();
        pfVar16 = (float *)(ulong)(uint)((int)fVar14 - (int)unaff_x22);
        func_0x000108b357ec();
        func_0x000108b35854();
        unaff_x19 = pfVar7;
        if ((int)pfVar7 < 0) goto LAB_108b34670;
        fVar31 = (float)((int)pfVar7 + (int)unaff_x22);
        unaff_x22 = (float *)(ulong)(uint)fVar31;
        uVar4 = fVar31 == fVar14;
      } while ((int)fVar31 < (int)fVar14);
      unaff_x19 = param_5;
      if ((bool)uVar4) {
        param_1[0x15] = fVar14;
        goto LAB_108b34670;
      }
      goto LAB_108b348d0;
    }
    if (iVar6 < 0) goto LAB_108b3466c;
    bVar3 = *(byte *)param_2;
    unaff_x28 = (ulong)bVar3;
    fStack_148 = 1.4013e-42;
    if (((bVar3 ^ 0xff) & 0x60) == 0) {
      fStack_148 = 1.4027e-42;
    }
    fStack_144 = 1.4041e-42;
    if (-1 < (char)bVar3) {
      fStack_144 = fStack_148;
    }
    if ((char)bVar3 < '\0') {
      fStack_13c = 1.54283e-42;
      if ((bVar3 >> 5 & 3) != 0) {
        fStack_13c = (float)((bVar3 >> 5 & 3) + 0x44e);
      }
    }
    else if (((bVar3 ^ 0xff) & 0x60) == 0) {
      fStack_13c = 1.54703e-42;
      if ((bVar3 & 0x10) != 0) {
        fStack_13c = 1.54843e-42;
      }
    }
    else {
      fStack_13c = (float)((bVar3 >> 5) + 0x44d);
    }
    pfVar30 = param_2;
    FUN_108b33e78();
    uVar4 = (bVar3 & 4) == 0;
    fStack_140 = 1.4013e-45;
    if (!(bool)uVar4) {
      fStack_140 = 2.8026e-45;
    }
    puStack_158 = &uStack_e4;
    ppfStack_160 = &pfStack_e0;
    pfVar27 = (float *)auStack_d5;
    param_6 = afStack_d0;
    pfVar16 = (float *)0x0;
    param_8 = param_2;
    pfVar8 = param_3;
    pfVar12 = param_7;
    FUN_108b33ee8();
    if (param_1[0xd] != 0.0) {
      pfStack_e0 = (float *)0x0;
      uStack_e4 = 0;
    }
    pfVar7 = param_8;
    unaff_x19 = param_8;
    unaff_x24 = pfVar30;
    if ((int)param_8 < 0) {
LAB_108b34670:
      func_0x000108b35824(uStack_70);
      pfVar10 = pfVar8;
      pfVar30 = pfVar16;
      unaff_x23 = param_2;
      unaff_x27 = param_3;
      if ((bool)uVar4) {
        return unaff_x19;
      }
      goto LAB_108b348d4;
    }
    param_7 = (float *)(ulong)param_9;
    pfVar12 = (float *)(ulong)uStack_e4;
    pfVar7 = afStack_138;
    pfVar8 = pfStack_e0;
    pfVar27 = param_8;
    FUN_108b39538();
    pfVar10 = (float *)((long)param_2 + (long)(int)auStack_d5._1_4_);
    fVar31 = SUB84(pfVar30,0);
    param_2 = pfVar10;
    unaff_x26 = param_7;
    if (uVar15 == 0) {
      fVar17 = (float)((int)param_8 * (int)fVar31);
      uVar4 = fVar17 == fVar14;
      if ((int)fVar14 < (int)fVar17) {
        unaff_x19 = (float *)0xfffffffe;
      }
      else {
        unaff_x22 = (float *)0x0;
        param_1[0x13] = fVar31;
        param_1[0x10] = fStack_13c;
        param_1[0x11] = fStack_144;
        param_1[0xf] = fStack_140;
        param_3 = afStack_d0;
        for (param_8 = (float *)((ulong)param_8 & 0xffffffff); param_8 != (float *)0x0;
            param_8 = (float *)((long)param_8 + -1)) {
          pfVar12 = (float *)(long)*(short *)param_3;
          func_0x000108b35874();
          pfVar7 = param_1;
          pfVar8 = param_2;
          pfVar16 = param_5;
          func_0x000108b35854();
          unaff_x19 = pfVar7;
          if ((int)SUB84(pfVar7,0) < 0) goto LAB_108b34670;
          uVar4 = SUB84(pfVar7,0) == fVar31;
          unaff_x19 = param_5;
          unaff_x23 = param_2;
          unaff_x25 = param_8;
          unaff_x27 = param_3;
          if (!(bool)uVar4) goto LAB_108b348d0;
          param_2 = (float *)((long)param_2 + (long)*(short *)param_3);
          unaff_x22 = (float *)(ulong)(uint)((int)SUB84(unaff_x22,0) + (int)fVar31);
          param_5 = (float *)(ulong)(uint)((int)param_5 - (int)fVar31);
          param_3 = (float *)((long)param_3 + 2);
        }
        param_1[0x15] = SUB84(unaff_x22,0);
        unaff_x19 = unaff_x22;
        if (param_9 == 0) {
          param_1[0x16] = 0.0;
          param_1[0x17] = 0.0;
        }
        else {
          pfVar12 = (float *)(ulong)(uint)param_1[2];
          pfVar16 = (float *)(ulong)(uint)param_1[0xe];
          pfVar27 = param_1 + 0x16;
          pfVar7 = param_4;
          pfVar8 = unaff_x22;
          FUN_108b33bec();
        }
      }
      goto LAB_108b34670;
    }
    if ((((char)bVar3 < '\0') || (uVar4 = fVar14 == fVar31, (int)fVar14 < (int)fVar31)) ||
       (uVar4 = 1, param_1[0x11] == 1.4041e-42)) {
      ppfStack_160 = (float **)CONCAT44(ppfStack_160._4_4_,param_9);
      func_0x000108b357ec();
      param_6 = (float *)0x0;
      pfVar27 = param_4;
      func_0x000108b35818();
      pfVar16 = param_5;
      unaff_x19 = pfVar7;
      goto LAB_108b34670;
    }
    uVar15 = (int)fVar14 - (int)fVar31;
    uVar4 = uVar15 == 0;
    unaff_x22 = (float *)(ulong)uVar15;
    unaff_x23 = pfVar10;
    if (!(bool)uVar4) {
      fVar14 = param_1[0x15];
      param_8 = (float *)(ulong)(uint)fVar14;
      ppfStack_160 = (float **)CONCAT44(ppfStack_160._4_4_,param_9);
      func_0x000108b357ec();
      param_6 = (float *)0x0;
      pfVar27 = param_4;
      pfVar16 = unaff_x22;
      func_0x000108b35818();
      if ((int)(uint)pfVar7 < 0) {
        param_1[0x15] = fVar14;
        unaff_x19 = pfVar7;
        goto LAB_108b34670;
      }
      unaff_x19 = param_5;
      unaff_x25 = param_8;
      if ((uint)pfVar7 != uVar15) goto LAB_108b348d0;
    }
    param_1[0x13] = fVar31;
    param_1[0x10] = fStack_13c;
    param_1[0x11] = fStack_148;
    param_1[0xf] = fStack_140;
    pfVar12 = (float *)(long)afStack_d0[0]._0_2_;
    func_0x000108b35874();
    param_6 = (float *)0x1;
    uVar36 = 0x108b348b4;
  }
  else {
LAB_108b348d0:
    _abort();
    pfVar10 = pfVar8;
    pfVar30 = pfVar16;
    param_8 = unaff_x25;
    param_7 = unaff_x26;
LAB_108b348d4:
    param_1 = pfVar7;
    uVar36 = 0x108b348d8;
    ___stack_chk_fail();
    param_5 = unaff_x19;
    param_4 = unaff_x21;
    param_3 = unaff_x27;
  }
  pfVar28 = &fStack_270;
  pfVar32 = &fStack_270;
  pfVar8 = &fStack_270;
  uStack_1c0 = unaff_x28;
  pfStack_1b8 = param_3;
  pfStack_1b0 = param_7;
  pfStack_1a8 = param_8;
  pfStack_1a0 = unaff_x24;
  pfStack_198 = unaff_x23;
  pfStack_190 = unaff_x22;
  pfStack_188 = param_4;
  pfStack_180 = unaff_x20;
  pfStack_178 = param_5;
  puStack_170 = &stack0xfffffffffffffff0;
  uStack_168 = uVar36;
  func_0x000108b35884();
  uStack_1d0 = extraout_x8_00;
  uStack_218 = 0;
  uVar15 = (int)param_1[3] / 0x32;
  pfVar33 = (float *)(ulong)uVar15;
  fVar31 = (float)((int)uVar15 >> 3);
  fVar14 = SUB84(pfVar30,0);
  uVar4 = fVar14 == fVar31;
  pfVar7 = param_1;
  pfVar16 = pfVar12;
  pfVar13 = pfVar27;
  if ((int)fVar14 < (int)fVar31) {
    pfVar8 = &fStack_270;
    param_1 = unaff_x20;
    pfVar12 = unaff_x24;
    pfVar28 = (float *)0xfffffffe;
LAB_108b35244:
    func_0x000108b35824(uStack_1d0);
    if ((bool)uVar4) {
      return pfVar28;
    }
    ___stack_chk_fail();
    pfVar27 = param_5;
LAB_108b35338:
    _abort();
  }
  else {
    unaff_x23 = (float *)(long)(int)param_1[1];
    pfStack_228 = (float *)(long)(int)*param_1;
    uVar5 = (int)uVar15 >> 1;
    param_4 = (float *)(ulong)uVar5;
    uVar21 = (int)uVar15 >> 2;
    fVar17 = (float)(((int)param_1[3] / 0x19) * 3);
    if ((int)fVar17 <= (int)fVar14) {
      fVar14 = fVar17;
    }
    pfVar34 = (float *)(ulong)(uint)fVar14;
    uVar11 = (uint)pfVar12;
    uVar4 = uVar11 == 1;
    param_5 = pfVar27;
    if ((int)uVar11 < 2) {
      fVar17 = param_1[0x13];
      uVar4 = fVar14 == fVar17;
      if ((int)fVar17 <= (int)fVar14) {
        fVar14 = fVar17;
      }
      pfVar34 = (float *)(ulong)(uint)fVar14;
LAB_108b349d0:
      uVar29 = (uint)pfVar34;
      if (param_1[0x14] == 0.0) {
        fVar14 = param_1[0x12];
        if (fVar14 == 0.0) {
          for (uVar18 = (ulong)((int)param_1[2] * uVar29 &
                               ((int)((int)param_1[2] * uVar29) >> 0x1f ^ 0xffffffffU));
              pfVar8 = &fStack_270, pfVar28 = pfVar34, uVar18 != 0; uVar18 = uVar18 - 1) {
            *param_5 = 0.0;
            param_5 = param_5 + 1;
          }
          goto LAB_108b35244;
        }
      }
      else {
        fVar14 = 1.4041e-42;
      }
      pfVar32 = pfVar34;
      if ((int)uVar15 < (int)uVar29) {
        do {
          param_4 = pfVar32;
          uVar21 = (uint)param_4;
          uVar4 = uVar21 == uVar15;
          uVar5 = uVar21;
          if ((int)uVar15 <= (int)uVar21) {
            uVar5 = uVar15;
          }
          pfVar30 = (float *)(ulong)uVar5;
          func_0x000108b357ec();
          pfVar13 = param_5;
          func_0x000108b35854();
          iVar6 = (int)pfVar7;
          pfVar8 = &fStack_270;
          pfVar28 = pfVar7;
          if (iVar6 < 0) break;
          param_5 = param_5 + (int)param_1[2] * iVar6;
          uVar4 = uVar21 - iVar6 == 0;
          param_4 = (float *)(ulong)(uVar21 - iVar6);
          pfVar8 = &fStack_270;
          pfVar32 = param_4;
          pfVar28 = pfVar34;
        } while (!(bool)uVar4 && iVar6 <= (int)uVar21);
        goto LAB_108b35244;
      }
      uStack_230 = (uint)param_6;
      uStack_22c = uVar21;
      pbStack_248 = (byte *)((ulong)pbStack_248 & 0xffffffff00000000);
      uStack_23c = 0;
      pfVar23 = (float *)0x0;
      pfVar19 = (float *)0x0;
      uVar1 = uVar29;
      if ((int)uVar21 <= (int)uVar29) {
        uVar1 = uVar21;
      }
      if ((int)uVar5 <= (int)uVar29) {
        uVar1 = uVar29;
      }
      uVar21 = uVar29;
      if (fVar14 != 1.4013e-42) {
        uVar21 = uVar1;
      }
      uVar1 = uVar5;
      if ((int)uVar29 <= (int)uVar5) {
        uVar1 = uVar21;
      }
      if ((int)uVar29 < (int)uVar15) {
        uVar29 = uVar1;
      }
      unaff_x22 = (float *)(ulong)uVar29;
      fVar17 = 0.0;
      uVar21 = (uint)(fVar14 != 1.4041e-42);
      pfVar8 = &fStack_270;
      iVar6 = 0;
    }
    else {
      if (pfVar10 == (float *)0x0) goto LAB_108b349d0;
      uStack_230 = (uint)param_6;
      uStack_22c = uVar21;
      fVar17 = param_1[0x13];
      unaff_x22 = (float *)(ulong)(uint)fVar17;
      fVar14 = param_1[0x11];
      pfStack_238 = (float *)CONCAT44(pfStack_238._4_4_,param_1[0x10]);
      pfVar7 = afStack_210;
      pfVar9 = pfVar10;
      FUN_108b49cc0();
      fVar2 = param_1[0x12];
      pfVar23 = pfVar10;
      if ((int)fVar2 < 1) {
        func_0x000108b3589c();
        pfVar19 = (float *)0x0;
        uStack_23c = 1;
        uVar21 = extraout_w10;
        fVar17 = extraout_w8_00;
LAB_108b34b60:
        uStack_23c = 1;
        pfVar8 = pfVar28;
        pfVar10 = pfVar9;
        iVar6 = (int)pfStack_238;
      }
      else {
        if ((fVar14 == 1.4041e-42) && (fVar2 != 1.4041e-42)) {
          if (param_1[0x14] != 0.0) {
            func_0x000108b3589c();
            fVar14 = 1.4041e-42;
            pfVar10 = extraout_x11;
            fVar17 = extraout_w8;
            goto LAB_108b34af4;
          }
          (*(code *)PTR____chkstk_darwin_11034bd40)
                    ((-(ulong)((int)param_1[2] * uStack_22c >> 0x1f) & 0xfffffffc00000000 |
                     (ulong)((int)param_1[2] * uStack_22c) << 2) + 0xf & 0xfffffffffffffff0);
          pfVar32 = (float *)((long)&fStack_270 - extraout_x8_01);
          fVar14 = extraout_w12;
          if ((int)fVar17 <= (int)extraout_w12) {
            fVar14 = fVar17;
          }
          pfVar30 = (float *)(ulong)(uint)fVar14;
          func_0x000108b357ec();
          pfVar13 = pfVar32;
          func_0x000108b35854();
          fVar17 = 0.0;
          fVar14 = 1.4041e-42;
          pbStack_248 = (byte *)CONCAT44(pbStack_248._4_4_,1);
          pfVar19 = pfVar32;
LAB_108b34b5c:
          uVar21 = 0;
          uStack_23c = 1;
          pfVar28 = pfVar32;
          pfVar23 = pfVar10;
          goto LAB_108b34b60;
        }
        if (fVar14 == 1.4041e-42) {
          func_0x000108b3589c();
          pfVar10 = extraout_x11_00;
          fVar17 = extraout_w8_01;
LAB_108b34af4:
          pfVar19 = (float *)0x0;
          goto LAB_108b34b5c;
        }
        iVar6 = (int)pfStack_238;
        if (fVar2 == 1.4041e-42) {
          fVar17 = (float)((int)param_1[2] * uStack_22c);
          pbStack_248 = (byte *)CONCAT44(pbStack_248._4_4_,1);
        }
        else {
          func_0x000108b3589c();
          pfVar23 = extraout_x11_01;
          fVar17 = extraout_w8_02;
        }
        pfVar19 = (float *)0x0;
        uVar21 = 1;
        uStack_23c = 1;
        pfVar10 = pfVar9;
      }
    }
    uVar29 = (uint)unaff_x22;
    uVar4 = uVar29 == (uint)pfVar34;
    if ((int)(uint)pfVar34 < (int)uVar29) {
      pfVar28 = (float *)0xffffffff;
      goto LAB_108b35244;
    }
    fStack_24c = fVar14;
    pfStack_238 = pfVar23;
    pfStack_260 = pfVar19;
    uStack_254 = uVar21;
    if ((uVar21 & 1) == 0) {
      pfVar28 = (float *)0x0;
      uStack_26c = (uint)(uStack_230 == 0);
LAB_108b34da8:
      uStack_23c = 0;
      pfStack_268 = (float *)((ulong)pfStack_268 & 0xffffffff00000000);
      uVar5 = 0;
LAB_108b34dac:
      fVar14 = 0.0;
      if (uVar5 == 0) {
        fVar14 = fVar17;
      }
      uVar21 = 0;
      if (uVar5 == 0) {
        uVar21 = (uint)pbStack_248;
      }
      param_4 = (float *)(ulong)uVar21;
      (*(code *)PTR____chkstk_darwin_11034bd40)
                ((-(ulong)((uint)fVar14 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uint)fVar14 << 2) +
                 0xf & 0xfffffffffffffff0);
      pfVar8 = (float *)((long)pfVar8 - extraout_x8_03);
      if ((uVar21 == 1) && (uStack_254 != 0)) {
        uVar11 = uStack_22c;
        if ((int)uVar29 <= (int)uStack_22c) {
          uVar11 = uVar29;
        }
        pfVar30 = (float *)(ulong)uVar11;
        func_0x000108b357ec();
        pfVar13 = pfVar8;
        func_0x000108b35854();
        pfStack_260 = pfVar8;
      }
      unaff_x23 = pfStack_228;
      uVar36 = 0xd;
      switch(iVar6) {
      case 0x44d:
        break;
      case 0x44e:
      case 0x44f:
        uVar36 = 0x11;
        break;
      case 0x450:
        uVar36 = 0x13;
        break;
      case 0x451:
        uVar36 = 0x15;
        break;
      default:
        goto joined_r0x000108b34e40;
      }
      *(undefined8 *)(pfVar8 + -4) = uVar36;
      pfVar7 = (float *)((long)param_1 + (long)unaff_x23);
      pfVar10 = (float *)0x271c;
      FUN_108b49614();
      iVar6 = (int)pfVar7;
joined_r0x000108b34e40:
      if (iVar6 == 0) {
        *(ulong *)(pfVar8 + -4) = (ulong)(uint)param_1[0xf];
        pfVar7 = (float *)((long)param_1 + (long)unaff_x23);
        pfVar10 = (float *)0x2718;
        FUN_108b49614();
        if ((int)pfVar7 == 0) {
          pbStack_248 = (byte *)((long)pfStack_238 + (long)(int)(uint)pfVar12);
          uStack_230 = uVar21;
          if (uVar5 == 0) {
            param_4 = (float *)0x0;
            puVar35 = auStack_1d8;
          }
          else {
            (*(code *)PTR____chkstk_darwin_11034bd40)
                      ((-(ulong)((int)param_1[2] * uStack_22c >> 0x1f) & 0xfffffffc00000000 |
                       (ulong)((int)param_1[2] * uStack_22c) << 2) + 0xf & 0xfffffffffffffff0);
            pfVar8 = (float *)((long)pfVar8 - extraout_x8_04);
            puVar35 = (undefined1 *)pfVar8;
            if (uStack_23c != 0) {
              *(undefined8 *)((long)pfVar8 + -0x10) = 0;
              pfVar7 = (float *)((long)param_1 + (long)unaff_x23);
              func_0x000108b3585c();
              if ((int)pfVar7 == 0) {
                func_0x000108b357fc((byte *)((long)param_1 + (long)unaff_x23));
                *(uint **)((long)pfVar8 + -0x10) = &uStack_218;
                pfVar7 = (float *)((long)param_1 + (long)unaff_x23);
                pfVar10 = (float *)0xfbf;
                FUN_108b49614();
                if ((int)pfVar7 == 0) {
                  param_4 = (float *)0x1;
                  goto LAB_108b34f24;
                }
              }
              goto LAB_108b35338;
            }
            param_4 = (float *)0x0;
          }
LAB_108b34f24:
          *(float **)(pfVar8 + -4) = pfVar28;
          pfVar7 = (float *)((long)param_1 + (long)unaff_x23);
          func_0x000108b3585c();
          if ((int)pfVar7 == 0) {
            unaff_x23 = (float *)(ulong)(uint)fVar31;
            uStack_250 = (uint)pfVar12;
            if (fStack_24c == 1.4013e-42) {
              uStack_220 = 0xffff;
              if ((param_1[0x12] == 1.4027e-42) && (((int)param_4 == 0 || (param_1[0x14] == 0.0))))
              {
                pfVar8[-4] = 0.0;
                pfVar33 = pfStack_228;
                pfVar8[-3] = 0.0;
                pfVar7 = (float *)((long)param_1 + (long)pfStack_228);
                func_0x000108b3585c();
                if ((int)pfVar7 != 0) goto LAB_108b35338;
                pfVar16 = (float *)0x2;
                param_6 = (float *)0x0;
                pfVar13 = pfVar27;
                pfVar30 = unaff_x23;
                FUN_108b47400((byte *)((long)param_1 + (long)pfVar33),&uStack_220);
              }
              pfVar32 = (float *)0x0;
              param_1[0x18] = fStack_1f0;
              pfVar33 = pfStack_228;
            }
            else {
              uVar21 = uVar15;
              if ((int)uVar29 <= (int)uVar15) {
                uVar21 = uVar29;
              }
              pfVar28 = (float *)(ulong)uVar21;
              if ((fStack_24c != param_1[0x12] && 0 < (int)param_1[0x12]) && (param_1[0x14] == 0.0))
              {
                pfVar7 = (float *)((long)param_1 + (long)pfStack_228);
                func_0x000108b35894();
                if ((int)pfVar7 != 0) goto LAB_108b35338;
              }
              pfVar33 = pfStack_228;
              pfVar7 = pfStack_238;
              if (uStack_26c == 0) {
                pfVar7 = (float *)0x0;
              }
              pfVar32 = (float *)((long)param_1 + (long)pfStack_228);
              param_6 = afStack_210;
              pfVar13 = pfVar27;
              pfVar30 = pfVar28;
              FUN_108b47400(pfVar32,pfVar7);
              func_0x000108b35864(param_1 + 0x18);
              pfVar8 = pfVar8 + 4;
              pfVar16 = pfVar12;
            }
            *(undefined2 **)(pfVar8 + -4) = &uStack_220;
            pfVar7 = (float *)((long)param_1 + (long)pfVar33);
            pfVar10 = (float *)0x271f;
            FUN_108b49614();
            pfVar34 = pfStack_228;
            pfVar12 = pfVar32;
            if ((int)pfVar7 == 0) {
              pfVar28 = *(float **)(CONCAT62(uStack_21e,uStack_220) + 0x48);
              if (uVar5 == 0 || (uStack_23c & 1) != 0) {
LAB_108b350c0:
                if (((int)param_4 != 0) && ((param_1[0x12] != 1.4013e-42 || (param_1[0x14] != 0.0)))
                   ) {
                  fVar14 = param_1[2];
                  pfVar30 = (float *)(long)(int)fVar14;
                  puVar24 = puVar35;
                  pfVar7 = pfVar27;
                  for (uVar18 = 0; uVar18 != ((uint)fVar14 & ((int)fVar14 >> 0x1f ^ 0xffffffffU));
                      uVar18 = uVar18 + 1) {
                    lVar25 = 0;
                    for (uVar26 = (ulong)((uint)fVar31 & ((int)uVar15 >> 0x1f ^ 0xffffffffU));
                        uVar26 != 0; uVar26 = uVar26 - 1) {
                      *(undefined4 *)((long)pfVar7 + lVar25) = *(undefined4 *)(puVar24 + lVar25);
                      lVar25 = lVar25 + (long)pfVar30 * 4;
                    }
                    pfVar7 = pfVar7 + 1;
                    puVar24 = puVar24 + 4;
                  }
                  pfVar7 = (float *)(puVar35 + (long)((int)fVar14 * (int)fVar31) * 4);
                  pfVar10 = pfVar27 + (int)fVar14 * (int)fVar31;
                  pfVar16 = pfVar10;
                  func_0x000108b35838();
                }
                if (uStack_230 != 0) {
                  pfVar30 = (float *)(ulong)(uint)param_1[2];
                  pfVar7 = pfStack_260;
                  pfVar10 = pfVar27;
                  if ((int)uStack_22c <= (int)uVar29) {
                    uVar15 = (int)param_1[2] * (int)fVar31;
                    pfVar7 = pfVar27;
                    pfVar16 = pfStack_260;
                    for (uVar18 = (ulong)(uVar15 & ((int)uVar15 >> 0x1f ^ 0xffffffffU)); uVar18 != 0
                        ; uVar18 = uVar18 - 1) {
                      *pfVar7 = *pfVar16;
                      pfVar7 = pfVar7 + 1;
                      pfVar16 = pfVar16 + 1;
                    }
                    pfVar7 = pfStack_260 + (int)uVar15;
                    pfVar10 = pfVar27 + (int)uVar15;
                  }
                  pfVar16 = pfVar10;
                  func_0x000108b35838();
                }
                if (param_1[0xb] != 0.0) {
                  dVar37 = (double)((float)(int)param_1[0xb] * 0.0006488141) * 0.6931471805599453;
                  _exp();
                  for (uVar18 = (ulong)((int)param_1[2] * uVar29 &
                                       ((int)((int)param_1[2] * uVar29) >> 0x1f ^ 0xffffffffU));
                      uVar18 != 0; uVar18 = uVar18 - 1) {
                    *pfVar27 = *pfVar27 * (float)dVar37;
                    pfVar27 = pfVar27 + 1;
                  }
                }
                if ((int)uStack_250 < 2) {
                  param_1[0x18] = 0.0;
                }
                else {
                  param_1[0x18] = (float)((uint)param_1[0x18] ^ uStack_218);
                }
                param_1[0x12] = fStack_24c;
                param_1[0x14] = (float)(uVar5 & (uStack_23c ^ 1));
                uVar15 = (uint)pfVar32;
                uVar4 = uVar15 == 0;
                if (-1 < (int)uVar15) {
                  uVar15 = uVar29;
                }
                param_5 = pfVar27;
                pfVar28 = (float *)(ulong)uVar15;
                goto LAB_108b35244;
              }
              pfVar7 = (float *)((long)param_1 + (long)pfStack_228);
              func_0x000108b35894();
              pfVar33 = pfVar34;
              if ((int)pfVar7 == 0) {
                pfVar8[-4] = 0.0;
                pfVar8[-3] = 0.0;
                pfVar7 = (float *)((long)param_1 + (long)pfVar34);
                func_0x000108b3585c();
                if ((int)pfVar7 == 0) {
                  pfVar7 = (float *)((long)param_1 + (long)pfVar34);
                  func_0x000108b357fc();
                  func_0x000108b35864(&uStack_218);
                  pfVar8 = pfVar8 + 4;
                  if ((int)pfVar7 == 0) {
                    fVar14 = param_1[2];
                    pfVar30 = (float *)(ulong)(uint)fVar14;
                    pfVar7 = pfVar27 + (int)((int)fVar14 * (uVar29 - (int)fVar31));
                    pfVar10 = (float *)(puVar35 + (long)((int)fVar14 * (int)fVar31) * 4);
                    pfVar16 = pfVar7;
                    func_0x000108b35838();
                    goto LAB_108b350c0;
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_108b35338;
    }
    fStack_270 = fVar17;
    if ((int)uVar29 < (int)uVar5) {
      uVar18 = -(ulong)((int)param_1[2] * uVar5 >> 0x1f) & 0xfffffffc00000000 |
               (ulong)((int)param_1[2] * uVar5) << 2;
    }
    else {
      uVar18 = 0;
    }
    (*(code *)PTR____chkstk_darwin_11034bd40)(uVar18);
    pfVar8 = (float *)((long)pfVar8 + -(extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
    pfStack_268 = pfVar8;
    pfVar28 = pfVar8;
    if ((int)uVar5 <= (int)uVar29) {
      pfVar28 = pfVar27;
    }
    if (param_1[0x12] == 1.4041e-42) {
      pfVar7 = (float *)((long)param_1 + (long)unaff_x23);
      FUN_108b50788();
    }
    uStack_250 = uVar11;
    fVar17 = 0.0;
    if (param_1[3] != 0.0) {
      fVar17 = (float)((int)(uVar29 * 1000) / (int)param_1[3]);
    }
    if ((int)fVar17 < 0xb) {
      fVar17 = 1.4013e-44;
    }
    param_1[8] = fVar17;
    if (uStack_23c == 0) {
LAB_108b34c70:
      pfVar12 = (float *)0x0;
      param_1[10] = (float)(uint)(4 < (int)param_1[0xc]);
      uVar21 = uStack_230 << 1;
      if (pfStack_238 == (float *)0x0) {
        uVar21 = 1;
      }
      do {
        uVar4 = (int)pfVar12 == 0;
        pfVar13 = (float *)(ulong)(byte)uVar4;
        pfVar7 = (float *)((long)param_1 + (long)unaff_x23);
        pfVar10 = param_1 + 4;
        pfVar30 = afStack_210;
        pfVar16 = (float *)(ulong)uVar21;
        param_6 = pfVar28;
        FUN_108b50808();
        if ((int)pfVar7 == 0) {
          fVar14 = param_1[2];
          uVar11 = (int)fVar14 * uStack_214;
          pfVar32 = (float *)(ulong)uStack_214;
        }
        else {
          if (uVar21 == 0) {
            pfVar28 = (float *)0xfffffffd;
            goto LAB_108b35244;
          }
          uStack_214 = uVar29;
          fVar14 = param_1[2];
          uVar11 = (int)fVar14 * uVar29;
          pfVar34 = pfVar28;
          for (uVar18 = (ulong)(uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU)); pfVar32 = unaff_x22,
              uVar18 != 0; uVar18 = uVar18 - 1) {
            *pfVar34 = 0.0;
            pfVar34 = pfVar34 + 1;
          }
        }
        pfVar28 = pfVar28 + (int)uVar11;
        uVar11 = (int)pfVar32 + (int)pfVar12;
        pfVar12 = (float *)(ulong)uVar11;
      } while ((int)uVar11 < (int)uVar29);
      if ((int)uVar29 < (int)uVar5) {
        pfVar16 = (float *)(-(ulong)((int)fVar14 * uVar29 >> 0x1f) & 0xfffffffc00000000 |
                           (ulong)((int)fVar14 * uVar29) << 2);
        pfVar7 = pfVar27;
        pfVar10 = pfStack_268;
        _memcpy();
      }
      fVar14 = fStack_24c;
      uVar21 = uStack_250;
      uVar5 = 0;
      if (uStack_230 == 0) {
        uVar5 = uStack_23c;
      }
      pfVar12 = (float *)(ulong)uStack_250;
      if (uVar5 != 1) {
        uStack_26c = (uint)(uStack_230 == 0);
LAB_108b34da0:
        pfVar28 = (float *)0x11;
        fVar17 = fStack_270;
        goto LAB_108b34da8;
      }
      iVar20 = 5;
      if (fStack_24c != 1.4027e-42) {
        iVar20 = -0xf;
      }
      if ((int)(uStack_250 * 8) < iStack_1f8 + iVar20 + (int)LZCOUNT(fStack_1f0)) {
LAB_108b34d78:
        uStack_26c = 1;
        goto LAB_108b34da0;
      }
      if (fStack_24c == 1.4027e-42) {
        pfVar7 = afStack_210;
        pfVar10 = (float *)0xc;
        FUN_108b49de4();
        if ((int)pfVar7 == 0) goto LAB_108b34d78;
      }
      pfVar7 = afStack_210;
      pfVar10 = (float *)0x1;
      FUN_108b49de4();
      uStack_23c = (uint)pfVar7;
      if (fVar14 == 1.4027e-42) {
        pfVar7 = afStack_210;
        pfVar10 = (float *)0x100;
        FUN_108b49e68();
        iVar20 = (int)pfVar7 + 2;
        iVar22 = (int)LZCOUNT(fStack_1f0);
      }
      else {
        iVar22 = (int)LZCOUNT(fStack_1f0);
        iVar20 = uVar21 - (iStack_1f8 + iVar22 + -0x19 >> 3);
      }
      uVar21 = uVar21 - iVar20;
      iVar22 = iVar22 + iStack_1f8 + -0x20;
      uVar5 = (uint)(iVar22 <= (int)(uVar21 * 8));
      if ((int)(uVar21 * 8) < iVar22) {
        iVar20 = 0;
        uVar21 = 0;
      }
      pfVar12 = (float *)(ulong)uVar21;
      iStack_208 = iStack_208 - iVar20;
      uStack_26c = 1;
      pfStack_268 = (float *)CONCAT44(pfStack_268._4_4_,iVar20);
      pfVar28 = (float *)0x11;
      fVar17 = fStack_270;
      goto LAB_108b34dac;
    }
    param_1[5] = param_1[0xf];
    if (fVar14 != 1.4013e-42) {
      fVar14 = 2.24208e-41;
LAB_108b34c6c:
      param_1[7] = fVar14;
      goto LAB_108b34c70;
    }
    if (iVar6 - 0x44dU < 3) {
      fVar14 = (float)((iVar6 - 0x44dU) * 4000 + 8000);
      goto LAB_108b34c6c;
    }
  }
  param_1[7] = 2.24208e-41;
  _abort();
  *(float **)(pfVar8 + -0x14) = pfVar28;
  *(float **)(pfVar8 + -0x12) = pfVar33;
  *(float **)(pfVar8 + -0x10) = pfVar12;
  *(float **)(pfVar8 + -0xe) = unaff_x23;
  *(float **)(pfVar8 + -0xc) = unaff_x22;
  *(float **)(pfVar8 + -10) = param_4;
  *(float **)(pfVar8 + -8) = param_1;
  *(float **)(pfVar8 + -6) = pfVar27;
  *(undefined1 ***)(pfVar8 + -4) = &puStack_170;
  *(code **)(pfVar8 + -2) = FUN_108b35348;
  pfVar12 = pfVar8 + -0x18;
  func_0x000108b35884();
  *(undefined8 *)(pfVar8 + -0x16) = extraout_x8_05;
  uVar15 = (uint)pfVar30;
  uVar4 = uVar15 == 1;
  pfVar33 = pfVar7;
  if ((int)uVar15 < 1) {
    pfVar28 = (float *)0xffffffff;
    pfVar30 = unaff_x22;
  }
  else {
    pfVar32 = pfVar10;
    pfVar34 = pfVar16;
    pfVar27 = pfVar13;
    param_1 = pfVar7;
    if (((pfVar10 != (float *)0x0) && (0 < (int)pfVar16)) && ((int)param_6 == 0)) {
      FUN_108b35480(pfVar7,pfVar10,pfVar16);
      uVar5 = (uint)pfVar33;
      uVar4 = uVar5 == 1;
      if ((int)uVar5 < 1) {
        pfVar28 = (float *)0xfffffffc;
        pfVar12 = pfVar8 + -0x18;
        pfVar10 = pfVar32;
        pfVar16 = pfVar34;
        goto LAB_108b3544c;
      }
      if (uVar5 <= uVar15) {
        uVar15 = uVar5;
      }
      pfVar30 = (float *)(ulong)uVar15;
    }
    pfVar12 = pfVar8 + -0x18;
    pfVar28 = param_6;
    if (1 < (int)pfVar7[2] - 1U) goto LAB_108b3547c;
    (*(code *)PTR____chkstk_darwin_11034bd40)
              ((ulong)(uint)((int)pfVar7[2] * (int)pfVar30) * 4 + 0xf & 0x7fffffff0);
    pfVar12 = (float *)((long)pfVar8 + (-0x60 - extraout_x8_06));
    pfVar12[-8] = 1.4013e-45;
    pfVar28 = pfVar7;
    func_0x000108b35818(pfVar7,pfVar10,pfVar16,pfVar12,pfVar30,param_6);
    iVar6 = (int)pfVar28;
    uVar4 = iVar6 == 1;
    pfVar33 = pfVar28;
    if (0 < iVar6) {
      pfVar16 = (float *)(ulong)(uint)((int)pfVar7[2] * iVar6);
      pfVar33 = pfVar12;
      pfVar10 = pfVar13;
      FUN_108b605c4(pfVar12,pfVar13,pfVar16);
    }
  }
LAB_108b3544c:
  func_0x000108b35824(*(undefined8 *)(pfVar8 + -0x16));
  if ((bool)uVar4) {
    return pfVar28;
  }
  ___stack_chk_fail();
  pfVar32 = pfVar10;
  pfVar34 = pfVar16;
LAB_108b3547c:
  _abort();
  fVar31 = pfVar33[3];
  *(float **)((long)pfVar12 + -0x30) = pfVar30;
  *(float **)((long)pfVar12 + -0x28) = pfVar28;
  *(float **)((long)pfVar12 + -0x20) = param_1;
  *(float **)((long)pfVar12 + -0x18) = pfVar27;
  *(float **)((long)pfVar12 + -0x10) = pfVar8 + -4;
  *(code **)((long)pfVar12 + -8) = FUN_108b35480;
  pfVar27 = pfVar32;
  FUN_108b356a8(pfVar32,pfVar34);
  if (-1 < (int)pfVar27) {
    FUN_108b33e78(pfVar32,fVar31);
    uVar5 = (int)pfVar32 * (int)pfVar27;
    uVar15 = 0xfffffffc;
    if ((int)(uVar5 * 0x19) <= (int)fVar31 * 3) {
      uVar15 = uVar5;
    }
    pfVar27 = (float *)(ulong)uVar15;
  }
  return pfVar27;
}



/* Entry: 108b35348; end: 108b3547f;  */

undefined1 *
FUN_108b35348(undefined1 *param_1,undefined1 *param_2,ulong param_3,undefined1 *param_4,
             ulong param_5,undefined1 *param_6)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  uint uVar7;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  undefined1 *puVar8;
  undefined1 *puVar9;
  ulong unaff_x22;
  undefined4 auStack_80 [8];
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  
  puVar8 = auStack_60;
  func_0x000108b35884();
  uVar7 = (uint)param_5;
  uVar1 = uVar7 == 1;
  puVar4 = param_1;
  uStack_58 = extraout_x8;
  if ((int)uVar7 < 1) {
    puVar9 = (undefined1 *)0xffffffff;
    param_5 = unaff_x22;
  }
  else {
    puVar5 = param_2;
    uVar6 = param_3;
    unaff_x19 = param_4;
    unaff_x20 = param_1;
    if (((param_2 != (undefined1 *)0x0) && (0 < (int)param_3)) && ((int)param_6 == 0)) {
      FUN_108b35480(param_1,param_2,param_3);
      uVar2 = (uint)puVar4;
      uVar1 = uVar2 == 1;
      if ((int)uVar2 < 1) {
        puVar9 = (undefined1 *)0xfffffffc;
        puVar8 = auStack_60;
        param_2 = puVar5;
        param_3 = uVar6;
        goto LAB_108b3544c;
      }
      if (uVar2 <= uVar7) {
        uVar7 = uVar2;
      }
      param_5 = (ulong)uVar7;
    }
    puVar8 = auStack_60;
    puVar9 = param_6;
    if (1 < *(int *)(param_1 + 8) - 1U) goto LAB_108b3547c;
    (*(code *)PTR____chkstk_darwin_11034bd40)
              ((ulong)(uint)(*(int *)(param_1 + 8) * (int)param_5) * 4 + 0xf & 0x7fffffff0);
    puVar8 = auStack_60 + -extraout_x8_00;
    *(undefined4 *)((long)auStack_80 + -extraout_x8_00) = 1;
    puVar9 = param_1;
    func_0x000108b35818(param_1,param_2,param_3,puVar8,param_5,param_6);
    iVar3 = (int)puVar9;
    uVar1 = iVar3 == 1;
    puVar4 = puVar9;
    if (0 < iVar3) {
      param_3 = (ulong)(uint)(*(int *)(param_1 + 8) * iVar3);
      puVar4 = puVar8;
      param_2 = param_4;
      FUN_108b605c4(puVar8,param_4,param_3);
    }
  }
LAB_108b3544c:
  func_0x000108b35824(uStack_58);
  if ((bool)uVar1) {
    return puVar9;
  }
  ___stack_chk_fail();
  puVar5 = param_2;
  uVar6 = param_3;
LAB_108b3547c:
  _abort();
  iVar3 = *(int *)(puVar4 + 0xc);
  *(ulong *)(puVar8 + -0x30) = param_5;
  *(undefined1 **)(puVar8 + -0x28) = puVar9;
  *(undefined1 **)(puVar8 + -0x20) = unaff_x20;
  *(undefined1 **)(puVar8 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar8 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)(puVar8 + -8) = FUN_108b35480;
  puVar8 = puVar5;
  FUN_108b356a8(puVar5,uVar6);
  if (-1 < (int)puVar8) {
    FUN_108b33e78(puVar5,iVar3);
    uVar2 = (int)puVar5 * (int)puVar8;
    uVar7 = 0xfffffffc;
    if ((int)(uVar2 * 0x19) <= iVar3 * 3) {
      uVar7 = uVar2;
    }
    puVar8 = (undefined1 *)(ulong)uVar7;
  }
  return puVar8;
}



/* Entry: 108b35480; end: 108b35493;  */

ulong FUN_108b35480(long param_1,ulong param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  
  iVar2 = *(int *)(param_1 + 0xc);
  uVar4 = param_2;
  FUN_108b356a8(param_2,param_3);
  if (-1 < (int)uVar4) {
    FUN_108b33e78(param_2,iVar2);
    uVar3 = (int)param_2 * (int)uVar4;
    uVar1 = 0xfffffffc;
    if ((int)(uVar3 * 0x19) <= iVar2 * 3) {
      uVar1 = uVar3;
    }
    uVar4 = (ulong)uVar1;
  }
  return uVar4;
}



/* Entry: 108b35494; end: 108b356a7;  */

void FUN_108b35494(int *param_1,int param_2)

{
  int extraout_w8;
  uint extraout_w8_00;
  int *extraout_x8;
  int *extraout_x8_00;
  int *extraout_x8_01;
  int *extraout_x8_02;
  int *extraout_x8_03;
  int *extraout_x8_04;
  int *extraout_x8_05;
  int *piVar1;
  int iVar2;
  long *extraout_x9;
  uint *extraout_x9_00;
  undefined8 *extraout_x9_01;
  uint *extraout_x9_02;
  
  iVar2 = param_1[1];
  switch(param_2) {
  case 0xfbc:
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    func_0x000108b35894((long)param_1 + (long)*param_1);
    FUN_108b50788((long)param_1 + (long)iVar2);
    param_1[0xf] = param_1[2];
    param_1[0x13] = param_1[3] / 400;
    return;
  case 0xfbd:
    func_0x000108b357d8(0xfffffffb);
    if (extraout_x8_02 == (int *)0x0) {
      return;
    }
    iVar2 = param_1[3];
    piVar1 = extraout_x8_02;
    break;
  case 0xfbe:
  case 0xfc0:
  case 0xfc3:
  case 0xfc4:
  case 0xfc5:
  case 0xfc6:
  case 0xfc8:
  case 0xfc9:
  case 0xfca:
  case 0xfcb:
  case 0xfcc:
    goto LAB_108b3567c;
  case 0xfbf:
    func_0x000108b357d8(0xfffffffb);
    if (extraout_x8_01 == (int *)0x0) {
      return;
    }
    iVar2 = param_1[0x18];
    piVar1 = extraout_x8_01;
    break;
  case 0xfc1:
    func_0x000108b35844();
    if ((int *)*extraout_x9_01 == (int *)0x0) {
      return;
    }
    if (param_1[0x12] != 0x3ea) {
      *(int *)*extraout_x9_01 = param_1[9];
      return;
    }
    func_0x000108b358a8();
    goto code_r0x000108b355bc;
  case 0xfc2:
    func_0x000108b358b4();
    if (extraout_w8 != (short)extraout_w8) {
      return;
    }
    param_1[0xb] = extraout_w8;
    return;
  case 0xfc7:
    func_0x000108b357d8(0xfffffffb);
    if (extraout_x8_00 == (int *)0x0) {
      return;
    }
    iVar2 = param_1[0x15];
    piVar1 = extraout_x8_00;
    break;
  case 0xfcd:
    func_0x000108b357d8(0xfffffffb);
    if (extraout_x8_03 == (int *)0x0) {
      return;
    }
    iVar2 = param_1[0xb];
    piVar1 = extraout_x8_03;
    break;
  case 0xfce:
    func_0x000108b35844();
    if (1 < *extraout_x9_00) {
      return;
    }
    func_0x000108b358a8();
    goto code_r0x000108b355bc;
  case 0xfcf:
    func_0x000108b35844();
    if (*extraout_x9 == 0) {
      return;
    }
    func_0x000108b358a8();
code_r0x000108b355bc:
    FUN_108b49614();
    return;
  default:
    if (param_2 == 0xfdb) {
      func_0x000108b357d8(0xfffffffb);
      if (extraout_x8_05 == (int *)0x0) {
        return;
      }
      iVar2 = param_1[0xd];
      piVar1 = extraout_x8_05;
    }
    else {
      if (param_2 == 0xfaa) {
        func_0x000108b35844();
        if (10 < *extraout_x9_02) {
          return;
        }
        param_1[0xc] = *extraout_x9_02;
        func_0x000108b358a8();
        FUN_108b49614();
        return;
      }
      if (param_2 == 0xfab) {
        func_0x000108b357d8(0xfffffffb);
        if (extraout_x8_04 == (int *)0x0) {
          return;
        }
        iVar2 = param_1[0xc];
        piVar1 = extraout_x8_04;
      }
      else {
        if (param_2 == 0xfda) {
          func_0x000108b358b4();
          if (1 < extraout_w8_00) {
            return;
          }
          param_1[0xd] = extraout_w8_00;
          return;
        }
        if (param_2 != 0xfa9) {
          return;
        }
        func_0x000108b357d8(0xfffffffb);
        if (extraout_x8 == (int *)0x0) {
          return;
        }
        iVar2 = param_1[0x10];
        piVar1 = extraout_x8;
      }
    }
  }
  *piVar1 = iVar2;
LAB_108b3567c:
  return;
}



/* Entry: 108b356a8; end: 108b356f7;  */

uint FUN_108b356a8(byte *param_1,int param_2)

{
  if (param_2 < 1) {
    return 0xffffffff;
  }
  if ((*param_1 & 3) == 0) {
    return 1;
  }
  if ((*param_1 & 3) != 3) {
    return 2;
  }
  if (param_2 == 1) {
    return 0xfffffffc;
  }
  return param_1[1] & 0x3f;
}



/* Entry: 108b356f8; end: 108b35757;  */

ulong FUN_108b356f8(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  FUN_108b356a8();
  if (-1 < (int)uVar3) {
    FUN_108b33e78(param_1,param_3);
    uVar2 = (int)param_1 * (int)uVar3;
    uVar1 = 0xfffffffc;
    if ((int)(uVar2 * 0x19) <= (int)param_3 * 3) {
      uVar1 = uVar2;
    }
    uVar3 = (ulong)uVar1;
  }
  return uVar3;
}



/* Entry: 108b35758; end: 108b358c7;  */

void FUN_108b35758(long param_1,long param_2,long param_3,uint param_4,uint param_5,float *param_6,
                  int param_7)

{
  float *pfVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  float fVar6;
  
  uVar3 = 0;
  uVar2 = 0;
  if (param_7 != 0) {
    uVar2 = 48000 / param_7;
  }
  for (; uVar3 != (param_5 & ((int)param_5 >> 0x1f ^ 0xffffffffU)); uVar3 = uVar3 + 1) {
    lVar4 = 0;
    pfVar1 = param_6;
    for (uVar5 = (ulong)(param_4 & ((int)param_4 >> 0x1f ^ 0xffffffffU)); uVar5 != 0;
        uVar5 = uVar5 - 1) {
      fVar6 = *pfVar1 * *pfVar1;
      *(float *)(param_3 + lVar4) =
           (1.0 - fVar6) * *(float *)(param_1 + lVar4) + *(float *)(param_2 + lVar4) * fVar6;
      pfVar1 = (float *)((long)pfVar1 +
                        (-(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2));
      lVar4 = lVar4 + (-(ulong)(param_5 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_5 << 2);
    }
    param_3 = param_3 + 4;
    param_1 = param_1 + 4;
    param_2 = param_2 + 4;
  }
  return;
}



/* Entry: 108b358c8; end: 108b35c2f;  */

int FUN_108b358c8(int *param_1,ulong param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  
  iVar4 = (int)param_2;
  if ((((iVar4 != 8000 && iVar4 != 12000) && iVar4 != 16000) && iVar4 != 48000) && iVar4 != 24000) {
    return -1;
  }
  iVar5 = (int)param_3;
  if ((iVar5 - 3U < 0xfffffffe) || (5 < param_4 - 0x800 || param_4 - 0x800 == 2)) {
    return -1;
  }
  iVar6 = 0x2820;
  if (iVar5 != 1) {
    iVar6 = 0x4fe8;
  }
  iVar1 = 0;
  if (param_4 != 0x805) {
    iVar1 = iVar6;
  }
  if (param_4 == 0x804) {
    iVar6 = 0;
    uVar9 = 0x37e8;
  }
  else {
    uVar2 = param_3;
    FUN_108b418e0(param_3);
    iVar6 = (int)uVar2;
    uVar8 = 0x3f68;
    if (iVar5 != 1) {
      uVar8 = 0x46e8;
    }
    uVar9 = 0x37e8;
    if ((param_4 & 0x806) != 0x804) {
      uVar9 = uVar8;
    }
  }
  iVar6 = uVar9 + iVar1 + iVar6;
  if (param_1 == (int *)0x0) {
    return iVar6;
  }
  _bzero(param_1,(long)iVar6);
  *param_1 = uVar9 + iVar1;
  param_1[1] = uVar9;
  param_1[0x1d] = iVar5;
  param_1[0xdde] = iVar5;
  param_1[0x25] = iVar4;
  param_1[0x2e] = 0;
  uVar7 = param_2;
  if (param_4 == 0x805) {
LAB_108b359e8:
    param_1[2] = iVar5;
    param_1[3] = iVar5;
    iVar6 = (int)uVar7;
    param_1[4] = iVar6;
    param_1[7] = 16000;
    param_1[8] = 0x14;
    param_1[5] = 16000;
    param_1[6] = 8000;
    param_1[0xb] = 9;
    param_1[0xc] = 0;
    param_1[9] = 25000;
    param_1[10] = 0;
    param_1[0xd] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x14] = 0;
    if (param_4 != 0x804) {
      lVar10 = (long)*param_1;
      lVar3 = (long)param_1 + lVar10;
      FUN_108b41918(lVar3,param_2,param_3,param_1[0x2e]);
      if ((int)lVar3 != 0) goto LAB_108b35a38;
      FUN_108b46af8((long)param_1 + lVar10,0x2720);
      FUN_108b46af8((long)param_1 + lVar10,0xfaa);
      iVar6 = param_1[0x25];
    }
    param_1[0x26] = 1;
    param_1[0x27] = 1;
    param_1[0x1c] = param_4;
    param_1[0x21] = -1000;
    param_1[0x22] = 0x451;
    param_1[0x1f] = -1000;
    param_1[0x20] = -1000;
    param_1[0x23] = -1000;
    param_1[0x24] = -1;
    iVar1 = iVar6 / 100;
    if (0x803 < param_4) {
      iVar1 = 0;
    }
    param_1[0x2c] = iVar1;
    param_1[0x2a] = -1000;
    param_1[0x2b] = 0x18;
    param_1[0x28] = 5000;
    param_1[0x29] = iVar5 * iVar4 + 3000;
    param_1[0x1e] = iVar6 / 0xfa;
    *(undefined2 *)(param_1 + 0xddf) = 0x4000;
    param_1[0xde0] = 0x2f400;
    param_1[0xde1] = 0x3f800000;
    param_1[0xded] = 1;
    param_1[0xde6] = 0x3e9;
    param_1[0xdea] = 0x451;
    param_1[0x31] = 0;
    param_1[0x33] = iVar6;
    _bzero(param_1 + 0x34,0x36a8);
    iVar4 = 0;
    param_1[0x32] = param_4;
  }
  else {
    lVar3 = (long)param_1 + (ulong)uVar9;
    FUN_108b51134(lVar3,param_3,0,param_1 + 2);
    if ((int)lVar3 == 0) {
      uVar7 = (ulong)(uint)param_1[0x25];
      goto LAB_108b359e8;
    }
LAB_108b35a38:
    iVar4 = -3;
  }
  return iVar4;
}



/* Entry: 108b35c30; end: 108b35e6f;  */

void FUN_108b35c30(long param_1,float *param_2,uint param_3,int param_4,int param_5,uint param_6,
                  uint param_7)

{
  float *pfVar1;
  short *psVar2;
  ulong uVar3;
  long lVar4;
  short *psVar5;
  long lVar6;
  ulong uVar7;
  
  lVar4 = (long)(int)param_7;
  psVar5 = (short *)(param_1 + (long)(int)param_7 * (long)param_4 * 2 + (long)param_5 * 2);
  uVar3 = (ulong)(param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU));
  pfVar1 = param_2;
  for (uVar7 = uVar3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pfVar1 = (float)(int)*psVar5;
    psVar5 = (short *)((long)psVar5 +
                      (-(ulong)(param_7 >> 0x1f) & 0xfffffffe00000000 | (ulong)param_7 << 1));
    pfVar1 = pfVar1 + 1;
  }
  if ((int)param_6 < 0) {
    if (param_6 == 0xfffffffe) {
      psVar5 = (short *)(param_1 + (long)(int)param_7 * (long)param_4 * 2);
      for (lVar6 = 1; psVar5 = psVar5 + 1, uVar7 = uVar3, psVar2 = psVar5, pfVar1 = param_2,
          lVar6 < lVar4; lVar6 = lVar6 + 1) {
        for (; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pfVar1 = *pfVar1 + (float)(int)*psVar2;
          psVar2 = psVar2 + lVar4;
          pfVar1 = pfVar1 + 1;
        }
      }
    }
  }
  else {
    psVar5 = (short *)(param_1 + (long)(int)param_7 * (long)param_4 * 2 + (ulong)param_6 * 2);
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *param_2 = *param_2 + (float)(int)*psVar5;
      psVar5 = psVar5 + lVar4;
      param_2 = param_2 + 1;
    }
  }
  return;
}



/* Entry: 108b35e70; end: 108b371d7;  */

byte * FUN_108b35e70(byte *param_1,long param_2,undefined8 param_3,byte *param_4,uint param_5,
                    uint param_6,undefined8 param_7,ulong param_8,undefined4 param_9,
                    undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined8 param_13,
                    undefined4 param_14)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint *puVar6;
  uint *puVar7;
  undefined1 uVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  float fVar17;
  undefined4 extraout_w8;
  float extraout_w8_00;
  undefined4 extraout_w8_01;
  uint extraout_w8_02;
  undefined8 extraout_x8;
  long extraout_x8_00;
  int iVar18;
  uint uVar19;
  long lVar20;
  undefined1 *puVar21;
  long extraout_x9;
  float *extraout_x9_00;
  int iVar22;
  int iVar23;
  int iVar24;
  undefined8 *puVar25;
  int *piVar26;
  uint extraout_w12;
  int iVar27;
  ulong extraout_x13;
  int iVar28;
  byte *unaff_x19;
  ulong unaff_x20;
  byte bVar29;
  byte bVar30;
  ulong uVar31;
  float *pfVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  uint auStack_630 [8];
  byte abStack_610 [4];
  undefined4 auStack_60c [271];
  int iStack_1d0;
  uint uStack_1cc;
  undefined8 uStack_1c8;
  float *pfStack_1c0;
  uint uStack_1b0;
  uint uStack_1ac;
  byte *pbStack_1a8;
  uint uStack_19c;
  int iStack_198;
  uint uStack_194;
  uint uStack_190;
  int iStack_18c;
  byte *pbStack_188;
  byte *pbStack_180;
  uint uStack_174;
  byte *pbStack_170;
  int iStack_168;
  undefined4 uStack_164;
  ulong uStack_160;
  uint uStack_154;
  uint uStack_150;
  uint uStack_14c;
  float *pfStack_148;
  uint uStack_13c;
  long lStack_138;
  undefined8 uStack_130;
  int aiStack_128 [26];
  float afStack_c0 [5];
  float afStack_ac [3];
  uint uStack_a0;
  float fStack_9c;
  undefined1 auStack_98 [24];
  undefined8 uStack_80;
  
  lStack_138 = param_2;
  func_0x000108b39478();
  uStack_130 = 0;
  uVar15 = param_5;
  if (0x1de7 < (int)param_5) {
    uVar15 = 0x1de8;
  }
  param_1[0x37e4] = 0;
  param_1[0x37e5] = 0;
  param_1[0x37e6] = 0;
  param_1[0x37e7] = 0;
  iVar14 = (int)param_3;
  uVar8 = 0 < iVar14 && param_5 == 1;
  pbVar12 = param_1;
  uStack_80 = extraout_x8;
  if (0 < iVar14 && 0 < (int)param_5) {
    if ((param_5 == 1) && (uVar8 = *(int *)(param_1 + 0x94) == iVar14 * 10, (bool)uVar8)) {
      puVar6 = &uStack_1b0;
      pbVar13 = (byte *)0xfffffffe;
    }
    else {
      pbStack_1a8 = param_4;
      if (*(int *)(param_1 + 0x70) == 0x805) {
        pbStack_188 = (byte *)0x0;
LAB_108b35f54:
        pbStack_170 = param_1 + *(int *)param_1;
        if ((int)*(uint *)(param_1 + 0xac) <= (int)param_6) {
          param_6 = *(uint *)(param_1 + 0xac);
        }
        pfStack_1c0 = (float *)&uStack_130;
        FUN_108b46af8(pbStack_170,0x271f);
      }
      else {
        pbStack_188 = param_1 + *(int *)(param_1 + 4);
        if (*(int *)(param_1 + 0x70) != 0x804) goto LAB_108b35f54;
        pbStack_170 = (byte *)0x0;
        if ((int)*(uint *)(param_1 + 0xac) <= (int)param_6) {
          param_6 = *(uint *)(param_1 + 0xac);
        }
      }
      puVar6 = &uStack_1b0;
      pfVar32 = (float *)(ulong)param_6;
      lVar20 = lStack_138;
      func_0x000108b35e14(lStack_138,param_3,*(int *)(param_1 + 0x74),pfVar32);
      afStack_c0[0] = 0.0;
      if (((*(int *)(param_1 + 0x2c) < 7) || (32000 < *(int *)(param_1 + 0x94) - 16000U)) ||
         (*(int *)(param_1 + 0x70) == 0x804)) {
        if (*(int *)(param_1 + 0x1de8) != 0) {
          func_0x000108b394cc();
        }
        uVar11 = 0xffffffff;
        uStack_174 = 0xffffffff;
      }
      else {
        uVar11 = *(uint *)(param_1 + 0x1ddc);
        uStack_174 = *(uint *)(param_1 + 0x1de0);
        pfStack_1c0 = afStack_c0;
        uStack_1c8 = param_13;
        iStack_1d0 = *(int *)(param_1 + 0x94);
        uStack_1cc = param_6;
        FUN_108b3cc84(param_1 + 0xc4,uStack_130,param_7,param_8,param_3,param_9,param_10,param_11);
      }
      fVar17 = afStack_c0[0];
      iVar10 = (int)lVar20;
      if (iVar10 == 0) {
        param_1[0x90] = 0xff;
        param_1[0x91] = 0xff;
        param_1[0x92] = 0xff;
        param_1[0x93] = 0xff;
      }
      param_1[0x37d4] = 0;
      param_1[0x37d5] = 0;
      param_1[0x37d6] = 0;
      param_1[0x37d7] = 0;
      if (afStack_c0[0] != 0.0) {
        if (*(int *)(param_1 + 0x80) == -1000) {
          lVar20 = 0x1c;
          if (*(int *)(param_1 + 0x379c) != 0x3ea) {
            lVar20 = 0x18;
          }
          lVar5 = 0x14;
          if (*(int *)(param_1 + 0x379c) != 0) {
            lVar5 = lVar20;
          }
          *(int *)(param_1 + 0x90) =
               (int)((1.0 - *(float *)((long)afStack_c0 + lVar5)) * 100.0 + 0.5);
        }
        if ((int)uStack_a0 < 0xd) {
          iVar16 = 0x44d;
        }
        else if (uStack_a0 < 0xf) {
          iVar16 = 0x44e;
        }
        else if (uStack_a0 < 0x11) {
          iVar16 = 0x44f;
        }
        else {
          iVar16 = 0x450;
          if (0x12 < uStack_a0) {
            iVar16 = 0x451;
          }
        }
        *(int *)(param_1 + 0x37d4) = iVar16;
      }
      uVar19 = *(uint *)(param_1 + 0x74);
      uVar31 = (ulong)uVar19;
      uStack_14c = uVar11;
      pfStack_148 = pfVar32;
      if ((iVar10 == 0) && (0.1 < fStack_9c || afStack_c0[0] == 0.0)) {
        fVar33 = *(float *)(param_1 + 0x37dc);
        fVar43 = fVar33 * 0.999;
        FUN_108b371d8(lStack_138,param_3,uVar31);
        if (fVar43 <= fVar33) {
          fVar43 = fVar33;
        }
        *(float *)(param_1 + 0x37dc) = fVar43;
      }
      fVar43 = 0.0;
      if ((uVar19 == 2) && (fVar43 = 0.0, *(int *)(param_1 + 0x7c) != 1)) {
        fVar33 = 0.0;
        fVar34 = 0.0;
        fVar43 = 0.0;
        puVar25 = (undefined8 *)(lStack_138 + 0x10);
        for (lVar20 = 0; lVar20 < iVar14 + -3; lVar20 = lVar20 + 4) {
          fVar37 = (float)puVar25[-2];
          fVar36 = (float)((ulong)puVar25[-2] >> 0x20);
          fVar35 = (float)puVar25[-1];
          fVar38 = (float)((ulong)puVar25[-1] >> 0x20);
          fVar41 = (float)*puVar25;
          fVar39 = (float)((ulong)*puVar25 >> 0x20);
          fVar40 = (float)puVar25[1];
          fVar42 = (float)((ulong)puVar25[1] >> 0x20);
          fVar43 = fVar43 + fVar37 * fVar37 + fVar35 * fVar35 + fVar41 * fVar41 + fVar40 * fVar40;
          fVar33 = fVar33 + fVar37 * fVar36 + fVar35 * fVar38 + fVar41 * fVar39 + fVar40 * fVar42;
          fVar34 = fVar34 + fVar36 * fVar36 + fVar38 * fVar38 + fVar39 * fVar39 + fVar42 * fVar42;
          puVar25 = puVar25 + 4;
        }
        uVar11 = 0;
        if (iVar14 != 0) {
          uVar11 = *(int *)(param_1 + 0x94) / iVar14;
        }
        uVar3 = uVar11;
        if ((int)uVar11 < 0x33) {
          uVar3 = 0x32;
        }
        fVar36 = 25.0 / (float)uVar3;
        fVar37 = 0.0;
        if (1e+09 <= fVar43 || 1e+09 <= fVar34) {
          fVar34 = 0.0;
          fVar33 = 0.0;
          fVar43 = fVar37;
        }
        fVar35 = *(float *)(param_1 + 0x37c0) + (fVar43 - *(float *)(param_1 + 0x37c0)) * fVar36;
        fVar41 = fVar33 * fVar36 + *(float *)(param_1 + 0x37c4) * (1.0 - fVar36);
        fVar33 = *(float *)(param_1 + 0x37c8) + (fVar34 - *(float *)(param_1 + 0x37c8)) * fVar36;
        fVar43 = fVar37;
        if (0.0 <= fVar35) {
          fVar43 = fVar35;
        }
        *(float *)(param_1 + 0x37c0) = fVar43;
        fVar34 = fVar37;
        if (0.0 <= fVar41) {
          fVar34 = fVar41;
        }
        *(float *)(param_1 + 0x37c4) = fVar34;
        if (0.0 <= fVar33) {
          fVar37 = fVar33;
        }
        *(float *)(param_1 + 0x37c8) = fVar37;
        fVar33 = fVar43;
        if (fVar43 <= fVar37) {
          fVar33 = fVar37;
        }
        if (fVar33 <= 0.0008) {
          fVar33 = *(float *)(param_1 + 0x37d0);
        }
        else {
          fVar43 = SQRT(fVar43);
          fVar37 = SQRT(fVar37);
          if (fVar43 * fVar37 <= fVar34) {
            fVar34 = fVar43 * fVar37;
          }
          *(float *)(param_1 + 0x37c4) = fVar34;
          fVar34 = fVar34 / (fVar37 * fVar43 + 1e-15);
          fVar34 = SQRT(1.0 - fVar34 * fVar34);
          fVar33 = 1.0;
          if (fVar34 <= 1.0) {
            fVar33 = fVar34;
          }
          fVar43 = *(float *)(param_1 + 0x37cc) +
                   ((ABS(SQRT(fVar43) - SQRT(fVar37)) / (SQRT(fVar43) + 1e-15 + SQRT(fVar37))) *
                    fVar33 - *(float *)(param_1 + 0x37cc)) / (float)(int)uVar11;
          *(float *)(param_1 + 0x37cc) = fVar43;
          fVar33 = *(float *)(param_1 + 0x37d0) + -0.02 / (float)(int)uVar11;
          if (fVar33 <= fVar43) {
            fVar33 = fVar43;
          }
          *(float *)(param_1 + 0x37d0) = fVar33;
        }
        fVar43 = 1.0;
        if (fVar33 * 20.0 <= 1.0) {
          fVar43 = fVar33 * 20.0;
        }
      }
      uStack_160 = CONCAT44(uStack_160._4_4_,iVar10);
      uStack_19c = param_5;
      FUN_108b37208(param_1,param_3,uVar15);
      *(int *)(param_1 + 0xa4) = (int)pbVar12;
      iVar10 = *(int *)(param_1 + 0x94);
      iVar16 = 0;
      if (iVar14 != 0) {
        iVar16 = iVar10 / iVar14;
      }
      if (*(int *)(param_1 + 0x98) == 0) {
        iVar22 = 0;
        if (iVar14 != 0) {
          iVar22 = (iVar10 * 6) / iVar14;
        }
        iVar23 = 0;
        if (iVar22 != 0) {
          iVar23 = ((int)pbVar12 * 6) / iVar22;
        }
        uVar11 = (iVar23 + 4) / 8;
        if ((int)uVar15 <= (int)uVar11) {
          uVar11 = uVar15;
        }
        uVar15 = (int)(iVar22 * uVar11 * 8) / 6;
        pbVar12 = (byte *)(ulong)uVar15;
        *(uint *)(param_1 + 0xa4) = uVar15;
        uVar15 = uVar11;
        if ((int)uVar11 < 2) {
          uVar15 = 1;
        }
      }
      else {
        uVar11 = 0xffffffff;
      }
      uStack_13c = uVar15;
      if (((int)uVar15 < 3 || (int)pbVar12 < iVar16 * 0x18) ||
         ((iVar16 < 0x32 && (((int)pbVar12 < 0x960 || ((int)(uVar15 * iVar16) < 300)))))) {
        iVar14 = 0x44d;
        if (*(int *)(param_1 + 0x37a8) != 0) {
          iVar14 = *(int *)(param_1 + 0x37a8);
        }
        uVar11 = 1000;
        if (*(uint *)(param_1 + 0x3798) != 0) {
          uVar11 = *(uint *)(param_1 + 0x3798);
        }
        uVar19 = 0x3ea;
        if (iVar16 < 0x65) {
          uVar19 = uVar11;
        }
        uVar31 = (ulong)uVar19;
        bVar29 = iVar16 == 0x19 && uVar19 != 1000;
        iVar10 = 0x32;
        if (iVar16 != 0x19 || uVar19 == 1000) {
          iVar10 = iVar16;
        }
        if (iVar10 < 0x11) {
          if ((uStack_19c == 1) || (uVar19 == 1000 && iVar10 != 10)) {
            bVar30 = 0;
            bVar29 = iVar10 < 0xd;
            bVar9 = iVar10 != 0xc;
            iVar10 = 0x19;
            if (bVar9) {
              iVar10 = 0x10;
            }
            uVar31 = 1000;
          }
          else {
            bVar29 = 3;
            bVar30 = 0;
            if (iVar10 != 0) {
              bVar30 = (byte)(0x32 / iVar10);
            }
            iVar10 = 0x32;
          }
        }
        else {
          bVar30 = 0;
        }
        iVar16 = (int)uVar31;
        if ((iVar14 < 0x450) || (iVar16 != 1000)) {
          if ((iVar14 == 0x44e) && (iVar16 == 0x3ea)) {
            iVar22 = 0x44d;
          }
          else {
            iVar22 = 0x450;
            if (iVar16 != 0x3e9 || 0x450 < iVar14) {
              iVar22 = iVar14;
            }
          }
        }
        else {
          iVar22 = 0x44f;
        }
        func_0x000108b37278(uVar31,iVar10,iVar22,*(int *)(param_1 + 0x3778));
        *pbStack_1a8 = (byte)uVar31 | bVar29;
        uVar11 = 1;
        if (1 < bVar29) {
          uVar11 = 2;
        }
        if ((int)uVar15 <= (int)uVar11) {
          uVar15 = uVar11;
        }
        param_8 = (ulong)uVar15;
        uVar8 = bVar29 == 3;
        if ((bool)uVar8) {
          pbStack_1a8[1] = bVar30;
        }
        puVar6 = &uStack_1b0;
        pbVar12 = pbStack_1a8;
        pbVar13 = (byte *)(ulong)uVar11;
        if (*(int *)(param_1 + 0x98) == 0) {
          FUN_108b3c8c8(pbStack_1a8,(byte *)(ulong)uVar11,param_8);
          uVar8 = (int)pbVar12 == 0;
          if (!(bool)uVar8) {
            uVar15 = 0xfffffffd;
          }
          puVar6 = &uStack_1b0;
          pbVar13 = (byte *)(ulong)uVar15;
        }
      }
      else {
        iStack_168 = *(int *)(param_1 + 0x28);
        pbStack_180 = (byte *)CONCAT44(pbStack_180._4_4_,*(int *)(param_1 + 0x2c));
        uStack_1b0 = uVar11;
        func_0x000108b372e8(pbVar12,uVar31,iVar16,*(int *)(param_1 + 0x98),0);
        if (*(int *)(param_1 + 0x80) == 0xbb9) {
          uStack_190 = 0x7f;
        }
        else if (*(int *)(param_1 + 0x80) == 0xbba) {
          uStack_190 = 0;
        }
        else if (*(int *)(param_1 + 0x90) < 0) {
          uStack_190 = 0x73;
          if (*(int *)(param_1 + 0x70) != 0x800) {
            uStack_190 = 0x30;
          }
        }
        else {
          uVar15 = (uint)(*(int *)(param_1 + 0x90) * 0x147) >> 8;
          uStack_190 = uVar15;
          if (0x72 < uVar15) {
            uStack_190 = 0x73;
          }
          if (*(int *)(param_1 + 0x70) != 0x801) {
            uStack_190 = uVar15;
          }
        }
        uVar15 = *(uint *)(param_1 + 0x7c);
        if (uVar15 == 0xfffffc18) {
          if (uVar19 == 2) {
            iVar22 = 16000;
            if (*(int *)(param_1 + 0x3778) != 2) {
              iVar22 = 18000;
            }
            uVar15 = 1;
            if ((int)(iVar22 + (uStack_190 * uStack_190 * 2000 >> 0xe)) < (int)pbVar12) {
              uVar15 = 2;
            }
            goto LAB_108b36648;
          }
LAB_108b36650:
          *(uint *)(param_1 + 0x3778) = uVar19;
          param_8 = uVar31;
        }
        else {
          if (uVar19 != 2) goto LAB_108b36650;
LAB_108b36648:
          *(uint *)(param_1 + 0x3778) = uVar15;
          param_8 = (ulong)uVar15;
        }
        uVar15 = 0;
        if (iVar14 != 0) {
          uVar15 = (iVar10 * 6) / iVar14;
        }
        func_0x000108b39518();
        func_0x000108b39418();
        uVar11 = (uint)(*(int *)(param_1 + 0xbc) != 0 && (fVar17 == 0.0 && (int)uStack_160 == 0));
        *(uint *)(param_1 + 0x3c) = uVar11;
        iVar22 = *(int *)(param_1 + 0x70);
        if ((iVar22 == 0x803) || (iVar22 == 0x805)) {
LAB_108b367cc:
          iVar23 = 0x3ea;
LAB_108b367d0:
          *(int *)(param_1 + 0x3798) = iVar23;
        }
        else {
          if (iVar22 == 0x804) {
            iVar23 = 1000;
            goto LAB_108b367d0;
          }
          iVar23 = *(int *)(param_1 + 0x8c);
          if (iVar23 != -1000) goto LAB_108b367d0;
          iVar23 = (int)(fVar43 * 10000.0 + (1.0 - fVar43) * 10000.0);
          iVar23 = iVar23 + ((int)(uStack_190 * uStack_190 *
                                  ((int)(fVar43 * 44000.0 + (1.0 - fVar43) * 64000.0) - iVar23)) >>
                            0xe);
          iVar18 = iVar23 + 8000;
          if (iVar22 != 0x800) {
            iVar18 = iVar23;
          }
          iVar23 = iVar18 + 4000;
          if (*(int *)(param_1 + 0x379c) < 1) {
            iVar23 = iVar18;
          }
          iVar18 = iVar18 + -4000;
          if (*(int *)(param_1 + 0x379c) != 0x3ea) {
            iVar18 = iVar23;
          }
          iVar23 = 1000;
          if (iVar18 <= (int)pbVar12) {
            iVar23 = 0x3ea;
          }
          *(int *)(param_1 + 0x3798) = iVar23;
          if ((*(int *)(param_1 + 0x30) == 0) || (iStack_168 <= (int)(0x80 - uStack_190) >> 4)) {
LAB_108b36780:
            uVar19 = 0;
            if (100 < uStack_190) {
              uVar19 = uVar11;
            }
            if (uVar19 == 1) {
              iVar23 = 1000;
              param_1[0x3798] = 0xe8;
              param_1[0x3799] = 3;
              param_1[0x379a] = 0;
              param_1[0x379b] = 0;
            }
          }
          else if (*(int *)(param_1 + 0xc0) != 2 || 0x19 < uStack_190) {
            iVar23 = 1000;
            param_1[0x3798] = 0xe8;
            param_1[0x3799] = 3;
            param_1[0x379a] = 0;
            param_1[0x379b] = 0;
            goto LAB_108b36780;
          }
          iVar18 = 54000;
          if (iVar16 < 0x33) {
            iVar18 = 36000;
          }
          iVar16 = 0;
          if (uVar15 != 0) {
            iVar16 = iVar18 / (int)uVar15;
          }
          if ((int)uStack_13c < iVar16 / 8) goto LAB_108b367cc;
        }
        if (iVar23 != 0x3ea && iVar14 < iVar10 / 100) {
          puVar7 = &uStack_1b0;
          if (iVar22 == 0x804) goto LAB_108b371d4;
          iVar23 = 0x3ea;
          param_1[0x3798] = 0xea;
          param_1[0x3799] = 3;
          param_1[0x379a] = 0;
          param_1[0x379b] = 0;
        }
        if ((iVar22 != 0x804) && (*(int *)(param_1 + 0xb4) != 0)) {
          iVar23 = 0x3ea;
          param_1[0x3798] = 0xea;
          param_1[0x3799] = 3;
          param_1[0x379a] = 0;
          param_1[0x379b] = 0;
        }
        iVar16 = *(int *)(param_1 + 0x379c);
        uStack_194 = uVar15;
        if (iVar16 < 1) {
LAB_108b36884:
          func_0x000108b393b8();
          pfVar32 = extraout_x9_00;
          fVar17 = extraout_w8_00;
LAB_108b36888:
          pfVar32[-0x40] = fVar17;
        }
        else {
          if ((iVar23 != 0x3ea) && (iVar16 == 0x3ea)) {
            uStack_150 = 0;
            iStack_198 = 0;
            puVar21 = &stack0xffffffffffffff9c;
LAB_108b36854:
            uStack_154 = 0;
            fVar17 = 1.4013e-45;
            *(undefined4 *)(puVar21 + -0x100) = 1;
            pfVar32 = afStack_ac;
            goto LAB_108b36888;
          }
          if (iVar23 != 0x3ea) goto LAB_108b36884;
          if (iVar16 != 0x3ea && iVar10 / 100 <= iVar14) {
            uStack_164 = 0;
            *(int *)(param_1 + 0x3798) = iVar16;
            uStack_150 = 1;
            puVar21 = auStack_98;
            iVar23 = iVar16;
            goto LAB_108b36854;
          }
          func_0x000108b393b8();
          *(undefined4 *)(extraout_x9 + -0x100) = extraout_w8;
          iVar23 = 0x3ea;
        }
        if (((((int)param_8 == 1) && (*(int *)(param_1 + 0x37a0) == 2)) &&
            (*(int *)(param_1 + 0x48) == 0)) && ((iVar16 != 0x3ea && (iVar23 != 0x3ea)))) {
          param_1[0x48] = 1;
          param_1[0x49] = 0;
          param_1[0x4a] = 0;
          param_1[0x4b] = 0;
          param_1[0x3778] = 2;
          param_1[0x3779] = 0;
          param_1[0x377a] = 0;
          param_1[0x377b] = 0;
        }
        else {
          param_1[0x48] = 0;
          param_1[0x49] = 0;
          param_1[0x4a] = 0;
          param_1[0x4b] = 0;
        }
        func_0x000108b39518();
        func_0x000108b39418();
        iVar10 = (int)pbVar12;
        if (iVar23 == 0x3ea) {
          iStack_168 = 0;
          bVar9 = true;
          param_8 = (ulong)uStack_19c;
LAB_108b36978:
          for (lVar20 = 0; lVar20 != 0x20; lVar20 = lVar20 + 4) {
            *(int *)((long)aiStack_128 + lVar20) =
                 *(int *)(&UNK_10df8a030 + lVar20) +
                 ((int)(uStack_190 * uStack_190 *
                       (*(int *)(&UNK_10df8a010 + lVar20) - *(int *)(&UNK_10df8a030 + lVar20))) >>
                 0xe);
          }
          piVar26 = aiStack_128 + 7;
          uVar31 = 0x451;
          do {
            iVar16 = piVar26[-1];
            if (*(int *)(param_1 + 0x37b4) == 0) {
              iVar22 = *piVar26;
              if ((long)uVar31 <= (long)*(int *)(param_1 + 0x37ac)) {
                iVar22 = -*piVar26;
              }
              iVar16 = iVar22 + iVar16;
            }
            if (iVar16 <= iVar10) {
              iVar16 = 0x44f;
              if (uVar31 != 0x44e) {
                iVar16 = (int)uVar31;
              }
              goto LAB_108b36a20;
            }
            piVar26 = piVar26 + -2;
            bVar1 = 0x44e < uVar31;
            uVar31 = uVar31 - 1;
          } while (bVar1);
          iVar16 = 0x44d;
LAB_108b36a20:
          *(int *)(param_1 + 0x37ac) = iVar16;
          *(int *)(param_1 + 0x37a8) = iVar16;
          bVar1 = bVar9;
          if (*(int *)(param_1 + 0x37b4) != 0) {
            bVar1 = true;
          }
          if (((!bVar1) && (*(int *)(param_1 + 0x5c) == 0)) && (0x44f < iVar16)) {
            iVar16 = 0x44f;
            param_1[0x37a8] = 0x4f;
            param_1[0x37a9] = 4;
            param_1[0x37aa] = 0;
            param_1[0x37ab] = 0;
          }
        }
        else {
          if (iVar16 == 0x3ea) {
            pbVar12 = pbStack_188;
            FUN_108b51134(pbStack_188,uVar31,*(int *)(param_1 + 0xb8),aiStack_128);
            iVar23 = *(int *)(param_1 + 0x3798);
            iStack_168 = 1;
            param_8 = (ulong)uStack_19c;
            if (iVar23 == 0x3ea) {
              bVar9 = true;
              goto LAB_108b36978;
            }
          }
          else {
            iStack_168 = 0;
            param_8 = (ulong)uStack_19c;
          }
          if ((*(int *)(param_1 + 0x37b4) != 0) || (*(int *)(param_1 + 0x58) != 0)) {
            bVar9 = false;
            goto LAB_108b36978;
          }
          iVar16 = *(int *)(param_1 + 0x37a8);
          bVar9 = false;
        }
        uVar15 = uStack_13c;
        iVar22 = *(int *)(param_1 + 0x88);
        if (iVar22 < iVar16) {
          *(int *)(param_1 + 0x37a8) = iVar22;
          iVar16 = iVar22;
        }
        iVar22 = *(int *)(param_1 + 0x84);
        if (iVar22 != -1000) {
          *(int *)(param_1 + 0x37a8) = iVar22;
          iVar16 = iVar22;
        }
        if (iVar23 != 0x3ea && (int)(uStack_13c * uStack_194 * 8) < 90000) {
          if (0x44e < iVar16) {
            iVar16 = 0x44f;
          }
          *(int *)(param_1 + 0x37a8) = iVar16;
        }
        iVar18 = *(int *)(param_1 + 0x94);
        if (iVar18 < 0x5dc1) {
          if (iVar16 < 0x451) {
            if (iVar18 < 0x3e81) {
              if (iVar16 == 0x450) goto LAB_108b36aec;
              if (iVar18 < 0x2ee1) {
                if (0x44e < iVar16) goto LAB_108b36b00;
                if (iVar16 == 0x44e && iVar18 < 0x1f41) goto LAB_108b36b14;
              }
            }
          }
          else {
            iVar16 = 0x450;
            param_1[0x37a8] = 0x50;
            param_1[0x37a9] = 4;
            param_1[0x37aa] = 0;
            param_1[0x37ab] = 0;
            if (iVar18 < 0x3e81) {
LAB_108b36aec:
              iVar16 = 0x44f;
              param_1[0x37a8] = 0x4f;
              param_1[0x37a9] = 4;
              param_1[0x37aa] = 0;
              param_1[0x37ab] = 0;
              if (iVar18 < 0x2ee1) {
LAB_108b36b00:
                iVar16 = 0x44e;
                param_1[0x37a8] = 0x4e;
                param_1[0x37a9] = 4;
                param_1[0x37aa] = 0;
                param_1[0x37ab] = 0;
                if (iVar18 < 0x1f41) {
LAB_108b36b14:
                  iVar16 = 0x44d;
                  param_1[0x37a8] = 0x4d;
                  param_1[0x37a9] = 4;
                  param_1[0x37aa] = 0;
                  param_1[0x37ab] = 0;
                }
              }
            }
          }
        }
        if ((iVar22 == -1000) && (iVar22 = *(int *)(param_1 + 0x37d4), iVar22 != 0)) {
          iVar18 = *(int *)(param_1 + 0x3778);
          if (iVar18 * 18000 < iVar10) {
            bVar1 = false;
            if (iVar10 <= iVar18 * 24000) {
              bVar1 = bVar9;
            }
            if (bVar1) {
              iVar24 = 0x44e;
            }
            else {
LAB_108b36bdc:
              iVar27 = 0x450;
              if (iVar18 * 44000 < iVar10) {
                iVar27 = 0x451;
              }
              iVar24 = 0x44f;
              if (iVar18 * 30000 < iVar10) {
                iVar24 = iVar27;
              }
            }
          }
          else {
            if (!bVar9) goto LAB_108b36bdc;
            iVar24 = 0x44d;
          }
          if (iVar22 <= iVar24) {
            iVar22 = iVar24;
          }
          *(int *)(param_1 + 0x37d4) = iVar22;
          if (iVar22 <= iVar16) {
            iVar16 = iVar22;
          }
          *(int *)(param_1 + 0x37a8) = iVar16;
        }
        iVar22 = *(int *)(param_1 + 0x28);
        if (*(int *)(param_1 + 0x30) == 0 || iVar22 == 0) {
          bVar9 = true;
        }
        if (bVar9) {
          uVar11 = 0;
        }
        else {
          iVar18 = iVar22;
          if (0x18 < iVar22) {
            iVar18 = 0x19;
          }
          lVar20 = (long)iVar16;
          iVar24 = iVar16 * 2 + -0x89a;
          iVar27 = iVar16;
          while( true ) {
            iVar27 = iVar27 + -1;
            uVar19 = *(uint *)(&UNK_10df8a050 + (long)(iVar24 + 1) * 4);
            uVar11 = uVar19;
            if (*(int *)(param_1 + 0x38) != 1) {
              uVar11 = 0;
            }
            if (*(int *)(param_1 + 0x38) != 0) {
              uVar19 = 0;
            }
            pbVar12 = (byte *)(ulong)uVar19;
            iVar28 = (int)((ulong)((long)(int)(((*(int *)(&UNK_10df8a050 + (long)iVar24 * 4) -
                                                uVar11) + uVar19) * (0x7d - iVar18)) * 0x28f) >>
                          0x10);
            if (iVar22 < 6 || iVar28 < iVar10) {
              uVar11 = (uint)(iVar28 < iVar10);
              goto LAB_108b36cdc;
            }
            if (lVar20 < 0x44e) break;
            lVar20 = lVar20 + -1;
            *(int *)(param_1 + 0x37a8) = iVar27;
            iVar24 = iVar24 + -2;
          }
          uVar11 = 0;
          *(int *)(param_1 + 0x37a8) = iVar16;
        }
LAB_108b36cdc:
        *(uint *)(param_1 + 0x38) = uVar11;
        if (*(int *)(param_1 + 0x70) != 0x804) {
          pfStack_1c0 = pfStack_148;
          pbVar12 = pbStack_170;
          FUN_108b46af8(pbStack_170,0xfc4);
          iVar23 = *(int *)(param_1 + 0x3798);
        }
        if ((iVar23 == 0x3ea) && (*(int *)(param_1 + 0x37a8) == 0x44e)) {
          param_1[0x37a8] = 0x4f;
          param_1[0x37a9] = 4;
          param_1[0x37aa] = 0;
          param_1[0x37ab] = 0;
        }
        if (*(int *)(param_1 + 0xb4) == 0) {
          iVar16 = *(int *)(param_1 + 0x37a8);
        }
        else {
          iVar16 = 0x44d;
          param_1[0x37a8] = 0x4d;
          param_1[0x37a9] = 4;
          param_1[0x37aa] = 0;
          param_1[0x37ab] = 0;
        }
        pbStack_170 = (byte *)CONCAT44(pbStack_170._4_4_,param_14);
        if ((*(int *)(param_1 + 0x70) == 0x804) && (0x44f < iVar16)) {
          iVar16 = 0x44f;
          param_1[0x37a8] = 0x4f;
          param_1[0x37a9] = 4;
          param_1[0x37aa] = 0;
          param_1[0x37ab] = 0;
LAB_108b36d6c:
          if ((iVar23 == 0x3e9) && (iVar16 < 0x450)) {
            iVar23 = 1000;
            goto LAB_108b36d98;
          }
        }
        else {
          if ((iVar23 != 1000) || (iVar16 < 0x450)) goto LAB_108b36d6c;
          iVar23 = 0x3e9;
LAB_108b36d98:
          *(int *)(param_1 + 0x3798) = iVar23;
        }
        iVar16 = *(int *)(param_1 + 0x94);
        iVar22 = iVar16 / 0x32;
        iVar18 = iVar22;
        if (iVar23 == 1000 || iVar14 <= iVar22) {
          iVar24 = (iVar16 * 3) / 0x32;
          uVar8 = iVar14 == iVar24;
          if (iVar14 <= iVar24) {
            uStack_1c8 = CONCAT44(iVar10,(undefined4)uStack_1c8);
            pfStack_1c0 = (float *)CONCAT44(pfStack_1c0._4_4_,iStack_198);
            func_0x000108b39488();
            iStack_1d0 = uStack_1ac;
            pbVar12 = param_1;
            uStack_1cc = extraout_w8_02;
            FUN_108b37398(param_1,lStack_138,param_3,pbStack_1a8,uVar15,
                          (ulong)pbStack_170 & 0xffffffff);
            pbVar13 = pbVar12;
            goto LAB_108b3719c;
          }
          if (iVar23 == 1000) {
            if (iVar14 == (iVar16 << 1) / 0x19) {
              iVar18 = iVar16 / 0x19;
            }
            else {
              iVar18 = iVar24;
              if (iVar14 != (iVar16 * 3) / 0x19) {
                iVar18 = iVar22;
              }
            }
          }
        }
        iVar16 = 0;
        if (iVar18 != 0) {
          iVar16 = iVar14 / iVar18;
        }
        if (uStack_14c != 0xffffffff) {
          *(uint *)(param_1 + 0x1ddc) = uStack_14c;
          *(uint *)(param_1 + 0x1de0) = uStack_174;
        }
        pbStack_188 = (byte *)CONCAT44(pbStack_188._4_4_,iVar16 - 1U);
        iVar14 = -3;
        if (iVar16 != 2) {
          iVar14 = ~(iVar16 - 1U) << 1;
        }
        if ((*(int *)(param_1 + 0x98) == 0) && (*(int *)(param_1 + 0xa8) != -1)) {
          puVar7 = &uStack_1b0;
          if ((int)uStack_1b0 < 0) goto LAB_108b371d4;
          uVar15 = uStack_1b0;
          if ((int)(uint)param_8 <= (int)uStack_1b0) {
            uVar15 = (uint)param_8;
          }
          param_8 = (ulong)uVar15;
        }
        uVar11 = (uint)param_8;
        uVar15 = iVar14 + iVar16 + uVar11;
        uStack_160 = (ulong)uVar15;
        (*(code *)PTR____chkstk_darwin_11034bd40)((long)(int)uVar15 + 0xfU & 0xfffffffffffffff0);
        lVar5 = -extraout_x8_00;
        lVar20 = (long)&uStack_1b0 + lVar5;
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        puVar6 = (uint *)(abStack_610 + lVar5);
        pbStack_180 = (byte *)puVar6;
        *(undefined4 *)((long)auStack_60c + lVar5) = 0;
        uStack_1b0 = *(uint *)(param_1 + 0x48);
        if (uStack_1b0 == 0) {
          *(int *)(param_1 + 0x37a0) = *(int *)(param_1 + 0x3778);
        }
        else {
          param_1[0x7c] = 1;
          param_1[0x7d] = 0;
          param_1[0x7e] = 0;
          param_1[0x7f] = 0;
        }
        iVar16 = 0;
        iVar14 = 0;
        uVar15 = 0;
        uVar19 = 0;
        uStack_190 = uStack_154 ^ 1;
        uStack_194 = uStack_150 ^ 1;
        uStack_174 = extraout_w12 & ((int)extraout_w12 >> 0x1f ^ 0xffffffffU);
        iStack_198 = 0;
        uVar31 = extraout_x13;
        uStack_1ac = extraout_w12;
        uStack_19c = uVar11;
        iStack_18c = iVar10;
        if (extraout_w12 != 0) {
          iStack_198 = (int)uStack_160 / (int)extraout_w12;
        }
        for (; uStack_174 != uVar15; uVar15 = uVar15 + 1) {
          uVar11 = 0;
          if ((uint)pbStack_188 == uVar15) {
            uVar11 = uStack_150;
          }
          param_8 = (ulong)uVar11;
          param_1[0x48] = 0;
          param_1[0x49] = 0;
          param_1[0x4a] = 0;
          param_1[0x4b] = 0;
          *(uint *)(param_1 + 0x37e0) = (uint)((int)uVar15 < (int)(uint)pbStack_188);
          uVar3 = 0;
          if (uVar15 == 0) {
            uVar3 = uStack_194;
          }
          uVar4 = uStack_190;
          if (((uStack_154 | uVar11) & 1) == 0) {
            uVar4 = uVar3;
          }
          iVar10 = 0;
          if (iVar18 != 0) {
            iVar10 = (*(int *)(param_1 + 0x94) * 6) / iVar18;
          }
          iVar22 = 0;
          if (iVar10 != 0) {
            iVar22 = (*(int *)(param_1 + 0xa4) * 6) / iVar10;
          }
          iVar10 = iVar22 / 8;
          if (iStack_198 <= iVar22 / 8) {
            iVar10 = iStack_198;
          }
          iVar22 = (int)uStack_160 - iVar14;
          if (iVar10 <= iVar22) {
            iVar22 = iVar10;
          }
          uVar8 = (int)uVar31 == -1;
          uStack_13c = uVar19;
          if (!(bool)uVar8) {
            func_0x000108b3c930(param_1 + 0xc4,afStack_c0,iVar18);
          }
          lVar2 = lStack_138 + (long)(iVar16 * *(int *)(param_1 + 0x74)) * 4;
          func_0x000108b35e14(lVar2,iVar18,*(int *)(param_1 + 0x74),pfStack_148);
          *(uint *)((long)auStack_630 + lVar5 + 0x10) = uVar11;
          *(int *)((long)auStack_630 + lVar5 + 0xc) = iStack_18c;
          func_0x000108b39488();
          *(uint *)((long)auStack_630 + lVar5) = uVar4;
          *(undefined4 *)((long)auStack_630 + lVar5 + 4) = extraout_w8_01;
          pbVar13 = param_1;
          FUN_108b37398(param_1,lVar2,iVar18,lVar20,iVar22,(ulong)pbStack_170 & 0xffffffff);
          iVar10 = (int)pbVar13;
          pbVar12 = pbVar13;
          if ((iVar10 < 0) ||
             (pbVar12 = pbStack_180, func_0x000108b3c01c(pbStack_180,lVar20,pbVar13),
             (int)pbVar12 < 0)) {
            pbVar13 = (byte *)0xfffffffd;
            goto LAB_108b3719c;
          }
          uVar19 = uStack_13c;
          if (iVar10 == 1) {
            uVar19 = uStack_13c + 1;
          }
          iVar14 = iVar10 + iVar14;
          lVar20 = lVar20 + ((ulong)pbVar13 & 0xffffffff);
          iVar16 = iVar16 + iVar18;
          uVar31 = (ulong)uStack_14c;
        }
        iVar14 = *(int *)(param_1 + 0x98);
        *(undefined4 *)((long)auStack_630 + lVar5 + 0x10) = 0;
        pbVar12 = pbStack_180;
        FUN_108b3c174(pbStack_180,0,uStack_1ac,pbStack_1a8,uStack_19c,0,
                      iVar14 == 0 && uVar19 != uStack_1ac,0);
        uVar11 = (uint)pbVar12;
        uVar8 = uVar11 == 0;
        uVar15 = 0xfffffffd;
        if (-1 < (int)uVar11) {
          uVar15 = uVar11;
        }
        *(uint *)(param_1 + 0x48) = uStack_1b0;
        pbVar13 = (byte *)(ulong)uVar15;
      }
    }
  }
  else {
    puVar6 = &uStack_1b0;
    pbVar13 = (byte *)0xffffffff;
    param_1 = unaff_x19;
    param_8 = unaff_x20;
  }
LAB_108b3719c:
  func_0x000108b39404(uStack_80);
  if ((bool)uVar8) {
    return pbVar13;
  }
  ___stack_chk_fail();
  puVar7 = puVar6;
LAB_108b371d4:
  _abort();
  *(ulong *)((long)puVar7 + -0x20) = param_8;
  *(byte **)((long)puVar7 + -0x18) = param_1;
  *(undefined1 **)((long)puVar7 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)((long)puVar7 + -8) = FUN_108b371d8;
  FUN_108b60920();
  return pbVar12;
}



/* Entry: 108b371d8; end: 108b37207;  */

float FUN_108b371d8(float param_1,undefined8 param_2,int param_3,int param_4)

{
  FUN_108b60920(param_2,param_2,param_4 * param_3);
  return param_1 / (float)(param_4 * param_3);
}



/* Entry: 108b37208; end: 108b37397;  */

int FUN_108b37208(long param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x94);
  iVar3 = iVar1 / 400;
  if (param_2 != 0) {
    iVar3 = param_2;
  }
  iVar4 = *(int *)(param_1 + 0xa8);
  if (iVar4 == -1) {
    iVar4 = 1500000;
  }
  else if (iVar4 == -1000) {
    iVar4 = 0;
    if (iVar3 != 0) {
      iVar4 = (iVar1 * 0x3c) / iVar3;
    }
    iVar4 = iVar4 + *(int *)(param_1 + 0x74) * iVar1;
  }
  iVar2 = 0;
  if (iVar3 != 0) {
    iVar2 = (iVar1 * 6) / iVar3;
  }
  iVar3 = (param_3 * iVar2 * 8) / 6;
  if (iVar3 <= iVar4) {
    iVar4 = iVar3;
  }
  return iVar4;
}



/* Entry: 108b37398; end: 108b38887;  */

undefined1 **
FUN_108b37398(float param_1,int *param_2,float *param_3,undefined1 **param_4,undefined1 **param_5,
             undefined1 **param_6,int param_7,int *param_8,int param_9,int param_10,
             undefined4 param_11,int param_12,int param_13,uint param_14)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  short sVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 **ppuVar14;
  uint uVar15;
  undefined4 uVar16;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int extraout_w8_02;
  int extraout_w8_03;
  int extraout_w8_04;
  int extraout_w8_05;
  int iVar17;
  uint uVar18;
  undefined4 extraout_w8_06;
  float extraout_w8_07;
  float extraout_w8_08;
  float extraout_w8_09;
  float extraout_w8_10;
  float extraout_w8_11;
  float extraout_w8_12;
  float extraout_w8_13;
  float extraout_w8_14;
  float extraout_w8_15;
  float extraout_w8_16;
  float extraout_w8_17;
  float extraout_w8_18;
  float extraout_w8_19;
  float extraout_w8_20;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  undefined1 *extraout_x8_04;
  undefined8 extraout_x8_05;
  float *extraout_x8_06;
  float *extraout_x8_07;
  float *extraout_x8_08;
  float *extraout_x8_09;
  float *extraout_x8_10;
  float *extraout_x8_11;
  float *extraout_x8_12;
  float *extraout_x8_13;
  float *extraout_x8_14;
  float *extraout_x8_15;
  float *extraout_x8_16;
  float *extraout_x8_17;
  float *extraout_x8_18;
  float *extraout_x8_19;
  float *extraout_x8_20;
  undefined8 *extraout_x8_21;
  float *extraout_x8_22;
  float *extraout_x8_23;
  float *extraout_x8_24;
  float *extraout_x8_25;
  float *extraout_x8_26;
  float *extraout_x8_27;
  float *extraout_x8_28;
  float *extraout_x8_29;
  uint *extraout_x8_30;
  float *extraout_x8_31;
  undefined1 *extraout_x8_32;
  long extraout_x8_33;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w10;
  int extraout_w10_00;
  int iVar19;
  int extraout_w12;
  int extraout_w12_00;
  uint extraout_w12_01;
  long lVar20;
  float *pfVar21;
  long extraout_x13;
  long extraout_x13_00;
  ulong uVar22;
  undefined1 **ppuVar23;
  ulong uVar24;
  undefined1 **ppuVar25;
  undefined4 *puVar26;
  uint uVar27;
  undefined1 **ppuVar28;
  int *piVar29;
  undefined1 *puVar30;
  int *piVar31;
  uint uVar32;
  int iVar33;
  undefined1 **ppuVar34;
  undefined1 **ppuVar35;
  undefined1 **ppuVar36;
  undefined1 **ppuVar37;
  float fVar38;
  double dVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined1 auStack_160 [8];
  uint *puStack_158;
  int *piStack_150;
  int iStack_148;
  int iStack_144;
  undefined1 *puStack_140;
  uint uStack_138;
  uint uStack_134;
  undefined4 uStack_130;
  uint uStack_12c;
  int *piStack_128;
  undefined1 *puStack_120;
  undefined1 **ppuStack_118;
  int iStack_110;
  uint uStack_10c;
  undefined1 **ppuStack_108;
  undefined1 **ppuStack_100;
  uint uStack_f4;
  undefined1 *puStack_f0;
  int *piStack_e8;
  uint uStack_dc;
  undefined1 *puStack_d8;
  int iStack_d0;
  undefined8 uStack_cc;
  undefined8 uStack_c4;
  undefined8 uStack_bc;
  undefined8 uStack_b4;
  undefined8 uStack_ac;
  int iStack_9c;
  long lStack_98;
  undefined8 uStack_90;
  int iStack_88;
  undefined8 uStack_80;
  
  ppuVar37 = (undefined1 **)0x0;
  piVar29 = param_2;
  iStack_110 = param_7;
  func_0x000108b39478();
  lStack_98 = 0;
  uStack_dc = 0;
  uStack_10c = (uint)param_6;
  uVar15 = uStack_10c;
  if (0x4fb < (int)uStack_10c) {
    uVar15 = 0x4fc;
  }
  piStack_e8 = (int *)CONCAT44(piStack_e8._4_4_,uVar15);
  piVar29[0xdf9] = 0;
  uStack_80 = extraout_x8;
  if ((piVar29[0x1c] == 0x805) ||
     (ppuVar37 = (undefined1 **)((long)param_2 + (long)param_2[1]), piVar29[0x1c] != 0x804)) {
    ppuStack_100 = (undefined1 **)((long)param_2 + (long)*param_2);
    FUN_108b46af8(ppuStack_100,0x271f);
    iVar19 = param_2[0x1c];
    uVar15 = param_2[0xdea];
    if (iVar19 - 0x803U < 3) {
      uStack_f4 = 0;
    }
    else {
      uStack_f4 = param_2[0x1e];
    }
  }
  else {
    ppuStack_100 = (undefined1 **)0x0;
    uStack_f4 = 0;
    uVar15 = param_2[0xdea];
    iVar19 = 0x804;
  }
  puStack_158 = (uint *)(param_2 + 0xdea);
  iVar33 = param_2[0x25];
  if (param_9 == 0) {
    if (*param_8 == 0) {
      if (param_2[0xde6] == 0x3ea) {
        func_0x000108b39448();
        fVar38 = (float)param_2[0xdf7];
        param_1 = param_1 * 0.5;
        goto LAB_108b374ec;
      }
      uStack_12c = 0xffffffff;
    }
    else {
      param_1 = (float)param_8[9];
      if (0.1 <= param_1) {
        uStack_12c = 1;
      }
      else {
        func_0x000108b39448();
        fVar38 = (float)param_2[0xdf7];
LAB_108b374ec:
        uStack_12c = (uint)(fVar38 < param_1 * 316.23);
      }
    }
  }
  else {
    uStack_12c = 0;
  }
  iVar17 = 0;
  uVar27 = (uint)param_4;
  if (uVar27 != 0) {
    iVar17 = iVar33 / (int)uVar27;
  }
  puStack_140 = (undefined1 *)CONCAT44(puStack_140._4_4_,iVar17);
  if (param_2[0xdec] == 0) {
    iStack_144 = param_12;
    uStack_130 = param_11;
  }
  else {
    param_2[0xdec] = 0;
    uStack_130 = 1;
    iStack_144 = 2;
    param_10 = 1;
  }
  uVar18 = 0;
  iVar17 = param_2[0xde6];
  iVar2 = param_2[0x29];
  piStack_150 = param_8;
  ppuStack_118 = ppuVar37;
  if (param_10 == 0) {
    uVar32 = 0;
  }
  else {
    uVar32 = 0;
    if (iVar17 != 0x3ea) {
      uVar18 = (uint)piStack_e8;
      func_0x000108b394b0((ulong)piStack_e8 & 0xffffffff,iVar2);
      uVar32 = (uint)(uVar18 != 0);
    }
  }
  uStack_138 = 0;
  if (iVar19 != 0x804) {
    uStack_138 = uVar18;
  }
  uStack_134 = 0;
  if (iVar19 != 0x804) {
    uStack_134 = uVar32;
  }
  uVar18 = ((int)piStack_e8 - uStack_138) * 8;
  iVar5 = 0;
  if (uVar27 != 0) {
    iVar5 = (iVar33 * 6) / (int)uVar27;
  }
  uVar32 = 0;
  if (iVar5 != 0) {
    uVar32 = (iVar2 * 6) / iVar5;
  }
  if ((int)uVar32 <= (int)uVar18) {
    uVar18 = uVar32;
  }
  piVar29 = (int *)(ulong)uVar18;
  puStack_120 = (undefined1 *)((long)param_5 + 1);
  iStack_d0 = uStack_10c - 1;
  uStack_c4 = 0x2100000000;
  uStack_cc = 0;
  uStack_b4 = 0;
  uStack_bc = 0x8000000000000000;
  fVar38 = -NAN;
  uStack_ac = 0xffffffff;
  iStack_148 = uStack_f4 + uVar27;
  iVar2 = param_2[0x1d];
  ppuStack_108 = param_5;
  puStack_d8 = puStack_120;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            ((-(ulong)((uint)(iVar2 * iStack_148) >> 0x1f) & 0xfffffffc00000000 |
             (ulong)(uint)(iVar2 * iStack_148) << 2) + 0xf & 0xfffffffffffffff0);
  puVar30 = auStack_160 + -extraout_x8_00;
  piStack_128 = param_2 + 0xdfa;
  uVar32 = iVar2 * extraout_w12;
  ppuVar37 = (undefined1 **)(-(ulong)(uVar32 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar32 << 2);
  puStack_f0 = puVar30;
  _memcpy(puVar30,piStack_128 + (param_2[0x2c] - extraout_w12) * iVar2);
  if (iVar17 == 0x3ea) {
    fVar40 = 2.71202e-40;
  }
  else {
    fVar40 = *(float *)(ppuStack_118 + 0xc);
  }
  iVar17 = param_2[0xde0] + (int)((ulong)((long)((int)fVar40 - param_2[0xde0]) * 0x3d7) >> 0x10);
  param_2[0xde0] = iVar17;
  pfVar21 = (float *)(puStack_f0 + (long)(int)uVar32 * 4);
  ppuVar25 = (undefined1 **)(param_2 + 0xde2);
  if (iVar19 == 0x800) {
    sVar10 = (short)((uint)iVar17 >> 8);
    func_0x000108b59968();
    iVar19 = 0;
    if (iVar33 / 1000 != 0) {
      iVar19 = (sVar10 * 0x9a7) / (iVar33 / 1000);
    }
    iStack_88 = iVar19 * -0x1d7 + 0x10000000;
    uStack_90 = CONCAT44(iVar19 * 0x3ae + -0x20000000,iStack_88);
    iVar33 = iStack_88 >> 6;
    ppuVar34 = (undefined1 **)
               ((ulong)((long)(int)((ulong)((long)iVar19 * (long)iVar19 * 0x10000 +
                                           -0x80000000000000) >> 0x20) * (long)iVar33) >> 0x10);
    uVar24 = (ulong)((long)iVar33 * (long)iVar33) >> 0x10;
    ppuVar37 = ppuVar34;
    param_6 = ppuVar25;
    func_0x000108b392e4(param_3,&uStack_90,ppuVar34,uVar24,ppuVar25,pfVar21,param_4,iVar2);
    uVar32 = uStack_f4;
    puVar12 = puStack_f0;
    if (iVar2 == 2) {
      param_6 = (undefined1 **)(param_2 + 0xde4);
      func_0x000108b392e4(param_3 + 1,&uStack_90,ppuVar34,uVar24,param_6,pfVar21 + 1,param_4,2);
      ppuVar37 = ppuVar34;
      uVar32 = uStack_f4;
      puVar12 = puStack_f0;
    }
  }
  else {
    fVar38 = 18.900002 / (float)iVar33;
    fVar41 = 1.0 - fVar38;
    fVar40 = *(float *)ppuVar25;
    uVar24 = (ulong)(uVar27 & ((int)uVar27 >> 0x1f ^ 0xffffffffU));
    uVar32 = uStack_f4;
    puVar12 = puStack_f0;
    if (iVar2 == 2) {
      fVar43 = (float)param_2[0xde4];
      pfVar21 = pfVar21 + 1;
      param_3 = param_3 + 1;
      for (; uVar24 != 0; uVar24 = uVar24 - 1) {
        fVar42 = param_3[-1] - fVar40;
        fVar44 = *param_3 - fVar43;
        fVar40 = param_3[-1] * fVar38 + 1e-30 + fVar40 * fVar41;
        fVar43 = *param_3 * fVar38 + 1e-30 + fVar43 * fVar41;
        pfVar21[-1] = fVar42;
        *pfVar21 = fVar44;
        pfVar21 = pfVar21 + 2;
        param_3 = param_3 + 2;
      }
      param_2[0xde2] = (int)fVar40;
      param_2[0xde4] = (int)fVar43;
    }
    else {
      for (; uVar24 != 0; uVar24 = uVar24 - 1) {
        fVar43 = *param_3 - fVar40;
        fVar40 = *param_3 * fVar38 + 1e-30 + fVar40 * fVar41;
        *pfVar21 = fVar43;
        pfVar21 = pfVar21 + 1;
        param_3 = param_3 + 1;
      }
      *(float *)ppuVar25 = fVar40;
    }
  }
  uStack_f4 = uVar32;
  puStack_f0 = puVar12;
  if (iStack_110 != 0) {
    puVar13 = puVar12 + (long)(int)(param_2[0x1d] * uVar32) * 4;
    uVar3 = param_2[0x1d] * uVar27;
    ppuVar37 = (undefined1 **)(ulong)uVar3;
    FUN_108b60920(puVar13,puVar13);
    if (1e+09 <= fVar38) {
      _bzero(puVar13,-(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (long)(ulong)uVar3 << 2);
      *ppuVar25 = (undefined1 *)0x0;
      param_2[0xde4] = 0;
      param_2[0xde5] = 0;
    }
  }
  iVar19 = param_2[0xde6];
  iStack_110 = (int)piStack_e8 << 3;
  if (iVar19 == 0x3ea) {
    iVar19 = param_2[0x1c];
    fVar38 = 1.0;
    ppuVar23 = (undefined1 **)0x3ea;
    ppuVar28 = ppuStack_100;
LAB_108b378f0:
    iVar17 = iStack_148;
    iVar33 = (int)ppuVar23;
    if (iVar19 != 0x804) {
      if (uVar15 - 0x44d < 4) {
        uVar16 = *(undefined4 *)(&UNK_10df89f60 + (ulong)(uVar15 - 0x44d) * 4);
      }
      else {
        uVar16 = 0x15;
      }
      func_0x000108b393e4(uVar16);
      FUN_108b46af8();
      func_0x000108b393e4(param_2[0xdde]);
      FUN_108b46af8();
      func_0x000108b393e4(0xffffffff);
      func_0x000108b39458();
      puVar30 = (undefined1 *)((long)&uStack_130 + -extraout_x8_00);
      iVar33 = param_2[0xde6];
    }
    if (iVar33 != 1000) {
      uVar11 = 2;
      if (param_2[0x14] != 0) {
        uVar11 = 0;
      }
      func_0x000108b393e4(uVar11);
      func_0x000108b394c4();
      puVar30 = puVar30 + 0x10;
    }
    iVar19 = param_2[0x1d];
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    puVar30 = puVar30 + -extraout_x13;
    if (((extraout_w12_00 != 1000) && (extraout_w12_00 != param_2[0xde7] && 0 < param_2[0xde7])) &&
       (param_2[0x1c] != 0x805)) {
      _memcpy(puVar30,piStack_128 + (int)(((extraout_w8 / -400 - uVar32) + param_2[0x2c]) * iVar19))
      ;
    }
    piVar29 = piStack_128;
    iVar33 = param_2[0x2c];
    uVar18 = (iVar33 - iVar17) * iVar19;
    if ((int)uVar18 < 1) {
      puVar13 = puVar12 + (long)((iVar17 - iVar33) * iVar19) * 4;
      ppuVar37 = (undefined1 **)
                 (-(ulong)((uint)(iVar33 * iVar19) >> 0x1f) & 0xfffffffc00000000 |
                 (ulong)(uint)(iVar33 * iVar19) << 2);
    }
    else {
      _memmove(piStack_128,piStack_128 + (int)(iVar19 * uVar27),(ulong)uVar18 << 2);
      uVar18 = param_2[0x1d] * iVar17;
      ppuVar37 = (undefined1 **)(-(ulong)(uVar18 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar18 << 2)
      ;
      piVar29 = piVar29 + (param_2[0x2c] - iVar17) * param_2[0x1d];
      puVar13 = puVar12;
    }
    _memcpy(piVar29,puVar13);
    lVar20 = lStack_98;
    fVar40 = (float)NEON_fminnm(param_2[0xde1],fVar38);
    uVar9 = fVar40 == 1.0;
    if ((fVar40 < 1.0) && (lStack_98 != 0)) {
      ppuVar37 = (undefined1 **)(ulong)*(uint *)(lStack_98 + 4);
      param_6 = (undefined1 **)(ulong)(uint)param_2[0x1d];
      func_0x000108b391d8(param_2[0xde1],fVar38,puVar12,puVar12,ppuVar37,param_4,param_6,
                          *(undefined8 *)(lStack_98 + 0x48),param_2[0x25]);
    }
    param_2[0xde1] = (int)fVar38;
    func_0x000108b394f8();
    if ((!(bool)uVar9) || (param_2[0xdde] == 1)) {
      if (param_13 < 0x7d01) {
        if (param_13 < 16000) {
          iVar19 = 0;
        }
        else {
          uVar18 = 0;
          if (param_13 - 14000U != 0) {
            uVar18 = (param_13 * -0x800 + 0x3e80000U) / (param_13 - 14000U);
          }
          iVar19 = 0x4000 - uVar18;
        }
      }
      else {
        iVar19 = 0x4000;
      }
      param_2[0x18] = iVar19;
    }
    if ((*(long *)(param_2 + 0xdee) == 0) && (param_2[0x1d] == 2)) {
      iVar33 = param_2[0xddf];
      iVar19 = param_2[0x18];
      if (((short)iVar33 < 0x4000) || (iVar19 < 0x4000)) {
        if (lVar20 != 0) {
          pfVar21 = *(float **)(lVar20 + 0x48);
          uVar18 = 0;
          if (param_2[0x25] != 0) {
            uVar18 = 48000 / param_2[0x25];
          }
          if ((int)uVar18 < 2) {
            uVar18 = 1;
          }
          uVar32 = 0;
          if (uVar18 != 0) {
            uVar32 = *(int *)(lVar20 + 4) / (int)uVar18;
          }
          fVar38 = 1.0 - (float)iVar19 / 16384.0;
          pfVar1 = (float *)(puVar12 + 4);
          uVar24 = (ulong)(uVar32 & ((int)uVar32 >> 0x1f ^ 0xffffffffU));
          for (uVar22 = uVar24; uVar22 != 0; uVar22 = uVar22 - 1) {
            fVar40 = *pfVar21 * *pfVar21;
            fVar40 = ((1.0 - (float)(int)(short)iVar33 / 16384.0) * (1.0 - fVar40) + fVar38 * fVar40
                     ) * (pfVar1[-1] - *pfVar1) * 0.5;
            pfVar1[-1] = pfVar1[-1] - fVar40;
            *pfVar1 = *pfVar1 + fVar40;
            pfVar21 = pfVar21 + uVar18;
            pfVar1 = pfVar1 + 2;
          }
          pfVar21 = (float *)(puVar12 + uVar24 * 8 + 4);
          for (; (long)uVar24 < (long)(int)uVar27; uVar24 = uVar24 + 1) {
            fVar40 = fVar38 * (pfVar21[-1] - *pfVar21) * 0.5;
            pfVar21[-1] = pfVar21[-1] - fVar40;
            *pfVar21 = *pfVar21 + fVar40;
            pfVar21 = pfVar21 + 2;
          }
        }
        *(short *)(param_2 + 0xddf) = (short)iVar19;
      }
    }
    bVar8 = extraout_w8_00 == 0x3ea;
    puStack_140 = puVar30;
    if (bVar8) {
LAB_108b37dfc:
      piVar31 = (int *)0x0;
      ppuVar25 = (undefined1 **)0x0;
      param_2[0xdec] = 0;
      uStack_f4 = 1;
    }
    else {
      func_0x000108b39504();
      iVar19 = 5;
      if (!bVar8) {
        iVar19 = -0xf;
      }
      iVar33 = (int)piStack_e8 + -1;
      if (iVar33 * 8 < extraout_w9 + iVar19 + extraout_w10) goto LAB_108b37dfc;
      uVar9 = extraout_w8_01 == 0x3e9;
      if ((bool)uVar9) {
        ppuVar37 = (undefined1 **)0xc;
        func_0x000108b4a0a0(&puStack_d8,uStack_134);
      }
      if (uStack_134 == 0) goto LAB_108b37dfc;
      piVar31 = (int *)0x1;
      ppuVar37 = (undefined1 **)0x1;
      func_0x000108b4a0a0(&puStack_d8,uStack_130);
      func_0x000108b39504(param_2[0xde6]);
      iVar19 = -0xe;
      if (!(bool)uVar9) {
        iVar19 = -0x19;
      }
      uVar18 = iVar33 - (iVar19 + extraout_w9_00 + extraout_w10_00 >> 3);
      if ((int)uStack_138 <= (int)uVar18) {
        uVar18 = uStack_138;
      }
      if ((int)uVar18 < 3) {
        uVar18 = 2;
      }
      if (0x100 < (int)uVar18) {
        uVar18 = 0x101;
      }
      ppuVar25 = (undefined1 **)(ulong)uVar18;
      if (extraout_w8_02 == 0x3e9) {
        ppuVar37 = (undefined1 **)0x100;
        FUN_108b4a10c(&puStack_d8,uVar18 - 2);
      }
      uStack_f4 = 0;
    }
    uVar18 = 0;
    if (param_2[0xde6] != 0x3ea) {
      uVar18 = 0x11;
    }
    ppuVar23 = (undefined1 **)(ulong)uVar18;
    uVar9 = param_2[0xde6] == 1000;
    uVar18 = (uint)ppuVar25;
    if ((bool)uVar9) {
      func_0x000108b393f0();
      ppuVar35 = (undefined1 **)(ulong)(uint)(extraout_w8_03 + -0x19 >> 3);
      FUN_108b4a364(&puStack_d8);
      ppuVar36 = ppuVar35;
    }
    else {
      ppuVar36 = (undefined1 **)(ulong)((int)piStack_e8 + ~uVar18);
      FUN_108b4a30c(&puStack_d8,ppuVar36);
      ppuVar35 = (undefined1 **)0x0;
    }
    func_0x000108b394d8();
    iVar33 = (int)ppuVar36;
    ppuStack_118 = (undefined1 **)CONCAT44(ppuStack_118._4_4_,uVar15);
    iVar19 = (int)piVar31;
    if ((iVar19 == 0) && (uVar9 = param_2[0xde6] == 1000, (bool)uVar9)) {
      ppuVar28 = (undefined1 **)0x0;
      func_0x000108b394e4();
    }
    else {
      func_0x000108b393e4(piStack_150);
      FUN_108b46af8();
      puVar12 = puVar30 + 0x10;
      func_0x000108b394f8();
      if ((bool)uVar9) {
        uStack_90 = *(ulong *)(param_2 + 0x1a);
        func_0x000108b393e4(&uStack_90);
        FUN_108b46af8();
        puVar12 = puVar30 + 0x20;
      }
      func_0x000108b394e4();
      iVar17 = 0;
      if (!(bool)uVar9) {
        iVar17 = iVar19;
      }
      uVar9 = iVar17 == 1;
      if ((bool)uVar9) {
        *(undefined8 *)(puVar12 + -0x10) = 0;
        func_0x000108b394a8(ppuVar28);
        func_0x000108b3952c();
        func_0x000108b39440(ppuVar28);
        func_0x000108b393e4(0xffffffff);
        func_0x000108b39458();
        puVar30 = puVar12 + 0x10;
        ppuVar37 = (undefined1 **)(ulong)(uint)(param_2[0x25] / 200);
        ppuVar34 = ppuVar28;
        ppuVar14 = (undefined1 **)(extraout_x8_01 + iVar33);
        param_6 = ppuVar25;
        func_0x000108b39438(ppuVar28,puStack_f0);
        if ((int)ppuVar34 < 0) goto LAB_108b38748;
        func_0x000108b393e4(&uStack_dc);
        func_0x000108b394a0();
        func_0x000108b39470(ppuVar28);
        ppuVar28 = (undefined1 **)0x1;
        uVar15 = 1;
        puVar30 = puVar12 + 0x20;
      }
      else {
        ppuVar28 = (undefined1 **)0x0;
        puVar30 = puVar12;
      }
    }
    piStack_e8 = param_2 + 0xdf9;
    if (param_2[0x1c] != 0x804) {
      *(undefined1 ***)(puVar30 + -0x10) = ppuVar23;
      func_0x000108b394a8(ppuStack_100);
    }
    *(undefined1 *)ppuStack_108 = 0;
    uVar9 = param_2[0xde6] == 1000;
    if ((bool)uVar9) {
      *piStack_e8 = uStack_bc._4_4_;
      ppuVar28 = ppuStack_108;
    }
    else {
      *(ulong *)(puVar30 + -0x10) = (ulong)(uint)param_2[0x26];
      func_0x000108b39440(ppuStack_100);
      if (param_2[0xde6] == 0x3e9) {
        if (param_2[0x26] != 0) {
          *(ulong *)(puVar30 + -0x10) = (ulong)(uint)(param_2[0x29] - param_2[9]);
          ppuVar23 = ppuStack_100;
          func_0x000108b39458(ppuStack_100);
          func_0x000108b3952c();
          uVar11 = 0xfb4;
LAB_108b38038:
          FUN_108b46af8(ppuVar23,uVar11);
        }
      }
      else if (param_2[0x26] != 0) {
        *(undefined8 *)(puVar30 + -0x10) = 1;
        ppuVar23 = ppuStack_100;
        func_0x000108b39440(ppuStack_100);
        *(ulong *)(puVar30 + -0x10) = (ulong)(uint)param_2[0x27];
        FUN_108b46af8(ppuVar23,0xfb4);
        *(ulong *)(puVar30 + -0x10) = (ulong)(uint)param_2[0x29];
        uVar11 = 0xfa2;
        goto LAB_108b38038;
      }
      ppuVar34 = ppuStack_100;
      if ((param_2[0xde6] != param_2[0xde7] && 0 < param_2[0xde7]) && (param_2[0x1c] != 0x805)) {
        func_0x000108b39470(ppuStack_100);
        ppuVar37 = (undefined1 **)(ulong)(uint)(param_2[0x25] / 400);
        param_6 = (undefined1 **)0x2;
        func_0x000108b39438(ppuVar34,puStack_140,ppuVar37,&uStack_90);
        *(undefined8 *)(puVar30 + -0x10) = 0;
        func_0x000108b394c4(ppuVar34);
        ppuVar23 = ppuVar34;
      }
      func_0x000108b393f0();
      uVar9 = extraout_w8_04 + -0x20 == iVar33 * 8;
      ppuVar34 = ppuVar35;
      if (extraout_w8_04 + -0x20 <= iVar33 * 8) {
        ppuVar14 = (undefined1 **)0x0;
        ppuVar34 = ppuStack_100;
        ppuVar37 = param_4;
        param_6 = ppuVar36;
        FUN_108b41b70(ppuStack_100,puStack_f0);
        iVar17 = (int)ppuVar34;
        if (iVar17 < 0) goto LAB_108b38748;
        if ((int)ppuVar28 != 0) {
          func_0x000108b394f8();
          bVar8 = !(bool)uVar9;
          uVar9 = bVar8 || iVar33 == iVar17;
          if (!bVar8 && iVar33 != iVar17) {
            func_0x000108b394d8();
            ppuVar37 = ppuVar25;
            _memmove(extraout_x8_02 + ((ulong)ppuVar34 & 0xffffffff),
                     (undefined1 **)(extraout_x8_01 + iVar33));
            ppuVar36 = (undefined1 **)(ulong)(iVar17 + uVar18);
          }
        }
      }
      ppuVar28 = ppuStack_108;
      *(int **)(puVar30 + -0x10) = piStack_e8;
      func_0x000108b394a0(ppuStack_100);
      ppuVar35 = ppuVar34;
    }
    ppuVar34 = ppuStack_100;
    if (((uStack_f4 | uVar15) & 1) == 0) {
      uVar15 = param_2[0x25] / 200;
      ppuVar23 = (undefined1 **)(ulong)uVar15;
      iVar33 = param_2[0x25] / 400;
      func_0x000108b39470(ppuStack_100);
      *(undefined8 *)(puVar30 + -0x10) = 0;
      func_0x000108b394a8(ppuVar34);
      func_0x000108b3952c();
      func_0x000108b394c4(ppuVar34);
      func_0x000108b3952c();
      func_0x000108b39440(ppuVar34);
      *(undefined8 *)(puVar30 + -0x10) = 0xffffffff;
      func_0x000108b39458(ppuVar34);
      func_0x000108b394f8();
      if ((bool)uVar9) {
        FUN_108b4a30c(&puStack_d8,ppuVar35);
        ppuVar36 = ppuVar35;
      }
      ppuVar28 = ppuStack_100;
      func_0x000108b39438(ppuStack_100,
                          puStack_f0 + (long)(int)(param_2[0x1d] * ((uVar27 - uVar15) - iVar33)) * 4
                          ,iVar33,&uStack_90,2);
      func_0x000108b394d8();
      ppuVar14 = (undefined1 **)(extraout_x8_03 + (int)ppuVar36);
      ppuVar34 = ppuVar28;
      ppuVar37 = ppuVar23;
      param_6 = ppuVar25;
      func_0x000108b39438();
      if ((int)ppuVar34 < 0) goto LAB_108b38748;
      func_0x000108b393e4(&uStack_dc);
      func_0x000108b394a0();
      puVar30 = puVar30 + 0x10;
      ppuVar28 = ppuStack_108;
    }
    ppuVar23 = (undefined1 **)(ulong)param_14;
    ppuVar34 = (undefined1 **)(ulong)(uint)param_2[0xde6];
    iVar33 = 0;
    if (uVar27 != 0) {
      iVar33 = param_2[0x25] / (int)uVar27;
    }
    func_0x000108b394bc(ppuVar34,iVar33);
    *(byte *)ppuVar28 = *(byte *)ppuVar28 | (byte)ppuVar34;
    param_2[0xdf9] = param_2[0xdf9] ^ uStack_dc;
    if (param_14 == 0) {
      iVar33 = param_2[0xde6];
    }
    else {
      iVar33 = 0x3ea;
    }
    param_2[0xde7] = iVar33;
    ppuVar14 = (undefined1 **)(ulong)(uint)param_2[0xdde];
    param_2[0xde8] = param_2[0xdde];
    param_2[0xde9] = uVar27;
    param_2[0xded] = 0;
    if ((param_2[0x2f] == 0) || (param_2[0xf] != 0)) {
      param_2[0xdf6] = 0;
    }
    else {
      if (uStack_12c == 0) {
        iVar33 = param_2[0x25];
        iVar17 = 0;
        if (iVar33 != 0) {
          iVar17 = (int)(uVar27 * 2000) / iVar33;
        }
        uVar15 = param_2[0xdf6] + iVar17;
        param_2[0xdf6] = uVar15;
        if ((int)uVar15 < 0x191) goto LAB_108b38274;
        uVar9 = uVar15 == 0x4b1;
        if (uVar15 < 0x4b1) {
          param_2[0xdf9] = 0;
          ppuVar34 = (undefined1 **)(ulong)(uint)param_2[0xde6];
          iVar19 = 0;
          if (uVar27 != 0) {
            iVar19 = iVar33 / (int)uVar27;
          }
          func_0x000108b394bc(ppuVar34,iVar19);
          *(char *)ppuVar28 = (char)ppuVar34;
          goto LAB_108b38874;
        }
        iVar33 = 400;
      }
      else {
        iVar33 = 0;
      }
      param_2[0xdf6] = iVar33;
    }
LAB_108b38274:
    func_0x000108b393f0();
    if (iStack_110 + -8 < extraout_w8_05 + -0x20) {
      uVar9 = uStack_10c == 2;
      if ((int)uStack_10c < 2) {
        ppuVar35 = (undefined1 **)0xfffffffe;
        goto LAB_108b3874c;
      }
      func_0x000108b394d8();
      *extraout_x8_04 = 0;
      *piStack_e8 = 0;
      ppuVar35 = (undefined1 **)0x1;
    }
    else {
      uVar9 = param_2[0xde6] == 1000;
      if (!(bool)uVar9) {
        iVar19 = 1;
      }
      if ((iVar19 == 0) && (uVar9 = (int)ppuVar35 == 3, 2 < (int)ppuVar35)) {
        do {
          if (*(char *)((long)ppuVar28 + ((ulong)ppuVar35 & 0xffffffff)) != '\0')
          goto LAB_108b382e8;
          iVar19 = (int)ppuVar35;
          uVar9 = iVar19 == 3;
          ppuVar35 = (undefined1 **)(ulong)(iVar19 - 1);
        } while (3 < iVar19);
        ppuVar35 = (undefined1 **)0x2;
      }
    }
LAB_108b382e8:
    uVar15 = uStack_10c;
    ppuVar35 = (undefined1 **)(ulong)(uVar18 + (int)ppuVar35 + 1);
    if (param_2[0x26] == 0) {
      ppuVar23 = (undefined1 **)(ulong)uStack_10c;
      ppuVar34 = ppuVar28;
      ppuVar37 = ppuVar23;
      FUN_108b3c8c8();
      uVar9 = (int)ppuVar34 == 0;
      if (!(bool)uVar9) {
        uVar15 = 0xfffffffd;
      }
      ppuVar35 = (undefined1 **)(ulong)uVar15;
    }
  }
  else {
    uVar3 = param_2[0x25];
    ppuVar25 = (undefined1 **)(ulong)uVar3;
    uVar32 = 0;
    if (uVar27 != 0) {
      uVar32 = (int)(uVar3 * 6) / (int)uVar27;
    }
    uVar18 = (int)(uVar32 * (uVar18 - 8)) / 6;
    puVar12 = (undefined1 *)(ulong)uVar18;
    if (iVar19 == 0x3e9) {
      ppuVar37 = (undefined1 **)(ulong)(uVar3 == uVar27 * 0x32);
      iVar33 = param_2[0x26];
      param_6 = (undefined1 **)(ulong)(uint)param_2[0xe];
      func_0x000108b3911c(puVar12,uVar15,ppuVar37,iVar33,param_6,param_2[0xdde]);
      param_2[9] = (int)puVar12;
      pfVar21 = *(float **)(param_2 + 0xdee);
      if (pfVar21 == (float *)0x0) {
        dVar39 = (double)((float)(int)((int)puVar12 - uVar18) / 1024.0) * 0.6931471805599453;
        _exp();
        fVar38 = 1.0 - (float)dVar39;
      }
      else {
LAB_108b379c0:
        fVar38 = 1.0;
        if ((iVar33 != 0) && (param_2[0x2d] == 0)) {
          uVar18 = *puStack_158;
          if (uVar18 == 0x44d) {
            lVar20 = 0xd;
            fVar40 = 8000.0;
          }
          else if (uVar18 == 0x44e) {
            lVar20 = 0xf;
            fVar40 = 12000.0;
          }
          else {
            lVar20 = 0x11;
            fVar40 = 16000.0;
          }
          uVar4 = param_2[0x1d];
          fVar41 = 0.0;
          for (uVar24 = 0; pfVar1 = pfVar21, lVar6 = lVar20,
              uVar24 != (uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)); uVar24 = uVar24 + 1) {
            for (; lVar6 != 0; lVar6 = lVar6 + -1) {
              fVar42 = *pfVar1;
              fVar43 = 0.5;
              if (fVar42 <= -2.0 && fVar42 < 0.5) {
                fVar43 = -2.0;
              }
              if (-2.0 < fVar42 && fVar42 < 0.5) {
                fVar43 = fVar42;
              }
              fVar42 = fVar43 * 0.5;
              if (fVar43 <= 0.0) {
                fVar42 = fVar43;
              }
              fVar41 = fVar41 + fVar42;
              pfVar1 = pfVar1 + 1;
            }
            pfVar21 = pfVar21 + 0x15;
          }
          iVar17 = (int)(fVar40 * ((fVar41 / (float)lVar20) * (float)(int)uVar4 + 0.2));
          iVar33 = ((int)puVar12 * -2) / 3;
          if (iVar33 <= iVar17) {
            iVar33 = iVar17;
          }
          if ((uVar18 & 0xfffffffe) == 0x450) {
            iVar33 = (iVar33 * 3) / 5;
          }
          uVar18 = iVar33 + (int)puVar12;
          puVar12 = (undefined1 *)(ulong)uVar18;
          param_2[9] = uVar18;
        }
      }
    }
    else {
      param_2[9] = uVar18;
      pfVar21 = *(float **)(param_2 + 0xdee);
      if (pfVar21 != (float *)0x0) {
        iVar33 = param_2[0x26];
        goto LAB_108b379c0;
      }
      fVar38 = 1.0;
    }
    ppuVar34 = ppuStack_118;
    iVar33 = 0;
    if (uVar3 != 0) {
      iVar33 = (int)(uVar27 * 1000) / (int)uVar3;
    }
    fVar40 = (float)param_2[0x1d];
    ppuVar28 = (undefined1 **)(ulong)(uint)fVar40;
    ppuVar23 = (undefined1 **)(param_2 + 2);
    *(float *)ppuVar23 = fVar40;
    param_2[8] = iVar33;
    param_2[3] = param_2[0xdde];
    if (uVar15 == 0x44d) {
      uVar18 = 8000;
LAB_108b384b8:
      param_2[7] = uVar18;
      if (iVar19 == 0x3e9) {
        param_2[5] = 16000;
        param_2[6] = 16000;
      }
      else {
        param_2[5] = 16000;
        param_2[6] = 8000;
        if (iVar19 == 1000) {
          iVar33 = (int)((int)piStack_e8 * uVar32 * 8) / 6;
          if (0x32 < (int)puStack_140) {
            iVar33 = (iVar33 << 1) / 3;
          }
          if (iVar33 < 8000) {
            param_2[5] = 12000;
            if (11999 < uVar18) {
              uVar18 = 12000;
            }
            param_2[7] = uVar18;
            if (iVar33 < 7000) {
              param_2[5] = 8000;
              param_2[7] = 8000;
            }
          }
        }
      }
      iVar17 = param_2[0x26];
      iVar33 = iStack_110 + -8;
      param_2[0x10] = (uint)(iVar17 == 0);
      param_2[0x11] = iVar33;
      if ((uStack_134 == 0) || ((int)uStack_138 < 2)) {
        uVar9 = iVar19 == 0x3e9;
        if (iVar17 == 0) {
          if ((bool)uVar9) goto LAB_108b38610;
        }
        else if ((bool)uVar9) goto LAB_108b385d0;
      }
      else {
        iVar33 = iVar33 + (uStack_138 << 3 ^ 0xffffffff);
        param_2[0x11] = iVar33;
        uVar9 = 0;
        if (iVar19 == 0x3e9) {
          iVar33 = iVar33 + -0x14;
          param_2[0x11] = iVar33;
          if (iVar17 == 0) {
LAB_108b38610:
            iVar19 = 0;
            if (uVar3 != 0) {
              iVar19 = (int)((int)puVar12 * uVar27) / (int)uVar3;
            }
            uVar18 = iVar33 - iVar19;
            uVar9 = uVar18 == 0;
            if ((int)uVar18 < 0) {
              iVar19 = 0;
            }
            else {
              iVar19 = (int)((-(uVar18 >> 0xf & 1) & 0xfffe0000 | (uVar18 & 0xffff) << 1) +
                            (int)(short)uVar18) / -4;
            }
            param_2[0x10] = 0;
            param_2[0x11] = iVar19 + iVar33 & (iVar19 + iVar33 >> 0x1f ^ 0xffffffffU);
          }
          else {
LAB_108b385d0:
            uVar9 = uVar3 == uVar27 * 0x32;
            iVar19 = 0;
            if (uVar27 != 0) {
              iVar19 = (int)(iVar33 * uVar3) / (int)uVar27;
            }
            func_0x000108b3911c(iVar19,uVar15,uVar9,iVar17,param_2[0xe]);
            iVar33 = 0;
            if (uVar32 != 0) {
              iVar33 = (iVar19 * 6) / (int)uVar32;
            }
            param_2[0x11] = iVar33;
          }
        }
      }
      uVar32 = uStack_f4;
      piVar31 = piStack_128;
      if (iStack_144 == 0) {
        ppuVar25 = (undefined1 **)(ulong)uStack_12c;
        piVar31 = piVar29;
      }
      else {
        uVar9 = param_2[0x1c] == 0x804;
        if ((bool)uVar9) {
          ppuVar25 = (undefined1 **)(ulong)uStack_12c;
          piVar31 = piVar29;
        }
        else {
          uStack_90 = uStack_90 & 0xffffffff00000000;
          uVar18 = ((param_2[0x2c] - param_2[0x1e]) - (int)uVar3 / 400) * (int)fVar40;
          func_0x000108b391d8(0,0x3f800000,piStack_128 + (int)uVar18,piStack_128 + (int)uVar18,
                              *(undefined4 *)(lStack_98 + 4),(int)uVar3 / 400,ppuVar28,
                              *(undefined8 *)(lStack_98 + 0x48),ppuVar25);
          _bzero(piVar31,-(ulong)(uVar18 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar18 << 2);
          ppuVar25 = (undefined1 **)(ulong)uStack_12c;
          FUN_108b5123c(ppuVar34,ppuVar23,piVar31,param_2[0x2c],0,&uStack_90,iStack_144,ppuVar25);
          param_2[0x13] = 0;
          ppuVar28 = (undefined1 **)(ulong)(uint)param_2[0x1d];
        }
      }
      puVar12 = puStack_f0;
      ppuVar37 = (undefined1 **)(puStack_f0 + (long)(int)((int)ppuVar28 * uVar32) * 4);
      param_6 = &puStack_d8;
      ppuVar14 = param_4;
      FUN_108b5123c(ppuVar34,ppuVar23);
      if ((int)ppuVar34 == 0) {
        ppuVar23 = (undefined1 **)(ulong)(uint)param_2[0xde6];
        iVar19 = param_2[0x15];
        ppuVar28 = ppuStack_100;
        ppuVar25 = ppuStack_108;
        if (param_2[0xde6] == 1000) {
          if (iVar19 == 8000) {
            uVar15 = 0x44d;
          }
          else {
            if (iVar19 == 16000) goto LAB_108b387bc;
            if (iVar19 == 12000) {
              uVar15 = 0x44e;
            }
          }
        }
        else {
          piVar29 = piVar31;
          if (iVar19 != 16000) goto LAB_108b387b8;
        }
        goto LAB_108b387c8;
      }
LAB_108b38748:
      ppuVar35 = (undefined1 **)0xfffffffd;
    }
    else {
      if (uVar15 == 0x44e) {
        uVar18 = 12000;
        goto LAB_108b384b8;
      }
      uVar18 = 16000;
      if ((iVar19 == 0x3e9) || (uVar15 == 0x44f)) goto LAB_108b384b8;
LAB_108b387b8:
      _abort();
      piVar31 = piVar29;
LAB_108b387bc:
      uVar15 = 0x44f;
LAB_108b387c8:
      uVar18 = 0;
      if (param_2[0x19] != 0) {
        uVar18 = (uint)(param_2[0xdf8] == 0);
      }
      param_2[0x13] = uVar18;
      uVar9 = false;
      if (uStack_12c == 0xffffffff) {
        uVar9 = param_2[0x1a] == 0;
        uStack_12c = (uint)!(bool)uVar9;
      }
      if (iStack_9c != 0) {
        iVar19 = param_2[0x1c];
        if (uVar18 != 0) {
          if (iVar19 != 0x804) {
            uVar18 = (uint)piStack_e8;
            func_0x000108b394b0((ulong)piStack_e8 & 0xffffffff,param_2[0x29]);
            uStack_138 = uVar18;
            uStack_134 = (uint)(uStack_138 != 0);
          }
          uStack_130 = 0;
          param_2[0xdec] = 1;
        }
        goto LAB_108b378f0;
      }
      param_2[0xdf9] = 0;
      ppuVar14 = (undefined1 **)(ulong)(uint)param_2[0xdde];
      iVar19 = 0;
      if (uVar27 != 0) {
        iVar19 = param_2[0x25] / (int)uVar27;
      }
      ppuVar34 = ppuVar23;
      func_0x000108b394bc(ppuVar23,iVar19);
      *(char *)ppuVar25 = (char)ppuVar34;
LAB_108b38874:
      ppuVar35 = (undefined1 **)0x1;
    }
  }
LAB_108b3874c:
  func_0x000108b39404(uStack_80);
  if ((bool)uVar9) {
    return ppuVar35;
  }
  ___stack_chk_fail();
  *(int **)(puVar30 + -0x40) = piVar31;
  *(undefined1 ***)(puVar30 + -0x38) = ppuVar28;
  *(undefined1 ***)(puVar30 + -0x30) = param_4;
  *(int **)(puVar30 + -0x28) = param_2;
  *(undefined1 ***)(puVar30 + -0x20) = ppuVar25;
  *(undefined1 ***)(puVar30 + -0x18) = ppuVar23;
  *(undefined1 **)(puVar30 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)(puVar30 + -8) = FUN_108b38888;
  puVar12 = puVar30 + -0x50;
  ppuVar25 = ppuVar34;
  func_0x000108b39478();
  *(undefined8 *)(puVar30 + -0x48) = extraout_x8_05;
  fVar38 = *(float *)(ppuVar25 + 0xe);
  fVar40 = *(float *)(ppuVar34 + 0x14);
  fVar41 = *(float *)((long)ppuVar34 + 0x94);
  ppuVar25 = ppuVar37;
  func_0x000108b35d18();
  iVar19 = (int)ppuVar25;
  uVar9 = fVar38 == 1.4013e-45;
  if ((int)fVar38 < 1) {
    ppuVar34 = (undefined1 **)0xffffffff;
  }
  else {
    fVar40 = fVar38;
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(float *)((long)ppuVar34 + 0x74));
    puVar12 = puVar30 + (-0x50 - extraout_x13_00);
    for (uVar24 = 0;
        uVar9 = (extraout_w12_01 & ((int)extraout_w12_01 >> 0x1f ^ 0xffffffffU)) == uVar24,
        !(bool)uVar9; uVar24 = uVar24 + 1) {
      *(float *)(puVar12 + uVar24 * 4) =
           (float)(int)*(short *)((long)ppuVar35 + uVar24 * 2) / 32768.0;
    }
    *(undefined4 *)(puVar12 + -8) = 1;
    *(undefined8 *)(puVar12 + -0x10) = 0x108b35c30;
    *(undefined4 *)(puVar12 + -0x18) = extraout_w8_06;
    *(undefined8 *)(puVar12 + -0x20) = 0xfffffffe00000000;
    puVar13 = puVar12;
    ppuVar25 = ppuVar14;
    FUN_108b35e70();
    iVar19 = (int)puVar13;
    fVar41 = SUB84(ppuVar25,0);
  }
  func_0x000108b39404(*(undefined8 *)(puVar30 + -0x48));
  if ((bool)uVar9) {
    return ppuVar34;
  }
  ___stack_chk_fail();
  *(undefined1 ***)(puVar12 + -0x30) = ppuVar14;
  *(undefined1 ***)(puVar12 + -0x28) = ppuVar35;
  *(undefined1 ***)(puVar12 + -0x20) = param_6;
  *(undefined1 ***)(puVar12 + -0x18) = ppuVar37;
  *(undefined1 **)(puVar12 + -0x10) = puVar30 + -0x10;
  *(code **)(puVar12 + -8) = FUN_108b389a0;
  *(undefined1 **)(puVar12 + -0x38) = puVar12;
  fVar38 = *(float *)(ppuVar34 + 0xe);
  if (fVar38 == 2.87546e-42) {
    puVar30 = (undefined1 *)0x0;
  }
  else {
    puVar30 = (undefined1 *)((long)ppuVar34 + (long)(int)*(float *)ppuVar34);
  }
  ppuVar37 = (undefined1 **)0xfffffffb;
  switch(iVar19) {
  case 4000:
    func_0x000108b3938c();
    if (((((uint)fVar38 & 0xfffffffe) != 0x804) &&
        (fVar40 = *extraout_x8_06, (int)fVar40 - 0x800U < 4 && (int)fVar40 - 0x800U != 2)) &&
       ((*(float *)((long)ppuVar34 + 0x37b4) != 0.0 || (fVar38 == fVar40)))) {
      *(float *)(ppuVar34 + 0xe) = fVar40;
      *(float *)(ppuVar34 + 0x19) = fVar40;
      return (undefined1 **)0x0;
    }
    break;
  case 0xfa1:
    func_0x000108b39364();
    if (extraout_x8_20 != (float *)0x0) {
      *extraout_x8_20 = fVar38;
      return (undefined1 **)0x0;
    }
    break;
  case 0xfa2:
    func_0x000108b39378();
    fVar38 = extraout_w8_11;
    if (extraout_w8_11 == -NAN || extraout_w8_11 == -NAN) {
code_r0x000108b38d40:
      *(float *)(ppuVar34 + 0x15) = fVar38;
      return (undefined1 **)0x0;
    }
    if (0 < (int)extraout_w8_11) {
      if ((uint)extraout_w8_11 < 0x1f5) {
        fVar38 = 7.00649e-43;
      }
      else {
        fVar40 = (float)((int)*(float *)((long)ppuVar34 + 0x74) * 750000);
        fVar38 = extraout_w8_11;
        if ((int)fVar40 <= (int)extraout_w8_11) {
          fVar38 = fVar40;
        }
      }
      goto code_r0x000108b38d40;
    }
    break;
  case 0xfa3:
    func_0x000108b3938c();
    puVar26 = (undefined4 *)*extraout_x8_21;
    if (puVar26 != (undefined4 *)0x0) {
      FUN_108b37208(ppuVar34,*(float *)((long)ppuVar34 + 0x37a4),0x4fc);
      *puVar26 = (int)ppuVar34;
      return (undefined1 **)0x0;
    }
    break;
  case 0xfa4:
    func_0x000108b39378();
    if (0xfffffffa < (int)extraout_w8_12 - 0x452U) {
      *(float *)(ppuVar34 + 0x11) = extraout_w8_12;
      fVar38 = extraout_w8_12;
code_r0x000108b38d74:
      if (fVar38 == 1.54423e-42) {
        fVar38 = 1.68156e-41;
      }
      else if (fVar38 == 1.54283e-42) {
        fVar38 = 1.12104e-41;
      }
      else {
        fVar38 = 2.24208e-41;
      }
      *(float *)((long)ppuVar34 + 0x14) = fVar38;
      return (undefined1 **)0x0;
    }
    break;
  case 0xfa5:
    func_0x000108b39364();
    if (extraout_x8_19 != (float *)0x0) {
      fVar38 = *(float *)(ppuVar34 + 0x11);
      pfVar21 = extraout_x8_19;
LAB_108b3902c:
      *pfVar21 = fVar38;
      return (undefined1 **)0x0;
    }
    break;
  case 0xfa6:
    func_0x000108b39378();
    if ((uint)extraout_w8_10 < 2) {
      *(float *)(ppuVar34 + 0x13) = extraout_w8_10;
      *(uint *)(ppuVar34 + 8) = 1 - (int)extraout_w8_10;
      return (undefined1 **)0x0;
    }
    break;
  case 0xfa7:
    func_0x000108b39364();
    if (extraout_x8_18 != (float *)0x0) {
      fVar38 = *(float *)(ppuVar34 + 0x13);
      pfVar21 = extraout_x8_18;
      goto LAB_108b3902c;
    }
    break;
  case 0xfa8:
    func_0x000108b39378();
    if (((int)extraout_w8_09 - 0x44dU < 5) || (extraout_w8_09 == -NAN)) {
      *(float *)((long)ppuVar34 + 0x84) = extraout_w8_09;
      fVar38 = extraout_w8_09;
      goto code_r0x000108b38d74;
    }
    break;
  case 0xfa9:
    func_0x000108b39364();
    if (extraout_x8_23 != (float *)0x0) {
      fVar38 = *(float *)(ppuVar34 + 0x6f5);
      pfVar21 = extraout_x8_23;
      goto LAB_108b3902c;
    }
    break;
  case 0xfaa:
    func_0x000108b3938c();
    if ((uint)*extraout_x8_12 < 0xb) {
      *(float *)((long)ppuVar34 + 0x2c) = *extraout_x8_12;
      if (fVar38 == 2.87546e-42) {
        return (undefined1 **)0x0;
      }
      func_0x000108b3942c();
      goto code_r0x000108b38f50;
    }
    break;
  case 0xfab:
    func_0x000108b39364();
    if (extraout_x8_24 != (float *)0x0) {
      fVar38 = *(float *)((long)ppuVar34 + 0x2c);
      pfVar21 = extraout_x8_24;
      goto LAB_108b3902c;
    }
    break;
  case 0xfac:
    func_0x000108b39378();
    if ((uint)extraout_w8_15 < 3) {
      *(float *)(ppuVar34 + 0x18) = extraout_w8_15;
      *(uint *)(ppuVar34 + 6) = (uint)(extraout_w8_15 != 0.0);
      return (undefined1 **)0x0;
    }
    break;
  case 0xfad:
    func_0x000108b39364();
    if (extraout_x8_14 != (float *)0x0) {
      fVar38 = *(float *)(ppuVar34 + 0x18);
      pfVar21 = extraout_x8_14;
      goto LAB_108b3902c;
    }
    break;
  case 0xfae:
    func_0x000108b3938c();
    if ((uint)*extraout_x8_13 < 0x65) {
      *(float *)(ppuVar34 + 5) = *extraout_x8_13;
      if (fVar38 == 2.87546e-42) {
        return (undefined1 **)0x0;
      }
      func_0x000108b3942c();
      goto code_r0x000108b38f50;
    }
    break;
  case 0xfaf:
    func_0x000108b39364();
    if (extraout_x8_16 != (float *)0x0) {
      fVar38 = *(float *)(ppuVar34 + 5);
      pfVar21 = extraout_x8_16;
      goto LAB_108b3902c;
    }
    break;
  case 0xfb0:
    func_0x000108b39378();
    if ((uint)extraout_w8_16 < 2) {
      *(float *)((long)ppuVar34 + 0xbc) = extraout_w8_16;
      return (undefined1 **)0x0;
    }
    break;
  case 0xfb1:
    func_0x000108b39364();
    if (extraout_x8_15 != (float *)0x0) {
      fVar38 = *(float *)((long)ppuVar34 + 0xbc);
      pfVar21 = extraout_x8_15;
      goto LAB_108b3902c;
    }
    break;
  case 0xfb2:
  case 0xfb3:
  case 0xfba:
  case 0xfbe:
  case 0xfc0:
  case 0xfc1:
  case 0xfc2:
  case 0xfc3:
  case 0xfc6:
  case 0xfc7:
  case 0xfcc:
  case 0xfcd:
  case 0xfd0:
    goto LAB_108b39070;
  case 0xfb4:
    func_0x000108b39378();
    if ((uint)extraout_w8_17 < 2) {
      *(float *)((long)ppuVar34 + 0x9c) = extraout_w8_17;
      return (undefined1 **)0x0;
    }
    break;
  case 0xfb5:
    func_0x000108b39364();
    if (extraout_x8_11 != (float *)0x0) {
      fVar38 = *(float *)((long)ppuVar34 + 0x9c);
      pfVar21 = extraout_x8_11;
      goto LAB_108b3902c;
    }
    break;
  case 0xfb6:
    func_0x000108b39378();
    if ((int)extraout_w8_07 < 1) {
      if (extraout_w8_07 == -NAN) goto code_r0x000108b39048;
    }
    else if ((int)extraout_w8_07 <= (int)*(float *)((long)ppuVar34 + 0x74)) {
code_r0x000108b39048:
      *(float *)((long)ppuVar34 + 0x7c) = extraout_w8_07;
      return (undefined1 **)0x0;
    }
    break;
  case 0xfb7:
    func_0x000108b39364();
    if (extraout_x8_27 != (float *)0x0) {
      fVar38 = *(float *)((long)ppuVar34 + 0x7c);
      pfVar21 = extraout_x8_27;
      goto LAB_108b3902c;
    }
    break;
  case 0xfb8:
    func_0x000108b39378();
    if (((int)extraout_w8_08 - 0xbb9U < 2) || (extraout_w8_08 == -NAN)) {
      *(float *)(ppuVar34 + 0x10) = extraout_w8_08;
      return (undefined1 **)0x0;
    }
    break;
  case 0xfb9:
    func_0x000108b39364();
    if (extraout_x8_26 != (float *)0x0) {
      fVar38 = *(float *)(ppuVar34 + 0x10);
      pfVar21 = extraout_x8_26;
      goto LAB_108b3902c;
    }
    break;
  case 0xfbb:
    func_0x000108b39364();
    if (extraout_x8_10 != (float *)0x0) {
      fVar38 = (float)((int)*(float *)((long)ppuVar34 + 0x94) / 400);
      *extraout_x8_10 = fVar38;
      if (*(float *)(ppuVar34 + 0xe) == 2.87406e-42) {
        return (undefined1 **)0x0;
      }
      if (*(float *)(ppuVar34 + 0xe) == 2.87687e-42) {
        return (undefined1 **)0x0;
      }
      fVar38 = (float)((int)*(float *)(ppuVar34 + 0xf) + (int)fVar38);
      pfVar21 = extraout_x8_10;
      goto LAB_108b3902c;
    }
    break;
  case 0xfbc:
    fVar40 = *(float *)((long)ppuVar34 + 4);
    func_0x000108b394cc();
    _bzero(ppuVar34 + 0x6ef,(long)(int)fVar40 + -0x3778);
    if ((fVar38 == 2.87546e-42) ||
       (func_0x000108b39470(puVar30), *(float *)(ppuVar34 + 0xe) != 2.87687e-42)) {
      FUN_108b51134((undefined1 *)((long)ppuVar34 + (long)(int)fVar40),
                    *(float *)((long)ppuVar34 + 0x74),*(float *)(ppuVar34 + 0x17),puVar12 + -0xa0);
    }
    *(float *)(ppuVar34 + 0x6ef) = *(float *)((long)ppuVar34 + 0x74);
    *(undefined2 *)((long)ppuVar34 + 0x377c) = 0x4000;
    *(float *)((long)ppuVar34 + 0x37b4) = 1.4013e-45;
    *(float *)(ppuVar34 + 0x6f3) = 1.4027e-42;
    *(float *)(ppuVar34 + 0x6f5) = 1.54843e-42;
    ppuVar34[0x6f0] = (undefined1 *)0x3f8000000002f400;
    return (undefined1 **)0x0;
  case 0xfbd:
    func_0x000108b39364();
    if (extraout_x8_22 != (float *)0x0) {
      fVar38 = *(float *)((long)ppuVar34 + 0x94);
      pfVar21 = extraout_x8_22;
      goto LAB_108b3902c;
    }
    break;
  case 0xfbf:
    func_0x000108b39364();
    if (extraout_x8_08 != (float *)0x0) {
      fVar38 = *(float *)((long)ppuVar34 + 0x37e4);
      pfVar21 = extraout_x8_08;
      goto LAB_108b3902c;
    }
    break;
  case 0xfc4:
    func_0x000108b39378();
    if (0xffffffee < (int)extraout_w8_18 - 0x19U) {
      *(float *)((long)ppuVar34 + 0xac) = extraout_w8_18;
      return (undefined1 **)0x0;
    }
    break;
  case 0xfc5:
    func_0x000108b39364();
    if (extraout_x8_29 != (float *)0x0) {
      fVar38 = *(float *)((long)ppuVar34 + 0xac);
      pfVar21 = extraout_x8_29;
      goto LAB_108b3902c;
    }
    break;
  case 0xfc8:
    func_0x000108b39378();
    if (0xfffffff5 < (int)extraout_w8_14 - 0x1392U) {
      *(float *)(ppuVar34 + 0x14) = extraout_w8_14;
      return (undefined1 **)0x0;
    }
    break;
  case 0xfc9:
    func_0x000108b39364();
    if (extraout_x8_28 != (float *)0x0) {
      fVar38 = *(float *)(ppuVar34 + 0x14);
      pfVar21 = extraout_x8_28;
      goto LAB_108b3902c;
    }
    break;
  case 0xfca:
    func_0x000108b39378();
    if ((uint)extraout_w8_13 < 2) {
      *(float *)(ppuVar34 + 10) = extraout_w8_13;
      return (undefined1 **)0x0;
    }
    break;
  case 0xfcb:
    func_0x000108b39364();
    if (extraout_x8_25 != (float *)0x0) {
      fVar38 = *(float *)(ppuVar34 + 10);
      pfVar21 = extraout_x8_25;
      goto LAB_108b3902c;
    }
    break;
  case 0xfce:
    func_0x000108b3938c();
    ppuVar37 = (undefined1 **)(ulong)-(uint)(1 < *extraout_x8_30);
    if (fVar38 == 2.87546e-42 || 1 < *extraout_x8_30) {
      return ppuVar37;
    }
    func_0x000108b3942c(ppuVar37);
code_r0x000108b38f50:
    FUN_108b46af8();
    return (undefined1 **)0x0;
  case 0xfcf:
    func_0x000108b39364();
    if (extraout_x8_17 != (float *)0x0) {
      pfVar21 = extraout_x8_17;
      if (fVar38 == 2.87546e-42) {
code_r0x000108b39034:
        *pfVar21 = 0.0;
        return (undefined1 **)0x0;
      }
      func_0x000108b3942c();
      goto code_r0x000108b38f50;
    }
    break;
  case 0xfd1:
    func_0x000108b39364();
    if (extraout_x8_09 != (float *)0x0) {
      if ((*(float *)((long)ppuVar34 + 0x3c) == 0.0) ||
         (((uint)*(float *)((long)ppuVar34 + 0x379c) & 0xfffffffe) != 1000)) {
        pfVar21 = extraout_x8_09;
        if (*(float *)((long)ppuVar34 + 0xbc) == 0.0) goto code_r0x000108b39034;
        fVar38 = *(float *)(ppuVar34 + 0x6fb);
        bVar7 = SBORROW4((int)fVar38,399);
        iVar19 = (int)fVar38 - 399;
        bVar8 = fVar38 == 5.59118e-43;
      }
      else {
        fVar38 = *(float *)((long)ppuVar34 + 4);
        iVar19 = *(int *)((long)ppuVar34 + (long)(int)fVar38 + 0x1890);
        *extraout_x8_09 = (float)(uint)(9 < iVar19);
        if (iVar19 < 10) {
          return (undefined1 **)0x0;
        }
        if (*(float *)((long)ppuVar34 + 0xc) != 2.8026e-45) {
          return (undefined1 **)0x0;
        }
        if (*(int *)((long)ppuVar34 + (long)(int)fVar38 + 0x54) != 0) {
          return (undefined1 **)0x0;
        }
        iVar33 = *(int *)((long)ppuVar34 + (long)(int)fVar38 + 0x4058);
        bVar7 = SBORROW4(iVar33,9);
        iVar19 = iVar33 + -9;
        bVar8 = iVar33 == 9;
      }
      fVar38 = (float)(uint)(!bVar8 && iVar19 < 0 == bVar7);
      pfVar21 = extraout_x8_09;
      goto LAB_108b3902c;
    }
    break;
  default:
    if (iVar19 == 0x271f) {
      func_0x000108b39364();
      if (extraout_x8_33 != 0) {
        if (puVar30 == (undefined1 *)0x0) {
          _abort();
          iVar33 = (int)fVar41 * 0x28 + 0x14;
          uVar15 = ((iVar19 + iVar33 * (200 - (int)fVar40)) * 3) / 0xc80;
          iVar19 = 0;
          if (fVar40 != 0.0) {
            iVar19 = 48000 / (int)fVar40;
          }
          iVar17 = 0;
          if (iVar19 + 0xf0 != 0) {
            iVar17 = (((int)ppuVar37 * 8 + iVar33 * -2) * 0xf0) / (iVar19 + 0xf0);
          }
          uVar27 = (iVar17 + iVar33) / 8;
          if ((int)uVar27 <= (int)uVar15) {
            uVar15 = uVar27;
          }
          uVar27 = uVar15;
          if (0x100 < (int)uVar15) {
            uVar27 = 0x101;
          }
          if ((int)uVar15 <= (int)((int)fVar41 << 3 | 4U)) {
            uVar27 = 0;
          }
          return (undefined1 **)(ulong)uVar27;
        }
        func_0x000108b3942c();
        goto LAB_108b38ff0;
      }
    }
    else {
      if (iVar19 == 0x2728) {
        func_0x000108b3938c();
        *(float *)((long)ppuVar34 + 0xb4) = *extraout_x8_31;
        if (fVar38 == 2.87546e-42) {
          return (undefined1 **)0x0;
        }
        func_0x000108b3942c();
LAB_108b38ff0:
        FUN_108b46af8();
        return ppuVar37;
      }
      if (iVar19 == 0x272a) {
        func_0x000108b39364();
        ppuVar34[0x6f7] = extraout_x8_32;
        if (fVar38 == 2.87546e-42) {
          return (undefined1 **)0x0;
        }
        func_0x000108b3942c();
        goto LAB_108b38ff0;
      }
      if (iVar19 == 0x2afa) {
        func_0x000108b39378();
        if (((int)extraout_w8_19 - 1000U < 3) || (extraout_w8_19 == -NAN)) {
          *(float *)((long)ppuVar34 + 0x8c) = extraout_w8_19;
          return (undefined1 **)0x0;
        }
      }
      else if (iVar19 == 0x2b0a) {
        func_0x000108b39378();
        if (0xffffff99 < (int)extraout_w8_20 - 0x65U) {
          *(float *)(ppuVar34 + 0x12) = extraout_w8_20;
          return (undefined1 **)0x0;
        }
      }
      else {
        if (iVar19 != 0x2b0b) {
          return (undefined1 **)0xfffffffb;
        }
        func_0x000108b39364();
        if (extraout_x8_07 != (float *)0x0) {
          fVar38 = *(float *)(ppuVar34 + 0x12);
          pfVar21 = extraout_x8_07;
          goto LAB_108b3902c;
        }
      }
    }
  }
  ppuVar37 = (undefined1 **)0xffffffff;
LAB_108b39070:
  return ppuVar37;
}



/* Entry: 108b38888; end: 108b3899f;  */

int * FUN_108b38888(int *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
  uint uVar1;
  float *pfVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  int *piVar6;
  int iVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  int iVar10;
  int iVar11;
  undefined4 extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int extraout_w8_02;
  uint extraout_w8_03;
  uint extraout_w8_04;
  int extraout_w8_05;
  int iVar12;
  uint extraout_w8_06;
  int extraout_w8_07;
  uint extraout_w8_08;
  uint extraout_w8_09;
  uint extraout_w8_10;
  int extraout_w8_11;
  int extraout_w8_12;
  int extraout_w8_13;
  undefined8 extraout_x8;
  uint *extraout_x8_00;
  uint *extraout_x8_01;
  uint *extraout_x8_02;
  uint *extraout_x8_03;
  uint *extraout_x8_04;
  uint *extraout_x8_05;
  uint *extraout_x8_06;
  uint *extraout_x8_07;
  uint *extraout_x8_08;
  uint *extraout_x8_09;
  uint *extraout_x8_10;
  uint *extraout_x8_11;
  uint *extraout_x8_12;
  uint *extraout_x8_13;
  uint *extraout_x8_14;
  undefined8 *extraout_x8_15;
  uint *extraout_x8_16;
  uint *extraout_x8_17;
  uint *extraout_x8_18;
  uint *extraout_x8_19;
  uint *extraout_x8_20;
  uint *extraout_x8_21;
  uint *extraout_x8_22;
  uint *extraout_x8_23;
  uint *extraout_x8_24;
  int *extraout_x8_25;
  undefined8 extraout_x8_26;
  long extraout_x8_27;
  uint *puVar13;
  uint uVar14;
  ulong uVar15;
  uint extraout_w12;
  long extraout_x13;
  long lVar16;
  undefined4 *puVar17;
  undefined8 uStack_70;
  undefined4 auStack_68 [2];
  undefined8 uStack_60;
  undefined4 auStack_58 [2];
  float afStack_50 [2];
  undefined8 uStack_48;
  
  pfVar2 = afStack_50;
  piVar6 = param_1;
  func_0x000108b39478();
  iVar12 = piVar6[0x1c];
  iVar10 = param_1[0x28];
  iVar11 = param_1[0x25];
  uVar8 = param_3;
  uStack_48 = extraout_x8;
  func_0x000108b35d18();
  iVar7 = (int)uVar8;
  uVar4 = iVar12 == 1;
  if (iVar12 < 1) {
    param_1 = (int *)0xffffffff;
  }
  else {
    iVar10 = iVar12;
    (*(code *)PTR____chkstk_darwin_11034bd40)(param_1[0x1d]);
    lVar16 = -extraout_x13;
    pfVar2 = (float *)((long)afStack_50 + lVar16);
    for (uVar15 = 0; uVar4 = (extraout_w12 & ((int)extraout_w12 >> 0x1f ^ 0xffffffffU)) == uVar15,
        !(bool)uVar4; uVar15 = uVar15 + 1) {
      *(float *)((long)pfVar2 + uVar15 * 4) = (float)(int)*(short *)(param_2 + uVar15 * 2) / 32768.0
      ;
    }
    *(undefined4 *)((long)auStack_58 + lVar16) = 1;
    *(undefined8 *)((long)&uStack_60 + lVar16) = 0x108b35c30;
    *(undefined4 *)((long)auStack_68 + lVar16) = extraout_w8;
    *(undefined8 *)((long)&uStack_70 + lVar16) = 0xfffffffe00000000;
    puVar9 = (undefined1 *)pfVar2;
    uVar8 = param_4;
    FUN_108b35e70();
    iVar7 = (int)puVar9;
    iVar11 = (int)uVar8;
  }
  func_0x000108b39404(uStack_48);
  if ((bool)uVar4) {
    return param_1;
  }
  ___stack_chk_fail();
  *(undefined8 *)((long)pfVar2 + -0x30) = param_4;
  *(long *)((long)pfVar2 + -0x28) = param_2;
  *(undefined8 *)((long)pfVar2 + -0x20) = param_5;
  *(undefined8 *)((long)pfVar2 + -0x18) = param_3;
  *(undefined1 **)((long)pfVar2 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)((long)pfVar2 + -8) = FUN_108b389a0;
  *(float **)((long)pfVar2 + -0x38) = pfVar2;
  uVar14 = param_1[0x1c];
  if (uVar14 == 0x804) {
    lVar16 = 0;
  }
  else {
    lVar16 = (long)param_1 + (long)*param_1;
  }
  piVar6 = (int *)0xfffffffb;
  switch(iVar7) {
  case 4000:
    func_0x000108b3938c();
    if ((((uVar14 & 0xfffffffe) != 0x804) &&
        (uVar1 = *extraout_x8_00, uVar1 - 0x800 < 4 && uVar1 - 0x800 != 2)) &&
       ((param_1[0xded] != 0 || (uVar14 == uVar1)))) {
      param_1[0x1c] = uVar1;
      param_1[0x32] = uVar1;
      return (int *)0x0;
    }
    break;
  case 0xfa1:
    func_0x000108b39364();
    if (extraout_x8_14 != (uint *)0x0) {
      *extraout_x8_14 = uVar14;
      return (int *)0x0;
    }
    break;
  case 0xfa2:
    func_0x000108b39378();
    uVar14 = extraout_w8_04;
    if (extraout_w8_04 == 0xfffffc18 || extraout_w8_04 == 0xffffffff) {
code_r0x000108b38d40:
      param_1[0x2a] = uVar14;
      return (int *)0x0;
    }
    if (0 < (int)extraout_w8_04) {
      if (extraout_w8_04 < 0x1f5) {
        uVar14 = 500;
      }
      else {
        uVar14 = extraout_w8_04;
        if (param_1[0x1d] * 750000 <= (int)extraout_w8_04) {
          uVar14 = param_1[0x1d] * 750000;
        }
      }
      goto code_r0x000108b38d40;
    }
    break;
  case 0xfa3:
    func_0x000108b3938c();
    puVar17 = (undefined4 *)*extraout_x8_15;
    if (puVar17 != (undefined4 *)0x0) {
      FUN_108b37208(param_1,param_1[0xde9],0x4fc);
      *puVar17 = (int)param_1;
      return (int *)0x0;
    }
    break;
  case 0xfa4:
    func_0x000108b39378();
    if (0xfffffffa < extraout_w8_05 - 0x452U) {
      param_1[0x22] = extraout_w8_05;
      iVar12 = extraout_w8_05;
code_r0x000108b38d74:
      if (iVar12 == 0x44e) {
        iVar12 = 12000;
      }
      else if (iVar12 == 0x44d) {
        iVar12 = 8000;
      }
      else {
        iVar12 = 16000;
      }
      param_1[5] = iVar12;
      return (int *)0x0;
    }
    break;
  case 0xfa5:
    func_0x000108b39364();
    if (extraout_x8_13 != (uint *)0x0) {
      uVar14 = param_1[0x22];
      puVar13 = extraout_x8_13;
LAB_108b3902c:
      *puVar13 = uVar14;
      return (int *)0x0;
    }
    break;
  case 0xfa6:
    func_0x000108b39378();
    if (extraout_w8_03 < 2) {
      param_1[0x26] = extraout_w8_03;
      param_1[0x10] = 1 - extraout_w8_03;
      return (int *)0x0;
    }
    break;
  case 0xfa7:
    func_0x000108b39364();
    if (extraout_x8_12 != (uint *)0x0) {
      uVar14 = param_1[0x26];
      puVar13 = extraout_x8_12;
      goto LAB_108b3902c;
    }
    break;
  case 0xfa8:
    func_0x000108b39378();
    if ((extraout_w8_02 - 0x44dU < 5) || (extraout_w8_02 == -1000)) {
      param_1[0x21] = extraout_w8_02;
      iVar12 = extraout_w8_02;
      goto code_r0x000108b38d74;
    }
    break;
  case 0xfa9:
    func_0x000108b39364();
    if (extraout_x8_17 != (uint *)0x0) {
      uVar14 = param_1[0xdea];
      puVar13 = extraout_x8_17;
      goto LAB_108b3902c;
    }
    break;
  case 0xfaa:
    func_0x000108b3938c();
    if (*extraout_x8_06 < 0xb) {
      param_1[0xb] = *extraout_x8_06;
      if (uVar14 == 0x804) {
        return (int *)0x0;
      }
      func_0x000108b3942c();
      goto code_r0x000108b38f50;
    }
    break;
  case 0xfab:
    func_0x000108b39364();
    if (extraout_x8_18 != (uint *)0x0) {
      uVar14 = param_1[0xb];
      puVar13 = extraout_x8_18;
      goto LAB_108b3902c;
    }
    break;
  case 0xfac:
    func_0x000108b39378();
    if (extraout_w8_08 < 3) {
      param_1[0x30] = extraout_w8_08;
      param_1[0xc] = (uint)(extraout_w8_08 != 0);
      return (int *)0x0;
    }
    break;
  case 0xfad:
    func_0x000108b39364();
    if (extraout_x8_08 != (uint *)0x0) {
      uVar14 = param_1[0x30];
      puVar13 = extraout_x8_08;
      goto LAB_108b3902c;
    }
    break;
  case 0xfae:
    func_0x000108b3938c();
    if (*extraout_x8_07 < 0x65) {
      param_1[10] = *extraout_x8_07;
      if (uVar14 == 0x804) {
        return (int *)0x0;
      }
      func_0x000108b3942c();
      goto code_r0x000108b38f50;
    }
    break;
  case 0xfaf:
    func_0x000108b39364();
    if (extraout_x8_10 != (uint *)0x0) {
      uVar14 = param_1[10];
      puVar13 = extraout_x8_10;
      goto LAB_108b3902c;
    }
    break;
  case 0xfb0:
    func_0x000108b39378();
    if (extraout_w8_09 < 2) {
      param_1[0x2f] = extraout_w8_09;
      return (int *)0x0;
    }
    break;
  case 0xfb1:
    func_0x000108b39364();
    if (extraout_x8_09 != (uint *)0x0) {
      uVar14 = param_1[0x2f];
      puVar13 = extraout_x8_09;
      goto LAB_108b3902c;
    }
    break;
  case 0xfb2:
  case 0xfb3:
  case 0xfba:
  case 0xfbe:
  case 0xfc0:
  case 0xfc1:
  case 0xfc2:
  case 0xfc3:
  case 0xfc6:
  case 0xfc7:
  case 0xfcc:
  case 0xfcd:
  case 0xfd0:
    goto LAB_108b39070;
  case 0xfb4:
    func_0x000108b39378();
    if (extraout_w8_10 < 2) {
      param_1[0x27] = extraout_w8_10;
      return (int *)0x0;
    }
    break;
  case 0xfb5:
    func_0x000108b39364();
    if (extraout_x8_05 != (uint *)0x0) {
      uVar14 = param_1[0x27];
      puVar13 = extraout_x8_05;
      goto LAB_108b3902c;
    }
    break;
  case 0xfb6:
    func_0x000108b39378();
    if (extraout_w8_00 < 1) {
      if (extraout_w8_00 == -1000) goto code_r0x000108b39048;
    }
    else if (extraout_w8_00 <= param_1[0x1d]) {
code_r0x000108b39048:
      param_1[0x1f] = extraout_w8_00;
      return (int *)0x0;
    }
    break;
  case 0xfb7:
    func_0x000108b39364();
    if (extraout_x8_21 != (uint *)0x0) {
      uVar14 = param_1[0x1f];
      puVar13 = extraout_x8_21;
      goto LAB_108b3902c;
    }
    break;
  case 0xfb8:
    func_0x000108b39378();
    if ((extraout_w8_01 - 0xbb9U < 2) || (extraout_w8_01 == -1000)) {
      param_1[0x20] = extraout_w8_01;
      return (int *)0x0;
    }
    break;
  case 0xfb9:
    func_0x000108b39364();
    if (extraout_x8_20 != (uint *)0x0) {
      uVar14 = param_1[0x20];
      puVar13 = extraout_x8_20;
      goto LAB_108b3902c;
    }
    break;
  case 0xfbb:
    func_0x000108b39364();
    if (extraout_x8_04 != (uint *)0x0) {
      iVar12 = param_1[0x25];
      *extraout_x8_04 = iVar12 / 400;
      if (param_1[0x1c] == 0x803) {
        return (int *)0x0;
      }
      if (param_1[0x1c] == 0x805) {
        return (int *)0x0;
      }
      uVar14 = param_1[0x1e] + iVar12 / 400;
      puVar13 = extraout_x8_04;
      goto LAB_108b3902c;
    }
    break;
  case 0xfbc:
    iVar12 = param_1[1];
    func_0x000108b394cc();
    _bzero(param_1 + 0xdde,(long)iVar12 + -0x3778);
    if ((uVar14 == 0x804) || (func_0x000108b39470(lVar16), param_1[0x1c] != 0x805)) {
      FUN_108b51134((long)param_1 + (long)iVar12,param_1[0x1d],param_1[0x2e],
                    (undefined1 *)((long)pfVar2 + -0xa0));
    }
    param_1[0xdde] = param_1[0x1d];
    *(undefined2 *)(param_1 + 0xddf) = 0x4000;
    param_1[0xded] = 1;
    param_1[0xde6] = 0x3e9;
    param_1[0xdea] = 0x451;
    param_1[0xde0] = 0x2f400;
    param_1[0xde1] = 0x3f800000;
    return (int *)0x0;
  case 0xfbd:
    func_0x000108b39364();
    if (extraout_x8_16 != (uint *)0x0) {
      uVar14 = param_1[0x25];
      puVar13 = extraout_x8_16;
      goto LAB_108b3902c;
    }
    break;
  case 0xfbf:
    func_0x000108b39364();
    if (extraout_x8_02 != (uint *)0x0) {
      uVar14 = param_1[0xdf9];
      puVar13 = extraout_x8_02;
      goto LAB_108b3902c;
    }
    break;
  case 0xfc4:
    func_0x000108b39378();
    if (0xffffffee < extraout_w8_11 - 0x19U) {
      param_1[0x2b] = extraout_w8_11;
      return (int *)0x0;
    }
    break;
  case 0xfc5:
    func_0x000108b39364();
    if (extraout_x8_23 != (uint *)0x0) {
      uVar14 = param_1[0x2b];
      puVar13 = extraout_x8_23;
      goto LAB_108b3902c;
    }
    break;
  case 0xfc8:
    func_0x000108b39378();
    if (0xfffffff5 < extraout_w8_07 - 0x1392U) {
      param_1[0x28] = extraout_w8_07;
      return (int *)0x0;
    }
    break;
  case 0xfc9:
    func_0x000108b39364();
    if (extraout_x8_22 != (uint *)0x0) {
      uVar14 = param_1[0x28];
      puVar13 = extraout_x8_22;
      goto LAB_108b3902c;
    }
    break;
  case 0xfca:
    func_0x000108b39378();
    if (extraout_w8_06 < 2) {
      param_1[0x14] = extraout_w8_06;
      return (int *)0x0;
    }
    break;
  case 0xfcb:
    func_0x000108b39364();
    if (extraout_x8_19 != (uint *)0x0) {
      uVar14 = param_1[0x14];
      puVar13 = extraout_x8_19;
      goto LAB_108b3902c;
    }
    break;
  case 0xfce:
    func_0x000108b3938c();
    piVar6 = (int *)(ulong)-(uint)(1 < *extraout_x8_24);
    if (uVar14 == 0x804 || 1 < *extraout_x8_24) {
      return piVar6;
    }
    func_0x000108b3942c(piVar6);
code_r0x000108b38f50:
    FUN_108b46af8();
    return (int *)0x0;
  case 0xfcf:
    func_0x000108b39364();
    if (extraout_x8_11 != (uint *)0x0) {
      puVar13 = extraout_x8_11;
      if (uVar14 == 0x804) {
code_r0x000108b39034:
        *puVar13 = 0;
        return (int *)0x0;
      }
      func_0x000108b3942c();
      goto code_r0x000108b38f50;
    }
    break;
  case 0xfd1:
    func_0x000108b39364();
    if (extraout_x8_03 != (uint *)0x0) {
      if ((param_1[0xf] == 0) || ((param_1[0xde7] & 0xfffffffeU) != 1000)) {
        puVar13 = extraout_x8_03;
        if (param_1[0x2f] == 0) goto code_r0x000108b39034;
        iVar10 = param_1[0xdf6];
        bVar3 = SBORROW4(iVar10,399);
        iVar12 = iVar10 + -399;
        bVar5 = iVar10 == 399;
      }
      else {
        iVar10 = param_1[1];
        iVar12 = *(int *)((long)param_1 + (long)iVar10 + 0x1890);
        *extraout_x8_03 = (uint)(9 < iVar12);
        if (iVar12 < 10) {
          return (int *)0x0;
        }
        if (param_1[3] != 2) {
          return (int *)0x0;
        }
        if (*(int *)((long)param_1 + (long)iVar10 + 0x54) != 0) {
          return (int *)0x0;
        }
        iVar10 = *(int *)((long)param_1 + (long)iVar10 + 0x4058);
        bVar3 = SBORROW4(iVar10,9);
        iVar12 = iVar10 + -9;
        bVar5 = iVar10 == 9;
      }
      uVar14 = (uint)(!bVar5 && iVar12 < 0 == bVar3);
      puVar13 = extraout_x8_03;
      goto LAB_108b3902c;
    }
    break;
  default:
    if (iVar7 == 0x271f) {
      func_0x000108b39364();
      if (extraout_x8_27 != 0) {
        if (lVar16 == 0) {
          _abort();
          iVar12 = iVar11 * 0x28 + 0x14;
          uVar14 = ((iVar7 + iVar12 * (200 - iVar10)) * 3) / 0xc80;
          iVar7 = 0;
          if (iVar10 != 0) {
            iVar7 = 48000 / iVar10;
          }
          iVar10 = 0;
          if (iVar7 + 0xf0 != 0) {
            iVar10 = (((int)piVar6 * 8 + iVar12 * -2) * 0xf0) / (iVar7 + 0xf0);
          }
          uVar1 = (iVar10 + iVar12) / 8;
          if ((int)uVar1 <= (int)uVar14) {
            uVar14 = uVar1;
          }
          uVar1 = uVar14;
          if (0x100 < (int)uVar14) {
            uVar1 = 0x101;
          }
          if ((int)uVar14 <= (int)(iVar11 << 3 | 4U)) {
            uVar1 = 0;
          }
          return (int *)(ulong)uVar1;
        }
        func_0x000108b3942c();
        goto LAB_108b38ff0;
      }
    }
    else {
      if (iVar7 == 0x2728) {
        func_0x000108b3938c();
        param_1[0x2d] = *extraout_x8_25;
        if (uVar14 == 0x804) {
          return (int *)0x0;
        }
        func_0x000108b3942c();
LAB_108b38ff0:
        FUN_108b46af8();
        return piVar6;
      }
      if (iVar7 == 0x272a) {
        func_0x000108b39364();
        *(undefined8 *)(param_1 + 0xdee) = extraout_x8_26;
        if (uVar14 == 0x804) {
          return (int *)0x0;
        }
        func_0x000108b3942c();
        goto LAB_108b38ff0;
      }
      if (iVar7 == 0x2afa) {
        func_0x000108b39378();
        if ((extraout_w8_12 - 1000U < 3) || (extraout_w8_12 == -1000)) {
          param_1[0x23] = extraout_w8_12;
          return (int *)0x0;
        }
      }
      else if (iVar7 == 0x2b0a) {
        func_0x000108b39378();
        if (0xffffff99 < extraout_w8_13 - 0x65U) {
          param_1[0x24] = extraout_w8_13;
          return (int *)0x0;
        }
      }
      else {
        if (iVar7 != 0x2b0b) {
          return (int *)0xfffffffb;
        }
        func_0x000108b39364();
        if (extraout_x8_01 != (uint *)0x0) {
          uVar14 = param_1[0x24];
          puVar13 = extraout_x8_01;
          goto LAB_108b3902c;
        }
      }
    }
  }
  piVar6 = (int *)0xffffffff;
LAB_108b39070:
  return piVar6;
}



/* Entry: 108b389a0; end: 108b390a3;  */

ulong FUN_108b389a0(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  uint extraout_w8_02;
  uint extraout_w8_03;
  int extraout_w8_04;
  int iVar7;
  uint extraout_w8_05;
  int extraout_w8_06;
  uint extraout_w8_07;
  uint extraout_w8_08;
  uint extraout_w8_09;
  int extraout_w8_10;
  int extraout_w8_11;
  int extraout_w8_12;
  uint *extraout_x8;
  uint *extraout_x8_00;
  uint *extraout_x8_01;
  uint *extraout_x8_02;
  uint *extraout_x8_03;
  uint *extraout_x8_04;
  uint *extraout_x8_05;
  uint *extraout_x8_06;
  uint *extraout_x8_07;
  uint *extraout_x8_08;
  uint *extraout_x8_09;
  uint *extraout_x8_10;
  uint *extraout_x8_11;
  uint *extraout_x8_12;
  uint *extraout_x8_13;
  undefined8 *extraout_x8_14;
  uint *extraout_x8_15;
  uint *extraout_x8_16;
  uint *extraout_x8_17;
  uint *extraout_x8_18;
  uint *extraout_x8_19;
  uint *extraout_x8_20;
  uint *extraout_x8_21;
  uint *extraout_x8_22;
  uint *extraout_x8_23;
  int *extraout_x8_24;
  undefined8 extraout_x8_25;
  long extraout_x8_26;
  uint *puVar8;
  uint uVar9;
  long lVar10;
  undefined4 *puVar11;
  undefined1 auStack_a0 [104];
  
  uVar9 = param_1[0x1c];
  if (uVar9 == 0x804) {
    lVar10 = 0;
  }
  else {
    lVar10 = (long)param_1 + (long)*param_1;
  }
  uVar6 = 0xfffffffb;
  switch(param_2) {
  case 4000:
    func_0x000108b3938c();
    if ((((uVar9 & 0xfffffffe) != 0x804) &&
        (uVar3 = *extraout_x8, uVar3 - 0x800 < 4 && uVar3 - 0x800 != 2)) &&
       ((param_1[0xded] != 0 || (uVar9 == uVar3)))) {
      param_1[0x1c] = uVar3;
      param_1[0x32] = uVar3;
      return 0;
    }
    break;
  case 0xfa1:
    func_0x000108b39364();
    if (extraout_x8_13 != (uint *)0x0) {
      *extraout_x8_13 = uVar9;
      return 0;
    }
    break;
  case 0xfa2:
    func_0x000108b39378();
    uVar9 = extraout_w8_03;
    if (extraout_w8_03 == 0xfffffc18 || extraout_w8_03 == 0xffffffff) {
code_r0x000108b38d40:
      param_1[0x2a] = uVar9;
      return 0;
    }
    if (0 < (int)extraout_w8_03) {
      if (extraout_w8_03 < 0x1f5) {
        uVar9 = 500;
      }
      else {
        uVar9 = extraout_w8_03;
        if (param_1[0x1d] * 750000 <= (int)extraout_w8_03) {
          uVar9 = param_1[0x1d] * 750000;
        }
      }
      goto code_r0x000108b38d40;
    }
    break;
  case 0xfa3:
    func_0x000108b3938c();
    puVar11 = (undefined4 *)*extraout_x8_14;
    if (puVar11 != (undefined4 *)0x0) {
      FUN_108b37208(param_1,param_1[0xde9],0x4fc);
      *puVar11 = (int)param_1;
      return 0;
    }
    break;
  case 0xfa4:
    func_0x000108b39378();
    if (0xfffffffa < extraout_w8_04 - 0x452U) {
      param_1[0x22] = extraout_w8_04;
      iVar7 = extraout_w8_04;
code_r0x000108b38d74:
      if (iVar7 == 0x44e) {
        iVar7 = 12000;
      }
      else if (iVar7 == 0x44d) {
        iVar7 = 8000;
      }
      else {
        iVar7 = 16000;
      }
      param_1[5] = iVar7;
      return 0;
    }
    break;
  case 0xfa5:
    func_0x000108b39364();
    if (extraout_x8_12 != (uint *)0x0) {
      uVar9 = param_1[0x22];
      puVar8 = extraout_x8_12;
LAB_108b3902c:
      *puVar8 = uVar9;
      return 0;
    }
    break;
  case 0xfa6:
    func_0x000108b39378();
    if (extraout_w8_02 < 2) {
      param_1[0x26] = extraout_w8_02;
      param_1[0x10] = 1 - extraout_w8_02;
      return 0;
    }
    break;
  case 0xfa7:
    func_0x000108b39364();
    if (extraout_x8_11 != (uint *)0x0) {
      uVar9 = param_1[0x26];
      puVar8 = extraout_x8_11;
      goto LAB_108b3902c;
    }
    break;
  case 0xfa8:
    func_0x000108b39378();
    if ((extraout_w8_01 - 0x44dU < 5) || (extraout_w8_01 == -1000)) {
      param_1[0x21] = extraout_w8_01;
      iVar7 = extraout_w8_01;
      goto code_r0x000108b38d74;
    }
    break;
  case 0xfa9:
    func_0x000108b39364();
    if (extraout_x8_16 != (uint *)0x0) {
      uVar9 = param_1[0xdea];
      puVar8 = extraout_x8_16;
      goto LAB_108b3902c;
    }
    break;
  case 0xfaa:
    func_0x000108b3938c();
    if (*extraout_x8_05 < 0xb) {
      param_1[0xb] = *extraout_x8_05;
      if (uVar9 == 0x804) {
        return 0;
      }
      func_0x000108b3942c();
      goto code_r0x000108b38f50;
    }
    break;
  case 0xfab:
    func_0x000108b39364();
    if (extraout_x8_17 != (uint *)0x0) {
      uVar9 = param_1[0xb];
      puVar8 = extraout_x8_17;
      goto LAB_108b3902c;
    }
    break;
  case 0xfac:
    func_0x000108b39378();
    if (extraout_w8_07 < 3) {
      param_1[0x30] = extraout_w8_07;
      param_1[0xc] = (uint)(extraout_w8_07 != 0);
      return 0;
    }
    break;
  case 0xfad:
    func_0x000108b39364();
    if (extraout_x8_07 != (uint *)0x0) {
      uVar9 = param_1[0x30];
      puVar8 = extraout_x8_07;
      goto LAB_108b3902c;
    }
    break;
  case 0xfae:
    func_0x000108b3938c();
    if (*extraout_x8_06 < 0x65) {
      param_1[10] = *extraout_x8_06;
      if (uVar9 == 0x804) {
        return 0;
      }
      func_0x000108b3942c();
      goto code_r0x000108b38f50;
    }
    break;
  case 0xfaf:
    func_0x000108b39364();
    if (extraout_x8_09 != (uint *)0x0) {
      uVar9 = param_1[10];
      puVar8 = extraout_x8_09;
      goto LAB_108b3902c;
    }
    break;
  case 0xfb0:
    func_0x000108b39378();
    if (extraout_w8_08 < 2) {
      param_1[0x2f] = extraout_w8_08;
      return 0;
    }
    break;
  case 0xfb1:
    func_0x000108b39364();
    if (extraout_x8_08 != (uint *)0x0) {
      uVar9 = param_1[0x2f];
      puVar8 = extraout_x8_08;
      goto LAB_108b3902c;
    }
    break;
  case 0xfb2:
  case 0xfb3:
  case 0xfba:
  case 0xfbe:
  case 0xfc0:
  case 0xfc1:
  case 0xfc2:
  case 0xfc3:
  case 0xfc6:
  case 0xfc7:
  case 0xfcc:
  case 0xfcd:
  case 0xfd0:
    goto LAB_108b39070;
  case 0xfb4:
    func_0x000108b39378();
    if (extraout_w8_09 < 2) {
      param_1[0x27] = extraout_w8_09;
      return 0;
    }
    break;
  case 0xfb5:
    func_0x000108b39364();
    if (extraout_x8_04 != (uint *)0x0) {
      uVar9 = param_1[0x27];
      puVar8 = extraout_x8_04;
      goto LAB_108b3902c;
    }
    break;
  case 0xfb6:
    func_0x000108b39378();
    if (extraout_w8 < 1) {
      if (extraout_w8 == -1000) goto code_r0x000108b39048;
    }
    else if (extraout_w8 <= param_1[0x1d]) {
code_r0x000108b39048:
      param_1[0x1f] = extraout_w8;
      return 0;
    }
    break;
  case 0xfb7:
    func_0x000108b39364();
    if (extraout_x8_20 != (uint *)0x0) {
      uVar9 = param_1[0x1f];
      puVar8 = extraout_x8_20;
      goto LAB_108b3902c;
    }
    break;
  case 0xfb8:
    func_0x000108b39378();
    if ((extraout_w8_00 - 0xbb9U < 2) || (extraout_w8_00 == -1000)) {
      param_1[0x20] = extraout_w8_00;
      return 0;
    }
    break;
  case 0xfb9:
    func_0x000108b39364();
    if (extraout_x8_19 != (uint *)0x0) {
      uVar9 = param_1[0x20];
      puVar8 = extraout_x8_19;
      goto LAB_108b3902c;
    }
    break;
  case 0xfbb:
    func_0x000108b39364();
    if (extraout_x8_03 != (uint *)0x0) {
      iVar7 = param_1[0x25];
      *extraout_x8_03 = iVar7 / 400;
      if (param_1[0x1c] == 0x803) {
        return 0;
      }
      if (param_1[0x1c] == 0x805) {
        return 0;
      }
      uVar9 = param_1[0x1e] + iVar7 / 400;
      puVar8 = extraout_x8_03;
      goto LAB_108b3902c;
    }
    break;
  case 0xfbc:
    iVar7 = param_1[1];
    func_0x000108b394cc();
    _bzero(param_1 + 0xdde,(long)iVar7 + -0x3778);
    if ((uVar9 == 0x804) || (func_0x000108b39470(lVar10), param_1[0x1c] != 0x805)) {
      FUN_108b51134((long)param_1 + (long)iVar7,param_1[0x1d],param_1[0x2e],auStack_a0);
    }
    param_1[0xdde] = param_1[0x1d];
    *(undefined2 *)(param_1 + 0xddf) = 0x4000;
    param_1[0xded] = 1;
    param_1[0xde6] = 0x3e9;
    param_1[0xdea] = 0x451;
    param_1[0xde0] = 0x2f400;
    param_1[0xde1] = 0x3f800000;
    return 0;
  case 0xfbd:
    func_0x000108b39364();
    if (extraout_x8_15 != (uint *)0x0) {
      uVar9 = param_1[0x25];
      puVar8 = extraout_x8_15;
      goto LAB_108b3902c;
    }
    break;
  case 0xfbf:
    func_0x000108b39364();
    if (extraout_x8_01 != (uint *)0x0) {
      uVar9 = param_1[0xdf9];
      puVar8 = extraout_x8_01;
      goto LAB_108b3902c;
    }
    break;
  case 0xfc4:
    func_0x000108b39378();
    if (0xffffffee < extraout_w8_10 - 0x19U) {
      param_1[0x2b] = extraout_w8_10;
      return 0;
    }
    break;
  case 0xfc5:
    func_0x000108b39364();
    if (extraout_x8_22 != (uint *)0x0) {
      uVar9 = param_1[0x2b];
      puVar8 = extraout_x8_22;
      goto LAB_108b3902c;
    }
    break;
  case 0xfc8:
    func_0x000108b39378();
    if (0xfffffff5 < extraout_w8_06 - 0x1392U) {
      param_1[0x28] = extraout_w8_06;
      return 0;
    }
    break;
  case 0xfc9:
    func_0x000108b39364();
    if (extraout_x8_21 != (uint *)0x0) {
      uVar9 = param_1[0x28];
      puVar8 = extraout_x8_21;
      goto LAB_108b3902c;
    }
    break;
  case 0xfca:
    func_0x000108b39378();
    if (extraout_w8_05 < 2) {
      param_1[0x14] = extraout_w8_05;
      return 0;
    }
    break;
  case 0xfcb:
    func_0x000108b39364();
    if (extraout_x8_18 != (uint *)0x0) {
      uVar9 = param_1[0x14];
      puVar8 = extraout_x8_18;
      goto LAB_108b3902c;
    }
    break;
  case 0xfce:
    func_0x000108b3938c();
    uVar6 = (ulong)-(uint)(1 < *extraout_x8_23);
    if (uVar9 == 0x804 || 1 < *extraout_x8_23) {
      return uVar6;
    }
    func_0x000108b3942c(uVar6);
code_r0x000108b38f50:
    FUN_108b46af8();
    return 0;
  case 0xfcf:
    func_0x000108b39364();
    if (extraout_x8_10 != (uint *)0x0) {
      puVar8 = extraout_x8_10;
      if (uVar9 == 0x804) {
code_r0x000108b39034:
        *puVar8 = 0;
        return 0;
      }
      func_0x000108b3942c();
      goto code_r0x000108b38f50;
    }
    break;
  case 0xfd1:
    func_0x000108b39364();
    if (extraout_x8_02 != (uint *)0x0) {
      if ((param_1[0xf] == 0) || ((param_1[0xde7] & 0xfffffffeU) != 1000)) {
        puVar8 = extraout_x8_02;
        if (param_1[0x2f] == 0) goto code_r0x000108b39034;
        iVar1 = param_1[0xdf6];
        bVar4 = SBORROW4(iVar1,399);
        iVar7 = iVar1 + -399;
        bVar5 = iVar1 == 399;
      }
      else {
        iVar1 = param_1[1];
        iVar7 = *(int *)((long)param_1 + (long)iVar1 + 0x1890);
        *extraout_x8_02 = (uint)(9 < iVar7);
        if (iVar7 < 10) {
          return 0;
        }
        if (param_1[3] != 2) {
          return 0;
        }
        if (*(int *)((long)param_1 + (long)iVar1 + 0x54) != 0) {
          return 0;
        }
        iVar1 = *(int *)((long)param_1 + (long)iVar1 + 0x4058);
        bVar4 = SBORROW4(iVar1,9);
        iVar7 = iVar1 + -9;
        bVar5 = iVar1 == 9;
      }
      uVar9 = (uint)(!bVar5 && iVar7 < 0 == bVar4);
      puVar8 = extraout_x8_02;
      goto LAB_108b3902c;
    }
    break;
  default:
    if (param_2 == 0x271f) {
      func_0x000108b39364();
      if (extraout_x8_26 != 0) {
        if (lVar10 == 0) {
          _abort();
          iVar7 = param_4 * 0x28 + 0x14;
          uVar9 = ((param_2 + iVar7 * (200 - param_3)) * 3) / 0xc80;
          iVar1 = 0;
          if (param_3 != 0) {
            iVar1 = 48000 / param_3;
          }
          iVar2 = 0;
          if (iVar1 + 0xf0 != 0) {
            iVar2 = (((int)uVar6 * 8 + iVar7 * -2) * 0xf0) / (iVar1 + 0xf0);
          }
          uVar3 = (iVar2 + iVar7) / 8;
          if ((int)uVar3 <= (int)uVar9) {
            uVar9 = uVar3;
          }
          uVar3 = uVar9;
          if (0x100 < (int)uVar9) {
            uVar3 = 0x101;
          }
          if ((int)uVar9 <= (int)(param_4 << 3 | 4U)) {
            uVar3 = 0;
          }
          return (ulong)uVar3;
        }
        func_0x000108b3942c();
        goto LAB_108b38ff0;
      }
    }
    else {
      if (param_2 == 0x2728) {
        func_0x000108b3938c();
        param_1[0x2d] = *extraout_x8_24;
        if (uVar9 == 0x804) {
          return 0;
        }
        func_0x000108b3942c();
LAB_108b38ff0:
        FUN_108b46af8();
        return uVar6;
      }
      if (param_2 == 0x272a) {
        func_0x000108b39364();
        *(undefined8 *)(param_1 + 0xdee) = extraout_x8_25;
        if (uVar9 == 0x804) {
          return 0;
        }
        func_0x000108b3942c();
        goto LAB_108b38ff0;
      }
      if (param_2 == 0x2afa) {
        func_0x000108b39378();
        if ((extraout_w8_11 - 1000U < 3) || (extraout_w8_11 == -1000)) {
          param_1[0x23] = extraout_w8_11;
          return 0;
        }
      }
      else if (param_2 == 0x2b0a) {
        func_0x000108b39378();
        if (0xffffff99 < extraout_w8_12 - 0x65U) {
          param_1[0x24] = extraout_w8_12;
          return 0;
        }
      }
      else {
        if (param_2 != 0x2b0b) {
          return 0xfffffffb;
        }
        func_0x000108b39364();
        if (extraout_x8_00 != (uint *)0x0) {
          uVar9 = param_1[0x24];
          puVar8 = extraout_x8_00;
          goto LAB_108b3902c;
        }
      }
    }
  }
  uVar6 = 0xffffffff;
LAB_108b39070:
  return uVar6;
}



/* Entry: 108b390a4; end: 108b39537;  */

int FUN_108b390a4(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = param_4 * 0x28 + 0x14;
  iVar2 = ((param_2 + iVar1 * (200 - param_3)) * 3) / 0xc80;
  iVar3 = 0;
  if (param_3 != 0) {
    iVar3 = 48000 / param_3;
  }
  iVar4 = 0;
  if (iVar3 + 0xf0 != 0) {
    iVar4 = ((param_1 * 8 + iVar1 * -2) * 0xf0) / (iVar3 + 0xf0);
  }
  iVar1 = (iVar4 + iVar1) / 8;
  if (iVar1 <= iVar2) {
    iVar2 = iVar1;
  }
  iVar1 = iVar2;
  if (0x100 < iVar2) {
    iVar1 = 0x101;
  }
  if (iVar2 <= (int)(param_4 << 3 | 4U)) {
    iVar1 = 0;
  }
  return iVar1;
}



/* Entry: 108b39538; end: 108b39583;  */

void FUN_108b39538(long *param_1,uint *param_2,int param_3,uint param_4)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  long *plVar8;
  long *plVar9;
  int *piVar10;
  byte *pbVar11;
  ulong uVar12;
  long lVar13;
  long lStack_b8;
  long *plStack_b0;
  uint *puStack_a8;
  undefined1 ***pppuStack_a0;
  code *pcStack_98;
  int iStack_84;
  ulong uStack_80;
  byte *pbStack_78;
  long *plStack_70;
  uint *puStack_68;
  undefined1 **ppuStack_60;
  undefined8 uStack_58;
  int iStack_44;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  if ((-1 < param_3) && (((param_2 != (uint *)0x0 || (param_3 == 0)) && (param_4 < 0x31)))) {
    *param_1 = (long)param_2;
    param_1[1] = (long)param_2;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[2] = (long)param_2;
    *(int *)(param_1 + 5) = param_3;
    *(int *)((long)param_1 + 0x2c) = param_3;
    param_1[6] = 0;
    *(undefined4 *)(param_1 + 7) = 0;
    *(uint *)((long)param_1 + 0x3c) = param_4;
    *(uint *)(param_1 + 8) = param_4;
    *(undefined8 *)((long)param_1 + 0x44) = 0;
    *(undefined1 *)((long)param_1 + 0x4c) = 0;
    return;
  }
  _abort();
  pcStack_18 = FUN_108b39584;
  if (((*(int *)((long)param_1 + 0x2c) < 0) ||
      ((puStack_20 = &stack0xfffffffffffffff0, 0 < (int)param_1[9] &&
       (plVar8 = param_1, puStack_20 = &stack0xfffffffffffffff0, func_0x000108b3a174(),
       (int)plVar8 != 0)))) || ((int)param_1[8] <= *(int *)((long)param_1 + 0x44))) {
    return;
  }
LAB_108b395c8:
  do {
    plVar8 = (long *)(ulong)*(uint *)((long)param_1 + 0x2c);
    if ((int)*(uint *)((long)param_1 + 0x2c) < 1) {
      return;
    }
    pbVar11 = (byte *)param_1[1];
    bVar2 = *pbVar11;
    puVar6 = (uint *)(param_1 + 1);
    piVar10 = &iStack_44;
    FUN_108b3987c();
    iVar4 = (int)puVar6;
    *(int *)((long)param_1 + 0x2c) = iVar4;
    if (iVar4 < 0) {
      return;
    }
    lVar13 = param_1[1];
    if (lVar13 - *param_1 != (long)(int)param_1[5] - (long)iVar4) {
      _abort();
      uStack_58 = 0x108b3970c;
      uVar5 = puVar6[0x12];
      puVar7 = puVar6;
      plVar9 = plVar8;
      uStack_80 = (ulong)bVar2;
      pbStack_78 = pbVar11;
      plStack_70 = param_1;
      puStack_68 = param_2;
      ppuStack_60 = &puStack_20;
      if ((int)uVar5 < 1) {
LAB_108b39878:
        iVar4 = (int)plVar9;
        _abort();
        pcStack_98 = FUN_108b3987c;
        lStack_b8 = *(long *)puVar7 + 1;
        plVar8 = &lStack_b8;
        plStack_b0 = param_1;
        puStack_a8 = param_2;
        pppuStack_a0 = &ppuStack_60;
        func_0x000108b3a0c0(plVar8,iVar4 + -1);
        if (-1 < (int)plVar8) {
          *(long *)puVar7 = lStack_b8;
          *piVar10 = *piVar10 + 1;
        }
        return;
      }
      do {
        if ((int)puVar6[0xf] <= (int)uVar5) {
          *(long *)(puVar6 + 4) = *(long *)(puVar6 + 2);
          puVar6[6] = 0;
          puVar6[7] = 0;
          if (((char)puVar6[0x13] == '\0') &&
             (uVar5 = puVar6[0x11], puVar6[0x11] = uVar5 + 1, (int)puVar6[0xf] <= (int)(uVar5 + 1)))
          {
            puVar6[0xb] = 0;
          }
          puVar6[0x12] = 0;
          return;
        }
        while (plVar9 = (long *)(ulong)puVar6[0xd], 0 < (int)puVar6[0xd]) {
          bVar2 = **(byte **)(puVar6 + 8);
          uVar12 = (ulong)bVar2;
          puVar7 = puVar6 + 8;
          piVar10 = &iStack_84;
          FUN_108b3987c();
          puVar6[0xd] = (uint)puVar7;
          param_2 = puVar6;
          param_1 = plVar8;
          if ((int)(uint)puVar7 < 0) goto LAB_108b39878;
          if (3 < bVar2) {
            if (((char)puVar6[0x13] == '\0') && ((int)puVar6[0xf] <= (int)(puVar6[0x12] + 1))) {
              uVar5 = bVar2 & 0xfe;
              if (*(long *)(puVar6 + 8) != *(long *)(puVar6 + 6)) {
                uVar5 = (uint)bVar2;
              }
              uVar12 = (ulong)uVar5;
            }
            lVar13 = *(long *)(puVar6 + 2);
            plVar9 = (long *)(ulong)puVar6[0xb];
            puVar7 = puVar6 + 2;
            piVar10 = &iStack_84;
            func_0x000108b3a0c0(puVar7,plVar9,piVar10,uVar12,puVar6[0xe]);
            uVar5 = (uint)puVar7;
            puVar6[0xb] = uVar5;
            if ((int)uVar5 < 0) {
              return;
            }
            lVar1 = *(long *)(puVar6 + 2);
            if (lVar1 - *(long *)puVar6 != (long)(int)puVar6[10] - (long)(int)uVar5)
            goto LAB_108b39878;
            uVar5 = puVar6[0x12];
            if ((int)uVar5 < (int)puVar6[0x10]) {
              if (plVar8 != (long *)0x0) {
                *(int *)plVar8 = (int)(uVar12 >> 1);
                *(uint *)((long)plVar8 + 4) = uVar5;
                plVar8[1] = lVar13 + iStack_84;
                *(int *)(plVar8 + 2) = (int)lVar1 - ((int)lVar13 + iStack_84);
                return;
              }
              return;
            }
          }
        }
        *(long *)(puVar6 + 8) = *(long *)(puVar6 + 4);
        puVar6[0xd] = puVar6[0xc];
        uVar5 = puVar6[0x12] + 1;
        puVar6[0x12] = uVar5;
      } while( true );
    }
    uVar3 = (uint)(bVar2 >> 1);
    uVar5 = bVar2 & 1;
    if (uVar3 != 2) {
      if (uVar3 != 1) {
        if (5 < bVar2) {
          if (bVar2 < 0x40) {
            iVar4 = (int)param_1[7] + uVar5;
          }
          else {
            iVar4 = 0;
            param_1[3] = lVar13;
          }
          *(int *)(param_1 + 7) = iVar4;
          if (param_2 != (uint *)0x0) {
            uVar5 = *(uint *)((long)param_1 + 0x44);
            *param_2 = uVar3;
            param_2[1] = uVar5;
            *(byte **)(param_2 + 2) = pbVar11 + iStack_44;
            param_2[4] = (int)lVar13 - ((int)pbVar11 + iStack_44);
            return;
          }
          return;
        }
        goto LAB_108b395c8;
      }
      if ((bVar2 & 1) == 0) {
        uVar5 = 1;
      }
      else {
        uVar5 = (uint)pbVar11[1];
        if (pbVar11[1] == 0) goto LAB_108b395c8;
      }
      iVar4 = *(int *)((long)param_1 + 0x44) + uVar5;
      *(int *)((long)param_1 + 0x44) = iVar4;
      if (*(int *)((long)param_1 + 0x3c) <= iVar4) {
        *(undefined4 *)((long)param_1 + 0x2c) = 0xffffffff;
        return;
      }
      if ((int)param_1[8] <= iVar4) {
        *(undefined4 *)((long)param_1 + 0x2c) = 0;
      }
      param_1[2] = lVar13;
      param_1[3] = 0;
      *(undefined4 *)(param_1 + 7) = 0;
      goto LAB_108b395c8;
    }
    *(char *)((long)param_1 + 0x4c) = (char)uVar5;
    *(int *)(param_1 + 9) = *(int *)((long)param_1 + 0x44) + 1;
    iVar4 = (int)pbVar11 - (int)param_1[2];
    param_1[4] = param_1[2];
    *(int *)(param_1 + 6) = iVar4;
    *(int *)((long)param_1 + 0x34) = iVar4;
    func_0x000108b3a174();
    if ((int)puVar6 != 0) {
      return;
    }
  } while( true );
}



/* Entry: 108b39584; end: 108b3987b;  */

void FUN_108b39584(long *param_1,uint *param_2)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  long *plVar8;
  long *plVar9;
  int *piVar10;
  byte *pbVar11;
  ulong uVar12;
  long lVar13;
  long lStack_a8;
  long *plStack_a0;
  uint *puStack_98;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  int iStack_74;
  ulong uStack_70;
  byte *pbStack_68;
  long *plStack_60;
  uint *puStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  int iStack_34;
  
  if ((*(int *)((long)param_1 + 0x2c) < 0) ||
     (((0 < (int)param_1[9] && (plVar8 = param_1, func_0x000108b3a174(), (int)plVar8 != 0)) ||
      ((int)param_1[8] <= *(int *)((long)param_1 + 0x44))))) {
    return;
  }
LAB_108b395c8:
  do {
    plVar8 = (long *)(ulong)*(uint *)((long)param_1 + 0x2c);
    if ((int)*(uint *)((long)param_1 + 0x2c) < 1) {
      return;
    }
    pbVar11 = (byte *)param_1[1];
    bVar2 = *pbVar11;
    puVar6 = (uint *)(param_1 + 1);
    piVar10 = &iStack_34;
    FUN_108b3987c();
    iVar4 = (int)puVar6;
    *(int *)((long)param_1 + 0x2c) = iVar4;
    if (iVar4 < 0) {
      return;
    }
    lVar13 = param_1[1];
    if (lVar13 - *param_1 != (long)(int)param_1[5] - (long)iVar4) {
      _abort();
      uStack_48 = 0x108b3970c;
      uVar5 = puVar6[0x12];
      puVar7 = puVar6;
      plVar9 = plVar8;
      uStack_70 = (ulong)bVar2;
      pbStack_68 = pbVar11;
      plStack_60 = param_1;
      puStack_58 = param_2;
      puStack_50 = &stack0xfffffffffffffff0;
      if ((int)uVar5 < 1) {
LAB_108b39878:
        iVar4 = (int)plVar9;
        _abort();
        pcStack_88 = FUN_108b3987c;
        lStack_a8 = *(long *)puVar7 + 1;
        plVar8 = &lStack_a8;
        plStack_a0 = param_1;
        puStack_98 = param_2;
        ppuStack_90 = &puStack_50;
        func_0x000108b3a0c0(plVar8,iVar4 + -1);
        if (-1 < (int)plVar8) {
          *(long *)puVar7 = lStack_a8;
          *piVar10 = *piVar10 + 1;
        }
        return;
      }
      do {
        if ((int)puVar6[0xf] <= (int)uVar5) {
          *(long *)(puVar6 + 4) = *(long *)(puVar6 + 2);
          puVar6[6] = 0;
          puVar6[7] = 0;
          if (((char)puVar6[0x13] == '\0') &&
             (uVar5 = puVar6[0x11], puVar6[0x11] = uVar5 + 1, (int)puVar6[0xf] <= (int)(uVar5 + 1)))
          {
            puVar6[0xb] = 0;
          }
          puVar6[0x12] = 0;
          return;
        }
        while (plVar9 = (long *)(ulong)puVar6[0xd], 0 < (int)puVar6[0xd]) {
          bVar2 = **(byte **)(puVar6 + 8);
          uVar12 = (ulong)bVar2;
          puVar7 = puVar6 + 8;
          piVar10 = &iStack_74;
          FUN_108b3987c();
          puVar6[0xd] = (uint)puVar7;
          param_2 = puVar6;
          param_1 = plVar8;
          if ((int)(uint)puVar7 < 0) goto LAB_108b39878;
          if (3 < bVar2) {
            if (((char)puVar6[0x13] == '\0') && ((int)puVar6[0xf] <= (int)(puVar6[0x12] + 1))) {
              uVar5 = bVar2 & 0xfe;
              if (*(long *)(puVar6 + 8) != *(long *)(puVar6 + 6)) {
                uVar5 = (uint)bVar2;
              }
              uVar12 = (ulong)uVar5;
            }
            lVar13 = *(long *)(puVar6 + 2);
            plVar9 = (long *)(ulong)puVar6[0xb];
            puVar7 = puVar6 + 2;
            piVar10 = &iStack_74;
            func_0x000108b3a0c0(puVar7,plVar9,piVar10,uVar12,puVar6[0xe]);
            uVar5 = (uint)puVar7;
            puVar6[0xb] = uVar5;
            if ((int)uVar5 < 0) {
              return;
            }
            lVar1 = *(long *)(puVar6 + 2);
            if (lVar1 - *(long *)puVar6 != (long)(int)puVar6[10] - (long)(int)uVar5)
            goto LAB_108b39878;
            uVar5 = puVar6[0x12];
            if ((int)uVar5 < (int)puVar6[0x10]) {
              if (plVar8 != (long *)0x0) {
                *(int *)plVar8 = (int)(uVar12 >> 1);
                *(uint *)((long)plVar8 + 4) = uVar5;
                plVar8[1] = lVar13 + iStack_74;
                *(int *)(plVar8 + 2) = (int)lVar1 - ((int)lVar13 + iStack_74);
                return;
              }
              return;
            }
          }
        }
        *(long *)(puVar6 + 8) = *(long *)(puVar6 + 4);
        puVar6[0xd] = puVar6[0xc];
        uVar5 = puVar6[0x12] + 1;
        puVar6[0x12] = uVar5;
      } while( true );
    }
    uVar3 = (uint)(bVar2 >> 1);
    uVar5 = bVar2 & 1;
    if (uVar3 != 2) {
      if (uVar3 != 1) {
        if (5 < bVar2) {
          if (bVar2 < 0x40) {
            iVar4 = (int)param_1[7] + uVar5;
          }
          else {
            iVar4 = 0;
            param_1[3] = lVar13;
          }
          *(int *)(param_1 + 7) = iVar4;
          if (param_2 != (uint *)0x0) {
            uVar5 = *(uint *)((long)param_1 + 0x44);
            *param_2 = uVar3;
            param_2[1] = uVar5;
            *(byte **)(param_2 + 2) = pbVar11 + iStack_34;
            param_2[4] = (int)lVar13 - ((int)pbVar11 + iStack_34);
            return;
          }
          return;
        }
        goto LAB_108b395c8;
      }
      if ((bVar2 & 1) == 0) {
        uVar5 = 1;
      }
      else {
        uVar5 = (uint)pbVar11[1];
        if (pbVar11[1] == 0) goto LAB_108b395c8;
      }
      iVar4 = *(int *)((long)param_1 + 0x44) + uVar5;
      *(int *)((long)param_1 + 0x44) = iVar4;
      if (*(int *)((long)param_1 + 0x3c) <= iVar4) {
        *(undefined4 *)((long)param_1 + 0x2c) = 0xffffffff;
        return;
      }
      if ((int)param_1[8] <= iVar4) {
        *(undefined4 *)((long)param_1 + 0x2c) = 0;
      }
      param_1[2] = lVar13;
      param_1[3] = 0;
      *(undefined4 *)(param_1 + 7) = 0;
      goto LAB_108b395c8;
    }
    *(char *)((long)param_1 + 0x4c) = (char)uVar5;
    *(int *)(param_1 + 9) = *(int *)((long)param_1 + 0x44) + 1;
    iVar4 = (int)pbVar11 - (int)param_1[2];
    param_1[4] = param_1[2];
    *(int *)(param_1 + 6) = iVar4;
    *(int *)((long)param_1 + 0x34) = iVar4;
    func_0x000108b3a174();
    if ((int)puVar6 != 0) {
      return;
    }
  } while( true );
}



/* Entry: 108b3987c; end: 108b3992b;  */

void FUN_108b3987c(undefined8 *param_1,int param_2,int *param_3)

{
  undefined1 **ppuVar1;
  undefined1 *puStack_28;
  
  puStack_28 = (undefined1 *)*param_1 + 1;
  ppuVar1 = &puStack_28;
  FUN_108b3a0c0(ppuVar1,param_2 + -1,param_3,*(undefined1 *)*param_1,0);
  if (-1 < (int)ppuVar1) {
    *param_1 = puStack_28;
    *param_3 = *param_3 + 1;
  }
  return;
}



/* Entry: 108b3992c; end: 108b399cf;  */

uint * FUN_108b3992c(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,
                    int param_6)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 uVar17;
  byte *pbVar18;
  byte *pbVar19;
  char cVar20;
  uint uVar21;
  uint *puVar22;
  long lVar23;
  long lVar24;
  uint *puVar25;
  uint uVar26;
  uint *puVar27;
  ulong uVar28;
  uint *puVar29;
  long lVar30;
  ulong uVar31;
  int iVar32;
  uint *puVar33;
  uint uVar34;
  uint *puVar35;
  ulong uVar36;
  uint uVar37;
  ulong uVar38;
  uint *puVar39;
  int iVar40;
  uint uStack_36c;
  uint auStack_350 [48];
  uint auStack_290 [48];
  uint auStack_1d0 [48];
  long lStack_110;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  uint auStack_80 [20];
  
  puVar8 = param_2;
  puVar13 = param_3;
  if ((param_4 != (uint *)0x0) &&
     ((param_3 != (uint *)0x0 || (puVar8 = param_1, puVar13 = param_2, *param_4 == 0)))) {
    FUN_108b39538(auStack_80,param_1,param_2,param_5);
    uVar36 = 0;
    while( true ) {
      puVar8 = auStack_80;
      FUN_108b39584(puVar8,&lStack_98);
      if ((int)puVar8 < 1) {
        *param_4 = (uint)uVar36;
        return puVar8;
      }
      if (uVar36 == *param_4) break;
      *(long *)(param_3 + 2) = lStack_90;
      *(long *)param_3 = lStack_98;
      *(long *)(param_3 + 4) = lStack_88;
      uVar36 = uVar36 + 1;
      param_3 = param_3 + 6;
    }
    return (uint *)0xfffffffe;
  }
  _abort();
  lStack_110 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = (uint)puVar8;
  puVar9 = param_1;
  puVar11 = puVar8;
  puVar33 = puVar13;
  puVar14 = param_4;
  puVar12 = param_5;
  if ((int)uVar10 < 0) {
LAB_108b39f9c:
    _abort();
  }
  else {
    uVar16 = (uint)param_5;
    if ((int)uVar16 < 0x31) {
      uVar34 = (uint)param_4;
      uVar38 = (ulong)(uVar16 & ((int)uVar16 >> 0x1f ^ 0xffffffffU));
      puVar9 = auStack_1d0;
      for (uVar36 = uVar38; uVar36 != 0; uVar36 = uVar36 - 1) {
        *puVar9 = uVar34;
        puVar9 = puVar9 + 1;
      }
      puVar33 = (uint *)(-((ulong)param_5 >> 0x1f & 1) & 0xfffffffc00000000 |
                        ((ulong)param_5 & 0xffffffff) << 2);
      puVar9 = auStack_290;
      puVar11 = (uint *)0x0;
      puVar14 = (uint *)0xc0;
      ___memset_chk();
      uVar36 = 0;
      puVar22 = puVar13 + 1;
      puVar39 = (uint *)0xffffffff;
      while ((uVar34 & ((int)uVar34 >> 0x1f ^ 0xffffffffU)) != uVar36) {
        uVar21 = *puVar22;
        puVar27 = puVar39;
        if (((int)uVar21 < 0) || ((int)uVar16 <= (int)uVar21)) goto LAB_108b39a18;
        if (puVar22[-1] - 0x80 < 0xffffff83) goto LAB_108b39a14;
        uVar3 = auStack_1d0[uVar21];
        if ((int)(uint)uVar36 <= (int)auStack_1d0[uVar21]) {
          uVar3 = (uint)uVar36;
        }
        auStack_1d0[uVar21] = uVar3;
        uVar36 = uVar36 + 1;
        uVar3 = auStack_290[uVar21];
        if ((int)auStack_290[uVar21] <= (int)(uint)uVar36) {
          uVar3 = (uint)uVar36;
        }
        auStack_290[uVar21] = uVar3;
        puVar22 = puVar22 + 6;
      }
      puVar14 = auStack_1d0;
      puVar12 = auStack_350;
      for (uVar36 = uVar38; uVar36 != 0; uVar36 = uVar36 - 1) {
        *puVar12 = *puVar14;
        puVar14 = puVar14 + 1;
        puVar12 = puVar12 + 1;
      }
      puVar33 = (uint *)0x0;
      iVar40 = 0;
      uStack_36c = 0;
      puVar22 = puVar13 + 7;
      puVar15 = (uint *)0x1;
      puVar35 = param_4;
      uVar36 = 0;
      while (puVar12 = auStack_290, puVar11 = puVar22, puVar14 = puVar15, uVar36 != uVar38) {
        lVar24 = (long)(int)auStack_1d0[uVar36];
        iVar32 = (int)(uVar36 + 1);
        iVar5 = uVar16 - iVar32;
        if (iVar5 == 0 || (int)uVar16 < iVar32) {
          iVar32 = 0;
          uVar21 = 0xffffffff;
        }
        else {
          iVar32 = 0;
          uVar3 = puVar12[uVar36];
          uVar21 = 0xffffffff;
          for (lVar23 = lVar24; lVar23 < (int)uVar3; lVar23 = lVar23 + 1) {
            puVar25 = puVar13 + lVar23 * 6;
            puVar27 = puVar15;
            if (uVar36 == puVar25[1]) {
              for (; (uint *)((ulong)param_5 & 0xffffffff) != puVar27;
                  puVar27 = (uint *)((long)puVar27 + 1)) {
                if ((int)puVar12[(long)puVar27] <= (int)auStack_350[(long)puVar27])
                goto LAB_108b39cac;
                puVar29 = puVar13 + (long)(int)auStack_350[(long)puVar27] * 6;
                puVar9 = param_1;
                if (puVar27 != (uint *)(ulong)puVar29[1]) goto LAB_108b39f9c;
                if ((*puVar29 != *puVar25) || (((int)*puVar29 < 0x20 && (puVar29[4] != puVar25[4])))
                   ) goto LAB_108b39cac;
              }
              puVar9 = puVar15;
              if (0x1f < (int)*puVar25) {
                uVar21 = auStack_350[(long)(int)uVar16 + -1];
              }
              for (; puVar9 != (uint *)((ulong)param_5 & 0xffffffff);
                  puVar9 = (uint *)((long)puVar9 + 1)) {
                uVar26 = auStack_350[(long)puVar9];
                uVar28 = (ulong)(int)uVar26;
                uVar37 = puVar12[(long)puVar9];
                lVar30 = (long)(int)uVar37;
                if ((int)uVar37 <= (int)(uVar26 + 1)) {
                  uVar37 = uVar26 + 1;
                }
                puVar27 = puVar22 + (long)(int)uVar26 * 6;
                uVar31 = uVar28;
                do {
                  uVar31 = uVar31 + 1;
                  uVar26 = uVar37;
                  if (lVar30 <= (long)uVar31) break;
                  uVar1 = *puVar27;
                  uVar26 = (int)uVar28 + 1;
                  uVar28 = (ulong)uVar26;
                  puVar27 = puVar27 + 6;
                } while (puVar9 != (uint *)(ulong)uVar1);
                auStack_350[(long)puVar9] = uVar26;
              }
              iVar32 = iVar32 + 1;
              auStack_350[uVar36] = (uint)lVar23;
            }
          }
        }
LAB_108b39cac:
        for (; uVar3 = auStack_290[uVar36], puVar9 = param_1, lVar24 < (int)uVar3;
            lVar24 = lVar24 + 1) {
          puVar14 = puVar13 + lVar24 * 6;
          puVar9 = puVar33;
          if (uVar36 != puVar14[1]) goto LAB_108b39ed4;
          if (uVar36 != uStack_36c) {
            iVar7 = (int)puVar33;
            if (1 < (int)(uVar10 - iVar7)) {
              iVar4 = (uint)uVar36 - uStack_36c;
              if (iVar4 == 1) {
                if (param_1 != (uint *)0x0) {
                  *(undefined1 *)((long)param_1 + (long)iVar7) = 2;
                }
                uVar37 = iVar7 + 1;
              }
              else {
                if (param_1 != (uint *)0x0) {
                  *(undefined1 *)((long)param_1 + (long)iVar7) = 3;
                  *(char *)((long)param_1 + (long)iVar7 + 1) = (char)iVar4;
                }
                uVar37 = iVar7 + 2;
              }
              puVar33 = (uint *)(ulong)uVar37;
              uStack_36c = (uint)uVar36;
              goto LAB_108b39d50;
            }
LAB_108b39f20:
            puVar9 = param_1;
            puVar27 = (uint *)0xfffffffe;
            goto LAB_108b39a18;
          }
LAB_108b39d50:
          bVar6 = iVar40 == uVar34 - 1;
          puVar12 = (uint *)(ulong)bVar6;
          iVar7 = (int)puVar33;
          if ((int)uVar10 <= iVar7) goto LAB_108b39f20;
          uVar37 = *puVar14;
          puVar9 = param_1;
          if (0x7c < uVar37 - 3) goto LAB_108b39f9c;
          if (param_1 != (uint *)0x0) {
            if (uVar37 < 0x20) {
              cVar20 = (char)puVar14[4];
            }
            else {
              cVar20 = !bVar6;
            }
            *(char *)((long)param_1 + (long)iVar7) = cVar20 + (char)uVar37 * '\x02';
          }
          puVar11 = (uint *)((ulong)puVar8 & 0xffffffff);
          FUN_108b39fa4(param_1,puVar11,iVar7 + 1);
          iVar7 = (int)puVar9;
          puVar33 = puVar9;
          puVar27 = puVar9;
          if (iVar7 < 0) goto LAB_108b39a18;
          iVar40 = iVar40 + 1;
          if ((0 < iVar32) && (auStack_350[uVar36] == (uint)lVar24)) {
            bVar6 = iVar40 + iVar32 * iVar5 == (int)puVar35;
            uVar37 = (uint)bVar6;
            if ((!bVar6) && ((int)uVar21 < 0)) {
              uVar37 = (uint)((long)(int)auStack_290[uVar36] <= lVar24 + 1);
            }
            if ((int)uVar10 <= iVar7) goto LAB_108b39f20;
            if (param_1 != (uint *)0x0) {
              uVar17 = 4;
              if (uVar37 == 0) {
                uVar17 = 5;
              }
              *(undefined1 *)((long)param_1 + ((ulong)puVar9 & 0xffffffff)) = uVar17;
            }
            puVar33 = (uint *)(ulong)(iVar7 + 1);
            for (puVar9 = puVar15; (int)puVar9 < (int)uVar16; puVar9 = (uint *)((long)puVar9 + 1)) {
              uVar26 = auStack_350[(long)puVar9];
              puVar14 = puVar13 + (long)(int)auStack_1d0[(long)puVar9] * 6;
              for (lVar23 = (long)(int)auStack_1d0[(long)puVar9]; lVar23 < (int)uVar26;
                  lVar23 = lVar23 + 1) {
                if (puVar9 == (uint *)(ulong)puVar14[1]) {
                  uVar1 = 0;
                  if ((int)uVar21 == lVar23) {
                    uVar1 = uVar37;
                  }
                  puVar12 = (uint *)(ulong)uVar1;
                  puVar11 = (uint *)((ulong)puVar8 & 0xffffffff);
                  puVar33 = param_1;
                  FUN_108b39fa4();
                  if ((int)puVar33 < 0) {
                    puVar35 = (uint *)((ulong)param_4 & 0xffffffff);
                    puVar9 = puVar33;
                    puVar39 = puVar33;
                    goto LAB_108b39ef8;
                  }
                  iVar40 = iVar40 + 1;
                }
                puVar14 = puVar14 + 6;
              }
              auStack_1d0[(long)puVar9] = (uint)lVar23;
            }
            uStack_36c = uStack_36c + uVar37;
            puVar35 = (uint *)((ulong)param_4 & 0xffffffff);
            puVar9 = puVar33;
          }
LAB_108b39ed4:
          puVar33 = puVar9;
        }
LAB_108b39ef8:
        puVar14 = (uint *)((long)puVar15 + 1);
        puVar12 = auStack_290;
        puVar11 = puVar22;
        puVar15 = puVar14;
        puVar27 = puVar39;
        uVar36 = uVar36 + 1;
        if (lVar24 < (int)uVar3) goto LAB_108b39a18;
      }
      if (iVar40 != (int)puVar35) goto LAB_108b39f9c;
      uVar34 = (uint)puVar33;
      uVar16 = uVar34;
      if (param_6 != 0 && (int)uVar34 < (int)uVar10) {
        uVar16 = uVar10;
      }
      puVar27 = (uint *)(ulong)uVar16;
      if ((param_1 != (uint *)0x0) && (param_6 != 0 && (int)uVar34 < (int)uVar10)) {
        uVar10 = uVar10 - uVar34;
        puVar9 = (uint *)((long)param_1 + (long)(int)uVar10);
        puVar33 = (uint *)(long)(int)uVar34;
        puVar11 = param_1;
        _memmove();
        for (uVar36 = (ulong)(uVar10 & ((int)uVar10 >> 0x1f ^ 0xffffffffU)); uVar36 != 0;
            uVar36 = uVar36 - 1) {
          *(undefined1 *)param_1 = 1;
          param_1 = (uint *)((long)param_1 + 1);
        }
        puVar14 = puVar15;
        puVar27 = (uint *)((ulong)puVar8 & 0xffffffff);
      }
    }
    else {
LAB_108b39a14:
      puVar27 = (uint *)0xffffffff;
    }
LAB_108b39a18:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_110) {
      return puVar27;
    }
  }
  ___stack_chk_fail();
  if (*puVar14 - 3 < 0x7d) {
    uVar16 = puVar14[4];
    uVar10 = (uint)puVar33;
    if (*puVar14 < 0x20) {
      if (1 < uVar16) {
        return (uint *)0xffffffff;
      }
      if (uVar16 == 0) {
        return puVar33;
      }
      if ((int)uVar10 < (int)puVar11) {
        if (puVar9 != (uint *)0x0) {
          *(undefined1 *)((long)puVar9 + (long)(int)uVar10) = **(undefined1 **)(puVar14 + 2);
        }
        return (uint *)(ulong)(uVar10 + 1);
      }
    }
    else {
      if ((int)uVar16 < 0) {
        return (uint *)0xffffffff;
      }
      iVar40 = 0;
      if ((int)puVar12 == 0) {
        iVar40 = uVar16 / 0xff + 1;
      }
      if ((int)(iVar40 + uVar16) <= (int)((int)puVar11 - uVar10)) {
        if ((int)puVar12 == 0) {
          lVar23 = 0;
          lVar30 = (long)puVar33 << 0x20;
          lVar24 = (long)(int)uVar10;
          while( true ) {
            uVar10 = uVar10 + 1;
            puVar33 = (uint *)(ulong)uVar10;
            if ((int)uVar16 / 0xff <= (int)lVar23) break;
            if (puVar9 != (uint *)0x0) {
              *(undefined1 *)((long)puVar9 + lVar23 + lVar24) = 0xff;
              uVar16 = puVar14[4];
            }
            lVar30 = lVar30 + 0x100000000;
            lVar23 = lVar23 + 1;
          }
          if (puVar9 != (uint *)0x0) {
            *(char *)((long)puVar9 + (lVar30 >> 0x20)) = (char)uVar16 + (char)((int)uVar16 / 0xff);
            uVar16 = puVar14[4];
          }
        }
        if (puVar9 != (uint *)0x0) {
          _memcpy((undefined1 *)((long)puVar9 + (long)(int)puVar33),*(undefined8 *)(puVar14 + 2),
                  (long)(int)uVar16);
          uVar16 = puVar14[4];
        }
        return (uint *)(ulong)(uVar16 + (int)puVar33);
      }
    }
    return (uint *)0xfffffffe;
  }
  _abort();
  pbVar18 = *(byte **)puVar9;
  uVar10 = (uint)puVar14;
  if (uVar10 == 1 || (uVar10 & 0xfe) == 4) {
    uVar10 = 0;
    puVar12 = puVar11;
LAB_108b3a14c:
    *(byte **)puVar9 = pbVar18;
    *puVar33 = uVar10;
  }
  else {
    uVar16 = uVar10 & 1;
    iVar40 = (int)puVar11;
    if (uVar10 - 2 < 0x3e) {
      puVar11 = (uint *)(ulong)(iVar40 - uVar16);
      if ((int)uVar16 <= iVar40) {
        uVar10 = 0;
LAB_108b3a148:
        pbVar18 = pbVar18 + uVar16;
        puVar12 = puVar11;
        goto LAB_108b3a14c;
      }
    }
    else if (((ulong)puVar14 & 1) == 0) {
      if ((int)puVar12 <= iVar40) {
        uVar10 = 0;
        pbVar18 = pbVar18 + (uint)(iVar40 - (int)puVar12);
        goto LAB_108b3a14c;
      }
    }
    else {
      uVar10 = 0;
      uVar16 = 0;
      pbVar19 = pbVar18;
      do {
        if ((int)puVar11 < 1) goto LAB_108b3a158;
        pbVar18 = pbVar19 + 1;
        bVar2 = *pbVar19;
        uVar16 = uVar16 + bVar2;
        uVar10 = uVar10 + 1;
        uVar34 = (int)puVar11 + ~(uint)bVar2;
        puVar11 = (uint *)(ulong)uVar34;
        pbVar19 = pbVar18;
      } while (bVar2 == 0xff);
      if (-1 < (int)uVar34) goto LAB_108b3a148;
    }
LAB_108b3a158:
    puVar12 = (uint *)0xffffffff;
  }
  return puVar12;
}



/* Entry: 108b399d0; end: 108b39fa3;  */

uint * FUN_108b399d0(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,
                    int param_6)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  undefined1 uVar15;
  byte *pbVar16;
  byte *pbVar17;
  char cVar18;
  uint uVar19;
  ulong uVar20;
  uint *puVar21;
  long lVar22;
  long lVar23;
  uint *puVar24;
  uint uVar25;
  uint *puVar26;
  ulong uVar27;
  uint *puVar28;
  long lVar29;
  ulong uVar30;
  int iVar31;
  uint *puVar32;
  uint uVar33;
  uint *puVar34;
  uint uVar35;
  ulong uVar36;
  uint *puVar37;
  int iVar38;
  uint uStack_2cc;
  uint auStack_2b0 [48];
  uint auStack_1f0 [48];
  uint auStack_130 [48];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar9 = (uint)param_2;
  puVar8 = param_1;
  puVar10 = param_2;
  puVar32 = param_3;
  puVar12 = param_4;
  puVar11 = param_5;
  if ((int)uVar9 < 0) {
LAB_108b39f9c:
    _abort();
  }
  else {
    uVar14 = (uint)param_5;
    if ((int)uVar14 < 0x31) {
      uVar33 = (uint)param_4;
      uVar36 = (ulong)(uVar14 & ((int)uVar14 >> 0x1f ^ 0xffffffffU));
      puVar8 = auStack_130;
      for (uVar20 = uVar36; uVar20 != 0; uVar20 = uVar20 - 1) {
        *puVar8 = uVar33;
        puVar8 = puVar8 + 1;
      }
      puVar32 = (uint *)(-((ulong)param_5 >> 0x1f & 1) & 0xfffffffc00000000 |
                        ((ulong)param_5 & 0xffffffff) << 2);
      puVar8 = auStack_1f0;
      puVar10 = (uint *)0x0;
      puVar12 = (uint *)0xc0;
      ___memset_chk();
      uVar20 = 0;
      puVar21 = param_3 + 1;
      puVar37 = (uint *)0xffffffff;
      while ((uVar33 & ((int)uVar33 >> 0x1f ^ 0xffffffffU)) != uVar20) {
        uVar19 = *puVar21;
        puVar26 = puVar37;
        if (((int)uVar19 < 0) || ((int)uVar14 <= (int)uVar19)) goto LAB_108b39a18;
        if (puVar21[-1] - 0x80 < 0xffffff83) goto LAB_108b39a14;
        uVar3 = auStack_130[uVar19];
        if ((int)(uint)uVar20 <= (int)auStack_130[uVar19]) {
          uVar3 = (uint)uVar20;
        }
        auStack_130[uVar19] = uVar3;
        uVar20 = uVar20 + 1;
        uVar3 = auStack_1f0[uVar19];
        if ((int)auStack_1f0[uVar19] <= (int)(uint)uVar20) {
          uVar3 = (uint)uVar20;
        }
        auStack_1f0[uVar19] = uVar3;
        puVar21 = puVar21 + 6;
      }
      puVar12 = auStack_130;
      puVar11 = auStack_2b0;
      for (uVar20 = uVar36; uVar20 != 0; uVar20 = uVar20 - 1) {
        *puVar11 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar11 = puVar11 + 1;
      }
      puVar32 = (uint *)0x0;
      iVar38 = 0;
      uStack_2cc = 0;
      puVar21 = param_3 + 7;
      puVar13 = (uint *)0x1;
      puVar34 = param_4;
      uVar20 = 0;
      while (puVar11 = auStack_1f0, puVar10 = puVar21, puVar12 = puVar13, uVar20 != uVar36) {
        lVar23 = (long)(int)auStack_130[uVar20];
        iVar31 = (int)(uVar20 + 1);
        iVar5 = uVar14 - iVar31;
        if (iVar5 == 0 || (int)uVar14 < iVar31) {
          iVar31 = 0;
          uVar19 = 0xffffffff;
        }
        else {
          iVar31 = 0;
          uVar3 = puVar11[uVar20];
          uVar19 = 0xffffffff;
          for (lVar22 = lVar23; lVar22 < (int)uVar3; lVar22 = lVar22 + 1) {
            puVar24 = param_3 + lVar22 * 6;
            puVar26 = puVar13;
            if (uVar20 == puVar24[1]) {
              for (; (uint *)((ulong)param_5 & 0xffffffff) != puVar26;
                  puVar26 = (uint *)((long)puVar26 + 1)) {
                if ((int)puVar11[(long)puVar26] <= (int)auStack_2b0[(long)puVar26])
                goto LAB_108b39cac;
                puVar28 = param_3 + (long)(int)auStack_2b0[(long)puVar26] * 6;
                puVar8 = param_1;
                if (puVar26 != (uint *)(ulong)puVar28[1]) goto LAB_108b39f9c;
                if ((*puVar28 != *puVar24) || (((int)*puVar28 < 0x20 && (puVar28[4] != puVar24[4])))
                   ) goto LAB_108b39cac;
              }
              puVar8 = puVar13;
              if (0x1f < (int)*puVar24) {
                uVar19 = auStack_2b0[(long)(int)uVar14 + -1];
              }
              for (; puVar8 != (uint *)((ulong)param_5 & 0xffffffff);
                  puVar8 = (uint *)((long)puVar8 + 1)) {
                uVar25 = auStack_2b0[(long)puVar8];
                uVar27 = (ulong)(int)uVar25;
                uVar35 = puVar11[(long)puVar8];
                lVar29 = (long)(int)uVar35;
                if ((int)uVar35 <= (int)(uVar25 + 1)) {
                  uVar35 = uVar25 + 1;
                }
                puVar26 = puVar21 + (long)(int)uVar25 * 6;
                uVar30 = uVar27;
                do {
                  uVar30 = uVar30 + 1;
                  uVar25 = uVar35;
                  if (lVar29 <= (long)uVar30) break;
                  uVar1 = *puVar26;
                  uVar25 = (int)uVar27 + 1;
                  uVar27 = (ulong)uVar25;
                  puVar26 = puVar26 + 6;
                } while (puVar8 != (uint *)(ulong)uVar1);
                auStack_2b0[(long)puVar8] = uVar25;
              }
              iVar31 = iVar31 + 1;
              auStack_2b0[uVar20] = (uint)lVar22;
            }
          }
        }
LAB_108b39cac:
        for (; uVar3 = auStack_1f0[uVar20], puVar8 = param_1, lVar23 < (int)uVar3;
            lVar23 = lVar23 + 1) {
          puVar12 = param_3 + lVar23 * 6;
          puVar8 = puVar32;
          if (uVar20 != puVar12[1]) goto LAB_108b39ed4;
          if (uVar20 != uStack_2cc) {
            iVar7 = (int)puVar32;
            if (1 < (int)(uVar9 - iVar7)) {
              iVar4 = (uint)uVar20 - uStack_2cc;
              if (iVar4 == 1) {
                if (param_1 != (uint *)0x0) {
                  *(undefined1 *)((long)param_1 + (long)iVar7) = 2;
                }
                uVar35 = iVar7 + 1;
              }
              else {
                if (param_1 != (uint *)0x0) {
                  *(undefined1 *)((long)param_1 + (long)iVar7) = 3;
                  *(char *)((long)param_1 + (long)iVar7 + 1) = (char)iVar4;
                }
                uVar35 = iVar7 + 2;
              }
              puVar32 = (uint *)(ulong)uVar35;
              uStack_2cc = (uint)uVar20;
              goto LAB_108b39d50;
            }
LAB_108b39f20:
            puVar8 = param_1;
            puVar26 = (uint *)0xfffffffe;
            goto LAB_108b39a18;
          }
LAB_108b39d50:
          bVar6 = iVar38 == uVar33 - 1;
          puVar11 = (uint *)(ulong)bVar6;
          iVar7 = (int)puVar32;
          if ((int)uVar9 <= iVar7) goto LAB_108b39f20;
          uVar35 = *puVar12;
          puVar8 = param_1;
          if (0x7c < uVar35 - 3) goto LAB_108b39f9c;
          if (param_1 != (uint *)0x0) {
            if (uVar35 < 0x20) {
              cVar18 = (char)puVar12[4];
            }
            else {
              cVar18 = !bVar6;
            }
            *(char *)((long)param_1 + (long)iVar7) = cVar18 + (char)uVar35 * '\x02';
          }
          puVar10 = (uint *)((ulong)param_2 & 0xffffffff);
          FUN_108b39fa4(param_1,puVar10,iVar7 + 1);
          iVar7 = (int)puVar8;
          puVar32 = puVar8;
          puVar26 = puVar8;
          if (iVar7 < 0) goto LAB_108b39a18;
          iVar38 = iVar38 + 1;
          if ((0 < iVar31) && (auStack_2b0[uVar20] == (uint)lVar23)) {
            bVar6 = iVar38 + iVar31 * iVar5 == (int)puVar34;
            uVar35 = (uint)bVar6;
            if ((!bVar6) && ((int)uVar19 < 0)) {
              uVar35 = (uint)((long)(int)auStack_1f0[uVar20] <= lVar23 + 1);
            }
            if ((int)uVar9 <= iVar7) goto LAB_108b39f20;
            if (param_1 != (uint *)0x0) {
              uVar15 = 4;
              if (uVar35 == 0) {
                uVar15 = 5;
              }
              *(undefined1 *)((long)param_1 + ((ulong)puVar8 & 0xffffffff)) = uVar15;
            }
            puVar32 = (uint *)(ulong)(iVar7 + 1);
            for (puVar8 = puVar13; (int)puVar8 < (int)uVar14; puVar8 = (uint *)((long)puVar8 + 1)) {
              uVar25 = auStack_2b0[(long)puVar8];
              puVar12 = param_3 + (long)(int)auStack_130[(long)puVar8] * 6;
              for (lVar22 = (long)(int)auStack_130[(long)puVar8]; lVar22 < (int)uVar25;
                  lVar22 = lVar22 + 1) {
                if (puVar8 == (uint *)(ulong)puVar12[1]) {
                  uVar1 = 0;
                  if ((int)uVar19 == lVar22) {
                    uVar1 = uVar35;
                  }
                  puVar11 = (uint *)(ulong)uVar1;
                  puVar10 = (uint *)((ulong)param_2 & 0xffffffff);
                  puVar32 = param_1;
                  FUN_108b39fa4();
                  if ((int)puVar32 < 0) {
                    puVar34 = (uint *)((ulong)param_4 & 0xffffffff);
                    puVar8 = puVar32;
                    puVar37 = puVar32;
                    goto LAB_108b39ef8;
                  }
                  iVar38 = iVar38 + 1;
                }
                puVar12 = puVar12 + 6;
              }
              auStack_130[(long)puVar8] = (uint)lVar22;
            }
            uStack_2cc = uStack_2cc + uVar35;
            puVar34 = (uint *)((ulong)param_4 & 0xffffffff);
            puVar8 = puVar32;
          }
LAB_108b39ed4:
          puVar32 = puVar8;
        }
LAB_108b39ef8:
        puVar12 = (uint *)((long)puVar13 + 1);
        puVar11 = auStack_1f0;
        puVar10 = puVar21;
        puVar13 = puVar12;
        puVar26 = puVar37;
        uVar20 = uVar20 + 1;
        if (lVar23 < (int)uVar3) goto LAB_108b39a18;
      }
      if (iVar38 != (int)puVar34) goto LAB_108b39f9c;
      uVar33 = (uint)puVar32;
      uVar14 = uVar33;
      if (param_6 != 0 && (int)uVar33 < (int)uVar9) {
        uVar14 = uVar9;
      }
      puVar26 = (uint *)(ulong)uVar14;
      if ((param_1 != (uint *)0x0) && (param_6 != 0 && (int)uVar33 < (int)uVar9)) {
        uVar9 = uVar9 - uVar33;
        puVar8 = (uint *)((long)param_1 + (long)(int)uVar9);
        puVar32 = (uint *)(long)(int)uVar33;
        puVar10 = param_1;
        _memmove();
        for (uVar20 = (ulong)(uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU)); uVar20 != 0;
            uVar20 = uVar20 - 1) {
          *(undefined1 *)param_1 = 1;
          param_1 = (uint *)((long)param_1 + 1);
        }
        puVar12 = puVar13;
        puVar26 = (uint *)((ulong)param_2 & 0xffffffff);
      }
    }
    else {
LAB_108b39a14:
      puVar26 = (uint *)0xffffffff;
    }
LAB_108b39a18:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return puVar26;
    }
  }
  ___stack_chk_fail();
  if (*puVar12 - 3 < 0x7d) {
    uVar14 = puVar12[4];
    uVar9 = (uint)puVar32;
    if (*puVar12 < 0x20) {
      if (1 < uVar14) {
        return (uint *)0xffffffff;
      }
      if (uVar14 == 0) {
        return puVar32;
      }
      if ((int)uVar9 < (int)puVar10) {
        if (puVar8 != (uint *)0x0) {
          *(undefined1 *)((long)puVar8 + (long)(int)uVar9) = **(undefined1 **)(puVar12 + 2);
        }
        return (uint *)(ulong)(uVar9 + 1);
      }
    }
    else {
      if ((int)uVar14 < 0) {
        return (uint *)0xffffffff;
      }
      iVar38 = 0;
      if ((int)puVar11 == 0) {
        iVar38 = uVar14 / 0xff + 1;
      }
      if ((int)(iVar38 + uVar14) <= (int)((int)puVar10 - uVar9)) {
        if ((int)puVar11 == 0) {
          lVar22 = 0;
          lVar29 = (long)puVar32 << 0x20;
          lVar23 = (long)(int)uVar9;
          while( true ) {
            uVar9 = uVar9 + 1;
            puVar32 = (uint *)(ulong)uVar9;
            if ((int)uVar14 / 0xff <= (int)lVar22) break;
            if (puVar8 != (uint *)0x0) {
              *(undefined1 *)((long)puVar8 + lVar22 + lVar23) = 0xff;
              uVar14 = puVar12[4];
            }
            lVar29 = lVar29 + 0x100000000;
            lVar22 = lVar22 + 1;
          }
          if (puVar8 != (uint *)0x0) {
            *(char *)((long)puVar8 + (lVar29 >> 0x20)) = (char)uVar14 + (char)((int)uVar14 / 0xff);
            uVar14 = puVar12[4];
          }
        }
        if (puVar8 != (uint *)0x0) {
          _memcpy((undefined1 *)((long)puVar8 + (long)(int)puVar32),*(undefined8 *)(puVar12 + 2),
                  (long)(int)uVar14);
          uVar14 = puVar12[4];
        }
        return (uint *)(ulong)(uVar14 + (int)puVar32);
      }
    }
    return (uint *)0xfffffffe;
  }
  _abort();
  pbVar16 = *(byte **)puVar8;
  uVar9 = (uint)puVar12;
  if (uVar9 == 1 || (uVar9 & 0xfe) == 4) {
    uVar9 = 0;
    puVar11 = puVar10;
LAB_108b3a14c:
    *(byte **)puVar8 = pbVar16;
    *puVar32 = uVar9;
  }
  else {
    uVar14 = uVar9 & 1;
    iVar38 = (int)puVar10;
    if (uVar9 - 2 < 0x3e) {
      puVar10 = (uint *)(ulong)(iVar38 - uVar14);
      if ((int)uVar14 <= iVar38) {
        uVar9 = 0;
LAB_108b3a148:
        pbVar16 = pbVar16 + uVar14;
        puVar11 = puVar10;
        goto LAB_108b3a14c;
      }
    }
    else if (((ulong)puVar12 & 1) == 0) {
      if ((int)puVar11 <= iVar38) {
        uVar9 = 0;
        pbVar16 = pbVar16 + (uint)(iVar38 - (int)puVar11);
        goto LAB_108b3a14c;
      }
    }
    else {
      uVar9 = 0;
      uVar14 = 0;
      pbVar17 = pbVar16;
      do {
        if ((int)puVar10 < 1) goto LAB_108b3a158;
        pbVar16 = pbVar17 + 1;
        bVar2 = *pbVar17;
        uVar14 = uVar14 + bVar2;
        uVar9 = uVar9 + 1;
        uVar33 = (int)puVar10 + ~(uint)bVar2;
        puVar10 = (uint *)(ulong)uVar33;
        pbVar17 = pbVar16;
      } while (bVar2 == 0xff);
      if (-1 < (int)uVar33) goto LAB_108b3a148;
    }
LAB_108b3a158:
    puVar11 = (uint *)0xffffffff;
  }
  return puVar11;
}



/* Entry: 108b39fa4; end: 108b3a0bf;  */

int * FUN_108b39fa4(long *param_1,int *param_2,int *param_3,uint *param_4,undefined8 param_5)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  
  uVar6 = (undefined4)((ulong)param_5 >> 0x20);
  iVar5 = (int)param_5;
  uVar4 = (uint)param_4;
  if (*param_4 - 3 < 0x7d) {
    uVar11 = param_4[4];
    uVar4 = (uint)param_3;
    if (*param_4 < 0x20) {
      if (1 < uVar11) {
        return (int *)0xffffffff;
      }
      if (uVar11 == 0) {
        return param_3;
      }
      if ((int)uVar4 < (int)param_2) {
        if (param_1 != (long *)0x0) {
          *(undefined1 *)((long)param_1 + (long)(int)uVar4) = **(undefined1 **)(param_4 + 2);
        }
        return (int *)(ulong)(uVar4 + 1);
      }
    }
    else {
      if ((int)uVar11 < 0) {
        return (int *)0xffffffff;
      }
      iVar3 = 0;
      if (iVar5 == 0) {
        iVar3 = uVar11 / 0xff + 1;
      }
      if ((int)(iVar3 + uVar11) <= (int)((int)param_2 - uVar4)) {
        if (iVar5 == 0) {
          lVar12 = 0;
          lVar10 = (long)param_3 << 0x20;
          lVar1 = (long)(int)uVar4;
          while( true ) {
            uVar4 = uVar4 + 1;
            param_3 = (int *)(ulong)uVar4;
            if ((int)uVar11 / 0xff <= (int)lVar12) break;
            if (param_1 != (long *)0x0) {
              *(undefined1 *)((long)param_1 + lVar12 + lVar1) = 0xff;
              uVar11 = param_4[4];
            }
            lVar10 = lVar10 + 0x100000000;
            lVar12 = lVar12 + 1;
          }
          if (param_1 != (long *)0x0) {
            *(char *)((long)param_1 + (lVar10 >> 0x20)) = (char)uVar11 + (char)((int)uVar11 / 0xff);
            uVar11 = param_4[4];
          }
        }
        if (param_1 != (long *)0x0) {
          _memcpy((long)param_1 + (long)(int)param_3,*(undefined8 *)(param_4 + 2),(long)(int)uVar11)
          ;
          uVar11 = param_4[4];
        }
        return (int *)(ulong)(uVar11 + (int)param_3);
      }
    }
    return (int *)0xfffffffe;
  }
  _abort();
  pbVar7 = (byte *)*param_1;
  if (uVar4 == 1 || (uVar4 & 0xfe) == 4) {
    iVar9 = 0;
LAB_108b3a14c:
    *param_1 = (long)pbVar7;
    *param_3 = iVar9;
  }
  else {
    uVar11 = uVar4 & 1;
    iVar3 = (int)param_2;
    if (uVar4 - 2 < 0x3e) {
      param_2 = (int *)(ulong)(iVar3 - uVar11);
      if ((int)uVar11 <= iVar3) {
        iVar9 = 0;
LAB_108b3a148:
        pbVar7 = pbVar7 + uVar11;
        goto LAB_108b3a14c;
      }
    }
    else if (uVar11 == 0) {
      if (iVar5 <= iVar3) {
        iVar9 = 0;
        pbVar7 = pbVar7 + (uint)(iVar3 - iVar5);
        param_2 = (int *)CONCAT44(uVar6,iVar5);
        goto LAB_108b3a14c;
      }
    }
    else {
      iVar9 = 0;
      uVar11 = 0;
      pbVar8 = pbVar7;
      do {
        if ((int)param_2 < 1) goto LAB_108b3a158;
        pbVar7 = pbVar8 + 1;
        bVar2 = *pbVar8;
        uVar11 = uVar11 + bVar2;
        iVar9 = iVar9 + 1;
        uVar4 = (int)param_2 + ~(uint)bVar2;
        param_2 = (int *)(ulong)uVar4;
        pbVar8 = pbVar7;
      } while (bVar2 == 0xff);
      if (-1 < (int)uVar4) goto LAB_108b3a148;
    }
LAB_108b3a158:
    param_2 = (int *)0xffffffff;
  }
  return param_2;
}



/* Entry: 108b3a0c0; end: 108b3a2a7;  */

ulong FUN_108b3a0c0(long *param_1,ulong param_2,int *param_3,uint param_4,ulong param_5)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  
  pbVar4 = (byte *)*param_1;
  if (param_4 == 1 || (param_4 & 0xfe) == 4) {
    iVar6 = 0;
    param_5 = param_2;
LAB_108b3a14c:
    *param_1 = (long)pbVar4;
    *param_3 = iVar6;
  }
  else {
    uVar7 = param_4 & 1;
    iVar3 = (int)param_2;
    if (param_4 - 2 < 0x3e) {
      param_2 = (ulong)(iVar3 - uVar7);
      if ((int)uVar7 <= iVar3) {
        iVar6 = 0;
LAB_108b3a148:
        pbVar4 = pbVar4 + uVar7;
        param_5 = param_2;
        goto LAB_108b3a14c;
      }
    }
    else if (uVar7 == 0) {
      if ((int)param_5 <= iVar3) {
        iVar6 = 0;
        pbVar4 = pbVar4 + (uint)(iVar3 - (int)param_5);
        goto LAB_108b3a14c;
      }
    }
    else {
      iVar6 = 0;
      uVar7 = 0;
      pbVar5 = pbVar4;
      do {
        if ((int)param_2 < 1) goto LAB_108b3a158;
        pbVar4 = pbVar5 + 1;
        bVar2 = *pbVar5;
        uVar7 = uVar7 + bVar2;
        iVar6 = iVar6 + 1;
        uVar1 = (int)param_2 + ~(uint)bVar2;
        param_2 = (ulong)uVar1;
        pbVar5 = pbVar4;
      } while (bVar2 == 0xff);
      if (-1 < (int)uVar1) goto LAB_108b3a148;
    }
LAB_108b3a158:
    param_5 = 0xffffffff;
  }
  return param_5;
}



/* Entry: 108b3a2a8; end: 108b3aa03;  */

ulong FUN_108b3a2a8(undefined8 param_1,ulong param_2,long param_3,undefined8 param_4,long param_5,
                   long param_6,long param_7,ulong param_8,ulong param_9,uint param_10,uint param_11
                   ,undefined4 param_12,code *param_13,undefined4 param_14)

{
  undefined4 *puVar1;
  uint uVar2;
  float fVar3;
  float *pfVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  undefined8 *extraout_x8;
  ulong uVar12;
  undefined4 uVar13;
  long lVar14;
  undefined4 uVar15;
  uint uVar16;
  undefined4 uVar17;
  long lVar18;
  undefined8 *extraout_x12;
  undefined8 *extraout_x13;
  undefined8 *puVar19;
  undefined8 *extraout_x14;
  undefined8 *puVar20;
  undefined8 *extraout_x15;
  float *pfVar21;
  float *pfVar22;
  ulong uVar23;
  float fVar24;
  float fVar25;
  double dVar26;
  float fVar27;
  ulong uStack_340;
  long lStack_338;
  long lStack_330;
  long lStack_328;
  long lStack_320;
  ulong uStack_318;
  long lStack_310;
  ulong uStack_308;
  uint uStack_2fc;
  code *pcStack_2f8;
  undefined8 uStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  ulong uStack_2d8;
  uint uStack_2cc;
  long lStack_2c8;
  uint uStack_2bc;
  ulong uStack_2b8;
  ulong uStack_2b0;
  uint uStack_2a4;
  float *pfStack_2a0;
  long lStack_298;
  ulong uStack_290;
  long lStack_288;
  uint uStack_27c;
  undefined4 uStack_278;
  uint uStack_274;
  float afStack_270 [84];
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
  undefined4 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  
  uStack_278 = param_14;
  pcStack_2f8 = param_13;
  uStack_a0 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar12 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  auStack_a8 = (undefined1  [8])0x0;
  uStack_b0 = 0;
  puVar20 = &uStack_b0;
  uStack_2f0 = param_4;
  lStack_2e8 = param_6;
  lStack_2e0 = param_7;
  uStack_2cc = param_10;
  uStack_290 = param_9;
  uStack_27c = param_11;
  FUN_108b41634();
  uStack_2fc = uStack_27c * (int)param_8;
  uVar23 = (ulong)uStack_2fc;
  puVar6 = (undefined8 *)(auStack_a8 + 4);
  uVar16 = *(uint *)(param_3 + 0x28) & ((int)*(uint *)(param_3 + 0x28) >> 0x1f ^ 0xffffffffU);
  for (uStack_274 = 0; uVar16 != uStack_274; uStack_274 = uStack_274 + 1) {
    uVar8 = uVar23;
    if (*(int *)(param_3 + 0x30) << (ulong)(uStack_274 & 0x1f) == uStack_2fc) goto LAB_108b3a398;
  }
  uVar8 = (ulong)(uint)(*(int *)(param_3 + 0x30) << (ulong)(uVar16 & 0x1f));
  uStack_274 = uVar16;
LAB_108b3a398:
  uVar16 = uStack_2fc + (int)uStack_290;
  uStack_308 = (ulong)uVar16;
  uStack_340 = -(ulong)(uVar16 >> 0x1f) & 0xfffffffc00000000 | uStack_308 << 2;
  uVar9 = uStack_340 + 0xf & 0xfffffffffffffff0;
  uStack_2d8 = param_8;
  (*(code *)PTR____chkstk_darwin_11034bd40)((ulong)&uStack_c0 | 0xc);
  uVar10 = (uStack_2d8 & 0xffffffff) * 4 + 0xf & 0x7fffffff0;
  lStack_288 = (long)&uStack_340 - uVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = ((long)&uStack_340 - uVar9) - uVar10;
  iVar7 = (int)uVar8;
  uVar8 = (-(uVar8 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar8 & 0xffffffff) << 2) + 0xf &
          0xfffffffffffffff0;
  lStack_310 = lVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pfVar21 = (float *)(lVar14 - uVar8);
  switch(uStack_2cc) {
  case 3:
  case 5:
  case 6:
    uVar13 = 0;
    uVar12 = 0x200000001;
    uVar15 = 3;
    uStack_c0 = 0x200000001;
    uStack_b8 = CONCAT44(uStack_b8._4_4_,3);
    uVar17 = 1;
    puVar6 = extraout_x12;
    puVar19 = extraout_x8;
    break;
  case 4:
    uVar15 = 1;
    uStack_c0 = CONCAT44(uStack_c0._4_4_,1);
    uVar17 = 3;
    uVar13 = 3;
    puVar6 = extraout_x8;
    puVar19 = extraout_x13;
    puVar20 = extraout_x14;
    break;
  case 7:
    uVar13 = 0;
    uVar15 = 2;
    uVar12 = 0x200000001;
    uStack_b8 = 0x100000003;
    uStack_c0 = 0x200000001;
    uVar17 = 3;
    puVar6 = extraout_x15;
    puVar19 = puVar20;
    puVar20 = extraout_x12;
    break;
  case 8:
    uVar13 = 0;
    uVar12 = 0x200000001;
    uVar15 = 3;
    uStack_b8 = 0x100000003;
    uStack_c0 = 0x200000001;
    uStack_b0 = CONCAT44(uStack_b0._4_4_,3);
    uVar17 = 1;
    puVar19 = extraout_x12;
    puVar20 = extraout_x15;
    break;
  default:
    goto LAB_108b3a4e4;
  }
  *(undefined4 *)puVar19 = uVar17;
  *(undefined4 *)puVar20 = uVar15;
  *(undefined4 *)puVar6 = uVar13;
LAB_108b3a4e4:
  pfVar22 = afStack_270;
  for (lVar14 = 0; pfVar22 = pfVar22 + 0x15, lVar14 != 3; lVar14 = lVar14 + 1) {
    for (lVar18 = 0; lVar18 != 0x54; lVar18 = lVar18 + 4) {
      *(undefined4 *)((long)pfVar22 + lVar18) = 0xc1e00000;
    }
  }
  uVar16 = 0;
  uVar8 = 0;
  lStack_320 = (long)(int)uStack_290;
  uStack_2b8 = -(uStack_290 >> 0x1f & 1) & 0xfffffffc00000000 | (uStack_290 & 0xffffffff) << 2;
  lStack_328 = lStack_288 + (long)(int)uStack_290 * 4;
  uVar9 = (ulong)uStack_27c;
  pfStack_2a0 = afStack_270 + 0x3f;
  lStack_330 = param_5 + 4;
  lStack_338 = lStack_288 + uVar23 * 4;
  uStack_318 = (ulong)(uStack_2cc & ((int)uStack_2cc >> 0x1f ^ 0xffffffffU));
  do {
    uVar10 = uStack_318;
    fVar24 = (float)uVar12;
    fVar27 = (float)param_2;
    if (uVar8 == uStack_318) {
      for (lVar14 = 0; lVar14 != 0x54; lVar14 = lVar14 + 4) {
        fVar24 = *(float *)((long)afStack_270 + lVar14 + 0x54);
        fVar27 = *(float *)((long)afStack_270 + lVar14 + 0xfc);
        if (fVar27 <= fVar24) {
          fVar24 = fVar27;
        }
        *(float *)((long)afStack_270 + lVar14 + 0xa8) = fVar24;
      }
      dVar26 = (double)(2.0 / (float)(int)(uStack_2cc - 1));
      _log();
      fVar27 = 0.5;
      fVar24 = (float)(dVar26 * 1.4426950408889634) * 0.5;
      uVar12 = (ulong)(uint)fVar24;
      pfVar21 = afStack_270;
      for (lVar14 = 0; pfVar21 = pfVar21 + 0x15, lVar14 != 3; lVar14 = lVar14 + 1) {
        for (lVar18 = 0; lVar18 != 0x54; lVar18 = lVar18 + 4) {
          fVar27 = fVar24 + *(float *)((long)pfVar21 + lVar18);
          *(float *)((long)pfVar21 + lVar18) = fVar27;
        }
      }
      for (uVar23 = 0; bVar5 = uVar23 == uVar10, !bVar5; uVar23 = uVar23 + 1) {
        iVar7 = *(int *)((long)&uStack_c0 + uVar23 * 4);
        if (iVar7 == 0) {
          for (lVar14 = 0; lVar14 != 0x54; lVar14 = lVar14 + 4) {
            *(undefined4 *)(param_5 + lVar14) = 0;
          }
        }
        else {
          for (lVar14 = 0; lVar14 != 0x54; lVar14 = lVar14 + 4) {
            fVar27 = *(float *)((long)afStack_270 + lVar14 + (long)(iVar7 + -1) * 0x54 + 0x54);
            fVar24 = *(float *)(param_5 + lVar14) - fVar27;
            uVar12 = (ulong)(uint)fVar24;
            *(float *)(param_5 + lVar14) = fVar24;
          }
        }
        param_5 = param_5 + 0x54;
      }
      func_0x000108b3b948(uStack_a0);
      if (bVar5) {
        return uVar12;
      }
LAB_108b3aa00:
      fVar25 = (float)uVar12;
      ___stack_chk_fail();
      fVar24 = fVar25;
      fVar3 = fVar25 - fVar27;
      if (fVar25 <= fVar27) {
        fVar24 = fVar27;
        fVar3 = fVar27 - fVar25;
      }
      if (fVar3 < 8.0) {
        lVar14 = (long)(int)(fVar3 + fVar3) * 4;
        fVar24 = fVar24 + *(float *)(&UNK_10df8a16c + lVar14) +
                 (*(float *)(&UNK_10df8a170 + lVar14) - *(float *)(&UNK_10df8a16c + lVar14)) *
                 (fVar3 * 2.0 - (float)(int)(float)(int)(fVar3 + fVar3));
      }
      return (ulong)(uint)fVar24;
    }
    uStack_2bc = 0;
    if (iVar7 != 0) {
      uStack_2bc = (int)uVar23 / iVar7;
    }
    uStack_2b0 = uVar8;
    uStack_2a4 = uVar16;
    if (uStack_2bc * iVar7 != (int)uVar23) {
      _abort();
      goto LAB_108b3aa00;
    }
    lStack_2c8 = lStack_2e8 + uVar8 * lStack_320 * 4;
    _memcpy(lStack_288,lStack_2c8,uStack_2b8);
    lVar14 = lStack_310;
    (*pcStack_2f8)(lStack_310,1,uStack_2f0,uStack_2cc,uVar8,uStack_2d8,0);
    puVar1 = (undefined4 *)(lStack_2e0 + uVar8 * 4);
    FUN_108b419f8(lVar14,lStack_328,uVar23,1,uStack_27c,param_3 + 0x10,puVar1,0);
    FUN_108b60920(lStack_288,lStack_288,uStack_308);
    if (1e+18 <= fVar24) {
      _bzero(lStack_288,uStack_340);
      *puVar1 = 0;
    }
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    lStack_298 = param_5 + (ulong)uStack_2a4 * 4;
    pfVar22 = (float *)(lStack_330 + (ulong)uStack_2a4 * 4);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uVar16 = uStack_2bc & ((int)uStack_2bc >> 0x1f ^ 0xffffffffU);
    for (uVar23 = 0; uVar8 = uStack_2b0, uVar23 != uVar16; uVar23 = uVar23 + 1) {
      FUN_108b4af28(param_3 + 0x50,lStack_288 + uVar23 * (long)iVar7 * 4,pfVar21,
                    *(undefined8 *)(param_3 + 0x48),uStack_290,*(int *)(param_3 + 0x28) - uStack_274
                    ,1,uStack_278);
      if (uStack_27c != 1) {
        uVar2 = 0;
        if (uStack_27c != 0) {
          uVar2 = iVar7 / (int)uStack_27c;
        }
        uVar12 = (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU));
        pfVar4 = pfVar21;
        for (uVar8 = uVar12; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pfVar4 = *pfVar4 * (float)uVar9;
          pfVar4 = pfVar4 + 1;
        }
        for (; (long)uVar12 < (long)iVar7; uVar12 = uVar12 + 1) {
          pfVar21[uVar12] = 0.0;
        }
      }
      FUN_108b3e974(param_3,pfVar21,afStack_270,0x15,1,uStack_274,uStack_278);
      for (lVar14 = 0; lVar14 != 0x54; lVar14 = lVar14 + 4) {
        fVar24 = *(float *)((long)&uStack_120 + lVar14);
        if (*(float *)((long)&uStack_120 + lVar14) <= *(float *)((long)afStack_270 + lVar14)) {
          fVar24 = *(float *)((long)afStack_270 + lVar14);
        }
        *(float *)((long)&uStack_120 + lVar14) = fVar24;
      }
    }
    func_0x000108b4d58c(param_3,0x15,0x15,&uStack_120,param_5 + uStack_2b0 * 0x54,1);
    lVar14 = 0x14;
    uVar23 = (ulong)uStack_2fc;
    do {
      fVar24 = *pfVar22;
      if (*pfVar22 <= pfVar22[-1] + -1.0) {
        fVar24 = pfVar22[-1] + -1.0;
      }
      *pfVar22 = fVar24;
      lVar14 = lVar14 + -1;
      pfVar22 = pfVar22 + 1;
    } while (lVar14 != 0);
    iVar11 = 0x13;
    do {
      pfVar22 = (float *)(param_5 + (ulong)(uStack_2a4 + iVar11) * 4);
      fVar27 = pfVar22[1] + -2.0;
      param_2 = (ulong)(uint)fVar27;
      fVar24 = *pfVar22;
      if (*pfVar22 <= fVar27) {
        fVar24 = fVar27;
      }
      uVar12 = (ulong)(uint)fVar24;
      *pfVar22 = fVar24;
      iVar11 = iVar11 + -1;
    } while (-1 < iVar11);
    iVar11 = *(int *)((long)&uStack_c0 + uVar8 * 4);
    if (iVar11 == 1) {
      for (lVar14 = 0; lVar14 != 0x54; lVar14 = lVar14 + 4) {
        uVar12 = (ulong)*(uint *)((long)afStack_270 + lVar14 + 0x54);
        param_2 = (ulong)*(uint *)(lStack_298 + lVar14);
        FUN_108b3aa04();
        *(int *)((long)afStack_270 + lVar14 + 0x54) = (int)uVar12;
      }
    }
    else if (iVar11 == 3) {
      for (lVar14 = 0; pfVar22 = pfStack_2a0, lVar14 != 0x54; lVar14 = lVar14 + 4) {
        uVar12 = (ulong)*(uint *)((long)pfStack_2a0 + lVar14);
        param_2 = (ulong)*(uint *)(lStack_298 + lVar14);
        FUN_108b3aa04();
        *(int *)((long)pfVar22 + lVar14) = (int)uVar12;
      }
    }
    else if (iVar11 == 2) {
      pfVar22 = afStack_270 + 0x15;
      for (lVar14 = 0; lVar14 != 0x54; lVar14 = lVar14 + 4) {
        fVar24 = *pfVar22;
        param_2 = (ulong)(uint)(*(float *)(lStack_298 + lVar14) + -0.5);
        FUN_108b3aa04(fVar24,param_2);
        *pfVar22 = fVar24;
        uVar12 = (ulong)(uint)pfVar22[0x2a];
        FUN_108b3aa04();
        pfVar22[0x2a] = (float)uVar12;
        pfVar22 = pfVar22 + 1;
      }
    }
    _memcpy(lStack_2c8,lStack_338,uStack_2b8);
    uVar8 = uStack_2b0 + 1;
    uVar16 = uStack_2a4 + 0x15;
  } while( true );
}



/* Entry: 108b3aa04; end: 108b3aa5f;  */

float FUN_108b3aa04(float param_1,float param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = param_1;
  fVar2 = param_1 - param_2;
  if (param_1 <= param_2) {
    fVar3 = param_2;
    fVar2 = param_2 - param_1;
  }
  if (fVar2 < 8.0) {
    lVar1 = (long)(int)(fVar2 + fVar2) * 4;
    fVar3 = fVar3 + *(float *)(&UNK_10df8a16c + lVar1) +
            (*(float *)(&UNK_10df8a170 + lVar1) - *(float *)(&UNK_10df8a16c + lVar1)) *
            (fVar2 * 2.0 - (float)(int)(float)(int)(fVar2 + fVar2));
  }
  return fVar3;
}



/* Entry: 108b3aa60; end: 108b3b43f;  */

int * FUN_108b3aa60(int *param_1,code *param_2,undefined8 param_3,undefined4 param_4,ulong param_5,
                   int param_6,undefined4 param_7,undefined8 param_8,undefined4 param_9,
                   undefined4 param_10,undefined8 param_11)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  code *pcVar11;
  undefined1 *puVar12;
  undefined1 uVar13;
  bool bVar14;
  bool bVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int *piVar20;
  uint uVar21;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar22;
  ulong uVar23;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  int iVar24;
  undefined4 uVar25;
  int extraout_w9;
  undefined8 extraout_x9;
  undefined8 uVar26;
  undefined8 extraout_x9_00;
  int iVar27;
  int extraout_w10;
  int extraout_w10_00;
  ulong uVar28;
  undefined8 extraout_x10;
  undefined8 uVar29;
  undefined8 extraout_x10_00;
  int iVar30;
  int *piVar31;
  long lVar32;
  int *piVar33;
  int *piVar34;
  uint uVar35;
  int *piVar36;
  uint auStack_2810 [2];
  undefined8 uStack_2808;
  uint *apuStack_2800 [2];
  undefined1 auStack_27f0 [8];
  undefined1 *puStack_27e8;
  uint uStack_27e0;
  uint uStack_27dc;
  uint uStack_27d8;
  undefined4 uStack_27d4;
  undefined8 uStack_27d0;
  undefined4 uStack_27c4;
  undefined8 uStack_27c0;
  code *pcStack_27b8;
  int iStack_27b0;
  undefined4 uStack_27ac;
  ulong uStack_27a8;
  undefined1 *puStack_27a0;
  int iStack_2794;
  int *piStack_2790;
  undefined8 uStack_2788;
  uint uStack_277c;
  long lStack_2778;
  int iStack_2770;
  uint uStack_276c;
  uint auStack_2768 [298];
  int iStack_22c0;
  undefined4 uStack_22bc;
  int aiStack_1e60 [1916];
  undefined8 uStack_70;
  
  uStack_27c4 = param_7;
  uStack_27ac = param_4;
  iStack_27b0 = param_6;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  piVar33 = (int *)0x0;
  piVar36 = (int *)0x0;
  uStack_70 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_2778 = 0;
  uVar13 = param_1[0x48] == 1;
  uStack_27c0 = param_8;
  pcStack_27b8 = param_2;
  uStack_2788 = param_3;
  if ((bool)uVar13) {
    piVar33 = param_1;
    FUN_108b3b440(param_1);
    piVar36 = param_1;
    func_0x000108b3b484(param_1);
  }
  piVar34 = param_1 + 0x4a;
  apuStack_2800[0] = &uStack_276c;
  FUN_108b389a0(piVar34,0xfbd);
  apuStack_2800[0] = (uint *)&iStack_2770;
  FUN_108b389a0(piVar34,0xfa7);
  func_0x000108b3b93c();
  if ((bool)uVar13) {
    piVar31 = (int *)0x804;
  }
  else {
    apuStack_2800[0] = (uint *)&lStack_2778;
    FUN_108b389a0(piVar34,0x271f);
    piVar31 = (int *)(ulong)(uint)param_1[0x45];
  }
  uVar35 = uStack_276c;
  puVar22 = auStack_27f0;
  piVar20 = piVar31;
  func_0x000108b35d18(piVar31,uStack_27ac,param_1[0x47],uStack_276c);
  uVar16 = (uint)piVar20;
  uVar13 = uVar16 == 1;
  if ((int)uVar16 < 1) {
    piVar33 = (int *)0xffffffff;
  }
  else {
    iVar27 = 0;
    if (uVar16 != 0) {
      iVar27 = (int)uVar35 / (int)uVar16;
    }
    iVar17 = param_1[1];
    if (iVar27 != 10) {
      iVar17 = 0;
    }
    iVar27 = iVar17 + param_1[1] * 2 + -1;
    uVar13 = iStack_27b0 == iVar27;
    if (iStack_27b0 < iVar27) {
      puVar22 = auStack_27f0;
      piVar33 = (int *)0xfffffffe;
    }
    else {
      uStack_277c = uVar16;
      (*(code *)PTR____chkstk_darwin_11034bd40)((ulong)(uVar16 << 1) * 4 + 0xf & 0x3fffffff0);
      iVar17 = 0;
      puStack_27a0 = auStack_27f0 + -extraout_x8;
      FUN_108b358c8(0,param_1[0x46],2,piVar31);
      iVar18 = 0;
      FUN_108b358c8(0,param_1[0x46],1,param_1[0x45]);
      (*(code *)PTR____chkstk_darwin_11034bd40)
                ((-(ulong)((uint)(*param_1 * 0x15) >> 0x1f) & 0xfffffffc00000000 |
                 (ulong)(uint)(*param_1 * 0x15) << 2) + 0xf & 0xfffffffffffffff0);
      puVar22 = auStack_27f0 + -extraout_x8 + -extraout_x8_00;
      bVar14 = param_1[0x48] == 1;
      puStack_27e8 = puVar22;
      if ((bVar14) && (func_0x000108b3b93c(), uVar35 = uStack_276c, lVar32 = lStack_2778, !bVar14))
      {
        uVar25 = *(undefined4 *)(lStack_2778 + 4);
        *(int *)(puVar22 + -0x10) = param_1[0x43];
        *(code **)(puVar22 + -0x18) = pcStack_27b8;
        *(uint *)(puVar22 + -0x20) = uVar35;
        FUN_108b3a2a8(lVar32,uStack_2788,puStack_27e8,piVar36,piVar33,uStack_277c,uVar25);
      }
      uStack_27d0 = param_11;
      *(int **)(puVar22 + -0x10) = aiStack_1e60;
      piVar20 = piVar34;
      FUN_108b389a0(piVar34,0xfbd);
      if (param_1[0x48] == 2) {
        uVar35 = param_1[1];
        iVar24 = param_1[0x49];
        if (iVar24 == -1) {
          iVar30 = (param_1[2] + uVar35) * 750000;
        }
        else {
          iVar30 = iVar24;
          if (iVar24 == -1000) {
            iVar30 = 0;
            if (uStack_277c != 0) {
              iVar30 = (aiStack_1e60[0] * 0x3c) / (int)uStack_277c;
            }
            iVar30 = uVar35 * 15000 + (iVar30 + aiStack_1e60[0]) * (param_1[2] + uVar35);
          }
        }
        uVar28 = (ulong)(uVar35 & ((int)uVar35 >> 0x1f ^ 0xffffffffU));
        puVar10 = auStack_2768 + 0x2a;
        uVar16 = 0;
        if (uVar35 != 0) {
          uVar16 = iVar30 / (int)uVar35;
        }
        for (; uVar28 != 0; uVar28 = uVar28 - 1) {
          *puVar10 = uVar16;
          puVar10 = puVar10 + 1;
        }
      }
      else {
        uVar16 = param_1[0x44];
        uVar35 = param_1[1];
        iVar5 = param_1[2];
        iVar30 = (-iVar5 - (uint)(uVar16 != 0xffffffff)) + uVar35;
        iVar1 = iVar30 + iVar5 * 2;
        iVar7 = 0;
        if (uStack_277c != 0) {
          iVar7 = aiStack_1e60[0] / (int)uStack_277c;
        }
        if (iVar7 < 0x33) {
          iVar7 = 0x32;
        }
        iVar6 = iVar7 * 0x28;
        iVar24 = param_1[0x49];
        if (iVar24 == -1) {
          iVar19 = 0x1f400;
          if (uVar16 == 0xffffffff) {
            iVar19 = 0;
          }
          iVar19 = iVar19 + iVar1 * 750000;
        }
        else {
          iVar19 = iVar24;
          if (iVar24 == -1000) {
            iVar19 = 8000;
            if (uVar16 == 0xffffffff) {
              iVar19 = 0;
            }
            iVar19 = iVar19 + (aiStack_1e60[0] + iVar6 + 10000) * iVar1;
          }
        }
        uVar28 = 0;
        iVar8 = iVar19 / 0x14;
        if (59999 < iVar19) {
          iVar8 = 3000;
        }
        iVar8 = (iVar8 - iVar7) + iVar7 * 0x10;
        iVar4 = iVar8;
        if (uVar16 == 0xffffffff) {
          iVar4 = 0;
        }
        uVar21 = 0x20;
        if (uVar16 == 0xffffffff) {
          uVar21 = 0;
        }
        iVar19 = iVar19 - (iVar4 + iVar1 * iVar6);
        iVar4 = 0;
        if (iVar1 != 0) {
          iVar4 = iVar19 / iVar1;
        }
        uVar3 = iVar4 / 2 & (iVar4 / 2 >> 0x1f ^ 0xffffffffU);
        if (19999 < (int)uVar3) {
          uVar3 = 20000;
        }
        uVar9 = iVar19 + uVar3 * (((ulong)uVar16 != 0xffffffff) - uVar35);
        lVar32 = (long)(int)(iVar30 * 0x100 + iVar5 * 0x200 | uVar21);
        iVar30 = 0;
        if (lVar32 != 0) {
          iVar30 = (int)((long)(-(ulong)(uVar9 >> 0x1f) & 0xffffff0000000000 | (ulong)uVar9 << 8) /
                        lVar32);
        }
        uVar21 = iVar8 + (iVar30 >> 3);
        piVar20 = (int *)0x50;
        uVar9 = uVar3 + iVar30 * 2;
        for (; (uVar35 & ((int)uVar35 >> 0x1f ^ 0xffffffffU)) != uVar28; uVar28 = uVar28 + 1) {
          if ((long)uVar28 < (long)iVar5) {
            auStack_2768[uVar28 + 0x2a] =
                 (uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU)) + iVar7 * 0x50;
          }
          else if (uVar16 == uVar28) {
            auStack_2768[uVar28 + 0x2a] = uVar21 & ((int)uVar21 >> 0x1f ^ 0xffffffffU);
          }
          else {
            auStack_2768[uVar28 + 0x2a] =
                 (uVar3 + iVar30 & ((int)(uVar3 + iVar30) >> 0x1f ^ 0xffffffffU)) + iVar6;
          }
        }
      }
      uVar23 = (ulong)uVar35;
      uStack_27d4 = param_9;
      puVar10 = auStack_2768 + 0x2a;
      for (uVar28 = (ulong)(uVar35 & ((int)uVar35 >> 0x1f ^ 0xffffffffU)); uVar28 != 0;
          uVar28 = uVar28 - 1) {
        uVar35 = *puVar10;
        if ((int)uVar35 < 0x1f5) {
          uVar35 = 500;
        }
        *puVar10 = uVar35;
        puVar10 = puVar10 + 1;
      }
      uVar35 = uStack_277c;
      if (iStack_2770 == 0 && iVar24 != -1) {
        if (iVar24 == -1000) {
          func_0x000108b3b8e4();
          uVar23 = extraout_x8_01;
          iStack_27b0 = extraout_w10;
        }
        else {
          func_0x000108b3b8e4();
          uVar23 = extraout_x8_02;
          iStack_27b0 = iVar27;
          if (iVar27 <= extraout_w9) {
            iStack_27b0 = extraout_w10_00;
          }
        }
      }
      piStack_2790 = piVar34;
      for (lVar32 = 0; lVar32 < (int)uVar23; lVar32 = lVar32 + 1) {
        func_0x000108b3b910(auStack_2768[lVar32 + 0x2a]);
        FUN_108b389a0();
        puVar12 = puVar22 + 0x10;
        if (param_1[0x48] == 2) {
          func_0x000108b3b910(0x3ea);
LAB_108b3af08:
          FUN_108b389a0();
          puVar12 = puVar12 + 0x10;
        }
        else if (param_1[0x48] == 1) {
          iVar27 = param_1[0x49];
          iVar30 = *param_1;
          if ((int)(uVar35 * 0x32) < (int)uStack_276c) {
            uVar16 = 0;
            if (uStack_277c != 0) {
              uVar16 = uStack_276c / uStack_277c;
            }
            iVar27 = iVar27 + (uVar16 * -0x3c + 3000) * iVar30;
          }
          uVar25 = 0x44f;
          if (iVar27 <= iVar30 * 5000) {
            uVar25 = 0x44d;
          }
          uVar2 = 0x450;
          if (iVar27 <= iVar30 * 7000) {
            uVar2 = uVar25;
          }
          uVar25 = 0x451;
          if (iVar27 <= iVar30 * 10000) {
            uVar25 = uVar2;
          }
          func_0x000108b3b910(uVar25);
          FUN_108b389a0();
          puVar12 = puVar22 + 0x20;
          if (lVar32 < param_1[2]) {
            func_0x000108b3b910(0x3ea);
            FUN_108b389a0();
            puVar12 = puVar22 + 0x30;
            func_0x000108b3b910(2);
            goto LAB_108b3af08;
          }
        }
        uVar23 = (ulong)(uint)param_1[1];
        puVar22 = puVar12;
      }
      uStack_27dc = iVar18 + 7U & 0xfffffff8;
      piVar34 = (int *)0x0;
      uStack_27e0 = iVar17 + 7U & 0xfffffff8;
      piVar36 = piStack_2790;
      uVar16 = uStack_277c;
      for (uVar35 = 0; uVar13 = uVar35 == (uint)uVar23, piVar33 = piVar34,
          (int)uVar35 < (int)(uint)uVar23; uVar35 = uVar35 + 1) {
        uStack_22bc = 0;
        uStack_27a8 = param_5;
        if ((int)uVar35 < param_1[2]) {
          uStack_27d8 = (uint)piVar34;
          func_0x000108b3b900();
          func_0x000108b3a1c0();
          piVar33 = piVar20;
          func_0x000108b3b900();
          func_0x000108b3a208();
          uVar29 = uStack_2788;
          puVar12 = puStack_27a0;
          pcVar11 = pcStack_27b8;
          uVar26 = uStack_27d0;
          piStack_2790 = (int *)CONCAT44(piStack_2790._4_4_,(int)piVar20);
          (*pcStack_27b8)(puStack_27a0,2,uStack_2788,*param_1,piVar20,uVar16,uStack_27d0);
          iStack_2794 = (int)piVar33;
          (*pcVar11)(puVar12 + 4,2,uVar29,*param_1,piVar33,uVar16,uVar26);
          bVar14 = param_1[0x48] == 1;
          if (bVar14) {
            func_0x000108b3b93c();
            uVar21 = uStack_27e0;
            if (!bVar14) {
              piVar34 = (int *)(ulong)uStack_27d8;
              for (lVar32 = 0; lVar32 != 0x54; lVar32 = lVar32 + 4) {
                *(undefined4 *)((long)auStack_2768 + lVar32) =
                     *(undefined4 *)(puStack_27e8 + lVar32 + (long)((int)piStack_2790 * 0x15) * 4);
                *(undefined4 *)((long)auStack_2768 + lVar32 + 0x54) =
                     *(undefined4 *)(puStack_27e8 + lVar32 + (long)(iStack_2794 * 0x15) * 4);
              }
              goto LAB_108b3b11c;
            }
            piVar34 = (int *)(ulong)uStack_27d8;
          }
          else {
            piVar34 = (int *)(ulong)uStack_27d8;
            uVar21 = uStack_27e0;
          }
        }
        else {
          func_0x000108b3b900();
          func_0x000108b3a254();
          piStack_2790 = (int *)CONCAT44(piStack_2790._4_4_,(int)piVar20);
          (*pcStack_27b8)(puStack_27a0,1,uStack_2788,*param_1,piVar20,uVar16,uStack_27d0);
          bVar14 = param_1[0x48] == 1;
          if ((!bVar14) || (func_0x000108b3b93c(), bVar14)) {
            iStack_2794 = -1;
            uVar21 = uStack_27dc;
          }
          else {
            for (lVar32 = 0; lVar32 != 0x54; lVar32 = lVar32 + 4) {
              *(undefined4 *)((long)auStack_2768 + lVar32) =
                   *(undefined4 *)(puStack_27e8 + lVar32 + (long)((int)piStack_2790 * 0x15) * 4);
            }
            iStack_2794 = -1;
            uVar21 = uStack_27dc;
LAB_108b3b11c:
            *(uint **)(puVar22 + -0x10) = auStack_2768;
            FUN_108b389a0(piVar36,0x272a);
          }
        }
        iVar18 = iStack_27b0 - (int)piVar34;
        iVar27 = param_1[1] + ~uVar35;
        iVar17 = iVar27 * -2 + 1;
        if (iVar27 < 1) {
          iVar17 = 0;
        }
        iVar30 = 0;
        if (uStack_277c != 0) {
          iVar30 = (int)uStack_276c / (int)uStack_277c;
        }
        if (iVar30 != 10) {
          iVar27 = 0;
        }
        uVar16 = (iVar18 - iVar27) + iVar17;
        uVar3 = uVar16;
        if (0x1ded < (int)uVar16) {
          uVar3 = 0x1dee;
        }
        param_5 = (ulong)uVar3;
        uVar9 = param_1[1] - 1;
        iVar27 = -2;
        if ((int)uVar16 < 0xfe) {
          iVar27 = -1;
        }
        uVar13 = uVar35 == uVar9;
        if ((bool)uVar13) {
          iVar27 = 0;
        }
        if ((iStack_2770 == 0) && (uVar13 = uVar35 == uVar9, (bool)uVar13)) {
          iVar17 = 0;
          if (uStack_277c != 0) {
            iVar17 = (int)(uStack_276c * 6) / (int)uStack_277c;
          }
          *(ulong *)(puVar22 + -0x10) = (ulong)(uint)((int)(uVar3 * iVar17 * 8) / 6);
          FUN_108b389a0(piVar36,0xfa2);
        }
        iVar17 = *param_1;
        *(undefined4 *)(puVar22 + -8) = uStack_27d4;
        *(undefined8 *)(puVar22 + -0x10) = uStack_27c0;
        *(int *)(puVar22 + -0x18) = iVar17;
        *(int *)(puVar22 + -0x1c) = iStack_2794;
        *(int *)(puVar22 + -0x20) = (int)piStack_2790;
        uVar16 = uStack_277c;
        piVar20 = piVar36;
        FUN_108b35e70(piVar36,puStack_27a0,uStack_277c,aiStack_1e60,iVar27 + uVar3,uStack_27c4,
                      uStack_2788,uStack_27ac);
        piVar33 = piVar20;
        if ((int)piVar20 < 0) break;
        piVar20 = &iStack_22c0;
        func_0x000108b3c01c(piVar20,aiStack_1e60);
        uVar25 = uStack_22bc;
        if ((int)piVar20 != 0) {
          piVar33 = (int *)0xfffffffd;
          break;
        }
        piVar36 = (int *)((long)piVar36 + (long)(int)uVar21);
        bVar14 = iStack_2770 == 0;
        bVar15 = uVar35 != param_1[1] - 1U;
        *(undefined4 *)(puVar22 + -0x10) = 0;
        param_5 = uStack_27a8;
        piVar20 = &iStack_22c0;
        FUN_108b3c174(piVar20,0,uVar25,uStack_27a8,iVar18,bVar15,!bVar15 && bVar14,0);
        param_5 = param_5 + (long)(int)piVar20;
        piVar34 = (int *)(ulong)(uint)((int)piVar20 + (int)piVar34);
        uVar23 = (ulong)(uint)param_1[1];
      }
    }
  }
  func_0x000108b3b948(uStack_70);
  if ((bool)uVar13) {
    return piVar33;
  }
  ___stack_chk_fail();
  *(ulong *)(puVar22 + -0x20) = param_5;
  *(undefined1 **)(puVar22 + -0x18) = auStack_27f0;
  *(undefined1 **)(puVar22 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)(puVar22 + -8) = FUN_108b3b440;
  func_0x000108b3b8a0();
  func_0x000108b3b878();
  func_0x000108b3b928();
  lVar32 = extraout_x8_03;
  uVar26 = extraout_x9;
  uVar29 = extraout_x10;
  while ((int)uVar29 != (int)uVar26) {
    func_0x000108b3b8c4();
    lVar32 = extraout_x8_04;
    uVar26 = extraout_x9_00;
    uVar29 = extraout_x10_00;
  }
  return (int *)(lVar32 + (long)*piVar20 * 0x1e0);
}



/* Entry: 108b3b440; end: 108b3b4bf;  */

long FUN_108b3b440(int *param_1)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  undefined8 extraout_x9;
  undefined8 uVar2;
  undefined8 extraout_x9_00;
  undefined8 extraout_x10;
  undefined8 uVar3;
  undefined8 extraout_x10_00;
  
  func_0x000108b3b8a0();
  func_0x000108b3b878();
  func_0x000108b3b928();
  lVar1 = extraout_x8;
  uVar2 = extraout_x9;
  uVar3 = extraout_x10;
  while ((int)uVar3 != (int)uVar2) {
    func_0x000108b3b8c4();
    lVar1 = extraout_x8_00;
    uVar2 = extraout_x9_00;
    uVar3 = extraout_x10_00;
  }
  return lVar1 + (long)*param_1 * 0x1e0;
}



/* Entry: 108b3b4c0; end: 108b3b507;  */

void FUN_108b3b4c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_108b3aa60(param_1,FUN_108b3b508,param_2,param_3,param_4,param_5,0x10,FUN_108b35c30,0);
  return;
}



/* Entry: 108b3b508; end: 108b3b53b;  */

void FUN_108b3b508(float *param_1,ulong param_2,long param_3,ulong param_4,int param_5,uint param_6)

{
  short *psVar1;
  ulong uVar2;
  
  psVar1 = (short *)(param_3 + (long)param_5 * 2);
  for (uVar2 = (ulong)(param_6 & ((int)param_6 >> 0x1f ^ 0xffffffffU)); uVar2 != 0;
      uVar2 = uVar2 - 1) {
    *param_1 = (float)(int)*psVar1 / 32768.0;
    psVar1 = (short *)((long)psVar1 +
                      (-(param_4 >> 0x1f & 1) & 0xfffffffe00000000 | (param_4 & 0xffffffff) << 1));
    param_1 = (float *)((long)param_1 +
                       (-(param_2 >> 0x1f & 1) & 0xfffffffc00000000 | (param_2 & 0xffffffff) << 2));
  }
  return;
}



/* Entry: 108b3b53c; end: 108b3b84f;  */

void FUN_108b3b53c(int *param_1,int param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int *extraout_x8;
  int *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 *extraout_x8_03;
  int *extraout_x8_04;
  int iVar5;
  int unaff_w20;
  uint *puVar6;
  int *piVar7;
  int iVar8;
  uint uStack_5c;
  
  piVar3 = param_1;
  func_0x000108b3b8a0();
  iVar8 = (int)piVar3;
  func_0x000108b3b878();
  piVar3 = param_1 + 0x4a;
  uVar4 = 0xfffffffb;
  switch(param_2) {
  case 0xfa1:
  case 0xfa7:
  case 0xfa9:
  case 0xfab:
  case 0xfad:
  case 0xfaf:
  case 0xfb1:
  case 0xfb5:
  case 0xfb7:
  case 0xfb9:
  case 0xfbb:
  case 0xfbd:
  case 0xfc5:
  case 0xfcb:
  case 0xfcf:
  case 0xfd9:
LAB_108b3b59c:
    func_0x000108b3b890();
    func_0x000108b3b91c();
    break;
  case 0xfa2:
    func_0x000108b3b890();
    iVar8 = *extraout_x8;
    if (iVar8 != -1000 && iVar8 != -1) {
      if (iVar8 < 1) {
        return;
      }
      iVar5 = *param_1 * 750000;
      iVar2 = *param_1 * 500;
      if (iVar2 <= iVar8) {
        iVar2 = iVar8;
      }
      iVar8 = iVar5;
      if (iVar2 <= iVar5) {
        iVar8 = iVar2;
      }
    }
    param_1[0x49] = iVar8;
    break;
  case 0xfa3:
    func_0x000108b3b890();
    piVar7 = (int *)*extraout_x8_03;
    if (piVar7 != (int *)0x0) {
      *piVar7 = 0;
      for (iVar8 = 0; iVar8 < param_1[1]; iVar8 = iVar8 + 1) {
        func_0x000108b3b8b4(param_1[2]);
        FUN_108b389a0(piVar3,0xfa3);
        *piVar7 = *piVar7 + uStack_5c;
        piVar3 = (int *)((long)piVar3 + (long)extraout_w8_01);
      }
    }
    break;
  case 0xfa5:
  case 0xfb2:
  case 0xfb3:
  case 0xfba:
  case 0xfbe:
  case 0xfc0:
  case 0xfc1:
  case 0xfc2:
  case 0xfc3:
  case 0xfc6:
  case 0xfc7:
  case 0xfcc:
  case 0xfcd:
  case 0xfd0:
  case 0xfd1:
  case 0xfd2:
  case 0xfd3:
  case 0xfd4:
  case 0xfd5:
  case 0xfd6:
  case 0xfd7:
    break;
  case 0xfbc:
    if (param_1[0x48] == 1) {
      FUN_108b3b440(param_1);
      _bzero();
      func_0x000108b3b484(param_1);
      _bzero();
    }
    iVar8 = 0;
    while ((iVar8 < param_1[1] && (piVar7 = piVar3, FUN_108b389a0(piVar3,0xfbc), (int)piVar7 == 0)))
    {
      func_0x000108b3b8b4();
      piVar3 = (int *)((long)piVar3 + (long)extraout_w8);
      iVar8 = iVar8 + 1;
    }
    break;
  case 0xfbf:
    func_0x000108b3b890();
    puVar6 = (uint *)*extraout_x8_01;
    if (puVar6 != (uint *)0x0) {
      iVar8 = 0;
      *puVar6 = 0;
      while ((iVar8 < param_1[1] && (piVar7 = piVar3, FUN_108b389a0(piVar3,0xfbf), (int)piVar7 == 0)
             )) {
        func_0x000108b3b8b4();
        piVar3 = (int *)((long)piVar3 + (long)extraout_w8_00);
        *puVar6 = *puVar6 ^ uStack_5c;
        iVar8 = iVar8 + 1;
      }
    }
    break;
  case 0xfc8:
    func_0x000108b3b890(0);
    param_1[0x47] = *extraout_x8_00;
    break;
  case 0xfc9:
    func_0x000108b3b890();
    if ((int *)*extraout_x8_02 != (int *)0x0) {
      *(int *)*extraout_x8_02 = param_1[0x47];
    }
    break;
  default:
    if (param_2 == 0x1400) {
      func_0x000108b3b890();
      iVar2 = *extraout_x8_04;
      if (iVar2 < 0) {
        return;
      }
      if (param_1[1] <= iVar2) {
        return;
      }
      if ((undefined8 *)*param_3 == (undefined8 *)0x0) {
        return;
      }
      for (iVar5 = 0; iVar2 != iVar5; iVar5 = iVar5 + 1) {
        iVar1 = unaff_w20;
        if (param_1[2] <= iVar5) {
          iVar1 = iVar8;
        }
        piVar3 = (int *)((long)piVar3 + (long)(int)(iVar1 + 7U & 0xfffffff8));
      }
      *(undefined8 *)*param_3 = piVar3;
      return;
    }
    if (param_2 != 0x2afa) {
      if (param_2 != 0x2b0b) {
        return;
      }
      goto LAB_108b3b59c;
    }
  case 4000:
  case 0xfa4:
  case 0xfa6:
  case 0xfa8:
  case 0xfaa:
  case 0xfac:
  case 0xfae:
  case 0xfb0:
  case 0xfb4:
  case 0xfb6:
  case 0xfb8:
  case 0xfc4:
  case 0xfca:
  case 0xfce:
  case 0xfd8:
    iVar8 = 0;
    func_0x000108b3b890();
    while ((iVar8 < param_1[1] && (func_0x000108b3b91c(), (int)uVar4 == 0))) {
      func_0x000108b3b8b4();
      iVar8 = iVar8 + 1;
    }
  }
  return;
}



/* Entry: 108b3b850; end: 108b3b877;  */

void FUN_108b3b850(undefined8 param_1,undefined8 param_2)

{
  FUN_108b3b53c(param_1,param_2,&stack0x00000000);
  return;
}



/* Entry: 108b3b878; end: 108b3b95b;  */

/* WARNING: Removing unreachable block (ram,0x000108b35988) */
/* WARNING: Removing unreachable block (ram,0x000108b35944) */
/* WARNING: Removing unreachable block (ram,0x000108b359a0) */
/* WARNING: Removing unreachable block (ram,0x000108b359cc) */
/* WARNING: Removing unreachable block (ram,0x000108b359e4) */
/* WARNING: Removing unreachable block (ram,0x000108b359e8) */
/* WARNING: Removing unreachable block (ram,0x000108b35a1c) */
/* WARNING: Removing unreachable block (ram,0x000108b35a48) */
/* WARNING: Removing unreachable block (ram,0x000108b35a70) */
/* WARNING: Removing unreachable block (ram,0x000108b35aa0) */
/* WARNING: Removing unreachable block (ram,0x000108b35aa8) */
/* WARNING: Removing unreachable block (ram,0x000108b35ac8) */
/* WARNING: Removing unreachable block (ram,0x000108b35a38) */

int FUN_108b3b878(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long unaff_x19;
  int iVar4;
  
  iVar1 = *(int *)(unaff_x19 + 0x118);
  uVar2 = *(uint *)(unaff_x19 + 0x114);
  if ((((iVar1 == 8000 || iVar1 == 12000) || iVar1 == 16000) || iVar1 == 48000) || iVar1 == 24000) {
    if (uVar2 - 0x800 < 6 && uVar2 - 0x800 != 2) {
      iVar1 = 0;
      if (uVar2 != 0x805) {
        iVar1 = 0x2820;
      }
      if (uVar2 == 0x804) {
        iVar3 = 0;
        iVar4 = 0x37e8;
      }
      else {
        iVar3 = 1;
        FUN_108b418e0(1);
        iVar4 = 0x37e8;
        if ((uVar2 & 0x806) != 0x804) {
          iVar4 = 0x3f68;
        }
      }
      iVar3 = iVar4 + iVar1 + iVar3;
    }
    else {
      iVar3 = -1;
    }
    return iVar3;
  }
  return -1;
}



/* Entry: 108b3b95c; end: 108b3bce3;  */

int * FUN_108b3b95c(int *param_1,int *param_2,ulong param_3,int *param_4,undefined8 param_5,
                   uint param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  long extraout_x8;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  int iVar10;
  int *piVar11;
  undefined1 *puVar12;
  undefined4 auStack_130 [2];
  undefined8 uStack_128;
  int *apiStack_120 [2];
  undefined1 auStack_110 [4];
  undefined1 auStack_10c [8];
  uint uStack_104;
  uint uStack_100;
  uint uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  uint uStack_f0;
  int iStack_ec;
  int *piStack_e8;
  int iStack_dc;
  int iStack_d8;
  undefined1 uStack_d1;
  int aiStack_d0 [24];
  long lStack_70;
  
  puVar12 = auStack_110;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  piVar4 = param_1;
  uStack_f8 = param_7;
  uStack_f4 = param_8;
  piStack_e8 = param_2;
  func_0x000108b3a180();
  if ((int)param_6 < 1) {
LAB_108b3ba48:
    piVar11 = (int *)0xffffffff;
  }
  else {
    apiStack_120[0] = &iStack_dc;
    piVar4 = param_1;
    FUN_108b3bce4(param_1,0xfbd);
    puVar12 = auStack_110;
    if ((int)piVar4 != 0) goto LAB_108b3bce0;
    uVar8 = (iStack_dc / 0x19) * 3;
    if ((int)uVar8 <= (int)param_6) {
      param_6 = uVar8;
    }
    (*(code *)PTR____chkstk_darwin_11034bd40)
              ((-(ulong)((param_6 & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000 |
               (ulong)(param_6 << 1) << 2) + 0xf & 0xfffffffffffffff0);
    lVar7 = -extraout_x8;
    puVar12 = puVar12 + lVar7;
    func_0x000108b3bfdc();
    uStack_fc = (uint)piVar4;
    func_0x000108b3bfe4();
    uStack_100 = (uint)piVar4;
    uVar8 = (uint)param_3;
    if ((int)uVar8 < 0) goto LAB_108b3ba48;
    uStack_104 = uVar8;
    if (uVar8 == 0) {
LAB_108b3bb44:
      piVar11 = (int *)(ulong)param_6;
      piVar6 = param_1 + 0x44;
      piVar4 = piStack_e8;
      uVar9 = param_3;
      for (iVar10 = 0; iVar10 < param_1[1]; iVar10 = iVar10 + 1) {
        puVar3 = &uStack_fc;
        if (param_1[2] <= iVar10) {
          puVar3 = &uStack_100;
        }
        if (((int)uVar9 != 0) && ((int)param_3 < 1)) {
          piVar4 = piVar6;
          piVar11 = (int *)0xfffffffd;
          goto LAB_108b3ba4c;
        }
        aiStack_d0[0] = 0;
        uStack_f0 = *puVar3;
        *(undefined4 *)((long)apiStack_120 + lVar7) = 0;
        *(undefined8 *)((long)&uStack_128 + lVar7) = 0;
        *(undefined4 *)((long)auStack_130 + lVar7) = uStack_f4;
        piVar11 = piVar6;
        iStack_ec = (int)param_3;
        piStack_e8 = piVar4;
        FUN_108b344d8();
        iVar1 = aiStack_d0[0];
        if ((int)uVar9 == 0) {
          iVar1 = 0;
        }
        piVar4 = piVar11;
        if ((int)piVar11 < 1) goto LAB_108b3ba4c;
        if (iVar10 < param_1[2]) {
          while( true ) {
            func_0x000108b3bfec();
            func_0x000108b3a1c0();
            if ((int)piVar4 == -1) break;
            func_0x000108b3c008();
            func_0x000108b3bfac();
          }
          while( true ) {
            func_0x000108b3bfec();
            func_0x000108b3a208();
            if ((int)piVar4 == -1) break;
            piVar5 = param_4;
            func_0x000108b3bfac(param_4,*param_1,piVar4,auStack_10c + lVar7,2);
            piVar4 = piVar5;
          }
        }
        else {
          while( true ) {
            func_0x000108b3bfec();
            func_0x000108b3a254();
            if ((int)piVar4 == -1) break;
            func_0x000108b3c008();
            func_0x000108b3bfac();
          }
        }
        piVar6 = (int *)((long)piVar6 + (long)(int)(uStack_f0 + 7 & 0xfffffff8));
        param_3 = (ulong)(uint)(iStack_ec - iVar1);
        piVar4 = (int *)((long)piStack_e8 + (long)iVar1);
        uVar9 = (ulong)uStack_104;
      }
      for (lVar7 = 0; piVar4 = piVar6, lVar7 < *param_1; lVar7 = lVar7 + 1) {
        if (*(char *)((long)param_1 + lVar7 + 0xc) == -1) {
          piVar6 = param_4;
          func_0x000108b3bfac(param_4,(long)*param_1,lVar7,0,0);
        }
      }
    }
    else {
      uVar2 = param_1[1];
      if ((int)uVar8 < (int)(uVar2 * 2 + -1)) {
LAB_108b3ba40:
        piVar11 = (int *)0xfffffffc;
      }
      else {
        iStack_ec = iStack_dc;
        piVar6 = piStack_e8;
        piVar11 = (int *)0x0;
        uStack_f0 = param_6;
        for (uVar8 = 0; iVar10 = (int)piVar11, (uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)) != uVar8
            ; uVar8 = uVar8 + 1) {
          if ((int)param_3 < 1) goto LAB_108b3ba40;
          *(undefined8 *)((long)apiStack_120 + lVar7) = 0;
          *(undefined8 *)((long)apiStack_120 + lVar7 + 8) = 0;
          piVar4 = piVar6;
          FUN_108b33ee8(piVar6,param_3,uVar2 - 1 != uVar8,&uStack_d1,0,aiStack_d0,0,&iStack_d8);
          piVar11 = piVar4;
          if ((int)piVar4 < 0) goto LAB_108b3ba4c;
          piVar4 = piVar6;
          FUN_108b356f8(piVar6,iStack_d8,iStack_ec);
          if ((uVar8 != 0) && (iVar10 != (int)piVar4)) goto LAB_108b3ba40;
          piVar6 = (int *)((long)piVar6 + (long)iStack_d8);
          param_3 = (ulong)(uint)((int)param_3 - iStack_d8);
          piVar11 = piVar4;
        }
        if (-1 < iVar10) {
          param_3 = (ulong)uStack_104;
          param_6 = uStack_f0;
          if (iVar10 <= (int)uStack_f0) goto LAB_108b3bb44;
          piVar11 = (int *)0xfffffffe;
        }
      }
    }
  }
LAB_108b3ba4c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return piVar11;
  }
  ___stack_chk_fail();
LAB_108b3bce0:
  _abort();
  *(undefined1 **)(puVar12 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)(puVar12 + -8) = FUN_108b3bce4;
  *(undefined1 **)(puVar12 + -0x18) = puVar12;
  FUN_108b3bdbc();
  return piVar4;
}



/* Entry: 108b3bce4; end: 108b3bd3f;  */

void FUN_108b3bce4(undefined8 param_1,undefined8 param_2)

{
  FUN_108b3bdbc(param_1,param_2,&stack0x00000000);
  return;
}



/* Entry: 108b3bd40; end: 108b3bdbb;  */

void FUN_108b3bd40(long param_1,int param_2,int param_3,float *param_4,ulong param_5,uint param_6)

{
  undefined2 *puVar1;
  ulong uVar2;
  float fVar3;
  
  uVar2 = (ulong)(param_6 & ((int)param_6 >> 0x1f ^ 0xffffffffU));
  if (param_4 == (float *)0x0) {
    puVar1 = (undefined2 *)(param_1 + (long)param_3 * 2);
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar1 = 0;
      puVar1 = puVar1 + param_2;
    }
  }
  else {
    puVar1 = (undefined2 *)(param_1 + (long)param_3 * 2);
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      fVar3 = *param_4 * 32768.0;
      if (*param_4 * 32768.0 <= -32768.0) {
        fVar3 = -32768.0;
      }
      fVar3 = (float)NEON_fminnm(fVar3,0x46fffe00);
      *puVar1 = (short)(int)fVar3;
      param_4 = (float *)((long)param_4 +
                         (-(param_5 >> 0x1f & 1) & 0xfffffffc00000000 | (param_5 & 0xffffffff) << 2)
                         );
      puVar1 = puVar1 + param_2;
    }
  }
  return;
}



/* Entry: 108b3bdbc; end: 108b3bfab;  */

void FUN_108b3bdbc(long param_1,int param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  int *extraout_x8;
  undefined8 *extraout_x8_00;
  int iVar5;
  long lVar6;
  uint *puVar7;
  int iVar8;
  uint uStack_5c;
  
  lVar3 = param_1;
  func_0x000108b3bfdc();
  iVar8 = (int)lVar3;
  func_0x000108b3bfe4();
  lVar6 = param_1 + 0x110;
  uVar4 = 0xfffffffb;
  switch(param_2) {
  case 0xfbc:
    iVar8 = 0;
    while ((iVar8 < *(int *)(param_1 + 4) &&
           (lVar3 = lVar6, FUN_108b35494(lVar6,0xfbc), (int)lVar3 == 0))) {
      func_0x000108b3bfb8();
      iVar8 = iVar8 + 1;
    }
    break;
  case 0xfbe:
  case 0xfc0:
  case 0xfc1:
  case 0xfc3:
  case 0xfc4:
  case 0xfc5:
  case 0xfc6:
  case 0xfc8:
  case 0xfc9:
  case 0xfca:
  case 0xfcb:
  case 0xfcc:
    break;
  case 0xfbf:
    func_0x000108b3bfcc();
    puVar7 = (uint *)*extraout_x8_00;
    if (puVar7 != (uint *)0x0) {
      iVar8 = 0;
      *puVar7 = 0;
      while ((iVar8 < *(int *)(param_1 + 4) &&
             (lVar3 = lVar6, FUN_108b35494(lVar6,0xfbf), (int)lVar3 == 0))) {
        func_0x000108b3bfb8();
        *puVar7 = *puVar7 ^ uStack_5c;
        iVar8 = iVar8 + 1;
      }
    }
    break;
  case 0xfc2:
  case 0xfce:
LAB_108b3beb0:
    iVar8 = 0;
    func_0x000108b3bfcc();
    while ((iVar8 < *(int *)(param_1 + 4) && (func_0x000108b3bffc(), (int)uVar4 == 0))) {
      func_0x000108b3bfb8();
      iVar8 = iVar8 + 1;
    }
    break;
  default:
    if (param_2 != 0xfa9) {
      if (param_2 == 0xfaa) goto LAB_108b3beb0;
      if (param_2 != 0xfab) {
        if (param_2 != 0x1402) {
          return;
        }
        func_0x000108b3bfcc();
        iVar2 = *extraout_x8;
        if (iVar2 < 0) {
          return;
        }
        if (*(int *)(param_1 + 4) <= iVar2) {
          return;
        }
        if ((long *)*param_3 == (long *)0x0) {
          return;
        }
        for (iVar5 = 0; iVar2 != iVar5; iVar5 = iVar5 + 1) {
          iVar1 = (int)lVar3;
          if (*(int *)(param_1 + 8) <= iVar5) {
            iVar1 = iVar8;
          }
          lVar6 = lVar6 + (int)(iVar1 + 7U & 0xfffffff8);
        }
        *(long *)*param_3 = lVar6;
        return;
      }
    }
  case 0xfbd:
  case 0xfc7:
  case 0xfcd:
  case 0xfcf:
    func_0x000108b3bfcc();
    func_0x000108b3bffc();
  }
  return;
}



/* Entry: 108b3bfac; end: 108b3c023;  */

void FUN_108b3bfac(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x000108b3bfb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 108b3c024; end: 108b3c173;  */

byte * FUN_108b3c024(byte *param_1,byte *param_2,undefined8 param_3,undefined8 param_4)

{
  byte *pbVar1;
  int iVar2;
  ulong uVar3;
  byte *pbVar4;
  long lVar5;
  undefined1 uStack_51;
  
  if ((int)param_3 < 1) {
    return (byte *)0xfffffffc;
  }
  iVar2 = *(int *)(param_1 + 4);
  lVar5 = (long)iVar2;
  if (iVar2 == 0) {
    *param_1 = *param_2;
    pbVar4 = param_2;
    FUN_108b33e78(param_2,8000);
    *(int *)(param_1 + 0x1e8) = (int)pbVar4;
  }
  else if (3 < (*param_2 ^ *param_1)) {
    return (byte *)0xfffffffc;
  }
  pbVar4 = param_2;
  FUN_108b356a8(param_2,param_3);
  if ((0 < (int)pbVar4) && (*(int *)(param_1 + 0x1e8) * ((int)pbVar4 + iVar2) < 0x3c1)) {
    FUN_108b33ee8(param_2,param_3,param_4,&uStack_51,param_1 + lVar5 * 8 + 8,
                  param_1 + lVar5 * 2 + 0x188,0,0,param_1 + lVar5 * 8 + 0x1f0,
                  param_1 + lVar5 * 4 + 0x370);
    if (0 < (int)param_2) {
      param_1[(long)*(int *)(param_1 + 4) + 0x430] = (byte)param_2;
      uVar3 = (ulong)*(uint *)(param_1 + 4);
      while( true ) {
        lVar5 = (long)(int)uVar3 + 1;
        *(int *)(param_1 + 4) = (int)lVar5;
        if ((int)pbVar4 < 2) break;
        pbVar1 = param_1 + lVar5 * 4 + 0x370;
        pbVar1[0] = 0;
        pbVar1[1] = 0;
        pbVar1[2] = 0;
        pbVar1[3] = 0;
        param_1[(long)*(int *)(param_1 + 4) + 0x430] = 0;
        uVar3 = (ulong)*(int *)(param_1 + 4);
        pbVar1 = param_1 + uVar3 * 8 + 0x1f0;
        pbVar1[0] = 0;
        pbVar1[1] = 0;
        pbVar1[2] = 0;
        pbVar1[3] = 0;
        pbVar1[4] = 0;
        pbVar1[5] = 0;
        pbVar1[6] = 0;
        pbVar1[7] = 0;
        pbVar4 = (byte *)(ulong)((int)pbVar4 - 1);
      }
      return (byte *)0x0;
    }
    return param_2;
  }
  return (byte *)0xfffffffc;
}


