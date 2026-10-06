/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b5a43e4; end: 10b5a43e7;  */

void FUN_10b5a43e4(long param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long extraout_x8_01;
  
  lVar1 = param_2 + 0x10;
  func_0x0001059929d4(param_1 + 0x10);
  func_0x00010b5a4b40(*(undefined8 *)(param_2 + 0x30));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b5a4b34();
    }
    func_0x000107c30248(param_1 + 0x30);
  }
  func_0x00010b5a4b40(*(undefined8 *)(param_2 + 0x38));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b5a4b34();
    }
    func_0x000107c30248(param_1 + 0x38);
  }
  func_0x00010b5a4b40(*(undefined8 *)(param_2 + 0x40));
  lVar2 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b5a4b34();
    }
    func_0x000107c30248(param_1 + 0x40);
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



/* Entry: 10b5a43e8; end: 10b5a44a7;  */

void FUN_10b5a43e8(long param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long extraout_x8_01;
  
  lVar1 = param_2 + 0x10;
  func_0x0001059929d4(param_1 + 0x10);
  func_0x00010b5a4b40(*(undefined8 *)(param_2 + 0x30));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b5a4b34();
    }
    func_0x000107c30248(param_1 + 0x30);
  }
  func_0x00010b5a4b40(*(undefined8 *)(param_2 + 0x38));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b5a4b34();
    }
    func_0x000107c30248(param_1 + 0x38);
  }
  func_0x00010b5a4b40(*(undefined8 *)(param_2 + 0x40));
  lVar2 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b5a4b34();
    }
    func_0x000107c30248(param_1 + 0x40);
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



/* Entry: 10b5a44a8; end: 10b5a454f;  */

undefined8 * FUN_10b5a44a8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d14370;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b5a4b68();
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  lVar2 = param_3 + 0x18;
  func_0x000107c2809c(lVar2,param_2);
  param_1[3] = lVar2;
  lVar2 = param_3 + 0x20;
  func_0x000107c2809c(lVar2,param_2);
  param_1[4] = lVar2;
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    FUN_10b5a4a38(param_2,*(undefined8 *)(param_3 + 0x28));
  }
  param_1[5] = uVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    param_2 = 0;
  }
  else {
    FUN_10b5a4a38(param_2,*(undefined8 *)(param_3 + 0x30));
  }
  param_1[6] = param_2;
  return param_1;
}



/* Entry: 10b5a4550; end: 10b5a457f;  */

long FUN_10b5a4550(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5a4580(param_1);
  return param_1;
}



/* Entry: 10b5a4580; end: 10b5a45c7;  */

void FUN_10b5a4580(long param_1)

