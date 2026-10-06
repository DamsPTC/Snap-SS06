/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109dc03d8; end: 109dc05bf;  */

long FUN_109dc03d8(long *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  plVar1 = param_1;
  func_0x000107c2b020();
  lVar4 = *param_1;
  uVar3 = (ulong)plVar1 & 0xffffffff;
  lVar2 = *(long *)(lVar4 + ((ulong)plVar1 & 0xffffffff) * 8);
  if (lVar2 == -8) {
    *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  }
  else if (lVar2 != 0) {
    plVar1 = (long *)(lVar4 + uVar3 * 8 + 8);
    while ((lVar2 == 0 || (lVar2 == -8))) {
      lVar2 = *plVar1;
      plVar1 = plVar1 + 1;
    }
    goto LAB_109dc04b0;
  }
  plVar1 = (long *)(param_3 + 0x11);
  __ZnwmSt11align_val_t(plVar1,8);
  if (param_3 != 0) {
    _memcpy(plVar1 + 2,param_2,param_3);
  }
  *(undefined1 *)((long)(plVar1 + 2) + param_3) = 0;
  *plVar1 = param_3;
  *(undefined4 *)(plVar1 + 1) = 0;
  *(long **)(lVar4 + uVar3 * 8) = plVar1;
  *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) + 1;
  plVar1 = param_1;
  func_0x000107c2b028(param_1,uVar3);
  plVar1 = (long *)(*param_1 + ((ulong)plVar1 & 0xffffffff) * 8);
  do {
    lVar2 = *plVar1;
    plVar1 = plVar1 + 1;
  } while (lVar2 == 0 || lVar2 == -8);
LAB_109dc04b0:
  return lVar2 + 8;
}



/* Entry: 109dc05c0; end: 109dc05ff;  */

void FUN_109dc05c0(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_109dc05c0(param_1,*param_2);
    FUN_109dc05c0(param_1,param_2[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 109dc0600; end: 109dc079b;  */

long * FUN_109dc0600(long *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lStack_48;
  
  puVar3 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)param_1[2];
  puVar5 = puVar3;
  if (puVar1 != puVar3) {
    uVar2 = param_1[4];
    plVar4 = puVar3 + uVar2 / 0x2e;
    lVar6 = *plVar4 + (uVar2 % 0x2e) * 0x58;
    lVar7 = puVar3[(param_1[5] + uVar2) / 0x2e] + ((param_1[5] + uVar2) % 0x2e) * 0x58;
    puVar5 = puVar1;
    if (lVar6 != lVar7) {
      do {
        lStack_48 = lVar6 + 0x38;
        func_0x000104c607c8(&lStack_48);
        lStack_48 = lVar6 + 0x20;
        FUN_109daba74(&lStack_48);
        lVar6 = lVar6 + 0x58;
        if (lVar6 - *plVar4 == 0xfd0) {
          plVar4 = plVar4 + 1;
          lVar6 = *plVar4;
        }
      } while (lVar6 != lVar7);
      puVar3 = (undefined8 *)param_1[1];
      puVar1 = (undefined8 *)param_1[2];
      puVar5 = puVar1;
    }
  }
  param_1[5] = 0;
  lVar6 = (long)puVar5 - (long)puVar3;
  while (uVar2 = lVar6 >> 3, 2 < uVar2) {
    __ZdlPv(*puVar3);
    puVar1 = (undefined8 *)param_1[2];
    puVar3 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = (long)puVar3;
    puVar5 = puVar1;
    lVar6 = (long)puVar1 - (long)puVar3;
  }
  if (uVar2 == 1) {
    lVar6 = 0x17;
  }
  else {
    if (uVar2 != 2) goto LAB_109dc073c;
    lVar6 = 0x2e;
  }
  param_1[4] = lVar6;
LAB_109dc073c:
  if (puVar3 != puVar5) {
    do {
      puVar1 = puVar3 + 1;
      __ZdlPv(*puVar3);
      puVar3 = puVar1;
    } while (puVar1 != puVar5);
    puVar5 = (undefined8 *)param_1[1];
    puVar1 = (undefined8 *)param_1[2];
  }
  if (puVar1 != puVar5) {
    param_1[2] = (long)puVar1 + ((long)puVar5 + (7 - (long)puVar1) & 0xfffffffffffffff8U);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109dc079c; end: 109dc07e3;  */

long FUN_109dc079c(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x38;
  func_0x000104c607c8(&lStack_28);
  lStack_28 = param_1 + 0x20;
  FUN_109daba74(&lStack_28);
  return param_1;
}



/* Entry: 109dc07e4; end: 109dc0853;  */

long * FUN_109dc07e4(long *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  if ((*(int *)((long)param_1 + 0xc) != 0) && (uVar1 = *(uint *)(param_1 + 1), uVar1 != 0)) {
    lVar3 = 0;
    do {
      lVar2 = *(long *)(*param_1 + lVar3);
      if (lVar2 != -8 && lVar2 != 0) {
        __ZdlPvSt11align_val_t(lVar2,8);
      }
      lVar3 = lVar3 + 8;
    } while ((ulong)uVar1 * 8 - lVar3 != 0);
  }
  _free(*param_1);
  return param_1;
}



/* Entry: 109dc0854; end: 109dc092f;  */

void FUN_109dc0854(long *param_1,long param_2,int param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  
  (**(code **)(*param_1 + 0xb8))();
  plVar3 = param_1;
  (**(code **)(*param_1 + 0x28))();
  plVar4 = (long *)(plVar3[1] + 0x18);
  if (0x40 < *(uint *)(plVar3[1] + 0x20)) {
    plVar4 = (long *)*plVar4;
  }
  lVar6 = *plVar4;
  (**(code **)(*param_1 + 0xb8))(param_1);
  plVar4 = param_1;
  (**(code **)(*param_1 + 0x28))();
  lVar1 = *(long *)(plVar4[1] + 8);
  lVar2 = *(long *)(plVar4[1] + 0x10);
  (**(code **)(*param_1 + 0xb8))(param_1);
  if (param_3 != 0) {
    if (lVar2 != 0) {
      lVar1 = lVar1 + 1;
    }
    uVar5 = lVar2 - (ulong)(lVar2 != 0);
    if (lVar2 - 2U <= uVar5) {
      uVar5 = lVar2 - 2U;
    }
    param_1[0x35] = lVar1;
    param_1[0x36] = uVar5;
    param_1[0x37] = lVar6;
    param_1[0x38] = param_2;
    *(int *)(param_1 + 0x39) = (int)param_1[0x23];
    if (param_1[0x3b] == 0) {
      param_1[0x3a] = lVar1;
      param_1[0x3b] = uVar5;
    }
  }
  return;
}



/* Entry: 109dc0930; end: 109dc0b6f;  */

void FUN_109dc0930(long *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined *apuStack_48 [4];
  undefined2 uStack_28;
  
  if (*(int *)((long)param_1 + 0x11c) - 1U < 2) {
    *(undefined4 *)((long)param_1 + 0x11c) = 2;
    if (((param_1[0x25] == param_1[0x26]) || ((*(byte *)(param_1[0x26] + -3) & 1) == 0)) &&
       ((char)param_1[0x24] != '\x01')) {
      plVar1 = param_1;
      (**(code **)(*param_1 + 0x100))(param_1,apuStack_48);
      if ((((ulong)plVar1 & 1) == 0) &&
         (plVar1 = param_1, FUN_109dd9860(), ((ulong)plVar1 & 1) == 0)) {
        *(bool *)(param_1 + 0x24) = apuStack_48[0] != (undefined *)0x0;
        *(bool *)((long)param_1 + 0x121) = apuStack_48[0] == (undefined *)0x0;
      }
    }
    else {
      *(undefined1 *)((long)param_1 + 0x121) = 1;
      (**(code **)(*param_1 + 0xe0))(param_1);
    }
  }
  else {
    apuStack_48[0] = &UNK_10f5fbed1;
    uStack_28 = 0x103;
    FUN_109dd98f8(param_1,param_2,apuStack_48,0,0);
  }
  return;
}



/* Entry: 109dc0b70; end: 109dc0bd7;  */

long * FUN_109dc0b70(long *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                    undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  undefined4 *puVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined4 auStack_a0 [2];
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined1 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined1 uStack_28;
  
  if (*(uint *)(param_1 + 1) < *(uint *)((long)param_1 + 0xc)) {
    puVar2 = (undefined4 *)(*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x80);
    *puVar2 = param_2;
    *(undefined8 *)(puVar2 + 2) = param_3;
    puVar2[4] = param_4;
    *(undefined1 *)(puVar2 + 5) = 0;
    *(undefined8 *)(puVar2 + 0x10) = 0;
    *(undefined8 *)(puVar2 + 0xe) = 0;
    *(undefined8 *)(puVar2 + 0x14) = 0;
    *(undefined8 *)(puVar2 + 0x12) = 0;
    *(undefined8 *)(puVar2 + 0x18) = 0;
    *(undefined8 *)(puVar2 + 0x16) = 0;
    *(undefined8 *)(puVar2 + 0x1a) = 0;
    *(undefined8 *)(puVar2 + 6) = 0;
    *(undefined8 *)(puVar2 + 8) = 0;
    *(undefined1 *)(puVar2 + 0xc) = 0;
    puVar2[0x1c] = 1;
    *(undefined1 *)(puVar2 + 0x1e) = 0;
    *(undefined8 *)(puVar2 + 8) = param_5;
    *(undefined8 *)(puVar2 + 10) = 0;
    *(undefined8 *)(puVar2 + 10) = param_6;
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    return param_1;
  }
  uStack_8c = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_38 = 0;
  uStack_70 = 0;
  uStack_30 = 1;
  uStack_28 = 0;
  uStack_88 = 0;
  plVar4 = param_1;
  auStack_a0[0] = param_2;
  uStack_98 = param_3;
  uStack_90 = param_4;
  uStack_80 = param_5;
  uStack_78 = param_6;
  func_0x000109dc99c4(param_1,auStack_a0);
  plVar3 = (long *)(*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x80);
  lVar8 = plVar4[5];
  lVar7 = plVar4[4];
  lVar6 = plVar4[7];
  lVar5 = plVar4[6];
  lVar11 = *plVar4;
  lVar10 = plVar4[3];
  lVar9 = plVar4[2];
  plVar3[1] = plVar4[1];
  *plVar3 = lVar11;
  plVar3[3] = lVar10;
  plVar3[2] = lVar9;
  plVar3[5] = lVar8;
  plVar3[4] = lVar7;
  plVar3[7] = lVar6;
  plVar3[6] = lVar5;
  lVar7 = plVar4[0xc];
  lVar6 = plVar4[0xf];
  lVar5 = plVar4[0xe];
  lVar9 = plVar4[9];
  lVar8 = plVar4[8];
  lVar11 = plVar4[0xb];
  lVar10 = plVar4[10];
  plVar3[0xd] = plVar4[0xd];
  plVar3[0xc] = lVar7;
  plVar3[0xf] = lVar6;
  plVar3[0xe] = lVar5;
  plVar3[9] = lVar9;
  plVar3[8] = lVar8;
  plVar3[0xb] = lVar11;
  plVar3[10] = lVar10;
  uVar1 = (int)param_1[1] + 1;
  *(uint *)(param_1 + 1) = uVar1;
  return (long *)(*param_1 + (ulong)uVar1 * 0x80 + -0x80);
}



/* Entry: 109dc0bd8; end: 109dc0c87;  */

undefined8 FUN_109dc0bd8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [24];
  long lStack_30;
  uint uStack_28;
  
  puVar1 = param_1 + 1;
  *(bool *)((long)param_1 + 0x6b) = *(int *)*puVar1 == 9;
  FUN_109dc9a3c(puVar1);
  if (*(int *)(param_1 + 2) == 0) {
    (**(code **)*param_1)(auStack_48,param_1);
    FUN_109db8164(puVar1,param_1[1],auStack_48);
    if ((0x40 < uStack_28) && (lStack_30 != 0)) {
      __ZdaPv();
    }
  }
  return *puVar1;
}



/* Entry: 109dc0c88; end: 109dc0e67;  */

long * FUN_109dc0c88(long *param_1,undefined **param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char *pcStack_170;
  undefined *apuStack_168 [4];
  undefined2 uStack_148;
  undefined *apuStack_140 [2];
  undefined **ppuStack_130;
  long lStack_128;
  undefined2 uStack_120;
  undefined **ppuStack_118;
  long lStack_110;
  undefined *puStack_108;
  undefined2 uStack_f8;
  ulong *puStack_90;
  long lStack_88;
  ulong uStack_80;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined4 auStack_58 [4];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = param_1;
  (**(code **)(*param_1 + 0x30))();
  bVar2 = *(byte *)((long)plVar5 + 0x641);
  if ((bVar2 == 1) &&
     (plVar5 = param_1, (**(code **)(*param_1 + 0x30))(), *(int *)((long)plVar5 + 0x644) == 0)) {
    if (param_1[0x3b] != 0) {
      plVar5 = param_1;
      (**(code **)(*param_1 + 0x30))(param_1);
      plVar3 = param_1;
      (**(code **)(*param_1 + 0x30))();
      uStack_70 = uStack_70 & 0xffffffffffffff00;
      uStack_60 = 0;
      puStack_90 = (ulong *)((ulong)puStack_90 & 0xffffffffffffff00);
      uStack_80 = uStack_80 & 0xffffffffffffff00;
      FUN_109daa7a8(plVar5,0,plVar3[0xaa],plVar3[0xab],param_1[0x3a],param_1[0x3b],&uStack_70,
                    &puStack_90);
    }
    plVar3 = param_1;
    (**(code **)(*param_1 + 0x30))();
    uStack_70 = uStack_70 & 0xffffffff00000000;
    puStack_90 = &uStack_70;
    plVar3 = plVar3 + 0xc3;
    FUN_109dab138(plVar3,&uStack_70,&UNK_10dd5b8f9,&puStack_90,auStack_58);
    plVar4 = param_1;
    (**(code **)(*param_1 + 0x30))();
    plVar5 = param_1;
    (**(code **)(*param_1 + 0x38))();
    (**(code **)(*param_1 + 0x30))();
    param_3 = param_1[0xaa];
    param_4 = param_1[0xab];
    uStack_68 = *(undefined8 *)((long)plVar3 + 0x1c4);
    uStack_70 = *(ulong *)((long)plVar3 + 0x1bc);
    uStack_60 = *(undefined1 *)((long)plVar3 + 0x1cc);
    lStack_88 = plVar3[0x3b];
    puStack_90 = (ulong *)plVar3[0x3a];
    uStack_80 = plVar3[0x3c];
    param_2 = (undefined **)0x0;
    (**(code **)(*plVar5 + 0x2a0))(auStack_58);
    *(undefined4 *)((long)plVar4 + 0x644) = auStack_58[0];
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return (long *)(ulong)bVar2;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  plVar3 = plVar5;
  (**(code **)(*plVar5 + 0x28))();
  uVar8 = *(undefined8 *)(plVar3[1] + 8);
  plVar3 = plVar5;
  (**(code **)(*plVar5 + 0x28))();
  uVar9 = *(undefined8 *)(plVar3[1] + 8);
  ppuStack_118 = (undefined **)0x0;
  plVar3 = plVar5;
  (**(code **)(*plVar5 + 0xe8))(plVar5,&pcStack_170,&ppuStack_118);
  if ((int)plVar3 != 0) {
    ppuStack_118 = (undefined **)&UNK_10f5fb626;
    uStack_f8 = 0x103;
    plVar3 = plVar5;
    (**(code **)(*plVar5 + 0x28))();
    FUN_109dd98f8(plVar5,plVar3[0xc],&ppuStack_118,0,0);
    return (long *)0x1;
  }
  plVar3 = plVar5;
  FUN_109dd9860();
  if (((ulong)plVar3 & 1) != 0) {
    return (long *)0x1;
  }
  plVar3 = plVar5;
  (**(code **)(*plVar5 + 0x30))();
  uStack_f8 = 0x105;
  ppuStack_118 = param_2;
  lStack_110 = param_3;
  FUN_109da83b8();
  if (plVar3 == (long *)0x0) {
    if ((param_3 == 1) && (*(char *)param_2 == '.')) {
      (**(code **)(*plVar5 + 0x38))();
      (**(code **)(*plVar5 + 0x280))();
      return (long *)0x0;
    }
    plVar3 = plVar5;
    (**(code **)(*plVar5 + 0x30))();
    uStack_f8 = 0x105;
    ppuStack_118 = param_2;
    lStack_110 = param_3;
    FUN_109da7538();
    uVar6 = 2;
    if ((param_4 & 1) != 0) {
      uVar6 = 0;
    }
    plVar3[1] = plVar3[1] & 0xfffffffffffffffdU | uVar6;
    goto LAB_109dc115c;
  }
  plVar4 = plVar3;
  func_0x000109db84b0();
  if ((int)plVar4 == 0) {
    plVar4 = plVar3;
    func_0x000109da4494(plVar3,0);
    uVar6 = plVar3[1];
    if ((((plVar4 == (long *)0x0) && (((uint)uVar6 >> 2 & 1) == 0)) && ((uVar6 & 0x1c00) != 0x800))
       || ((((uVar6 & 0x1c00) == 0x800 && ((param_4 & 1) == 0)) && (((uint)uVar6 >> 2 & 1) == 0))))
    {
LAB_109dc10d4:
      uVar1 = 2;
      if ((param_4 & 1) != 0) {
        uVar1 = 0;
      }
      plVar3[1] = uVar6 & 0xfffffffffffffffd | uVar1;
      goto LAB_109dc115c;
    }
    plVar4 = plVar3;
    func_0x000109da4494(plVar3,1);
    uVar6 = plVar3[1] & 0x1c00;
    if (plVar4 == (long *)0x0) {
      if (uVar6 == 0x800) goto LAB_109dc10bc;
      apuStack_140[0] = &UNK_10f5fb65e;
    }
    else if (((param_4 & 1) == 0) && (uVar6 == 0x800)) {
LAB_109dc10bc:
      uVar6 = plVar3[1] | 4;
      plVar3[1] = uVar6;
      if (*(char *)plVar3[3] == '\x01') goto LAB_109dc10d4;
      apuStack_140[0] = &UNK_10f5fb676;
    }
    else {
      apuStack_140[0] = &UNK_10f5fb64c;
    }
    uStack_120 = 0x503;
    apuStack_168[0] = &DAT_10f638984;
    uStack_148 = 0x103;
    ppuStack_130 = param_2;
    lStack_128 = param_3;
    FUN_109d35b30(&ppuStack_118,apuStack_140,apuStack_168);
  }
  else {
    uStack_120 = 0x503;
    apuStack_140[0] = &UNK_10f5fb639;
    ppuStack_118 = apuStack_140;
    puStack_108 = &DAT_10f638984;
    uStack_f8 = 0x302;
    ppuStack_130 = param_2;
    lStack_128 = param_3;
  }
  plVar4 = plVar5;
  FUN_109dd98f8(plVar5,uVar9,&ppuStack_118,0,0);
  if (((ulong)plVar4 & 1) != 0) {
    return (long *)0x1;
  }
LAB_109dc115c:
  plVar4 = plVar5;
  (**(code **)(*plVar5 + 0x68))(plVar5,param_2,param_3);
  if (((ulong)plVar4 & 1) == 0) {
    if ((uint)param_4 < 2) {
      (**(code **)(*(long *)plVar5[0x1c] + 0x108))((long *)plVar5[0x1c],plVar3,pcStack_170);
      (**(code **)(*(long *)plVar5[0x1c] + 0x120))((long *)plVar5[0x1c],plVar3,0x12);
    }
    else {
      if ((uint)param_4 == 3) {
        if (*pcStack_170 != '\x02') {
          ppuStack_118 = (undefined **)&UNK_10f5fbf88;
          uStack_f8 = 0x103;
          FUN_109dd98f8(plVar5,uVar8,&ppuStack_118,0,0);
          return plVar5;
        }
        plVar5 = (long *)plVar5[0x1c];
        pcVar7 = *(code **)(*plVar5 + 0x110);
      }
      else {
        plVar5 = (long *)plVar5[0x1c];
        pcVar7 = *(code **)(*plVar5 + 0x108);
      }
      (*pcVar7)(plVar5,plVar3,pcStack_170);
    }
  }
  return (long *)0x0;
}



/* Entry: 109dc0e68; end: 109dc122b;  */

void FUN_109dc0e68(long *param_1,undefined **param_2,long param_3,uint param_4)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char *pcStack_d0;
  undefined *apuStack_c8 [4];
  undefined2 uStack_a8;
  undefined *apuStack_a0 [2];
  undefined **ppuStack_90;
  long lStack_88;
  undefined2 uStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  undefined *puStack_68;
  undefined2 uStack_58;
  
  plVar2 = param_1;
  (**(code **)(*param_1 + 0x28))();
  uVar6 = *(undefined8 *)(plVar2[1] + 8);
  plVar2 = param_1;
  (**(code **)(*param_1 + 0x28))();
  uVar7 = *(undefined8 *)(plVar2[1] + 8);
  ppuStack_78 = (undefined **)0x0;
  plVar2 = param_1;
  (**(code **)(*param_1 + 0xe8))(param_1,&pcStack_d0,&ppuStack_78);
  if ((int)plVar2 != 0) {
    ppuStack_78 = (undefined **)&UNK_10f5fb626;
    uStack_58 = 0x103;
    plVar2 = param_1;
    (**(code **)(*param_1 + 0x28))();
    FUN_109dd98f8(param_1,plVar2[0xc],&ppuStack_78,0,0);
    return;
  }
  plVar2 = param_1;
  FUN_109dd9860();
  if (((ulong)plVar2 & 1) != 0) {
    return;
  }
  plVar2 = param_1;
  (**(code **)(*param_1 + 0x30))();
  uStack_58 = 0x105;
  ppuStack_78 = param_2;
  lStack_70 = param_3;
  FUN_109da83b8();
  if (plVar2 == (long *)0x0) {
    if ((param_3 == 1) && (*(char *)param_2 == '.')) {
      (**(code **)(*param_1 + 0x38))();
      (**(code **)(*param_1 + 0x280))();
      return;
    }
    plVar2 = param_1;
    (**(code **)(*param_1 + 0x30))();
    uStack_58 = 0x105;
    ppuStack_78 = param_2;
    lStack_70 = param_3;
    FUN_109da7538();
    uVar4 = 2;
    if ((param_4 & 1) != 0) {
      uVar4 = 0;
    }
    plVar2[1] = plVar2[1] & 0xfffffffffffffffdU | uVar4;
    goto LAB_109dc115c;
  }
  plVar3 = plVar2;
  func_0x000109db84b0();
  if ((int)plVar3 == 0) {
    plVar3 = plVar2;
    func_0x000109da4494(plVar2,0);
    uVar4 = plVar2[1];
    if ((((plVar3 == (long *)0x0) && (((uint)uVar4 >> 2 & 1) == 0)) && ((uVar4 & 0x1c00) != 0x800))
       || ((((uVar4 & 0x1c00) == 0x800 && ((param_4 & 1) == 0)) && (((uint)uVar4 >> 2 & 1) == 0))))
    {
LAB_109dc10d4:
      uVar1 = 2;
      if ((param_4 & 1) != 0) {
        uVar1 = 0;
      }
      plVar2[1] = uVar4 & 0xfffffffffffffffd | uVar1;
      goto LAB_109dc115c;
    }
    plVar3 = plVar2;
    func_0x000109da4494(plVar2,1);
    uVar4 = plVar2[1] & 0x1c00;
    if (plVar3 == (long *)0x0) {
      if (uVar4 == 0x800) goto LAB_109dc10bc;
      apuStack_a0[0] = &UNK_10f5fb65e;
    }
    else if (((param_4 & 1) == 0) && (uVar4 == 0x800)) {
LAB_109dc10bc:
      uVar4 = plVar2[1] | 4;
      plVar2[1] = uVar4;
      if (*(char *)plVar2[3] == '\x01') goto LAB_109dc10d4;
      apuStack_a0[0] = &UNK_10f5fb676;
    }
    else {
      apuStack_a0[0] = &UNK_10f5fb64c;
    }
    uStack_80 = 0x503;
    apuStack_c8[0] = &DAT_10f638984;
    uStack_a8 = 0x103;
    ppuStack_90 = param_2;
    lStack_88 = param_3;
    FUN_109d35b30(&ppuStack_78,apuStack_a0,apuStack_c8);
  }
  else {
    uStack_80 = 0x503;
    apuStack_a0[0] = &UNK_10f5fb639;
    ppuStack_78 = apuStack_a0;
    puStack_68 = &DAT_10f638984;
    uStack_58 = 0x302;
    ppuStack_90 = param_2;
    lStack_88 = param_3;
  }
  plVar3 = param_1;
  FUN_109dd98f8(param_1,uVar7,&ppuStack_78,0,0);
  if (((ulong)plVar3 & 1) != 0) {
    return;
  }
LAB_109dc115c:
  plVar3 = param_1;
  (**(code **)(*param_1 + 0x68))(param_1,param_2,param_3);
  if (((ulong)plVar3 & 1) == 0) {
    if (param_4 < 2) {
      (**(code **)(*(long *)param_1[0x1c] + 0x108))((long *)param_1[0x1c],plVar2,pcStack_d0);
      (**(code **)(*(long *)param_1[0x1c] + 0x120))((long *)param_1[0x1c],plVar2,0x12);
    }
    else {
      if (param_4 == 3) {
        if (*pcStack_d0 != '\x02') {
          ppuStack_78 = (undefined **)&UNK_10f5fbf88;
          uStack_58 = 0x103;
          FUN_109dd98f8(param_1,uVar6,&ppuStack_78,0,0);
          return;
        }
        plVar3 = (long *)param_1[0x1c];
        pcVar5 = *(code **)(*plVar3 + 0x110);
      }
      else {
        plVar3 = (long *)param_1[0x1c];
        pcVar5 = *(code **)(*plVar3 + 0x108);
      }
      (*pcVar5)(plVar3,plVar2,pcStack_d0);
    }
  }
  return;
}



/* Entry: 109dc122c; end: 109dc16fb;  */

undefined1  [16] FUN_109dc122c(long *param_1,undefined ***param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  int iVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  undefined ***pppuVar10;
  undefined ***pppuVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  long lVar15;
  long *plVar16;
  undefined **unaff_x25;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined **ppuStack_228;
  undefined *apuStack_220 [2];
  char cStack_209;
  undefined2 uStack_200;
  undefined **appuStack_1f8 [2];
  long lStack_1e8;
  long lStack_1e0;
  undefined8 *puStack_1d8;
  int iStack_1c0;
  undefined8 *puStack_1b8;
  undefined **ppuStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined8 uStack_188;
  undefined *apuStack_180 [6];
  undefined8 uStack_150;
  char cStack_139;
  undefined **appuStack_128 [21];
  undefined **appuStack_80 [2];
  byte bStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((ulong)uRam0000000113833e38 == param_1[0x2c] - param_1[0x2b] >> 3) {
    func_0x00010926db08(&ppuStack_198);
    func_0x0001092b4db8(&ppuStack_198,&UNK_10f5fbf9c,0x22);
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
    func_0x0001092b4db8();
    func_0x0001092b4db8();
    func_0x00010926dc5c(apuStack_220,&ppuStack_190,appuStack_80);
    puStack_1d8 = (undefined8 *)CONCAT62(puStack_1d8._2_6_,0x104);
    plVar16 = param_1;
    appuStack_1f8[0] = apuStack_220;
    (**(code **)(*param_1 + 0x28))();
    FUN_109dd98f8(param_1,plVar16[0xc],appuStack_1f8,0,0);
    if (cStack_209 < '\0') {
      __ZdlPv(apuStack_220[0]);
    }
    appuStack_128[0] = &PTR_DAT_11088d708;
    ppuStack_198 = &PTR_DAT_11088d6e0;
    ppuStack_190 = &PTR_DAT_11088d7b0;
    if (cStack_139 < '\0') {
      __ZdlPv(uStack_150);
    }
    ppuStack_190 = (undefined **)
                   (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
    __ZNSt3__16localeD1Ev(&uStack_188);
    ppuVar13 = &PTR_PTR_11088d720;
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_198,&PTR_PTR_11088d720);
    pppuVar10 = appuStack_128;
    __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev();
    plVar16 = (long *)0x1;
  }
  else {
    ppuStack_1b0 = (undefined **)0x0;
    lStack_1a8 = 0;
    uStack_1a0 = 0;
    plVar16 = param_1;
    ppuVar13 = (undefined **)param_2;
    FUN_109dc9afc(param_1,param_2,&ppuStack_1b0);
    if (((ulong)plVar16 & 1) == 0) {
      unaff_x25 = apuStack_180;
      uStack_188 = 0x100;
      ppuStack_190 = (undefined **)0x0;
      ppuVar1 = param_2[2];
      ppuVar3 = param_2[3];
      ppuStack_198 = unaff_x25;
      FUN_109d37ad8(appuStack_1f8,&ppuStack_198);
      lVar9 = lStack_1a8;
      ppuVar5 = ppuStack_1b0;
      ppuVar2 = param_2[4];
      ppuVar4 = param_2[5];
      (**(code **)(*param_1 + 0x28))();
      ppuVar13 = (undefined **)appuStack_1f8;
      plVar16 = param_1;
      FUN_109dca368(param_1,ppuVar13,ppuVar1,ppuVar3,ppuVar2,
                    ((long)ppuVar4 - (long)ppuVar2 >> 4) * -0x5555555555555555,ppuVar5,
                    (lVar9 - (long)ppuVar5 >> 3) * -0x5555555555555555,1);
      if (((ulong)plVar16 & 1) == 0) {
        if ((ulong)(lStack_1e0 - (long)puStack_1d8) < 10) {
          FUN_109e0560c(appuStack_1f8,&UNK_10f5fc007,10);
        }
        else {
          *(undefined2 *)(puStack_1d8 + 1) = 0xa6f;
          *puStack_1d8 = 0x7263616d646e652e;
          puStack_1d8 = (undefined8 *)((long)puStack_1d8 + 10);
        }
        apuStack_220[0] = &UNK_10f5fc012;
        uStack_200 = 0x103;
        FUN_109df92d8(appuStack_80,*puStack_1b8,puStack_1b8[1],apuStack_220);
        ppuStack_228 = (undefined **)0x0;
        if ((bStack_70 & 1) == 0) {
          ppuStack_228 = appuStack_80[0];
        }
        puVar7 = (undefined8 *)0x20;
        __Znwm();
        *puVar7 = param_3;
        *(int *)(puVar7 + 1) = (int)param_1[0x23];
        plVar8 = param_1;
        (**(code **)(*param_1 + 0x28))();
        lVar9 = param_1[0x25];
        lVar15 = param_1[0x26];
        puVar7[2] = *(undefined8 *)(plVar8[1] + 8);
        puVar7[3] = lVar15 - lVar9 >> 3;
        FUN_109dca8b0(param_1 + 0x2b,puVar7);
        *(int *)((long)param_1 + 0x1a4) = *(int *)((long)param_1 + 0x1a4) + 1;
        lVar9 = param_1[0x1e];
        ppuVar13 = (undefined **)&ppuStack_228;
        FUN_109d3a3ec(lVar9,ppuVar13,0);
        ppuVar1 = ppuStack_228;
        iVar6 = (int)lVar9;
        *(int *)(param_1 + 0x23) = iVar6;
        ppuStack_228 = (undefined **)0x0;
        if (ppuVar1 != (undefined **)0x0) {
          (**(code **)(*ppuVar1 + 8))(ppuVar1);
          iVar6 = (int)param_1[0x23];
        }
        lVar15 = *(long *)(*(long *)param_1[0x1e] + (ulong)(iVar6 - 1) * 0x18);
        lVar9 = *(long *)(lVar15 + 8);
        lVar15 = *(long *)(lVar15 + 0x10);
        param_1[0x18] = lVar9;
        param_1[0x19] = lVar15 - lVar9;
        param_1[0x17] = lVar9;
        param_1[0x11] = 0;
        *(undefined1 *)((long)param_1 + 0xd3) = 1;
        (**(code **)(*param_1 + 0xb8))(param_1);
      }
      appuStack_1f8[0] = &PTR_DAT_110b5c4a0;
      if ((iStack_1c0 == 1) && (lStack_1e8 != 0)) {
        __ZdaPv();
      }
      if (ppuStack_198 != unaff_x25) {
        _free();
      }
    }
    else {
      plVar16 = (long *)0x1;
    }
    pppuVar10 = &ppuStack_1b0;
    FUN_109dcb748();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    auVar17._8_8_ = ppuVar13;
    auVar17._0_8_ = plVar16;
    return auVar17;
  }
  ___stack_chk_fail();
  ppuVar13 = ppuStack_228;
  ppuStack_228 = (undefined **)0x0;
  if (ppuVar13 != (undefined **)0x0) {
    (**(code **)(*ppuVar13 + 8))();
  }
  appuStack_1f8[0] = &PTR_DAT_110b5c4a0;
  if ((iStack_1c0 == 1) && (lStack_1e8 != 0)) {
    __ZdaPv();
  }
  if (ppuStack_198 != unaff_x25) {
    _free();
  }
  FUN_109dcb748(&ppuStack_1b0);
  __Unwind_Resume();
  pppuVar11 = pppuVar10;
  FUN_109e03610();
  iVar6 = (int)pppuVar11;
  if ((iVar6 == -1) || ((long)iVar6 == (ulong)*(uint *)(pppuVar10 + 1))) {
    uVar14 = 0;
    uVar12 = 0;
  }
  else {
    uVar12 = *(undefined8 *)((*pppuVar10)[iVar6] + 8);
    uVar14 = *(undefined8 *)((*pppuVar10)[iVar6] + 0x10);
  }
  auVar18._8_8_ = uVar14;
  auVar18._0_8_ = uVar12;
  return auVar18;
}



/* Entry: 109dc16fc; end: 109dc174b;  */

undefined1  [16] FUN_109dc16fc(long *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  plVar2 = param_1;
  FUN_109e03610();
  iVar1 = (int)plVar2;
  if ((iVar1 == -1) || ((long)iVar1 == (ulong)*(uint *)(param_1 + 1))) {
    uVar4 = 0;
    uVar3 = 0;
  }
  else {
    lVar5 = *(long *)(*param_1 + (long)iVar1 * 8);
    uVar3 = *(undefined8 *)(lVar5 + 8);
    uVar4 = *(undefined8 *)(lVar5 + 0x10);
  }
  auVar6._8_8_ = uVar4;
  auVar6._0_8_ = uVar3;
  return auVar6;
}



/* Entry: 109dc174c; end: 109dc1817;  */

void FUN_109dc174c(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  undefined *apuStack_90 [4];
  undefined2 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *apuStack_58 [4];
  undefined2 uStack_38;
  
  uStack_68 = 0;
  uStack_60 = 0;
  plVar1 = param_1;
  (**(code **)(*param_1 + 0xc0))(param_1,&uStack_68);
  apuStack_90[0] = &UNK_10f5fbf88;
  uStack_70 = 0x103;
  plVar2 = param_1;
  (**(code **)(*param_1 + 0x28))();
  if ((int)plVar1 == 0) {
    apuStack_58[0] = &UNK_10f5aef41;
    uStack_38 = 0x103;
    plVar1 = param_1;
    func_0x000109dd9a7c(param_1,0x19,apuStack_58);
    if (((ulong)plVar1 & 1) == 0) {
      FUN_109dc0e68(param_1,uStack_68,uStack_60,param_2);
    }
  }
  else {
    FUN_109dd98f8(param_1,*(undefined8 *)(plVar2[1] + 8),apuStack_90,0,0);
  }
  return;
}



/* Entry: 109dc1818; end: 109dc1c2b;  */

long * FUN_109dc1818(long *param_1,int param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined *apuStack_80 [4];
  undefined2 uStack_60;
  long lStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  plVar5 = param_1;
  (**(code **)(*param_1 + 0x28))();
  lVar6 = plVar5[0xc];
  lStack_58 = 0;
  uStack_50 = 0;
  plVar5 = param_1;
  (**(code **)(*param_1 + 0x108))();
  if (((ulong)plVar5 & 1) == 0) {
    if (((param_2 != 0) && (param_3 == 1)) &&
       (plVar5 = param_1, (**(code **)(*param_1 + 0x28))(), *(int *)plVar5[1] == 9)) {
      apuStack_80[0] = &UNK_10f5fc216;
      uStack_60 = 0x103;
      (**(code **)(*param_1 + 0xa8))(param_1,lVar6,apuStack_80,0,0);
      FUN_109dd9860(param_1);
      return param_1;
    }
    plVar5 = param_1;
    (**(code **)(*param_1 + 0x100))(param_1,&uStack_48);
    if (((ulong)plVar5 & 1) == 0) {
      plVar5 = param_1;
      func_0x000109dd9bd8(param_1,0x19);
      if ((int)plVar5 == 0) {
        lVar7 = 0;
        bVar1 = false;
      }
      else {
        plVar5 = param_1;
        (**(code **)(*param_1 + 0x28))();
        bVar1 = *(int *)plVar5[1] != 0x19;
        if ((bVar1) &&
           (plVar5 = param_1, (**(code **)(*param_1 + 0x100))(param_1,&uStack_50),
           ((ulong)plVar5 & 1) != 0)) {
          return (long *)0x1;
        }
        plVar5 = param_1;
        func_0x000109dd9bd8(param_1,0x19);
        if ((int)plVar5 == 0) {
          lVar7 = 0;
        }
        else {
          plVar5 = param_1;
          (**(code **)(*param_1 + 0x28))();
          lVar7 = *(long *)(plVar5[1] + 8);
          plVar5 = param_1;
          (**(code **)(*param_1 + 0x100))(param_1,&lStack_58);
          if (((ulong)plVar5 & 1) != 0) {
            return (long *)0x1;
          }
        }
      }
      plVar5 = param_1;
      FUN_109dd9860();
      if (((ulong)plVar5 & 1) == 0) {
        plVar5 = param_1;
        if (param_2 == 0) {
          if (uStack_48 == 0) {
            plVar5 = (long *)0x0;
            uStack_48 = 1;
          }
          else {
            if ((uStack_48 & uStack_48 - 1) == 0) {
              plVar5 = (long *)0x0;
            }
            else {
              apuStack_80[0] = &UNK_10f5fc25e;
              uStack_60 = 0x103;
              FUN_109dd98f8(param_1,lVar6,apuStack_80,0,0);
              lVar4 = LZCOUNT(uStack_48);
              bVar2 = uStack_48 != 0;
              uStack_48 = 0;
              if (bVar2) {
                uStack_48 = 1L << ((ulong)~(uint)lVar4 & 0x3f);
              }
            }
            if (uStack_48 >> 0x20 != 0) {
              apuStack_80[0] = &UNK_10f5fc27d;
              uStack_60 = 0x103;
              plVar3 = param_1;
              FUN_109dd98f8(param_1,lVar6,apuStack_80,0,0);
              plVar5 = (long *)(ulong)((uint)plVar5 | (uint)plVar3);
              uStack_48 = 0x80000000;
            }
          }
        }
        else {
          if ((long)uStack_48 < 0x20) {
            plVar5 = (long *)0x0;
          }
          else {
            apuStack_80[0] = &UNK_10f5fc246;
            uStack_60 = 0x103;
            FUN_109dd98f8(param_1,lVar6,apuStack_80,0,0);
            uStack_48 = 0x1f;
          }
          uStack_48 = 1L << (uStack_48 & 0x3f);
        }
        if (lVar7 != 0) {
          if (lStack_58 < 1) {
            apuStack_80[0] = &UNK_10f5fc2a2;
            uStack_60 = 0x103;
            plVar3 = param_1;
            FUN_109dd98f8(param_1,lVar7,apuStack_80,0,0);
            plVar5 = (long *)(ulong)((uint)plVar5 | (uint)plVar3);
            lStack_58 = 0;
          }
          if ((long)uStack_48 <= lStack_58) {
            apuStack_80[0] = &UNK_10f5fc303;
            uStack_60 = 0x103;
            (**(code **)(*param_1 + 0xa8))(param_1,lVar7,apuStack_80,0,0);
            lStack_58 = 0;
          }
        }
        plVar3 = param_1;
        (**(code **)(*param_1 + 0x38))();
        plVar3 = *(long **)(plVar3[0xe] + (ulong)*(uint *)(plVar3 + 0xf) * 0x20 + -0x20);
        (**(code **)(*plVar3 + 8))();
        if (bVar1) {
          if (((uint)(param_3 == 1 && uStack_50 == *(uint *)(param_1[0x16] + 0x154)) & (uint)plVar3)
              != 0) {
LAB_109dc1bec:
            (**(code **)(*param_1 + 0x38))();
            (**(code **)(*param_1 + 0x278))();
            return plVar5;
          }
        }
        else if (((uint)(param_3 == 1) & (uint)plVar3) == 1) goto LAB_109dc1bec;
        (**(code **)(*param_1 + 0x38))();
        (**(code **)(*param_1 + 0x270))();
        return plVar5;
      }
    }
  }
  return (long *)0x1;
}



/* Entry: 109dc1c2c; end: 109dc1cef;  */

undefined8 FUN_109dc1c2c(long *param_1)

{
  long *plVar1;
  undefined1 auStack_30 [8];
  undefined8 uStack_28;
  
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x108))();
  if (((ulong)plVar1 & 1) == 0) {
    uStack_28 = 0;
    plVar1 = param_1;
    (**(code **)(*param_1 + 0xe8))(param_1,auStack_30,&uStack_28);
    if (((ulong)plVar1 & 1) == 0) {
      uStack_28 = 0;
      plVar1 = param_1;
      func_0x000109dd9bd8(param_1,0x19);
      if ((((int)plVar1 == 0) ||
          (plVar1 = param_1, (**(code **)(*param_1 + 0x100))(param_1,&uStack_28),
          ((ulong)plVar1 & 1) == 0)) &&
         (plVar1 = param_1, FUN_109dd9860(), ((ulong)plVar1 & 1) == 0)) {
        (**(code **)(*param_1 + 0x38))();
        (**(code **)(*param_1 + 0x280))();
        return 0;
      }
    }
  }
  return 1;
}



/* Entry: 109dc1cf0; end: 109dc1ef7;  */

undefined8 FUN_109dc1cf0(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *apuStack_70 [4];
  undefined2 uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  undefined1 auStack_38 [8];
  
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x108))();
  if (((ulong)plVar1 & 1) == 0) {
    apuStack_70[0] = (undefined *)0x0;
    plVar1 = param_1;
    (**(code **)(*param_1 + 0xe8))(param_1,auStack_38,apuStack_70);
    if (((ulong)plVar1 & 1) == 0) {
      uStack_48 = 0;
      uStack_40 = 1;
      plVar1 = param_1;
      func_0x000109dd9bd8(param_1,0x19);
      if ((int)plVar1 == 0) {
        uVar3 = 0;
        uVar2 = 0;
      }
      else {
        plVar1 = param_1;
        (**(code **)(*param_1 + 0x28))();
        uVar2 = *(undefined8 *)(plVar1[1] + 8);
        plVar1 = param_1;
        (**(code **)(*param_1 + 0x100))(param_1,&uStack_40);
        if (((ulong)plVar1 & 1) != 0) {
          return 1;
        }
        plVar1 = param_1;
        func_0x000109dd9bd8(param_1,0x19);
        if ((int)plVar1 == 0) {
          uVar3 = 0;
        }
        else {
          plVar1 = param_1;
          (**(code **)(*param_1 + 0x28))();
          uVar3 = *(undefined8 *)(plVar1[1] + 8);
          plVar1 = param_1;
          (**(code **)(*param_1 + 0x100))(param_1,&uStack_48);
          if (((ulong)plVar1 & 1) != 0) {
            return 1;
          }
        }
      }
      plVar1 = param_1;
      FUN_109dd9860();
      if (((ulong)plVar1 & 1) == 0) {
        if ((long)uStack_40 < 0) {
          apuStack_70[0] = &UNK_10f5fc340;
          uStack_50 = 0x103;
          (**(code **)(*param_1 + 0xa8))(param_1,uVar2,apuStack_70,0,0);
        }
        else {
          if (8 < uStack_40) {
            apuStack_70[0] = &UNK_10f5fc373;
            uStack_50 = 0x103;
            (**(code **)(*param_1 + 0xa8))(param_1,uVar2,apuStack_70,0,0);
            uStack_40 = 8;
          }
          if ((4 < uStack_40) && (uStack_48 >> 0x20 != 0)) {
            apuStack_70[0] = &UNK_10f5fc3b6;
            uStack_50 = 0x103;
            (**(code **)(*param_1 + 0xa8))(param_1,uVar3,apuStack_70,0,0);
          }
          (**(code **)(*param_1 + 0x38))();
          (**(code **)(*param_1 + 0x260))();
        }
        return 0;
      }
    }
  }
  return 1;
}



/* Entry: 109dc1ef8; end: 109dc1fd7;  */

undefined8 FUN_109dc1ef8(long *param_1)

{
  long *plVar1;
  undefined1 auStack_30 [8];
  undefined8 uStack_28;
  
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x108))();
  if (((ulong)plVar1 & 1) == 0) {
    uStack_28 = 0;
    plVar1 = param_1;
    (**(code **)(*param_1 + 0xe8))(param_1,auStack_30,&uStack_28);
    if (((ulong)plVar1 & 1) == 0) {
      uStack_28 = 0;
      plVar1 = param_1;
      (**(code **)(*param_1 + 0x28))();
      if (*(int *)plVar1[1] == 0x19) {
        (**(code **)(*param_1 + 0xb8))(param_1);
        plVar1 = param_1;
        (**(code **)(*param_1 + 0x100))(param_1,&uStack_28);
        if (((ulong)plVar1 & 1) != 0) {
          return 1;
        }
      }
      plVar1 = param_1;
      FUN_109dd9860();
      if (((ulong)plVar1 & 1) == 0) {
        (**(code **)(*param_1 + 0x38))();
        (**(code **)(*param_1 + 600))();
        return 0;
      }
    }
  }
  return 1;
}



/* Entry: 109dc1fd8; end: 109dc22cf;  */

void FUN_109dc1fd8(ulong *param_1,uint param_2)

{
  int iVar1;
  ulong *puVar2;
  ulong *puVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined2 uStack_48;
  
  puVar2 = param_1;
  (**(code **)(*param_1 + 0x108))();
  if (((ulong)puVar2 & 1) != 0) {
    return;
  }
  puVar2 = param_1;
  (**(code **)(*param_1 + 0x28))();
  uVar5 = puVar2[0xc];
  puStack_78 = (undefined *)0x0;
  uStack_70 = 0;
  puVar2 = param_1;
  (**(code **)(*param_1 + 0xc0))(param_1,&puStack_78);
  if ((int)puVar2 != 0) {
    puStack_68 = &UNK_10f5fc428;
    uStack_48 = 0x103;
    puVar2 = param_1;
    (**(code **)(*param_1 + 0x28))();
    FUN_109dd98f8(param_1,puVar2[0xc],&puStack_68,0,0);
    return;
  }
  puVar2 = param_1;
  (**(code **)(*param_1 + 0x30))();
  uStack_48 = 0x105;
  puStack_68 = puStack_78;
  uStack_60 = uStack_70;
  FUN_109da7538();
  puStack_68 = &UNK_10f5aef41;
  uStack_48 = 0x103;
  puVar3 = param_1;
  func_0x000109dd9a7c(param_1,0x19,&puStack_68);
  if (((ulong)puVar3 & 1) != 0) {
    return;
  }
  puVar3 = param_1;
  (**(code **)(*param_1 + 0x28))();
  uVar6 = puVar3[0xc];
  puVar3 = param_1;
  (**(code **)(*param_1 + 0x100))(param_1,&lStack_80);
  if (((ulong)puVar3 & 1) != 0) {
    return;
  }
  uStack_88 = 0;
  puVar3 = param_1;
  (**(code **)(*param_1 + 0x28))();
  if (*(int *)puVar3[1] != 0x19) goto LAB_109dc21c8;
  (**(code **)(*param_1 + 0xb8))(param_1);
  puVar3 = param_1;
  (**(code **)(*param_1 + 0x28))();
  uVar7 = puVar3[0xc];
  puVar3 = param_1;
  (**(code **)(*param_1 + 0x100))(param_1,&uStack_88);
  if (((ulong)puVar3 & 1) != 0) {
    return;
  }
  iVar1 = *(int *)(param_1[0x16] + 0x164);
  if ((param_2 != 0) && (iVar1 == 0)) {
    puStack_68 = &UNK_10f5fc449;
    goto LAB_109dc2278;
  }
  if ((param_2 & 1) == 0) {
    if ((*(byte *)(param_1[0x16] + 0x162) & 1) != 0) goto LAB_109dc21a4;
  }
  else if (iVar1 == 1) {
LAB_109dc21a4:
    if ((uStack_88 ^ uStack_88 - 1) <= uStack_88 - 1) {
      puStack_68 = &UNK_10f5fc25e;
      goto LAB_109dc2278;
    }
    uStack_88 = 0x3f - LZCOUNT(uStack_88);
  }
LAB_109dc21c8:
  puVar3 = param_1;
  FUN_109dd9860();
  if (((ulong)puVar3 & 1) != 0) {
    return;
  }
  if (lStack_80 < 0) {
    puStack_68 = &UNK_10f5fc470;
    uVar7 = uVar6;
  }
  else {
    uVar6 = puVar2[1];
    if (((uint)uVar6 >> 1 & 1) != 0) {
      if ((uVar6 & 0x1c00) == 0x800) {
        puVar2[3] = 0;
        uVar6 = uVar6 & 0xffffffffffffe3ff;
      }
      *puVar2 = *puVar2 & 7;
      puVar2[1] = uVar6 & 0xfffffffffffffffd;
    }
    func_0x000109da4494(puVar2,1);
    if (puVar2 == (ulong *)0x0) {
      (**(code **)(*param_1 + 0x38))();
      if (param_2 == 0) {
        pcVar4 = *(code **)(*param_1 + 0x1c0);
      }
      else {
        pcVar4 = *(code **)(*param_1 + 0x1c8);
      }
      (*pcVar4)();
      return;
    }
    puStack_68 = &UNK_10f5fa772;
    uVar7 = uVar5;
  }
LAB_109dc2278:
  uStack_48 = 0x103;
  FUN_109dd98f8(param_1,uVar7,&puStack_68,0,0);
  return;
}



/* Entry: 109dc22d0; end: 109dc239b;  */

void FUN_109dc22d0(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined *apuStack_80 [2];
  long *plStack_70;
  long lStack_68;
  undefined2 uStack_60;
  undefined *apuStack_58 [2];
  undefined *puStack_48;
  undefined2 uStack_38;
  
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x28))();
  lVar3 = plVar1[0xc];
  plVar1 = param_1;
  (**(code **)(*param_1 + 200))();
  plVar2 = param_1;
  FUN_109dd9860();
  if (((ulong)plVar2 & 1) == 0) {
    if (param_2 == 0) {
      apuStack_58[0] = &UNK_10f5fc48a;
      uStack_38 = 0x103;
    }
    else {
      uStack_60 = 0x503;
      apuStack_80[0] = &UNK_10f5fc4ae;
      puStack_48 = &UNK_10f5fc4b7;
      uStack_38 = 0x302;
      plStack_70 = plVar1;
      lStack_68 = param_2;
      apuStack_58[0] = (undefined *)apuStack_80;
    }
    FUN_109dd98f8(param_1,lVar3,apuStack_58,0,0);
  }
  return;
}



/* Entry: 109dc239c; end: 109dc264f;  */

/* WARNING: Removing unreachable block (ram,0x000109dc255c) */
/* WARNING: Removing unreachable block (ram,0x000109dc24e0) */
/* WARNING: Removing unreachable block (ram,0x000109dc25a0) */

bool FUN_109dc239c(long *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 auStack_108 [2];
  char cStack_f1;
  undefined8 *apuStack_f0 [4];
  undefined2 uStack_d0;
  undefined *apuStack_c8 [4];
  undefined2 uStack_a8;
  undefined *apuStack_a0 [4];
  undefined2 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  plVar2 = param_1;
  (**(code **)(*param_1 + 0x28))();
  uVar6 = *(undefined8 *)(plVar2[1] + 8);
  plVar2 = param_1;
  (**(code **)(*param_1 + 0x28))();
  iVar1 = *(int *)plVar2[1];
  apuStack_a0[0] = &UNK_10f5fc4d6;
  uStack_80 = 0x103;
  plVar2 = param_1;
  (**(code **)(*param_1 + 0x28))();
  if (iVar1 == 3) {
    plVar2 = param_1;
    (**(code **)(*param_1 + 0xd0))(param_1,&uStack_78);
    if (((ulong)plVar2 & 1) == 0) {
      plVar2 = param_1;
      (**(code **)(*param_1 + 0x28))();
      iVar1 = *(int *)plVar2[1];
      apuStack_c8[0] = &UNK_10f5fc4fe;
      uStack_a8 = 0x103;
      plVar2 = param_1;
      (**(code **)(*param_1 + 0x28))();
      if (iVar1 == 9) {
        uStack_60 = 0;
        uStack_58 = 0;
        uStack_50 = 0;
        lVar3 = param_1[0x1e];
        FUN_109e00108(lVar3,&uStack_78,param_1[0x11],&uStack_60);
        iVar1 = (int)lVar3;
        if (iVar1 != 0) {
          *(int *)(param_1 + 0x23) = iVar1;
          lVar5 = *(long *)(*(long *)param_1[0x1e] + (ulong)(iVar1 - 1) * 0x18);
          lVar3 = *(long *)(lVar5 + 8);
          lVar5 = *(long *)(lVar5 + 0x10);
          param_1[0x18] = lVar3;
          param_1[0x19] = lVar5 - lVar3;
          param_1[0x17] = lVar3;
          param_1[0x11] = 0;
          *(undefined1 *)((long)param_1 + 0xd3) = 1;
        }
        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                  (auStack_108,&UNK_10f5fc527,&uStack_78);
        puVar4 = auStack_108;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (puVar4,&DAT_10f638984,1);
        uStack_58 = puVar4[1];
        uStack_60 = *puVar4;
        uStack_50 = puVar4[2];
        puVar4[1] = 0;
        puVar4[2] = 0;
        *puVar4 = 0;
        uStack_d0 = 0x104;
        apuStack_f0[0] = &uStack_60;
        if (iVar1 == 0) {
          FUN_109dd98f8(param_1,uVar6,apuStack_f0,0,0);
        }
        if (-1 < cStack_f1) {
          return iVar1 == 0;
        }
        __ZdlPv(auStack_108[0]);
        return iVar1 == 0;
      }
      FUN_109dd98f8(param_1,*(undefined8 *)(plVar2[1] + 8),apuStack_c8,0,0);
    }
  }
  else {
    FUN_109dd98f8(param_1,*(undefined8 *)(plVar2[1] + 8),apuStack_a0,0,0);
  }
  return true;
}



/* Entry: 109dc2650; end: 109dc2aab;  */

/* WARNING: Removing unreachable block (ram,0x000109dc2984) */
/* WARNING: Removing unreachable block (ram,0x000109dc2a04) */

long * FUN_109dc2650(long *param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong *puVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong auStack_d8 [2];
  char cStack_c1;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  ulong *apuStack_98 [4];
  undefined2 uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  
  uStack_b0 = 0;
  uStack_a8 = 0;
  lStack_a0 = 0;
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x28))();
  uVar5 = *(undefined8 *)(plVar1[1] + 8);
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x28))();
  iVar6 = *(int *)plVar1[1];
  apuStack_98[0] = (ulong *)&UNK_10f5fc545;
  uStack_78 = 0x103;
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x28))();
  if (iVar6 == 3) {
    plVar1 = param_1;
    (**(code **)(*param_1 + 0xd0))(param_1,&uStack_b0);
    if (((ulong)plVar1 & 1) == 0) {
      uStack_c0 = 0;
      uStack_b8 = 0;
      plVar1 = param_1;
      func_0x000109dd9bd8(param_1,0x19);
      if ((int)plVar1 == 0) {
        uVar8 = 0;
LAB_109dc27f8:
        uVar7 = 0;
      }
      else {
        plVar1 = param_1;
        (**(code **)(*param_1 + 0x28))();
        if (*(int *)plVar1[1] == 0x19) {
          uVar8 = 0;
        }
        else {
          plVar1 = param_1;
          (**(code **)(*param_1 + 0x28))();
          uVar8 = *(undefined8 *)(plVar1[1] + 8);
          plVar1 = param_1;
          (**(code **)(*param_1 + 0x100))(param_1,&uStack_b8);
          if (((ulong)plVar1 & 1) != 0) goto LAB_109dc2740;
        }
        plVar1 = param_1;
        func_0x000109dd9bd8(param_1,0x19);
        if ((int)plVar1 == 0) goto LAB_109dc27f8;
        plVar1 = param_1;
        (**(code **)(*param_1 + 0x28))();
        uVar7 = *(undefined8 *)(plVar1[1] + 8);
        apuStack_98[0] = (ulong *)0x0;
        plVar1 = param_1;
        (**(code **)(*param_1 + 0xe8))(param_1,&uStack_c0,apuStack_98);
        if (((ulong)plVar1 & 1) != 0) goto LAB_109dc2740;
      }
      plVar1 = param_1;
      FUN_109dd9860();
      uVar3 = uStack_c0;
      if (((ulong)plVar1 & 1) == 0) {
        apuStack_98[0] = (ulong *)&UNK_10f5fc56c;
        uStack_78 = 0x103;
        if (-1 < (long)uStack_b8) {
          uStack_70 = 0;
          uStack_68 = 0;
          uStack_60 = 0;
          lVar2 = param_1[0x1e];
          FUN_109e00108(lVar2,&uStack_b0,param_1[0x11],&uStack_70);
          if ((int)lVar2 == 0) {
            iVar6 = 1;
          }
          else if (uVar3 == 0) {
LAB_109dc28c4:
            plVar1 = param_1;
            (**(code **)(*param_1 + 0x38))();
            (**(code **)(*plVar1 + 0x1e0))();
            iVar6 = 0;
          }
          else {
            plVar1 = param_1;
            (**(code **)(*param_1 + 0x38))();
            (**(code **)(*plVar1 + 0x48))();
            func_0x000109daff5c(uVar3,auStack_d8,plVar1,0,0,0);
            if ((uVar3 & 1) == 0) {
              apuStack_98[0] = (ulong *)&UNK_10f5fa623;
              uStack_78 = 0x103;
              plVar1 = param_1;
              FUN_109dd98f8(param_1,uVar7,apuStack_98,0,0);
              iVar6 = (int)plVar1;
            }
            else {
              if (-1 < (long)auStack_d8[0]) goto LAB_109dc28c4;
              apuStack_98[0] = (ulong *)&UNK_10f5fc59a;
              uStack_78 = 0x103;
              plVar1 = param_1;
              (**(code **)(*param_1 + 0xa8))(param_1,uVar7,apuStack_98,0,0);
              iVar6 = (int)plVar1;
            }
          }
          if (iVar6 == 0) {
            param_1 = (long *)0x0;
          }
          else {
            __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                      (auStack_d8,&UNK_10f5fc57d,&uStack_b0);
            puVar4 = auStack_d8;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (puVar4,&DAT_10f638984,1);
            uStack_68 = puVar4[1];
            uStack_70 = *puVar4;
            uStack_60 = puVar4[2];
            puVar4[1] = 0;
            puVar4[2] = 0;
            *puVar4 = 0;
            uStack_78 = 0x104;
            apuStack_98[0] = &uStack_70;
            FUN_109dd98f8(param_1,uVar5,apuStack_98,0,0);
            if (cStack_c1 < '\0') {
              __ZdlPv(auStack_d8[0]);
            }
          }
          goto LAB_109dc2744;
        }
        FUN_109dd98f8(param_1,uVar8,apuStack_98,0,0);
      }
    }
  }
  else {
    FUN_109dd98f8(param_1,*(undefined8 *)(plVar1[1] + 8),apuStack_98,0,0);
  }
LAB_109dc2740:
  param_1 = (long *)0x1;
LAB_109dc2744:
  if (lStack_a0 < 0) {
    __ZdlPv(uStack_b0);
  }
  return param_1;
}



/* Entry: 109dc2aac; end: 109dc2d6f;  */

undefined *****
FUN_109dc2aac(undefined *****param_1,undefined ****param_2,undefined ****param_3,
             undefined *****param_4)

{
  ulong uVar1;
  undefined8 **ppuVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined **ppuVar7;
  ulong uVar8;
  undefined **ppuVar9;
  undefined ****ppppuVar10;
  undefined *****pppppuVar11;
  undefined *****pppppuVar12;
  undefined8 **ppuVar13;
  undefined ***pppuVar14;
  undefined ***pppuVar15;
  undefined ****ppppuVar16;
  undefined *****pppppuVar17;
  undefined ****ppppuVar18;
  undefined *****pppppuVar19;
  undefined ****unaff_x24;
  ulong uVar20;
  undefined *****unaff_x25;
  undefined *****unaff_x26;
  undefined8 unaff_x27;
  undefined *****unaff_x28;
  undefined *apuStack_6f8 [4];
  undefined2 uStack_6d8;
  undefined ****ppppuStack_6d0;
  undefined ****ppppuStack_6c8;
  undefined ***pppuStack_6c0;
  undefined ***pppuStack_6b8;
  undefined1 ***pppuStack_6b0;
  code *pcStack_6a8;
  undefined1 uStack_6a0;
  undefined **ppuStack_698;
  undefined **ppuStack_690;
  long *plStack_688;
  long *plStack_680;
  long *plStack_678;
  undefined **appuStack_670 [2];
  long lStack_660;
  undefined2 uStack_650;
  int iStack_638;
  long *plStack_628;
  long lStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined *puStack_600;
  undefined2 uStack_5f8;
  undefined6 uStack_5f6;
  undefined2 uStack_5f0;
  undefined8 uStack_5ee;
  undefined8 **ppuStack_5d8;
  long *plStack_5d0;
  long *plStack_5c8;
  long *plStack_5c0;
  undefined8 **ppuStack_5b8;
  undefined **ppuStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined *puStack_598;
  undefined2 uStack_590;
  long lStack_498;
  undefined ****ppppuStack_480;
  undefined8 uStack_478;
  undefined ****ppppuStack_470;
  undefined ****ppppuStack_468;
  undefined ***pppuStack_460;
  undefined ***pppuStack_458;
  undefined ****ppppuStack_450;
  undefined ****ppppuStack_448;
  undefined ***pppuStack_440;
  undefined ****ppppuStack_438;
  undefined1 **ppuStack_430;
  code *pcStack_428;
  undefined1 uStack_420;
  undefined **ppuStack_418;
  undefined ***apppuStack_410 [2];
  long lStack_400;
  undefined2 uStack_3f0;
  int iStack_3d8;
  undefined ****ppppuStack_3c8;
  undefined ****ppppuStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined ***pppuStack_3a0;
  undefined2 uStack_398;
  undefined6 uStack_396;
  undefined2 uStack_390;
  undefined8 uStack_38e;
  undefined ****ppppuStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined ***pppuStack_360;
  undefined2 uStack_358;
  long lStack_260;
  undefined1 *puStack_200;
  code *pcStack_1f8;
  undefined1 uStack_1f0;
  undefined **ppuStack_1e8;
  undefined ***apppuStack_1d8 [2];
  undefined ***pppuStack_1c8;
  undefined ****ppppuStack_1c0;
  undefined2 uStack_1b8;
  int iStack_1a0;
  undefined ***pppuStack_190;
  undefined ***pppuStack_188;
  undefined ****ppppuStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined ***pppuStack_168;
  undefined2 uStack_160;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar17 = param_1;
  (*(code *)(*param_1)[5])();
  ppppuVar18 = (undefined ****)pppppuVar17[1][1];
  ppppuStack_180 = (undefined ****)0x0;
  ppppuVar16 = &pppuStack_188;
  pppppuVar17 = param_1;
  (*(code *)(*param_1)[0x1d])(param_1,ppppuVar16,&ppppuStack_180);
  if (((ulong)pppppuVar17 & 1) == 0) {
    pppppuVar17 = param_1;
    (*(code *)(*param_1)[7])();
    (*(code *)(*pppppuVar17)[9])();
    ppppuVar16 = &pppuStack_190;
    ppppuVar10 = (undefined ****)pppuStack_188;
    func_0x000109daff5c(pppuStack_188,ppppuVar16,pppppuVar17,0,0,0);
    unaff_x24 = (undefined ****)pppuStack_188;
    if (((ulong)ppppuVar10 & 1) != 0) {
      ppppuStack_180 = (undefined ****)&UNK_10f5fc5d9;
      uStack_160 = 0x103;
      param_3 = (undefined ****)pppuStack_190;
      if ((long)pppuStack_190 < 0) {
        FUN_109dd98f8(param_1,ppppuVar18,&ppppuStack_180,0,0);
        pppppuVar17 = param_1;
        ppppuVar16 = ppppuVar18;
      }
      else {
        pppppuVar17 = param_1;
        FUN_109dd9860();
        if (((ulong)pppppuVar17 & 1) == 0) {
          param_4 = param_1;
          ppppuVar16 = param_2;
          FUN_109dcc3a8();
          pppppuVar17 = (undefined *****)0x0;
          if (param_4 != (undefined *****)0x0) {
            unaff_x25 = (undefined *****)&pppuStack_168;
            puStack_170 = (undefined *)0x100;
            uStack_178 = 0;
            ppppuStack_180 = (undefined ****)unaff_x25;
            FUN_109d37ad8(apppuStack_1d8,&ppppuStack_180);
            unaff_x26 = (undefined *****)((long)pppuStack_190 + 1);
            do {
              unaff_x26 = (undefined *****)((long)unaff_x26 + -1);
              if (unaff_x26 == (undefined *****)0x0) {
                FUN_109dccbf0(param_1,param_2,apppuStack_1d8);
                ppppuVar18 = param_2;
                break;
              }
              param_3 = param_4[2];
              unaff_x24 = param_4[3];
              pppppuVar17 = param_1;
              (*(code *)(*param_1)[5])();
              ppuStack_1e8 = (undefined **)pppppuVar17[1][1];
              uStack_1f0 = 0;
              ppppuVar18 = apppuStack_1d8;
              pppppuVar17 = param_1;
              FUN_109dca368(param_1,ppppuVar18,param_3,unaff_x24,0,0,0,0);
            } while (((ulong)pppppuVar17 & 1) == 0);
            apppuStack_1d8[0] = (undefined ***)&PTR_DAT_110b5c4a0;
            if ((iStack_1a0 == 1) && ((undefined ****)pppuStack_1c8 != (undefined ****)0x0)) {
              __ZdaPv();
            }
            pppppuVar17 = (undefined *****)ppppuStack_180;
            param_1 = (undefined *****)(ulong)(unaff_x26 != (undefined *****)0x0);
            if ((undefined *****)ppppuStack_180 != unaff_x25) {
              _free();
            }
            goto LAB_109dc2c78;
          }
        }
      }
      goto LAB_109dc2b20;
    }
    uStack_1b8 = 0x503;
    apppuStack_1d8[0] = (undefined ***)&UNK_10f5fc5b7;
    ppppuStack_180 = apppuStack_1d8;
    puStack_170 = &UNK_10f5fc5cd;
    uStack_160 = 0x302;
    pppuStack_1c8 = (undefined ***)param_3;
    ppppuStack_1c0 = (undefined ****)param_4;
    FUN_109dd98f8(param_1,ppppuVar18,&ppppuStack_180,0,0);
    pppppuVar17 = param_1;
  }
  else {
LAB_109dc2b20:
    ppppuVar18 = ppppuVar16;
    param_1 = (undefined *****)0x1;
  }
LAB_109dc2c78:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_1;
  }
  ___stack_chk_fail();
  apppuStack_1d8[0] = (undefined ***)&PTR_DAT_110b5c4a0;
  if ((iStack_1a0 == 1) && ((undefined ****)pppuStack_1c8 != (undefined ****)0x0)) {
    __ZdaPv();
  }
  if ((undefined *****)ppppuStack_180 != unaff_x25) {
    _free();
  }
  __Unwind_Resume();
  pcStack_1f8 = FUN_109dc2d70;
  lStack_260 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38e = 0;
  uStack_390 = 0;
  uStack_3a8 = 0;
  uStack_3b0 = 0;
  uStack_398 = 0;
  uStack_396 = 0;
  pppuStack_3a0 = (undefined ***)0x0;
  ppppuStack_3c8 = (undefined ****)0x0;
  ppppuStack_3c0 = (undefined ****)0x0;
  uStack_3b8 = 0;
  pppppuVar19 = pppppuVar17;
  puStack_200 = &stack0xfffffffffffffff0;
  (*(code *)(*pppppuVar17)[0x18])();
  apppuStack_410[0] = (undefined ***)&UNK_10f5fc63a;
  uStack_3f0 = 0x103;
  pppppuVar11 = pppppuVar17;
  (*(code *)(*pppppuVar17)[5])();
  if ((int)pppppuVar19 == 0) {
    ppppuStack_378 = (undefined ****)&UNK_10f5aef41;
    uStack_358 = 0x103;
    ppppuVar16 = (undefined ****)0x19;
    pppppuVar11 = pppppuVar17;
    func_0x000109dd9a7c(pppppuVar17,0x19,&ppppuStack_378);
    if (((ulong)pppppuVar11 & 1) != 0) goto LAB_109dc2f20;
    ppppuVar16 = (undefined ****)0x0;
    pppppuVar11 = pppppuVar17;
    FUN_109dc9afc(pppppuVar17,0,&ppppuStack_3c8);
    if (((((ulong)pppppuVar11 & 1) != 0) ||
        (pppppuVar11 = pppppuVar17, FUN_109dd9860(), ((ulong)pppppuVar11 & 1) != 0)) ||
       (pppppuVar19 = pppppuVar17, ppppuVar16 = ppppuVar18, FUN_109dcc3a8(),
       pppppuVar19 == (undefined *****)0x0)) goto LAB_109dc2f20;
    unaff_x25 = (undefined *****)&pppuStack_360;
    uStack_368 = 0x100;
    uStack_370 = 0;
    ppppuStack_378 = (undefined ****)unaff_x25;
    FUN_109d37ad8(apppuStack_410,&ppppuStack_378);
    unaff_x26 = (undefined *****)ppppuStack_3c0;
    param_4 = (undefined *****)ppppuStack_3c8;
    if (ppppuStack_3c8 != ppppuStack_3c0) {
      unaff_x27 = 1;
      unaff_x28 = (undefined *****)ppppuStack_3c8;
      do {
        param_3 = pppppuVar19[2];
        unaff_x24 = pppppuVar19[3];
        pppppuVar11 = pppppuVar17;
        (*(code *)(*pppppuVar17)[5])();
        ppuStack_418 = (undefined **)pppppuVar11[1][1];
        uStack_420 = 1;
        ppppuVar16 = apppuStack_410;
        pppppuVar11 = pppppuVar17;
        FUN_109dca368(pppppuVar17,ppppuVar16,param_3,unaff_x24,&uStack_3b0,1,param_4,1);
        if (((ulong)pppppuVar11 & 1) != 0) {
          pppppuVar17 = (undefined *****)0x1;
          goto LAB_109dc2f80;
        }
        unaff_x28 = unaff_x28 + 3;
        param_4 = param_4 + 3;
      } while (unaff_x28 != unaff_x26);
    }
    ppppuVar16 = ppppuVar18;
    FUN_109dccbf0(pppppuVar17,ppppuVar18,apppuStack_410);
    pppppuVar17 = (undefined *****)0x0;
LAB_109dc2f80:
    apppuStack_410[0] = (undefined ***)&PTR_DAT_110b5c4a0;
    if ((iStack_3d8 == 1) && (lStack_400 != 0)) {
      __ZdaPv();
    }
    if ((undefined *****)ppppuStack_378 != unaff_x25) {
      _free();
    }
  }
  else {
    ppppuVar16 = (undefined ****)pppppuVar11[1][1];
    FUN_109dd98f8(pppppuVar17,ppppuVar16,apppuStack_410,0,0);
LAB_109dc2f20:
    pppppuVar17 = (undefined *****)0x1;
  }
  FUN_109dcb748(&ppppuStack_3c8);
  ppppuStack_378 = &pppuStack_3a0;
  pppppuVar11 = &ppppuStack_378;
  FUN_109dabaec();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_260) {
    return pppppuVar17;
  }
  ___stack_chk_fail();
  apppuStack_410[0] = (undefined ***)&PTR_DAT_110b5c4a0;
  if ((iStack_3d8 == 1) && (lStack_400 != 0)) {
    __ZdaPv();
  }
  if ((undefined *****)ppppuStack_378 != unaff_x25) {
    _free();
  }
  FUN_109dcb748(&ppppuStack_3c8);
  apppuStack_410[0] = (undefined ***)&pppuStack_3a0;
  FUN_109dabaec(apppuStack_410);
  pppppuVar17 = pppppuVar11;
  __Unwind_Resume();
  pcStack_428 = FUN_109dc3034;
  lStack_498 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_5ee = 0;
  uStack_5f0 = 0;
  uStack_5f8 = 0;
  uStack_5f6 = 0;
  puStack_600 = (undefined *)0x0;
  uStack_608 = 0;
  uStack_610 = 0;
  plStack_628 = (long *)0x0;
  lStack_620 = 0;
  uStack_618 = 0;
  pppppuVar12 = pppppuVar17;
  ppppuStack_480 = (undefined ****)unaff_x28;
  uStack_478 = unaff_x27;
  ppppuStack_470 = (undefined ****)unaff_x26;
  ppppuStack_468 = (undefined ****)unaff_x25;
  pppuStack_460 = (undefined ***)unaff_x24;
  pppuStack_458 = (undefined ***)param_3;
  ppppuStack_450 = (undefined ****)param_4;
  ppppuStack_448 = (undefined ****)pppppuVar19;
  pppuStack_440 = (undefined ***)ppppuVar18;
  ppppuStack_438 = (undefined ****)pppppuVar11;
  ppuStack_430 = &puStack_200;
  (*(code *)(*pppppuVar17)[0x18])();
  appuStack_670[0] = (undefined **)&UNK_10f5fc662;
  uStack_650 = 0x103;
  pppppuVar19 = pppppuVar17;
  (*(code *)(*pppppuVar17)[5])();
  if ((int)pppppuVar12 == 0) {
    ppuStack_5b0 = (undefined **)&UNK_10f5aef41;
    uStack_590 = 0x103;
    pppppuVar19 = pppppuVar17;
    func_0x000109dd9a7c(pppppuVar17,0x19,&ppuStack_5b0);
    if ((((ulong)pppppuVar19 & 1) == 0) &&
       (pppppuVar19 = pppppuVar17, FUN_109dc9afc(pppppuVar17,0,&plStack_628), plVar3 = plStack_628,
       ((ulong)pppppuVar19 & 1) == 0)) {
      if ((lStack_620 - (long)plStack_628 == 0x18) && (plStack_628[1] - *plStack_628 == 0x28)) {
        pppppuVar19 = pppppuVar17;
        FUN_109dd9860();
        if ((((ulong)pppppuVar19 & 1) == 0) &&
           (param_4 = pppppuVar17, FUN_109dcc3a8(pppppuVar17,ppppuVar16),
           param_4 != (undefined *****)0x0)) {
          ppuStack_690 = &puStack_598;
          uStack_5a0 = 0x100;
          uStack_5a8 = 0;
          pppuVar14 = &ppuStack_5b0;
          ppuStack_5b0 = ppuStack_690;
          FUN_109d37ad8(appuStack_670);
          lVar6 = *(long *)(*plVar3 + 8);
          uVar8 = *(ulong *)(*plVar3 + 0x10);
          uVar20 = 0;
          do {
            pppppuVar19 = (undefined *****)(ulong)(uVar20 != uVar8);
            if (uVar20 == uVar8) {
              FUN_109dccbf0(pppppuVar17,ppppuVar16,appuStack_670);
              break;
            }
            plStack_688 = (long *)0x0;
            plStack_680 = (long *)0x0;
            plStack_678 = (long *)0x0;
            ppuVar13 = (undefined8 **)0x1;
            ppuStack_5b8 = &plStack_688;
            FUN_109dcb170();
            uVar1 = uVar20 + 1;
            uVar4 = uVar20;
            if (uVar20 <= uVar1) {
              uVar4 = uVar1;
            }
            uVar5 = uVar8;
            if (uVar1 <= uVar8) {
              uVar5 = uVar4;
            }
            *(undefined4 *)ppuVar13 = 2;
            ppuVar13[1] = (undefined8 *)(uVar20 + lVar6);
            ppuVar13[2] = (undefined8 *)(uVar5 - uVar20);
            *(undefined4 *)(ppuVar13 + 4) = 0x40;
            ppuVar13[3] = (undefined8 *)0x0;
            ppuStack_5d8 = ppuVar13;
            plStack_5d0 = (long *)ppuVar13;
            plStack_5c8 = (long *)ppuVar13;
            plStack_5c0 = (long *)(ppuVar13 + (long)pppuVar14 * 5);
            FUN_109d301fc();
            ppuVar2 = ppuVar13 + 5;
            plVar3 = (long *)((long)ppuVar13 + ((long)plStack_688 - (long)plStack_680));
            plStack_5c8 = (long *)ppuVar2;
            FUN_109dcb1b4(&plStack_688,plStack_688,plStack_680,plVar3);
            plStack_5c8 = plStack_688;
            plStack_5c0 = plStack_678;
            ppuStack_5d8 = (undefined8 **)plStack_688;
            plStack_5d0 = plStack_688;
            plStack_688 = plVar3;
            plStack_680 = (long *)ppuVar2;
            plStack_678 = (long *)(ppuVar13 + (long)pppuVar14 * 5);
            FUN_109dcb33c(&ppuStack_5d8);
            ppppuVar18 = param_4[2];
            ppppuVar10 = param_4[3];
            pppppuVar11 = pppppuVar17;
            plStack_680 = (long *)ppuVar2;
            (*(code *)(*pppppuVar17)[5])();
            ppuStack_698 = (undefined **)pppppuVar11[1][1];
            uStack_6a0 = 1;
            pppuVar14 = appuStack_670;
            pppppuVar11 = pppppuVar17;
            FUN_109dca368(pppppuVar17,pppuVar14,ppppuVar18,ppppuVar10,&uStack_610,1,&plStack_688,1);
            ppuStack_5d8 = &plStack_688;
            FUN_109dabaec(&ppuStack_5d8);
            uVar20 = uVar1;
          } while (((ulong)pppppuVar11 & 1) == 0);
          appuStack_670[0] = &PTR_DAT_110b5c4a0;
          if ((iStack_638 == 1) && (lStack_660 != 0)) {
            __ZdaPv();
          }
          if (ppuStack_5b0 != ppuStack_690) {
            _free();
          }
          goto LAB_109dc32f4;
        }
      }
      else {
        ppuStack_5b0 = (undefined **)&UNK_10f5fc68b;
        uStack_590 = 0x103;
        pppppuVar19 = pppppuVar17;
        (*(code *)(*pppppuVar17)[5])();
        FUN_109dd98f8(pppppuVar17,pppppuVar19[0xc],&ppuStack_5b0,0,0);
      }
    }
  }
  else {
    FUN_109dd98f8(pppppuVar17,pppppuVar19[1][1],appuStack_670,0,0);
  }
  pppppuVar19 = (undefined *****)0x1;
LAB_109dc32f4:
  FUN_109dcb748(&plStack_628);
  ppuStack_5b0 = &puStack_600;
  pppuVar14 = &ppuStack_5b0;
  FUN_109dabaec();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_498) {
    ___stack_chk_fail();
    appuStack_670[0] = &PTR_DAT_110b5c4a0;
    if ((iStack_638 == 1) && (lStack_660 != 0)) {
      __ZdaPv();
    }
    if (ppuStack_5b0 != ppuStack_690) {
      _free();
    }
    FUN_109dcb748(&plStack_628);
    appuStack_670[0] = &puStack_600;
    FUN_109dabaec(appuStack_670);
    pppuVar15 = pppuVar14;
    __Unwind_Resume();
    pcStack_6a8 = FUN_109dc3444;
    ppuVar7 = pppuVar15[0x2b];
    ppuVar9 = pppuVar15[0x2c];
    ppppuStack_6d0 = (undefined ****)param_4;
    ppppuStack_6c8 = (undefined ****)pppppuVar19;
    pppuStack_6c0 = (undefined ***)ppppuVar16;
    pppuStack_6b8 = pppuVar14;
    pppuStack_6b0 = &ppuStack_430;
    if (ppuVar7 == ppuVar9) {
      apuStack_6f8[0] = &UNK_10f5fc6b1;
      uStack_6d8 = 0x103;
      pppuVar14 = pppuVar15;
      (*(code *)(*pppuVar15)[5])();
      FUN_109dd98f8(pppuVar15,pppuVar14[0xc],apuStack_6f8,0,0);
    }
    else {
      func_0x000109dccf14(pppuVar15);
    }
    return (undefined *****)(ulong)(ppuVar7 == ppuVar9);
  }
  return pppppuVar19;
}



/* Entry: 109dc2d70; end: 109dc3033;  */

ulong FUN_109dc2d70(long *param_1,undefined ***param_2)

{
  ulong uVar1;
  undefined8 **ppuVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long *plVar8;
  long *plVar9;
  undefined ***pppuVar10;
  undefined ***pppuVar11;
  undefined ***pppuVar12;
  undefined8 **ppuVar13;
  undefined ***pppuVar14;
  ulong uVar15;
  ulong uVar16;
  undefined ***unaff_x22;
  long unaff_x23;
  long unaff_x24;
  ulong uVar17;
  undefined **unaff_x25;
  undefined ***unaff_x26;
  undefined8 unaff_x27;
  undefined ***unaff_x28;
  undefined *apuStack_508 [4];
  undefined2 uStack_4e8;
  undefined8 **ppuStack_4e0;
  ulong uStack_4d8;
  undefined ***pppuStack_4d0;
  undefined ***pppuStack_4c8;
  undefined1 **ppuStack_4c0;
  code *pcStack_4b8;
  undefined1 uStack_4b0;
  undefined8 uStack_4a8;
  undefined **ppuStack_4a0;
  long *plStack_498;
  long *plStack_490;
  long *plStack_488;
  undefined **appuStack_480 [2];
  long lStack_470;
  undefined2 uStack_460;
  int iStack_448;
  long *plStack_438;
  long lStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined *puStack_410;
  undefined2 uStack_408;
  undefined6 uStack_406;
  undefined2 uStack_400;
  undefined8 uStack_3fe;
  undefined8 **ppuStack_3e8;
  long *plStack_3e0;
  long *plStack_3d8;
  long *plStack_3d0;
  undefined8 **ppuStack_3c8;
  undefined **ppuStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined *puStack_3a8;
  undefined2 uStack_3a0;
  long lStack_2a8;
  undefined8 **ppuStack_290;
  undefined8 uStack_288;
  undefined8 **ppuStack_280;
  undefined **ppuStack_278;
  long lStack_270;
  long lStack_268;
  undefined8 **ppuStack_260;
  long *plStack_258;
  undefined ***pppuStack_250;
  undefined8 **ppuStack_248;
  undefined1 *puStack_240;
  code *pcStack_238;
  undefined1 uStack_230;
  undefined8 uStack_228;
  undefined **appuStack_220 [2];
  long lStack_210;
  undefined2 uStack_200;
  int iStack_1e8;
  undefined8 **ppuStack_1d8;
  undefined8 **ppuStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined2 uStack_1a8;
  undefined6 uStack_1a6;
  undefined2 uStack_1a0;
  undefined8 uStack_19e;
  undefined **ppuStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined2 uStack_168;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_19e = 0;
  uStack_1a0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1a6 = 0;
  puStack_1b0 = (undefined *)0x0;
  ppuStack_1d8 = (undefined ***)0x0;
  ppuStack_1d0 = (undefined ***)0x0;
  uStack_1c8 = 0;
  plVar8 = param_1;
  (**(code **)(*param_1 + 0xc0))(param_1,&uStack_1c0);
  appuStack_220[0] = (undefined **)&UNK_10f5fc63a;
  uStack_200 = 0x103;
  plVar9 = param_1;
  (**(code **)(*param_1 + 0x28))();
  if ((int)plVar8 == 0) {
    ppuStack_188 = (undefined **)&UNK_10f5aef41;
    uStack_168 = 0x103;
    pppuVar14 = (undefined ***)0x19;
    plVar9 = param_1;
    func_0x000109dd9a7c(param_1,0x19,&ppuStack_188);
    if (((ulong)plVar9 & 1) != 0) goto LAB_109dc2f20;
    pppuVar14 = (undefined ***)0x0;
    plVar9 = param_1;
    FUN_109dc9afc(param_1,0,&ppuStack_1d8);
    if (((((ulong)plVar9 & 1) != 0) || (plVar9 = param_1, FUN_109dd9860(), ((ulong)plVar9 & 1) != 0)
        ) || (plVar8 = param_1, pppuVar14 = param_2, FUN_109dcc3a8(), plVar8 == (long *)0x0))
    goto LAB_109dc2f20;
    unaff_x25 = &puStack_170;
    uStack_178 = 0x100;
    uStack_180 = 0;
    ppuStack_188 = unaff_x25;
    FUN_109d37ad8(appuStack_220,&ppuStack_188);
    unaff_x26 = (undefined ***)ppuStack_1d0;
    unaff_x22 = (undefined ***)ppuStack_1d8;
    if (ppuStack_1d8 != ppuStack_1d0) {
      unaff_x27 = 1;
      unaff_x28 = (undefined ***)ppuStack_1d8;
      do {
        unaff_x23 = plVar8[2];
        unaff_x24 = plVar8[3];
        plVar9 = param_1;
        (**(code **)(*param_1 + 0x28))();
        uStack_228 = *(undefined8 *)(plVar9[1] + 8);
        uStack_230 = 1;
        pppuVar14 = appuStack_220;
        plVar9 = param_1;
        FUN_109dca368(param_1,pppuVar14,unaff_x23,unaff_x24,&uStack_1c0,1,unaff_x22,1);
        if (((ulong)plVar9 & 1) != 0) {
          uVar15 = 1;
          goto LAB_109dc2f80;
        }
        unaff_x28 = unaff_x28 + 3;
        unaff_x22 = unaff_x22 + 3;
      } while (unaff_x28 != unaff_x26);
    }
    pppuVar14 = param_2;
    FUN_109dccbf0(param_1,param_2,appuStack_220);
    uVar15 = 0;
LAB_109dc2f80:
    appuStack_220[0] = &PTR_DAT_110b5c4a0;
    if ((iStack_1e8 == 1) && (lStack_210 != 0)) {
      __ZdaPv();
    }
    if (ppuStack_188 != unaff_x25) {
      _free();
    }
  }
  else {
    pppuVar14 = *(undefined ****)(plVar9[1] + 8);
    FUN_109dd98f8(param_1,pppuVar14,appuStack_220,0,0);
LAB_109dc2f20:
    uVar15 = 1;
  }
  FUN_109dcb748(&ppuStack_1d8);
  ppuStack_188 = &puStack_1b0;
  pppuVar10 = &ppuStack_188;
  FUN_109dabaec();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return uVar15;
  }
  ___stack_chk_fail();
  appuStack_220[0] = &PTR_DAT_110b5c4a0;
  if ((iStack_1e8 == 1) && (lStack_210 != 0)) {
    __ZdaPv();
  }
  if (ppuStack_188 != unaff_x25) {
    _free();
  }
  FUN_109dcb748(&ppuStack_1d8);
  appuStack_220[0] = &puStack_1b0;
  FUN_109dabaec(appuStack_220);
  pppuVar11 = pppuVar10;
  __Unwind_Resume();
  pcStack_238 = FUN_109dc3034;
  lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_3fe = 0;
  uStack_400 = 0;
  uStack_408 = 0;
  uStack_406 = 0;
  puStack_410 = (undefined *)0x0;
  uStack_418 = 0;
  uStack_420 = 0;
  plStack_438 = (long *)0x0;
  lStack_430 = 0;
  uStack_428 = 0;
  pppuVar12 = pppuVar11;
  ppuStack_290 = unaff_x28;
  uStack_288 = unaff_x27;
  ppuStack_280 = unaff_x26;
  ppuStack_278 = unaff_x25;
  lStack_270 = unaff_x24;
  lStack_268 = unaff_x23;
  ppuStack_260 = unaff_x22;
  plStack_258 = plVar8;
  pppuStack_250 = param_2;
  ppuStack_248 = pppuVar10;
  puStack_240 = &stack0xfffffffffffffff0;
  (*(code *)(*pppuVar11)[0x18])();
  appuStack_480[0] = (undefined **)&UNK_10f5fc662;
  uStack_460 = 0x103;
  pppuVar10 = pppuVar11;
  (*(code *)(*pppuVar11)[5])();
  if ((int)pppuVar12 == 0) {
    ppuStack_3c0 = (undefined **)&UNK_10f5aef41;
    uStack_3a0 = 0x103;
    pppuVar10 = pppuVar11;
    func_0x000109dd9a7c(pppuVar11,0x19,&ppuStack_3c0);
    if ((((ulong)pppuVar10 & 1) == 0) &&
       (pppuVar10 = pppuVar11, FUN_109dc9afc(pppuVar11,0,&plStack_438), plVar8 = plStack_438,
       ((ulong)pppuVar10 & 1) == 0)) {
      if ((lStack_430 - (long)plStack_438 == 0x18) && (plStack_438[1] - *plStack_438 == 0x28)) {
        pppuVar10 = pppuVar11;
        FUN_109dd9860();
        if ((((ulong)pppuVar10 & 1) == 0) &&
           (unaff_x22 = pppuVar11, FUN_109dcc3a8(pppuVar11,pppuVar14),
           unaff_x22 != (undefined ***)0x0)) {
          ppuStack_4a0 = &puStack_3a8;
          uStack_3b0 = 0x100;
          uStack_3b8 = 0;
          pppuVar10 = &ppuStack_3c0;
          ppuStack_3c0 = ppuStack_4a0;
          FUN_109d37ad8(appuStack_480);
          lVar5 = *(long *)(*plVar8 + 8);
          uVar15 = *(ulong *)(*plVar8 + 0x10);
          uVar17 = 0;
          do {
            uVar16 = (ulong)(uVar17 != uVar15);
            if (uVar17 == uVar15) {
              FUN_109dccbf0(pppuVar11,pppuVar14,appuStack_480);
              break;
            }
            plStack_498 = (long *)0x0;
            plStack_490 = (long *)0x0;
            plStack_488 = (long *)0x0;
            ppuVar13 = (undefined8 **)0x1;
            ppuStack_3c8 = &plStack_498;
            FUN_109dcb170();
            uVar1 = uVar17 + 1;
            uVar3 = uVar17;
            if (uVar17 <= uVar1) {
              uVar3 = uVar1;
            }
            uVar4 = uVar15;
            if (uVar1 <= uVar15) {
              uVar4 = uVar3;
            }
            *(undefined4 *)ppuVar13 = 2;
            ppuVar13[1] = (undefined8 *)(uVar17 + lVar5);
            ppuVar13[2] = (undefined8 *)(uVar4 - uVar17);
            *(undefined4 *)(ppuVar13 + 4) = 0x40;
            ppuVar13[3] = (undefined8 *)0x0;
            ppuStack_3e8 = ppuVar13;
            plStack_3e0 = (long *)ppuVar13;
            plStack_3d8 = (long *)ppuVar13;
            plStack_3d0 = (long *)(ppuVar13 + (long)pppuVar10 * 5);
            FUN_109d301fc();
            ppuVar2 = ppuVar13 + 5;
            plVar8 = (long *)((long)ppuVar13 + ((long)plStack_498 - (long)plStack_490));
            plStack_3d8 = (long *)ppuVar2;
            FUN_109dcb1b4(&plStack_498,plStack_498,plStack_490,plVar8);
            plStack_3d8 = plStack_498;
            plStack_3d0 = plStack_488;
            ppuStack_3e8 = (undefined8 **)plStack_498;
            plStack_3e0 = plStack_498;
            plStack_498 = plVar8;
            plStack_490 = (long *)ppuVar2;
            plStack_488 = (long *)(ppuVar13 + (long)pppuVar10 * 5);
            FUN_109dcb33c(&ppuStack_3e8);
            ppuVar6 = unaff_x22[2];
            ppuVar7 = unaff_x22[3];
            pppuVar10 = pppuVar11;
            plStack_490 = (long *)ppuVar2;
            (*(code *)(*pppuVar11)[5])();
            uStack_4a8 = pppuVar10[1][1];
            uStack_4b0 = 1;
            pppuVar10 = appuStack_480;
            pppuVar12 = pppuVar11;
            FUN_109dca368(pppuVar11,pppuVar10,ppuVar6,ppuVar7,&uStack_420,1,&plStack_498,1);
            ppuStack_3e8 = &plStack_498;
            FUN_109dabaec(&ppuStack_3e8);
            uVar17 = uVar1;
          } while (((ulong)pppuVar12 & 1) == 0);
          appuStack_480[0] = &PTR_DAT_110b5c4a0;
          if ((iStack_448 == 1) && (lStack_470 != 0)) {
            __ZdaPv();
          }
          if (ppuStack_3c0 != ppuStack_4a0) {
            _free();
          }
          goto LAB_109dc32f4;
        }
      }
      else {
        ppuStack_3c0 = (undefined **)&UNK_10f5fc68b;
        uStack_3a0 = 0x103;
        pppuVar10 = pppuVar11;
        (*(code *)(*pppuVar11)[5])();
        FUN_109dd98f8(pppuVar11,pppuVar10[0xc],&ppuStack_3c0,0,0);
      }
    }
  }
  else {
    FUN_109dd98f8(pppuVar11,pppuVar10[1][1],appuStack_480,0,0);
  }
  uVar16 = 1;
LAB_109dc32f4:
  FUN_109dcb748(&plStack_438);
  ppuStack_3c0 = &puStack_410;
  pppuVar10 = &ppuStack_3c0;
  FUN_109dabaec();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2a8) {
    ___stack_chk_fail();
    appuStack_480[0] = &PTR_DAT_110b5c4a0;
    if ((iStack_448 == 1) && (lStack_470 != 0)) {
      __ZdaPv();
    }
    if (ppuStack_3c0 != ppuStack_4a0) {
      _free();
    }
    FUN_109dcb748(&plStack_438);
    appuStack_480[0] = &puStack_410;
    FUN_109dabaec(appuStack_480);
    pppuVar11 = pppuVar10;
    __Unwind_Resume();
    pcStack_4b8 = FUN_109dc3444;
    ppuVar6 = pppuVar11[0x2b];
    ppuVar7 = pppuVar11[0x2c];
    ppuStack_4e0 = unaff_x22;
    uStack_4d8 = uVar16;
    pppuStack_4d0 = pppuVar14;
    pppuStack_4c8 = pppuVar10;
    ppuStack_4c0 = &puStack_240;
    if (ppuVar6 == ppuVar7) {
      apuStack_508[0] = &UNK_10f5fc6b1;
      uStack_4e8 = 0x103;
      pppuVar14 = pppuVar11;
      (*(code *)(*pppuVar11)[5])();
      FUN_109dd98f8(pppuVar11,pppuVar14[0xc],apuStack_508,0,0);
    }
    else {
      func_0x000109dccf14(pppuVar11);
    }
    return (ulong)(ppuVar6 == ppuVar7);
  }
  return uVar16;
}



/* Entry: 109dc3034; end: 109dc3443;  */

ulong FUN_109dc3034(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 **ppuVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined **ppuVar7;
  ulong uVar8;
  long lVar9;
  undefined **ppuVar10;
  long *plVar11;
  long *plVar12;
  undefined8 **ppuVar13;
  undefined ***pppuVar14;
  undefined ***pppuVar15;
  ulong uVar16;
  long *unaff_x22;
  ulong uVar17;
  undefined *apuStack_2d8 [4];
  undefined2 uStack_2b8;
  long *plStack_2b0;
  ulong uStack_2a8;
  undefined8 uStack_2a0;
  undefined ***pppuStack_298;
  undefined1 *puStack_290;
  code *pcStack_288;
  undefined1 uStack_280;
  undefined8 uStack_278;
  undefined **ppuStack_270;
  long *plStack_268;
  long *plStack_260;
  long *plStack_258;
  undefined **appuStack_250 [2];
  long lStack_240;
  undefined2 uStack_230;
  int iStack_218;
  long *plStack_208;
  long lStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined *puStack_1e0;
  undefined2 uStack_1d8;
  undefined6 uStack_1d6;
  undefined2 uStack_1d0;
  undefined8 uStack_1ce;
  undefined8 **ppuStack_1b8;
  long *plStack_1b0;
  long *plStack_1a8;
  long *plStack_1a0;
  undefined8 **ppuStack_198;
  undefined **ppuStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined2 uStack_170;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_1ce = 0;
  uStack_1d0 = 0;
  uStack_1d8 = 0;
  uStack_1d6 = 0;
  puStack_1e0 = (undefined *)0x0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  plStack_208 = (long *)0x0;
  lStack_200 = 0;
  uStack_1f8 = 0;
  plVar11 = param_1;
  (**(code **)(*param_1 + 0xc0))(param_1,&uStack_1f0);
  appuStack_250[0] = (undefined **)&UNK_10f5fc662;
  uStack_230 = 0x103;
  plVar12 = param_1;
  (**(code **)(*param_1 + 0x28))();
  if ((int)plVar11 == 0) {
    ppuStack_190 = (undefined **)&UNK_10f5aef41;
    uStack_170 = 0x103;
    plVar11 = param_1;
    func_0x000109dd9a7c(param_1,0x19,&ppuStack_190);
    if ((((ulong)plVar11 & 1) == 0) &&
       (plVar12 = param_1, FUN_109dc9afc(param_1,0,&plStack_208), plVar11 = plStack_208,
       ((ulong)plVar12 & 1) == 0)) {
      if ((lStack_200 - (long)plStack_208 == 0x18) && (plStack_208[1] - *plStack_208 == 0x28)) {
        plVar12 = param_1;
        FUN_109dd9860();
        if ((((ulong)plVar12 & 1) == 0) &&
           (unaff_x22 = param_1, FUN_109dcc3a8(param_1,param_2), unaff_x22 != (long *)0x0)) {
          ppuStack_270 = &puStack_178;
          uStack_180 = 0x100;
          uStack_188 = 0;
          pppuVar14 = &ppuStack_190;
          ppuStack_190 = ppuStack_270;
          FUN_109d37ad8(appuStack_250);
          lVar5 = *(long *)(*plVar11 + 8);
          uVar8 = *(ulong *)(*plVar11 + 0x10);
          uVar17 = 0;
          do {
            uVar16 = (ulong)(uVar17 != uVar8);
            if (uVar17 == uVar8) {
              FUN_109dccbf0(param_1,param_2,appuStack_250);
              break;
            }
            plStack_268 = (long *)0x0;
            plStack_260 = (long *)0x0;
            plStack_258 = (long *)0x0;
            ppuVar13 = (undefined8 **)0x1;
            ppuStack_198 = &plStack_268;
            FUN_109dcb170();
            uVar1 = uVar17 + 1;
            uVar3 = uVar17;
            if (uVar17 <= uVar1) {
              uVar3 = uVar1;
            }
            uVar4 = uVar8;
            if (uVar1 <= uVar8) {
              uVar4 = uVar3;
            }
            *(undefined4 *)ppuVar13 = 2;
            ppuVar13[1] = (undefined8 *)(uVar17 + lVar5);
            ppuVar13[2] = (undefined8 *)(uVar4 - uVar17);
            *(undefined4 *)(ppuVar13 + 4) = 0x40;
            ppuVar13[3] = (undefined8 *)0x0;
            ppuStack_1b8 = ppuVar13;
            plStack_1b0 = (long *)ppuVar13;
            plStack_1a8 = (long *)ppuVar13;
            plStack_1a0 = (long *)(ppuVar13 + (long)pppuVar14 * 5);
            FUN_109d301fc();
            ppuVar2 = ppuVar13 + 5;
            plVar11 = (long *)((long)ppuVar13 + ((long)plStack_268 - (long)plStack_260));
            plStack_1a8 = (long *)ppuVar2;
            FUN_109dcb1b4(&plStack_268,plStack_268,plStack_260,plVar11);
            plStack_1a8 = plStack_268;
            plStack_1a0 = plStack_258;
            ppuStack_1b8 = (undefined8 **)plStack_268;
            plStack_1b0 = plStack_268;
            plStack_268 = plVar11;
            plStack_260 = (long *)ppuVar2;
            plStack_258 = (long *)(ppuVar13 + (long)pppuVar14 * 5);
            FUN_109dcb33c(&ppuStack_1b8);
            lVar6 = unaff_x22[2];
            lVar9 = unaff_x22[3];
            plVar11 = param_1;
            plStack_260 = (long *)ppuVar2;
            (**(code **)(*param_1 + 0x28))();
            uStack_278 = *(undefined8 *)(plVar11[1] + 8);
            uStack_280 = 1;
            pppuVar14 = appuStack_250;
            plVar11 = param_1;
            FUN_109dca368(param_1,pppuVar14,lVar6,lVar9,&uStack_1f0,1,&plStack_268,1);
            ppuStack_1b8 = &plStack_268;
            FUN_109dabaec(&ppuStack_1b8);
            uVar17 = uVar1;
          } while (((ulong)plVar11 & 1) == 0);
          appuStack_250[0] = &PTR_DAT_110b5c4a0;
          if ((iStack_218 == 1) && (lStack_240 != 0)) {
            __ZdaPv();
          }
          if (ppuStack_190 != ppuStack_270) {
            _free();
          }
          goto LAB_109dc32f4;
        }
      }
      else {
        ppuStack_190 = (undefined **)&UNK_10f5fc68b;
        uStack_170 = 0x103;
        plVar11 = param_1;
        (**(code **)(*param_1 + 0x28))();
        FUN_109dd98f8(param_1,plVar11[0xc],&ppuStack_190,0,0);
      }
    }
  }
  else {
    FUN_109dd98f8(param_1,*(undefined8 *)(plVar12[1] + 8),appuStack_250,0,0);
  }
  uVar16 = 1;
LAB_109dc32f4:
  FUN_109dcb748(&plStack_208);
  ppuStack_190 = &puStack_1e0;
  pppuVar14 = &ppuStack_190;
  FUN_109dabaec();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    appuStack_250[0] = &PTR_DAT_110b5c4a0;
    if ((iStack_218 == 1) && (lStack_240 != 0)) {
      __ZdaPv();
    }
    if (ppuStack_190 != ppuStack_270) {
      _free();
    }
    FUN_109dcb748(&plStack_208);
    appuStack_250[0] = &puStack_1e0;
    FUN_109dabaec(appuStack_250);
    pppuVar15 = pppuVar14;
    __Unwind_Resume();
    pcStack_288 = FUN_109dc3444;
    ppuVar7 = pppuVar15[0x2b];
    ppuVar10 = pppuVar15[0x2c];
    plStack_2b0 = unaff_x22;
    uStack_2a8 = uVar16;
    uStack_2a0 = param_2;
    pppuStack_298 = pppuVar14;
    puStack_290 = &stack0xfffffffffffffff0;
    if (ppuVar7 == ppuVar10) {
      apuStack_2d8[0] = &UNK_10f5fc6b1;
      uStack_2b8 = 0x103;
      pppuVar14 = pppuVar15;
      (*(code *)(*pppuVar15)[5])();
      FUN_109dd98f8(pppuVar15,pppuVar14[0xc],apuStack_2d8,0,0);
    }
    else {
      func_0x000109dccf14(pppuVar15);
    }
    return (ulong)(ppuVar7 == ppuVar10);
  }
  return uVar16;
}



/* Entry: 109dc3444; end: 109dc34cb;  */

bool FUN_109dc3444(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined *apuStack_58 [4];
  undefined2 uStack_38;
  
  lVar1 = param_1[0x2b];
  lVar2 = param_1[0x2c];
  if (lVar1 == lVar2) {
    apuStack_58[0] = &UNK_10f5fc6b1;
    uStack_38 = 0x103;
    plVar3 = param_1;
    (**(code **)(*param_1 + 0x28))();
    FUN_109dd98f8(param_1,plVar3[0xc],apuStack_58,0,0);
  }
  else {
    func_0x000109dccf14(param_1);
  }
  return lVar1 == lVar2;
}



/* Entry: 109dc34cc; end: 109dc359b;  */

undefined8 FUN_109dc34cc(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined *apuStack_50 [4];
  undefined2 uStack_30;
  undefined1 uStack_28;
  undefined7 uStack_27;
  
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x28))();
  lVar2 = plVar1[0xc];
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x108))();
  if (((((ulong)plVar1 & 1) == 0) &&
      (plVar1 = param_1, (**(code **)(*param_1 + 0x100))(param_1,&uStack_28),
      ((ulong)plVar1 & 1) == 0)) && (plVar1 = param_1, FUN_109dd9860(), ((ulong)plVar1 & 1) == 0)) {
    apuStack_50[0] = &UNK_10f5fc6cd;
    uStack_30 = 0x103;
    if (CONCAT71(uStack_27,uStack_28) < 0x1f) {
      (**(code **)(*param_1 + 0x38))();
      (**(code **)(*param_1 + 0x4b0))();
      return 0;
    }
    FUN_109dd98f8(param_1,lVar2,apuStack_50,0,0);
  }
  return 1;
}



/* Entry: 109dc359c; end: 109dc36e3;  */

undefined8 FUN_109dc359c(long *param_1)

{
  long *plVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *apuStack_90 [4];
  undefined2 uStack_70;
  undefined *apuStack_68 [4];
  undefined2 uStack_48;
  long *plStack_40;
  long lStack_38;
  
  ppuVar2 = apuStack_90;
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x108))();
  if (((ulong)plVar1 & 1) == 0) {
    plStack_40 = (long *)0x0;
    lStack_38 = 0;
    plVar1 = param_1;
    (**(code **)(*param_1 + 0x28))();
    uVar3 = *(undefined8 *)(plVar1[1] + 8);
    plVar1 = param_1;
    func_0x000109dd9bd8(param_1,9);
    if (((ulong)plVar1 & 1) != 0) {
LAB_109dc35f4:
      (**(code **)(*param_1 + 0x38))();
      (**(code **)(*param_1 + 0x4b8))();
      return 0;
    }
    plVar1 = param_1;
    (**(code **)(*param_1 + 0xc0))(param_1,&plStack_40);
    apuStack_68[0] = &UNK_10f5fc707;
    uStack_48 = 0x103;
    if ((int)plVar1 == 0) {
      if (lStack_38 == 0xc) {
        apuStack_90[0] = &UNK_10f5fc707;
        uStack_70 = 0x103;
        if (*plStack_40 == 0x6f745f6e67696c61 && (int)plStack_40[1] == 0x646e655f) {
          plVar1 = param_1;
          FUN_109dd9860();
          if (((ulong)plVar1 & 1) != 0) {
            return 1;
          }
          goto LAB_109dc35f4;
        }
      }
      uStack_70 = 0x103;
      apuStack_90[0] = &UNK_10f5fc707;
    }
    else {
      ppuVar2 = apuStack_68;
    }
    FUN_109dd98f8(param_1,uVar3,ppuVar2,0,0);
  }
  return 1;
}



/* Entry: 109dc36e4; end: 109dc3863;  */

undefined8 FUN_109dc36e4(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x108))();
  if ((((ulong)plVar1 & 1) == 0) && (plVar1 = param_1, FUN_109dd9860(), ((ulong)plVar1 & 1) == 0)) {
    (**(code **)(*param_1 + 0x38))();
    (**(code **)(*param_1 + 0x4c0))();
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 109dc3864; end: 109dc41d3;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long ******* FUN_109dc3864(long *******param_1,long *******param_2)

{
  int iVar1;
  long *******ppppppplVar2;
  long *******ppppppplVar3;
  long ******pppppplVar4;
  long *******ppppppplVar5;
  long *****ppppplVar6;
  ulong uVar7;
  bool bVar8;
  bool bVar9;
  undefined8 uVar10;
  undefined8 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 unaff_d8;
  undefined *apuStack_210 [4];
  undefined2 uStack_1f0;
  undefined1 auStack_1e8 [8];
  long *******ppppppplStack_1e0;
  long *******ppppppplStack_1d8;
  undefined1 *puStack_1d0;
  code *pcStack_1c8;
  undefined4 uStack_1c0;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *******ppppppplStack_1a0;
  long *******ppppppplStack_198;
  long lStack_190;
  long lStack_188;
  long *******ppppppplStack_180;
  long *******ppppppplStack_178;
  long lStack_170;
  char cStack_161;
  long *******ppppppplStack_160;
  ulong uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long *******ppppppplStack_138;
  long lStack_130;
  undefined8 uStack_128;
  long *******ppppppplStack_120;
  long lStack_118;
  undefined8 uStack_110;
  long ******pppppplStack_108;
  long *******ppppppplStack_100;
  long *******ppppppplStack_f8;
  byte bStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined2 uStack_c8;
  long ******pppppplStack_c0;
  ulong uStack_b8;
  undefined1 auStack_b0 [16];
  undefined2 uStack_a0;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppplVar3 = param_1;
  (*(code *)(*param_1)[5])();
  if (*(int *)ppppppplVar3[1] == 4) {
    ppppppplVar3 = param_1;
    (*(code *)(*param_1)[5])();
    pppppplVar4 = ppppppplVar3[1] + 3;
    if (0x40 < *(uint *)(ppppppplVar3[1] + 4)) {
      pppppplVar4 = (long ******)*pppppplVar4;
    }
    ppppplVar6 = *pppppplVar4;
    (*(code *)(*param_1)[0x17])(param_1);
    if ((long)ppppplVar6 < 0) {
      pppppplStack_c0 = (long ******)&UNK_10f5fc733;
      uStack_a0 = 0x103;
      ppppppplVar3 = param_1;
      (*(code *)(*param_1)[5])();
      FUN_109dd98f8(param_1,ppppppplVar3[0xc],&pppppplStack_c0,0,0);
      ppppppplVar3 = param_1;
      param_1 = (long *******)0x1;
      goto LAB_109dc3db8;
    }
  }
  else {
    ppppplVar6 = (long *****)0xffffffffffffffff;
  }
  ppppppplStack_120 = (long *******)0x0;
  lStack_118 = 0;
  uStack_110 = 0;
  ppppppplVar3 = param_1;
  (*(code *)(*param_1)[0x1a])(param_1,&ppppppplStack_120);
  if (((ulong)ppppppplVar3 & 1) == 0) {
    ppppppplStack_138 = (long *******)0x0;
    lStack_130 = 0;
    uStack_128 = 0;
    ppppppplVar3 = param_1;
    (*(code *)(*param_1)[5])();
    if (*(int *)ppppppplVar3[1] != 3) {
      ppppppplStack_198 = (long *******)0x0;
      ppppppplStack_180 = ppppppplStack_120;
      if (-1 < (long)uStack_110._7_1_) {
        ppppppplStack_180 = (long *******)&ppppppplStack_120;
      }
      lStack_188 = lStack_118;
      if (-1 < uStack_110) {
        lStack_188 = (long)uStack_110._7_1_;
      }
      lStack_190 = 0;
LAB_109dc3a44:
      bVar8 = false;
      bVar9 = false;
      ppppppplStack_160 = (long *******)0x0;
      uStack_158 = 0;
      uStack_150 = 0;
      uVar7 = 0x6563;
      ppppppplVar5 = (long *******)0x646d;
      ppppppplStack_1a0 = param_2;
LAB_109dc3a6c:
      ppppppplVar3 = param_1;
      uVar10 = func_0x000109dd9bd8(param_1,9);
      if (((ulong)ppppppplVar3 & 1) != 0) goto LAB_109dc3c34;
      ppppppplStack_178 = (long *******)0x0;
      lStack_170 = 0;
      ppppppplVar3 = param_1;
      (*(code *)(*param_1)[5])();
      iVar1 = *(int *)ppppppplVar3[1];
      pppppplStack_c0 = (long ******)&UNK_10f5fc774;
      uStack_a0 = 0x103;
      ppppppplVar3 = param_1;
      (*(code *)(*param_1)[5])();
      if (iVar1 == 2) {
        ppppppplVar3 = param_1;
        (*(code *)(*param_1)[0x18])(param_1,&ppppppplStack_178);
        if (((ulong)ppppppplVar3 & 1) != 0) goto LAB_109dc3d84;
        if (lStack_170 == 6) {
          if (*(int *)ppppppplStack_178 != 0x72756f73 ||
              *(short *)((long)ppppppplStack_178 + 4) != 0x6563) goto LAB_109dc3bfc;
          pppppplStack_c0 = (long ******)&UNK_10f5fc7c5;
          uStack_a0 = 0x103;
          ppppppplVar3 = param_1;
          (*(code *)(*param_1)[5])();
          if (ppppplVar6 == (long *****)0xffffffffffffffff) {
            FUN_109dd98f8(param_1,ppppppplVar3[1][1],&pppppplStack_c0,0,0);
            ppppppplVar3 = param_1;
            goto LAB_109dc3d84;
          }
          ppppppplVar3 = param_1;
          (*(code *)(*param_1)[5])();
          iVar1 = *(int *)ppppppplVar3[1];
          uStack_e8 = (long *******)&UNK_10f5fc774;
          uStack_c8 = 0x103;
          ppppppplVar3 = param_1;
          (*(code *)(*param_1)[5])();
          if (iVar1 != 3) {
            FUN_109dd98f8(param_1,ppppppplVar3[1][1],&uStack_e8,0,0);
            ppppppplVar3 = param_1;
            goto LAB_109dc3d84;
          }
          ppppppplVar3 = param_1;
          (*(code *)(*param_1)[0x1a])(param_1,&ppppppplStack_160);
          if (((ulong)ppppppplVar3 & 1) != 0) goto LAB_109dc3d84;
          bVar8 = true;
          goto LAB_109dc3a6c;
        }
        if ((lStack_170 == 3) &&
           (*(short *)ppppppplStack_178 == 0x646d && *(char *)((long)ppppppplStack_178 + 2) == '5'))
        {
          pppppplStack_c0 = (long ******)&UNK_10f5fc79a;
          uStack_a0 = 0x103;
          ppppppplVar3 = param_1;
          (*(code *)(*param_1)[5])();
          if (ppppplVar6 != (long *****)0xffffffffffffffff) {
            ppppppplVar3 = param_1;
            FUN_109dcbb1c(param_1,&uStack_140,&uStack_148);
            if (((ulong)ppppppplVar3 & 1) != 0) goto LAB_109dc3d84;
            bVar9 = true;
            goto LAB_109dc3a6c;
          }
          FUN_109dd98f8(param_1,ppppppplVar3[1][1],&pppppplStack_c0,0,0);
          ppppppplVar3 = param_1;
        }
        else {
LAB_109dc3bfc:
          pppppplStack_c0 = (long ******)&UNK_10f5fc774;
          uStack_a0 = 0x103;
          ppppppplVar3 = param_1;
          (*(code *)(*param_1)[5])();
          FUN_109dd98f8(param_1,ppppppplVar3[0xc],&pppppplStack_c0,0,0);
          ppppppplVar3 = param_1;
        }
      }
      else {
        FUN_109dd98f8(param_1,ppppppplVar3[1][1],&pppppplStack_c0,0,0);
        ppppppplVar3 = param_1;
      }
LAB_109dc3d84:
      param_1 = (long *******)0x1;
      goto LAB_109dc3d88;
    }
    pppppplStack_c0 = (long ******)&UNK_10f5fc748;
    uStack_a0 = 0x103;
    ppppppplVar3 = param_1;
    (*(code *)(*param_1)[5])();
    if (ppppplVar6 == (long *****)0xffffffffffffffff) {
      FUN_109dd98f8(param_1,ppppppplVar3[1][1],&pppppplStack_c0,0,0);
      ppppppplVar3 = param_1;
    }
    else {
      ppppppplVar3 = param_1;
      (*(code *)(*param_1)[0x1a])(param_1,&ppppppplStack_138);
      if (((ulong)ppppppplVar3 & 1) == 0) {
        ppppppplStack_180 = ppppppplStack_138;
        if (-1 < (long)uStack_128._7_1_) {
          ppppppplStack_180 = (long *******)&ppppppplStack_138;
        }
        lStack_188 = lStack_130;
        if (-1 < uStack_128) {
          lStack_188 = (long)uStack_128._7_1_;
        }
        ppppppplStack_198 = ppppppplStack_120;
        if (-1 < (long)uStack_110._7_1_) {
          ppppppplStack_198 = (long *******)&ppppppplStack_120;
        }
        lStack_190 = lStack_118;
        if (-1 < uStack_110) {
          lStack_190 = (long)uStack_110._7_1_;
        }
        goto LAB_109dc3a44;
      }
    }
    param_1 = (long *******)0x1;
    goto LAB_109dc3d98;
  }
  param_1 = (long *******)0x1;
  goto LAB_109dc3da8;
LAB_109dc3c34:
  if (ppppplVar6 == (long *****)0xffffffffffffffff) {
    ppppppplVar3 = param_1;
    (*(code *)(*param_1)[6])();
    if (*(char *)((long)ppppppplVar3[0x12] + 0x16c) == '\x01') {
      (*(code *)(*param_1)[7])();
      (*(code *)(*param_1)[0x51])();
      ppppppplVar3 = param_1;
    }
LAB_109dc408c:
    param_1 = (long *******)0x0;
  }
  else {
    pppppplVar4 = param_1[0x1b];
    uStack_1a8 = extraout_var;
    if (*(char *)((long)pppppplVar4 + 0x641) == '\x01') {
      uStack_e8 = (long *******)((ulong)uStack_e8 & 0xffffffff00000000);
      pppppplStack_c0 = (long ******)&uStack_e8;
      pppppplVar4 = pppppplVar4 + 0xc3;
      FUN_109dab138(pppppplVar4,&uStack_e8,&UNK_10dd5b8f9,&pppppplStack_c0,&ppppppplStack_178);
      uVar10 = FUN_109dcd050(pppppplVar4 + 5);
      pppppplVar4 = param_1[0x1b];
      *(undefined1 *)((long)pppppplVar4 + 0x641) = 0;
      uStack_1a8 = extraout_var_00;
    }
    if (!bVar9) {
      uVar13 = 0;
      uStack_1b0 = uVar10;
    }
    else {
      auVar14._8_8_ = uStack_140;
      auVar14._0_8_ = uStack_140;
      auVar11._8_8_ = uStack_148;
      auVar11._0_8_ = uStack_148;
      auVar16 = NEON_ushl(auVar14,_UNK_10e05a470,8);
      auVar19 = NEON_ushl(auVar14,_UNK_10e05a480,8);
      auVar20 = NEON_ushl(auVar14,_UNK_10e05a490,8);
      auVar14 = NEON_ushl(auVar14,_UNK_10e05a4a0,8);
      uVar13 = auVar19[0];
      auVar15 = NEON_ushl(auVar11,_UNK_10e05a470,8);
      auVar17 = NEON_ushl(auVar11,_UNK_10e05a480,8);
      auVar18 = NEON_ushl(auVar11,_UNK_10e05a490,8);
      auVar11 = NEON_ushl(auVar11,_UNK_10e05a4a0,8);
      auVar12._0_8_ =
           CONCAT26(auVar15._8_2_,CONCAT24(auVar15._0_2_,CONCAT22(auVar17._8_2_,auVar17._0_2_)));
      auVar12._8_2_ = auVar11._0_2_;
      auVar12._10_2_ = auVar11._8_2_;
      auVar12._12_2_ = auVar18._0_2_;
      auVar12._14_2_ = auVar18._8_2_;
      unaff_d8 = CONCAT17(auVar18[8],
                          CONCAT16(auVar18[0],
                                   CONCAT15(auVar11[8],
                                            CONCAT14(auVar11[0],
                                                     CONCAT13(auVar15[8],
                                                              CONCAT12(auVar15[0],
                                                                       CONCAT11(auVar17[8],
                                                                                auVar17[0])))))));
      uStack_1a8 = auVar12._8_8_;
      uStack_1b0 = NEON_ext(CONCAT17(auVar20[8],
                                     CONCAT16(auVar20[0],
                                              CONCAT15(auVar14[8],
                                                       CONCAT14(auVar14[0],
                                                                CONCAT13(auVar16[8],
                                                                         CONCAT12(auVar16[0],
                                                                                  CONCAT11(auVar19[8
                                                  ],uVar13))))))),auVar12._0_8_,1,1);
    }
    bVar9 = bVar9;
    if (bVar8) {
      uVar7 = uStack_158;
      if (-1 < (long)uStack_150) {
        uVar7 = uStack_150 >> 0x38;
      }
      pppppplVar4 = pppppplVar4 + 0x17;
      FUN_109d34148(pppppplVar4,uVar7 & 0xffffffff,3);
      _memcpy();
      if ((long)uStack_150._7_1_ < 0) {
        auStack_b0[0] = 1;
        uVar7 = uStack_158;
      }
      else {
        auStack_b0[0] = 1;
        uVar7 = (long)uStack_150._7_1_;
      }
    }
    else {
      auStack_b0[0] = 0;
      pppppplVar4 = (long ******)0x0;
    }
    uStack_e0 = unaff_d8;
    uStack_d8 = bVar9;
    uStack_b8 = uVar7;
    if (ppppplVar6 == (long *****)0x0) {
      if (*(ushort *)(param_1[0x1b] + 0xd6) < 5) {
        *(undefined2 *)(param_1[0x1b] + 0xd6) = 5;
      }
      ppppppplVar3 = param_1;
      (*(code *)(*param_1)[7])();
      uStack_e8._0_5_ = CONCAT41((int)uStack_1b0,uVar13);
      uStack_e8._0_7_ = CONCAT25((short)((ulong)uStack_1b0 >> 0x20),(undefined5)uStack_e8);
      uStack_e8 = (long *******)CONCAT17((char)((ulong)uStack_1b0 >> 0x30),(undefined7)uStack_e8);
      pppppplStack_c0 = pppppplVar4;
      (*(code *)(*ppppppplVar3)[0x55])();
LAB_109dc4074:
      ppppppplVar5 = ppppppplStack_1a0;
      if ((*(byte *)((long)param_1 + 0x31e) & 1) == 0) {
        ppppppplVar3 = (long *******)param_1[0x1b];
        FUN_109dcd000();
        if (((ulong)ppppppplVar3 & 1) == 0) {
          *(undefined1 *)((long)param_1 + 0x31e) = 1;
          pppppplStack_c0 = (long ******)&UNK_10f5fc7ea;
          uStack_a0 = 0x103;
          (*(code *)(*param_1)[0x15])(param_1,ppppppplVar5,&pppppplStack_c0,0,0);
          ppppppplVar3 = param_1;
          goto LAB_109dc3d88;
        }
      }
      goto LAB_109dc408c;
    }
    ppppppplVar3 = param_1;
    (*(code *)(*param_1)[7])();
    uStack_e8._0_5_ = CONCAT41((int)uStack_1b0,uVar13);
    uStack_e8._0_7_ = CONCAT25((short)((ulong)uStack_1b0 >> 0x20),(undefined5)uStack_e8);
    uStack_e8 = (long *******)CONCAT17((char)((ulong)uStack_1b0 >> 0x30),(undefined7)uStack_e8);
    uStack_1c0 = 0;
    pppppplStack_c0 = pppppplVar4;
    (*(code *)(*ppppppplVar3)[0x54])(&ppppppplStack_f8);
    if ((bStack_f0 & 1) == 0) goto LAB_109dc4074;
    ppppppplStack_100 = ppppppplStack_f8;
    ppppppplStack_f8 = (long *******)0x0;
    pppppplStack_108 = (long ******)&pppppplStack_c0;
    pppppplStack_c0 = (long ******)auStack_b0;
    uStack_b8 = 0x200000000;
    FUN_109d39128(&ppppppplStack_100,&pppppplStack_108);
    if (ppppppplStack_100 != (long *******)0x0) {
      (*(code *)(*ppppppplStack_100)[1])();
    }
    ppppppplVar5 = (long *******)&ppppppplStack_178;
    FUN_109d39d34(&ppppppplStack_178,pppppplStack_c0,pppppplStack_c0 + (uStack_b8 & 0xffffffff) * 3,
                  &DAT_10f68f57e,1);
    FUN_109d39e4c(&pppppplStack_c0);
    uStack_c8 = 0x104;
    uStack_e8 = ppppppplVar5;
    FUN_109dd98f8(param_1,ppppppplStack_1a0,&uStack_e8,0,0);
    ppppppplVar3 = param_1;
    if (cStack_161 < '\0') {
      ppppppplVar3 = ppppppplStack_178;
      __ZdlPv();
    }
    ppppppplVar2 = ppppppplStack_f8;
    if (((bStack_f0 & 1) != 0) &&
       (ppppppplStack_f8 = (long *******)0x0, ppppppplVar3 = ppppppplVar2,
       ppppppplVar2 != (long *******)0x0)) {
      (*(code *)(*ppppppplVar2)[1])();
      ppppppplVar3 = ppppppplVar2;
    }
  }
LAB_109dc3d88:
  param_2 = ppppppplVar5;
  if ((long)uStack_150 < 0) {
    ppppppplVar3 = ppppppplStack_160;
    __ZdlPv();
  }
LAB_109dc3d98:
  if (uStack_128 < 0) {
    ppppppplVar3 = ppppppplStack_138;
    __ZdlPv();
  }
LAB_109dc3da8:
  if (uStack_110 < 0) {
    ppppppplVar3 = ppppppplStack_120;
    __ZdlPv();
  }
LAB_109dc3db8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return param_1;
  }
  ___stack_chk_fail();
  if ((long)uStack_150 < 0) {
    __ZdlPv(ppppppplStack_160);
  }
  if (uStack_128 < 0) {
    __ZdlPv(ppppppplStack_138);
  }
  if (uStack_110 < 0) {
    __ZdlPv(ppppppplStack_120);
  }
  ppppppplVar5 = ppppppplVar3;
  __Unwind_Resume();
  pcStack_1c8 = FUN_109dc41d4;
  ppppppplVar2 = ppppppplVar5;
  ppppppplStack_1e0 = param_2;
  ppppppplStack_1d8 = ppppppplVar3;
  puStack_1d0 = &stack0xfffffffffffffff0;
  (*(code *)(*ppppppplVar5)[5])();
  if (*(int *)ppppppplVar2[1] == 4) {
    apuStack_210[0] = &UNK_10f5fc80c;
    uStack_1f0 = 0x103;
    ppppppplVar3 = ppppppplVar5;
    func_0x000109dd9b2c(ppppppplVar5,auStack_1e8,apuStack_210);
    if (((ulong)ppppppplVar3 & 1) != 0) {
      return (long *******)0x1;
    }
  }
  FUN_109dd9860(ppppppplVar5);
                    /* WARNING: Read-only address (ram,0x00010e05a470) is written */
                    /* WARNING: Read-only address (ram,0x00010e05a480) is written */
                    /* WARNING: Read-only address (ram,0x00010e05a490) is written */
                    /* WARNING: Read-only address (ram,0x00010e05a4a0) is written */
  return ppppppplVar5;
}



/* Entry: 109dc41d4; end: 109dc424b;  */

void FUN_109dc41d4(long *param_1)

{
  long *plVar1;
  undefined *apuStack_50 [4];
  undefined2 uStack_30;
  undefined1 auStack_28 [8];
  
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x28))();
  if (*(int *)plVar1[1] == 4) {
    apuStack_50[0] = &UNK_10f5fc80c;
    uStack_30 = 0x103;
    plVar1 = param_1;
    func_0x000109dd9b2c(param_1,auStack_28,apuStack_50);
    if (((ulong)plVar1 & 1) != 0) {
      return;
    }
  }
  FUN_109dd9860(param_1);
  return;
}



/* Entry: 109dc424c; end: 109dc44df;  */

long * FUN_109dc424c(long *param_1)

{
  long *plVar1;
  long **pplVar2;
  long *plVar3;
  long lVar4;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined2 uStack_a0;
  long *aplStack_98 [4];
  undefined2 uStack_78;
  long *plStack_70;
  undefined8 *puStack_68;
  undefined4 *puStack_60;
  long **pplStack_58;
  undefined2 uStack_50;
  long lStack_48;
  
  lStack_48 = 0;
  plVar3 = param_1;
  (**(code **)(*param_1 + 0x28))();
  lVar4 = *(long *)(plVar3[1] + 8);
  plStack_70 = (long *)&UNK_10f5fc832;
  uStack_50 = 0x103;
  plVar3 = param_1;
  func_0x000109dd9b2c(param_1,&lStack_48,&plStack_70);
  if (((ulong)plVar3 & 1) != 0) {
    return (long *)0x1;
  }
  if (lStack_48 < 1) {
    aplStack_98[0] = (long *)&UNK_10f5fc857;
    uStack_78 = 0x103;
    if (*(ushort *)(param_1[0x1b] + 0x6b0) < 5) {
      pplVar2 = aplStack_98;
      goto LAB_109dc4380;
    }
  }
  plVar3 = param_1;
  (**(code **)(*param_1 + 0x30))();
  FUN_109daa964();
  uStack_c0 = (long *)&UNK_10f5fc885;
  uStack_a0 = 0x103;
  if (((ulong)plVar3 & 1) == 0) {
    pplVar2 = (long **)&uStack_c0;
    goto LAB_109dc4380;
  }
  plVar3 = param_1;
  (**(code **)(*param_1 + 0x28))();
  if (*(int *)plVar3[1] == 4) {
    plVar1 = param_1;
    (**(code **)(*param_1 + 0x28))();
    plVar3 = (long *)(plVar1[1] + 0x18);
    if (0x40 < *(uint *)(plVar1[1] + 0x20)) {
      plVar3 = (long *)*plVar3;
    }
    if (-1 < *plVar3) {
      (**(code **)(*param_1 + 0xb8))(param_1);
      goto LAB_109dc43b0;
    }
    plStack_70 = (long *)&UNK_10f5fc8b0;
  }
  else {
LAB_109dc43b0:
    plVar3 = param_1;
    (**(code **)(*param_1 + 0x28))();
    if (*(int *)plVar3[1] != 4) {
LAB_109dc4414:
      plVar3 = param_1;
      (**(code **)(*param_1 + 0x30))();
      uStack_c4 = 0;
      uStack_c0 = (long *)(CONCAT44(uStack_c0._4_4_,(uint)*(byte *)((long)plVar3 + 0x63a)) &
                          0xffffffff00000001);
      aplStack_98[0] = (long *)0x0;
      puStack_68 = &uStack_c0;
      puStack_60 = &uStack_c4;
      pplStack_58 = aplStack_98;
      plVar3 = param_1;
      plStack_70 = param_1;
      FUN_109dd9d40(param_1,0x109dcd150,&plStack_70,0);
      if (((ulong)plVar3 & 1) == 0) {
        (**(code **)(*param_1 + 0x38))();
        (**(code **)(*param_1 + 0x2c0))();
        return plVar3;
      }
      return plVar3;
    }
    plVar1 = param_1;
    (**(code **)(*param_1 + 0x28))();
    plVar3 = (long *)(plVar1[1] + 0x18);
    if (0x40 < *(uint *)(plVar1[1] + 0x20)) {
      plVar3 = (long *)*plVar3;
    }
    if (-1 < *plVar3) {
      (**(code **)(*param_1 + 0xb8))(param_1);
      goto LAB_109dc4414;
    }
    plStack_70 = (long *)&UNK_10f5fc8df;
  }
  uStack_50 = 0x103;
  plVar3 = param_1;
  (**(code **)(*param_1 + 0x28))();
  lVar4 = plVar3[0xc];
  pplVar2 = &plStack_70;
LAB_109dc4380:
  FUN_109dd98f8(param_1,lVar4,pplVar2,0,0);
  return (long *)0x1;
}



/* Entry: 109dc44e0; end: 109dc4953;  */

/* WARNING: Removing unreachable block (ram,0x000109dc47e4) */

long * FUN_109dc44e0(long *param_1)

{
  byte ****ppppbVar1;
  byte ****ppppbVar2;
  ulong uVar3;
  int iVar4;
  long *plVar5;
  byte ****ppppbVar6;
  byte *pbVar7;
  undefined8 uVar8;
  ulong uVar9;
  byte ****ppppbVar10;
  undefined *apuStack_120 [4];
  undefined2 uStack_100;
  undefined *apuStack_f8 [4];
  undefined2 uStack_d8;
  byte ***pppbStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  undefined2 uStack_b0;
  undefined8 uStack_a8;
  byte ***pppbStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  plVar5 = param_1;
  (**(code **)(*param_1 + 0x28))();
  uVar8 = *(undefined8 *)(plVar5[1] + 8);
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  pppbStack_a0 = (byte ***)0x0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  pppbStack_d0 = (byte ***)&UNK_10f5fc9dd;
  uStack_b0 = 0x103;
  plVar5 = param_1;
  func_0x000109dd9b2c(param_1,&lStack_68,&pppbStack_d0);
  if (((ulong)plVar5 & 1) == 0) {
    apuStack_f8[0] = &UNK_10f5fca0a;
    uStack_d8 = 0x103;
    if (lStack_68 < 1) {
      FUN_109dd98f8(param_1,uVar8,apuStack_f8,0,0);
    }
    else {
      plVar5 = param_1;
      (**(code **)(*param_1 + 0x28))();
      iVar4 = *(int *)plVar5[1];
      apuStack_120[0] = &UNK_10f5fca24;
      uStack_100 = 0x103;
      plVar5 = param_1;
      (**(code **)(*param_1 + 0x28))();
      if (iVar4 == 3) {
        plVar5 = param_1;
        (**(code **)(*param_1 + 0xd0))(param_1,&uStack_80);
        if (((ulong)plVar5 & 1) == 0) {
          plVar5 = param_1;
          func_0x000109dd9bd8(param_1,9);
          if (((ulong)plVar5 & 1) != 0) {
LAB_109dc45e0:
            uVar3 = uStack_90;
            ppppbVar2 = (byte ****)pppbStack_a0;
            ppppbVar10 = (byte ****)pppbStack_a0;
            if (-1 < (long)uStack_90._7_1_) {
              ppppbVar10 = &pppbStack_a0;
            }
            uVar9 = uStack_98;
            if (-1 < (long)uStack_90) {
              uVar9 = (long)uStack_90._7_1_;
            }
            uStack_c8 = 0;
            uStack_c0 = 0;
            pppbStack_d0 = (byte ***)0x0;
            if (uVar9 != 0) {
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
                        (&pppbStack_d0,uVar9 + 1 >> 1,0);
              ppppbVar6 = (byte ****)pppbStack_d0;
              if (-1 < (long)uStack_c0) {
                ppppbVar6 = &pppbStack_d0;
              }
              if ((uVar9 & 1) != 0) {
                if (*(short *)(&UNK_10e0431c0 + (ulong)*(byte *)ppppbVar10 * 2) == -1)
                goto LAB_109dc46c0;
                ppppbVar1 = (byte ****)pppbStack_d0;
                if (-1 < (long)uStack_c0) {
                  ppppbVar1 = &pppbStack_d0;
                }
                *(byte *)ppppbVar6 =
                     (byte)*(short *)(&UNK_10e0431c0 + (ulong)*(byte *)ppppbVar10 * 2);
                ppppbVar6 = (byte ****)((long)ppppbVar1 + 1);
                if (-1 < (long)uVar3) {
                  ppppbVar2 = &pppbStack_a0;
                }
                ppppbVar10 = (byte ****)((long)ppppbVar2 + 1);
                uVar9 = uVar9 - 1;
              }
              if (1 < uVar9) {
                uVar9 = uVar9 >> 1;
                pbVar7 = (byte *)((long)ppppbVar10 + 1);
                do {
                  if (*(short *)(&UNK_10e0431c0 + (ulong)pbVar7[-1] * 2) == -1 ||
                      *(short *)(&UNK_10e0431c0 + (ulong)*pbVar7 * 2) == -1) break;
                  *(byte *)ppppbVar6 =
                       (byte)*(short *)(&UNK_10e0431c0 + (ulong)*pbVar7 * 2) |
                       (char)*(short *)(&UNK_10e0431c0 + (ulong)pbVar7[-1] * 2) << 4;
                  uVar9 = uVar9 - 1;
                  ppppbVar6 = (byte ****)((long)ppppbVar6 + 1);
                  pbVar7 = pbVar7 + 2;
                } while (uVar9 != 0);
              }
            }
LAB_109dc46c0:
            if ((long)uStack_90 < 0) {
              __ZdlPv(pppbStack_a0);
            }
            uStack_90 = uStack_c0;
            uStack_98 = uStack_c8;
            pppbStack_a0 = pppbStack_d0;
            uVar3 = uStack_c8;
            if (-1 < (long)uStack_c0) {
              uVar3 = uStack_c0 >> 0x38;
            }
            FUN_109d34148(param_1[0x1b] + 0xb8,uVar3 & 0xffffffff,0);
            _memcpy();
            plVar5 = param_1;
            (**(code **)(*param_1 + 0x38))();
            (**(code **)(*plVar5 + 0x2c8))();
            if (((ulong)plVar5 & 1) == 0) {
              pppbStack_d0 = (byte ***)&UNK_10f5fa800;
              uStack_b0 = 0x103;
              FUN_109dd98f8(param_1,uVar8,&pppbStack_d0,0,0);
            }
            else {
              param_1 = (long *)0x0;
            }
            goto LAB_109dc47cc;
          }
          plVar5 = param_1;
          (**(code **)(*param_1 + 0x28))();
          iVar4 = *(int *)plVar5[1];
          pppbStack_d0 = (byte ***)&UNK_10f5fca24;
          uStack_b0 = 0x103;
          plVar5 = param_1;
          (**(code **)(*param_1 + 0x28))();
          if (iVar4 == 3) {
            plVar5 = param_1;
            (**(code **)(*param_1 + 0xd0))(param_1,&pppbStack_a0);
            if (((ulong)plVar5 & 1) == 0) {
              apuStack_f8[0] = &UNK_10f5fca4d;
              uStack_d8 = 0x103;
              plVar5 = param_1;
              func_0x000109dd9b2c(param_1,&uStack_a8,apuStack_f8);
              if ((((ulong)plVar5 & 1) == 0) &&
                 (plVar5 = param_1, FUN_109dd9860(), ((ulong)plVar5 & 1) == 0)) goto LAB_109dc45e0;
            }
          }
          else {
            FUN_109dd98f8(param_1,*(undefined8 *)(plVar5[1] + 8),&pppbStack_d0,0,0);
          }
        }
      }
      else {
        FUN_109dd98f8(param_1,*(undefined8 *)(plVar5[1] + 8),apuStack_120,0,0);
      }
    }
  }
  param_1 = (long *)0x1;
LAB_109dc47cc:
  if ((long)uStack_90 < 0) {
    __ZdlPv(pppbStack_a0);
  }
  return param_1;
}



/* Entry: 109dc4954; end: 109dc4a13;  */

void FUN_109dc4954(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined *apuStack_50 [4];
  undefined2 uStack_30;
  undefined1 auStack_28 [8];
  
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x28))();
  uVar2 = *(undefined8 *)(plVar1[1] + 8);
  plVar1 = param_1;
  FUN_109dcd4c0(param_1,auStack_28,&UNK_10f5fb98e,0xb);
  if ((((ulong)plVar1 & 1) == 0) && (plVar1 = param_1, FUN_109dd9860(), ((ulong)plVar1 & 1) == 0)) {
    plVar1 = param_1;
    (**(code **)(*param_1 + 0x38))();
    (**(code **)(*plVar1 + 0x2d0))();
    if (((ulong)plVar1 & 1) == 0) {
      apuStack_50[0] = &UNK_10f5fca7c;
      uStack_30 = 0x103;
      FUN_109dd98f8(param_1,uVar2,apuStack_50,0,0);
    }
  }
  return;
}



/* Entry: 109dc4a14; end: 109dc4d9b;  */

void FUN_109dc4a14(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  int *piVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined *apuStack_78 [4];
  undefined2 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  plVar5 = param_1;
  (**(code **)(*param_1 + 0x28))();
  uVar11 = *(undefined8 *)(plVar5[1] + 8);
  plVar5 = param_1;
  FUN_109dcd4c0(param_1,auStack_38,&UNK_10f5fb9c5,0x12);
  if (((ulong)plVar5 & 1) != 0) {
    return;
  }
  plVar5 = param_1;
  (**(code **)(*param_1 + 0x28))();
  if (*(int *)plVar5[1] == 2) {
    plVar5 = param_1;
    (**(code **)(*param_1 + 0x28))();
    piVar7 = (int *)plVar5[1];
    if (*piVar7 == 2) {
      piVar6 = *(int **)(piVar7 + 2);
      lVar8 = *(long *)(piVar7 + 4);
    }
    else {
      piVar6 = *(int **)(piVar7 + 2);
      lVar8 = *(long *)(piVar7 + 4);
      uVar10 = (ulong)(lVar8 != 0);
      if (lVar8 != 0) {
        piVar6 = (int *)((long)piVar6 + 1);
      }
      uVar1 = uVar10;
      if (uVar10 <= lVar8 - 1U) {
        uVar1 = lVar8 - 1U;
      }
      uVar2 = 0;
      if (lVar8 != 0) {
        uVar2 = uVar1;
      }
      lVar8 = uVar2 - uVar10;
    }
    if (lVar8 != 6) goto LAB_109dc4b8c;
    iVar3 = *piVar6;
    iVar4 = piVar6[1];
    apuStack_78[0] = &UNK_10f5fcae4;
    uStack_58 = 0x103;
    plVar5 = param_1;
    (**(code **)(*param_1 + 0x28))();
    if (iVar3 != 0x68746977 || (short)iVar4 != 0x6e69) goto LAB_109dc4bb0;
    (**(code **)(*param_1 + 0xb8))(param_1);
    plVar5 = param_1;
    FUN_109dcd4c0(param_1,auStack_40,&UNK_10f5fb9c5,0x12);
    if (((ulong)plVar5 & 1) != 0) {
      return;
    }
    plVar5 = param_1;
    (**(code **)(*param_1 + 0x28))();
    if (*(int *)plVar5[1] == 2) {
      plVar5 = param_1;
      (**(code **)(*param_1 + 0x28))();
      piVar7 = (int *)plVar5[1];
      if (*piVar7 == 2) {
        plVar5 = *(long **)(piVar7 + 2);
        lVar8 = *(long *)(piVar7 + 4);
      }
      else {
        plVar5 = *(long **)(piVar7 + 2);
        lVar8 = *(long *)(piVar7 + 4);
        uVar10 = (ulong)(lVar8 != 0);
        if (lVar8 != 0) {
          plVar5 = (long *)((long)plVar5 + 1);
        }
        uVar1 = uVar10;
        if (uVar10 <= lVar8 - 1U) {
          uVar1 = lVar8 - 1U;
        }
        uVar2 = 0;
        if (lVar8 != 0) {
          uVar2 = uVar1;
        }
        lVar8 = uVar2 - uVar10;
      }
      if (lVar8 == 10) {
        lVar9 = *plVar5;
        lVar8 = plVar5[1];
        apuStack_78[0] = &UNK_10f5fcb23;
        uStack_58 = 0x103;
        plVar5 = param_1;
        (**(code **)(*param_1 + 0x28))();
        if (lVar9 == 0x5f64656e696c6e69 && (short)lVar8 == 0x7461) {
          (**(code **)(*param_1 + 0xb8))(param_1);
          plVar5 = param_1;
          FUN_109dcd5a4(param_1,auStack_48,&UNK_10f5fb9c5,0x12);
          if (((ulong)plVar5 & 1) != 0) {
            return;
          }
          apuStack_78[0] = &UNK_10f5fcb66;
          uStack_58 = 0x103;
          plVar5 = param_1;
          func_0x000109dd9b2c(param_1,auStack_50,apuStack_78);
          if (((ulong)plVar5 & 1) != 0) {
            return;
          }
          plVar5 = param_1;
          (**(code **)(*param_1 + 0x28))();
          if (*(int *)plVar5[1] == 4) {
            (**(code **)(*param_1 + 0x28))();
            (**(code **)(*param_1 + 0xb8))(param_1);
          }
          plVar5 = param_1;
          FUN_109dd9860();
          if (((ulong)plVar5 & 1) != 0) {
            return;
          }
          plVar5 = param_1;
          (**(code **)(*param_1 + 0x38))();
          (**(code **)(*plVar5 + 0x2d8))();
          if (((ulong)plVar5 & 1) != 0) {
            return;
          }
          apuStack_78[0] = &UNK_10f5fca7c;
          uStack_58 = 0x103;
          FUN_109dd98f8(param_1,uVar11,apuStack_78,0,0);
          return;
        }
        goto LAB_109dc4bb0;
      }
    }
    apuStack_78[0] = &UNK_10f5fcb23;
  }
  else {
LAB_109dc4b8c:
    apuStack_78[0] = &UNK_10f5fcae4;
  }
  uStack_58 = 0x103;
  plVar5 = param_1;
  (**(code **)(*param_1 + 0x28))();
LAB_109dc4bb0:
  FUN_109dd98f8(param_1,*(undefined8 *)(plVar5[1] + 8),apuStack_78,0,0);
  return;
}



/* Entry: 109dc4d9c; end: 109dc5183;  */

long * FUN_109dc4d9c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 uStack_88;
  undefined1 uStack_79;
  long *plStack_78;
  undefined1 *puStack_70;
  undefined8 *puStack_68;
  undefined2 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  (**(code **)(*param_1 + 0x28))();
  plVar2 = param_1;
  FUN_109dcd4c0(param_1,auStack_48,&UNK_10f5fb99a,7);
  if (((ulong)plVar2 & 1) != 0) {
    return (long *)0x1;
  }
  plVar2 = param_1;
  FUN_109dcd5a4(param_1,auStack_50,&UNK_10f5fb99a,7);
  if (((ulong)plVar2 & 1) != 0) {
    return (long *)0x1;
  }
  plVar2 = param_1;
  (**(code **)(*param_1 + 0x28))();
  if (*(int *)plVar2[1] == 4) {
    plVar1 = param_1;
    (**(code **)(*param_1 + 0x28))();
    plVar2 = (long *)(plVar1[1] + 0x18);
    if (0x40 < *(uint *)(plVar1[1] + 0x20)) {
      plVar2 = (long *)*plVar2;
    }
    if (*plVar2 < 0) {
      plStack_78 = (long *)&UNK_10f5fcbdf;
      goto LAB_109dc4f60;
    }
    (**(code **)(*param_1 + 0xb8))(param_1);
  }
  plVar2 = param_1;
  (**(code **)(*param_1 + 0x28))();
  if (*(int *)plVar2[1] == 4) {
    plVar1 = param_1;
    (**(code **)(*param_1 + 0x28))();
    plVar2 = (long *)(plVar1[1] + 0x18);
    if (0x40 < *(uint *)(plVar1[1] + 0x20)) {
      plVar2 = (long *)*plVar2;
    }
    if (*plVar2 < 0) {
      plStack_78 = (long *)&UNK_10f5fcc11;
LAB_109dc4f60:
      uStack_58 = 0x103;
      plVar2 = param_1;
      (**(code **)(*param_1 + 0x28))();
      FUN_109dd98f8(param_1,plVar2[0xc],&plStack_78,0,0);
      return (long *)0x1;
    }
    (**(code **)(*param_1 + 0xb8))(param_1);
  }
  uStack_79 = 0;
  uStack_88 = 0;
  puStack_70 = &uStack_79;
  puStack_68 = &uStack_88;
  plVar2 = param_1;
  plStack_78 = param_1;
  FUN_109dd9d40(param_1,FUN_109dcd710,&plStack_78,0);
  if (((ulong)plVar2 & 1) == 0) {
    (**(code **)(*param_1 + 0x38))();
    (**(code **)(*param_1 + 0x2e0))();
    return plVar2;
  }
  return plVar2;
}



/* Entry: 109dc5184; end: 109dc53eb;  */

undefined8 FUN_109dc5184(long *param_1)

{
  long *plVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *apuStack_178 [4];
  undefined2 uStack_158;
  undefined *apuStack_150 [4];
  undefined2 uStack_130;
  undefined *apuStack_128 [4];
  undefined2 uStack_108;
  undefined *apuStack_100 [4];
  undefined2 uStack_e0;
  undefined *apuStack_d8 [4];
  undefined2 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined2 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [8];
  
  puStack_78 = (undefined *)0x0;
  uStack_70 = 0;
  puStack_88 = (undefined *)0x0;
  uStack_80 = 0;
  (**(code **)(*param_1 + 0x28))();
  plVar1 = param_1;
  FUN_109dcd4c0(param_1,auStack_58,&UNK_10f5fb9b0,0x14);
  if (((ulong)plVar1 & 1) == 0) {
    plVar1 = param_1;
    (**(code **)(*param_1 + 0x28))();
    uVar3 = *(undefined8 *)(plVar1[1] + 8);
    puStack_b0 = &UNK_10f5fcc9c;
    uStack_90 = 0x103;
    plVar1 = param_1;
    func_0x000109dd9b2c(param_1,&lStack_60,&puStack_b0);
    if (((ulong)plVar1 & 1) == 0) {
      apuStack_d8[0] = &UNK_10f5fccd5;
      uStack_b8 = 0x103;
      if (lStack_60 < 1) {
        ppuVar2 = apuStack_d8;
      }
      else {
        plVar1 = param_1;
        (**(code **)(*param_1 + 0x28))();
        uVar3 = *(undefined8 *)(plVar1[1] + 8);
        apuStack_100[0] = &UNK_10f5fcd10;
        uStack_e0 = 0x103;
        plVar1 = param_1;
        func_0x000109dd9b2c(param_1,&lStack_68,apuStack_100);
        if (((ulong)plVar1 & 1) != 0) {
          return 1;
        }
        apuStack_128[0] = &UNK_10f5fcd4b;
        uStack_108 = 0x103;
        if (lStack_68 < 0) {
          ppuVar2 = apuStack_128;
        }
        else {
          plVar1 = param_1;
          (**(code **)(*param_1 + 0x28))();
          uVar3 = *(undefined8 *)(plVar1[1] + 8);
          plVar1 = param_1;
          (**(code **)(*param_1 + 0xc0))(param_1,&puStack_78);
          apuStack_150[0] = &UNK_10f5fc428;
          uStack_130 = 0x103;
          if (((ulong)plVar1 & 1) == 0) {
            plVar1 = param_1;
            (**(code **)(*param_1 + 0x28))();
            uVar3 = *(undefined8 *)(plVar1[1] + 8);
            plVar1 = param_1;
            (**(code **)(*param_1 + 0xc0))(param_1,&puStack_88);
            apuStack_178[0] = &UNK_10f5fc428;
            uStack_158 = 0x103;
            if ((int)plVar1 == 0) {
              plVar1 = param_1;
              FUN_109dd9860();
              if (((ulong)plVar1 & 1) != 0) {
                return 1;
              }
              (**(code **)(*param_1 + 0x30))(param_1);
              uStack_90 = 0x105;
              puStack_b0 = puStack_78;
              uStack_a8 = uStack_70;
              FUN_109da7538();
              (**(code **)(*param_1 + 0x30))(param_1);
              uStack_90 = 0x105;
              puStack_b0 = puStack_88;
              uStack_a8 = uStack_80;
              FUN_109da7538();
              (**(code **)(*param_1 + 0x38))();
              (**(code **)(*param_1 + 0x2f0))();
              return 0;
            }
            ppuVar2 = apuStack_178;
          }
          else {
            ppuVar2 = apuStack_150;
          }
        }
      }
      FUN_109dd98f8(param_1,uVar3,ppuVar2,0,0);
    }
  }
  return 1;
}



/* Entry: 109dc53ec; end: 109dc5baf;  */

long * FUN_109dc53ec(long *param_1)

{
  ulong uVar1;
  code *pcVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong *puVar8;
  long lVar9;
  ulong *puVar10;
  long lVar11;
  ulong *puVar12;
  ulong *puVar13;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined2 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  puVar13 = (ulong *)0x0;
  lVar9 = 0;
  puVar10 = (ulong *)0x0;
  puVar12 = (ulong *)0x0;
  while (puVar8 = puVar10, plVar4 = param_1, (**(code **)(*param_1 + 0x28))(),
        *(int *)plVar4[1] == 2) {
    plVar4 = param_1;
    (**(code **)(*param_1 + 0x28))();
    lVar9 = plVar4[0xc];
    puStack_70 = (undefined *)0x0;
    uStack_68 = 0;
    plVar4 = param_1;
    (**(code **)(*param_1 + 0xc0))(param_1,&puStack_70);
    if ((int)plVar4 != 0) {
      puStack_98 = &UNK_10f5fc428;
      uStack_78 = 0x103;
      FUN_109dd98f8(param_1,lVar9,&puStack_98,0,0);
      goto joined_r0x000109dc5654;
    }
    plVar4 = param_1;
    (**(code **)(*param_1 + 0x30))();
    uStack_78 = 0x105;
    puStack_98 = puStack_70;
    uStack_90 = uStack_68;
    FUN_109da7538();
    plVar5 = param_1;
    (**(code **)(*param_1 + 0x28))();
    lVar9 = plVar5[0xc];
    puStack_a8 = (undefined *)0x0;
    uStack_a0 = 0;
    plVar5 = param_1;
    (**(code **)(*param_1 + 0xc0))(param_1,&puStack_a8);
    if ((int)plVar5 != 0) {
      puStack_98 = &UNK_10f5fc428;
      uStack_78 = 0x103;
      FUN_109dd98f8(param_1,lVar9,&puStack_98,0,0);
      goto joined_r0x000109dc5654;
    }
    plVar5 = param_1;
    (**(code **)(*param_1 + 0x30))();
    uStack_78 = 0x105;
    puStack_98 = puStack_a8;
    uStack_90 = uStack_a0;
    FUN_109da7538();
    if (puVar12 < puVar13) {
      *puVar12 = (ulong)plVar4;
      puVar12[1] = (ulong)plVar5;
      puVar10 = puVar8;
      puVar12 = puVar12 + 2;
    }
    else {
      lVar11 = (long)puVar12 - (long)puVar8;
      uVar1 = (lVar11 >> 4) + 1;
      if (uVar1 >> 0x3c != 0) {
        FUN_109dcd8d4();
LAB_109dc5b10:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x109dc5b14);
        (*pcVar2)();
      }
      uVar7 = (long)puVar13 - (long)puVar8 >> 3;
      if (uVar7 <= uVar1) {
        uVar7 = uVar1;
      }
      if (0x7fffffffffffffef < (ulong)((long)puVar13 - (long)puVar8)) {
        uVar7 = 0xfffffffffffffff;
      }
      if (uVar7 >> 0x3c != 0) {
        func_0x000104c4f740();
        goto LAB_109dc5b10;
      }
      lVar6 = uVar7 << 4;
      __Znwm();
      puVar10 = (ulong *)(lVar6 + lVar11);
      puVar13 = (ulong *)(lVar6 + uVar7 * 0x10);
      *puVar10 = (ulong)plVar4;
      puVar10[1] = (ulong)plVar5;
      puVar12 = puVar10 + 2;
      puVar10 = puVar10 + (lVar11 >> 4) * -2;
      _memcpy(puVar10,puVar8,lVar11);
      if (puVar8 != (ulong *)0x0) {
        __ZdlPv(puVar8);
      }
    }
  }
  puStack_70 = (undefined *)0x0;
  uStack_68 = 0;
  puStack_98 = &UNK_10f5fcd8a;
  uStack_78 = 0x103;
  plVar4 = param_1;
  func_0x000109dd9a7c(param_1,0x19,&puStack_98);
  if ((((ulong)plVar4 & 1) != 0) ||
     (plVar4 = param_1, (**(code **)(*param_1 + 0xc0))(param_1,&puStack_70),
     ((ulong)plVar4 & 1) != 0)) {
    puStack_98 = &UNK_10f5fcdca;
    uStack_78 = 0x103;
    FUN_109dd98f8(param_1,lVar9,&puStack_98,0,0);
    goto joined_r0x000109dc5654;
  }
  plVar4 = param_1 + 0x67;
  FUN_109e03610(plVar4,puStack_70,uStack_68);
  iVar3 = (int)plVar4;
  if ((iVar3 == -1) || ((long)iVar3 == (ulong)*(uint *)(param_1 + 0x68))) {
LAB_109dc56a8:
    puStack_98 = &UNK_10f5fcf67;
    uStack_78 = 0x103;
    FUN_109dd98f8(param_1,lVar9,&puStack_98,0,0);
  }
  else {
    iVar3 = *(int *)(*(long *)(param_1[0x67] + (long)iVar3 * 8) + 8);
    if (iVar3 < 3) {
      if (iVar3 == 1) {
        puStack_98 = &UNK_10f5fcdef;
        uStack_78 = 0x103;
        plVar4 = param_1;
        func_0x000109dd9a7c(param_1,0x19,&puStack_98);
        if ((((ulong)plVar4 & 1) != 0) ||
           (plVar4 = param_1, (**(code **)(*param_1 + 0x100))(param_1,&puStack_a8),
           ((ulong)plVar4 & 1) != 0)) {
          puStack_98 = &UNK_10f5fce30;
          uStack_78 = 0x103;
          FUN_109dd98f8(param_1,lVar9,&puStack_98,0,0);
          goto joined_r0x000109dc5654;
        }
        (**(code **)(*param_1 + 0x38))();
        (**(code **)(*param_1 + 0x310))();
      }
      else {
        if (iVar3 != 2) goto LAB_109dc56a8;
        puStack_98 = &UNK_10f5fce49;
        uStack_78 = 0x103;
        plVar4 = param_1;
        func_0x000109dd9a7c(param_1,0x19,&puStack_98);
        if ((((ulong)plVar4 & 1) != 0) ||
           (plVar4 = param_1, (**(code **)(*param_1 + 0x100))(param_1,&puStack_a8),
           ((ulong)plVar4 & 1) != 0)) {
          puStack_98 = &UNK_10f5fce81;
          uStack_78 = 0x103;
          FUN_109dd98f8(param_1,lVar9,&puStack_98,0,0);
          goto joined_r0x000109dc5654;
        }
        (**(code **)(*param_1 + 0x38))();
        (**(code **)(*param_1 + 0x318))();
      }
    }
    else if (iVar3 == 3) {
      puStack_98 = &UNK_10f5fcdef;
      uStack_78 = 0x103;
      plVar4 = param_1;
      func_0x000109dd9a7c(param_1,0x19,&puStack_98);
      if ((((ulong)plVar4 & 1) != 0) ||
         (plVar4 = param_1, (**(code **)(*param_1 + 0x100))(param_1,&puStack_a8),
         ((ulong)plVar4 & 1) != 0)) {
        puStack_98 = &UNK_10f5fce30;
        uStack_78 = 0x103;
        FUN_109dd98f8(param_1,lVar9,&puStack_98,0,0);
        goto joined_r0x000109dc5654;
      }
      puStack_98 = &UNK_10f5fce49;
      uStack_78 = 0x103;
      plVar4 = param_1;
      func_0x000109dd9a7c(param_1,0x19,&puStack_98);
      if ((((ulong)plVar4 & 1) != 0) ||
         (plVar4 = param_1, (**(code **)(*param_1 + 0x100))(param_1,auStack_b0),
         ((ulong)plVar4 & 1) != 0)) {
        puStack_98 = &UNK_10f5fce81;
        uStack_78 = 0x103;
        FUN_109dd98f8(param_1,lVar9,&puStack_98,0,0);
        goto joined_r0x000109dc5654;
      }
      (**(code **)(*param_1 + 0x38))();
      (**(code **)(*param_1 + 0x308))();
    }
    else {
      if (iVar3 != 4) goto LAB_109dc56a8;
      puStack_98 = &UNK_10f5fcdef;
      uStack_78 = 0x103;
      plVar4 = param_1;
      func_0x000109dd9a7c(param_1,0x19,&puStack_98);
      if ((((ulong)plVar4 & 1) != 0) ||
         (plVar4 = param_1, (**(code **)(*param_1 + 0x100))(param_1,&puStack_a8),
         ((ulong)plVar4 & 1) != 0)) {
        puStack_98 = &UNK_10f5fce97;
        uStack_78 = 0x103;
        FUN_109dd98f8(param_1,lVar9,&puStack_98,0,0);
        goto joined_r0x000109dc5654;
      }
      puStack_98 = &UNK_10f5fceaf;
      uStack_78 = 0x103;
      plVar4 = param_1;
      func_0x000109dd9a7c(param_1,0x19,&puStack_98);
      if ((((ulong)plVar4 & 1) != 0) ||
         (plVar4 = param_1, (**(code **)(*param_1 + 0x100))(param_1,auStack_b0),
         ((ulong)plVar4 & 1) != 0)) {
        puStack_98 = &UNK_10f5fceeb;
        uStack_78 = 0x103;
        FUN_109dd98f8(param_1,lVar9,&puStack_98,0,0);
        goto joined_r0x000109dc5654;
      }
      puStack_98 = &UNK_10f5fceff;
      uStack_78 = 0x103;
      plVar4 = param_1;
      func_0x000109dd9a7c(param_1,0x19,&puStack_98);
      if ((((ulong)plVar4 & 1) != 0) ||
         (plVar4 = param_1, (**(code **)(*param_1 + 0x100))(param_1,auStack_b8),
         ((ulong)plVar4 & 1) != 0)) {
        puStack_98 = &UNK_10f5fcf44;
        uStack_78 = 0x103;
        FUN_109dd98f8(param_1,lVar9,&puStack_98,0,0);
        goto joined_r0x000109dc5654;
      }
      (**(code **)(*param_1 + 0x38))();
      (**(code **)(*param_1 + 0x300))();
    }
    param_1 = (long *)0x1;
  }
joined_r0x000109dc5654:
  if (puVar8 != (ulong *)0x0) {
    __ZdlPv(puVar8);
  }
  return param_1;
}



/* Entry: 109dc5bb0; end: 109dc5c93;  */

undefined8 FUN_109dc5bb0(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  uStack_38 = 0;
  uStack_30 = 0;
  lStack_28 = 0;
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x108))();
  if ((((ulong)plVar1 & 1) == 0) &&
     (plVar1 = param_1, (**(code **)(*param_1 + 0xd0))(param_1,&uStack_38), ((ulong)plVar1 & 1) == 0
     )) {
    func_0x000109daa9fc(param_1[0x1b]);
    FUN_109da4f30(auStack_50);
    (**(code **)(*param_1 + 0x38))();
    (**(code **)(*param_1 + 0x1f8))();
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  if (lStack_28 < 0) {
    __ZdlPv(uStack_38);
  }
  return uVar2;
}



/* Entry: 109dc5c94; end: 109dc5d13;  */

undefined8 FUN_109dc5c94(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined *apuStack_50 [4];
  undefined2 uStack_30;
  undefined1 auStack_28 [8];
  
  apuStack_50[0] = &UNK_10f5fc428;
  uStack_30 = 0x103;
  plVar1 = param_1;
  func_0x000109dd9b2c(param_1,auStack_28,apuStack_50);
  if ((((ulong)plVar1 & 1) == 0) && (plVar1 = param_1, FUN_109dd9860(), ((ulong)plVar1 & 1) == 0)) {
    (**(code **)(*param_1 + 0x38))();
    (**(code **)(*param_1 + 0x330))();
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 109dc5d14; end: 109dc5e13;  */

undefined8 FUN_109dc5d14(long *param_1)

{
  long *plVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined2 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  (**(code **)(*param_1 + 0x28))();
  puStack_40 = (undefined *)0x0;
  uStack_38 = 0;
  plVar1 = param_1;
  (**(code **)(*param_1 + 0xc0))(param_1,&puStack_40);
  if ((int)plVar1 == 0) {
    plVar1 = param_1;
    FUN_109dd9860();
    if (((ulong)plVar1 & 1) == 0) {
      (**(code **)(*param_1 + 0x30))(param_1);
      uStack_48 = 0x105;
      puStack_68 = puStack_40;
      uStack_60 = uStack_38;
      FUN_109da7538();
      (**(code **)(*param_1 + 0x38))();
      (**(code **)(*param_1 + 0x338))();
      return 0;
    }
  }
  else {
    puStack_68 = &UNK_10f5fcf9c;
    uStack_48 = 0x103;
    plVar1 = param_1;
    (**(code **)(*param_1 + 0x28))();
    FUN_109dd98f8(param_1,plVar1[0xc],&puStack_68,0,0);
  }
  return 1;
}



/* Entry: 109dc5e14; end: 109dc5fa3;  */

undefined8 FUN_109dc5e14(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long *plStack_98;
  undefined8 uStack_90;
  undefined *apuStack_88 [4];
  undefined2 uStack_68;
  
  plStack_98 = (long *)0x0;
  uStack_90 = 0;
  plVar1 = param_1;
  func_0x000109dd9bd8(param_1,9);
  if (((ulong)plVar1 & 1) == 0) {
    do {
      plVar1 = param_1;
      (**(code **)(*param_1 + 0xc0))(param_1,&plStack_98);
      if ((int)plVar1 != 0) {
        apuStack_88[0] = &UNK_10f5fcfb1;
        uStack_68 = 0x103;
        plVar1 = param_1;
        (**(code **)(*param_1 + 0x28))();
        FUN_109dd98f8(param_1,plVar1[0xc],apuStack_88,0,0);
        break;
      }
      plVar1 = param_1;
      func_0x000109dd9bd8(param_1,9);
      if (((ulong)plVar1 & 1) != 0) goto LAB_109dc5e50;
      apuStack_88[0] = &UNK_10f5aef41;
      uStack_68 = 0x103;
      plVar1 = param_1;
      func_0x000109dd9a7c(param_1,0x19,apuStack_88);
    } while (((ulong)plVar1 & 1) == 0);
    uVar2 = 1;
  }
  else {
LAB_109dc5e50:
    (**(code **)(*param_1 + 0x38))();
    (**(code **)(*param_1 + 0x358))();
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 109dc5fa4; end: 109dc657b;  */

undefined8 FUN_109dc5fa4(long *param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  undefined *apuStack_58 [4];
  undefined2 uStack_38;
  int *piStack_30;
  long lStack_28;
  
  piStack_30 = (int *)0x0;
  lStack_28 = 0;
  plVar3 = param_1;
  func_0x000109dd9bd8(param_1,9);
  if (((ulong)plVar3 & 1) != 0) {
LAB_109dc5fc8:
    (**(code **)(*param_1 + 0x38))(param_1);
    FUN_109ddf7c0();
    return 0;
  }
  plVar3 = param_1;
  (**(code **)(*param_1 + 0xc0))(param_1,&piStack_30);
  plVar4 = param_1;
  if ((((ulong)plVar3 & 1) == 0) && (lStack_28 == 6)) {
    iVar1 = *piStack_30;
    iVar2 = piStack_30[1];
    apuStack_58[0] = &UNK_10f5fcfd4;
    uStack_38 = 0x103;
    (**(code **)(*param_1 + 0x28))();
    if (iVar1 == 0x706d6973 && (short)iVar2 == 0x656c) {
      plVar3 = param_1;
      FUN_109dd9860();
      if (((ulong)plVar3 & 1) != 0) {
        return 1;
      }
      goto LAB_109dc5fc8;
    }
  }
  else {
    apuStack_58[0] = &UNK_10f5fcfd4;
    uStack_38 = 0x103;
    (**(code **)(*param_1 + 0x28))();
  }
  FUN_109dd98f8(param_1,*(undefined8 *)(plVar4[1] + 8),apuStack_58,0,0);
  return 1;
}



/* Entry: 109dc657c; end: 109dc675f;  */

undefined8 FUN_109dc657c(long *param_1,int param_2)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  code *pcVar6;
  ulong uVar7;
  undefined *apuStack_c0 [4];
  undefined2 uStack_a0;
  undefined *apuStack_98 [4];
  undefined2 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined2 uStack_38;
  
  ppuVar5 = apuStack_c0;
  uStack_60 = 0;
  plVar2 = param_1;
  (**(code **)(*param_1 + 0x100))(param_1,&uStack_60);
  if (((ulong)plVar2 & 1) != 0) {
    return 1;
  }
  if (uStack_60 == 0xff) {
    return 0;
  }
  puStack_70 = (undefined *)0x0;
  uStack_68 = 0;
  plVar2 = param_1;
  if ((uStack_60 < 0x100) &&
     (((uStack_60 & 0xd) == 0 ||
      (uVar1 = (uint)uStack_60 & 0xf, uVar1 < 0xd && (1 << (ulong)uVar1 & 0x1d18U) != 0)))) {
    uVar7 = uStack_60 & 0x60;
    apuStack_98[0] = &UNK_10f5fcfe5;
    uStack_78 = 0x103;
    (**(code **)(*param_1 + 0x28))();
    if (uVar7 == 0) {
      puStack_58 = &UNK_10f5aef41;
      uStack_38 = 0x103;
      plVar2 = param_1;
      func_0x000109dd9a7c(param_1,0x19,&puStack_58);
      if (((ulong)plVar2 & 1) != 0) {
        return 1;
      }
      plVar2 = param_1;
      (**(code **)(*param_1 + 0xc0))(param_1,&puStack_70);
      apuStack_c0[0] = &UNK_10f5fc428;
      uStack_a0 = 0x103;
      plVar3 = param_1;
      (**(code **)(*param_1 + 0x28))();
      if ((int)plVar2 == 0) {
        plVar2 = param_1;
        FUN_109dd9860();
        if (((ulong)plVar2 & 1) != 0) {
          return 1;
        }
        (**(code **)(*param_1 + 0x30))(param_1);
        uStack_38 = 0x105;
        puStack_58 = puStack_70;
        uStack_50 = uStack_68;
        FUN_109da7538();
        (**(code **)(*param_1 + 0x38))();
        if (param_2 == 0) {
          pcVar6 = *(code **)(*param_1 + 0x390);
        }
        else {
          pcVar6 = *(code **)(*param_1 + 0x388);
        }
        (*pcVar6)();
        return 0;
      }
      uVar4 = *(undefined8 *)(plVar3[1] + 8);
      goto LAB_109dc66cc;
    }
  }
  else {
    apuStack_98[0] = &UNK_10f5fcfe5;
    uStack_78 = 0x103;
    (**(code **)(*param_1 + 0x28))();
  }
  uVar4 = *(undefined8 *)(plVar2[1] + 8);
  ppuVar5 = apuStack_98;
LAB_109dc66cc:
  FUN_109dd98f8(param_1,uVar4,ppuVar5,0,0);
  return 1;
}



/* Entry: 109dc6760; end: 109dc68cf;  */

long * FUN_109dc6760(long *param_1)

{
  long *plVar1;
  
  plVar1 = param_1;
  FUN_109dd9860();
  if (((ulong)plVar1 & 1) == 0) {
    (**(code **)(*param_1 + 0x38))();
    (**(code **)(*param_1 + 0x398))();
  }
  return plVar1;
}



/* Entry: 109dc68d0; end: 109dc69e7;  */

undefined8 FUN_109dc68d0(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  char acStack_40 [8];
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  uStack_38 = 0;
  uStack_30 = 0;
  lStack_28 = 0;
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x100))(param_1,acStack_40);
  if (((ulong)plVar1 & 1) == 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
              (&uStack_38,(long)acStack_40[0]);
    while( true ) {
      plVar1 = param_1;
      (**(code **)(*param_1 + 0x28))();
      if (*(int *)plVar1[1] != 0x19) break;
      (**(code **)(*param_1 + 0xb8))(param_1);
      plVar1 = param_1;
      (**(code **)(*param_1 + 0x100))(param_1,acStack_40);
      if (((ulong)plVar1 & 1) != 0) goto LAB_109dc6900;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (&uStack_38,(long)acStack_40[0]);
    }
    (**(code **)(*param_1 + 0x38))();
    (**(code **)(*param_1 + 0x3c8))();
    uVar2 = 0;
  }
  else {
LAB_109dc6900:
    uVar2 = 1;
  }
  if (lStack_28 < 0) {
    __ZdlPv(uStack_38);
  }
  return uVar2;
}



/* Entry: 109dc69e8; end: 109dc6c07;  */

undefined8 FUN_109dc69e8(long *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uStack_28;
  
  uStack_28 = 0;
  plVar1 = param_1;
  FUN_109dcd8e8(param_1,&uStack_28,param_2);
  if ((((ulong)plVar1 & 1) == 0) && (plVar1 = param_1, FUN_109dd9860(), ((ulong)plVar1 & 1) == 0)) {
    (**(code **)(*param_1 + 0x38))();
    (**(code **)(*param_1 + 0x3d0))();
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 109dc6c08; end: 109dc6c83;  */

void FUN_109dc6c08(long param_1,long *param_2,long param_3)

{
  bool bVar1;
  uint uVar2;
  
  uVar2 = (uint)param_1;
  FUN_109dd9860();
  if ((uVar2 & 1) == 0) {
    if (param_3 == 10) {
      bVar1 = *param_2 == 0x5f736f7263616d2e && (short)param_2[1] == 0x6e6f;
    }
    else {
      bVar1 = false;
    }
    *(byte *)(param_1 + 0x1a0) = *(byte *)(param_1 + 0x1a0) & 0xfe | bVar1;
  }
  return;
}



/* Entry: 109dc6c84; end: 109dc79c7;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_109dc6c84(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  int ******ppppppiVar6;
  int ******ppppppiVar7;
  int *****pppppiVar8;
  code *pcVar9;
  long *plVar10;
  int ****ppppiVar11;
  int *****pppppiVar12;
  long *plVar13;
  uint uVar14;
  long lVar15;
  int *****pppppiVar16;
  int *piVar17;
  uint6 *puVar18;
  undefined8 *puVar19;
  ulong uVar20;
  int *****pppppiVar21;
  int *piVar22;
  ulong uVar23;
  undefined *puVar24;
  long lVar25;
  int *****pppppiVar26;
  int iVar27;
  int ******ppppppiStack_240;
  int ******ppppppiStack_238;
  int ****ppppiStack_230;
  undefined8 uStack_228;
  int *****pppppiStack_220;
  int *****pppppiStack_218;
  int *****pppppiStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 uStack_1f0;
  int ****ppppiStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  int ******ppppppiStack_1d0;
  int ******ppppppiStack_1c8;
  int ****ppppiStack_1c0;
  undefined2 uStack_1b8;
  undefined6 uStack_1b6;
  undefined2 uStack_1b0;
  undefined6 uStack_1ae;
  char cStack_1a8;
  undefined1 uStack_1a7;
  undefined6 uStack_1a6;
  int *****pppppiStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 uStack_180;
  int *piStack_170;
  long lStack_168;
  undefined *puStack_160;
  undefined2 uStack_150;
  int *piStack_148;
  long lStack_140;
  int **appiStack_138 [2];
  int ******ppppppiStack_128;
  int ******ppppppiStack_120;
  undefined2 uStack_118;
  int ****appppiStack_110 [2];
  undefined *puStack_100;
  undefined2 uStack_f0;
  int *****apppppiStack_e8 [2];
  int ******ppppppiStack_d8;
  int ******ppppppiStack_d0;
  undefined2 uStack_c8;
  int *****pppppiStack_c0;
  int ******ppppppiStack_b8;
  int ******ppppppiStack_b0;
  int ****ppppiStack_a8;
  uint uStack_a0;
  int *****pppppiStack_98;
  int *****pppppiStack_90;
  int *****pppppiStack_88;
  int ******ppppppiStack_80;
  int ******ppppppiStack_78;
  
  ppppppiStack_80 = (int ******)0x0;
  ppppppiStack_78 = (int ******)0x0;
  plVar10 = param_1;
  (**(code **)(*param_1 + 0xc0))(param_1,&ppppppiStack_80);
  if ((int)plVar10 != 0) {
    ppppppiStack_1d0 = (int ******)&UNK_10f5fcffb;
    uStack_1b0 = 0x103;
    plVar10 = param_1;
    (**(code **)(*param_1 + 0x28))();
    FUN_109dd98f8(param_1,plVar10[0xc],&ppppppiStack_1d0,0,0);
    return (long *)0x1;
  }
  plVar10 = param_1;
  (**(code **)(*param_1 + 0x28))();
  if (*(int *)plVar10[1] == 0x19) {
    (**(code **)(*param_1 + 0xb8))(param_1);
  }
  pppppiStack_98 = (int *****)0x0;
  pppppiStack_90 = (int *****)0x0;
  pppppiStack_88 = (int *****)0x0;
  while (plVar10 = param_1, (**(code **)(*param_1 + 0x28))(), *(int *)plVar10[1] != 9) {
    if ((pppppiStack_98 != pppppiStack_90) && (*(char *)((long)pppppiStack_90 + -7) == '\x01')) {
      uStack_a0 = CONCAT22(uStack_a0._2_2_,0x503);
      pppppiStack_c0 = (int *****)&UNK_10f5fd025;
      ppppppiStack_b0 = (int ******)pppppiStack_90[-6];
      ppppiStack_a8 = pppppiStack_90[-5];
      ppppppiStack_1d0 = &pppppiStack_c0;
      ppppiStack_1c0 = (int ****)&UNK_10f5fd038;
      uStack_1b0 = 0x302;
      FUN_109dd98f8(param_1,param_1[0x11],&ppppppiStack_1d0,0,0);
      goto LAB_109dc71a8;
    }
    uStack_1ae = 0;
    cStack_1a8 = '\0';
    uStack_1a7 = 0;
    uStack_1b0 = 0;
    ppppppiStack_1c8 = (int ******)0x0;
    ppppppiStack_1d0 = (int ******)0x0;
    uStack_1b8 = 0;
    uStack_1b6 = 0;
    ppppiStack_1c0 = (int ****)0x0;
    plVar10 = param_1;
    (**(code **)(*param_1 + 0xc0))(param_1,&ppppppiStack_1d0);
    pppppiVar8 = pppppiStack_90;
    ppppppiVar7 = ppppppiStack_1c8;
    ppppppiVar6 = ppppppiStack_1d0;
    pppppiVar26 = pppppiStack_98;
    if ((int)plVar10 != 0) {
      pppppiStack_c0 = (int *****)&UNK_10f5fcffb;
      uStack_a0 = CONCAT22(uStack_a0._2_2_,0x103);
      plVar10 = param_1;
      (**(code **)(*param_1 + 0x28))();
      FUN_109dd98f8(param_1,plVar10[0xc],&pppppiStack_c0,0,0);
LAB_109dc7198:
      param_1 = (long *)0x1;
LAB_109dc719c:
      pppppiStack_c0 = &ppppiStack_1c0;
      FUN_109dabaec(&pppppiStack_c0);
      goto LAB_109dc71a8;
    }
    for (; pppppiVar26 != pppppiVar8; pppppiVar26 = pppppiVar26 + 6) {
      if ((int ******)pppppiVar26[1] == ppppppiVar7) {
        if (ppppppiVar7 != (int ******)0x0) {
          ppppiVar11 = *pppppiVar26;
          _memcmp(ppppiVar11,ppppppiVar6,ppppppiVar7);
          if ((int)ppppiVar11 != 0) goto LAB_109dc6de8;
        }
        uStack_118 = 0x503;
        appiStack_138[0] = (int **)&UNK_10f5fd057;
        ppppppiStack_128 = ppppppiStack_80;
        ppppppiStack_120 = ppppppiStack_78;
        appppiStack_110[0] = (int ****)appiStack_138;
        puStack_100 = &UNK_10f5fd05f;
        uStack_f0 = 0x302;
        apppppiStack_e8[0] = appppiStack_110;
        ppppppiStack_d8 = ppppppiVar6;
        ppppppiStack_d0 = ppppppiVar7;
        uStack_c8 = 0x502;
        pppppiStack_c0 = (int *****)apppppiStack_e8;
        ppppppiStack_b8 = ppppppiVar7;
        ppppppiStack_b0 = (int ******)&DAT_10f638984;
        uStack_a0 = CONCAT22(uStack_a0._2_2_,0x302);
        plVar10 = param_1;
        (**(code **)(*param_1 + 0x28))();
        FUN_109dd98f8(param_1,plVar10[0xc],&pppppiStack_c0,0,0);
        goto LAB_109dc7198;
      }
LAB_109dc6de8:
    }
    if (*(int *)param_1[6] != 10) goto LAB_109dc6e98;
    (**(code **)(*param_1 + 0xb8))(param_1);
    piStack_148 = (int *)0x0;
    lStack_140 = 0;
    lVar25 = param_1[0x11];
    plVar10 = param_1;
    (**(code **)(*param_1 + 0xc0))(param_1,&piStack_148);
    if ((int)plVar10 != 0) {
      uStack_118 = 0x503;
      appiStack_138[0] = (int **)&UNK_10f5fd081;
      ppppppiStack_128 = ppppppiStack_1d0;
      ppppppiStack_120 = ppppppiStack_1c8;
      appppiStack_110[0] = (int ****)appiStack_138;
      puStack_100 = &UNK_10f5fc103;
      uStack_f0 = 0x302;
      apppppiStack_e8[0] = appppiStack_110;
      ppppppiStack_d8 = ppppppiStack_80;
      ppppppiStack_d0 = ppppppiStack_78;
      uStack_c8 = 0x502;
      pppppiStack_c0 = (int *****)apppppiStack_e8;
      ppppppiStack_b0 = (int ******)&DAT_10f638984;
      uStack_a0 = CONCAT22(uStack_a0._2_2_,0x302);
      FUN_109dd98f8(param_1,lVar25,&pppppiStack_c0,0,0);
      goto LAB_109dc719c;
    }
    if (lStack_140 == 6) {
      if (*piStack_148 != 0x61726176 || (short)piStack_148[1] != 0x6772) goto LAB_109dc7568;
      uStack_1a7 = 1;
    }
    else {
      if ((lStack_140 != 3) ||
         ((short)*piStack_148 != 0x6572 || *(char *)((long)piStack_148 + 2) != 'q')) {
LAB_109dc7568:
        uStack_150 = 0x305;
        piStack_170 = piStack_148;
        lStack_168 = lStack_140;
        puStack_160 = &UNK_10f5fd0a3;
        appiStack_138[0] = &piStack_170;
        ppppppiStack_128 = ppppppiStack_1d0;
        ppppppiStack_120 = ppppppiStack_1c8;
        uStack_118 = 0x502;
        appppiStack_110[0] = (int ****)appiStack_138;
        puStack_100 = &UNK_10f5fc103;
        uStack_f0 = 0x302;
        apppppiStack_e8[0] = appppiStack_110;
        ppppppiStack_d8 = ppppppiStack_80;
        ppppppiStack_d0 = ppppppiStack_78;
        uStack_c8 = 0x502;
        pppppiStack_c0 = (int *****)apppppiStack_e8;
        ppppppiStack_b0 = (int ******)&DAT_10f638984;
        uStack_a0 = CONCAT22(uStack_a0._2_2_,0x302);
        FUN_109dd98f8(param_1,lVar25,&pppppiStack_c0,0,0);
        goto LAB_109dc719c;
      }
      cStack_1a8 = '\x01';
    }
LAB_109dc6e98:
    plVar10 = param_1;
    (**(code **)(*param_1 + 0x28))();
    if (*(int *)plVar10[1] == 0x1b) {
      (**(code **)(*param_1 + 0xb8))(param_1);
      lVar25 = param_1[0x11];
      plVar10 = param_1;
      FUN_109dcad68(param_1,&ppppiStack_1c0,0);
      if (((ulong)plVar10 & 1) != 0) goto LAB_109dc7198;
      if (cStack_1a8 == '\x01') {
        uStack_118 = 0x503;
        appiStack_138[0] = (int **)&UNK_10f5fd0cd;
        ppppppiStack_128 = ppppppiStack_1d0;
        ppppppiStack_120 = ppppppiStack_1c8;
        appppiStack_110[0] = (int ****)appiStack_138;
        puStack_100 = &UNK_10f5fc103;
        uStack_f0 = 0x302;
        apppppiStack_e8[0] = appppiStack_110;
        ppppppiStack_d8 = ppppppiStack_80;
        ppppppiStack_d0 = ppppppiStack_78;
        uStack_c8 = 0x502;
        pppppiStack_c0 = (int *****)apppppiStack_e8;
        ppppppiStack_b0 = (int ******)&DAT_10f638984;
        uStack_a0 = CONCAT22(uStack_a0._2_2_,0x302);
        (**(code **)(*param_1 + 0xa8))(param_1,lVar25,&pppppiStack_c0,0,0);
      }
    }
    pppppiVar8 = pppppiStack_90;
    pppppiVar26 = pppppiStack_98;
    if (pppppiStack_90 < pppppiStack_88) {
      pppppiStack_90[1] = (int ****)ppppppiStack_1c8;
      *pppppiStack_90 = (int ****)ppppppiStack_1d0;
      pppppiStack_90[3] = (int ****)0x0;
      pppppiStack_90[4] = (int ****)0x0;
      pppppiStack_90[2] = (int ****)0x0;
      pppppiStack_90[3] = (int ****)CONCAT62(uStack_1b6,uStack_1b8);
      pppppiStack_90[2] = ppppiStack_1c0;
      pppppiStack_90[4] = (int ****)CONCAT62(uStack_1ae,uStack_1b0);
      ppppiStack_1c0 = (int ****)0x0;
      uStack_1b8 = 0;
      uStack_1b6 = 0;
      uStack_1b0 = 0;
      uStack_1ae = 0;
      *(ushort *)(pppppiStack_90 + 5) = CONCAT11(uStack_1a7,cStack_1a8);
      pppppiVar26 = pppppiStack_90 + 6;
    }
    else {
      lVar25 = (long)pppppiStack_90 - (long)pppppiStack_98;
      uVar20 = (lVar25 >> 4) * -0x5555555555555555 + 1;
      if (0x555555555555555 < uVar20) {
        FUN_109dcdd1c();
LAB_109dc78f8:
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x109dc78fc);
        (*pcVar9)();
      }
      lVar15 = (long)pppppiStack_88 - (long)pppppiStack_98 >> 4;
      uVar23 = lVar15 * 0x5555555555555556;
      if (uVar23 < uVar20 || uVar23 - uVar20 == 0) {
        uVar23 = uVar20;
      }
      if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar15 * -0x5555555555555555)) {
        uVar23 = 0x555555555555555;
      }
      if (0x555555555555555 < uVar23) {
        func_0x000104c4f740();
        goto LAB_109dc78f8;
      }
      pppppiVar12 = (int *****)(uVar23 * 0x30);
      __Znwm();
      puVar19 = (undefined8 *)((long)pppppiVar12 + lVar25);
      puVar19[1] = ppppppiStack_1c8;
      *puVar19 = ppppppiStack_1d0;
      puVar19[3] = CONCAT62(uStack_1b6,uStack_1b8);
      puVar19[2] = ppppiStack_1c0;
      puVar19[4] = CONCAT62(uStack_1ae,uStack_1b0);
      uStack_1b8 = 0;
      uStack_1b6 = 0;
      uStack_1b0 = 0;
      uStack_1ae = 0;
      ppppiStack_1c0 = (int ****)0x0;
      *(ushort *)(puVar19 + 5) = CONCAT11(uStack_1a7,cStack_1a8);
      pppppiVar16 = pppppiVar26;
      pppppiVar21 = pppppiVar12;
      if (pppppiVar26 != pppppiVar8) {
        do {
          ppppiVar11 = *pppppiVar16;
          pppppiVar21[1] = pppppiVar16[1];
          *pppppiVar21 = ppppiVar11;
          pppppiVar21[3] = (int ****)0x0;
          pppppiVar21[4] = (int ****)0x0;
          pppppiVar21[2] = (int ****)0x0;
          ppppiVar11 = pppppiVar16[2];
          pppppiVar21[3] = pppppiVar16[3];
          pppppiVar21[2] = ppppiVar11;
          pppppiVar21[4] = pppppiVar16[4];
          pppppiVar16[2] = (int ****)0x0;
          pppppiVar16[3] = (int ****)0x0;
          pppppiVar16[4] = (int ****)0x0;
          *(undefined2 *)(pppppiVar21 + 5) = *(undefined2 *)(pppppiVar16 + 5);
          pppppiVar16 = pppppiVar16 + 6;
          pppppiVar21 = pppppiVar21 + 6;
        } while (pppppiVar16 != pppppiVar8);
        do {
          pppppiStack_c0 = pppppiVar26 + 2;
          FUN_109dabaec(&pppppiStack_c0);
          pppppiVar26 = pppppiVar26 + 6;
          pppppiVar16 = pppppiStack_98;
        } while (pppppiVar26 != pppppiVar8);
      }
      pppppiStack_88 = pppppiVar12 + uVar23 * 6;
      pppppiVar26 = (int *****)(puVar19 + 6);
      pppppiStack_98 = pppppiVar12;
      if (pppppiVar16 != (int *****)0x0) {
        pppppiStack_90 = pppppiVar26;
        __ZdlPv(pppppiVar16);
      }
    }
    plVar10 = param_1;
    pppppiStack_90 = pppppiVar26;
    (**(code **)(*param_1 + 0x28))();
    if (*(int *)plVar10[1] == 0x19) {
      (**(code **)(*param_1 + 0xb8))(param_1);
    }
    pppppiStack_c0 = &ppppiStack_1c0;
    FUN_109dabaec(&pppppiStack_c0);
  }
  FUN_109dc0bd8(param_1 + 5);
  ppppppiStack_b8 = (int ******)0x0;
  ppppppiStack_b0 = (int ******)0x0;
  uStack_a0 = 1;
  ppppiStack_a8 = (int ****)0x0;
  plVar10 = param_1;
  (**(code **)(*param_1 + 0x28))();
  lVar25 = plVar10[1];
  ppppiVar11 = *(int *****)(lVar25 + 8);
  uVar4 = *(uint *)(lVar25 + 0x20);
  if (uVar4 < 0x41) {
    uVar20 = *(ulong *)(lVar25 + 0x18);
  }
  else {
    uVar20 = (ulong)uVar4 + 0x3f >> 3 & 0x3ffffff8;
    __Znam();
    _memcpy();
  }
  iVar27 = 0;
  do {
    while (*(int *)param_1[6] == 1) {
      FUN_109dc0bd8(param_1 + 5);
    }
    plVar10 = param_1;
    (**(code **)(*param_1 + 0x28))();
    if (*(int *)plVar10[1] == 0) {
      ppppppiStack_1d0 = (int ******)&UNK_10f5fd0fe;
      uStack_1b0 = 0x103;
      FUN_109dd98f8(param_1,param_2,&ppppppiStack_1d0,0,0);
      goto LAB_109dc7538;
    }
    plVar10 = param_1;
    (**(code **)(*param_1 + 0x28))();
    if (*(int *)plVar10[1] == 2) {
      plVar10 = param_1;
      (**(code **)(*param_1 + 0x28))();
      piVar22 = (int *)plVar10[1];
      if (*piVar22 == 2) {
        piVar17 = *(int **)(piVar22 + 2);
        lVar25 = *(long *)(piVar22 + 4);
      }
      else {
        piVar17 = *(int **)(piVar22 + 2);
        lVar25 = *(long *)(piVar22 + 4);
        uVar23 = (ulong)(lVar25 != 0);
        if (lVar25 != 0) {
          piVar17 = (int *)((long)piVar17 + 1);
        }
        uVar5 = uVar23;
        if (uVar23 <= lVar25 - 1U) {
          uVar5 = lVar25 - 1U;
        }
        uVar1 = 0;
        if (lVar25 != 0) {
          uVar1 = uVar5;
        }
        lVar25 = uVar1 - uVar23;
      }
      if ((lVar25 != 5) || (*piVar17 != 0x646e652e || (char)piVar17[1] != 'm')) {
        plVar10 = param_1;
        (**(code **)(*param_1 + 0x28))();
        piVar22 = (int *)plVar10[1];
        if (*piVar22 == 2) {
          plVar10 = *(long **)(piVar22 + 2);
          lVar25 = *(long *)(piVar22 + 4);
        }
        else {
          plVar10 = *(long **)(piVar22 + 2);
          lVar25 = *(long *)(piVar22 + 4);
          uVar23 = (ulong)(lVar25 != 0);
          if (lVar25 != 0) {
            plVar10 = (long *)((long)plVar10 + 1);
          }
          uVar5 = uVar23;
          if (uVar23 <= lVar25 - 1U) {
            uVar5 = lVar25 - 1U;
          }
          uVar1 = 0;
          if (lVar25 != 0) {
            uVar1 = uVar5;
          }
          lVar25 = uVar1 - uVar23;
        }
        if ((lVar25 != 9) || (*plVar10 != 0x7263616d646e652e || (char)plVar10[1] != 'o')) {
          plVar10 = param_1;
          (**(code **)(*param_1 + 0x28))();
          piVar22 = (int *)plVar10[1];
          if (*piVar22 == 2) {
            puVar18 = *(uint6 **)(piVar22 + 2);
            lVar25 = *(long *)(piVar22 + 4);
          }
          else {
            puVar18 = *(uint6 **)(piVar22 + 2);
            lVar25 = *(long *)(piVar22 + 4);
            uVar23 = (ulong)(lVar25 != 0);
            if (lVar25 != 0) {
              puVar18 = (uint6 *)((long)puVar18 + 1);
            }
            uVar5 = uVar23;
            if (uVar23 <= lVar25 - 1U) {
              uVar5 = lVar25 - 1U;
            }
            uVar1 = 0;
            if (lVar25 != 0) {
              uVar1 = uVar5;
            }
            lVar25 = uVar1 - uVar23;
          }
          if (lVar25 == 6) {
            uVar23 = ((ulong)*puVar18 & 0xff00ff00ff00ff00) >> 8 |
                     ((ulong)*puVar18 & 0xff00ff00ff00ff) << 8;
            uVar5 = uVar23 & 0xffff0000ffff;
            uVar23 = uVar5 >> 0x10 | ((uVar23 & 0xffff0000ffff0000) >> 0x10 | uVar5 << 0x10) << 0x20
            ;
            uVar14 = (uint)(0x2e6d6163726f0000 < uVar23);
            if (uVar23 < 0x2e6d6163726f0000) {
              uVar14 = 0xffffffff;
            }
            if (uVar14 == 0) {
              iVar27 = iVar27 + 1;
            }
          }
          goto LAB_109dc74f4;
        }
      }
      if (iVar27 == 0) {
        plVar10 = param_1;
        (**(code **)(*param_1 + 0x28))();
        puVar19 = (undefined8 *)plVar10[1];
        ppppppiStack_b0 = (int ******)puVar19[2];
        ppppppiStack_b8 = (int ******)puVar19[1];
        pppppiStack_c0 = (int *****)*puVar19;
        func_0x000109d3015c(&ppppiStack_a8,puVar19 + 3);
        FUN_109dc0bd8(param_1 + 5);
        plVar10 = param_1;
        (**(code **)(*param_1 + 0x28))();
        if (*(int *)plVar10[1] == 9) {
          plVar13 = param_1;
          (**(code **)(*param_1 + 0x30))();
          ppppppiVar7 = ppppppiStack_78;
          ppppppiVar6 = ppppppiStack_80;
          plVar10 = plVar13 + 0x102;
          FUN_109e03610(plVar10,ppppppiStack_80,ppppppiStack_78);
          if (((int)plVar10 == -1) || ((long)(int)plVar10 == (ulong)*(uint *)(plVar13 + 0x103))) {
            lVar25 = (long)ppppppiStack_b8 - (long)ppppiVar11;
            FUN_109dcd9ac(param_1,param_2,ppppiVar11,lVar25,pppppiStack_98,
                          ((long)pppppiStack_90 - (long)pppppiStack_98 >> 4) * -0x5555555555555555);
            pppppiVar16 = pppppiStack_88;
            pppppiVar8 = pppppiStack_90;
            pppppiVar26 = pppppiStack_98;
            pppppiStack_98 = (int *****)0x0;
            pppppiStack_90 = (int *****)0x0;
            pppppiStack_88 = (int *****)0x0;
            ppppppiStack_1c8 = ppppppiStack_78;
            ppppppiStack_1d0 = ppppppiStack_80;
            uStack_1b8 = (undefined2)lVar25;
            uStack_1b6 = (undefined6)((ulong)lVar25 >> 0x10);
            uStack_1b0 = SUB82(pppppiVar26,0);
            uStack_1ae = (undefined6)((ulong)pppppiVar26 >> 0x10);
            cStack_1a8 = (char)pppppiVar8;
            uStack_1a7 = (undefined1)((ulong)pppppiVar8 >> 8);
            uStack_1a6 = (undefined6)((ulong)pppppiVar8 >> 0x10);
            uStack_1e0 = 0;
            uStack_1d8 = 0;
            ppppiStack_1e8 = (int ****)0x0;
            pppppiStack_1a0 = pppppiVar16;
            uStack_198 = 0;
            uStack_190 = 0;
            uStack_188 = 0;
            uStack_180 = 0;
            apppppiStack_e8[0] = &ppppiStack_1e8;
            ppppiStack_1c0 = ppppiVar11;
            FUN_109daba74(apppppiStack_e8);
            (**(code **)(*param_1 + 0x30))(param_1);
            uStack_228 = CONCAT62(uStack_1b6,uStack_1b8);
            ppppppiStack_238 = ppppppiStack_1c8;
            ppppppiStack_240 = ppppppiStack_1d0;
            ppppiStack_230 = ppppiStack_1c0;
            pppppiStack_220 = pppppiVar26;
            pppppiStack_218 = pppppiVar8;
            uStack_1b0 = 0;
            uStack_1ae = 0;
            cStack_1a8 = '\0';
            uStack_1a7 = 0;
            uStack_1a6 = 0;
            pppppiStack_210 = pppppiVar16;
            uStack_208 = 0;
            uStack_200 = 0;
            uStack_1f8 = 0;
            pppppiStack_1a0 = (int *****)0x0;
            uStack_198 = 0;
            uStack_190 = 0;
            uStack_188 = 0;
            uStack_1f0 = 0;
            FUN_109dcdb94();
            FUN_109dc079c(&ppppppiStack_240);
            FUN_109dc079c(&ppppppiStack_1d0);
            param_1 = (long *)0x0;
          }
          else {
            uStack_c8 = 0x503;
            apppppiStack_e8[0] = (int *****)&UNK_10f5fd057;
            ppppppiStack_d8 = ppppppiVar6;
            ppppppiStack_d0 = ppppppiVar7;
            appppiStack_110[0] = (int ****)&UNK_10f5fd124;
            uStack_f0 = 0x103;
            FUN_109d35b30(&ppppppiStack_1d0,apppppiStack_e8,appppiStack_110);
            FUN_109dd98f8(param_1,param_2,&ppppppiStack_1d0,0,0);
          }
        }
        else {
          ppppppiStack_d8 = ppppppiStack_b8;
          ppppppiStack_d0 = ppppppiStack_b0;
          if ((int)pppppiStack_c0 != 2) {
            puVar24 = (undefined *)(ulong)(ppppppiStack_b0 != (int ******)0x0);
            if (ppppppiStack_b0 != (int ******)0x0) {
              ppppppiStack_d8 = (int ******)((long)ppppppiStack_b8 + 1);
            }
            puVar2 = puVar24;
            if (puVar24 <= (undefined *)((long)ppppppiStack_b0 + -1)) {
              puVar2 = (undefined *)((long)ppppppiStack_b0 + -1);
            }
            puVar3 = (undefined *)0x0;
            if (ppppppiStack_b0 != (int ******)0x0) {
              puVar3 = puVar2;
            }
            ppppppiStack_d0 = (int ******)(puVar3 + -(long)puVar24);
          }
          uStack_c8 = 0x503;
          apppppiStack_e8[0] = (int *****)&UNK_10f5fc5b7;
          ppppppiStack_1d0 = apppppiStack_e8;
          ppppiStack_1c0 = (int ****)&UNK_10f5fc5cd;
          uStack_1b0 = 0x302;
          plVar10 = param_1;
          (**(code **)(*param_1 + 0x28))();
          FUN_109dd98f8(param_1,plVar10[0xc],&ppppppiStack_1d0,0,0);
          param_1 = (long *)0x1;
        }
LAB_109dc7538:
        if ((0x40 < uVar4) && (uVar20 != 0)) {
          __ZdaPv(uVar20);
        }
        if ((0x40 < uStack_a0) && (ppppiStack_a8 != (int ****)0x0)) {
          __ZdaPv();
        }
LAB_109dc71a8:
        ppppppiStack_1d0 = &pppppiStack_98;
        FUN_109daba74(&ppppppiStack_1d0);
        return param_1;
      }
      iVar27 = iVar27 + -1;
    }
    else if (*(int *)param_1[6] == 8) {
      plVar10 = param_1;
      (**(code **)(*param_1 + 0x28))();
      FUN_109dc0854(param_1,plVar10[0xc],1);
    }
LAB_109dc74f4:
    (**(code **)(*param_1 + 0xe0))(param_1);
  } while( true );
}



/* Entry: 109dc79c8; end: 109dc7c33;  */

void FUN_109dc79c8(long param_1,long *param_2,long param_3)

{
  bool bVar1;
  uint uVar2;
  
  uVar2 = (uint)param_1;
  FUN_109dd9860();
  if ((uVar2 & 1) == 0) {
    if (param_3 == 9) {
      bVar1 = *param_2 == 0x7263616d746c612e && (char)param_2[1] == 'o';
    }
    else {
      bVar1 = false;
    }
    *(bool *)(param_1 + 799) = bVar1;
  }
  return;
}



/* Entry: 109dc7c34; end: 109dc7dd3;  */

void FUN_109dc7c34(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined *apuStack_a0 [2];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined2 uStack_80;
  undefined *apuStack_78 [2];
  undefined *puStack_68;
  undefined2 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_50 = 0;
  uStack_48 = 0;
  plVar3 = param_1;
  (**(code **)(*param_1 + 0x28))();
  uVar6 = *(undefined8 *)(plVar3[1] + 8);
  plVar3 = param_1;
  (**(code **)(*param_1 + 0xc0))(param_1,&uStack_50);
  apuStack_78[0] = &UNK_10f5fd1f9;
  uStack_58 = 0x103;
  if (((ulong)plVar3 & 1) == 0) {
    plVar3 = param_1;
    FUN_109dd9860();
    if (((ulong)plVar3 & 1) == 0) {
      plVar4 = param_1;
      (**(code **)(*param_1 + 0x30))();
      uVar1 = uStack_48;
      uVar6 = uStack_50;
      plVar3 = plVar4 + 0x102;
      FUN_109e03610(plVar3,uStack_50,uStack_48);
      if (((int)plVar3 == -1) || ((long)(int)plVar3 == (ulong)*(uint *)(plVar4 + 0x103))) {
        uStack_80 = 0x503;
        apuStack_a0[0] = &UNK_10f5fd057;
        uStack_90 = uVar6;
        uStack_88 = uVar1;
        puStack_68 = &UNK_10f4921a6;
        uStack_58 = 0x302;
        apuStack_78[0] = (undefined *)apuStack_a0;
        FUN_109dd98f8(param_1,param_2,apuStack_78,0,0);
      }
      else {
        (**(code **)(*param_1 + 0x30))();
        plVar3 = param_1 + 0x102;
        FUN_109e03610(plVar3,uStack_50,uStack_48);
        iVar2 = (int)plVar3;
        if ((iVar2 != -1) && ((long)iVar2 != (ulong)*(uint *)(param_1 + 0x103))) {
          puVar5 = *(undefined8 **)(param_1[0x102] + (long)iVar2 * 8);
          FUN_109e03714(param_1 + 0x102,(long)puVar5 + (ulong)*(uint *)((long)param_1 + 0x824),
                        *puVar5);
          FUN_109daba24(puVar5,param_1 + 0x102);
        }
      }
    }
  }
  else {
    FUN_109dd98f8(param_1,uVar6,apuStack_78,0,0);
  }
  return;
}



/* Entry: 109dc7dd4; end: 109dc7e17;  */

ulong FUN_109dc7dd4(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_109dd9860();
  if ((uVar1 & 1) == 0) {
    while (**(int **)(param_1 + 0x30) != 0) {
      FUN_109dc0bd8(param_1 + 0x28);
    }
  }
  return uVar1;
}



/* Entry: 109dc7e18; end: 109dc7f6b;  */

void FUN_109dc7e18(long *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined *puStack_58;
  long lStack_50;
  undefined2 uStack_38;
  
  if ((param_1[0x25] == param_1[0x26]) || (*(char *)(param_1[0x26] + -3) != '\x01')) {
    if ((param_3 & 1) == 0) {
      puStack_58 = &UNK_10f5fd224;
      uStack_38 = 0x103;
    }
    else {
      if (*(int *)param_1[6] == 3) {
        plVar3 = param_1;
        (**(code **)(*param_1 + 0x28))();
        puStack_58 = *(undefined **)(plVar3[1] + 8);
        lVar5 = *(long *)(plVar3[1] + 0x10);
        uVar4 = (ulong)(lVar5 != 0);
        if (lVar5 != 0) {
          puStack_58 = puStack_58 + 1;
        }
        uVar1 = uVar4;
        if (uVar4 <= lVar5 - 1U) {
          uVar1 = lVar5 - 1U;
        }
        uVar2 = 0;
        if (lVar5 != 0) {
          uVar2 = uVar1;
        }
        lVar5 = uVar2 - uVar4;
        (**(code **)(*param_1 + 0xb8))(param_1);
      }
      else {
        if (*(int *)param_1[6] != 9) {
          puStack_58 = &UNK_10f5fd25d;
          uStack_38 = 0x103;
          plVar3 = param_1;
          (**(code **)(*param_1 + 0x28))();
          FUN_109dd98f8(param_1,plVar3[0xc],&puStack_58,0,0);
          return;
        }
        puStack_58 = &UNK_10f5fd235;
        lVar5 = 0x27;
      }
      uStack_38 = 0x105;
      lStack_50 = lVar5;
    }
    FUN_109dd98f8(param_1,param_2,&puStack_58,0,0);
  }
  else {
    (**(code **)(*param_1 + 0xe0))(param_1);
  }
  return;
}



/* Entry: 109dc7f6c; end: 109dc80c7;  */

void FUN_109dc7f6c(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined *puStack_68;
  long lStack_60;
  undefined2 uStack_48;
  
  if ((param_1[0x25] != param_1[0x26]) && (*(char *)(param_1[0x26] + -3) == '\x01')) {
    (**(code **)(*param_1 + 0xe0))(param_1);
    return;
  }
  plVar4 = param_1;
  func_0x000109dd9bd8(param_1,9);
  if (((ulong)plVar4 & 1) == 0) {
    if (*(int *)param_1[6] != 3) {
      puStack_68 = &UNK_10f5fd2a8;
      uStack_48 = 0x103;
      plVar4 = param_1;
      (**(code **)(*param_1 + 0x28))();
      FUN_109dd98f8(param_1,plVar4[0xc],&puStack_68,0,0);
      return;
    }
    plVar4 = param_1;
    (**(code **)(*param_1 + 0x28))();
    puStack_68 = *(undefined **)(plVar4[1] + 8);
    lVar3 = *(long *)(plVar4[1] + 0x10);
    uVar5 = (ulong)(lVar3 != 0);
    if (lVar3 != 0) {
      puStack_68 = puStack_68 + 1;
    }
    uVar1 = uVar5;
    if (uVar5 <= lVar3 - 1U) {
      uVar1 = lVar3 - 1U;
    }
    uVar2 = 0;
    if (lVar3 != 0) {
      uVar2 = uVar1;
    }
    (**(code **)(*param_1 + 0xb8))(param_1);
    plVar4 = param_1;
    FUN_109dd9860();
    if (((ulong)plVar4 & 1) != 0) {
      return;
    }
    lStack_60 = uVar2 - uVar5;
  }
  else {
    puStack_68 = &UNK_10f5fd27e;
    lStack_60 = 0x29;
  }
  uStack_48 = 0x105;
  (**(code **)(*param_1 + 0xa8))(param_1,param_2,&puStack_68,0,0);
  return;
}



/* Entry: 109dc80c8; end: 109dc8383;  */

long * FUN_109dc80c8(long *param_1)

{
  undefined8 uVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined2 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 auStack_70 [2];
  char cStack_59;
  undefined2 uStack_58;
  
  uStack_88 = 0;
  uVar6 = *(undefined8 *)(param_1[6] + 8);
  puStack_78 = (undefined *)0x0;
  plVar3 = param_1;
  (**(code **)(*param_1 + 0xe8))(param_1,auStack_80,&puStack_78);
  if (((ulong)plVar3 & 1) == 0) {
    puStack_78 = &UNK_10f5aef41;
    uStack_58 = 0x103;
    plVar3 = param_1;
    func_0x000109dd9a7c(param_1,0x19,&puStack_78);
    if (((ulong)plVar3 & 1) == 0) {
      plVar3 = param_1;
      (**(code **)(*param_1 + 0x28))();
      iVar2 = *(int *)plVar3[1];
      puStack_78 = &UNK_10f5fd2cb;
      uStack_58 = 0x103;
      plVar3 = param_1;
      (**(code **)(*param_1 + 0x28))();
      if (iVar2 == 2) {
        uVar1 = *(undefined8 *)(param_1[6] + 8);
        (**(code **)(*param_1 + 0xb8))(param_1);
        if (*(int *)param_1[6] == 0x19) {
          (**(code **)(*param_1 + 0xb8))(param_1);
          lVar5 = param_1[0x11];
          puStack_78 = (undefined *)0x0;
          plVar3 = param_1;
          (**(code **)(*param_1 + 0xe8))(param_1,&uStack_88,&puStack_78);
          if (((ulong)plVar3 & 1) != 0) {
            return (long *)0x1;
          }
          puStack_b0 = (undefined8 *)0x0;
          uStack_a8 = 0;
          uStack_98 = 0;
          uStack_a0 = 0;
          uVar4 = uStack_88;
          FUN_109daffe4(uStack_88,&puStack_b0,0,0,0,0,0);
          if ((int)uVar4 == 0) {
            puStack_78 = &UNK_10f5fd2e4;
            uStack_58 = 0x103;
            FUN_109dd98f8(param_1,lVar5,&puStack_78,0,0);
            return param_1;
          }
        }
        plVar3 = param_1;
        FUN_109dd9860();
        if (((ulong)plVar3 & 1) == 0) {
          plVar3 = param_1;
          (**(code **)(*param_1 + 0x38))();
          (**(code **)(*plVar3 + 0x488))(&puStack_78);
          if ((char)uStack_58 != '\x01') {
            return (long *)0x0;
          }
          if ((char)puStack_78 == '\0') {
            uVar1 = uVar6;
          }
          puStack_b0 = auStack_70;
          uStack_90 = 0x104;
          FUN_109dd98f8(param_1,uVar1,&puStack_b0,0,0);
          if ((char)uStack_58 == '\x01') {
            if (cStack_59 < '\0') {
              __ZdlPv(auStack_70[0]);
              return param_1;
            }
            return param_1;
          }
          return param_1;
        }
      }
      else {
        FUN_109dd98f8(param_1,*(undefined8 *)(plVar3[1] + 8),&puStack_78,0,0);
      }
    }
  }
  return (long *)0x1;
}



/* Entry: 109dc8384; end: 109dc85a7;  */

void FUN_109dc8384(long *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  char *apcStack_98 [2];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined2 uStack_78;
  long lStack_70;
  char **appcStack_68 [2];
  undefined *puStack_58;
  undefined2 uStack_48;
  
  lVar4 = param_1[0x11];
  plVar2 = param_1;
  (**(code **)(*param_1 + 0x108))();
  if ((((ulong)plVar2 & 1) == 0) &&
     (plVar2 = param_1, (**(code **)(*param_1 + 0x100))(param_1,&lStack_70),
     ((ulong)plVar2 & 1) == 0)) {
    if (lStack_70 < 0) {
      apcStack_98[0] = "\'";
      uStack_78 = 0x503;
      appcStack_68[0] = apcStack_98;
      puStack_58 = &UNK_10f5fd303;
      uStack_48 = 0x302;
      uStack_88 = param_2;
      uStack_80 = param_3;
      (**(code **)(*param_1 + 0xa8))(param_1,lVar4,appcStack_68,0,0);
    }
    else {
      appcStack_68[0] = (char **)&UNK_10f5aef41;
      uStack_48 = 0x103;
      plVar2 = param_1;
      func_0x000109dd9a7c(param_1,0x19,appcStack_68);
      if (((ulong)plVar2 & 1) == 0) {
        plVar2 = param_1;
        (**(code **)(*param_1 + 0x28))();
        lVar4 = plVar2[0xc];
        appcStack_68[0] = (char **)0x0;
        plVar2 = param_1;
        (**(code **)(*param_1 + 0xe8))(param_1,apcStack_98,appcStack_68);
        if (((ulong)plVar2 & 1) == 0) {
          lVar1 = lStack_70;
          if (*apcStack_98[0] == '\x01') {
            uVar5 = *(ulong *)(apcStack_98[0] + 0x10);
            if ((0xffffffffffffffffU >> (-(ulong)(uint)(param_4 << 3) & 0x3f) < uVar5) &&
               ((uVar3 = -1L << ((ulong)(uint)(param_4 << 3) - 1 & 0x3f), (long)uVar5 < (long)uVar3
                || ((long)~uVar3 < (long)uVar5)))) {
              appcStack_68[0] = (char **)&UNK_10f5fd338;
              uStack_48 = 0x103;
              FUN_109dd98f8(param_1,lVar4,appcStack_68,0,0);
              return;
            }
            for (; lVar1 != 0; lVar1 = lVar1 + -1) {
              plVar2 = param_1;
              (**(code **)(*param_1 + 0x38))();
              (**(code **)(*plVar2 + 0x1f8))();
            }
          }
          else {
            for (; lVar1 != 0; lVar1 = lVar1 + -1) {
              plVar2 = param_1;
              (**(code **)(*param_1 + 0x38))();
              (**(code **)(*plVar2 + 0x1f0))();
            }
          }
          FUN_109dd9860(param_1);
        }
      }
    }
  }
  return;
}



/* Entry: 109dc85a8; end: 109dc8763;  */

undefined8 FUN_109dc85a8(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined ***pppuVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *apuStack_98 [2];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined2 uStack_78;
  long lStack_70;
  undefined **ppuStack_68;
  uint uStack_60;
  undefined *puStack_58;
  undefined2 uStack_48;
  
  lVar3 = param_1[0x11];
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x108))();
  if ((((ulong)plVar1 & 1) == 0) &&
     (plVar1 = param_1, (**(code **)(*param_1 + 0x100))(param_1,&lStack_70),
     ((ulong)plVar1 & 1) == 0)) {
    if (lStack_70 < 0) {
      apuStack_98[0] = &DAT_10f638984;
      uStack_78 = 0x503;
      ppuStack_68 = apuStack_98;
      puStack_58 = &UNK_10f5fd303;
      uStack_48 = 0x302;
      uStack_88 = param_2;
      uStack_80 = param_3;
      (**(code **)(*param_1 + 0xa8))(param_1,lVar3,&ppuStack_68,0,0);
      uVar4 = 0;
    }
    else {
      ppuStack_68 = (undefined **)&UNK_10f5aef41;
      uStack_48 = 0x103;
      plVar1 = param_1;
      func_0x000109dd9a7c(param_1,0x19,&ppuStack_68);
      uVar4 = 1;
      if (((ulong)plVar1 & 1) == 0) {
        uStack_60 = 1;
        ppuStack_68 = (undefined **)0x0;
        plVar1 = param_1;
        FUN_109dcbe6c(param_1,param_4,&ppuStack_68);
        if ((((ulong)plVar1 & 1) == 0) &&
           (plVar1 = param_1, FUN_109dd9860(), ((ulong)plVar1 & 1) == 0)) {
          for (; uVar4 = 0, lStack_70 != 0; lStack_70 = lStack_70 + -1) {
            plVar1 = param_1;
            (**(code **)(*param_1 + 0x38))();
            pppuVar2 = &ppuStack_68;
            func_0x000109d30394(pppuVar2,0xffffffffffffffff);
            (**(code **)(*plVar1 + 0x1f8))(plVar1,pppuVar2,uStack_60 >> 3);
          }
        }
        if ((0x40 < uStack_60) && (ppuStack_68 != (undefined **)0x0)) {
          __ZdaPv();
        }
      }
    }
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}



/* Entry: 109dc8764; end: 109dc889b;  */

undefined8 FUN_109dc8764(long *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined *apuStack_98 [2];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined2 uStack_78;
  undefined **appuStack_70 [2];
  undefined *puStack_60;
  undefined2 uStack_50;
  long lStack_48;
  
  lVar4 = param_1[0x11];
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x108))();
  if (((((ulong)plVar1 & 1) == 0) &&
      (plVar1 = param_1, (**(code **)(*param_1 + 0x100))(param_1,&lStack_48),
      ((ulong)plVar1 & 1) == 0)) && (plVar1 = param_1, FUN_109dd9860(), ((ulong)plVar1 & 1) == 0)) {
    if (lStack_48 < 0) {
      apuStack_98[0] = &DAT_10f638984;
      uStack_78 = 0x503;
      appuStack_70[0] = apuStack_98;
      puStack_60 = &UNK_10f5fd303;
      uStack_50 = 0x302;
      uStack_88 = param_2;
      uStack_80 = param_3;
      (**(code **)(*param_1 + 0xa8))(param_1,lVar4,appuStack_70,0,0);
    }
    else if (lStack_48 != 0) {
      lVar4 = lStack_48;
      do {
        plVar1 = param_1;
        (**(code **)(*param_1 + 0x38))();
        uVar3 = param_4 & 0xffffffff;
        FUN_109dae888(param_4 & 0xffffffff,plVar1[1],0,0);
        (**(code **)(*plVar1 + 600))(plVar1,uVar3,0,0);
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 109dc889c; end: 109dc8a2f;  */

long * FUN_109dc889c(long *param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  int *piVar7;
  undefined *apuStack_88 [4];
  undefined2 uStack_68;
  
  plVar5 = param_1;
  (**(code **)(*param_1 + 0x28))();
  piVar7 = (int *)plVar5[1];
  iVar3 = *piVar7;
  pcVar1 = *(char **)(piVar7 + 2);
  uVar4 = piVar7[8];
  if (uVar4 < 0x41) {
    uVar6 = *(ulong *)(piVar7 + 6);
  }
  else {
    uVar6 = (ulong)uVar4 + 0x3f >> 3 & 0x3ffffff8;
    __Znam();
    _memcpy();
  }
  (**(code **)(*param_1 + 0xb8))(param_1);
  if ((iVar3 == 3) && (*pcVar1 == '\"')) {
    FUN_109dd9860();
    if (((ulong)param_1 & 1) == 0) {
      FUN_109e060c8();
      FUN_109d2f728();
      puVar2 = (undefined1 *)param_1[4];
      if (puVar2 < (undefined1 *)param_1[3]) {
        param_1[4] = (long)(puVar2 + 1);
        *puVar2 = 10;
        param_1 = (long *)0x0;
      }
      else {
        FUN_109e05570();
        param_1 = (long *)0x0;
      }
    }
    else {
      param_1 = (long *)0x1;
    }
  }
  else {
    apuStack_88[0] = &UNK_10f5fd361;
    uStack_68 = 0x103;
    FUN_109dd98f8(param_1,param_2,apuStack_88,0,0);
  }
  if (0x40 < uVar4 && uVar6 != 0) {
    __ZdaPv(uVar6);
  }
  return param_1;
}



/* Entry: 109dc8a30; end: 109dc8b5f;  */

long * FUN_109dc8a30(long *param_1)

{
  long *plVar1;
  
  plVar1 = param_1;
  FUN_109dd9860();
  if (((ulong)plVar1 & 1) == 0) {
    (**(code **)(*param_1 + 0x38))();
    (**(code **)(*param_1 + 0x490))();
  }
  return plVar1;
}



/* Entry: 109dc8b60; end: 109dc8f43;  */

long * FUN_109dc8b60(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long *unaff_x20;
  ulong uVar5;
  long *plStack_178;
  long *plStack_170;
  long *plStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined *puStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined2 uStack_110;
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [8];
  long *plStack_e8;
  ulong uStack_e0;
  long alStack_d8 [2];
  undefined2 uStack_c8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = param_1;
  (**(code **)(*param_1 + 0x28))();
  if (*(int *)plVar2[1] == 4) {
    plStack_e8 = (long *)&UNK_10f5fd38c;
    uStack_c8 = 0x103;
    plVar2 = param_1;
    func_0x000109dd9b2c(param_1,auStack_f0,&plStack_e8);
    if (((ulong)plVar2 & 1) == 0) goto LAB_109dc8bd4;
LAB_109dc8c94:
    param_1 = (long *)0x1;
  }
  else {
LAB_109dc8bd4:
    plVar2 = param_1;
    (**(code **)(*param_1 + 0x28))();
    if (*(int *)plVar2[1] == 4) {
      plStack_e8 = (long *)&UNK_10f5fd38c;
      uStack_c8 = 0x103;
      plVar2 = param_1;
      func_0x000109dd9b2c(param_1,auStack_f8,&plStack_e8);
      if (((ulong)plVar2 & 1) != 0) goto LAB_109dc8c94;
    }
    plVar2 = param_1;
    (**(code **)(*param_1 + 0x28))();
    if (*(int *)plVar2[1] == 4) {
      plStack_e8 = (long *)&UNK_10f5fd38c;
      uStack_c8 = 0x103;
      plVar2 = param_1;
      func_0x000109dd9b2c(param_1,auStack_100,&plStack_e8);
      if (((ulong)plVar2 & 1) != 0) goto LAB_109dc8c94;
    }
    plVar2 = param_1;
    (**(code **)(*param_1 + 0x28))();
    if (*(int *)plVar2[1] == 4) {
      plStack_e8 = (long *)&UNK_10f5fd38c;
      uStack_c8 = 0x103;
      plVar2 = param_1;
      func_0x000109dd9b2c(param_1,auStack_108,&plStack_e8);
      if (((ulong)plVar2 & 1) != 0) goto LAB_109dc8c94;
    }
    unaff_x20 = alStack_d8;
    uStack_e0 = 0x800000000;
    plStack_e8 = unaff_x20;
    while (plVar2 = param_1, (**(code **)(*param_1 + 0x28))(), *(int *)plVar2[1] == 0x2d) {
      (**(code **)(*param_1 + 0xb8))(param_1);
      puStack_148 = (undefined *)0x0;
      plVar2 = param_1;
      (**(code **)(*param_1 + 0x28))();
      if (*(int *)plVar2[1] == 4) {
        puStack_130 = &UNK_10f5fd38c;
        uStack_110 = 0x103;
        plVar2 = param_1;
        func_0x000109dd9b2c(param_1,&puStack_148,&puStack_130);
        if (((ulong)plVar2 & 1) != 0) goto LAB_109dc8e78;
      }
      plVar2 = param_1;
      (**(code **)(*param_1 + 0x28))();
      if (*(int *)plVar2[1] == 10) {
        (**(code **)(*param_1 + 0xb8))(param_1);
      }
      uStack_138 = 0;
      plVar2 = param_1;
      (**(code **)(*param_1 + 0x28))();
      if (*(int *)plVar2[1] == 4) {
        puStack_130 = &UNK_10f5fd38c;
        uStack_110 = 0x103;
        plVar2 = param_1;
        func_0x000109dd9b2c(param_1,&uStack_138,&puStack_130);
        if (((ulong)plVar2 & 1) != 0) goto LAB_109dc8e78;
        uVar5 = uStack_138 & 0xffffffff;
      }
      else {
        uVar5 = 0;
      }
      puVar1 = puStack_148;
      uVar4 = uStack_e0 & 0xffffffff;
      if (uStack_e0 >> 0x20 <= uVar4) {
        func_0x000107c2b01c(&plStack_e8,unaff_x20,uVar4 + 1,0x10);
        uVar4 = uStack_e0 & 0xffffffff;
      }
      plStack_e8[uVar4 * 2] = (long)puVar1;
      (plStack_e8 + uVar4 * 2)[1] = uVar5;
      uStack_e0 = CONCAT44(uStack_e0._4_4_,(int)uStack_e0 + 1);
    }
    puStack_148 = (undefined *)0x0;
    uStack_140 = 0;
    plVar2 = param_1;
    (**(code **)(*param_1 + 0xc0))(param_1,&puStack_148);
    if ((int)plVar2 == 0) {
      (**(code **)(*param_1 + 0x30))(param_1);
      uStack_110 = 0x105;
      puStack_130 = puStack_148;
      uStack_128 = uStack_140;
      FUN_109da83b8();
      plVar2 = param_1;
      FUN_109dd9860();
      if (((ulong)plVar2 & 1) == 0) {
        (**(code **)(*param_1 + 0x38))();
        (**(code **)(*param_1 + 0x4a8))();
        param_1 = (long *)0x0;
      }
      else {
LAB_109dc8e78:
        param_1 = (long *)0x1;
      }
    }
    else {
      plVar2 = param_1;
      (**(code **)(*param_1 + 0x28))();
      puStack_130 = &UNK_10f5fd38c;
      uStack_110 = 0x103;
      FUN_109dd98f8(param_1,plVar2[0xc],&puStack_130,0,0);
    }
    plVar2 = plStack_e8;
    if (plStack_e8 != unaff_x20) {
      _free();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_1;
  }
  ___stack_chk_fail();
  if (plStack_e8 != unaff_x20) {
    _free();
  }
  plVar3 = plVar2;
  __Unwind_Resume();
  pcStack_158 = FUN_109dc8f44;
  *(undefined4 *)(plVar3 + 0x5b) = 0;
  plStack_178 = plVar3;
  plStack_170 = unaff_x20;
  plStack_168 = plVar2;
  puStack_160 = &stack0xfffffffffffffff0;
  FUN_109dc05c0(plVar3 + 0x60,plVar3[0x61]);
  plVar3[0x60] = (long)(plVar3 + 0x61);
  plVar3[0x62] = 0;
  plVar3[0x61] = 0;
  FUN_109dd9d40(plVar3,FUN_109dcdd78,&plStack_178,1);
  return plVar3;
}



/* Entry: 109dc8f44; end: 109dc8fa3;  */

void FUN_109dc8f44(long param_1)

{
  long lStack_28;
  
  *(undefined4 *)(param_1 + 0x2d8) = 0;
  lStack_28 = param_1;
  FUN_109dc05c0(param_1 + 0x300,*(undefined8 *)(param_1 + 0x308));
  *(undefined8 **)(param_1 + 0x300) = (undefined8 *)(param_1 + 0x308);
  *(undefined8 *)(param_1 + 0x310) = 0;
  *(undefined8 *)(param_1 + 0x308) = 0;
  FUN_109dd9d40(param_1,FUN_109dcdd78,&lStack_28,1);
  return;
}



/* Entry: 109dc8fa4; end: 109dc90fb;  */

void FUN_109dc8fa4(long *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  long *plVar2;
  long lVar3;
  undefined *apuStack_70 [4];
  undefined2 uStack_50;
  char *pcStack_48;
  
  plVar2 = param_1;
  (**(code **)(*param_1 + 0x28))();
  lVar3 = plVar2[0xc];
  apuStack_70[0] = (undefined *)0x0;
  plVar2 = param_1;
  (**(code **)(*param_1 + 0xe8))(param_1,&pcStack_48,apuStack_70);
  if (((ulong)plVar2 & 1) == 0) {
    if (*pcStack_48 == '\x01') {
      if (*(long *)(pcStack_48 + 0x10) + 0x80U < 0x180) {
        plVar2 = *(long **)(param_3 + 0x58);
        if (*(uint *)(plVar2 + 1) < *(uint *)((long)plVar2 + 0xc)) {
          puVar1 = (undefined4 *)(*plVar2 + (ulong)*(uint *)(plVar2 + 1) * 0x80);
          *puVar1 = 2;
          *(undefined8 *)(puVar1 + 2) = param_2;
          puVar1[4] = (int)param_4;
          *(undefined1 *)(puVar1 + 5) = 0;
          *(undefined8 *)(puVar1 + 0x10) = 0;
          *(undefined8 *)(puVar1 + 0xe) = 0;
          *(undefined8 *)(puVar1 + 0x14) = 0;
          *(undefined8 *)(puVar1 + 0x12) = 0;
          *(undefined8 *)(puVar1 + 0x18) = 0;
          *(undefined8 *)(puVar1 + 0x16) = 0;
          *(undefined8 *)(puVar1 + 0x1a) = 0;
          *(undefined8 *)(puVar1 + 8) = 0;
          *(undefined8 *)(puVar1 + 10) = 0;
          *(undefined8 *)(puVar1 + 6) = 0;
          *(undefined1 *)(puVar1 + 0xc) = 0;
          puVar1[0x1c] = 1;
          *(undefined1 *)(puVar1 + 0x1e) = 0;
          *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
          return;
        }
        func_0x000109dce090(plVar2,2,param_2,param_4);
        return;
      }
      apuStack_70[0] = &UNK_10f5fd338;
    }
    else {
      apuStack_70[0] = &UNK_10f5fd3b9;
    }
    uStack_50 = 0x103;
    FUN_109dd98f8(param_1,lVar3,apuStack_70,0,0);
  }
  return;
}



/* Entry: 109dc90fc; end: 109dc9257;  */

void FUN_109dc90fc(long *param_1,undefined8 param_2,long param_3)

{
  undefined4 *puVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined *apuStack_60 [4];
  undefined2 uStack_40;
  char *pcStack_38;
  
  plVar2 = param_1;
  (**(code **)(*param_1 + 0x28))();
  lVar4 = plVar2[0xc];
  apuStack_60[0] = (undefined *)0x0;
  plVar2 = param_1;
  (**(code **)(*param_1 + 0xe8))(param_1,&pcStack_38,apuStack_60);
  if (((ulong)plVar2 & 1) == 0) {
    if (*pcStack_38 == '\x01') {
      uVar3 = *(ulong *)(pcStack_38 + 0x10);
      if (uVar3 - 1 < (uVar3 ^ uVar3 - 1)) {
        plVar2 = *(long **)(param_3 + 0x58);
        if (*(uint *)(plVar2 + 1) < *(uint *)((long)plVar2 + 0xc)) {
          puVar1 = (undefined4 *)(*plVar2 + (ulong)*(uint *)(plVar2 + 1) * 0x80);
          *puVar1 = 0;
          *(undefined8 *)(puVar1 + 2) = param_2;
          puVar1[4] = 5;
          *(undefined1 *)(puVar1 + 5) = 0;
          *(undefined8 *)(puVar1 + 0x10) = 0;
          *(undefined8 *)(puVar1 + 0xe) = 0;
          *(undefined8 *)(puVar1 + 0x14) = 0;
          *(undefined8 *)(puVar1 + 0x12) = 0;
          *(undefined8 *)(puVar1 + 0x18) = 0;
          *(undefined8 *)(puVar1 + 0x16) = 0;
          *(undefined8 *)(puVar1 + 0x1a) = 0;
          *(undefined8 *)(puVar1 + 8) = 0;
          *(undefined8 *)(puVar1 + 10) = 0;
          *(ulong *)(puVar1 + 6) = (ulong)(0x3f - (int)LZCOUNT(uVar3));
          *(undefined1 *)(puVar1 + 0xc) = 0;
          puVar1[0x1c] = 1;
          *(undefined1 *)(puVar1 + 0x1e) = 0;
          *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
          return;
        }
        func_0x000109dce130(plVar2,0,param_2,5);
        return;
      }
      apuStack_60[0] = &UNK_10f5fd3f7;
    }
    else {
      apuStack_60[0] = &UNK_10f5fd3d8;
    }
    uStack_40 = 0x103;
    FUN_109dd98f8(param_1,lVar4,apuStack_60,0,0);
  }
  return;
}



/* Entry: 109dc9258; end: 109dc92bb;  */

long * FUN_109dc9258(long *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined4 auStack_a0 [2];
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined1 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined1 uStack_28;
  
  if (*(uint *)(param_1 + 1) < *(uint *)((long)param_1 + 0xc)) {
    puVar2 = (undefined4 *)(*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x80);
    *puVar2 = param_2;
    *(undefined8 *)(puVar2 + 2) = param_3;
    puVar2[4] = param_4;
    *(undefined1 *)(puVar2 + 5) = 0;
    *(undefined8 *)(puVar2 + 0x10) = 0;
    *(undefined8 *)(puVar2 + 0xe) = 0;
    *(undefined8 *)(puVar2 + 0x14) = 0;
    *(undefined8 *)(puVar2 + 0x12) = 0;
    *(undefined8 *)(puVar2 + 0x18) = 0;
    *(undefined8 *)(puVar2 + 0x16) = 0;
    *(undefined8 *)(puVar2 + 0x1a) = 0;
    *(undefined8 *)(puVar2 + 8) = 0;
    *(undefined8 *)(puVar2 + 10) = 0;
    *(undefined8 *)(puVar2 + 6) = 0;
    *(undefined1 *)(puVar2 + 0xc) = 0;
    puVar2[0x1c] = 1;
    *(undefined1 *)(puVar2 + 0x1e) = 0;
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    return param_1;
  }
  uStack_8c = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_38 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_88 = 0;
  uStack_70 = 0;
  uStack_30 = 1;
  uStack_28 = 0;
  plVar4 = param_1;
  auStack_a0[0] = param_2;
  uStack_98 = param_3;
  uStack_90 = param_4;
  func_0x000109dc99c4(param_1,auStack_a0);
  plVar3 = (long *)(*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x80);
  lVar8 = plVar4[5];
  lVar7 = plVar4[4];
  lVar6 = plVar4[7];
  lVar5 = plVar4[6];
  lVar11 = *plVar4;
  lVar10 = plVar4[3];
  lVar9 = plVar4[2];
  plVar3[1] = plVar4[1];
  *plVar3 = lVar11;
  plVar3[3] = lVar10;
  plVar3[2] = lVar9;
  plVar3[5] = lVar8;
  plVar3[4] = lVar7;
  plVar3[7] = lVar6;
  plVar3[6] = lVar5;
  lVar7 = plVar4[0xc];
  lVar6 = plVar4[0xf];
  lVar5 = plVar4[0xe];
  lVar9 = plVar4[9];
  lVar8 = plVar4[8];
  lVar11 = plVar4[0xb];
  lVar10 = plVar4[10];
  plVar3[0xd] = plVar4[0xd];
  plVar3[0xc] = lVar7;
  plVar3[0xf] = lVar6;
  plVar3[0xe] = lVar5;
  plVar3[9] = lVar9;
  plVar3[8] = lVar8;
  plVar3[0xb] = lVar11;
  plVar3[10] = lVar10;
  uVar1 = (int)param_1[1] + 1;
  *(uint *)(param_1 + 1) = uVar1;
  return (long *)(*param_1 + (ulong)uVar1 * 0x80 + -0x80);
}



/* Entry: 109dc92bc; end: 109dc9827;  */

long * FUN_109dc92bc(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,long param_5,
                    undefined ***param_6)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined ***pppuVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long *plStack_248;
  undefined **ppuStack_230;
  long *aplStack_228 [2];
  char cStack_211;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined2 uStack_1d0;
  undefined **appuStack_1c8 [2];
  undefined1 uStack_1b8;
  undefined7 uStack_1b7;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  int iStack_190;
  undefined8 *puStack_188;
  long *plStack_180;
  undefined8 uStack_178;
  ulong uStack_170;
  long alStack_168 [32];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_210 = param_3;
  uStack_208 = param_4;
  FUN_109e037bc(aplStack_228,&uStack_210);
  ppuStack_230 = (undefined **)param_2[0xb];
  plVar13 = (long *)param_1[1];
  uVar2 = *(uint *)(param_5 + 0x20);
  if (uVar2 < 0x41) {
    plStack_248 = *(long **)(param_5 + 0x18);
  }
  else {
    plStack_248 = (long *)((ulong)uVar2 + 0x3f >> 3 & 0x3ffffff8);
    __Znam();
    _memcpy();
  }
  pppuVar4 = &ppuStack_230;
  (**(code **)(*plVar13 + 0x38))();
  plVar7 = plVar13;
  if ((0x40 < uVar2) && (plVar7 = plStack_248, plStack_248 != (long *)0x0)) {
    __ZdaPv();
    plVar7 = plStack_248;
  }
  *(char *)((long)param_2 + 0x54) = (char)plVar13;
  if (*(char *)((long)param_1 + 0x21) == '\x01') {
    uStack_170 = 0x100;
    uStack_178 = 0;
    pppuVar4 = appuStack_1c8;
    plStack_180 = alStack_168;
    FUN_109d37ad8(pppuVar4,&plStack_180);
    if ((ulong)((long)puStack_1b0 - (long)puStack_1a8) < 0x15) {
      pppuVar4 = appuStack_1c8;
      FUN_109e0560c(pppuVar4,&UNK_10f5fd42a,0x15);
    }
    else {
      puStack_1a8[1] = 0x697463757274736e;
      *puStack_1a8 = 0x6920646573726170;
      *(undefined8 *)((long)puStack_1a8 + 0xd) = 0x5b203a6e6f697463;
      puStack_1a8 = (undefined8 *)((long)puStack_1a8 + 0x15);
    }
    if ((int)param_2[1] != 0) {
      uVar14 = 0;
      do {
        if ((int)uVar14 != 0) {
          if ((ulong)((long)puStack_1b0 - (long)puStack_1a8) < 2) {
            FUN_109e0560c(appuStack_1c8,&DAT_10f68f19e,2);
          }
          else {
            *(undefined2 *)puStack_1a8 = 0x202c;
            puStack_1a8 = (undefined8 *)((long)puStack_1a8 + 2);
          }
        }
        pppuVar4 = *(undefined ****)(*param_2 + uVar14 * 8);
        (*(code *)(*pppuVar4)[0xf])(pppuVar4,appuStack_1c8);
        uVar2 = (int)uVar14 + 1;
        uVar14 = (ulong)uVar2;
      } while (uVar2 != *(uint *)(param_2 + 1));
    }
    if (puStack_1b0 == puStack_1a8) {
      pppuVar4 = appuStack_1c8;
      FUN_109e0560c(pppuVar4,&DAT_10f62a9ea,1);
    }
    else {
      *(undefined1 *)puStack_1a8 = 0x5d;
      puStack_1a8 = (undefined8 *)((long)puStack_1a8 + 1);
    }
    uStack_1f0 = *puStack_188;
    uStack_1e8 = puStack_188[1];
    uStack_1d0 = 0x105;
    uStack_200 = 0;
    uStack_1f8 = 0;
    lVar11 = param_1[0x1e];
    func_0x000107c2b034();
    FUN_109e01664(lVar11);
    appuStack_1c8[0] = &PTR_DAT_110b5c4a0;
    if ((iStack_190 == 1) && (CONCAT71(uStack_1b7,uStack_1b8) != 0)) {
      __ZdaPv();
    }
    plVar7 = plStack_180;
    if (plStack_180 != alStack_168) {
      _free();
    }
  }
  if ((int)param_1[3] == 0 && ((ulong)plVar13 & 1) == 0) {
    plVar13 = param_1;
    FUN_109dc0c88();
    if ((int)plVar13 != 0) {
      plVar13 = param_1;
      (**(code **)(*param_1 + 0x30))();
      plVar7 = param_1;
      (**(code **)(*param_1 + 0x38))();
      if (*(uint *)(plVar7 + 0xf) == 0) {
        plStack_180 = (long *)0x0;
      }
      else {
        plStack_180 = *(long **)(plVar7[0xe] + (ulong)*(uint *)(plVar7 + 0xf) * 0x20 + -0x20);
      }
      plVar13 = plVar13 + 0xc9;
      FUN_109dadd98(plVar13,&plStack_180,appuStack_1c8);
      if ((int)plVar13 != 0) {
        uVar14 = param_1[0x1e];
        if ((undefined8 *)param_1[0x2b] == (undefined8 *)param_1[0x2c]) {
          plVar13 = param_1 + 0x23;
          pppuVar4 = param_6;
        }
        else {
          plVar7 = *(long **)param_1[0x2b];
          plVar13 = plVar7 + 1;
          pppuVar4 = (undefined ***)*plVar7;
        }
        FUN_109e00770(uVar14,pppuVar4,(int)*plVar13);
        if (param_1[0x36] != 0) {
          plVar13 = param_1;
          (**(code **)(*param_1 + 0x38))();
          appuStack_1c8[0] = (undefined **)((ulong)appuStack_1c8[0] & 0xffffffffffffff00);
          uStack_1b8 = 0;
          plStack_180 = (long *)((ulong)plStack_180 & 0xffffffffffffff00);
          uStack_170 = uStack_170 & 0xffffffffffffff00;
          (**(code **)(*plVar13 + 0x2a0))(&uStack_1f0);
          uVar3 = (undefined4)uStack_1f0;
          plVar13 = param_1;
          (**(code **)(*param_1 + 0x30))();
          *(undefined4 *)((long)plVar13 + 0x644) = uVar3;
          lVar11 = param_1[0x1e];
          FUN_109e00770(lVar11,param_1[0x38],(int)param_1[0x39]);
          uVar14 = (ulong)(~(uint)lVar11 + (int)param_1[0x37] + (int)uVar14);
        }
        plVar13 = param_1;
        (**(code **)(*param_1 + 0x38))();
        plVar7 = param_1;
        (**(code **)(*param_1 + 0x30))();
        (**(code **)(*plVar13 + 0x2c0))
                  (plVar13,*(undefined4 *)((long)plVar7 + 0x644),uVar14,0,1,0,0);
      }
    }
    plVar7 = (long *)param_1[1];
    (**(code **)(*plVar7 + 0x48))();
    plVar13 = plVar7;
  }
  else {
    param_6 = pppuVar4;
    plVar13 = (long *)0x1;
  }
  if (cStack_211 < '\0') {
    plVar7 = aplStack_228[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return plVar13;
  }
  ___stack_chk_fail();
  if (cStack_211 < '\0') {
    __ZdlPv(aplStack_228[0]);
  }
  __Unwind_Resume();
  puVar1 = (undefined8 *)plVar7[1];
  if (puVar1 < (undefined8 *)plVar7[2]) {
    puVar12 = puVar1 + 1;
    *puVar1 = *param_6;
    plVar6 = plVar7;
LAB_109dc98e0:
    plVar7[1] = (long)puVar12;
    return plVar6;
  }
  plVar13 = (long *)*plVar7;
  lVar11 = (long)puVar1 - (long)plVar13;
  uVar14 = (lVar11 >> 3) + 1;
  if (uVar14 >> 0x3d == 0) {
    uVar8 = plVar7[2] - (long)plVar13;
    uVar9 = (long)uVar8 >> 2;
    if (uVar9 <= uVar14) {
      uVar9 = uVar14;
    }
    if (0x7ffffffffffffff7 < uVar8) {
      uVar9 = 0x1fffffffffffffff;
    }
    if (uVar9 >> 0x3d == 0) {
      lVar5 = uVar9 << 3;
      __Znwm();
      puVar1 = (undefined8 *)(lVar5 + lVar11);
      plVar10 = puVar1 + -(lVar11 >> 3);
      puVar12 = puVar1 + 1;
      *puVar1 = *param_6;
      plVar6 = plVar10;
      _memcpy(plVar10,plVar13,lVar11);
      *plVar7 = (long)plVar10;
      plVar7[1] = (long)puVar12;
      plVar7[2] = lVar5 + uVar9 * 8;
      if (plVar13 != (long *)0x0) {
        __ZdlPv(plVar13);
        plVar6 = plVar13;
      }
      goto LAB_109dc98e0;
    }
  }
  else {
    FUN_109dc9904();
  }
  func_0x000104c4f740();
  plVar13 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  plVar6 = plVar13;
  func_0x000109dc99c4();
  plVar7 = (long *)(*plVar13 + (ulong)*(uint *)(plVar13 + 1) * 0x80);
  lVar16 = plVar6[5];
  lVar15 = plVar6[4];
  lVar5 = plVar6[7];
  lVar11 = plVar6[6];
  lVar19 = *plVar6;
  lVar18 = plVar6[3];
  lVar17 = plVar6[2];
  plVar7[1] = plVar6[1];
  *plVar7 = lVar19;
  plVar7[3] = lVar18;
  plVar7[2] = lVar17;
  plVar7[5] = lVar16;
  plVar7[4] = lVar15;
  plVar7[7] = lVar5;
  plVar7[6] = lVar11;
  lVar15 = plVar6[0xc];
  lVar5 = plVar6[0xf];
  lVar11 = plVar6[0xe];
  lVar17 = plVar6[9];
  lVar16 = plVar6[8];
  lVar19 = plVar6[0xb];
  lVar18 = plVar6[10];
  plVar7[0xd] = plVar6[0xd];
  plVar7[0xc] = lVar15;
  plVar7[0xf] = lVar5;
  plVar7[0xe] = lVar11;
  plVar7[9] = lVar17;
  plVar7[8] = lVar16;
  plVar7[0xb] = lVar19;
  plVar7[10] = lVar18;
  uVar2 = (int)plVar13[1] + 1;
  *(uint *)(plVar13 + 1) = uVar2;
  return (long *)(*plVar13 + (ulong)uVar2 * 0x80 + -0x80);
}



/* Entry: 109dc9828; end: 109dc9903;  */

undefined8 * FUN_109dc9828(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  
  puVar5 = (undefined8 *)param_1[1];
  if (puVar5 < (undefined8 *)param_1[2]) {
    puVar13 = puVar5 + 1;
    *puVar5 = *param_2;
    puVar5 = param_1;
LAB_109dc98e0:
    param_1[1] = puVar13;
    return puVar5;
  }
  puVar10 = (undefined8 *)*param_1;
  lVar12 = (long)puVar5 - (long)puVar10;
  uVar2 = (lVar12 >> 3) + 1;
  if (uVar2 >> 0x3d == 0) {
    uVar8 = (long)param_1[2] - (long)puVar10;
    uVar9 = (long)uVar8 >> 2;
    if (uVar9 <= uVar2) {
      uVar9 = uVar2;
    }
    if (0x7ffffffffffffff7 < uVar8) {
      uVar9 = 0x1fffffffffffffff;
    }
    if (uVar9 >> 0x3d == 0) {
      lVar4 = uVar9 << 3;
      __Znwm();
      puVar5 = (undefined8 *)(lVar4 + lVar12);
      puVar11 = puVar5 + -(lVar12 >> 3);
      puVar13 = puVar5 + 1;
      *puVar5 = *param_2;
      puVar5 = puVar11;
      _memcpy(puVar11,puVar10,lVar12);
      *param_1 = puVar11;
      param_1[1] = puVar13;
      param_1[2] = lVar4 + uVar9 * 8;
      if (puVar10 != (undefined8 *)0x0) {
        __ZdlPv(puVar10);
        puVar5 = puVar10;
      }
      goto LAB_109dc98e0;
    }
  }
  else {
    FUN_109dc9904();
  }
  func_0x000104c4f740();
  plVar6 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  plVar7 = plVar6;
  func_0x000109dc99c4();
  plVar3 = (long *)(*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x80);
  lVar15 = plVar7[5];
  lVar14 = plVar7[4];
  lVar4 = plVar7[7];
  lVar12 = plVar7[6];
  lVar18 = *plVar7;
  lVar17 = plVar7[3];
  lVar16 = plVar7[2];
  plVar3[1] = plVar7[1];
  *plVar3 = lVar18;
  plVar3[3] = lVar17;
  plVar3[2] = lVar16;
  plVar3[5] = lVar15;
  plVar3[4] = lVar14;
  plVar3[7] = lVar4;
  plVar3[6] = lVar12;
  lVar14 = plVar7[0xc];
  lVar4 = plVar7[0xf];
  lVar12 = plVar7[0xe];
  lVar16 = plVar7[9];
  lVar15 = plVar7[8];
  lVar18 = plVar7[0xb];
  lVar17 = plVar7[10];
  plVar3[0xd] = plVar7[0xd];
  plVar3[0xc] = lVar14;
  plVar3[0xf] = lVar4;
  plVar3[0xe] = lVar12;
  plVar3[9] = lVar16;
  plVar3[8] = lVar15;
  plVar3[0xb] = lVar18;
  plVar3[10] = lVar17;
  uVar1 = (int)plVar6[1] + 1;
  *(uint *)(plVar6 + 1) = uVar1;
  return (undefined8 *)(*plVar6 + (ulong)uVar1 * 0x80 + -0x80);
}



/* Entry: 109dc9904; end: 109dc9917;  */

long FUN_109dc9904(void)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  plVar3 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  plVar4 = plVar3;
  func_0x000109dc99c4();
  plVar2 = (long *)(*plVar3 + (ulong)*(uint *)(plVar3 + 1) * 0x80);
  lVar8 = plVar4[5];
  lVar7 = plVar4[4];
  lVar6 = plVar4[7];
  lVar5 = plVar4[6];
  lVar11 = *plVar4;
  lVar10 = plVar4[3];
  lVar9 = plVar4[2];
  plVar2[1] = plVar4[1];
  *plVar2 = lVar11;
  plVar2[3] = lVar10;
  plVar2[2] = lVar9;
  plVar2[5] = lVar8;
  plVar2[4] = lVar7;
  plVar2[7] = lVar6;
  plVar2[6] = lVar5;
  lVar7 = plVar4[0xc];
  lVar6 = plVar4[0xf];
  lVar5 = plVar4[0xe];
  lVar9 = plVar4[9];
  lVar8 = plVar4[8];
  lVar11 = plVar4[0xb];
  lVar10 = plVar4[10];
  plVar2[0xd] = plVar4[0xd];
  plVar2[0xc] = lVar7;
  plVar2[0xf] = lVar6;
  plVar2[0xe] = lVar5;
  plVar2[9] = lVar9;
  plVar2[8] = lVar8;
  plVar2[0xb] = lVar11;
  plVar2[10] = lVar10;
  uVar1 = (int)plVar3[1] + 1;
  *(uint *)(plVar3 + 1) = uVar1;
  return *plVar3 + (ulong)uVar1 * 0x80 + -0x80;
}



/* Entry: 109dc9918; end: 109dc9a3b;  */

long FUN_109dc9918(long *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined4 auStack_a0 [2];
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined1 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined1 uStack_28;
  
  uStack_8c = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_38 = 0;
  uStack_70 = 0;
  uStack_30 = 1;
  uStack_28 = 0;
  uStack_88 = 0;
  plVar3 = param_1;
  auStack_a0[0] = param_2;
  uStack_98 = param_3;
  uStack_90 = param_4;
  uStack_80 = param_5;
  uStack_78 = param_6;
  func_0x000109dc99c4(param_1,auStack_a0);
  plVar2 = (long *)(*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x80);
  lVar7 = plVar3[5];
  lVar6 = plVar3[4];
  lVar5 = plVar3[7];
  lVar4 = plVar3[6];
  lVar10 = *plVar3;
  lVar9 = plVar3[3];
  lVar8 = plVar3[2];
  plVar2[1] = plVar3[1];
  *plVar2 = lVar10;
  plVar2[3] = lVar9;
  plVar2[2] = lVar8;
  plVar2[5] = lVar7;
  plVar2[4] = lVar6;
  plVar2[7] = lVar5;
  plVar2[6] = lVar4;
  lVar6 = plVar3[0xc];
  lVar5 = plVar3[0xf];
  lVar4 = plVar3[0xe];
  lVar8 = plVar3[9];
  lVar7 = plVar3[8];
  lVar10 = plVar3[0xb];
  lVar9 = plVar3[10];
  plVar2[0xd] = plVar3[0xd];
  plVar2[0xc] = lVar6;
  plVar2[0xf] = lVar5;
  plVar2[0xe] = lVar4;
  plVar2[9] = lVar8;
  plVar2[8] = lVar7;
  plVar2[0xb] = lVar10;
  plVar2[10] = lVar9;
  uVar1 = (int)param_1[1] + 1;
  *(uint *)(param_1 + 1) = uVar1;
  return *param_1 + (ulong)uVar1 * 0x80 + -0x80;
}



/* Entry: 109dc9a3c; end: 109dc9ac7;  */

undefined8 * FUN_109dc9a3c(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar4 = *param_1;
  uVar2 = *(uint *)(param_1 + 1);
  puVar1 = param_2 + 5;
  puVar3 = param_2;
  while (puVar1 != (undefined8 *)(lVar4 + (ulong)uVar2 * 0x28)) {
    puVar3[1] = puVar3[6];
    *puVar3 = puVar3[5];
    puVar3[2] = puVar3[7];
    func_0x000109d2fe60(puVar3 + 3,puVar3 + 8);
    puVar1 = puVar3 + 10;
    puVar3 = puVar3 + 5;
  }
  FUN_109dc9ac8(param_1);
  return param_2;
}



/* Entry: 109dc9ac8; end: 109dc9afb;  */

void FUN_109dc9ac8(long *param_1)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = (int)param_1[1] - 1;
  *(uint *)(param_1 + 1) = uVar1;
  lVar2 = *param_1 + (ulong)uVar1 * 0x28;
  if ((0x40 < *(uint *)(lVar2 + 0x20)) && (*(long *)(lVar2 + 0x18) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)();
    return;
  }
  return;
}



/* Entry: 109dc9afc; end: 109dca367;  */

uint FUN_109dc9afc(long *param_1,undefined8 *param_2,long *param_3)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  undefined ***pppuVar5;
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  byte *pbVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  bool bVar14;
  long lVar15;
  int iVar16;
  uint uVar17;
  byte *pbVar18;
  int iVar19;
  ulong uVar20;
  undefined *apuStack_188 [2];
  undefined *puStack_178;
  long lStack_170;
  undefined2 uStack_168;
  undefined **appuStack_160 [2];
  undefined *puStack_150;
  undefined2 uStack_140;
  undefined ***apppuStack_138 [2];
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined2 uStack_118;
  byte *pbStack_110;
  undefined ****ppppuStack_108;
  byte *pbStack_100;
  byte *pbStack_f8;
  undefined **ppuStack_f0;
  uint uStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined ***pppuStack_d0;
  undefined2 uStack_c8;
  undefined6 uStack_c6;
  undefined2 uStack_c0;
  undefined8 uStack_be;
  undefined1 *puStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [32];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 == (undefined8 *)0x0) {
    uVar8 = 0;
  }
  else {
    uVar8 = (ulong)(uint)((int)((ulong)(param_2[5] - param_2[4]) >> 4) * -0x55555555);
  }
  uStack_a0 = 0x400000000;
  puStack_a8 = auStack_98;
  func_0x000109dca980(param_3,uVar8);
  FUN_109dcb0ec(&puStack_a8,uVar8);
  iVar16 = (int)uVar8;
  bVar14 = false;
  uVar20 = 0;
LAB_109dc9bd0:
  lVar13 = param_1[0x11];
  uStack_be = 0;
  uStack_c0 = 0;
  lStack_d8 = 0;
  puStack_e0 = (undefined *)0x0;
  uStack_c8 = 0;
  uStack_c6 = 0;
  pppuStack_d0 = (undefined ***)0x0;
  iVar19 = (int)uVar20;
  if (*(int *)param_1[6] == 2) {
    pbStack_100 = (byte *)0x0;
    pbStack_f8 = (byte *)0x0;
    uStack_e8 = 1;
    ppuStack_f0 = (undefined **)0x0;
    (**(code **)(param_1[5] + 0x20))(param_1 + 5,&ppppuStack_108,1,1);
    iVar2 = (int)ppppuStack_108;
    if ((0x40 < uStack_e8) && (ppuStack_f0 != (undefined **)0x0)) {
      __ZdaPv();
    }
    if (iVar2 != 0x1b) goto LAB_109dc9c8c;
    plVar11 = param_1;
    (**(code **)(*param_1 + 0xc0))(param_1,&puStack_e0);
    if ((int)plVar11 == 0) {
      if (*(int *)param_1[6] != 0x1b) {
        ppppuStack_108 = (undefined ****)&UNK_10f5fc052;
        uStack_e8 = CONCAT22(uStack_e8._2_2_,0x103);
        plVar11 = param_1;
        (**(code **)(*param_1 + 0x28))();
        FUN_109dd98f8(param_1,plVar11[0xc],&ppppuStack_108,0,0);
        uVar17 = 1;
        goto LAB_109dca2b8;
      }
      (**(code **)(*param_1 + 0xb8))(param_1);
      goto LAB_109dc9ca0;
    }
    ppppuStack_108 = (undefined ****)&UNK_10f5fc022;
    uStack_e8 = CONCAT22(uStack_e8._2_2_,0x103);
    FUN_109dd98f8(param_1,lVar13,&ppppuStack_108,0,0);
    uVar17 = (uint)param_1;
    goto LAB_109dca2b8;
  }
LAB_109dc9c8c:
  if (bVar14) {
LAB_109dc9ca0:
    if (lStack_d8 == 0) {
      ppppuStack_108 = (undefined ****)&UNK_10f5fc081;
      uStack_e8 = CONCAT22(uStack_e8._2_2_,0x103);
      FUN_109dd98f8(param_1,lVar13,&ppppuStack_108,0,0);
      uVar17 = (uint)param_1;
      goto LAB_109dca2b8;
    }
    bVar14 = true;
  }
  else {
    bVar14 = false;
  }
  pbVar18 = (byte *)param_1[0x11];
  pbStack_110 = (byte *)0x0;
  if (*(char *)((long)param_1 + 799) == '\x01') {
    if (*(int *)param_1[6] != 0x24) {
      pbVar9 = pbVar18;
      if (*(int *)param_1[6] == 0x26) {
        do {
          bVar1 = *pbVar9;
          if (bVar1 < 0x21) {
            if ((bVar1 == 0 || bVar1 == 10) || bVar1 == 0xd) break;
          }
          else if (bVar1 == 0x21) {
            pbVar9 = pbVar9 + 1;
          }
          else if (bVar1 == 0x3e) goto LAB_109dc9f18;
          pbVar9 = pbVar9 + 1;
        } while( true );
      }
      goto LAB_109dc9d24;
    }
    (**(code **)(*param_1 + 0xb8))(param_1);
    plVar11 = param_1;
    (**(code **)(*param_1 + 0xe8))(param_1,apppuStack_138,&pbStack_110);
    pppuVar5 = apppuStack_138[0];
    if (((ulong)plVar11 & 1) == 0) {
      plVar11 = param_1;
      (**(code **)(*param_1 + 0x38))();
      (**(code **)(*plVar11 + 0x48))();
      func_0x000109daff5c(pppuVar5,appuStack_160,plVar11,0,0,0);
      if (((ulong)pppuVar5 & 1) == 0) {
        ppppuStack_108 = (undefined ****)&UNK_10f5fa623;
        uStack_e8 = CONCAT22(uStack_e8._2_2_,0x103);
        FUN_109dd98f8(param_1,pbVar18,&ppppuStack_108,0,0);
        uVar17 = (uint)param_1;
        goto LAB_109dca2b8;
      }
      pbStack_f8 = pbStack_110 + -(long)pbVar18;
      ppppuStack_108 = (undefined ****)CONCAT44(ppppuStack_108._4_4_,4);
      uStack_e8 = 0x40;
      ppuStack_f0 = appuStack_160[0];
      pbStack_100 = pbVar18;
      FUN_109dcab20(&pppuStack_d0,&ppppuStack_108);
      goto LAB_109dc9d34;
    }
    uVar17 = 0;
LAB_109dca2b8:
    ppppuStack_108 = &pppuStack_d0;
    FUN_109dabaec(&ppppuStack_108);
    goto LAB_109dca03c;
  }
LAB_109dc9d24:
  plVar11 = param_1;
  FUN_109dcad68(param_1,&pppuStack_d0);
  if (((ulong)plVar11 & 1) != 0) {
    uVar17 = 1;
    goto LAB_109dca028;
  }
LAB_109dc9d34:
  lVar15 = lStack_d8;
  puVar3 = puStack_e0;
  if (lStack_d8 != 0) {
    if (iVar16 != 0) {
      uVar20 = 0;
      plVar11 = (long *)(param_2[4] + 8);
      do {
        if (*plVar11 == lVar15) {
          lVar4 = plVar11[-1];
          _memcmp(lVar4,puVar3,lVar15);
          if ((int)lVar4 == 0) goto LAB_109dc9d8c;
        }
        uVar20 = uVar20 + 1;
        plVar11 = plVar11 + 6;
        if (uVar8 == uVar20) break;
      } while( true );
    }
    uStack_168 = 0x503;
    apuStack_188[0] = &UNK_10f5fc0ad;
    puStack_178 = puVar3;
    lStack_170 = lVar15;
    appuStack_160[0] = apuStack_188;
    puStack_150 = &UNK_10f5fc0bf;
    uStack_140 = 0x302;
    uStack_128 = *param_2;
    uStack_120 = param_2[1];
    apppuStack_138[0] = appuStack_160;
    uStack_118 = 0x502;
    ppppuStack_108 = apppuStack_138;
    pbStack_f8 = &DAT_10f638984;
    uStack_e8 = CONCAT22(uStack_e8._2_2_,0x302);
    FUN_109dd98f8(param_1,lVar13,&ppppuStack_108,0,0);
    uVar17 = (uint)param_1;
    goto LAB_109dca028;
  }
LAB_109dc9d8c:
  if (pppuStack_d0 != (undefined ***)CONCAT62(uStack_c6,uStack_c8)) {
    lVar13 = *param_3;
    uVar12 = (param_3[1] - lVar13 >> 3) * -0x5555555555555555;
    uVar17 = (uint)uVar20;
    if (uVar12 < (uVar20 & 0xffffffff) || uVar12 - (uVar20 & 0xffffffff) == 0) {
      func_0x000109dca980(param_3,uVar17 + 1);
      lVar13 = *param_3;
    }
    if ((undefined ****)(lVar13 + (uVar20 & 0xffffffff) * 0x18) != &pppuStack_d0) {
      FUN_109dcb3a4();
    }
    if ((uint)uStack_a0 <= uVar17) {
      FUN_109dcb0ec(&puStack_a8,uVar17 + 1);
    }
    *(long *)(puStack_a8 + (uVar20 & 0xffffffff) * 8) = param_1[0x11];
  }
  if (*(int *)param_1[6] == 0x19) {
    (**(code **)(*param_1 + 0xb8))(param_1);
  }
  else if (*(int *)param_1[6] == 9) {
    if (iVar16 == 0) {
      uVar17 = 0;
    }
    else {
      lVar4 = 0;
      lVar15 = 0;
      lVar13 = 0;
      uVar17 = 0;
      do {
        if (*(long *)(*param_3 + lVar15) == ((long *)(*param_3 + lVar15))[1]) {
          lVar10 = param_2[4];
          if (*(char *)(lVar10 + lVar13 + 0x28) == '\x01') {
            lVar7 = *(long *)(puStack_a8 + lVar4);
            if (lVar7 == 0) {
              lVar7 = param_1[0x11];
            }
            uStack_168 = 0x503;
            apuStack_188[0] = &UNK_10f5fc0dc;
            puStack_178 = *(undefined **)(lVar10 + lVar13);
            lStack_170 = ((undefined8 *)(lVar10 + lVar13))[1];
            appuStack_160[0] = apuStack_188;
            puStack_150 = &UNK_10f5fc103;
            uStack_140 = 0x302;
            uStack_128 = *param_2;
            uStack_120 = param_2[1];
            apppuStack_138[0] = appuStack_160;
            uStack_118 = 0x502;
            pbStack_f8 = &DAT_10f638984;
            uStack_e8 = CONCAT22(uStack_e8._2_2_,0x302);
            ppppuStack_108 = apppuStack_138;
            FUN_109dd98f8(param_1,lVar7,&ppppuStack_108,0,0);
            lVar10 = param_2[4];
            uVar17 = 1;
          }
          plVar11 = (long *)(lVar10 + lVar13 + 0x10);
          if ((*plVar11 != *(long *)(lVar10 + lVar13 + 0x18)) &&
             (plVar11 != (long *)(*param_3 + lVar15))) {
            FUN_109dcb3a4();
          }
        }
        lVar13 = lVar13 + 0x30;
        lVar15 = lVar15 + 0x18;
        lVar4 = lVar4 + 8;
      } while (uVar8 * 0x30 - lVar13 != 0);
    }
LAB_109dca028:
    ppppuStack_108 = &pppuStack_d0;
    FUN_109dabaec(&ppppuStack_108);
LAB_109dca03c:
    puVar6 = puStack_a8;
    if (puStack_a8 != auStack_98) {
      _free();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return uVar17 & 1;
    }
    ___stack_chk_fail();
    ppppuStack_108 = &pppuStack_d0;
    FUN_109dabaec(&ppppuStack_108);
    do {
      if (puStack_a8 != auStack_98) {
        _free();
      }
      __Unwind_Resume(puVar6);
    } while( true );
  }
  ppppuStack_108 = &pppuStack_d0;
  FUN_109dabaec(&ppppuStack_108);
  uVar17 = iVar19 + 1;
  uVar20 = (ulong)uVar17;
  if (iVar16 - 1U < uVar17) goto LAB_109dca088;
  goto LAB_109dc9bd0;
LAB_109dc9f18:
  pbVar9 = pbVar9 + 1;
  pbStack_110 = pbVar9;
  FUN_109dcacec(param_1,pbVar9,(int)param_1[0x23]);
  (**(code **)(*param_1 + 0xb8))(param_1);
  pbStack_f8 = pbVar9 + -(long)pbVar18;
  ppppuStack_108 = (undefined ****)CONCAT44(ppppuStack_108._4_4_,3);
  uStack_e8 = 0x40;
  ppuStack_f0 = (undefined **)0x0;
  pbStack_100 = pbVar18;
  FUN_109dcab20(&pppuStack_d0,&ppppuStack_108);
  goto LAB_109dc9d34;
LAB_109dca088:
  puStack_e0 = &UNK_10f5fc110;
  uStack_c0 = 0x103;
  plVar11 = param_1;
  (**(code **)(*param_1 + 0x28))();
  FUN_109dd98f8(param_1,plVar11[0xc],&puStack_e0,0,0);
  uVar17 = 1;
  goto LAB_109dca03c;
}



/* Entry: 109dca368; end: 109dca8af;  */

void FUN_109dca368(long param_1,long param_2,long param_3,ulong param_4,long param_5,ulong param_6,
                  long param_7,ulong param_8,char param_9,undefined4 param_10,undefined8 param_11)

{
  ulong uVar1;
  undefined1 *puVar2;
  long lVar3;
  int *piVar4;
  char cVar5;
  undefined8 *******pppppppuVar6;
  ulong uVar7;
  char *pcVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  long *plVar12;
  byte bVar13;
  byte bVar14;
  uint uVar15;
  ulong uVar16;
  int iVar17;
  ulong *puVar18;
  ulong uVar19;
  int *piVar20;
  undefined8 ******ppppppuStack_88;
  ulong uStack_80;
  byte bStack_71;
  undefined2 uStack_68;
  
  iVar17 = (int)param_6;
  if (iVar17 == 0) {
    bVar13 = 0;
    bVar14 = 0;
    if ((*(byte *)(param_1 + 0x31c) & 1) != 0) goto LAB_109dca3d0;
  }
  else {
    bVar13 = *(byte *)(param_5 + param_6 * 0x30 + -7);
  }
  bVar14 = bVar13;
  if (param_8 != (param_6 & 0xffffffff)) {
    ppppppuStack_88 = (undefined8 ******)&UNK_10f5fc17f;
    uStack_68 = 0x103;
    FUN_109dd98f8(param_1,param_11,&ppppppuStack_88,0,0);
    return;
  }
LAB_109dca3d0:
  if (param_4 == 0) {
    return;
  }
LAB_109dca408:
  uVar19 = 0;
  uVar15 = 2;
  do {
    if (iVar17 == 0 && ((*(byte *)(param_1 + 0x31c) ^ 1) & 1) == 0) {
      if (*(char *)(param_3 + uVar19) == '$' && param_4 - 1 != uVar19) {
        bVar13 = *(byte *)(param_3 + uVar19 + 1);
        if (((bVar13 == 0x24) || (bVar13 == 0x6e)) ||
           ((*(uint *)(PTR___DefaultRuneLocale_11034bcf8 + (ulong)bVar13 * 4 + 0x3c) >> 10 & 1) != 0
           )) break;
      }
    }
    else if ((param_4 - 1 != uVar19) && (*(char *)(param_3 + uVar19) == '\\')) break;
    uVar19 = uVar19 + 1;
    uVar15 = uVar15 + 1;
    if (param_4 == uVar19) {
      FUN_109d2f728(param_2,param_3,param_4);
      return;
    }
  } while( true );
  FUN_109d2f728(param_2,param_3,uVar19);
  if ((iVar17 == 0) && ((*(byte *)(param_1 + 0x31c) & 1) != 0)) {
    cVar5 = *(char *)(param_3 + uVar19 + 1);
    if (cVar5 == 'n') {
      FUN_109df9d4c(param_2,param_8,0,0,0);
    }
    else if (cVar5 == '$') {
      puVar2 = *(undefined1 **)(param_2 + 0x20);
      if (puVar2 < *(undefined1 **)(param_2 + 0x18)) {
        *(undefined1 **)(param_2 + 0x20) = puVar2 + 1;
        *puVar2 = 0x24;
      }
      else {
        FUN_109e05570(param_2,0x24);
      }
    }
    else if ((int)cVar5 - 0x30 < param_8) {
      plVar12 = (long *)(param_7 + (ulong)((int)cVar5 - 0x30) * 0x18);
      lVar3 = plVar12[1];
      for (lVar9 = *plVar12; lVar9 != lVar3; lVar9 = lVar9 + 0x28) {
        FUN_109d2f728(param_2,*(undefined8 *)(lVar9 + 8),*(undefined8 *)(lVar9 + 0x10));
      }
    }
    uVar16 = uVar19 + 2;
  }
  else {
    if (((param_9 == '\0') || (uVar16 = (ulong)((int)uVar19 + 2), param_4 == uVar16)) ||
       (*(char *)(param_3 + (uVar19 + 1 & 0xffffffff)) != '@')) {
      do {
        uVar16 = (ulong)(uVar15 - 1);
        iVar10 = (int)*(char *)(param_3 + uVar16);
        FUN_109dcb648();
        uVar11 = (ulong)uVar15;
        uVar15 = uVar15 + 1;
      } while (iVar10 != 0 && param_4 != uVar11);
    }
    lVar9 = param_3 + uVar19;
    if ((uVar16 - 2 == uVar19) && (*(char *)(lVar9 + 1) == '@')) {
      FUN_109df9d4c(param_2,*(undefined4 *)(param_1 + 0x1a4),0,0,0);
      uVar16 = uVar19 + 2;
    }
    else {
      if (iVar17 == 0) {
        uVar11 = 0;
LAB_109dca620:
        if ((int)uVar11 != iVar17) {
          plVar12 = (long *)(param_7 + (uVar11 & 0xffffffff) * 0x18);
          piVar20 = (int *)*plVar12;
          piVar4 = (int *)plVar12[1];
          if (piVar20 != piVar4) {
            do {
              if ((*(byte *)(param_1 + 799) & 1) == 0) {
                iVar10 = *piVar20;
LAB_109dca6fc:
                if (iVar10 == 3 && (bVar14 & (int)uVar11 == iVar17 + -1) == 0) {
                  pcVar8 = *(char **)(piVar20 + 2);
                  lVar9 = *(long *)(piVar20 + 4);
                  uVar19 = (ulong)(lVar9 != 0);
                  if (lVar9 != 0) {
                    pcVar8 = pcVar8 + 1;
                  }
                  uVar7 = uVar19;
                  if (uVar19 <= lVar9 - 1U) {
                    uVar7 = lVar9 - 1U;
                  }
                  uVar1 = 0;
                  if (lVar9 != 0) {
                    uVar1 = uVar7;
                  }
                  lVar9 = uVar1 - uVar19;
                }
                else {
                  pcVar8 = *(char **)(piVar20 + 2);
LAB_109dca710:
                  lVar9 = *(long *)(piVar20 + 4);
                }
                FUN_109d2f728(param_2,pcVar8,lVar9);
              }
              else {
                pcVar8 = *(char **)(piVar20 + 2);
                iVar10 = *piVar20;
                if (*pcVar8 != '%') {
                  if (*pcVar8 != '<') goto LAB_109dca6fc;
                  if (iVar10 == 3) {
                    lVar9 = *(long *)(piVar20 + 4);
                    uVar19 = (ulong)(lVar9 != 0);
                    if (lVar9 != 0) {
                      pcVar8 = pcVar8 + 1;
                    }
                    uVar7 = uVar19;
                    if (uVar19 <= lVar9 - 1U) {
                      uVar7 = lVar9 - 1U;
                    }
                    uVar1 = 0;
                    if (lVar9 != 0) {
                      uVar1 = uVar7;
                    }
                    FUN_109dcb6b8(&ppppppuStack_88,pcVar8,uVar1 - uVar19);
                    uVar19 = uStack_80;
                    pppppppuVar6 = (undefined8 *******)ppppppuStack_88;
                    if (-1 < (char)bStack_71) {
                      uVar19 = (ulong)bStack_71;
                      pppppppuVar6 = &ppppppuStack_88;
                    }
                    FUN_109e0560c(param_2,pppppppuVar6,uVar19);
                    if ((char)bStack_71 < '\0') {
                      __ZdlPv(ppppppuStack_88);
                    }
                    goto LAB_109dca744;
                  }
                  goto LAB_109dca710;
                }
                if (iVar10 != 4) goto LAB_109dca6fc;
                plVar12 = (long *)(piVar20 + 6);
                if (0x40 < (uint)piVar20[8]) {
                  plVar12 = (long *)*plVar12;
                }
                FUN_109df9ee0(param_2,*plVar12,0,0);
              }
LAB_109dca744:
              piVar20 = piVar20 + 10;
            } while (piVar20 != piVar4);
          }
          goto LAB_109dca810;
        }
      }
      else {
        uVar11 = 0;
        puVar18 = (ulong *)(param_5 + 8);
        do {
          if (~*puVar18 + uVar16 == uVar19) {
            if (uVar16 - 1 == uVar19) goto LAB_109dca620;
            uVar7 = puVar18[-1];
            _memcmp(uVar7,lVar9 + 1,~uVar19 + uVar16);
            if ((int)uVar7 == 0) goto LAB_109dca620;
          }
          puVar18 = puVar18 + 6;
          uVar11 = uVar11 + 1;
        } while ((param_6 & 0xffffffff) != uVar11);
      }
      if ((*(char *)(param_3 + uVar19 + 1) == '(') && (*(char *)(param_3 + uVar19 + 2) == ')')) {
        uVar16 = uVar19 + 3;
      }
      else {
        puVar2 = *(undefined1 **)(param_2 + 0x20);
        if (puVar2 < *(undefined1 **)(param_2 + 0x18)) {
          *(undefined1 **)(param_2 + 0x20) = puVar2 + 1;
          *puVar2 = 0x5c;
        }
        else {
          FUN_109e05570(param_2,0x5c);
        }
        FUN_109d2f728(param_2,lVar9 + 1,~uVar19 + uVar16);
      }
    }
  }
LAB_109dca810:
  uVar19 = param_4;
  if (uVar16 <= param_4) {
    uVar19 = uVar16;
  }
  param_3 = param_3 + uVar19;
  param_4 = param_4 - uVar19;
  if (param_4 == 0) {
    return;
  }
  goto LAB_109dca408;
}



/* Entry: 109dca8b0; end: 109dcab1f;  */

void FUN_109dca8b0(ulong *param_1,undefined8 *param_2,int param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  bool bVar3;
  ulong uVar4;
  ulong *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  ulong *puVar15;
  undefined8 uVar16;
  ulong uStack_118;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  ulong uStack_100;
  ulong *puStack_f8;
  ulong uStack_f0;
  ulong uStack_a8;
  
  puVar5 = (ulong *)param_1[1];
  if (puVar5 < (ulong *)param_1[2]) {
    puVar15 = puVar5 + 1;
    *puVar5 = (ulong)param_2;
LAB_109dca95c:
    param_1[1] = (ulong)puVar15;
    return;
  }
  uVar12 = *param_1;
  uVar4 = ((long)((long)puVar5 - uVar12) >> 3) + 1;
  if (uVar4 >> 0x3d == 0) {
    uVar7 = (long)param_1[2] - uVar12;
    uVar11 = (long)uVar7 >> 2;
    if (uVar11 <= uVar4) {
      uVar11 = uVar4;
    }
    if (0x7ffffffffffffff7 < uVar7) {
      uVar11 = 0x1fffffffffffffff;
    }
    if (uVar11 >> 0x3d == 0) {
      uVar4 = uVar11 << 3;
      __Znwm();
      puVar5 = (ulong *)(uVar4 + ((long)puVar5 - uVar12));
      puVar15 = puVar5 + 1;
      *puVar5 = (ulong)param_2;
      _memcpy();
      *param_1 = uVar4;
      param_1[1] = (ulong)puVar15;
      param_1[2] = uVar4 + uVar11 * 8;
      if (uVar12 != 0) {
        __ZdlPv(uVar12);
      }
      goto LAB_109dca95c;
    }
  }
  else {
    FUN_109dcb734();
  }
  func_0x000104c4f740();
  uVar4 = *param_1;
  uVar12 = param_1[1];
  lVar14 = uVar12 - uVar4;
  bVar3 = param_2 < (undefined8 *)((lVar14 >> 3) * -0x5555555555555555);
  uStack_f0 = (long)param_2 + (lVar14 >> 3) * 0x5555555555555555;
  if (bVar3 || uStack_f0 == 0) {
    if (bVar3) {
      uVar4 = uVar4 + (long)param_2 * 0x18;
      while (uVar12 != uVar4) {
        uVar12 = uVar12 - 0x18;
        uStack_a8 = uVar12;
        FUN_109dabaec(&uStack_a8);
      }
      param_1[1] = uVar4;
    }
  }
  else if ((ulong)(((long)(param_1[2] - uVar12) >> 3) * -0x5555555555555555) < uStack_f0) {
    lVar8 = (long)(param_1[2] - uVar4) >> 3;
    puVar10 = (undefined8 *)(lVar8 * 0x5555555555555556);
    if (puVar10 < param_2 || (long)puVar10 - (long)param_2 == 0) {
      puVar10 = param_2;
    }
    if (0x555555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
      puVar10 = (undefined8 *)0xaaaaaaaaaaaaaaa;
    }
    if ((undefined8 *)0xaaaaaaaaaaaaaaa < puVar10) {
      func_0x000104c4f740();
      puVar10 = (undefined8 *)param_1[1];
      if (puVar10 < (undefined8 *)param_1[2]) {
        uVar16 = param_2[1];
        uVar9 = *param_2;
        puVar10[2] = param_2[2];
        puVar10[1] = uVar16;
        *puVar10 = uVar9;
        uVar2 = *(uint *)(param_2 + 4);
        *(uint *)(puVar10 + 4) = uVar2;
        if (uVar2 < 0x41) {
          puVar10[3] = param_2[3];
        }
        else {
          uVar4 = (ulong)uVar2 + 0x3f >> 3 & 0x3ffffff8;
          __Znam();
          puVar10[3] = uVar4;
          _memcpy();
        }
        puVar10 = puVar10 + 5;
        param_1[1] = (ulong)puVar10;
      }
      else {
        uVar12 = (long)puVar10 - *param_1;
        uVar4 = ((long)uVar12 >> 3) * -0x3333333333333333 + 1;
        if (0x666666666666666 < uVar4) {
          puVar5 = param_1;
          FUN_109dcb15c();
          param_1[1] = uVar12;
          __Unwind_Resume();
          plVar13 = (long *)puVar5[0x1e];
          if (param_3 == 0) {
            plVar6 = plVar13;
            FUN_109e00498(plVar13,param_2);
            param_3 = (int)plVar6;
          }
          lVar14 = *(long *)(*plVar13 + (ulong)(param_3 - 1) * 0x18);
          *(int *)(puVar5 + 0x23) = param_3;
          puVar10 = *(undefined8 **)(lVar14 + 8);
          lVar14 = *(long *)(lVar14 + 0x10);
          puVar5[0x18] = (ulong)puVar10;
          puVar5[0x19] = lVar14 - (long)puVar10;
          if (param_2 != (undefined8 *)0x0) {
            puVar10 = param_2;
          }
          puVar5[0x17] = (ulong)puVar10;
          puVar5[0x11] = 0;
          *(undefined1 *)((long)puVar5 + 0xd3) = 1;
          return;
        }
        lVar14 = (long)((long)param_1[2] - *param_1) >> 3;
        uVar11 = lVar14 * -0x6666666666666666;
        if (uVar11 < uVar4 || uVar11 - uVar4 == 0) {
          uVar11 = uVar4;
        }
        if (0x333333333333332 < (ulong)(lVar14 * -0x3333333333333333)) {
          uVar11 = 0x666666666666666;
        }
        puStack_f8 = param_1;
        if (uVar11 == 0) {
          puVar10 = (undefined8 *)0x0;
        }
        else {
          puVar10 = param_2;
          FUN_109dcb170();
        }
        puVar1 = (undefined8 *)(uVar11 + uVar12);
        uVar4 = uVar11 + (long)puVar10 * 0x28;
        uVar9 = param_2[2];
        uVar16 = *param_2;
        puVar1[1] = param_2[1];
        *puVar1 = uVar16;
        puVar1[2] = uVar9;
        uVar2 = *(uint *)(param_2 + 4);
        *(uint *)(puVar1 + 4) = uVar2;
        uStack_118 = uVar11;
        puStack_110 = puVar1;
        uStack_100 = uVar4;
        if (uVar2 < 0x41) {
          puVar1[3] = param_2[3];
        }
        else {
          uVar12 = (ulong)uVar2 + 0x3f >> 3 & 0x3ffffff8;
          puStack_108 = puVar1;
          __Znam();
          puVar1[3] = uVar12;
          _memcpy();
        }
        puVar10 = puVar1 + 5;
        uVar12 = (long)puVar1 + (*param_1 - param_1[1]);
        puStack_108 = puVar10;
        FUN_109dcb1b4(param_1,*param_1,param_1[1],uVar12);
        uStack_118 = *param_1;
        *param_1 = uVar12;
        param_1[1] = (ulong)puVar10;
        uStack_100 = param_1[2];
        param_1[2] = uVar4;
        puStack_110 = (undefined8 *)uStack_118;
        puStack_108 = (undefined8 *)uStack_118;
        FUN_109dcb33c(&uStack_118);
      }
      param_1[1] = (ulong)puVar10;
      return;
    }
    uVar12 = (long)puVar10 * 0x18;
    __Znwm();
    lVar8 = ((uStack_f0 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
    _bzero(uVar12 + lVar14,lVar8);
    _memcpy(uVar12,uVar4,lVar14);
    *param_1 = uVar12;
    param_1[1] = uVar12 + lVar14 + lVar8;
    param_1[2] = uVar12 + (long)puVar10 * 0x18;
    if (uVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(uVar4);
      return;
    }
  }
  else {
    lVar14 = ((uStack_f0 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
    _bzero(uVar12,lVar14);
    param_1[1] = uVar12 + lVar14;
  }
  return;
}



/* Entry: 109dcab20; end: 109dcaceb;  */

void FUN_109dcab20(ulong *param_1,undefined8 *param_2,int param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  ulong *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 uVar12;
  ulong uStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  ulong uStack_50;
  ulong *puStack_48;
  
  puVar6 = (undefined8 *)param_1[1];
  if (puVar6 < (undefined8 *)param_1[2]) {
    uVar12 = param_2[1];
    uVar7 = *param_2;
    puVar6[2] = param_2[2];
    puVar6[1] = uVar12;
    *puVar6 = uVar7;
    uVar2 = *(uint *)(param_2 + 4);
    *(uint *)(puVar6 + 4) = uVar2;
    if (uVar2 < 0x41) {
      puVar6[3] = param_2[3];
    }
    else {
      uVar3 = (ulong)uVar2 + 0x3f >> 3 & 0x3ffffff8;
      __Znam();
      puVar6[3] = uVar3;
      _memcpy();
    }
    puVar6 = puVar6 + 5;
    param_1[1] = (ulong)puVar6;
  }
  else {
    uVar10 = (long)puVar6 - *param_1;
    uVar3 = ((long)uVar10 >> 3) * -0x3333333333333333 + 1;
    if (0x666666666666666 < uVar3) {
      puVar4 = param_1;
      FUN_109dcb15c();
      param_1[1] = uVar10;
      __Unwind_Resume();
      plVar11 = (long *)puVar4[0x1e];
      if (param_3 == 0) {
        plVar5 = plVar11;
        FUN_109e00498(plVar11,param_2);
        param_3 = (int)plVar5;
      }
      lVar8 = *(long *)(*plVar11 + (ulong)(param_3 - 1) * 0x18);
      *(int *)(puVar4 + 0x23) = param_3;
      puVar6 = *(undefined8 **)(lVar8 + 8);
      lVar8 = *(long *)(lVar8 + 0x10);
      puVar4[0x18] = (ulong)puVar6;
      puVar4[0x19] = lVar8 - (long)puVar6;
      if (param_2 != (undefined8 *)0x0) {
        puVar6 = param_2;
      }
      puVar4[0x17] = (ulong)puVar6;
      puVar4[0x11] = 0;
      *(undefined1 *)((long)puVar4 + 0xd3) = 1;
      return;
    }
    lVar8 = (long)((long)param_1[2] - *param_1) >> 3;
    uVar9 = lVar8 * -0x6666666666666666;
    if (uVar9 < uVar3 || uVar9 - uVar3 == 0) {
      uVar9 = uVar3;
    }
    if (0x333333333333332 < (ulong)(lVar8 * -0x3333333333333333)) {
      uVar9 = 0x666666666666666;
    }
    puStack_48 = param_1;
    if (uVar9 == 0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      puVar6 = param_2;
      FUN_109dcb170();
    }
    puVar1 = (undefined8 *)(uVar9 + uVar10);
    uVar3 = uVar9 + (long)puVar6 * 0x28;
    uVar7 = param_2[2];
    uVar12 = *param_2;
    puVar1[1] = param_2[1];
    *puVar1 = uVar12;
    puVar1[2] = uVar7;
    uVar2 = *(uint *)(param_2 + 4);
    *(uint *)(puVar1 + 4) = uVar2;
    uStack_68 = uVar9;
    puStack_60 = puVar1;
    uStack_50 = uVar3;
    if (uVar2 < 0x41) {
      puVar1[3] = param_2[3];
    }
    else {
      uVar10 = (ulong)uVar2 + 0x3f >> 3 & 0x3ffffff8;
      puStack_58 = puVar1;
      __Znam();
      puVar1[3] = uVar10;
      _memcpy();
    }
    puVar6 = puVar1 + 5;
    uVar10 = (long)puVar1 + (*param_1 - param_1[1]);
    puStack_58 = puVar6;
    FUN_109dcb1b4(param_1,*param_1,param_1[1],uVar10);
    uStack_68 = *param_1;
    *param_1 = uVar10;
    param_1[1] = (ulong)puVar6;
    uStack_50 = param_1[2];
    param_1[2] = uVar3;
    puStack_60 = (undefined8 *)uStack_68;
    puStack_58 = (undefined8 *)uStack_68;
    FUN_109dcb33c(&uStack_68);
  }
  param_1[1] = (ulong)puVar6;
  return;
}



/* Entry: 109dcacec; end: 109dcad67;  */

void FUN_109dcacec(long param_1,long param_2,int param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)(param_1 + 0xf0);
  if (param_3 == 0) {
    plVar2 = plVar4;
    FUN_109e00498(plVar4,param_2);
    param_3 = (int)plVar2;
  }
  lVar3 = *(long *)(*plVar4 + (ulong)(param_3 - 1) * 0x18);
  *(int *)(param_1 + 0x118) = param_3;
  lVar1 = *(long *)(lVar3 + 8);
  lVar3 = *(long *)(lVar3 + 0x10);
  *(long *)(param_1 + 0xc0) = lVar1;
  *(long *)(param_1 + 200) = lVar3 - lVar1;
  if (param_2 != 0) {
    lVar1 = param_2;
  }
  *(long *)(param_1 + 0xb8) = lVar1;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined1 *)(param_1 + 0xd3) = 1;
  return;
}



/* Entry: 109dcad68; end: 109dcb0eb;  */

long * FUN_109dcad68(long *param_1,long *param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  long *plVar6;
  bool bVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined4 *puVar11;
  long lVar12;
  int iVar13;
  undefined *puStack_68;
  undefined4 *puStack_60;
  undefined4 *puStack_58;
  undefined *puStack_50;
  long *plStack_48;
  
  if (param_3 == 0) {
    iVar13 = 0;
    *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)((long)param_1 + 0x31c);
    while( true ) {
      iVar5 = *(int *)param_1[6];
      if (iVar5 == 0x1b || iVar5 == 0) break;
      if (iVar13 == 0) {
        if (iVar5 == 0xb) {
          FUN_109dc0bd8(param_1 + 5);
          bVar7 = true;
        }
        else {
          bVar7 = false;
          plVar3 = (long *)0x0;
          if (iVar5 == 0x19) goto LAB_109dcb004;
        }
        if (((*(byte *)((long)param_1 + 0x31c) & 1) != 0) ||
           (0x2c < *(uint *)param_1[6] ||
            (1L << ((ulong)*(uint *)param_1[6] & 0x3f) & 0x1fcff980f000U) == 0)) {
          if ((!bVar7) && (iVar5 = *(int *)param_1[6], iVar5 != 9)) goto LAB_109dcae28;
          plVar3 = (long *)0x0;
          goto LAB_109dcb004;
        }
        plVar3 = param_1;
        (**(code **)(*param_1 + 0x28))();
        FUN_109dcab20(param_2,plVar3[1]);
        FUN_109dc0bd8(param_1 + 5);
        iVar13 = 0;
        if (*(int *)param_1[6] == 0xb) {
          FUN_109dc0bd8(param_1 + 5);
          iVar13 = 0;
        }
      }
      else {
        if (iVar5 == 9) {
          puStack_68 = &UNK_10f5fc156;
          plStack_48 = (long *)CONCAT62(plStack_48._2_6_,0x103);
          plVar3 = param_1;
          (**(code **)(*param_1 + 0x28))();
          FUN_109dd98f8(param_1,plVar3[0xc],&puStack_68,0,0);
          goto LAB_109dcb000;
        }
LAB_109dcae28:
        iVar2 = -(uint)(iVar5 == 0x12 && iVar13 != 0);
        if (iVar5 == 0x11) {
          iVar2 = 1;
        }
        plVar3 = param_1;
        (**(code **)(*param_1 + 0x28))();
        FUN_109dcab20(param_2,plVar3[1]);
        iVar13 = iVar2 + iVar13;
        FUN_109dc0bd8(param_1 + 5);
      }
    }
    puStack_68 = &UNK_10f5fc12e;
    plStack_48 = (long *)CONCAT62(plStack_48._2_6_,0x103);
    plVar3 = param_1;
    (**(code **)(*param_1 + 0x28))();
    FUN_109dd98f8(param_1,plVar3[0xc],&puStack_68,0,0);
LAB_109dcb000:
    plVar3 = (long *)0x1;
LAB_109dcb004:
    *(undefined1 *)(param_1 + 0x12) = 1;
  }
  else if (*(int *)param_1[6] == 9) {
    plVar3 = (long *)0x0;
  }
  else {
    plVar3 = param_2;
    (**(code **)(*param_1 + 200))();
    puVar11 = (undefined4 *)param_2[1];
    if (puVar11 < (undefined4 *)param_2[2]) {
      *puVar11 = 3;
      *(long **)(puVar11 + 2) = param_1;
      *(long **)(puVar11 + 4) = plVar3;
      puVar11[8] = 0x40;
      *(undefined8 *)(puVar11 + 6) = 0;
      FUN_109d301fc();
      puVar11 = puVar11 + 10;
      param_2[1] = (long)puVar11;
    }
    else {
      lVar12 = (long)puVar11 - *param_2;
      puVar10 = (undefined *)((lVar12 >> 3) * -0x3333333333333333 + 1);
      if ((undefined *)0x666666666666666 < puVar10) {
        FUN_109dcb15c();
        param_2[1] = lVar12;
        __Unwind_Resume();
        plVar6 = (long *)(ulong)*(uint *)(param_1 + 1);
        plVar4 = param_1;
        if (plVar3 != plVar6) {
          if (plVar6 <= plVar3) {
            if ((long *)(ulong)*(uint *)((long)param_1 + 0xc) < plVar3) {
              func_0x000107c2b01c(param_1,param_1 + 2,plVar3,8);
              plVar6 = (long *)(ulong)*(uint *)(param_1 + 1);
            }
            if ((long)plVar3 - (long)plVar6 != 0) {
              plVar4 = (long *)(*param_1 + (long)plVar6 * 8);
              _bzero(plVar4,((long)plVar3 - (long)plVar6) * 8);
            }
          }
          *(int *)(param_1 + 1) = (int)plVar3;
        }
        return plVar4;
      }
      lVar8 = param_2[2] - *param_2 >> 3;
      puVar9 = (undefined *)(lVar8 * -0x6666666666666666);
      if (puVar9 < puVar10 || (long)puVar9 - (long)puVar10 == 0) {
        puVar9 = puVar10;
      }
      if (0x333333333333332 < (ulong)(lVar8 * -0x3333333333333333)) {
        puVar9 = (undefined *)0x666666666666666;
      }
      plStack_48 = param_2;
      if (puVar9 == (undefined *)0x0) {
        plVar4 = (long *)0x0;
      }
      else {
        plVar4 = plVar3;
        FUN_109dcb170();
      }
      puVar1 = (undefined4 *)(puVar9 + lVar12);
      *puVar1 = 3;
      *(long **)(puVar1 + 2) = param_1;
      *(long **)(puVar1 + 4) = plVar3;
      puVar1[8] = 0x40;
      *(undefined8 *)(puVar1 + 6) = 0;
      puStack_68 = puVar9;
      puStack_60 = puVar1;
      puStack_58 = puVar1;
      puStack_50 = puVar9 + (long)plVar4 * 0x28;
      FUN_109d301fc();
      puVar11 = puVar1 + 10;
      lVar12 = (long)puVar1 + (*param_2 - param_2[1]);
      puStack_58 = puVar11;
      FUN_109dcb1b4(param_2,*param_2,param_2[1],lVar12);
      puStack_68 = (undefined *)*param_2;
      *param_2 = lVar12;
      param_2[1] = (long)puVar11;
      puStack_50 = (undefined *)param_2[2];
      param_2[2] = (long)(puVar9 + (long)plVar4 * 0x28);
      puStack_60 = (undefined4 *)puStack_68;
      puStack_58 = (undefined4 *)puStack_68;
      FUN_109dcb33c(&puStack_68);
    }
    plVar3 = (long *)0x0;
    param_2[1] = (long)puVar11;
  }
  return plVar3;
}



/* Entry: 109dcb0ec; end: 109dcb15b;  */

void FUN_109dcb0ec(long *param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = (ulong)*(uint *)(param_1 + 1);
  if (param_2 != uVar1) {
    if (uVar1 <= param_2) {
      if (*(uint *)((long)param_1 + 0xc) < param_2) {
        func_0x000107c2b01c(param_1,param_1 + 2,param_2,8);
        uVar1 = (ulong)*(uint *)(param_1 + 1);
      }
      if (param_2 - uVar1 != 0) {
        _bzero(*param_1 + uVar1 * 8,(param_2 - uVar1) * 8);
      }
    }
    *(int *)(param_1 + 1) = (int)param_2;
  }
  return;
}



/* Entry: 109dcb15c; end: 109dcb16f;  */

void FUN_109dcb15c(undefined8 param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  ulong *puVar1;
  uint uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined *puStack_a0;
  ulong **ppuStack_98;
  ulong **ppuStack_90;
  undefined1 uStack_88;
  ulong *puStack_80;
  ulong *puStack_78;
  
  puVar3 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((undefined *)0x666666666666666 < puVar3) {
    func_0x000104c4f740();
    ppuStack_98 = &puStack_80;
    ppuStack_90 = &puStack_78;
    uStack_88 = 0;
    puStack_a0 = puVar3;
    puStack_80 = param_4;
    puStack_78 = param_4;
    if (param_2 == param_3) {
      uStack_88 = 1;
    }
    else {
      param_4 = param_4 + 3;
      puVar5 = param_2 + 3;
      do {
        uVar6 = puVar5[-2];
        uVar4 = puVar5[-3];
        param_4[-1] = puVar5[-1];
        param_4[-2] = uVar6;
        param_4[-3] = uVar4;
        uVar2 = (uint)puVar5[1];
        *(uint *)(param_4 + 1) = uVar2;
        if (uVar2 < 0x41) {
          *param_4 = *puVar5;
        }
        else {
          uVar4 = (ulong)uVar2 + 0x3f >> 3 & 0x3ffffff8;
          __Znam();
          *param_4 = uVar4;
          _memcpy();
        }
        puStack_78 = param_4 + 2;
        param_4 = param_4 + 5;
        puVar1 = puVar5 + 2;
        puVar5 = puVar5 + 5;
      } while (puVar1 != param_3);
      uStack_88 = 1;
      do {
        if ((0x40 < (uint)param_2[4]) && (param_2[3] != 0)) {
          __ZdaPv();
        }
        param_2 = param_2 + 5;
      } while (param_2 != param_3);
    }
    FUN_109dcb2d8(&puStack_a0);
    return;
  }
  __Znwm((long)puVar3 * 0x28);
  return;
}



/* Entry: 109dcb170; end: 109dcb1b3;  */

void FUN_109dcb170(ulong param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  ulong *puVar1;
  uint uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uStack_90;
  ulong **ppuStack_88;
  ulong **ppuStack_80;
  undefined1 uStack_78;
  ulong *puStack_70;
  ulong *puStack_68;
  
  if (0x666666666666666 < param_1) {
    func_0x000104c4f740();
    ppuStack_88 = &puStack_70;
    ppuStack_80 = &puStack_68;
    uStack_78 = 0;
    uStack_90 = param_1;
    puStack_70 = param_4;
    puStack_68 = param_4;
    if (param_2 == param_3) {
      uStack_78 = 1;
    }
    else {
      param_4 = param_4 + 3;
      puVar4 = param_2 + 3;
      do {
        uVar5 = puVar4[-2];
        uVar3 = puVar4[-3];
        param_4[-1] = puVar4[-1];
        param_4[-2] = uVar5;
        param_4[-3] = uVar3;
        uVar2 = (uint)puVar4[1];
        *(uint *)(param_4 + 1) = uVar2;
        if (uVar2 < 0x41) {
          *param_4 = *puVar4;
        }
        else {
          uVar3 = (ulong)uVar2 + 0x3f >> 3 & 0x3ffffff8;
          __Znam();
          *param_4 = uVar3;
          _memcpy();
        }
        puStack_68 = param_4 + 2;
        param_4 = param_4 + 5;
        puVar1 = puVar4 + 2;
        puVar4 = puVar4 + 5;
      } while (puVar1 != param_3);
      uStack_78 = 1;
      do {
        if ((0x40 < (uint)param_2[4]) && (param_2[3] != 0)) {
          __ZdaPv();
        }
        param_2 = param_2 + 5;
      } while (param_2 != param_3);
    }
    FUN_109dcb2d8(&uStack_90);
    return;
  }
  __Znwm(param_1 * 0x28);
  return;
}



/* Entry: 109dcb1b4; end: 109dcb2d7;  */

void FUN_109dcb1b4(undefined8 param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  ulong *puVar1;
  uint uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  undefined8 uStack_70;
  ulong **ppuStack_68;
  ulong **ppuStack_60;
  undefined1 uStack_58;
  ulong *puStack_50;
  ulong *puStack_48;
  
  ppuStack_68 = &puStack_50;
  ppuStack_60 = &puStack_48;
  uStack_58 = 0;
  uStack_70 = param_1;
  puStack_50 = param_4;
  puStack_48 = param_4;
  if (param_2 == param_3) {
    uStack_58 = 1;
  }
  else {
    param_4 = param_4 + 3;
    puVar4 = param_2 + 3;
    do {
      uVar5 = puVar4[-2];
      uVar3 = puVar4[-3];
      param_4[-1] = puVar4[-1];
      param_4[-2] = uVar5;
      param_4[-3] = uVar3;
      uVar2 = (uint)puVar4[1];
      *(uint *)(param_4 + 1) = uVar2;
      if (uVar2 < 0x41) {
        *param_4 = *puVar4;
      }
      else {
        uVar3 = (ulong)uVar2 + 0x3f >> 3 & 0x3ffffff8;
        __Znam();
        *param_4 = uVar3;
        _memcpy();
      }
      puStack_48 = param_4 + 2;
      param_4 = param_4 + 5;
      puVar1 = puVar4 + 2;
      puVar4 = puVar4 + 5;
    } while (puVar1 != param_3);
    uStack_58 = 1;
    do {
      if ((0x40 < (uint)param_2[4]) && (param_2[3] != 0)) {
        __ZdaPv();
      }
      param_2 = param_2 + 5;
    } while (param_2 != param_3);
  }
  FUN_109dcb2d8(&uStack_70);
  return;
}



/* Entry: 109dcb2d8; end: 109dcb33b;  */

long FUN_109dcb2d8(long param_1)

{
  long lVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar1 = **(long **)(param_1 + 8);
    for (lVar2 = **(long **)(param_1 + 0x10); lVar2 != lVar1; lVar2 = lVar2 + -0x28) {
      if ((0x40 < *(uint *)(lVar2 + -8)) && (*(long *)(lVar2 + -0x10) != 0)) {
        __ZdaPv();
      }
    }
  }
  return param_1;
}



/* Entry: 109dcb33c; end: 109dcb3a3;  */

long * FUN_109dcb33c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1[1];
  lVar3 = param_1[2];
  while (lVar2 = lVar3, lVar2 != lVar1) {
    lVar3 = lVar2 + -0x28;
    param_1[2] = lVar3;
    if ((0x40 < *(uint *)(lVar2 + -8)) && (*(long *)(lVar2 + -0x10) != 0)) {
      __ZdaPv();
      lVar3 = param_1[2];
    }
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109dcb3a4; end: 109dcb563;  */

undefined8 *
FUN_109dcb3a4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 unaff_x24;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puStack_a0;
  undefined8 **ppuStack_98;
  undefined8 **ppuStack_90;
  undefined1 uStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  
  lVar6 = param_1[2];
  puVar8 = (undefined8 *)*param_1;
  puVar7 = param_1;
  if (param_4 <= (undefined8 *)((lVar6 - (long)puVar8 >> 3) * -0x3333333333333333)) {
    puVar9 = (undefined8 *)param_1[1];
    if (param_4 <= (undefined8 *)(((long)puVar9 - (long)puVar8 >> 3) * -0x3333333333333333)) {
      for (; param_2 != param_3; param_2 = param_2 + 5) {
        uVar11 = param_2[1];
        uVar10 = *param_2;
        puVar8[2] = param_2[2];
        puVar8[1] = uVar11;
        *puVar8 = uVar10;
        func_0x000109d3015c(puVar8 + 3,param_2 + 3);
        puVar8 = puVar8 + 5;
      }
      puVar9 = param_1;
      for (puVar7 = (undefined8 *)param_1[1]; puVar7 != puVar8; puVar7 = puVar7 + -5) {
        if ((0x40 < *(uint *)(puVar7 + -1)) &&
           (puVar9 = (undefined8 *)puVar7[-2], puVar9 != (undefined8 *)0x0)) {
          __ZdaPv();
        }
      }
      param_1[1] = puVar8;
      return puVar9;
    }
    puVar2 = (undefined8 *)((long)param_2 + ((long)puVar9 - (long)puVar8));
    if (puVar9 != puVar8) {
      do {
        uVar11 = param_2[1];
        uVar10 = *param_2;
        puVar8[2] = param_2[2];
        puVar8[1] = uVar11;
        *puVar8 = uVar10;
        func_0x000109d3015c(puVar8 + 3,param_2 + 3);
        param_2 = param_2 + 5;
        puVar8 = puVar8 + 5;
      } while (param_2 != puVar2);
      puVar9 = (undefined8 *)param_1[1];
    }
    FUN_109dcb564(param_1,puVar2,param_3,puVar9);
LAB_109dcb4ec:
    param_1[1] = puVar7;
    return puVar7;
  }
  puVar2 = param_1;
  puVar4 = param_2;
  puVar5 = param_3;
  puVar9 = param_4;
  if (puVar8 != (undefined8 *)0x0) {
    puVar4 = puVar8;
    FUN_109dabb2c(param_1);
    puVar2 = (undefined8 *)*param_1;
    __ZdlPv();
    lVar6 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  if (param_4 < (undefined8 *)0x666666666666667) {
    puVar2 = (undefined8 *)((lVar6 >> 3) * -0x6666666666666666);
    if (puVar2 < param_4 || (long)puVar2 - (long)param_4 == 0) {
      puVar2 = param_4;
    }
    if (0x333333333333332 < (ulong)((lVar6 >> 3) * -0x3333333333333333)) {
      puVar2 = (undefined8 *)0x666666666666666;
    }
    if (puVar2 < (undefined8 *)0x666666666666667) {
      FUN_109dcb170();
      *param_1 = puVar2;
      param_1[1] = puVar2;
      param_1[2] = puVar2 + (long)puVar4 * 5;
      FUN_109dcb564(param_1,param_2,param_3,puVar2);
      goto LAB_109dcb4ec;
    }
  }
  FUN_109dcb15c();
  param_1[1] = unaff_x24;
  __Unwind_Resume();
  param_1[1] = puVar8;
  __Unwind_Resume();
  pcStack_48 = FUN_109dcb564;
  ppuStack_98 = &puStack_80;
  ppuStack_90 = &puStack_78;
  uStack_88 = 0;
  puStack_a0 = puVar2;
  puStack_80 = puVar9;
  puStack_70 = puVar8;
  puStack_68 = param_2;
  puStack_60 = param_3;
  puStack_58 = param_1;
  puStack_50 = &stack0xfffffffffffffff0;
  if (puVar4 != puVar5) {
    puVar8 = puVar4 + 3;
    do {
      uVar11 = puVar8[-2];
      uVar10 = puVar8[-3];
      puVar9[2] = puVar8[-1];
      puVar9[1] = uVar11;
      *puVar9 = uVar10;
      uVar1 = *(uint *)(puVar8 + 1);
      *(uint *)(puVar9 + 4) = uVar1;
      if (uVar1 < 0x41) {
        puVar9[3] = *puVar8;
      }
      else {
        uVar3 = (ulong)uVar1 + 0x3f >> 3 & 0x3ffffff8;
        puStack_78 = puVar9;
        __Znam();
        puVar9[3] = uVar3;
        _memcpy();
      }
      puVar9 = puVar9 + 5;
      puVar7 = puVar8 + 2;
      puVar8 = puVar8 + 5;
    } while (puVar7 != puVar5);
  }
  uStack_88 = 1;
  puStack_78 = puVar9;
  FUN_109dcb2d8(&puStack_a0);
  return puVar9;
}



/* Entry: 109dcb564; end: 109dcb647;  */

undefined8 *
FUN_109dcb564(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined1 uStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  ppuStack_58 = &puStack_40;
  ppuStack_50 = &puStack_38;
  uStack_48 = 0;
  uStack_60 = param_1;
  puStack_40 = param_4;
  if (param_2 != param_3) {
    puVar4 = param_2 + 3;
    do {
      uVar6 = puVar4[-2];
      uVar5 = puVar4[-3];
      param_4[2] = puVar4[-1];
      param_4[1] = uVar6;
      *param_4 = uVar5;
      uVar2 = *(uint *)(puVar4 + 1);
      *(uint *)(param_4 + 4) = uVar2;
      if (uVar2 < 0x41) {
        param_4[3] = *puVar4;
      }
      else {
        uVar3 = (ulong)uVar2 + 0x3f >> 3 & 0x3ffffff8;
        puStack_38 = param_4;
        __Znam();
        param_4[3] = uVar3;
        _memcpy();
      }
      param_4 = param_4 + 5;
      puVar1 = puVar4 + 2;
      puVar4 = puVar4 + 5;
    } while (puVar1 != param_3);
  }
  uStack_48 = 1;
  puStack_38 = param_4;
  FUN_109dcb2d8(&uStack_60);
  return param_4;
}



/* Entry: 109dcb648; end: 109dcb6b7;  */

uint FUN_109dcb648(uint param_1)

{
  uint uVar1;
  
  if ((int)param_1 < 0) {
    uVar1 = param_1 & 0xff;
    ___maskrune(uVar1,0x500);
  }
  else {
    uVar1 = *(uint *)(PTR___DefaultRuneLocale_11034bcf8 + (long)(int)param_1 * 4 + 0x3c) & 0x500;
  }
  if (uVar1 == 0) {
    uVar1 = 0;
    if (param_1 - 0x24 < 0x3c) {
      uVar1 = (uint)(0x800000000000401 >> ((ulong)(param_1 - 0x24) & 0x3f));
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1 & 1;
}



/* Entry: 109dcb6b8; end: 109dcb733;  */

void FUN_109dcb6b8(undefined8 *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_3 != 0) {
    uVar1 = 0;
    do {
      if (*(char *)(param_2 + uVar1) == '!') {
        uVar1 = uVar1 + 1;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (param_1,(long)*(char *)(param_2 + uVar1));
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_3);
  }
  return;
}



/* Entry: 109dcb734; end: 109dcb747;  */

void FUN_109dcb734(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lStack_48;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  lVar3 = *plVar1;
  if (lVar3 != 0) {
    lVar4 = plVar1[1];
    lVar2 = lVar3;
    if (lVar4 != lVar3) {
      do {
        lVar4 = lVar4 + -0x18;
        lStack_48 = lVar4;
        FUN_109dabaec(&lStack_48);
      } while (lVar4 != lVar3);
      lVar2 = *plVar1;
    }
    plVar1[1] = lVar3;
    __ZdlPv(lVar2);
  }
  return;
}



/* Entry: 109dcb748; end: 109dcb7af;  */

void FUN_109dcb748(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_38;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar3 = param_1[1];
    lVar1 = lVar2;
    if (lVar3 != lVar2) {
      do {
        lVar3 = lVar3 + -0x18;
        lStack_38 = lVar3;
        FUN_109dabaec(&lStack_38);
      } while (lVar3 != lVar2);
      lVar1 = *param_1;
    }
    param_1[1] = lVar2;
    __ZdlPv(lVar1);
  }
  return;
}



/* Entry: 109dcb7b0; end: 109dcb8ef;  */

undefined8 FUN_109dcb7b0(ulong *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  plVar2 = (long *)*param_1;
  uStack_48 = 0;
  uStack_40 = 0;
  lStack_38 = 0;
  plVar1 = plVar2;
  (**(code **)(*plVar2 + 0x108))();
  if (((ulong)plVar1 & 1) == 0) {
    do {
      plVar1 = plVar2;
      (**(code **)(*plVar2 + 0xd0))(plVar2,&uStack_48);
      if (((ulong)plVar1 & 1) != 0) goto LAB_109dcb7e8;
      plVar1 = plVar2;
      (**(code **)(*plVar2 + 0x38))();
      (**(code **)(*plVar1 + 0x1e0))();
      if ((*(byte *)param_1[1] & 1) != 0) goto LAB_109dcb87c;
      plVar1 = plVar2;
      (**(code **)(*plVar2 + 0x28))();
    } while (*(int *)plVar1[1] == 3);
    if (*(char *)param_1[1] == '\x01') {
LAB_109dcb87c:
      (**(code **)(*plVar2 + 0x38))();
      (**(code **)(*plVar2 + 0x1e0))();
    }
    uVar3 = 0;
  }
  else {
LAB_109dcb7e8:
    uVar3 = 1;
  }
  if (lStack_38 < 0) {
    __ZdlPv(uStack_48);
  }
  return uVar3;
}



/* Entry: 109dcb8f0; end: 109dcba4b;  */

void FUN_109dcb8f0(ulong *param_1)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined *apuStack_60 [4];
  undefined2 uStack_40;
  char *pcStack_38;
  
  plVar5 = (long *)*param_1;
  plVar2 = plVar5;
  (**(code **)(*plVar5 + 0x28))();
  lVar4 = plVar2[0xc];
  plVar2 = plVar5;
  (**(code **)(*plVar5 + 0x108))();
  if (((ulong)plVar2 & 1) == 0) {
    apuStack_60[0] = (undefined *)0x0;
    plVar2 = plVar5;
    (**(code **)(*plVar5 + 0xe8))(plVar5,&pcStack_38,apuStack_60);
    if (((ulong)plVar2 & 1) == 0) {
      if (*pcStack_38 == '\x01') {
        uVar6 = *(ulong *)(pcStack_38 + 0x10);
        uVar1 = *(int *)param_1[1] << 3;
        if ((uVar1 < 0x40 && 0xffffffffffffffffU >> (-(ulong)uVar1 & 0x3f) < uVar6) &&
           (uVar3 = -1L << ((ulong)uVar1 - 1 & 0x3f),
           (long)uVar6 < (long)uVar3 || (long)~uVar3 < (long)uVar6)) {
          apuStack_60[0] = &UNK_10f5fc199;
          uStack_40 = 0x103;
          FUN_109dd98f8(plVar5,lVar4,apuStack_60,0,0);
        }
        else {
          (**(code **)(*plVar5 + 0x38))();
          (**(code **)(*plVar5 + 0x1f8))();
        }
      }
      else {
        (**(code **)(*plVar5 + 0x38))();
        (**(code **)(*plVar5 + 0x1f0))();
      }
    }
  }
  return;
}



/* Entry: 109dcba4c; end: 109dcbb1b;  */

long * FUN_109dcba4c(ulong *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  plVar3 = (long *)*param_1;
  plVar2 = plVar3;
  (**(code **)(*plVar3 + 0x108))();
  if (((ulong)plVar2 & 1) == 0) {
    plVar2 = plVar3;
    FUN_109dcbb1c(plVar3,auStack_48,auStack_50);
    if (((ulong)plVar2 & 1) == 0) {
      plVar1 = plVar3;
      (**(code **)(*plVar3 + 0x38))();
      (**(code **)(*plVar1 + 0x1f8))();
      (**(code **)(*plVar3 + 0x38))();
      (**(code **)(*plVar3 + 0x1f8))();
    }
  }
  else {
    plVar2 = (long *)0x1;
  }
  return plVar2;
}



/* Entry: 109dcbb1c; end: 109dcbd87;  */

long * FUN_109dcbb1c(long *param_1,ulong *param_2,ulong *param_3)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong *puVar4;
  uint uVar5;
  ulong *puStack_88;
  uint uStack_80;
  ulong *puStack_78;
  uint uStack_70;
  undefined2 uStack_58;
  
  plVar2 = param_1;
  (**(code **)(*param_1 + 0x28))();
  if ((*(int *)plVar2[1] != 4) &&
     (plVar2 = param_1, (**(code **)(*param_1 + 0x28))(), *(int *)plVar2[1] != 5)) {
    puStack_78 = (ulong *)&UNK_10f5fc1b4;
    uStack_58 = 0x103;
    plVar2 = param_1;
    (**(code **)(*param_1 + 0x28))();
    FUN_109dd98f8(param_1,plVar2[0xc],&puStack_78,0,0);
    return (long *)0x1;
  }
  plVar2 = param_1;
  (**(code **)(*param_1 + 0x28))();
  uVar3 = *(undefined8 *)(plVar2[1] + 8);
  plVar2 = param_1;
  (**(code **)(*param_1 + 0x28))();
  uVar5 = *(uint *)(plVar2[1] + 0x20);
  uStack_80 = uVar5;
  if (uVar5 < 0x41) {
    puVar4 = *(ulong **)(plVar2[1] + 0x18);
  }
  else {
    puVar4 = (ulong *)((ulong)uVar5 + 0x3f >> 3 & 0x3ffffff8);
    __Znam();
    _memcpy();
  }
  puStack_88 = puVar4;
  (**(code **)(*param_1 + 0xb8))(param_1);
  if (uVar5 < 0x41) {
    *param_2 = 0;
LAB_109dcbc04:
    *param_3 = (ulong)puVar4;
  }
  else {
    iVar1 = (int)&puStack_88;
    func_0x000109df08dc();
    if (0x80 < uVar5 - iVar1) {
      puStack_78 = (ulong *)&UNK_10f5fc199;
      uStack_58 = 0x103;
      FUN_109dd98f8(param_1,uVar3,&puStack_78,0,0);
      goto LAB_109dcbcb4;
    }
    if (uVar5 - iVar1 < 0x41) {
      *param_2 = 0;
      puVar4 = (ulong *)*puVar4;
      goto LAB_109dcbc04;
    }
    FUN_109d31854(&puStack_78,&puStack_88,0x40);
    if (uStack_70 < 0x41) {
      *param_2 = (ulong)puStack_78;
    }
    else {
      *param_2 = *puStack_78;
      __ZdaPv();
    }
    FUN_109df0838(&puStack_78,&puStack_88,0x40);
    if (uStack_70 < 0x41) {
      *param_3 = (ulong)puStack_78;
      uVar5 = uStack_80;
    }
    else {
      *param_3 = *puStack_78;
      __ZdaPv();
      uVar5 = uStack_80;
    }
  }
  param_1 = (long *)0x0;
  if (uVar5 < 0x41) {
    return (long *)0x0;
  }
LAB_109dcbcb4:
  if (puStack_88 != (ulong *)0x0) {
    __ZdaPv();
  }
  return param_1;
}



/* Entry: 109dcbd88; end: 109dcbe6b;  */

undefined8 FUN_109dcbd88(ulong *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long lStack_30;
  uint uStack_28;
  
  plVar2 = &lStack_30;
  plVar3 = (long *)*param_1;
  uStack_28 = 1;
  lStack_30 = 0;
  plVar1 = plVar3;
  (**(code **)(*plVar3 + 0x108))();
  if ((((ulong)plVar1 & 1) == 0) &&
     (plVar1 = plVar3, FUN_109dcbe6c(plVar3,param_1[1],&lStack_30), ((ulong)plVar1 & 1) == 0)) {
    (**(code **)(*plVar3 + 0x38))();
    func_0x000109d30394(&lStack_30,0xffffffffffffffff);
    (**(code **)(*plVar3 + 0x1f8))(plVar3,plVar2,uStack_28 >> 3);
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  if ((0x40 < uStack_28) && (lStack_30 != 0)) {
    __ZdaPv();
  }
  return uVar4;
}



/* Entry: 109dcbe6c; end: 109dcc26f;  */

long * FUN_109dcbe6c(ulong *param_1,undefined8 param_2,long *param_3)

{
  ulong **ppuVar1;
  int iVar2;
  int iVar3;
  ulong *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong **unaff_x22;
  undefined1 *unaff_x25;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined2 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  ulong **ppuStack_e0;
  undefined8 uStack_d8;
  long *plStack_d0;
  ulong *puStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined1 uStack_a9;
  ulong *puStack_a8;
  undefined1 auStack_a0 [8];
  ulong auStack_98 [3];
  ulong *puStack_80;
  uint auStack_78 [6];
  undefined2 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_1;
  (**(code **)(*param_1 + 0x28))();
  iVar2 = *(int *)puVar4[1];
  if ((iVar2 == 0xd) ||
     (puVar4 = param_1, (**(code **)(*param_1 + 0x28))(), *(int *)puVar4[1] == 0xc)) {
    FUN_109dc0bd8(param_1 + 5);
  }
  iVar3 = *(int *)param_1[6];
  if (iVar3 < 4) {
    if (iVar3 == 1) {
      uStack_60 = 0x104;
      puStack_80 = param_1 + 0xe;
      puVar4 = param_1;
      (**(code **)(*param_1 + 0x28))();
      FUN_109dd98f8(param_1,puVar4[0xc],&puStack_80,0,0);
    }
    else {
      if (iVar3 == 2) goto LAB_109dcbf54;
LAB_109dcbf08:
      puStack_80 = (ulong *)&UNK_10f5fc1d0;
      uStack_60 = 0x103;
      puVar4 = param_1;
      (**(code **)(*param_1 + 0x28))();
      FUN_109dd98f8(param_1,puVar4[0xc],&puStack_80,0,0);
    }
    plVar6 = (long *)0x1;
    goto LAB_109dcc1a8;
  }
  if (iVar3 != 4 && iVar3 != 6) goto LAB_109dcbf08;
LAB_109dcbf54:
  unaff_x25 = auStack_a0;
  FUN_109d32854(auStack_98,param_2);
  puVar4 = param_1;
  (**(code **)(*param_1 + 0x28))();
  uVar8 = *(undefined8 *)(puVar4[1] + 8);
  unaff_x22 = *(ulong ***)(puVar4[1] + 0x10);
  puVar4 = param_1;
  (**(code **)(*param_1 + 0x28))();
  if (*(int *)puVar4[1] == 2) {
    ppuVar1 = unaff_x22;
    if ((ulong **)0x7 < unaff_x22) {
      ppuVar1 = (ulong **)0x8;
    }
    uVar5 = uVar8;
    FUN_109e0376c(uVar8,&UNK_10f5fc1ee,ppuVar1);
    if ((int)uVar5 == 0 && unaff_x22 == (ulong **)0x8) {
LAB_109dcc0e0:
      FUN_109d67d58(&puStack_80,param_2,0);
      FUN_109d32568(auStack_98,auStack_78);
    }
    else {
      ppuVar1 = unaff_x22;
      if ((ulong **)0x2 < unaff_x22) {
        ppuVar1 = (ulong **)0x3;
      }
      uVar5 = uVar8;
      FUN_109e0376c(uVar8,&UNK_10f40a632,ppuVar1);
      if ((int)uVar5 == 0 && unaff_x22 == (ulong **)0x3) goto LAB_109dcc0e0;
      FUN_109e0376c(uVar8,"nan",ppuVar1);
      if ((int)uVar8 != 0 || unaff_x22 != (ulong **)0x3) {
        puStack_80 = (ulong *)&UNK_10f5fc1f7;
        uStack_60 = 0x103;
        puVar4 = param_1;
        (**(code **)(*param_1 + 0x28))();
        FUN_109dd98f8(param_1,puVar4[0xc],&puStack_80,0,0);
        goto LAB_109dcc0d8;
      }
      FUN_109d67b94(&puStack_80,param_2,0,0xffffffffffffffff);
      FUN_109d32568(auStack_98,auStack_78);
    }
    unaff_x22 = &puStack_80;
    FUN_109d32234(auStack_78);
LAB_109dcc108:
    if (iVar2 == 0xd) {
      FUN_109d324a0(auStack_a0);
    }
    (**(code **)(*param_1 + 0xb8))(param_1);
    FUN_109d323e4(&puStack_80,auStack_a0);
    if ((0x40 < *(uint *)(param_3 + 1)) && (*param_3 != 0)) {
      __ZdaPv();
    }
    plVar6 = (long *)0x0;
    *param_3 = (long)puStack_80;
    *(uint *)(param_3 + 1) = auStack_78[0];
  }
  else {
    FUN_109def2ec(&puStack_80,auStack_a0,uVar8,unaff_x22,1);
    if (((auStack_78[0] & 1) == 0) || (puStack_80 == (ulong *)0x0)) goto LAB_109dcc108;
    puStack_a8 = puStack_80;
    FUN_109d3b1b0(&puStack_a8,&uStack_a9);
    if (puStack_a8 != (ulong *)0x0) {
      (**(code **)(*puStack_a8 + 8))();
    }
    puStack_80 = (ulong *)&UNK_10f5fc1f7;
    uStack_60 = 0x103;
    puVar4 = param_1;
    (**(code **)(*param_1 + 0x28))();
    FUN_109dd98f8(param_1,puVar4[0xc],&puStack_80,0,0);
LAB_109dcc0d8:
    plVar6 = (long *)0x1;
  }
  param_1 = auStack_98;
  FUN_109d32234();
LAB_109dcc1a8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return plVar6;
  }
  ___stack_chk_fail();
  FUN_109d32234(unaff_x22 + 1);
  FUN_109d32234(unaff_x25 + 8);
  puVar4 = param_1;
  __Unwind_Resume();
  pcStack_b8 = FUN_109dcc270;
  plVar7 = (long *)*puVar4;
  puStack_f0 = (undefined *)0x0;
  uStack_e8 = 0;
  plVar6 = plVar7;
  ppuStack_e0 = unaff_x22;
  uStack_d8 = param_2;
  plStack_d0 = param_3;
  puStack_c8 = param_1;
  puStack_c0 = &stack0xfffffffffffffff0;
  (**(code **)(*plVar7 + 0x28))();
  uVar8 = *(undefined8 *)(plVar6[1] + 8);
  plVar6 = plVar7;
  (**(code **)(*plVar7 + 0xc0))(plVar7,&puStack_f0);
  if ((int)plVar6 == 0) {
    plVar6 = plVar7;
    (**(code **)(*plVar7 + 0x68))(plVar7,puStack_f0,uStack_e8);
    if (((ulong)plVar6 & 1) != 0) {
      return (long *)0x0;
    }
    plVar6 = plVar7;
    (**(code **)(*plVar7 + 0x30))();
    uStack_f8 = 0x105;
    puStack_118 = puStack_f0;
    uStack_110 = uStack_e8;
    FUN_109da7538();
    if (((*(byte *)(plVar6 + 1) & 1) == 0) || (*(int *)puVar4[1] == 0x1c)) {
      plVar6 = plVar7;
      (**(code **)(*plVar7 + 0x38))();
      (**(code **)(*plVar6 + 0x120))();
      if (((ulong)plVar6 & 1) != 0) {
        return (long *)0x0;
      }
      puStack_118 = &UNK_10f5fc408;
    }
    else {
      puStack_118 = &UNK_10f5fc3ee;
    }
  }
  else {
    puStack_118 = &UNK_10f5fbf88;
  }
  uStack_f8 = 0x103;
  FUN_109dd98f8(plVar7,uVar8,&puStack_118,0,0);
  return plVar7;
}



/* Entry: 109dcc270; end: 109dcc3a7;  */

void FUN_109dcc270(ulong *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined2 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  plVar2 = (long *)*param_1;
  puStack_40 = (undefined *)0x0;
  uStack_38 = 0;
  plVar1 = plVar2;
  (**(code **)(*plVar2 + 0x28))();
  uVar3 = *(undefined8 *)(plVar1[1] + 8);
  plVar1 = plVar2;
  (**(code **)(*plVar2 + 0xc0))(plVar2,&puStack_40);
  if ((int)plVar1 == 0) {
    plVar1 = plVar2;
    (**(code **)(*plVar2 + 0x68))(plVar2,puStack_40,uStack_38);
    if (((ulong)plVar1 & 1) != 0) {
      return;
    }
    plVar1 = plVar2;
    (**(code **)(*plVar2 + 0x30))();
    uStack_48 = 0x105;
    puStack_68 = puStack_40;
    uStack_60 = uStack_38;
    FUN_109da7538();
    if (((*(byte *)(plVar1 + 1) & 1) == 0) || (*(int *)param_1[1] == 0x1c)) {
      plVar1 = plVar2;
      (**(code **)(*plVar2 + 0x38))();
      (**(code **)(*plVar1 + 0x120))();
      if (((ulong)plVar1 & 1) != 0) {
        return;
      }
      puStack_68 = &UNK_10f5fc408;
    }
    else {
      puStack_68 = &UNK_10f5fc3ee;
    }
  }
  else {
    puStack_68 = &UNK_10f5fbf88;
  }
  uStack_48 = 0x103;
  FUN_109dd98f8(plVar2,uVar3,&puStack_68,0,0);
  return;
}



/* Entry: 109dcc3a8; end: 109dccbef;  */

long FUN_109dcc3a8(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  int *piVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  ulong uVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  int iVar22;
  long lVar23;
  undefined8 *puVar24;
  undefined8 uVar25;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined2 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  uint uStack_70;
  undefined8 **ppuStack_68;
  
  lStack_88 = 0;
  uStack_80 = 0;
  uStack_70 = 1;
  lStack_78 = 0;
  plVar5 = param_1;
  (**(code **)(*param_1 + 0x28))();
  lVar19 = plVar5[1];
  lVar23 = *(long *)(lVar19 + 8);
  uVar2 = *(uint *)(lVar19 + 0x20);
  if (uVar2 < 0x41) {
    uStack_d8 = *(ulong *)(lVar19 + 0x18);
  }
  else {
    uStack_d8 = (ulong)uVar2 + 0x3f >> 3 & 0x3ffffff8;
    __Znam();
    _memcpy();
  }
  iVar22 = 0;
  do {
    plVar5 = param_1;
    (**(code **)(*param_1 + 0x28))();
    if (*(int *)plVar5[1] == 0) {
      puStack_b8 = (undefined8 *)&UNK_10f5fc5eb;
      uStack_98 = 0x103;
      (**(code **)(*param_1 + 0xb0))(param_1,param_2,&puStack_b8,0,0);
LAB_109dcc6e0:
      lVar19 = 0;
LAB_109dcc6e4:
      if ((0x40 < uVar2) && (uStack_d8 != 0)) {
        __ZdaPv();
      }
      if ((0x40 < uStack_70) && (lStack_78 != 0)) {
        __ZdaPv();
      }
      return lVar19;
    }
    if (*(int *)param_1[6] == 2) {
      plVar5 = param_1;
      (**(code **)(*param_1 + 0x28))();
      piVar16 = (int *)plVar5[1];
      if (*piVar16 == 2) {
        piVar10 = *(int **)(piVar16 + 2);
        lVar19 = *(long *)(piVar16 + 4);
      }
      else {
        piVar10 = *(int **)(piVar16 + 2);
        lVar19 = *(long *)(piVar16 + 4);
        uVar15 = (ulong)(lVar19 != 0);
        if (lVar19 != 0) {
          piVar10 = (int *)((long)piVar10 + 1);
        }
        uVar3 = uVar15;
        if (uVar15 <= lVar19 - 1U) {
          uVar3 = lVar19 - 1U;
        }
        uVar17 = 0;
        if (lVar19 != 0) {
          uVar17 = uVar3;
        }
        lVar19 = uVar17 - uVar15;
      }
      if ((lVar19 != 4) || (*piVar10 != 0x7065722e)) {
        plVar5 = param_1;
        (**(code **)(*param_1 + 0x28))();
        piVar16 = (int *)plVar5[1];
        if (*piVar16 == 2) {
          piVar10 = *(int **)(piVar16 + 2);
          lVar19 = *(long *)(piVar16 + 4);
        }
        else {
          piVar10 = *(int **)(piVar16 + 2);
          lVar19 = *(long *)(piVar16 + 4);
          uVar15 = (ulong)(lVar19 != 0);
          if (lVar19 != 0) {
            piVar10 = (int *)((long)piVar10 + 1);
          }
          uVar3 = uVar15;
          if (uVar15 <= lVar19 - 1U) {
            uVar3 = lVar19 - 1U;
          }
          uVar17 = 0;
          if (lVar19 != 0) {
            uVar17 = uVar3;
          }
          lVar19 = uVar17 - uVar15;
        }
        if ((lVar19 != 5) || (*piVar10 != 0x7065722e || (char)piVar10[1] != 't')) {
          plVar5 = param_1;
          (**(code **)(*param_1 + 0x28))();
          piVar16 = (int *)plVar5[1];
          if (*piVar16 == 2) {
            piVar10 = *(int **)(piVar16 + 2);
            lVar19 = *(long *)(piVar16 + 4);
          }
          else {
            piVar10 = *(int **)(piVar16 + 2);
            lVar19 = *(long *)(piVar16 + 4);
            uVar15 = (ulong)(lVar19 != 0);
            if (lVar19 != 0) {
              piVar10 = (int *)((long)piVar10 + 1);
            }
            uVar3 = uVar15;
            if (uVar15 <= lVar19 - 1U) {
              uVar3 = lVar19 - 1U;
            }
            uVar17 = 0;
            if (lVar19 != 0) {
              uVar17 = uVar3;
            }
            lVar19 = uVar17 - uVar15;
          }
          if ((lVar19 != 4) || (*piVar10 != 0x7072692e)) {
            plVar5 = param_1;
            (**(code **)(*param_1 + 0x28))();
            piVar16 = (int *)plVar5[1];
            if (*piVar16 == 2) {
              piVar10 = *(int **)(piVar16 + 2);
              lVar19 = *(long *)(piVar16 + 4);
            }
            else {
              piVar10 = *(int **)(piVar16 + 2);
              lVar19 = *(long *)(piVar16 + 4);
              uVar15 = (ulong)(lVar19 != 0);
              if (lVar19 != 0) {
                piVar10 = (int *)((long)piVar10 + 1);
              }
              uVar3 = uVar15;
              if (uVar15 <= lVar19 - 1U) {
                uVar3 = lVar19 - 1U;
              }
              uVar17 = 0;
              if (lVar19 != 0) {
                uVar17 = uVar3;
              }
              lVar19 = uVar17 - uVar15;
            }
            if ((lVar19 != 5) || (*piVar10 != 0x7072692e || (char)piVar10[1] != 'c'))
            goto LAB_109dcc618;
          }
        }
      }
      iVar22 = iVar22 + 1;
    }
LAB_109dcc618:
    if (*(int *)param_1[6] == 2) {
      plVar5 = param_1;
      (**(code **)(*param_1 + 0x28))();
      piVar16 = (int *)plVar5[1];
      if (*piVar16 == 2) {
        piVar10 = *(int **)(piVar16 + 2);
        lVar19 = *(long *)(piVar16 + 4);
      }
      else {
        piVar10 = *(int **)(piVar16 + 2);
        lVar19 = *(long *)(piVar16 + 4);
        uVar15 = (ulong)(lVar19 != 0);
        if (lVar19 != 0) {
          piVar10 = (int *)((long)piVar10 + 1);
        }
        uVar3 = uVar15;
        if (uVar15 <= lVar19 - 1U) {
          uVar3 = lVar19 - 1U;
        }
        uVar17 = 0;
        if (lVar19 != 0) {
          uVar17 = uVar3;
        }
        lVar19 = uVar17 - uVar15;
      }
      if ((lVar19 == 5) && (*piVar10 == 0x646e652e && (char)piVar10[1] == 'r')) {
        if (iVar22 == 0) {
          plVar5 = param_1;
          (**(code **)(*param_1 + 0x28))();
          puVar11 = (undefined8 *)plVar5[1];
          uStack_80 = puVar11[2];
          lStack_88 = puVar11[1];
          uStack_90 = *puVar11;
          puVar11 = puVar11 + 3;
          func_0x000109d3015c(&lStack_78);
          (**(code **)(*param_1 + 0xb8))(param_1);
          lVar19 = lStack_88;
          if (*(int *)param_1[6] != 9) {
            plVar5 = param_1;
            (**(code **)(*param_1 + 0x28))();
            puStack_b8 = (undefined8 *)&UNK_10f5fc60d;
            uStack_98 = 0x103;
            (**(code **)(*param_1 + 0xb0))(param_1,*(undefined8 *)(plVar5[1] + 8),&puStack_b8,0,0);
            goto LAB_109dcc6e0;
          }
          puVar20 = (undefined8 *)param_1[0x2f];
          puVar18 = (undefined8 *)param_1[0x30];
          uVar3 = (long)puVar18 - (long)puVar20;
          uVar15 = 0;
          if (uVar3 != 0) {
            uVar15 = ((long)puVar18 - (long)puVar20 >> 3) * 0x2e - 1;
          }
          uVar8 = 0;
          uVar25 = 0;
          uStack_c8 = 0;
          uStack_d0 = 0;
          uStack_c0 = 0;
          uVar1 = param_1[0x32];
          uVar17 = param_1[0x33] + uVar1;
          if (uVar15 != uVar17) {
            uVar12 = 0;
            goto LAB_109dccaa8;
          }
          if (0x2d < uVar1) {
            param_1[0x32] = uVar1 - 0x2e;
            puVar11 = puVar20 + 1;
            goto LAB_109dcc7d8;
          }
          puVar21 = (undefined8 *)param_1[0x31];
          puVar24 = (undefined8 *)param_1[0x2e];
          if (uVar3 < (ulong)((long)puVar21 - (long)puVar24)) {
            uVar8 = 0xfd0;
            __Znwm();
            if (puVar21 == puVar18) {
              if (puVar20 == puVar24) {
                lVar14 = (long)puVar21 - (long)puVar20 >> 2;
                if (puVar18 == puVar20) {
                  lVar14 = 1;
                }
                lVar6 = lVar14;
                FUN_109dccee0();
                puVar20 = (undefined8 *)(lVar6 + (lVar14 * 2 + 6U & 0xfffffffffffffff8));
                lVar14 = param_1[0x30] - param_1[0x2f];
                puVar18 = puVar20;
                if (lVar14 != 0) {
                  puVar18 = (undefined8 *)((long)puVar20 + lVar14);
                  puVar21 = (undefined8 *)param_1[0x2f];
                  puVar24 = puVar20;
                  do {
                    *puVar24 = *puVar21;
                    lVar14 = lVar14 + -8;
                    puVar21 = puVar21 + 1;
                    puVar24 = puVar24 + 1;
                  } while (lVar14 != 0);
                }
                lVar14 = param_1[0x2e];
                param_1[0x2e] = lVar6;
                param_1[0x2f] = (long)puVar20;
                param_1[0x30] = (long)puVar18;
                param_1[0x31] = lVar6 + (long)puVar11 * 8;
                if (lVar14 != 0) {
                  __ZdlPv(lVar14);
                  puVar20 = (undefined8 *)param_1[0x2f];
                }
              }
              puVar20[-1] = uVar8;
              puVar11 = (undefined8 *)param_1[0x2f];
              puVar20 = puVar11 + -1;
              param_1[0x2f] = (long)puVar20;
LAB_109dcc7d8:
              uVar8 = *puVar20;
              param_1[0x2f] = (long)puVar11;
              FUN_109dccde4(param_1 + 0x2e,uVar8);
            }
            else {
              *puVar18 = uVar8;
              param_1[0x30] = param_1[0x30] + 8;
            }
          }
          else {
            puVar13 = (undefined8 *)((long)puVar21 - (long)puVar24 >> 2);
            if (puVar21 == puVar24) {
              puVar13 = (undefined8 *)0x1;
            }
            FUN_109dccee0();
            uVar8 = 0xfd0;
            puVar9 = puVar11;
            __Znwm();
            puVar21 = (undefined8 *)((long)puVar13 + uVar3);
            puVar24 = puVar13 + (long)puVar11;
            puVar7 = puVar13;
            if (uVar3 == (long)puVar11 * 8) {
              if ((long)uVar3 < 1) {
                puVar11 = (undefined8 *)((long)puVar21 - (long)puVar13 >> 2);
                if (puVar18 == puVar20) {
                  puVar11 = (undefined8 *)0x1;
                }
                puVar7 = puVar11;
                FUN_109dccee0();
                puVar21 = puVar7 + ((ulong)puVar11 >> 2);
                puVar24 = puVar7 + (long)puVar9;
                if (puVar13 != (undefined8 *)0x0) {
                  __ZdlPv(puVar13);
                }
              }
              else {
                lVar14 = ((long)puVar21 - (long)puVar13 >> 3) + 1;
                puVar21 = puVar21 + -((ulong)(lVar14 - (lVar14 >> 0x3f)) >> 1);
              }
            }
            puVar11 = puVar21 + 1;
            *puVar21 = uVar8;
            puVar20 = (undefined8 *)param_1[0x30];
            puVar18 = puVar7;
            if (puVar20 != (undefined8 *)param_1[0x2f]) {
              do {
                puVar7 = puVar18;
                puVar13 = puVar21;
                if (puVar21 == puVar18) {
                  if (puVar11 < puVar24) {
                    lVar14 = ((long)puVar24 - (long)puVar11 >> 3) + 1;
                    lVar6 = (long)puVar11 - (long)puVar18;
                    lVar4 = (long)puVar11 - (long)puVar18;
                    puVar11 = puVar11 + ((ulong)(lVar14 - (lVar14 >> 0x3f)) >> 1);
                    puVar13 = (undefined8 *)((long)puVar11 - lVar6);
                    if (lVar4 != 0) {
                      _memmove(puVar13,puVar21,lVar4);
                      puVar9 = puVar21;
                    }
                  }
                  else {
                    puVar13 = (undefined8 *)((long)puVar24 - (long)puVar18 >> 2);
                    if ((long)puVar24 - (long)puVar18 == 0) {
                      puVar13 = (undefined8 *)0x1;
                    }
                    puVar7 = puVar13;
                    FUN_109dccee0();
                    puVar13 = (undefined8 *)
                              ((long)puVar7 + ((long)puVar13 * 2 + 6U & 0xfffffffffffffff8));
                    lVar14 = (long)puVar11 - (long)puVar18;
                    puVar11 = puVar13;
                    if (lVar14 != 0) {
                      puVar11 = (undefined8 *)((long)puVar13 + lVar14);
                      puVar24 = puVar13;
                      do {
                        *puVar24 = *puVar21;
                        lVar14 = lVar14 + -8;
                        puVar24 = puVar24 + 1;
                        puVar21 = puVar21 + 1;
                      } while (lVar14 != 0);
                    }
                    puVar24 = puVar7 + (long)puVar9;
                    if (puVar18 != (undefined8 *)0x0) {
                      __ZdlPv(puVar18);
                    }
                  }
                }
                puVar20 = puVar20 + -1;
                puVar21 = puVar13 + -1;
                *puVar21 = *puVar20;
                puVar18 = puVar7;
              } while (puVar20 != (undefined8 *)param_1[0x2f]);
            }
            lVar14 = param_1[0x2e];
            param_1[0x2e] = (long)puVar7;
            param_1[0x2f] = (long)puVar21;
            param_1[0x30] = (long)puVar11;
            param_1[0x31] = (long)puVar24;
            if (lVar14 != 0) {
              __ZdlPv();
            }
          }
          puVar20 = (undefined8 *)param_1[0x2f];
          uVar17 = param_1[0x33] + param_1[0x32];
          uVar12 = uStack_c0;
          uVar8 = uStack_d0;
          uVar25 = uStack_c8;
LAB_109dccaa8:
          uStack_c8 = 0;
          uStack_c0 = 0;
          uStack_d0 = 0;
          puVar11 = (undefined8 *)(puVar20[uVar17 / 0x2e] + (uVar17 % 0x2e) * 0x58);
          *puVar11 = 0;
          puVar11[1] = 0;
          puVar11[2] = lVar23;
          puVar11[3] = lVar19 - lVar23;
          puVar11[5] = uVar25;
          puVar11[4] = uVar8;
          puVar11[6] = uVar12;
          uStack_b0 = 0;
          uStack_a8 = 0;
          puStack_b8 = (undefined8 *)0x0;
          *(undefined1 *)(puVar11 + 10) = 0;
          puVar11[7] = 0;
          puVar11[8] = 0;
          puVar11[9] = 0;
          ppuStack_68 = &puStack_b8;
          FUN_109daba74(&ppuStack_68);
          param_1[0x33] = param_1[0x33] + 1;
          puStack_b8 = &uStack_d0;
          FUN_109daba74(&puStack_b8);
          uVar15 = (param_1[0x33] + param_1[0x32]) - 1;
          lVar19 = *(long *)(param_1[0x2f] + (uVar15 / 0x2e) * 8) + (uVar15 % 0x2e) * 0x58;
          goto LAB_109dcc6e4;
        }
        iVar22 = iVar22 + -1;
      }
    }
    (**(code **)(*param_1 + 0xe0))(param_1);
  } while( true );
}



/* Entry: 109dccbf0; end: 109dccde3;  */

void FUN_109dccbf0(ulong *param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  ulong uVar8;
  long **pplVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  long *plStack_80;
  undefined *apuStack_78 [4];
  undefined2 uStack_58;
  long *aplStack_50 [2];
  byte bStack_40;
  long lStack_38;
  
  pplVar9 = &plStack_80;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = *(undefined4 **)(param_3 + 0x20);
  if ((ulong)(*(long *)(param_3 + 0x18) - (long)puVar2) < 6) {
    FUN_109e0560c(param_3,&UNK_10f5fc633,6);
  }
  else {
    *(undefined2 *)(puVar2 + 1) = 0xa72;
    *puVar2 = 0x646e652e;
    *(long *)(param_3 + 0x20) = *(long *)(param_3 + 0x20) + 6;
  }
  apuStack_78[0] = &UNK_10f5fc012;
  uStack_58 = 0x103;
  FUN_109df92d8(aplStack_50,**(undefined8 **)(param_3 + 0x40),(*(undefined8 **)(param_3 + 0x40))[1],
                apuStack_78);
  plStack_80 = (long *)0x0;
  if ((bStack_40 & 1) == 0) {
    plStack_80 = aplStack_50[0];
  }
  puVar6 = (undefined8 *)0x20;
  __Znwm();
  *puVar6 = param_2;
  *(int *)(puVar6 + 1) = (int)param_1[0x23];
  puVar7 = param_1;
  (**(code **)(*param_1 + 0x28))();
  uVar8 = param_1[0x25];
  uVar10 = param_1[0x26];
  puVar6[2] = *(undefined8 *)(puVar7[1] + 8);
  puVar6[3] = (long)(uVar10 - uVar8) >> 3;
  FUN_109dca8b0(param_1 + 0x2b,puVar6);
  uVar8 = param_1[0x1e];
  FUN_109d3a3ec(uVar8,&plStack_80,0);
  plVar4 = plStack_80;
  iVar5 = (int)uVar8;
  *(int *)(param_1 + 0x23) = iVar5;
  plStack_80 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))(plVar4);
    iVar5 = (int)param_1[0x23];
  }
  lVar11 = *(long *)(*(long *)param_1[0x1e] + (ulong)(iVar5 - 1) * 0x18);
  uVar8 = *(ulong *)(lVar11 + 8);
  lVar11 = *(long *)(lVar11 + 0x10);
  param_1[0x18] = uVar8;
  param_1[0x19] = lVar11 - uVar8;
  param_1[0x17] = uVar8;
  param_1[0x11] = 0;
  *(undefined1 *)((long)param_1 + 0xd3) = 1;
  (**(code **)(*param_1 + 0xb8))();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  plVar4 = plStack_80;
  plStack_80 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  __Unwind_Resume();
  puVar6 = (undefined8 *)param_1[2];
  if (puVar6 == (undefined8 *)param_1[3]) {
    uVar8 = *param_1;
    uVar10 = param_1[1];
    if (uVar10 < uVar8 || uVar10 - uVar8 == 0) {
      uVar12 = (long)((long)puVar6 - uVar8) >> 2;
      if ((long)puVar6 - uVar8 == 0) {
        uVar12 = 1;
      }
      uVar8 = uVar12;
      FUN_109dccee0();
      puVar1 = (undefined8 *)(uVar8 + (uVar12 >> 2) * 8);
      lVar11 = param_1[2] - (long)param_1[1];
      puVar6 = puVar1;
      if (lVar11 != 0) {
        puVar6 = (undefined8 *)((long)puVar1 + lVar11);
        puVar13 = (undefined8 *)param_1[1];
        puVar14 = puVar1;
        do {
          *puVar14 = *puVar13;
          lVar11 = lVar11 + -8;
          puVar13 = puVar13 + 1;
          puVar14 = puVar14 + 1;
        } while (lVar11 != 0);
      }
      uVar12 = *param_1;
      *param_1 = uVar8;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar6;
      param_1[3] = uVar8 + uVar10 * 8;
      if (uVar12 != 0) {
        __ZdlPv(uVar12);
        puVar6 = (undefined8 *)param_1[2];
      }
    }
    else {
      lVar11 = (((long)(uVar10 - uVar8) >> 3) + 1) / 2;
      lVar15 = uVar10 + lVar11 * -8;
      lVar3 = (long)puVar6 - uVar10;
      if (lVar3 != 0) {
        _memmove(lVar15,uVar10,lVar3);
        uVar10 = param_1[1];
      }
      puVar6 = (undefined8 *)(lVar15 + lVar3);
      param_1[1] = uVar10 + lVar11 * -8;
      param_1[2] = (ulong)puVar6;
    }
  }
  *puVar6 = pplVar9;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 109dccde4; end: 109dccedf;  */

void FUN_109dccde4(ulong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  
  puVar7 = (undefined8 *)param_1[2];
  if (puVar7 == (undefined8 *)param_1[3]) {
    uVar3 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
      uVar5 = (long)((long)puVar7 - uVar3) >> 2;
      if ((long)puVar7 - uVar3 == 0) {
        uVar5 = 1;
      }
      uVar3 = uVar5;
      FUN_109dccee0();
      puVar1 = (undefined8 *)(uVar3 + (uVar5 >> 2) * 8);
      lVar8 = param_1[2] - (long)param_1[1];
      puVar7 = puVar1;
      if (lVar8 != 0) {
        puVar7 = (undefined8 *)((long)puVar1 + lVar8);
        puVar6 = (undefined8 *)param_1[1];
        puVar9 = puVar1;
        do {
          *puVar9 = *puVar6;
          lVar8 = lVar8 + -8;
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 1;
        } while (lVar8 != 0);
      }
      uVar5 = *param_1;
      *param_1 = uVar3;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar7;
      param_1[3] = uVar3 + uVar4 * 8;
      if (uVar5 != 0) {
        __ZdlPv(uVar5);
        puVar7 = (undefined8 *)param_1[2];
      }
    }
    else {
      lVar8 = (((long)(uVar4 - uVar3) >> 3) + 1) / 2;
      lVar10 = uVar4 + lVar8 * -8;
      lVar2 = (long)puVar7 - uVar4;
      if (lVar2 != 0) {
        _memmove(lVar10,uVar4,lVar2);
        uVar4 = param_1[1];
      }
      puVar7 = (undefined8 *)(lVar10 + lVar2);
      param_1[1] = uVar4 + lVar8 * -8;
      param_1[2] = (ulong)puVar7;
    }
  }
  *puVar7 = param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 109dccee0; end: 109dccf6f;  */

void FUN_109dccee0(long *param_1)

{
  long lVar1;
  
  if ((ulong)param_1 >> 0x3d == 0) {
    __Znwm((long)param_1 << 3);
    return;
  }
  func_0x000104c4f740();
  FUN_109dcacec();
  (**(code **)(*param_1 + 0xb8))(param_1);
  lVar1 = param_1[0x2c];
  if (*(long *)(lVar1 + -8) != 0) {
    __ZdlPv();
    lVar1 = param_1[0x2c];
  }
  param_1[0x2c] = lVar1 + -8;
  return;
}


