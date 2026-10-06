/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 004fb134; end: 004fb16f;  */

undefined8 FUN_004fb134(undefined8 param_1)

{
  func_0x004fe3d0();
  return param_1;
}



/* Entry: 004fb170; end: 004fb2f7;  */

void FUN_004fb170(long param_1)

{
  ulong *puVar1;
  
  FUN_004faed0();
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
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



/* Entry: 004fb2f8; end: 004fb363;  */

void FUN_004fb2f8(ulong *param_1)

{
  int iVar1;
  undefined1 in_ZR;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  int unaff_w24;
  
  func_0x004fe220();
  if ((unaff_x22 & 1) != 0) {
    func_0x004fe644();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 != 0) {
    func_0x004fe7b8();
    if (!(bool)in_ZR) {
      if (unaff_w24 != 0) {
        param_1 = unaff_x21;
        FUN_004faed0();
      }
      *(int *)((long)unaff_x21 + 0x1c) = iVar1;
    }
    switch(iVar1) {
    case 1:
      if (unaff_w24 == iVar1) {
        func_0x004fe1c0();
        func_0x004fb2fc();
        goto LAB_004f6f30;
      }
      func_0x004fe460();
      FUN_004fdcc0();
      break;
    case 2:
      if (unaff_w24 == iVar1) {
        func_0x004fe1c0();
        func_0x004fe8e8();
        func_0x004fb318();
        goto LAB_004f6f30;
      }
      func_0x004fe460();
      FUN_004fdd14();
      break;
    case 3:
      if (unaff_w24 == iVar1) {
        func_0x004fe1c0();
        func_0x004fe5cc();
        func_0x004fb340();
        goto LAB_004f6f30;
      }
      func_0x004fe460();
      FUN_004fdd70();
      break;
    case 4:
      if (unaff_w24 == iVar1) {
        func_0x004fe1c0();
        func_0x004fe5cc();
        func_0x004fb34c();
        goto LAB_004f6f30;
      }
      func_0x004fe460();
      FUN_004fddc0();
      break;
    case 5:
      if (unaff_w24 == iVar1) {
        func_0x004fe1c0();
        func_0x004fe5cc();
        func_0x004fb358();
        goto LAB_004f6f30;
      }
      func_0x004fe460();
      FUN_004fde10();
      break;
    case 6:
      if (unaff_w24 == iVar1) {
        func_0x004fe1c0();
        FUN_004fb364();
        goto LAB_004f6f30;
      }
      func_0x004fe460();
      FUN_004fde60();
      break;
    case 7:
      if (unaff_w24 == iVar1) {
        func_0x004fe1c0();
        func_0x004fe5cc();
        func_0x004fb3c0();
        goto LAB_004f6f30;
      }
      func_0x004fe460();
      FUN_004fdecc();
      break;
    case 8:
      if (unaff_w24 == iVar1) {
        func_0x004fe1c0();
        func_0x004fe5cc();
        func_0x004fb3cc();
        goto LAB_004f6f30;
      }
      func_0x004fe460();
      FUN_004fdf1c();
      break;
    case 9:
      if (unaff_w24 == iVar1) {
        func_0x004fe1c0();
        func_0x004fe5cc();
        func_0x004fb3d8();
        goto LAB_004f6f30;
      }
      func_0x004fe460();
      FUN_004fdf6c();
      break;
    case 10:
      if (unaff_w24 == iVar1) {
        func_0x004fe1c0();
        func_0x004fb3e4();
        goto LAB_004f6f30;
      }
      func_0x004fe460();
      FUN_004fdfbc();
      break;
    case 0xb:
      if (unaff_w24 == iVar1) {
        func_0x004fe1c0();
        func_0x004fb400();
        goto LAB_004f6f30;
      }
      func_0x004fe460();
      FUN_004fe010();
      break;
    case 0xc:
      if (unaff_w24 == iVar1) {
        func_0x004fe1c0();
        func_0x004fe5cc();
        func_0x004fb41c();
        goto LAB_004f6f30;
      }
      func_0x004fe460();
      FUN_004fe064();
      break;
    default:
      goto LAB_004f6f30;
    }
    unaff_x21[2] = (ulong)param_1;
  }
LAB_004f6f30:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004fe260();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004fb364; end: 004fb3bf;  */

void FUN_004fb364(void)

{
  ulong *puVar1;
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x004fe250();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x004fe690();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x004fe684();
    if (extraout_x8 == 0) {
      func_0x004d3428();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      func_0x004fe7f0();
    }
  }
  func_0x004fe2cc();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x004fe260();
    if ((*puVar1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004fb3c0; end: 004fb427;  */

void FUN_004fb3c0(long param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004fb428; end: 004fb44b;  */

undefined8 FUN_004fb428(undefined8 param_1)

{
  func_0x004fe3d0();
  return param_1;
}



/* Entry: 004fb44c; end: 004fb45f;  */

void FUN_004fb44c(void)

{
  FUN_004fb428();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004fb460; end: 004fb47f;  */

undefined ** FUN_004fb460(void)

{
  return &PTR_DAT_009f7f70;
}



/* Entry: 004fb480; end: 004fb4df;  */

long * FUN_004fb480(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x004fe194();
  if ((int)param_1[2] != 0) {
    func_0x004fe1a4();
    func_0x004fe270();
    func_0x004fe214();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x004fe404();
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
      func_0x0054f690();
      param_4 = unaff_x19;
      func_0x0054ed58();
    }
    func_0x0054f690();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4,lVar2,param_3 & 0xffffffff);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 004fb4e0; end: 004fb513;  */

long FUN_004fb4e0(long param_1)

{
  long extraout_x8;
  long lVar1;
  ulong uVar2;
  
  func_0x004fe43c();
  lVar1 = extraout_x8;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar2 + 0x10);
    }
    lVar1 = lVar1 + extraout_x8;
  }
  *(int *)(param_1 + 0x14) = (int)lVar1;
  return lVar1;
}



/* Entry: 004fb514; end: 004fb537;  */

undefined8 FUN_004fb514(undefined8 param_1)

{
  func_0x004fe3d0();
  return param_1;
}



/* Entry: 004fb538; end: 004fb54b;  */

void FUN_004fb538(void)

{
  FUN_004fb514();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004fb54c; end: 004fb56b;  */

undefined ** FUN_004fb54c(void)

{
  return &PTR_DAT_009f7fc8;
}



/* Entry: 004fb56c; end: 004fb5eb;  */

long * FUN_004fb56c(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x004fe194();
  if ((int)param_1[2] != 0) {
    func_0x004fe1a4();
    func_0x004fe270();
    func_0x004fe214();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x14) != 0) {
    func_0x004fe1a4();
    func_0x004fe588();
    func_0x004fe214();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004fe404();
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
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 004fb5ec; end: 004fb65f;  */

long FUN_004fb5ec(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    lVar1 = lVar1 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x14)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x18) = (int)lVar1;
  return lVar1;
}



/* Entry: 004fb660; end: 004fb683;  */

undefined8 FUN_004fb660(undefined8 param_1)

{
  func_0x004fe3d0();
  return param_1;
}



/* Entry: 004fb684; end: 004fb697;  */

void FUN_004fb684(void)

{
  FUN_004fb660();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004fb698; end: 004fb713;  */

undefined ** FUN_004fb698(void)

{
  return &PTR_DAT_009f8020;
}



/* Entry: 004fb714; end: 004fb737;  */

undefined8 FUN_004fb714(undefined8 param_1)

{
  func_0x004fe3d0();
  return param_1;
}



/* Entry: 004fb738; end: 004fb74b;  */

void FUN_004fb738(void)

{
  FUN_004fb714();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004fb74c; end: 004fb7c7;  */

undefined ** FUN_004fb74c(void)

{
  return &PTR_DAT_009f8078;
}



/* Entry: 004fb7c8; end: 004fb7eb;  */

undefined8 FUN_004fb7c8(undefined8 param_1)

{
  func_0x004fe3d0();
  return param_1;
}



/* Entry: 004fb7ec; end: 004fb7ff;  */

void FUN_004fb7ec(void)

{
  FUN_004fb7c8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004fb800; end: 004fb87b;  */

undefined ** FUN_004fb800(void)

{
  return &PTR_DAT_009f80d0;
}



/* Entry: 004fb87c; end: 004fb89f;  */

undefined8 FUN_004fb87c(undefined8 param_1)

{
  func_0x004fe3d0();
  return param_1;
}



/* Entry: 004fb8a0; end: 004fb8b3;  */

void FUN_004fb8a0(void)

{
  FUN_004fb87c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004fb8b4; end: 004fb92f;  */

undefined ** FUN_004fb8b4(void)

{
  return &PTR_DAT_009f8120;
}



/* Entry: 004fb930; end: 004fb953;  */

undefined8 FUN_004fb930(undefined8 param_1)

{
  func_0x004fe3d0();
  return param_1;
}



/* Entry: 004fb954; end: 004fb967;  */

void FUN_004fb954(void)

{
  FUN_004fb930();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004fb968; end: 004fb9e3;  */

undefined ** FUN_004fb968(void)

{
  return &PTR_DAT_009f8178;
}



/* Entry: 004fb9e4; end: 004fba07;  */

undefined8 FUN_004fb9e4(undefined8 param_1)

{
  func_0x004fe3d0();
  return param_1;
}



/* Entry: 004fba08; end: 004fba1b;  */

void FUN_004fba08(void)

{
  FUN_004fb9e4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004fba1c; end: 004fba3b;  */

undefined ** FUN_004fba1c(void)

{
  return &PTR_DAT_009f81d0;
}



/* Entry: 004fba3c; end: 004fba9b;  */

long * FUN_004fba3c(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x004fe194();
  if ((int)param_1[2] != 0) {
    func_0x004fe1a4();
    func_0x004fe270();
    func_0x004fe214();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x004fe404();
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
      func_0x0054f690();
      param_4 = unaff_x19;
      func_0x0054ed58();
    }
    func_0x0054f690();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4,lVar2,param_3 & 0xffffffff);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 004fba9c; end: 004fbacf;  */

long FUN_004fba9c(long param_1)

{
  long extraout_x8;
  long lVar1;
  ulong uVar2;
  
  func_0x004fe43c();
  lVar1 = extraout_x8;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar2 + 0x10);
    }
    lVar1 = lVar1 + extraout_x8;
  }
  *(int *)(param_1 + 0x14) = (int)lVar1;
  return lVar1;
}



/* Entry: 004fbad0; end: 004fbaf3;  */

undefined8 FUN_004fbad0(undefined8 param_1)

{
  func_0x004fe3d0();
  return param_1;
}



/* Entry: 004fbaf4; end: 004fbb07;  */

void FUN_004fbaf4(void)

{
  FUN_004fbad0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004fbb08; end: 004fbb27;  */

undefined ** FUN_004fbb08(void)

{
  return &PTR_DAT_009f8230;
}



/* Entry: 004fbb28; end: 004fbb87;  */

long * FUN_004fbb28(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x004fe194();
  if ((int)param_1[2] != 0) {
    func_0x004fe1a4();
    func_0x004fe270();
    func_0x004fe214();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x004fe404();
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
      func_0x0054f690();
      param_4 = unaff_x19;
      func_0x0054ed58();
    }
    func_0x0054f690();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4,lVar2,param_3 & 0xffffffff);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 004fbb88; end: 004fbbbb;  */

long FUN_004fbb88(long param_1)

{
  long extraout_x8;
  long lVar1;
  ulong uVar2;
  
  func_0x004fe43c();
  lVar1 = extraout_x8;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar2 + 0x10);
    }
    lVar1 = lVar1 + extraout_x8;
  }
  *(int *)(param_1 + 0x14) = (int)lVar1;
  return lVar1;
}



/* Entry: 004fbbbc; end: 004fbbef;  */

long FUN_004fbbbc(long param_1)

{
  func_0x004fe3d0();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 004fbbf0; end: 004fbc03;  */

void FUN_004fbbf0(void)

{
  FUN_004fbbbc();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004fbc04; end: 004fbc0f;  */

undefined ** FUN_004fbc04(void)

{
  return &PTR_DAT_009f8280;
}



/* Entry: 004fbc10; end: 004fbce7;  */

void FUN_004fbc10(void)

{
  ulong extraout_x8;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x004fe57c();
  if ((extraout_x8 & 1) != 0) {
    func_0x004fe810();
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
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



/* Entry: 004fbce8; end: 004fbceb;  */

void FUN_004fbce8(void)

{
  ulong *puVar1;
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x004fe250();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x004fe690();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x004fe684();
    if (extraout_x8 == 0) {
      func_0x004d3428();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      func_0x004fe7f0();
    }
  }
  func_0x004fe2cc();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x004fe260();
    if ((*puVar1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004fbcec; end: 004fbd0f;  */

undefined8 FUN_004fbcec(undefined8 param_1)

{
  func_0x004fe3d0();
  return param_1;
}



/* Entry: 004fbd10; end: 004fbd23;  */

void FUN_004fbd10(void)

{
  FUN_004fbcec();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004fbd24; end: 004fbd9f;  */

undefined ** FUN_004fbd24(void)

{
  return &PTR_DAT_009f82d8;
}



/* Entry: 004fbda0; end: 004fbdc3;  */

undefined8 FUN_004fbda0(undefined8 param_1)

{
  func_0x004fe3d0();
  return param_1;
}



/* Entry: 004fbdc4; end: 004fbdd7;  */

void FUN_004fbdc4(void)

{
  FUN_004fbda0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004fbdd8; end: 004fbe53;  */

undefined ** FUN_004fbdd8(void)

{
  return &PTR_DAT_009f8320;
}



/* Entry: 004fbe54; end: 004fbe9b;  */

void FUN_004fbe54(void)

{
  ulong extraout_x8;
  long unaff_x19;
  
  func_0x004fe498();
  func_0x004fe900(&PTR_FUN_009f7308);
  if ((extraout_x8 & 1) != 0) {
    func_0x004fe1d0();
  }
  FUN_004fc780(unaff_x19 + 0x10);
  *(undefined4 *)(unaff_x19 + 0x28) = 0;
  return;
}



/* Entry: 004fbe9c; end: 004fbec7;  */

long FUN_004fbe9c(long param_1)

{
  func_0x004fe3d0();
  FUN_004fc7a0(param_1 + 0x10);
  return param_1;
}



/* Entry: 004fbec8; end: 004fbecb;  */

long FUN_004fbec8(long param_1)

{
  func_0x004fe3d0();
  FUN_004fc7a0(param_1 + 0x10);
  return param_1;
}



/* Entry: 004fbecc; end: 004fbedf;  */

void FUN_004fbecc(void)

{
  FUN_004fbe9c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004fbee0; end: 004fbeeb;  */

undefined ** FUN_004fbee0(void)

{
  return &PTR_DAT_009f8370;
}



/* Entry: 004fbeec; end: 004fbf1f;  */

void FUN_004fbeec(void)

{
  char in_NG;
  char in_OV;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x004fe76c();
  if (in_NG == in_OV) {
    func_0x004fe828();
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
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



/* Entry: 004fbf20; end: 004fbf8b;  */

long * FUN_004fbf20(undefined8 param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  int iVar3;
  int iVar4;
  
  func_0x004fe194();
  func_0x004fe5d8();
  while (unaff_w22 != unaff_w21) {
    func_0x004fe158();
    param_3 = (ulong)*(uint *)(param_2 + 0x14);
    func_0x004fe2c0();
    func_0x004fe638();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004fe404();
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
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 004fbf8c; end: 004fbfdb;  */

void FUN_004fbf8c(void)

{
  long unaff_x19;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  func_0x004fe134();
  while (unaff_x22 != 0) {
    FUN_004fbfdc(*unaff_x21);
    func_0x004fe6f0();
    unaff_x21 = unaff_x21 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x004fe918();
  }
  func_0x004fe7a0();
  return;
}



/* Entry: 004fbfdc; end: 004fbff7;  */

long FUN_004fbfdc(long param_1)

{
  long extraout_x8;
  
  FUN_004f9024();
  FUN_004fe0f0();
  return param_1 + extraout_x8;
}



/* Entry: 004fbff8; end: 004fbffb;  */

void FUN_004fbff8(ulong *param_1)

{
  long unaff_x20;
  
  func_0x004fe368();
  FUN_004fc02c();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004fe31c();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004fbffc; end: 004fc02b;  */

void FUN_004fbffc(ulong *param_1)

{
  long unaff_x20;
  
  func_0x004fe368();
  FUN_004fc02c();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004fe31c();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004fc02c; end: 004fc03b;  */

void FUN_004fc02c(long *param_1,long param_2)

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
  FUN_0054d5a8();
  plVar2 = param_1;
  func_0x0054d67c();
  plVar3 = (long *)*unaff_x25;
  func_0x0054d6a8();
  plVar5 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x0054d6b0();
    param_1 = param_1 + (int)plVar2;
    plVar5 = unaff_x25 + (int)plVar2;
  }
  lVar4 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, plVar5 < unaff_x25 + unaff_x26; plVar5 = plVar5 + 1) {
    plVar2 = plVar3;
    (**(code **)(*plVar3 + 0x10))(plVar3,lVar4);
    *param_1 = (long)plVar2;
    func_0x0054d694();
    param_1 = param_1 + 1;
  }
  func_0x0054d60c();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 004fc03c; end: 004fc06f;  */

long FUN_004fc03c(long param_1)

{
  func_0x004fe3d0();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004fbe9c();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 004fc070; end: 004fc083;  */

void FUN_004fc070(void)

{
  FUN_004fc03c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004fc084; end: 004fc08f;  */

undefined ** FUN_004fc084(void)

{
  return &PTR_DAT_009f83b8;
}



/* Entry: 004fc090; end: 004fc0cf;  */

void FUN_004fc090(void)

{
  ulong extraout_x8;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x004fe57c();
  if ((extraout_x8 & 1) != 0) {
    FUN_004fbeec(*(undefined8 *)(unaff_x19 + 0x18));
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined1 *)(unaff_x19 + 0x20) = 0;
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
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



/* Entry: 004fc0d0; end: 004fc157;  */

long * FUN_004fc0d0(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x004fe194();
  if ((char)param_1[4] == '\x01') {
    func_0x004fe1a4();
    func_0x004fe524();
    func_0x004fe280();
    param_4 = param_1;
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x28);
    param_4 = (long *)((long)&MACH_HEADER.cpusubtype + 2);
    func_0x004fe3e8();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004fe404();
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
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 004fc158; end: 004fc1af;  */

void FUN_004fc158(void)

{
  int iVar1;
  ulong extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x004fe57c();
  if ((extraout_x8 & 1) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(unaff_x19 + 0x18);
    FUN_004fc1b0();
    iVar1 = iVar1 + 1;
  }
  iVar1 = iVar1 + (uint)*(byte *)(unaff_x19 + 0x20) * 2;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x004fe918();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x14) = iVar1;
  return;
}



/* Entry: 004fc1b0; end: 004fc1cb;  */

long FUN_004fc1b0(long param_1)

{
  long extraout_x8;
  
  FUN_004fbf8c();
  FUN_004fe0f0();
  return param_1 + extraout_x8;
}



/* Entry: 004fc1cc; end: 004fc1cf;  */

void FUN_004fc1cc(void)

{
  ulong *puVar1;
  ulong *extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x004fe250();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x004fe690();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x004fe684();
    if (extraout_x8 == (ulong *)0x0) {
      FUN_004fe0b4();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      puVar1 = extraout_x8;
      FUN_004fbffc();
    }
  }
  if (*(char *)(unaff_x20 + 0x20) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x20) = 1;
  }
  func_0x004fe2cc();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x004fe260();
    if ((*puVar1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004fc1d0; end: 004fc203;  */

long FUN_004fc1d0(long param_1)

{
  func_0x004fe3d0();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_00523aac();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 004fc204; end: 004fc207;  */

long FUN_004fc204(long param_1)

{
  func_0x004fe3d0();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_00523aac();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 004fc208; end: 004fc21b;  */

void FUN_004fc208(void)

{
  FUN_004fc1d0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004fc21c; end: 004fc227;  */

undefined ** FUN_004fc21c(void)

{
  return &PTR_DAT_009f8400;
}



/* Entry: 004fc228; end: 004fc263;  */

void FUN_004fc228(void)

{
  ulong extraout_x8;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x004fe57c();
  if ((extraout_x8 & 1) != 0) {
    func_0x004fe820();
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
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



/* Entry: 004fc264; end: 004fc307;  */

long * FUN_004fc264(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x004fe194();
  if ((int)param_1[4] != 0) {
    func_0x004fe1a4();
    func_0x004fe524();
    func_0x004fe214();
    param_4 = param_1;
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18);
    param_1 = (long *)((long)&MACH_HEADER.magic + 2);
    func_0x004fe3e8();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    func_0x004fe1a4();
    func_0x004fe830();
    func_0x004fe280();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004fe404();
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
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 004fc308; end: 004fc383;  */

void FUN_004fc308(int param_1)

{
  ulong extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x9;
  long unaff_x19;
  
  func_0x004fe57c();
  if ((extraout_x8 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x004fe818();
    param_1 = param_1 + 1;
  }
  if (*(int *)(unaff_x19 + 0x20) != 0) {
    func_0x004fe2e0((int)LZCOUNT((long)*(int *)(unaff_x19 + 0x20)) * 9);
  }
  if (*(int *)(unaff_x19 + 0x24) != 0) {
    func_0x004fe298((int)LZCOUNT(*(int *)(unaff_x19 + 0x24)) * 9);
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x004fe918();
    lVar1 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    param_1 = (int)lVar1 + param_1;
  }
  *(int *)(unaff_x19 + 0x14) = param_1;
  return;
}



/* Entry: 004fc384; end: 004fc3f7;  */

void FUN_004fc384(void)

{
  ulong *puVar1;
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x004fe250();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x004fe690();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x004fe684();
    if (extraout_x8 == 0) {
      FUN_004fd908();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      func_0x004fe7e8();
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    *(int *)(unaff_x21 + 0x24) = *(int *)(unaff_x20 + 0x24);
  }
  func_0x004fe2cc();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x004fe260();
    if ((*puVar1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004fc3f8; end: 004fc42b;  */

long FUN_004fc3f8(long param_1)

{
  func_0x004fe3d0();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 004fc42c; end: 004fc42f;  */

long FUN_004fc42c(long param_1)

{
  func_0x004fe3d0();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 004fc430; end: 004fc443;  */

void FUN_004fc430(void)

{
  FUN_004fc3f8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004fc444; end: 004fc44f;  */

undefined ** FUN_004fc444(void)

{
  return &PTR_DAT_009f8448;
}



/* Entry: 004fc450; end: 004fc4bf;  */

long * FUN_004fc450(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x004fe194();
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    func_0x004fe200();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    func_0x004fe1a4();
    func_0x004fe538();
    func_0x004fe214();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004fe404();
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
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 004fc4c0; end: 004fc523;  */

void FUN_004fc4c0(int param_1)

{
  ulong extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x9;
  long unaff_x19;
  
  func_0x004fe57c();
  if ((extraout_x8 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x004fe808();
    param_1 = param_1 + 1;
  }
  if (*(int *)(unaff_x19 + 0x20) != 0) {
    func_0x004fe2e0((int)LZCOUNT((long)*(int *)(unaff_x19 + 0x20)) * 9);
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x004fe918();
    lVar1 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    param_1 = (int)lVar1 + param_1;
  }
  *(int *)(unaff_x19 + 0x14) = param_1;
  return;
}



/* Entry: 004fc524; end: 004fc69f;  */

void FUN_004fc524(void)

{
  ulong *puVar1;
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x004fe250();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x004fe690();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x004fe684();
    if (extraout_x8 == 0) {
      func_0x004d3428();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      func_0x004fe7f0();
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  func_0x004fe2cc();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x004fe260();
    if ((*puVar1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004fc6a0; end: 004fc6bf;  */

void FUN_004fc6a0(void)

{
  func_0x004fe604();
  FUN_004f68a4();
  return;
}



/* Entry: 004fc6c0; end: 004fc6e7;  */

void FUN_004fc6c0(void)

{
  long extraout_x8;
  
  func_0x004fe7dc();
  if (extraout_x8 != 0) {
    func_0x004fe670();
  }
  return;
}



/* Entry: 004fc6e8; end: 004fc707;  */

void FUN_004fc6e8(void)

{
  func_0x004fe604();
  func_0x004f8518();
  return;
}



/* Entry: 004fc708; end: 004fc72f;  */

void FUN_004fc708(void)

{
  long extraout_x8;
  
  func_0x004fe7dc();
  if (extraout_x8 != 0) {
    func_0x004fe670();
  }
  return;
}



/* Entry: 004fc730; end: 004fc757;  */

void FUN_004fc730(void)

{
  long extraout_x8;
  
  func_0x004fe7dc();
  if (extraout_x8 != 0) {
    func_0x004fe670();
  }
  return;
}



/* Entry: 004fc758; end: 004fc77f;  */

void FUN_004fc758(void)

{
  long extraout_x8;
  
  func_0x004fe7dc();
  if (extraout_x8 != 0) {
    func_0x004fe670();
  }
  return;
}



/* Entry: 004fc780; end: 004fc79f;  */

void FUN_004fc780(void)

{
  func_0x004fe604();
  FUN_004fc02c();
  return;
}



/* Entry: 004fc7a0; end: 004fc7c7;  */

void FUN_004fc7a0(void)

{
  long extraout_x8;
  
  func_0x004fe7dc();
  if (extraout_x8 != 0) {
    func_0x004fe670();
  }
  return;
}



/* Entry: 004fc7c8; end: 004fd1b7;  */

void FUN_004fc7c8(long param_1)

{
  if (param_1 == 0) {
    func_0x004fe3e0();
  }
  else {
    func_0x004fe1f4();
  }
  func_0x004fe7ac(&PTR_DAT_009f6728);
  return;
}



/* Entry: 004fd1b8; end: 004fd1cb;  */

void FUN_004fd1b8(ulong *param_1)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  
  if (0 < (int)param_1[1]) {
    uVar1 = (uint)param_1[1];
    puVar2 = param_1;
    if ((*param_1 & 1) != 0) {
      puVar2 = (ulong *)(*param_1 + 7);
    }
    if ((int)uVar1 < 2) {
      uVar1 = 1;
    }
    uVar3 = (ulong)uVar1;
    do {
      (**(code **)(*(long *)*puVar2 + 0x18))();
      uVar3 = uVar3 - 1;
      puVar2 = puVar2 + 1;
    } while (uVar3 != 0);
    *(undefined4 *)(param_1 + 1) = 0;
    return;
  }
  return;
}



/* Entry: 004fd1cc; end: 004fd227;  */

undefined8 * FUN_004fd1cc(undefined8 *param_1)

{
  undefined8 unaff_x21;
  
  func_0x004fe4d0();
  if (param_1 == (undefined8 *)0x0) {
    func_0x004fe3e0();
  }
  else {
    func_0x004fe1e8();
  }
  *param_1 = &PTR_FUN_009f6ae8;
  param_1[1] = unaff_x21;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  FUN_004f6c60();
  return param_1;
}



/* Entry: 004fd228; end: 004fd407;  */

void FUN_004fd228(long param_1)

{
  undefined4 extraout_w8;
  ulong extraout_x8;
  long unaff_x19;
  
  func_0x004fe7d0();
  if (param_1 == 0) {
    func_0x004fe42c();
  }
  else {
    func_0x004fe37c();
  }
  func_0x004fe8f4();
  func_0x004fe90c(&PTR_DAT_009f7358);
  if ((extraout_x8 & 1) != 0) {
    func_0x004fe1d0();
  }
  func_0x004fe564();
  switch(extraout_w8) {
  case 1:
    func_0x004fe46c();
    FUN_004fdcc0();
    break;
  case 2:
    func_0x004fe46c();
    FUN_004fdd14();
    break;
  case 3:
    func_0x004fe46c();
    FUN_004fdd70();
    break;
  case 4:
    func_0x004fe46c();
    FUN_004fddc0();
    break;
  case 5:
    func_0x004fe46c();
    FUN_004fde10();
    break;
  case 6:
    func_0x004fe46c();
    FUN_004fde60();
    break;
  case 7:
    func_0x004fe46c();
    FUN_004fdecc();
    break;
  case 8:
    func_0x004fe46c();
    FUN_004fdf1c();
    break;
  case 9:
    func_0x004fe46c();
    FUN_004fdf6c();
    break;
  case 10:
    func_0x004fe46c();
    FUN_004fdfbc();
    break;
  case 0xb:
    func_0x004fe46c();
    FUN_004fe010();
    break;
  case 0xc:
    func_0x004fe46c();
    FUN_004fe064();
    break;
  default:
    goto LAB_004fe118;
  }
  *(long *)(unaff_x19 + 0x10) = param_1;
LAB_004fe118:
  return;
}



/* Entry: 004fd408; end: 004fd457;  */

long FUN_004fd408(long param_1)

{
  func_0x004fe4d0();
  if (param_1 == 0) {
    func_0x004fe3e0();
  }
  else {
    func_0x004fe1e8();
  }
  func_0x004fe30c(&PTR_FUN_009f6e58);
  FUN_004f7278();
  return param_1;
}



/* Entry: 004fd458; end: 004fd4b3;  */

undefined8 * FUN_004fd458(undefined8 *param_1)

{
  undefined8 *unaff_x21;
  
  func_0x004fe4d0();
  if (param_1 == (undefined8 *)0x0) {
    func_0x004fe42c();
  }
  else {
    param_1 = unaff_x21;
    func_0x004fe434();
  }
  *param_1 = &PTR_FUN_009f6db8;
  param_1[1] = unaff_x21;
  func_0x004fe718();
  func_0x004f733c();
  return param_1;
}