{
  func_0x000107c30258(param_1 + 0x18);
  func_0x000107c30258(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10b5a4008();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10b5a4008();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5a45c8; end: 10b5a45cb;  */

long FUN_10b5a45c8(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5a4580(param_1);
  return param_1;
}



/* Entry: 10b5a45cc; end: 10b5a45df;  */

void FUN_10b5a45cc(void)

{
  FUN_10b5a4550();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5a45e0; end: 10b5a45eb;  */

undefined ** FUN_10b5a45e0(void)

{
  return &PTR_DAT_110d143f8;
}



/* Entry: 10b5a45ec; end: 10b5a4653;  */

void FUN_10b5a45ec(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  func_0x000107c3025c(param_1 + 0x18);
  func_0x000107c3025c(param_1 + 0x20);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_10b5a4094(*(undefined8 *)(param_1 + 0x28));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10b5a4094(*(undefined8 *)(param_1 + 0x30));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
    *(byte *)puVar2 = 0;
    *(byte *)((long)puVar2 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar2 = 0;
  puVar2[1] = 0;
  return;
}



/* Entry: 10b5a4654; end: 10b5a481b;  */

long * FUN_10b5a4654(long param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  long unaff_x22;
  undefined8 *puVar7;
  int iVar8;
  
  plVar2 = param_2;
  func_0x00010b5a4b8c(*(undefined8 *)(param_1 + 0x18));
  if ((long)plVar2 < 0) {
    plVar2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b5a4694;
  }
  else if ((int)plVar2 != 0) {
LAB_10b5a4694:
    func_0x00010b5a4b20();
    plVar2 = (long *)0x1;
    param_2 = param_3;
    func_0x00010b5a4adc();
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  puVar7 = (undefined8 *)(ulong)uVar1;
  if ((uVar1 & 1) != 0) {
    plVar2 = *(long **)(param_1 + 0x28);
    param_2 = (long *)0x2;
    func_0x00010b5a4b80(2,plVar2,(int)plVar2[9]);
  }
  if ((uVar1 >> 1 & 1) != 0) {
    plVar2 = *(long **)(param_1 + 0x30);
    param_2 = (long *)0x3;
    func_0x00010b5a4b80(3,plVar2,(int)plVar2[9]);
  }
  func_0x00010b5a4b8c(*(undefined8 *)(param_1 + 0x20));
  if ((long)plVar2 < 0) {
    if (puVar7[1] == 0) goto LAB_10b5a4724;
    puVar7 = (undefined8 *)*puVar7;
  }
  else if ((int)plVar2 == 0) goto LAB_10b5a4724;
  func_0x00010b5a4b20(puVar7);
  param_2 = param_3;
  func_0x00010b5a4adc(param_3,4);
LAB_10b5a4724:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
  if ((long)uVar4 < 0) {
    lVar3 = *(long *)(uVar5 + 8);
    uVar4 = *(ulong *)(uVar5 + 0x10);
  }
  else {
    lVar3 = uVar5 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)uVar4) {
    while( true ) {
      iVar8 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar6 = (int)uVar4;
      uVar4 = (ulong)(uint)(iVar6 - iVar8);
      if (iVar6 - iVar8 == 0 || iVar6 < iVar8) break;
      func_0x00010b4d5738();
      lVar3 = (long)param_2 + (long)iVar8;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar3);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar6);
  }
  _memcpy(param_2,lVar3,uVar4 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)uVar4);
}



/* Entry: 10b5a481c; end: 10b5a4847;  */

long FUN_10b5a481c(long param_1)

{
  FUN_10b5a4310();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 10b5a4848; end: 10b5a484b;  */

void FUN_10b5a4848(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long extraout_x8;
  long lVar5;
  long extraout_x8_00;
  
  uVar4 = *(ulong *)(param_1 + 8);
  uVar2 = uVar4;
  if ((uVar4 & 1) != 0) {
    uVar2 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  lVar3 = param_2;
  func_0x00010b5a4b40(*(undefined8 *)(param_2 + 0x18));
  lVar5 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar5 = *(long *)(lVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((uVar4 & 1) != 0) {
      func_0x00010b5a4b34();
    }
    func_0x000107c30248(param_1 + 0x18);
  }
  func_0x00010b5a4b40(*(undefined8 *)(param_2 + 0x20));
  lVar5 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar5 = *(long *)(lVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b5a4b34();
    }
    func_0x000107c30248(param_1 + 0x20);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        uVar4 = uVar2;
        FUN_10b5a4a38(uVar2,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar4;
      }
      else {
        FUN_10b5a43e8();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        FUN_10b5a4a38(uVar2,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar2;
      }
      else {
        FUN_10b5a43e8();
      }
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b5a484c; end: 10b5a496f;  */

void FUN_10b5a484c(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long extraout_x8;
  long lVar5;
  long extraout_x8_00;
  
  uVar4 = *(ulong *)(param_1 + 8);
  uVar2 = uVar4;
  if ((uVar4 & 1) != 0) {
    uVar2 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  lVar3 = param_2;
  func_0x00010b5a4b40(*(undefined8 *)(param_2 + 0x18));
  lVar5 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar5 = *(long *)(lVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((uVar4 & 1) != 0) {
      func_0x00010b5a4b34();
    }
    func_0x000107c30248(param_1 + 0x18);
  }
  func_0x00010b5a4b40(*(undefined8 *)(param_2 + 0x20));
  lVar5 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar5 = *(long *)(lVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b5a4b34();
    }
    func_0x000107c30248(param_1 + 0x20);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        uVar4 = uVar2;
        FUN_10b5a4a38(uVar2,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar4;
      }
      else {
        FUN_10b5a43e8();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        FUN_10b5a4a38(uVar2,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar2;
      }
      else {
        FUN_10b5a43e8();
      }
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b5a4970; end: 10b5a497f;  */

void FUN_10b5a4970(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x50;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    func_0x00010b5a4b74();
  }
  *puVar1 = &PTR_FUN_110d14320;
  puVar1[1] = param_2;
  puVar1[3] = 0x100000000;
  puVar1[2] = 0x100000000;
  puVar1[4] = &DAT_10e5b4a18;
  puVar1[5] = param_2;
  puVar1[6] = &DAT_11383d918;
  puVar1[7] = &DAT_11383d918;
  puVar1[8] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 9) = 0;
  return;
}



/* Entry: 10b5a4980; end: 10b5a4a37;  */

void FUN_10b5a4980(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x50;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b5a4b74();
  }
  *puVar1 = &PTR_FUN_110d14320;
  puVar1[1] = param_1;
  puVar1[3] = 0x100000000;
  puVar1[2] = 0x100000000;
  puVar1[4] = &DAT_10e5b4a18;
  puVar1[5] = param_1;
  puVar1[6] = &DAT_11383d918;
  puVar1[7] = &DAT_11383d918;
  puVar1[8] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 9) = 0;
  return;
}



/* Entry: 10b5a4a38; end: 10b5a4adb;  */

undefined8 * FUN_10b5a4a38(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x50;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b5a4b74();
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110d14320;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b5a4b68();
  }
  func_0x000105991a48(puVar1 + 2,param_1,param_2 + 0x10);
  lVar2 = param_2 + 0x30;
  func_0x00010b5a4b58();
  puVar1[6] = lVar2;
  lVar2 = param_2 + 0x38;
  func_0x00010b5a4b58();
  puVar1[7] = lVar2;
  param_2 = param_2 + 0x40;
  func_0x00010b5a4b58();
  puVar1[8] = param_2;
  *(undefined4 *)(puVar1 + 9) = 0;
  return puVar1;
}



/* Entry: 10b5a4adc; end: 10b5a4b97;  */

long * FUN_10b5a4adc(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 extraout_x8;
  undefined8 uVar5;
  undefined8 extraout_x8_00;
  uint extraout_w10;
  uint uVar6;
  uint extraout_w10_00;
  long lVar7;
  long *unaff_x20;
  int iVar8;
  undefined8 *unaff_x22;
  int iVar9;
  long lVar10;
  
  lVar7 = (long)*(char *)((long)unaff_x22 + 0x17);
  if ((-1 < lVar7) || (lVar7 = unaff_x22[1], lVar7 < 0x80)) {
    lVar10 = *param_1;
    uVar6 = (int)param_2 << 3;
    uVar2 = uVar6;
    func_0x0001001a5b20();
    if (lVar7 <= lVar10 + ~((long)unaff_x20 + (long)(int)uVar2) + 0x10) {
      lVar10 = (long)unaff_x20 + 2;
      for (uVar6 = uVar6 | 2; 0x7f < uVar6; uVar6 = uVar6 >> 7) {
        *(byte *)(lVar10 + -2) = (byte)uVar6 | 0x80;
        lVar10 = lVar10 + 1;
      }
      *(byte *)(lVar10 + -2) = (byte)uVar6;
      *(char *)(lVar10 + -1) = (char)lVar7;
      puVar1 = (undefined8 *)*unaff_x22;
      if (-1 < *(char *)((long)unaff_x22 + 0x17)) {
        puVar1 = unaff_x22;
      }
      func_0x000107c610b4(lVar10,puVar1,lVar7);
      return (long *)(lVar10 + lVar7);
    }
  }
  func_0x00010b4d564c(param_1,param_2);
  func_0x00010b4d56cc();
  uVar6 = extraout_w10;
  while (0x7f < uVar6) {
    func_0x00010b4d576c();
    uVar6 = extraout_w10_00;
  }
  func_0x00010b4d56b4();
  uVar5 = extraout_x8;
  while (0x7f < (uint)uVar5) {
    func_0x00010b4d5758();
    uVar5 = extraout_x8_00;
  }
  func_0x00010b4d5660();
  iVar8 = (int)unaff_x22;
  if ((*(char *)((long)param_1 + 0x39) == '\x01') &&
     ((*param_1 - (long)unaff_x20) + 0x10 <= (long)iVar8)) {
    plVar3 = param_1;
    func_0x000107c303e0(param_1,unaff_x20);
    plVar4 = (long *)param_1[6];
    (**(code **)(*plVar4 + 0x28))(plVar4,param_2,unaff_x22);
    if (((ulong)plVar4 & 1) == 0) {
      func_0x00010b4d56e4();
    }
    return plVar3;
  }
  if (*param_1 - (long)unaff_x20 < (long)iVar8) {
    while( true ) {
      iVar9 = ((int)*param_1 - (int)unaff_x20) + 0x10;
      iVar8 = (int)unaff_x22;
      unaff_x22 = (undefined8 *)(ulong)(uint)(iVar8 - iVar9);
      if (iVar8 - iVar9 == 0 || iVar8 < iVar9) break;
      func_0x00010b4d5738();
      lVar7 = (long)unaff_x20 + (long)iVar9;
      unaff_x20 = param_1;
      func_0x000107c303e4(param_1,lVar7);
    }
    func_0x00010b4d5738();
    return (long *)((long)unaff_x20 + (long)iVar8);
  }
  _memcpy(unaff_x20);
  return (long *)((long)unaff_x20 + (long)iVar8);
}



/* Entry: 10b5a4b98; end: 10b5a4c53;  */

undefined8 * FUN_10b5a4b98(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d14478;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  FUN_10b5a50d0(param_1 + 2,param_2,param_3 + 0x10);
  func_0x00010598fd00(param_1 + 5,param_2,param_3 + 0x28);
  lVar1 = param_3 + 0x40;
  func_0x000107c2809c(lVar1,param_2);
  param_1[8] = lVar1;
  param_3 = param_3 + 0x48;
  func_0x000107c2809c(param_3,param_2);
  param_1[9] = param_3;
  *(undefined4 *)(param_1 + 10) = 0;
  return param_1;
}



/* Entry: 10b5a4c54; end: 10b5a4c83;  */

long FUN_10b5a4c54(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5a4c84(param_1);
  return param_1;
}



/* Entry: 10b5a4c84; end: 10b5a4cb3;  */

long * FUN_10b5a4c84(long param_1)

{
  long *plVar1;
  
  func_0x000107c30258(param_1 + 0x40);
  func_0x000107c30258(param_1 + 0x48);
  plVar1 = (long *)(param_1 + 0x10);
  func_0x000107c282b4(param_1 + 0x28);
  if (*plVar1 != 0) {
    func_0x000107c303ac(plVar1);
  }
  return plVar1;
}



/* Entry: 10b5a4cb4; end: 10b5a4cb7;  */

long FUN_10b5a4cb4(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5a4c84(param_1);
  return param_1;
}



/* Entry: 10b5a4cb8; end: 10b5a4ccb;  */

void FUN_10b5a4cb8(void)

{
  FUN_10b5a4c54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5a4ccc; end: 10b5a4cd7;  */

undefined ** FUN_10b5a4ccc(void)

{
  return &PTR_DAT_110d144b8;
}



/* Entry: 10b5a4cd8; end: 10b5a4d37;  */

void FUN_10b5a4cd8(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  func_0x000107c282c0(param_1 + 0x28);
  func_0x000107c3025c(param_1 + 0x40);
  func_0x000107c3025c(param_1 + 0x48);
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



/* Entry: 10b5a4d38; end: 10b5a4fcf;  */

long * FUN_10b5a4d38(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  
  puVar7 = (undefined8 *)(*(ulong *)(param_1 + 0x40) & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)puVar7 + 0x17);
  if (lVar3 < 0) {
    lVar3 = puVar7[1];
    if (lVar3 != 0) {
      puVar7 = (undefined8 *)*puVar7;
      goto LAB_10b5a4d80;
    }
  }
  else if (*(char *)((long)puVar7 + 0x17) != '\0') {
LAB_10b5a4d80:
    func_0x000107c303d4(puVar7,lVar3,1,&UNK_10f77dc71);
    param_2 = param_3;
    func_0x00010b5a51c8(param_3,1);
  }
  iVar8 = *(int *)(param_1 + 0x18);
  for (iVar6 = 0; iVar8 != iVar6; iVar6 = iVar6 + 1) {
    uVar4 = *(ulong *)(param_1 + 0x10);
    puVar1 = (ulong *)(param_1 + 0x10);
    if ((uVar4 & 1) != 0) {
      puVar1 = (ulong *)(uVar4 + (long)iVar6 * 8 + 7);
    }
    plVar2 = (long *)0x2;
    func_0x000107c303cc(2,*puVar1,*(undefined4 *)(*puVar1 + 0x14),param_2,param_3);
    param_2 = plVar2;
  }
  puVar7 = (undefined8 *)(*(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)puVar7 + 0x17);
  if (lVar3 < 0) {
    lVar3 = puVar7[1];
    if (lVar3 == 0) goto LAB_10b5a4e34;
    puVar7 = (undefined8 *)*puVar7;
  }
  else if (*(char *)((long)puVar7 + 0x17) == '\0') goto LAB_10b5a4e34;
  func_0x000107c303d4(puVar7,lVar3,1,&UNK_10f77dc96);
  param_2 = param_3;
  func_0x00010b5a51c8(param_3,3);
LAB_10b5a4e34:
  lVar3 = 8;
  for (uVar4 = (ulong)(*(uint *)(param_1 + 0x30) &
                      ((int)*(uint *)(param_1 + 0x30) >> 0x1f ^ 0xffffffffU)); uVar4 != 0;
      uVar4 = uVar4 - 1) {
    uVar5 = *(ulong *)(param_1 + 0x28);
    puVar1 = (ulong *)(param_1 + 0x28);
    if ((uVar5 & 1) != 0) {
      puVar1 = (ulong *)(uVar5 + lVar3 + -1);
    }
    plVar2 = param_3;
    func_0x000108922b58(param_3,4,*puVar1,param_2);
    lVar3 = lVar3 + 8;
    param_2 = plVar2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
  if ((long)uVar4 < 0) {
    lVar3 = *(long *)(uVar5 + 8);
    uVar4 = *(ulong *)(uVar5 + 0x10);
  }
  else {
    lVar3 = uVar5 + 8;
  }
  if ((long)(int)uVar4 <= *param_3 - (long)param_2) {
    _memcpy(param_2,lVar3,uVar4 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar4);
  }
  while( true ) {
    iVar8 = ((int)*param_3 - (int)param_2) + 0x10;
    iVar6 = (int)uVar4;
    uVar4 = (ulong)(uint)(iVar6 - iVar8);
    if (iVar6 - iVar8 == 0 || iVar6 < iVar8) break;
    func_0x00010b4d5738();
    lVar3 = (long)param_2 + (long)iVar8;
    param_2 = param_3;
    func_0x000107c303e4(param_3,lVar3);
  }
  func_0x00010b4d5738();
  return (long *)((long)param_2 + (long)iVar6);
}



/* Entry: 10b5a4fd0; end: 10b5a4ffb;  */

long FUN_10b5a4fd0(long param_1)

{
  func_0x00010b5b3ac8();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 10b5a4ffc; end: 10b5a4fff;  */

void FUN_10b5a4ffc(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  FUN_10b5a50b8(param_1 + 0x10,param_2 + 0x10);
  func_0x00010598fce8(param_1 + 0x28,param_2 + 0x28);
  uVar1 = *(ulong *)(param_2 + 0x40) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x40,uVar1,uVar2);
  }
  uVar1 = *(ulong *)(param_2 + 0x48) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x48,uVar1,uVar2);
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



/* Entry: 10b5a5000; end: 10b5a50b7;  */

void FUN_10b5a5000(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  FUN_10b5a50b8(param_1 + 0x10,param_2 + 0x10);
  func_0x00010598fce8(param_1 + 0x28,param_2 + 0x28);
  uVar1 = *(ulong *)(param_2 + 0x40) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x40,uVar1,uVar2);
  }
  uVar1 = *(ulong *)(param_2 + 0x48) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x48,uVar1,uVar2);
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



/* Entry: 10b5a50b8; end: 10b5a50cf;  */

void FUN_10b5a50b8(long *param_1,long param_2)

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



/* Entry: 10b5a50d0; end: 10b5a50fb;  */

undefined8 * FUN_10b5a50d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  FUN_10b5a50b8(param_1,param_3);
  return param_1;
}



/* Entry: 10b5a50fc; end: 10b5a512b;  */

long * FUN_10b5a50fc(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b5a512c; end: 10b5a51af;  */

long * FUN_10b5a512c(long *param_1)

{
  func_0x000107c282b4(param_1 + 3);
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b5a51b0; end: 10b5a51d3;  */

void FUN_10b5a51b0(void)

{
  return;
}



/* Entry: 10b5a51d4; end: 10b5a543b;  */

void FUN_10b5a51d4(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  long unaff_x19;
  
  func_0x00010b5a62e0();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010b5a51fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10e5c1e90)[extraout_x8] * 4 + 0x10b5a5200))();
    return;
  }
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 10b5a543c; end: 10b5a5473;  */

long FUN_10b5a543c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_10b5a51d4(param_1);
  }
  return param_1;
}



