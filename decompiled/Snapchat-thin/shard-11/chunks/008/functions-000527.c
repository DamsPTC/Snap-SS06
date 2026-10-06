/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10890f448; end: 10890f45b;  */

void FUN_10890f448(void)

{
  FUN_10890f40c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10890f45c; end: 10890f46f;  */

undefined8 FUN_10890f45c(undefined8 param_1)

{
  func_0x000107c349c4();
  return param_1;
}



/* Entry: 10890f470; end: 10890f56b;  */

void FUN_10890f470(long param_1)

{
  ulong *puVar1;
  
  FUN_10890f390();
  puVar1 = (ulong *)(param_1 + 8);
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



/* Entry: 10890f56c; end: 10890f587;  */

void FUN_10890f56c(ulong *param_1)

{
  int iVar1;
  undefined1 in_ZR;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  int unaff_w24;
  
  func_0x000108912578();
  if ((unaff_x22 & 1) != 0) {
    func_0x0001089128ec();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 == 0) goto LAB_10890be60;
  func_0x000108912a4c();
  if (!(bool)in_ZR) {
    if (unaff_w24 != 0) {
      param_1 = unaff_x21;
      FUN_10890f390();
    }
    *(int *)((long)unaff_x21 + 0x1c) = iVar1;
  }
  if (iVar1 == 2) {
    if (unaff_w24 == 2) {
      func_0x000108912524();
      func_0x000108912884();
      func_0x00010890f57c();
      goto LAB_10890be60;
    }
    func_0x000108912774();
    FUN_108911f8c();
  }
  else {
    if (iVar1 != 1) goto LAB_10890be60;
    if (unaff_w24 == 1) {
      func_0x000108912524();
      func_0x000108912884();
      FUN_10890f56c();
      goto LAB_10890be60;
    }
    func_0x000108912774();
    FUN_108911f3c();
  }
  unaff_x21[2] = (ulong)param_1;
LAB_10890be60:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001089125b8();
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



/* Entry: 10890f588; end: 10890f5d3;  */

void FUN_10890f588(void)

{
  int extraout_w8;
  ulong uVar1;
  ulong extraout_x8;
  long unaff_x19;
  
  func_0x000108912868();
  if (extraout_w8 == 1) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010891273c();
      uVar1 = extraout_x8;
    }
    if (uVar1 == 0) {
      if (*(long *)(unaff_x19 + 0x10) != 0) {
        FUN_10890f8a8();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 10890f5d4; end: 10890f5ff;  */

undefined8 FUN_10890f5d4(undefined8 param_1)

{
  func_0x000107c349c4();
  FUN_10890f600(param_1);
  return param_1;
}



/* Entry: 10890f600; end: 10890f60f;  */

void FUN_10890f600(long param_1)

{
  int extraout_w8;
  ulong uVar1;
  ulong extraout_x8;
  long unaff_x19;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  func_0x000108912868();
  if (extraout_w8 == 1) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010891273c();
      uVar1 = extraout_x8;
    }
    if (uVar1 == 0) {
      if (*(long *)(unaff_x19 + 0x10) != 0) {
        FUN_10890f8a8();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 10890f610; end: 10890f623;  */

void FUN_10890f610(void)

{
  FUN_10890f5d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10890f624; end: 10890f633;  */

undefined8 FUN_10890f624(undefined8 param_1)

{
  func_0x000107c349c4();
  return param_1;
}



/* Entry: 10890f634; end: 10890f71b;  */

void FUN_10890f634(long param_1)

{
  ulong *puVar1;
  
  FUN_10890f588();
  puVar1 = (ulong *)(param_1 + 8);
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



/* Entry: 10890f71c; end: 10890f73f;  */

void FUN_10890f71c(ulong *param_1)

{
  int iVar1;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  
  func_0x000108912578();
  if ((unaff_x22 & 1) != 0) {
    func_0x0001089128ec();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 != 0) {
    if (*(int *)((long)unaff_x21 + 0x1c) == iVar1) {
      if (iVar1 == 1) {
        param_1 = (ulong *)unaff_x21[2];
        FUN_10890f71c();
      }
    }
    else {
      if (*(int *)((long)unaff_x21 + 0x1c) != 0) {
        param_1 = unaff_x21;
        FUN_10890f588();
      }
      *(int *)((long)unaff_x21 + 0x1c) = iVar1;
      if (iVar1 == 1) {
        func_0x000108912774();
        FUN_108911fdc();
        unaff_x21[2] = (ulong)param_1;
      }
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001089125b8();
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



/* Entry: 10890f740; end: 10890f763;  */

undefined8 FUN_10890f740(undefined8 param_1)

{
  func_0x000107c349c4();
  return param_1;
}



/* Entry: 10890f764; end: 10890f777;  */

void FUN_10890f764(void)

{
  FUN_10890f740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10890f778; end: 10890f7f3;  */

undefined ** FUN_10890f778(void)

{
  return &PTR_DAT_110a92b10;
}



/* Entry: 10890f7f4; end: 10890f817;  */

undefined8 FUN_10890f7f4(undefined8 param_1)

{
  func_0x000107c349c4();
  return param_1;
}



/* Entry: 10890f818; end: 10890f82b;  */

void FUN_10890f818(void)

{
  FUN_10890f7f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10890f82c; end: 10890f8a7;  */

undefined ** FUN_10890f82c(void)

{
  return &PTR_DAT_110a92b68;
}



/* Entry: 10890f8a8; end: 10890f8cb;  */

undefined8 FUN_10890f8a8(undefined8 param_1)

{
  func_0x000107c349c4();
  return param_1;
}



/* Entry: 10890f8cc; end: 10890f8df;  */

void FUN_10890f8cc(void)

{
  FUN_10890f8a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10890f8e0; end: 10890f8ff;  */

undefined ** FUN_10890f8e0(void)

{
  return &PTR_DAT_110a92bb8;
}



/* Entry: 10890f900; end: 10890f963;  */

long * FUN_10890f900(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001089124f8();
  if ((char)param_1[2] == '\x01') {
    func_0x000108912508();
    func_0x0001089127f8();
    func_0x0001089125d8();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x000108912728();
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



/* Entry: 10890f964; end: 10890f993;  */

long FUN_10890f964(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = (ulong)*(byte *)(param_1 + 0x10) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x14) = (int)lVar1;
  return lVar1;
}



/* Entry: 10890f994; end: 10890fbaf;  */

void FUN_10890f994(void)

{
  uint extraout_w8;
  undefined4 extraout_var;
  long unaff_x19;
  
  func_0x000107c349dc();
  if (extraout_w8 < 0xc) {
                    /* WARNING: Could not recover jumptable at 0x00010890f9c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10df6fbd4)[CONCAT44(extraout_var,extraout_w8)] * 4 + 0x10890f9c4))
              ();
    return;
  }
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 10890fbb0; end: 10890fbdb;  */

undefined8 FUN_10890fbb0(undefined8 param_1)

{
  func_0x000107c349c4();
  FUN_10890fbdc(param_1);
  return param_1;
}



/* Entry: 10890fbdc; end: 10890fbeb;  */

void FUN_10890fbdc(long param_1)

{
  long extraout_x8;
  long unaff_x19;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  func_0x000107c349dc();
  if ((uint)extraout_x8 < 0xc) {
                    /* WARNING: Could not recover jumptable at 0x00010890f9c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10df6fbd4)[extraout_x8] * 4 + 0x10890f9c4))();
    return;
  }
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 10890fbec; end: 10890fbff;  */

void FUN_10890fbec(void)

{
  FUN_10890fbb0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10890fc00; end: 10890fc3b;  */

undefined8 FUN_10890fc00(undefined8 param_1)

{
  func_0x000107c349c4();
  return param_1;
}



/* Entry: 10890fc3c; end: 10890fdc3;  */

void FUN_10890fc3c(long param_1)

{
  ulong *puVar1;
  
  FUN_10890f994();
  puVar1 = (ulong *)(param_1 + 8);
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



/* Entry: 10890fdc4; end: 10890fe2f;  */

void FUN_10890fdc4(ulong *param_1)

{
  int iVar1;
  undefined1 in_ZR;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  int unaff_w24;
  
  func_0x000108912578();
  if ((unaff_x22 & 1) != 0) {
    func_0x0001089128ec();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 != 0) {
    func_0x000108912a4c();
    if (!(bool)in_ZR) {
      if (unaff_w24 != 0) {
        param_1 = unaff_x21;
        FUN_10890f994();
      }
      *(int *)((long)unaff_x21 + 0x1c) = iVar1;
    }
    switch(iVar1) {
    case 1:
      if (unaff_w24 == iVar1) {
        func_0x000108912524();
        func_0x000108912b40();
        func_0x00010890fdc8();
        goto LAB_10890bd94;
      }
      func_0x000108912774();
      FUN_108912038();
      break;
    case 2:
      if (unaff_w24 == iVar1) {
        func_0x000108912524();
        func_0x000108912b4c();
        func_0x00010890fde4();
        goto LAB_10890bd94;
      }
      func_0x000108912774();
      FUN_10891208c();
      break;
    case 3:
      if (unaff_w24 == iVar1) {
        func_0x000108912524();
        func_0x000108912884();
        func_0x00010890fe0c();
        goto LAB_10890bd94;
      }
      func_0x000108912774();
      FUN_1089120e4();
      break;
    case 4:
      if (unaff_w24 == iVar1) {
        func_0x000108912524();
        func_0x000108912884();
        func_0x00010890fe18();
        goto LAB_10890bd94;
      }
      func_0x000108912774();
      FUN_108912134();
      break;
    case 5:
      if (unaff_w24 == iVar1) {
        func_0x000108912524();
        func_0x000108912884();
        func_0x00010890fe24();
        goto LAB_10890bd94;
      }
      func_0x000108912774();
      FUN_108912184();
      break;
    case 6:
      if (unaff_w24 == iVar1) {
        func_0x000108912524();
        FUN_10890fe30();
        goto LAB_10890bd94;
      }
      func_0x000108912774();
      FUN_1089121d4();
      break;
    case 7:
      if (unaff_w24 == iVar1) {
        func_0x000108912524();
        func_0x000108912884();
        func_0x00010890fe8c();
        goto LAB_10890bd94;
      }
      func_0x000108912774();
      FUN_108912240();
      break;
    case 8:
      if (unaff_w24 == iVar1) {
        func_0x000108912524();
        func_0x000108912884();
        func_0x00010890fe98();
        goto LAB_10890bd94;
      }
      func_0x000108912774();
      FUN_108912290();
      break;
    case 9:
      if (unaff_w24 == iVar1) {
        func_0x000108912524();
        func_0x000108912884();
        func_0x00010890fea4();
        goto LAB_10890bd94;
      }
      func_0x000108912774();
      FUN_1089122e0();
      break;
    case 10:
      if (unaff_w24 == iVar1) {
        func_0x000108912524();
        func_0x00010890feb0();
        goto LAB_10890bd94;
      }
      func_0x000108912774();
      FUN_108912330();
      break;
    case 0xb:
      if (unaff_w24 == iVar1) {
        func_0x000108912524();
        func_0x00010890fecc();
        goto LAB_10890bd94;
      }
      func_0x000108912774();
      FUN_108912384();
      break;
    case 0xc:
      if (unaff_w24 == iVar1) {
        func_0x000108912524();
        func_0x000108912884();
        func_0x00010890fee8();
        goto LAB_10890bd94;
      }
      func_0x000108912774();
      FUN_1089123d8();
      break;
    default:
      goto LAB_10890bd94;
    }
    unaff_x21[2] = (ulong)param_1;
  }
LAB_10890bd94:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001089125b8();
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



/* Entry: 10890fe30; end: 10890fe8b;  */

void FUN_10890fe30(void)

{
  ulong *puVar1;
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001089125a8();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x000108912918();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000108912968();
    if (extraout_x8 == 0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      func_0x000108912ae8();
    }
  }
  func_0x00010891262c();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001089125b8();
    if ((*puVar1 & 1) == 0) {
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



/* Entry: 10890fe8c; end: 10890fef3;  */

void FUN_10890fe8c(long param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
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



/* Entry: 10890fef4; end: 10890ff17;  */

undefined8 FUN_10890fef4(undefined8 param_1)

{
  func_0x000107c349c4();
  return param_1;
}



/* Entry: 10890ff18; end: 10890ff2b;  */

void FUN_10890ff18(void)

{
  FUN_10890fef4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10890ff2c; end: 10890ff4b;  */

undefined ** FUN_10890ff2c(void)

{
  return &PTR_DAT_110a92c58;
}



/* Entry: 10890ff4c; end: 10890ffab;  */

long * FUN_10890ff4c(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001089124f8();
  if ((int)param_1[2] != 0) {
    func_0x000108912508();
    func_0x0001089125c8();
    func_0x00010891256c();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x000108912728();
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



/* Entry: 10890ffac; end: 10890ffdf;  */

long FUN_10890ffac(long param_1)

{
  long extraout_x8;
  long lVar1;
  ulong uVar2;
  
  func_0x000108912750();
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



/* Entry: 10890ffe0; end: 108910003;  */

undefined8 FUN_10890ffe0(undefined8 param_1)

{
  func_0x000107c349c4();
  return param_1;
}



/* Entry: 108910004; end: 108910017;  */

void FUN_108910004(void)

{
  FUN_10890ffe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108910018; end: 108910037;  */

undefined ** FUN_108910018(void)

{
  return &PTR_DAT_110a92cb0;
}



/* Entry: 108910038; end: 1089100b7;  */

long * FUN_108910038(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001089124f8();
  if ((int)param_1[2] != 0) {
    func_0x000108912508();
    func_0x0001089125c8();
    func_0x00010891256c();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x14) != 0) {
    func_0x000108912508();
    func_0x000108912860();
    func_0x00010891256c();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108912728();
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



/* Entry: 1089100b8; end: 10891012b;  */

long FUN_1089100b8(long param_1)

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



/* Entry: 10891012c; end: 10891014f;  */

undefined8 FUN_10891012c(undefined8 param_1)

{
  func_0x000107c349c4();
  return param_1;
}



/* Entry: 108910150; end: 108910163;  */

void FUN_108910150(void)

{
  FUN_10891012c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108910164; end: 1089101df;  */

undefined ** FUN_108910164(void)

{
  return &PTR_DAT_110a92d08;
}



/* Entry: 1089101e0; end: 108910203;  */

undefined8 FUN_1089101e0(undefined8 param_1)

{
  func_0x000107c349c4();
  return param_1;
}



/* Entry: 108910204; end: 108910217;  */

void FUN_108910204(void)

{
  FUN_1089101e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108910218; end: 108910293;  */

undefined ** FUN_108910218(void)

{
  return &PTR_DAT_110a92d60;
}



/* Entry: 108910294; end: 1089102b7;  */

undefined8 FUN_108910294(undefined8 param_1)

{
  func_0x000107c349c4();
  return param_1;
}



/* Entry: 1089102b8; end: 1089102cb;  */

void FUN_1089102b8(void)

{
  FUN_108910294();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1089102cc; end: 108910347;  */

undefined ** FUN_1089102cc(void)

{
  return &PTR_DAT_110a92db8;
}



/* Entry: 108910348; end: 10891036b;  */

undefined8 FUN_108910348(undefined8 param_1)

{
  func_0x000107c349c4();
  return param_1;
}



/* Entry: 10891036c; end: 10891037f;  */

void FUN_10891036c(void)

{
  FUN_108910348();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108910380; end: 1089103fb;  */

undefined ** FUN_108910380(void)

{
  return &PTR_DAT_110a92e08;
}



/* Entry: 1089103fc; end: 10891041f;  */

undefined8 FUN_1089103fc(undefined8 param_1)

{
  func_0x000107c349c4();
  return param_1;
}



/* Entry: 108910420; end: 108910433;  */

void FUN_108910420(void)

{
  FUN_1089103fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108910434; end: 1089104af;  */

undefined ** FUN_108910434(void)

{
  return &PTR_DAT_110a92e60;
}



/* Entry: 1089104b0; end: 1089104d3;  */

undefined8 FUN_1089104b0(undefined8 param_1)

{
  func_0x000107c349c4();
  return param_1;
}



/* Entry: 1089104d4; end: 1089104e7;  */

void FUN_1089104d4(void)

{
  FUN_1089104b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1089104e8; end: 108910507;  */

undefined ** FUN_1089104e8(void)

{
  return &PTR_DAT_110a92eb8;
}



/* Entry: 108910508; end: 108910567;  */

long * FUN_108910508(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001089124f8();
  if ((int)param_1[2] != 0) {
    func_0x000108912508();
    func_0x0001089125c8();
    func_0x00010891256c();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x000108912728();
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



/* Entry: 108910568; end: 10891059b;  */

long FUN_108910568(long param_1)

{
  long extraout_x8;
  long lVar1;
  ulong uVar2;
  
  func_0x000108912750();
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



/* Entry: 10891059c; end: 1089105bf;  */

undefined8 FUN_10891059c(undefined8 param_1)

{
  func_0x000107c349c4();
  return param_1;
}



/* Entry: 1089105c0; end: 1089105d3;  */

void FUN_1089105c0(void)

{
  FUN_10891059c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1089105d4; end: 1089105f3;  */

undefined ** FUN_1089105d4(void)

{
  return &PTR_DAT_110a92f18;
}



/* Entry: 1089105f4; end: 108910653;  */

long * FUN_1089105f4(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001089124f8();
  if ((int)param_1[2] != 0) {
    func_0x000108912508();
    func_0x0001089125c8();
    func_0x00010891256c();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x000108912728();
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



/* Entry: 108910654; end: 108910687;  */

long FUN_108910654(long param_1)

{
  long extraout_x8;
  long lVar1;
  ulong uVar2;
  
  func_0x000108912750();
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



/* Entry: 108910688; end: 1089106bb;  */

long FUN_108910688(long param_1)

{
  func_0x000107c349c4();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1089106bc; end: 1089106cf;  */

void FUN_1089106bc(void)

{
  FUN_108910688();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1089106d0; end: 1089106db;  */

undefined ** FUN_1089106d0(void)

{
  return &PTR_DAT_110a92f68;
}



/* Entry: 1089106dc; end: 1089107b3;  */

void FUN_1089106dc(void)

{
  ulong extraout_x8;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x000108912838();
  if ((extraout_x8 & 1) != 0) {
    func_0x000108912a68();
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
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



/* Entry: 1089107b4; end: 1089107b7;  */

void FUN_1089107b4(void)

{
  ulong *puVar1;
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001089125a8();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x000108912918();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000108912968();
    if (extraout_x8 == 0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      func_0x000108912ae8();
    }
  }
  func_0x00010891262c();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001089125b8();
    if ((*puVar1 & 1) == 0) {
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



/* Entry: 1089107b8; end: 1089107db;  */

undefined8 FUN_1089107b8(undefined8 param_1)

{
  func_0x000107c349c4();
  return param_1;
}



/* Entry: 1089107dc; end: 1089107ef;  */

void FUN_1089107dc(void)

{
  FUN_1089107b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1089107f0; end: 10891086b;  */

undefined ** FUN_1089107f0(void)

{
  return &PTR_DAT_110a92fc0;
}



/* Entry: 10891086c; end: 10891088f;  */

undefined8 FUN_10891086c(undefined8 param_1)

{
  func_0x000107c349c4();
  return param_1;
}



/* Entry: 108910890; end: 1089108a3;  */

void FUN_108910890(void)

{
  FUN_10891086c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1089108a4; end: 10891091f;  */

undefined ** FUN_1089108a4(void)

{
  return &PTR_DAT_110a93008;
}



/* Entry: 108910920; end: 108910967;  */

void FUN_108910920(void)

{
  ulong extraout_x8;
  long unaff_x19;
  
  func_0x000107c349e8();
  func_0x000107c34a08(&PTR_FUN_110a91ff0);
  if ((extraout_x8 & 1) != 0) {
    func_0x000108912534();
  }
  FUN_1089111c8(unaff_x19 + 0x10);
  *(undefined4 *)(unaff_x19 + 0x28) = 0;
  return;
}



/* Entry: 108910968; end: 108910993;  */

long FUN_108910968(long param_1)

{
  func_0x000107c349c4();
  FUN_1089111e8(param_1 + 0x10);
  return param_1;
}



/* Entry: 108910994; end: 108910997;  */

long FUN_108910994(long param_1)

{
  func_0x000107c349c4();
  FUN_1089111e8(param_1 + 0x10);
  return param_1;
}



/* Entry: 108910998; end: 1089109ab;  */

void FUN_108910998(void)

{
  FUN_108910968();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1089109ac; end: 1089109b7;  */

undefined ** FUN_1089109ac(void)

{
  return &PTR_DAT_110a93058;
}



/* Entry: 1089109b8; end: 1089109f7;  */

void FUN_1089109b8(long param_1)

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



/* Entry: 1089109f8; end: 108910a63;  */

long * FUN_1089109f8(undefined8 param_1,long param_2,ulong param_3,long *param_4)

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
  
  func_0x0001089124f8();
  func_0x000108912874();
  while (unaff_w22 != unaff_w21) {
    func_0x0001089124ac();
    param_3 = (ulong)*(uint *)(param_2 + 0x14);
    func_0x0001089125f4();
    func_0x0001089128e0();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108912728();
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



/* Entry: 108910a64; end: 108910ab3;  */

void FUN_108910a64(void)

{
  long unaff_x19;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  func_0x000108912488();
  while (unaff_x22 != 0) {
    FUN_108910ab4(*unaff_x21);
    func_0x000108912990();
    unaff_x21 = unaff_x21 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000108912b78();
  }
  func_0x000108912a40();
  return;
}



/* Entry: 108910ab4; end: 108910acf;  */

long FUN_108910ab4(long param_1)

{
  long extraout_x8;
  
  FUN_10890dbd4();
  FUN_108912460();
  return param_1 + extraout_x8;
}



/* Entry: 108910ad0; end: 108910ad3;  */

void FUN_108910ad0(ulong *param_1)

{
  long unaff_x20;
  
  func_0x000107c349b8();
  FUN_108910b04();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108912658();
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



/* Entry: 108910ad4; end: 108910b03;  */

void FUN_108910ad4(ulong *param_1)

{
  long unaff_x20;
  
  func_0x000107c349b8();
  FUN_108910b04();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108912658();
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



/* Entry: 108910b04; end: 108910b13;  */

void FUN_108910b04(long *param_1,long param_2)

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



/* Entry: 108910b14; end: 108910b43;  */

void FUN_108910b14(ulong *param_1,ulong *param_2)

{
  long unaff_x20;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x000107c349e0();
  FUN_1089109b8();
  func_0x000108912854();
  func_0x000107c349b8();
  FUN_108910b04();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108912658();
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



/* Entry: 108910b44; end: 108910b6f;  */

undefined8 FUN_108910b44(undefined8 param_1)

{
  func_0x000107c349c4();
  FUN_108910b70(param_1);
  return param_1;
}



/* Entry: 108910b70; end: 108910b9f;  */

void FUN_108910b70(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_108910968();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108910ba0; end: 108910bab;  */

undefined ** FUN_108910ba0(void)

{
  return &PTR_DAT_110a930a0;
}



/* Entry: 108910bac; end: 108910beb;  */

void FUN_108910bac(void)

{
  ulong extraout_x8;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x000108912838();
  if ((extraout_x8 & 1) != 0) {
    FUN_1089109b8(*(undefined8 *)(unaff_x19 + 0x18));
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined1 *)(unaff_x19 + 0x20) = 0;
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
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



/* Entry: 108910bec; end: 108910c73;  */

long * FUN_108910bec(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001089124f8();
  if ((char)param_1[4] == '\x01') {
    func_0x000108912508();
    func_0x000108912820();
    func_0x0001089125d8();
    param_4 = param_1;
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x28);
    param_4 = (long *)0xa;
    func_0x00010891270c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108912728();
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



/* Entry: 108910c74; end: 108910ccb;  */

void FUN_108910c74(void)

{
  int iVar1;
  ulong extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x000108912838();
  if ((extraout_x8 & 1) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(unaff_x19 + 0x18);
    FUN_108910ccc();
    iVar1 = iVar1 + 1;
  }
  iVar1 = iVar1 + (uint)*(byte *)(unaff_x19 + 0x20) * 2;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000108912b78();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x14) = iVar1;
  return;
}



/* Entry: 108910ccc; end: 108910ce7;  */

long FUN_108910ccc(long param_1)

{
  long extraout_x8;
  
  FUN_108910a64();
  FUN_108912460();
  return param_1 + extraout_x8;
}



/* Entry: 108910ce8; end: 108910ceb;  */

void FUN_108910ce8(void)

{
  ulong *puVar1;
  ulong *extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001089125a8();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x000108912918();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000108912968();
    if (extraout_x8 == (ulong *)0x0) {
      FUN_108912428();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      puVar1 = extraout_x8;
      FUN_108910ad4();
    }
  }
  if (*(char *)(unaff_x20 + 0x20) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x20) = 1;
  }
  func_0x00010891262c();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001089125b8();
    if ((*puVar1 & 1) == 0) {
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



/* Entry: 108910cec; end: 108910d1f;  */

long FUN_108910cec(long param_1)

{
  func_0x000107c349c4();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00010b5b9250();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 108910d20; end: 108910d23;  */

long FUN_108910d20(long param_1)

{
  func_0x000107c349c4();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00010b5b9250();
  }
  __ZdlPv();
  return param_1;
}