/* Entry: 10b5a5474; end: 10b5a5477;  */

long FUN_10b5a5474(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_10b5a51d4(param_1);
  }
  return param_1;
}



/* Entry: 10b5a5478; end: 10b5a548b;  */

void FUN_10b5a5478(void)

{
  FUN_10b5a543c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5a548c; end: 10b5a5497;  */

undefined ** FUN_10b5a548c(void)

{
  return &PTR_DAT_110d145b0;
}



/* Entry: 10b5a5498; end: 10b5a5663;  */

void FUN_10b5a5498(long param_1)

{
  ulong *puVar1;
  
  FUN_10b5a51d4();
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



/* Entry: 10b5a5664; end: 10b5a567f;  */

long FUN_10b5a5664(long param_1)

{
  long extraout_x8;
  
  FUN_10b5ca9cc();
  func_0x00010b5a6200();
  return param_1 + extraout_x8;
}



/* Entry: 10b5a5680; end: 10b5a59af;  */

void FUN_10b5a5680(long param_1)

{
  int iVar1;
  int iVar2;
  ulong *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b5a62cc();
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 != 0) {
    iVar2 = *(int *)(unaff_x21 + 0x1c);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        FUN_10b5a51d4();
      }
      *(int *)(unaff_x21 + 0x1c) = iVar1;
    }
    switch(iVar1) {
    case 1:
      if (iVar2 == iVar1) {
        func_0x00010b5a61f0();
        FUN_10b5ade8c();
        goto LAB_10b5a598c;
      }
      func_0x00010b5a6248();
      func_0x00010b5a5f20();
      break;
    case 2:
      if (iVar2 == iVar1) {
        func_0x00010b5a61f0();
        FUN_10b5b0c34();
        goto LAB_10b5a598c;
      }
      func_0x00010b5a6248();
      func_0x00010b5a5f50();
      break;
    case 3:
      if (iVar2 == iVar1) {
        func_0x00010b5a61f0();
        FUN_10b5cac24();
        goto LAB_10b5a598c;
      }
      func_0x00010b5a6248();
      func_0x00010b5a5f8c();
      break;
    case 4:
      if (iVar2 == iVar1) {
        func_0x00010b5a61f0();
        FUN_10b5a71b4();
        goto LAB_10b5a598c;
      }
      func_0x00010b5a6248();
      func_0x00010b5a5fc8();
      break;
    case 5:
      if (iVar2 == iVar1) {
        func_0x00010b5a61f0();
        FUN_10b5a3c90();
        goto LAB_10b5a598c;
      }
      func_0x00010b5a6248();
      func_0x00010b5a5ff8();
      break;
    case 6:
      if (iVar2 == iVar1) {
        func_0x00010b5a61f0();
        FUN_10b5a484c();
        goto LAB_10b5a598c;
      }
      func_0x00010b5a6248();
      func_0x00010b5a3eb4();
      break;
    case 7:
      if (iVar2 == iVar1) {
        func_0x00010b5a61f0();
        FUN_10b5ad798();
        goto LAB_10b5a598c;
      }
      func_0x00010b5a6248();
      func_0x00010b5a6028();
      break;
    case 8:
      if (iVar2 == iVar1) {
        func_0x00010b5a61f0();
        FUN_10b5b3c50();
        goto LAB_10b5a598c;
      }
      func_0x00010b5a6248();
      func_0x00010b5a6064();
      break;
    case 9:
      if (iVar2 == iVar1) {
        func_0x00010b5a61f0();
        FUN_10b5b9678();
        goto LAB_10b5a598c;
      }
      func_0x00010b5a6248();
      func_0x00010b5a60a0();
      break;
    case 10:
      if (iVar2 == iVar1) {
        func_0x00010b5a61f0();
        FUN_10b5c8220();
        goto LAB_10b5a598c;
      }
      func_0x00010b5a6248();
      func_0x00010b5a60d0();
      break;
    case 0xb:
      if (iVar2 == iVar1) {
        func_0x00010b5a61f0();
        FUN_10b5c6838();
        goto LAB_10b5a598c;
      }
      func_0x00010b5a6248();
      func_0x00010b5a6100();
      break;
    case 0xc:
      if (iVar2 == iVar1) {
        func_0x00010b5a61f0();
        FUN_10b5bb310();
        goto LAB_10b5a598c;
      }
      func_0x00010b5a6248();
      func_0x00010b5a6130();
      break;
    case 0xd:
      if (iVar2 == iVar1) {
        func_0x00010b5a61f0();
        FUN_10b5c1b44();
        goto LAB_10b5a598c;
      }
      func_0x00010b5a6248();
      func_0x00010b5a6160();
      break;
    case 0xe:
      if (iVar2 == iVar1) {
        func_0x00010b5a61f0();
        FUN_10b5c3164();
        goto LAB_10b5a598c;
      }
      func_0x00010b5a6248();
      func_0x00010b5a6190();
      break;
    default:
      goto LAB_10b5a598c;
    }
    *(long *)(unaff_x21 + 0x10) = param_1;
  }
LAB_10b5a598c:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*unaff_x19 & 1) == 0) {
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



/* Entry: 10b5a59b0; end: 10b5a5a57;  */

undefined8 * FUN_10b5a59b0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d14570;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  FUN_10b5a5e30(param_1 + 3,param_2,param_3 + 0x18);
  lVar1 = param_3 + 0x30;
  func_0x000107c2809c(lVar1,param_2);
  param_1[6] = lVar1;
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x00010b5a61c0(param_2,*(undefined8 *)(param_3 + 0x38));
  }
  param_1[7] = param_2;
  return param_1;
}



/* Entry: 10b5a5a58; end: 10b5a5a87;  */

long FUN_10b5a5a58(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5a5a88(param_1);
  return param_1;
}



/* Entry: 10b5a5a88; end: 10b5a5abf;  */

long * FUN_10b5a5a88(long param_1)

{
  long *plVar1;
  
  func_0x000107c30258(param_1 + 0x30);
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_10b5af588();
  }
  __ZdlPv();
  plVar1 = (long *)(param_1 + 0x18);
  if (*plVar1 != 0) {
    func_0x000107c303ac(plVar1);
  }
  return plVar1;
}



/* Entry: 10b5a5ac0; end: 10b5a5ac3;  */

long FUN_10b5a5ac0(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5a5a88(param_1);
  return param_1;
}



/* Entry: 10b5a5ac4; end: 10b5a5ad7;  */

void FUN_10b5a5ac4(void)

{
  FUN_10b5a5a58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5a5ad8; end: 10b5a5ae3;  */

undefined ** FUN_10b5a5ad8(void)

{
  return &PTR_DAT_110d145f8;
}



/* Entry: 10b5a5ae4; end: 10b5a5b43;  */

void FUN_10b5a5ae4(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x0001053936e4(param_1 + 0x18);
  }
  func_0x000107c3025c(param_1 + 0x30);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_10b5af618(*(undefined8 *)(param_1 + 0x38));
  }
  puVar1 = (ulong *)(param_1 + 8);
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



/* Entry: 10b5a5b44; end: 10b5a5c67;  */

long * FUN_10b5a5b44(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  
  iVar9 = *(int *)(param_1 + 0x20);
  for (iVar7 = 0; iVar9 != iVar7; iVar7 = iVar7 + 1) {
    uVar5 = *(ulong *)(param_1 + 0x18);
    puVar1 = (ulong *)(param_1 + 0x18);
    if ((uVar5 & 1) != 0) {
      puVar1 = (ulong *)(uVar5 + (long)iVar7 * 8 + 7);
    }
    param_2 = (long *)0x4;
    func_0x00010b5a62b8(4,*puVar1,*(undefined4 *)(*puVar1 + 0x18));
  }
  puVar8 = (undefined8 *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar8 + 0x17);
  if (lVar4 < 0) {
    lVar4 = puVar8[1];
    if (lVar4 == 0) goto LAB_10b5a5bf8;
    puVar2 = (undefined8 *)*puVar8;
  }
  else {
    puVar2 = puVar8;
    if (*(char *)((long)puVar8 + 0x17) == '\0') goto LAB_10b5a5bf8;
  }
  func_0x000107c303d4(puVar2,lVar4,1,&UNK_10f77dcb2);
  plVar3 = param_3;
  func_0x000107c280a0(param_3,5,puVar8,param_2);
  param_2 = plVar3;
LAB_10b5a5bf8:
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    param_2 = (long *)0x6;
    func_0x00010b5a62b8(6,*(long *)(param_1 + 0x38),
                        *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x14));
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
  if ((long)uVar5 < 0) {
    lVar4 = *(long *)(uVar6 + 8);
    uVar5 = *(ulong *)(uVar6 + 0x10);
  }
  else {
    lVar4 = uVar6 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)uVar5) {
    while( true ) {
      iVar9 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar7 = (int)uVar5;
      uVar5 = (ulong)(uint)(iVar7 - iVar9);
      if (iVar7 - iVar9 == 0 || iVar7 < iVar9) break;
      func_0x00010b4d5738();
      lVar4 = (long)param_2 + (long)iVar9;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar4);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar7);
  }
  _memcpy(param_2,lVar4,uVar5 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)uVar5);
}



/* Entry: 10b5a5c68; end: 10b5a5d1b;  */

long FUN_10b5a5c68(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = *(ulong *)(param_1 + 0x18);
  lVar3 = (long)*(int *)(param_1 + 0x20);
  puVar1 = (ulong *)(param_1 + 0x18);
  if ((uVar2 & 1) != 0) {
    puVar1 = (ulong *)(uVar2 + 7);
  }
  for (lVar4 = lVar3 << 3; lVar4 != 0; lVar4 = lVar4 + -8) {
    uVar2 = *puVar1;
    FUN_10b5a5d1c();
    lVar3 = uVar2 + lVar3;
    puVar1 = puVar1 + 1;
  }
  uVar2 = *(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    func_0x000107c282a0();
    lVar3 = lVar3 + uVar2 + 1;
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    lVar4 = *(long *)(param_1 + 0x38);
    func_0x00010b5a5d38();
    lVar3 = lVar3 + lVar4 + 1;
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



/* Entry: 10b5a5d1c; end: 10b5a5d53;  */

long FUN_10b5a5d1c(long param_1)

{
  long extraout_x8;
  
  func_0x00010b5a5550();
  func_0x00010b5a6200();
  return param_1 + extraout_x8;
}



/* Entry: 10b5a5d54; end: 10b5a5d57;  */

void FUN_10b5a5d54(void)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x00010b5a62cc();
  if ((unaff_x22 & 1) != 0) {
    unaff_x22 = *(ulong *)(unaff_x22 & 0xfffffffffffffffe);
  }
  FUN_10b5a5e10(unaff_x21 + 0x18,unaff_x20 + 0x18);
  uVar2 = *(ulong *)(unaff_x20 + 0x30) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(unaff_x21 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(unaff_x21 + 0x30,uVar2,uVar3);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(unaff_x21 + 0x38) == 0) {
      func_0x00010b5a61c0(unaff_x22,*(undefined8 *)(unaff_x20 + 0x38));
      *(ulong *)(unaff_x21 + 0x38) = unaff_x22;
    }
    else {
      FUN_10b5af7c8();
    }
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*unaff_x19 & 1) == 0) {
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



/* Entry: 10b5a5d58; end: 10b5a5e0f;  */

void FUN_10b5a5d58(void)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x00010b5a62cc();
  if ((unaff_x22 & 1) != 0) {
    unaff_x22 = *(ulong *)(unaff_x22 & 0xfffffffffffffffe);
  }
  FUN_10b5a5e10(unaff_x21 + 0x18,unaff_x20 + 0x18);
  uVar2 = *(ulong *)(unaff_x20 + 0x30) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(unaff_x21 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(unaff_x21 + 0x30,uVar2,uVar3);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(unaff_x21 + 0x38) == 0) {
      func_0x00010b5a61c0(unaff_x22,*(undefined8 *)(unaff_x20 + 0x38));
      *(ulong *)(unaff_x21 + 0x38) = unaff_x22;
    }
    else {
      FUN_10b5af7c8();
    }
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*unaff_x19 & 1) == 0) {
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



/* Entry: 10b5a5e10; end: 10b5a5e2f;  */

void FUN_10b5a5e10(long *param_1,long param_2)

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



/* Entry: 10b5a5e30; end: 10b5a5e5b;  */

undefined8 * FUN_10b5a5e30(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  FUN_10b5a5e10(param_1,param_3);
  return param_1;
}



/* Entry: 10b5a5e5c; end: 10b5a5e8b;  */

long * FUN_10b5a5e5c(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b5a5e8c; end: 10b5a61ef;  */

void FUN_10b5a5e8c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5a62a8();
  }
  else {
    FUN_10b4d80e0(param_1,0x20);
  }
  *puVar1 = &PTR_FUN_110d14520;
  puVar1[1] = param_1;
  puVar1[3] = 0;
  return;
}



/* Entry: 10b5a61f0; end: 10b5a62f3;  */

undefined8 FUN_10b5a61f0(void)

{
  long unaff_x21;
  
  return *(undefined8 *)(unaff_x21 + 0x10);
}



/* Entry: 10b5a62f4; end: 10b5a6387;  */

undefined8 * FUN_10b5a62f4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d14678;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  lVar1 = param_3 + 0x18;
  func_0x000107c2809c(lVar1,param_2);
  param_1[3] = lVar1;
  lVar1 = param_3 + 0x20;
  func_0x000107c2809c(lVar1,param_2);
  param_1[4] = lVar1;
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x00010b527090(param_2,*(undefined8 *)(param_3 + 0x28));
  }
  param_1[5] = param_2;
  return param_1;
}



/* Entry: 10b5a6388; end: 10b5a63b7;  */

long FUN_10b5a6388(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5a63b8(param_1);
  return param_1;
}



/* Entry: 10b5a63b8; end: 10b5a63ef;  */

void FUN_10b5a63b8(long param_1)

{
  func_0x000107c30258(param_1 + 0x18);
  func_0x000107c30258(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10b5c6ed4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5a63f0; end: 10b5a63f3;  */

long FUN_10b5a63f0(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5a63b8(param_1);
  return param_1;
}



/* Entry: 10b5a63f4; end: 10b5a6407;  */

void FUN_10b5a63f4(void)

{
  FUN_10b5a6388();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5a6408; end: 10b5a6413;  */

undefined ** FUN_10b5a6408(void)

{
  return &PTR_DAT_110d146b8;
}



/* Entry: 10b5a6414; end: 10b5a646b;  */

void FUN_10b5a6414(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x18);
  func_0x000107c3025c(param_1 + 0x20);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_10b5c6f58(*(undefined8 *)(param_1 + 0x28));
  }
  puVar1 = (ulong *)(param_1 + 8);
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



/* Entry: 10b5a646c; end: 10b5a657f;  */

long * FUN_10b5a646c(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  
  puVar6 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  lVar2 = (long)*(char *)((long)puVar6 + 0x17);
  if (lVar2 < 0) {
    lVar2 = puVar6[1];
    if (lVar2 != 0) {
      puVar6 = (undefined8 *)*puVar6;
      goto LAB_10b5a64b0;
    }
  }
  else if (*(char *)((long)puVar6 + 0x17) != '\0') {
LAB_10b5a64b0:
    func_0x000107c303d4(puVar6,lVar2,1,&UNK_10f77dce5);
    param_2 = param_3;
    func_0x00010b5a6798(param_3,1);
  }
  puVar6 = (undefined8 *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
  lVar2 = (long)*(char *)((long)puVar6 + 0x17);
  if (lVar2 < 0) {
    lVar2 = puVar6[1];
    if (lVar2 == 0) goto LAB_10b5a6518;
    puVar6 = (undefined8 *)*puVar6;
  }
  else if (*(char *)((long)puVar6 + 0x17) == '\0') goto LAB_10b5a6518;
  func_0x000107c303d4(puVar6,lVar2,1,&UNK_10f77dd0a);
  param_2 = param_3;
  func_0x00010b5a6798(param_3,2);
LAB_10b5a6518:
  plVar1 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    plVar1 = (long *)0x3;
    func_0x000107c303cc(3,*(long *)(param_1 + 0x28),
                        *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x14),param_2,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return plVar1;
  }
  uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  uVar3 = (ulong)*(char *)(uVar4 + 0x1f);
  if ((long)uVar3 < 0) {
    lVar2 = *(long *)(uVar4 + 8);
    uVar3 = *(ulong *)(uVar4 + 0x10);
  }
  else {
    lVar2 = uVar4 + 8;
  }
  if (*param_3 - (long)plVar1 < (long)(int)uVar3) {
    while( true ) {
      iVar7 = ((int)*param_3 - (int)plVar1) + 0x10;
      iVar5 = (int)uVar3;
      uVar3 = (ulong)(uint)(iVar5 - iVar7);
      if (iVar5 - iVar7 == 0 || iVar5 < iVar7) break;
      func_0x00010b4d5738();
      lVar2 = (long)plVar1 + (long)iVar7;
      plVar1 = param_3;
      func_0x000107c303e4(param_3,lVar2);
    }
    func_0x00010b4d5738();
    return (long *)((long)plVar1 + (long)iVar5);
  }
  _memcpy(plVar1,lVar2,uVar3 & 0xffffffff);
  return (long *)((long)plVar1 + (long)(int)uVar3);
}



/* Entry: 10b5a6580; end: 10b5a6627;  */

long FUN_10b5a6580(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  if (*(char *)(uVar1 + 0x17) < '\0') {
    if (*(long *)(uVar1 + 8) == 0) goto LAB_10b5a65b8;
  }
  else if (*(char *)(uVar1 + 0x17) == '\0') {
LAB_10b5a65b8:
    lVar3 = 0;
    goto LAB_10b5a65bc;
  }
  func_0x000107c282a0();
  lVar3 = uVar1 + 1;
LAB_10b5a65bc:
  uVar1 = *(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc;
  lVar2 = (long)*(char *)(uVar1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    lVar3 = lVar3 + uVar1 + 1;
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    lVar2 = *(long *)(param_1 + 0x28);
    func_0x00010b526fec();
    lVar3 = lVar3 + lVar2 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar1 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar1 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x14) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b5a6628; end: 10b5a662b;  */

void FUN_10b5a6628(long param_1,long param_2)

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
  uVar4 = *(ulong *)(param_2 + 0x20) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar4 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar4 + 8);
  }
  if (lVar5 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x20,uVar4,uVar3);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x28) == 0) {
      func_0x00010b527090(uVar2,*(undefined8 *)(param_2 + 0x28));
      *(ulong *)(param_1 + 0x28) = uVar2;
    }
    else {
      FUN_10b5c7160();
    }
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



/* Entry: 10b5a662c; end: 10b5a672f;  */

void FUN_10b5a662c(long param_1,long param_2)

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
  uVar4 = *(ulong *)(param_2 + 0x20) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar4 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar4 + 8);
  }
  if (lVar5 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x20,uVar4,uVar3);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x28) == 0) {
      func_0x00010b527090(uVar2,*(undefined8 *)(param_2 + 0x28));
      *(ulong *)(param_1 + 0x28) = uVar2;
    }
    else {
      FUN_10b5c7160();
    }
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



/* Entry: 10b5a6730; end: 10b5a6737;  */

void FUN_10b5a6730(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110d14678;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = &DAT_11383d918;
  puVar1[5] = 0;
  return;
}



/* Entry: 10b5a6738; end: 10b5a678b;  */

void FUN_10b5a6738(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d14678;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = &DAT_11383d918;
  puVar1[5] = 0;
  return;
}



/* Entry: 10b5a678c; end: 10b5a67ab;  */

void FUN_10b5a678c(void)

{
  return;
}



/* Entry: 10b5a67ac; end: 10b5a687b;  */

undefined8 * FUN_10b5a67ac(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d14720;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  func_0x000107c282d4(param_1 + 3,param_2,param_3 + 0x18);
  *(undefined4 *)(param_1 + 5) = 0;
  FUN_10b504dcc(param_1 + 6,param_2,param_3 + 0x30);
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x00010b5a6dfc(param_2,*(undefined8 *)(param_3 + 0x50));
  }
  param_1[10] = uVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x00010b5084dc(param_2,*(undefined8 *)(param_3 + 0x58));
  }
  param_1[0xb] = param_2;
  return param_1;
}



/* Entry: 10b5a687c; end: 10b5a68ab;  */

long FUN_10b5a687c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5a68ac(param_1);
  return param_1;
}



/* Entry: 10b5a68ac; end: 10b5a68eb;  */

long FUN_10b5a68ac(long param_1)

{
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_10b504a88();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_10b549da4();
  }
  __ZdlPv();
  FUN_10b504e1c(param_1 + 0x30);
  func_0x000107c282dc(param_1 + 0x18);
  return param_1 + 0x10;
}



/* Entry: 10b5a68ec; end: 10b5a68ef;  */

long FUN_10b5a68ec(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5a68ac(param_1);
  return param_1;
}



/* Entry: 10b5a68f0; end: 10b5a6903;  */

void FUN_10b5a68f0(void)

{
  FUN_10b5a687c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5a6904; end: 10b5a690f;  */

undefined ** FUN_10b5a6904(void)

{
  return &PTR_DAT_110d14760;
}



/* Entry: 10b5a6910; end: 10b5a6977;  */

void FUN_10b5a6910(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  func_0x00010b504e9c(param_1 + 0x30);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_10b504adc(*(undefined8 *)(param_1 + 0x50));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010b549e3c(*(undefined8 *)(param_1 + 0x58));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
    *(byte *)puVar2 = 0;
    *(byte *)((long)puVar2 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar2 = 0;
  puVar2[1] = 0;
  return;
}



/* Entry: 10b5a6978; end: 10b5a6b33;  */

byte * FUN_10b5a6978(byte *param_1,byte *param_2,byte *param_3)

{
  int *piVar1;
  byte *pbVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  byte *pbVar6;
  uint uVar7;
  int *piVar8;
  long lStack_58;
  undefined1 auStack_50 [16];
  
  uVar7 = *(uint *)(param_1 + 0x28);
  if (uVar7 != 0) {
    pbVar2 = param_1;
    func_0x00010b5a6e50();
    pbVar6 = pbVar2 + 2;
    *pbVar2 = 10;
    for (; 0x7f < uVar7; uVar7 = uVar7 >> 7) {
      pbVar6[-1] = (byte)uVar7 | 0x80;
      pbVar6 = pbVar6 + 1;
    }
    pbVar6[-1] = (byte)uVar7;
    piVar8 = *(int **)(param_1 + 0x20);
    piVar1 = piVar8 + *(int *)(param_1 + 0x18);
    do {
      func_0x00010b5a6e50();
      uVar5 = (ulong)*piVar8;
      pbVar6 = pbVar2;
      while( true ) {
        param_2 = pbVar6 + 1;
        if (uVar5 < 0x80) break;
        *pbVar6 = (byte)uVar5 | 0x80;
        uVar5 = uVar5 >> 7;
        pbVar6 = param_2;
      }
      piVar8 = piVar8 + 1;
      *pbVar6 = (byte)uVar5;
    } while (piVar8 < piVar1);
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    if ((*(int *)(param_1 + 0x30) == 1) || ((param_3[0x3a] & 1) == 0)) {
      pbVar6 = (byte *)&lStack_58;
      func_0x00010564c19c(pbVar6);
      while (pbVar2 = pbVar6, lStack_58 != 0) {
        func_0x00010b5a6e40();
        pbVar6 = (byte *)&lStack_58;
        func_0x000107c27d54(pbVar6);
        param_2 = pbVar2;
      }
    }
    else {
      pbVar6 = (byte *)&lStack_58;
      FUN_10b504ec0(pbVar6);
      for (lStack_58 = lStack_58 << 4; lStack_58 != 0; lStack_58 = lStack_58 + -0x10) {
        func_0x00010b5a6e40();
        param_2 = pbVar6;
      }
      FUN_10b504e60(auStack_50);
    }
  }
  uVar7 = *(uint *)(param_1 + 0x10);
  if ((uVar7 & 1) != 0) {
    param_2 = (byte *)0x3;
    func_0x00010b5a6e5c(3,*(long *)(param_1 + 0x50),
                        *(undefined4 *)(*(long *)(param_1 + 0x50) + 0x18));
  }
  if ((uVar7 >> 1 & 1) != 0) {
    param_2 = (byte *)0x4;
    func_0x00010b5a6e5c(4,*(long *)(param_1 + 0x58),
                        *(undefined4 *)(*(long *)(param_1 + 0x58) + 0x20));
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar4 < 0) {
      lVar3 = *(long *)(uVar5 + 8);
      lVar4 = *(long *)(uVar5 + 0x10);
    }
    else {
      lVar3 = uVar5 + 8;
    }
    func_0x0001053930c4(param_3,lVar3,lVar4,param_2);
    param_2 = param_3;
  }
  return param_2;
}



/* Entry: 10b5a6b34; end: 10b5a6c73;  */

long FUN_10b5a6b34(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long alStack_48 [3];
  
  lVar4 = 0;
  lVar2 = 0;
  for (lVar5 = (long)*(int *)(param_1 + 0x18); lVar5 != 0; lVar5 = lVar5 + -1) {
    lVar2 = (ulong)((int)LZCOUNT((long)*(int *)(*(long *)(param_1 + 0x20) + (lVar4 >> 0x1e))) * -9 +
                    0x280U >> 6) + lVar2;
    lVar4 = lVar4 + 0x100000000;
  }
  lVar4 = 0;
  if (lVar2 != 0) {
    lVar4 = lVar2 + (ulong)((int)LZCOUNT((long)(int)lVar2) * -9 + 0x280U >> 6) + 1;
  }
  *(int *)(param_1 + 0x28) = (int)lVar2;
  lVar4 = lVar4 + (ulong)*(uint *)(param_1 + 0x30);
  func_0x00010564c19c(alStack_48);
  while (alStack_48[0] != 0) {
    lVar2 = alStack_48[0] + 8;
    FUN_10b504d78(lVar2,alStack_48[0] + 0x10);
    lVar4 = lVar2 + lVar4;
    func_0x000107c27d54(alStack_48);
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x50);
      func_0x00010b504b94();
      lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x58);
      func_0x00010b5083d8();
      lVar4 = lVar4 + lVar2 + 1;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar4 = lVar2 + lVar4;
  }
  *(int *)(param_1 + 0x14) = (int)lVar4;
  return lVar4;
}



/* Entry: 10b5a6c74; end: 10b5a6c77;  */

void FUN_10b5a6c74(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  func_0x000107c282d0(param_1 + 0x18,param_2 + 0x18);
  FUN_10b505080(param_1 + 0x30,param_2 + 0x30);
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x50) == 0) {
        uVar2 = uVar3;
        func_0x00010b5a6dfc(uVar3,*(undefined8 *)(param_2 + 0x50));
        *(ulong *)(param_1 + 0x50) = uVar2;
      }
      else {
        FUN_10b504c00();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x58) == 0) {
        func_0x00010b5084dc(uVar3,*(undefined8 *)(param_2 + 0x58));
        *(ulong *)(param_1 + 0x58) = uVar3;
      }
      else {
        func_0x00010b549d60();
      }
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b5a6c78; end: 10b5a6d5f;  */

void FUN_10b5a6c78(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  func_0x000107c282d0(param_1 + 0x18,param_2 + 0x18);
  FUN_10b505080(param_1 + 0x30,param_2 + 0x30);
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x50) == 0) {
        uVar2 = uVar3;
        func_0x00010b5a6dfc(uVar3,*(undefined8 *)(param_2 + 0x50));
        *(ulong *)(param_1 + 0x50) = uVar2;
      }
      else {
        FUN_10b504c00();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x58) == 0) {
        func_0x00010b5084dc(uVar3,*(undefined8 *)(param_2 + 0x58));
        *(ulong *)(param_1 + 0x58) = uVar3;
      }
      else {
        func_0x00010b549d60();
      }
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b5a6d60; end: 10b5a6d67;  */

void FUN_10b5a6d60(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x60;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x60);
  }
  *puVar1 = &PTR_FUN_110d14720;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_2;
  *(undefined4 *)(puVar1 + 5) = 0;
  puVar1[7] = 0x100000000;
  puVar1[6] = 0x100000000;
  puVar1[8] = &DAT_10e5b4a18;
  puVar1[9] = param_2;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  return;
}



/* Entry: 10b5a6d68; end: 10b5a6e3f;  */

long FUN_10b5a6d68(long param_1)

{
  FUN_10b504e1c(param_1 + 0x20);
  func_0x000107c282dc(param_1 + 8);
  return param_1;
}



/* Entry: 10b5a6e40; end: 10b5a6e6f;  */

void FUN_10b5a6e40(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 unaff_x19;
  
  uVar1 = unaff_x19;
  func_0x000107c28094();
  func_0x000107c280a8(0x12,uVar1);
  uVar1 = param_2;
  func_0x00010b504fd0(param_2,param_3);
  func_0x000107c280a8();
  func_0x0001098cc8ac(1,param_2,uVar1);
  func_0x000107c28094();
  uVar2 = (ulong)*(uint *)(param_3 + 5);
  func_0x0001001a597c();
  uVar1 = 0x12;
  func_0x0001001a59d0(0x12,unaff_x19);
  func_0x0001001a59d0(uVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001006018cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x38))(param_3,uVar2);
  return;
}



/* Entry: 10b5a6e70; end: 10b5a6efb;  */

undefined8 * FUN_10b5a6e70(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d147c8;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  lVar1 = param_3 + 0x18;
  func_0x000107c2809c(lVar1,param_2);
  param_1[3] = lVar1;
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x00010b5a72f0(param_2,*(undefined8 *)(param_3 + 0x20));
  }
  param_1[4] = param_2;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_3 + 0x28);
  return param_1;
}



/* Entry: 10b5a6efc; end: 10b5a6f2b;  */

long FUN_10b5a6efc(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5a6f2c(param_1);
  return param_1;
}



/* Entry: 10b5a6f2c; end: 10b5a6f5b;  */

void FUN_10b5a6f2c(long param_1)

{
  func_0x000107c30258(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b5b2df0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5a6f5c; end: 10b5a6f5f;  */

long FUN_10b5a6f5c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5a6f2c(param_1);
  return param_1;
}



/* Entry: 10b5a6f60; end: 10b5a6f73;  */

void FUN_10b5a6f60(void)

{
  FUN_10b5a6efc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5a6f74; end: 10b5a6f7f;  */

undefined ** FUN_10b5a6f74(void)

{
  return &PTR_DAT_110d14808;
}



/* Entry: 10b5a6f80; end: 10b5a6fd3;  */

void FUN_10b5a6f80(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x18);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_10b5b2e6c(*(undefined8 *)(param_1 + 0x20));
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



/* Entry: 10b5a6fd4; end: 10b5a70db;  */

long * FUN_10b5a6fd4(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  
  plVar1 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    plVar1 = (long *)0x1;
    func_0x000107c303cc(1,*(long *)(param_1 + 0x20),
                        *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x30),param_2,param_3);
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    plVar2 = param_3;
    func_0x000107c28094(param_3,plVar1);
    plVar1 = (long *)(ulong)*(uint *)(param_1 + 0x28);
    uVar3 = 0x10;
    func_0x000107c280a8(0x10,plVar2);
    func_0x000107c280b8(plVar1,uVar3);
  }
  puVar9 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  lVar5 = (long)*(char *)((long)puVar9 + 0x17);
  if (lVar5 < 0) {
    lVar5 = puVar9[1];
    if (lVar5 == 0) goto LAB_10b5a7098;
    puVar4 = (undefined8 *)*puVar9;
  }
  else {
    puVar4 = puVar9;
    if (*(char *)((long)puVar9 + 0x17) == '\0') goto LAB_10b5a7098;
  }
  func_0x000107c303d4(puVar4,lVar5,1,&UNK_10f77dd30);
  plVar2 = param_3;
  func_0x000107c280a0(param_3,3,puVar9,plVar1);
  plVar1 = plVar2;
LAB_10b5a7098:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return plVar1;
  }
  uVar7 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  uVar6 = (ulong)*(char *)(uVar7 + 0x1f);
  if ((long)uVar6 < 0) {
    lVar5 = *(long *)(uVar7 + 8);
    uVar6 = *(ulong *)(uVar7 + 0x10);
  }
  else {
    lVar5 = uVar7 + 8;
  }
  if (*param_3 - (long)plVar1 < (long)(int)uVar6) {
    while( true ) {
      iVar10 = ((int)*param_3 - (int)plVar1) + 0x10;
      iVar8 = (int)uVar6;
      uVar6 = (ulong)(uint)(iVar8 - iVar10);
      if (iVar8 - iVar10 == 0 || iVar8 < iVar10) break;
      func_0x00010b4d5738();
      lVar5 = (long)plVar1 + (long)iVar10;
      plVar1 = param_3;
      func_0x000107c303e4(param_3,lVar5);
    }
    func_0x00010b4d5738();
    return (long *)((long)plVar1 + (long)iVar8);
  }
  _memcpy(plVar1,lVar5,uVar6 & 0xffffffff);
  return (long *)((long)plVar1 + (long)(int)uVar6);
}



/* Entry: 10b5a70dc; end: 10b5a7183;  */

long FUN_10b5a70dc(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  if (*(char *)(uVar1 + 0x17) < '\0') {
    if (*(long *)(uVar1 + 8) == 0) goto LAB_10b5a7114;
  }
  else if (*(char *)(uVar1 + 0x17) == '\0') {
LAB_10b5a7114:
    lVar3 = 0;
    goto LAB_10b5a7118;
  }
  func_0x000107c282a0();
  lVar3 = uVar1 + 1;
LAB_10b5a7118:
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    FUN_10b5a7184();
    lVar3 = lVar3 + lVar2 + 1;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    lVar3 = lVar3 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x28)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar1 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar1 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x14) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b5a7184; end: 10b5a71af;  */

long FUN_10b5a7184(long param_1)

{
  FUN_10b5b2fc0();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 10b5a71b0; end: 10b5a71b3;  */

void FUN_10b5a71b0(long param_1,long param_2)

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
      func_0x00010b5a72f0(uVar2,*(undefined8 *)(param_2 + 0x20));
      *(ulong *)(param_1 + 0x20) = uVar2;
    }
    else {
      FUN_10b5b308c();
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



/* Entry: 10b5a71b4; end: 10b5a7293;  */

void FUN_10b5a71b4(long param_1,long param_2)

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
      func_0x00010b5a72f0(uVar2,*(undefined8 *)(param_2 + 0x20));
      *(ulong *)(param_1 + 0x20) = uVar2;
    }
    else {
      FUN_10b5b308c();
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



/* Entry: 10b5a7294; end: 10b5a729b;  */

void FUN_10b5a7294(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110d147c8;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  return;
}



/* Entry: 10b5a729c; end: 10b5a7333;  */

void FUN_10b5a729c(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d147c8;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  return;
}


