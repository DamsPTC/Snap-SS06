/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a0f8904; end: 10a0f8907;  */

long * FUN_10a0f8904(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined8 *extraout_x8;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  plVar2 = param_2;
  FUN_10a0f70fc();
  if (plVar2 == (long *)0x0) {
    puStack_50 = (undefined1 *)*param_3;
    FUN_10a0ee900(&uStack_48,&UNK_10f63ccee,0x15);
    FUN_10a0029c0(&uStack_48);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0f8978);
    (*pcVar1)();
  }
  plVar3 = (long *)&stack0xffffffffffffffe0;
  puVar7 = (undefined8 *)plVar2[2];
  if ((((puVar7 != (undefined8 *)0x0) && (*(short *)((long)plVar2 + 0xc) != 0x18)) &&
      (*(short *)((long)plVar2 + 0xc) == 0xb)) && ((int)plVar2[1] == 0x40)) {
    uVar8 = *puVar7;
    uVar10 = puVar7[3];
    uVar9 = puVar7[2];
    param_1[1] = puVar7[1];
    *param_1 = uVar8;
    param_1[3] = uVar10;
    param_1[2] = uVar9;
    uVar8 = puVar7[4];
    uVar10 = puVar7[7];
    uVar9 = puVar7[6];
    param_1[5] = puVar7[5];
    param_1[4] = uVar8;
    param_1[7] = uVar10;
    param_1[6] = uVar9;
    return param_2;
  }
  FUN_10a0edfc4(&stack0xffffffffffffffe0);
  ppuVar4 = &puStack_40;
  puStack_50 = &stack0xffffffffffffffd0;
  puStack_40 = &UNK_10f63cc79;
  uStack_38 = 0x12;
  if (plVar2[2] != 0) {
    if (*(short *)((long)plVar2 + 0xc) == 0x18) {
      puStack_40 = &UNK_10f63cc8c;
      uStack_38 = 0x21;
    }
    else {
      puStack_40 = &UNK_10f63cc8c;
      uStack_38 = 0x21;
      if (*(short *)((long)plVar2 + 0xc) == 0x16) {
        if ((int)plVar2[1] == 0x10) {
          return plVar3;
        }
        puStack_40 = &UNK_10f63ccae;
        uStack_38 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_40);
  ppuVar5 = &puStack_60;
  uStack_48 = 0x10a10b398;
  puVar7 = (undefined8 *)plVar2[2];
  puStack_60 = &UNK_10f63cc79;
  uStack_58 = 0x12;
  if (puVar7 != (undefined8 *)0x0) {
    if (*(short *)((long)plVar2 + 0xc) == 0x18) {
      puStack_60 = &UNK_10f63cc8c;
      uStack_58 = 0x21;
    }
    else {
      puStack_60 = &UNK_10f63cc8c;
      uStack_58 = 0x21;
      if (*(short *)((long)plVar2 + 0xc) == 10) {
        if ((int)plVar2[1] == 0x24) {
          uVar8 = *puVar7;
          uVar10 = puVar7[3];
          uVar9 = puVar7[2];
          extraout_x8[1] = puVar7[1];
          *extraout_x8 = uVar8;
          extraout_x8[3] = uVar10;
          extraout_x8[2] = uVar9;
          *(undefined4 *)(extraout_x8 + 4) = *(undefined4 *)(puVar7 + 4);
          return (long *)ppuVar4;
        }
        puStack_60 = &UNK_10f63ccae;
        uStack_58 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  func_0x00010a10b468();
  lVar6 = (long)*ppuVar5;
  *ppuVar5 = (undefined *)0x0;
  if (lVar6 != 0) {
    __ZdlPv();
  }
  return (long *)ppuVar5;
}



/* Entry: 10a0f8908; end: 10a0f8993;  */

long * FUN_10a0f8908(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined8 *extraout_x8;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  plVar2 = param_2;
  FUN_10a0f70fc();
  if (plVar2 == (long *)0x0) {
    puStack_50 = (undefined1 *)*param_3;
    FUN_10a0ee900(&uStack_48,&UNK_10f63ccee,0x15);
    FUN_10a0029c0(&uStack_48);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0f8978);
    (*pcVar1)();
  }
  plVar3 = (long *)&stack0xffffffffffffffe0;
  puVar7 = (undefined8 *)plVar2[2];
  if ((((puVar7 != (undefined8 *)0x0) && (*(short *)((long)plVar2 + 0xc) != 0x18)) &&
      (*(short *)((long)plVar2 + 0xc) == 0xb)) && ((int)plVar2[1] == 0x40)) {
    uVar8 = *puVar7;
    uVar10 = puVar7[3];
    uVar9 = puVar7[2];
    param_1[1] = puVar7[1];
    *param_1 = uVar8;
    param_1[3] = uVar10;
    param_1[2] = uVar9;
    uVar8 = puVar7[4];
    uVar10 = puVar7[7];
    uVar9 = puVar7[6];
    param_1[5] = puVar7[5];
    param_1[4] = uVar8;
    param_1[7] = uVar10;
    param_1[6] = uVar9;
    return param_2;
  }
  FUN_10a0edfc4(&stack0xffffffffffffffe0);
  ppuVar4 = &puStack_40;
  puStack_50 = &stack0xffffffffffffffd0;
  puStack_40 = &UNK_10f63cc79;
  uStack_38 = 0x12;
  if (plVar2[2] != 0) {
    if (*(short *)((long)plVar2 + 0xc) == 0x18) {
      puStack_40 = &UNK_10f63cc8c;
      uStack_38 = 0x21;
    }
    else {
      puStack_40 = &UNK_10f63cc8c;
      uStack_38 = 0x21;
      if (*(short *)((long)plVar2 + 0xc) == 0x16) {
        if ((int)plVar2[1] == 0x10) {
          return plVar3;
        }
        puStack_40 = &UNK_10f63ccae;
        uStack_38 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_40);
  ppuVar5 = &puStack_60;
  uStack_48 = 0x10a10b398;
  puVar7 = (undefined8 *)plVar2[2];
  puStack_60 = &UNK_10f63cc79;
  uStack_58 = 0x12;
  if (puVar7 != (undefined8 *)0x0) {
    if (*(short *)((long)plVar2 + 0xc) == 0x18) {
      puStack_60 = &UNK_10f63cc8c;
      uStack_58 = 0x21;
    }
    else {
      puStack_60 = &UNK_10f63cc8c;
      uStack_58 = 0x21;
      if (*(short *)((long)plVar2 + 0xc) == 10) {
        if ((int)plVar2[1] == 0x24) {
          uVar8 = *puVar7;
          uVar10 = puVar7[3];
          uVar9 = puVar7[2];
          extraout_x8[1] = puVar7[1];
          *extraout_x8 = uVar8;
          extraout_x8[3] = uVar10;
          extraout_x8[2] = uVar9;
          *(undefined4 *)(extraout_x8 + 4) = *(undefined4 *)(puVar7 + 4);
          return (long *)ppuVar4;
        }
        puStack_60 = &UNK_10f63ccae;
        uStack_58 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  func_0x00010a10b468();
  lVar6 = (long)*ppuVar5;
  *ppuVar5 = (undefined *)0x0;
  if (lVar6 != 0) {
    __ZdlPv();
  }
  return (long *)ppuVar5;
}



/* Entry: 10a0f8994; end: 10a0f8997;  */

long * FUN_10a0f8994(long *param_1,undefined8 *param_2)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined8 *extraout_x8;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  
  plVar2 = param_1;
  FUN_10a0f70fc();
  if (plVar2 == (long *)0x0) {
    puStack_40 = (undefined *)*param_2;
    FUN_10a0ee900(&uStack_38,&UNK_10f63ccee,0x15);
    FUN_10a0029c0(&uStack_38);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0f89f8);
    (*pcVar1)();
  }
  plVar3 = (long *)&stack0xffffffffffffffe0;
  if ((((plVar2[2] != 0) && (*(short *)((long)plVar2 + 0xc) != 0x18)) &&
      (*(short *)((long)plVar2 + 0xc) == 0x16)) && ((int)plVar2[1] == 0x10)) {
    return param_1;
  }
  FUN_10a0edfc4(&stack0xffffffffffffffe0);
  ppuVar4 = &puStack_40;
  uStack_28 = 0x10a10b398;
  puVar6 = (undefined8 *)plVar2[2];
  puStack_40 = &UNK_10f63cc79;
  uStack_38 = 0x12;
  if (puVar6 != (undefined8 *)0x0) {
    if (*(short *)((long)plVar2 + 0xc) == 0x18) {
      puStack_40 = &UNK_10f63cc8c;
      uStack_38 = 0x21;
    }
    else {
      puStack_40 = &UNK_10f63cc8c;
      uStack_38 = 0x21;
      if (*(short *)((long)plVar2 + 0xc) == 10) {
        if ((int)plVar2[1] == 0x24) {
          uVar7 = *puVar6;
          uVar9 = puVar6[3];
          uVar8 = puVar6[2];
          extraout_x8[1] = puVar6[1];
          *extraout_x8 = uVar7;
          extraout_x8[3] = uVar9;
          extraout_x8[2] = uVar8;
          *(undefined4 *)(extraout_x8 + 4) = *(undefined4 *)(puVar6 + 4);
          return plVar3;
        }
        puStack_40 = &UNK_10f63ccae;
        uStack_38 = 0x11;
      }
    }
  }
  puStack_30 = &stack0xfffffffffffffff0;
  FUN_10a0edfc4();
  func_0x00010a10b468();
  lVar5 = (long)*ppuVar4;
  *ppuVar4 = (undefined *)0x0;
  if (lVar5 != 0) {
    __ZdlPv();
  }
  return (long *)ppuVar4;
}



/* Entry: 10a0f8998; end: 10a0f8a13;  */

long * FUN_10a0f8998(long *param_1,undefined8 *param_2)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined8 *extraout_x8;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  
  plVar2 = param_1;
  FUN_10a0f70fc();
  if (plVar2 == (long *)0x0) {
    puStack_40 = (undefined *)*param_2;
    FUN_10a0ee900(&uStack_38,&UNK_10f63ccee,0x15);
    FUN_10a0029c0(&uStack_38);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0f89f8);
    (*pcVar1)();
  }
  plVar3 = (long *)&stack0xffffffffffffffe0;
  if ((((plVar2[2] != 0) && (*(short *)((long)plVar2 + 0xc) != 0x18)) &&
      (*(short *)((long)plVar2 + 0xc) == 0x16)) && ((int)plVar2[1] == 0x10)) {
    return param_1;
  }
  FUN_10a0edfc4(&stack0xffffffffffffffe0);
  ppuVar4 = &puStack_40;
  uStack_28 = 0x10a10b398;
  puVar6 = (undefined8 *)plVar2[2];
  puStack_40 = &UNK_10f63cc79;
  uStack_38 = 0x12;
  if (puVar6 != (undefined8 *)0x0) {
    if (*(short *)((long)plVar2 + 0xc) == 0x18) {
      puStack_40 = &UNK_10f63cc8c;
      uStack_38 = 0x21;
    }
    else {
      puStack_40 = &UNK_10f63cc8c;
      uStack_38 = 0x21;
      if (*(short *)((long)plVar2 + 0xc) == 10) {
        if ((int)plVar2[1] == 0x24) {
          uVar7 = *puVar6;
          uVar9 = puVar6[3];
          uVar8 = puVar6[2];
          extraout_x8[1] = puVar6[1];
          *extraout_x8 = uVar7;
          extraout_x8[3] = uVar9;
          extraout_x8[2] = uVar8;
          *(undefined4 *)(extraout_x8 + 4) = *(undefined4 *)(puVar6 + 4);
          return plVar3;
        }
        puStack_40 = &UNK_10f63ccae;
        uStack_38 = 0x11;
      }
    }
  }
  puStack_30 = &stack0xfffffffffffffff0;
  FUN_10a0edfc4();
  func_0x00010a10b468();
  lVar5 = (long)*ppuVar4;
  *ppuVar4 = (undefined *)0x0;
  if (lVar5 != 0) {
    __ZdlPv();
  }
  return (long *)ppuVar4;
}



/* Entry: 10a0f8a14; end: 10a0f8a17;  */

long * FUN_10a0f8a14(undefined8 *param_1,long *param_2)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_48 [24];
  
  plVar2 = param_2;
  FUN_10a0f70fc();
  if (plVar2 == (long *)0x0) {
    FUN_10a0ee900(auStack_48,&UNK_10f63ccee,0x15);
    FUN_10a0029c0(auStack_48);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0f8a88);
    (*pcVar1)();
  }
  plVar3 = (long *)&stack0xffffffffffffffe0;
  puVar5 = (undefined8 *)plVar2[2];
  if ((((puVar5 != (undefined8 *)0x0) && (*(short *)((long)plVar2 + 0xc) != 0x18)) &&
      (*(short *)((long)plVar2 + 0xc) == 10)) && ((int)plVar2[1] == 0x24)) {
    uVar6 = *puVar5;
    uVar8 = puVar5[3];
    uVar7 = puVar5[2];
    param_1[1] = puVar5[1];
    *param_1 = uVar6;
    param_1[3] = uVar8;
    param_1[2] = uVar7;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(puVar5 + 4);
    return param_2;
  }
  FUN_10a0edfc4();
  func_0x00010a10b468();
  lVar4 = *plVar3;
  *plVar3 = 0;
  if (lVar4 != 0) {
    __ZdlPv();
  }
  return plVar3;
}



/* Entry: 10a0f8a18; end: 10a0f8aa3;  */

long * FUN_10a0f8a18(undefined8 *param_1,long *param_2)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_48 [24];
  
  plVar2 = param_2;
  FUN_10a0f70fc();
  if (plVar2 == (long *)0x0) {
    FUN_10a0ee900(auStack_48,&UNK_10f63ccee,0x15);
    FUN_10a0029c0(auStack_48);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0f8a88);
    (*pcVar1)();
  }
  plVar3 = (long *)&stack0xffffffffffffffe0;
  puVar5 = (undefined8 *)plVar2[2];
  if ((((puVar5 != (undefined8 *)0x0) && (*(short *)((long)plVar2 + 0xc) != 0x18)) &&
      (*(short *)((long)plVar2 + 0xc) == 10)) && ((int)plVar2[1] == 0x24)) {
    uVar6 = *puVar5;
    uVar8 = puVar5[3];
    uVar7 = puVar5[2];
    param_1[1] = puVar5[1];
    *param_1 = uVar6;
    param_1[3] = uVar8;
    param_1[2] = uVar7;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(puVar5 + 4);
    return param_2;
  }
  FUN_10a0edfc4();
  func_0x00010a10b468();
  lVar4 = *plVar3;
  *plVar3 = 0;
  if (lVar4 != 0) {
    __ZdlPv();
  }
  return plVar3;
}



/* Entry: 10a0f8aa4; end: 10a0f8c77;  */

void FUN_10a0f8aa4(long *param_1,long param_2)

{
  uint uVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined *puStack_58;
  undefined8 uStack_50;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar8 = param_2;
  FUN_10a0f70fc();
  if (lVar8 == 0) {
    FUN_10a0ee900(&puStack_58,&UNK_10f63ccee,0x15);
    FUN_10a0029c0(&puStack_58);
  }
  else {
    puStack_58 = &UNK_10f63cc79;
    uStack_50 = 0x12;
    if (*(uint **)(lVar8 + 0x10) == (uint *)0x0) {
      FUN_10a0edfc4(&puStack_58);
    }
    else if (*(short *)(lVar8 + 0xc) == 0xf) {
      uVar1 = *(uint *)(lVar8 + 8);
      if (uVar1 == 0) {
        return;
      }
      uVar6 = (ulong)**(uint **)(lVar8 + 0x10);
      if (*(ulong *)(*(long *)(param_2 + 0xe0) + 0x18) < uVar6) {
        puVar5 = &UNK_10f63c88c;
      }
      else {
        *(ulong *)(*(long *)(param_2 + 0xe0) + 0x20) = uVar6;
        param_1[1] = 0;
        plVar3 = param_1;
        uVar6 = (ulong)uVar1;
        FUN_10a107b3c();
        _bzero();
        plVar9 = plVar3 + uVar1;
        lVar8 = (long)plVar3 - (param_1[1] - *param_1);
        _memcpy(lVar8);
        lVar4 = *param_1;
        *param_1 = lVar8;
        param_1[1] = (long)plVar9;
        param_1[2] = (long)(plVar3 + uVar6);
        if (lVar4 != 0) {
          __ZdlPv();
          lVar8 = *param_1;
          plVar9 = (long *)param_1[1];
        }
        lVar7 = *(long *)(param_2 + 0xe0);
        lVar4 = *(long *)(lVar7 + 0x20);
        if ((ulong)((long)plVar9 - lVar8) <= (ulong)(*(long *)(lVar7 + 0x18) - lVar4)) {
          *(long *)(lVar7 + 0x20) = lVar4 + ((long)plVar9 - lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__memcpy_11034c658)(lVar8,*(long *)(lVar7 + 0x10) + lVar4);
          return;
        }
        puVar5 = &UNK_10f63c881;
      }
      FUN_10a00946c(puVar5);
    }
    else {
      FUN_10a0ee900(&puStack_58,&UNK_10f63cd04,0x19);
      FUN_10a0029c0(&puStack_58);
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a0f8c44);
  (*pcVar2)();
}



/* Entry: 10a0f8c78; end: 10a0f8e5b;  */

void FUN_10a0f8c78(long *param_1,long param_2)

{
  uint uVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined *puStack_68;
  undefined8 uStack_60;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar4 = param_2;
  FUN_10a0f70fc();
  if (lVar4 == 0) {
    FUN_10a0ee900(&puStack_68,&UNK_10f63ccee,0x15);
    FUN_10a0029c0(&puStack_68);
  }
  else {
    puStack_68 = &UNK_10f63cc79;
    uStack_60 = 0x12;
    if (*(uint **)(lVar4 + 0x10) == (uint *)0x0) {
      FUN_10a0edfc4(&puStack_68);
    }
    else if (*(short *)(lVar4 + 0xc) == 0xf) {
      uVar1 = *(uint *)(lVar4 + 8);
      if (uVar1 == 0) {
        return;
      }
      uVar6 = (ulong)**(uint **)(lVar4 + 0x10);
      if (*(ulong *)(*(long *)(param_2 + 0xe0) + 0x18) < uVar6) {
        puVar5 = &UNK_10f63c88c;
      }
      else {
        *(ulong *)(*(long *)(param_2 + 0xe0) + 0x20) = uVar6;
        param_1[1] = 0;
        plVar3 = param_1;
        uVar6 = (ulong)uVar1;
        FUN_10a0cabbc();
        lVar4 = *param_1;
        lVar8 = param_1[1] - lVar4;
        _bzero();
        plVar9 = plVar3 + uVar1;
        lVar7 = (long)plVar3 - lVar8;
        _memcpy(lVar7,lVar4,lVar8);
        lVar4 = *param_1;
        *param_1 = lVar7;
        param_1[1] = (long)plVar9;
        param_1[2] = (long)(plVar3 + uVar6);
        if (lVar4 != 0) {
          __ZdlPv();
          lVar7 = *param_1;
          plVar9 = (long *)param_1[1];
        }
        lVar8 = *(long *)(param_2 + 0xe0);
        lVar4 = *(long *)(lVar8 + 0x20);
        if ((ulong)((long)plVar9 - lVar7) <= (ulong)(*(long *)(lVar8 + 0x18) - lVar4)) {
          *(long *)(lVar8 + 0x20) = lVar4 + ((long)plVar9 - lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__memcpy_11034c658)(lVar7,*(long *)(lVar8 + 0x10) + lVar4);
          return;
        }
        puVar5 = &UNK_10f63c881;
      }
      FUN_10a00946c(puVar5);
    }
    else {
      FUN_10a0ee900(&puStack_68,&UNK_10f63cd04,0x19);
      FUN_10a0029c0(&puStack_68);
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a0f8e28);
  (*pcVar2)();
}



/* Entry: 10a0f8e5c; end: 10a0f904f;  */

void FUN_10a0f8e5c(long *param_1,long param_2)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined *puStack_58;
  undefined8 uStack_50;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar3 = param_2;
  FUN_10a0f70fc();
  if (lVar3 == 0) {
    FUN_10a0ee900(&puStack_58,&UNK_10f63ccee,0x15);
    FUN_10a0029c0(&puStack_58);
  }
  else {
    puStack_58 = &UNK_10f63cc79;
    uStack_50 = 0x12;
    if (*(uint **)(lVar3 + 0x10) == (uint *)0x0) {
      FUN_10a0edfc4(&puStack_58);
    }
    else if (*(short *)(lVar3 + 0xc) == 0xf) {
      uVar1 = *(uint *)(lVar3 + 8);
      uVar9 = (ulong)uVar1;
      if (uVar1 == 0) {
        return;
      }
      uVar7 = (ulong)**(uint **)(lVar3 + 0x10);
      if (*(ulong *)(*(long *)(param_2 + 0xe0) + 0x18) < uVar7) {
        puVar6 = &UNK_10f63c88c;
      }
      else {
        *(ulong *)(*(long *)(param_2 + 0xe0) + 0x20) = uVar7;
        param_1[1] = 0;
        plVar4 = param_1;
        FUN_10a107a14();
        _bzero();
        lVar3 = (long)plVar4 + (((ulong)uVar1 * 0xc - 0xc) / 0xc) * 0xc + 0xc;
        lVar10 = (long)plVar4 - (param_1[1] - *param_1);
        _memcpy(lVar10);
        lVar5 = *param_1;
        *param_1 = lVar10;
        param_1[1] = lVar3;
        param_1[2] = (long)plVar4 + uVar9 * 0xc;
        if (lVar5 != 0) {
          __ZdlPv();
          lVar10 = *param_1;
          lVar3 = param_1[1];
        }
        lVar8 = *(long *)(param_2 + 0xe0);
        lVar5 = *(long *)(lVar8 + 0x20);
        if ((ulong)(lVar3 - lVar10) <= (ulong)(*(long *)(lVar8 + 0x18) - lVar5)) {
          *(long *)(lVar8 + 0x20) = lVar5 + (lVar3 - lVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__memcpy_11034c658)(lVar10,*(long *)(lVar8 + 0x10) + lVar5);
          return;
        }
        puVar6 = &UNK_10f63c881;
      }
      FUN_10a00946c(puVar6);
    }
    else {
      FUN_10a0ee900(&puStack_58,&UNK_10f63cd04,0x19);
      FUN_10a0029c0(&puStack_58);
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a0f901c);
  (*pcVar2)();
}



/* Entry: 10a0f9050; end: 10a0f9223;  */

void FUN_10a0f9050(long *param_1,long param_2)

{
  uint uVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined *puStack_58;
  undefined8 uStack_50;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar8 = param_2;
  FUN_10a0f70fc();
  if (lVar8 == 0) {
    FUN_10a0ee900(&puStack_58,&UNK_10f63ccee,0x15);
    FUN_10a0029c0(&puStack_58);
  }
  else {
    puStack_58 = &UNK_10f63cc79;
    uStack_50 = 0x12;
    if (*(uint **)(lVar8 + 0x10) == (uint *)0x0) {
      FUN_10a0edfc4(&puStack_58);
    }
    else if (*(short *)(lVar8 + 0xc) == 0xf) {
      uVar1 = *(uint *)(lVar8 + 8);
      if (uVar1 == 0) {
        return;
      }
      uVar6 = (ulong)**(uint **)(lVar8 + 0x10);
      if (*(ulong *)(*(long *)(param_2 + 0xe0) + 0x18) < uVar6) {
        puVar5 = &UNK_10f63c88c;
      }
      else {
        *(ulong *)(*(long *)(param_2 + 0xe0) + 0x20) = uVar6;
        param_1[1] = 0;
        plVar3 = param_1;
        uVar6 = (ulong)uVar1;
        FUN_10a0cba0c();
        _bzero();
        plVar9 = plVar3 + (ulong)uVar1 * 2;
        lVar8 = (long)plVar3 - (param_1[1] - *param_1);
        _memcpy(lVar8);
        lVar4 = *param_1;
        *param_1 = lVar8;
        param_1[1] = (long)plVar9;
        param_1[2] = (long)(plVar3 + uVar6 * 2);
        if (lVar4 != 0) {
          __ZdlPv();
          lVar8 = *param_1;
          plVar9 = (long *)param_1[1];
        }
        lVar7 = *(long *)(param_2 + 0xe0);
        lVar4 = *(long *)(lVar7 + 0x20);
        if ((ulong)((long)plVar9 - lVar8) <= (ulong)(*(long *)(lVar7 + 0x18) - lVar4)) {
          *(long *)(lVar7 + 0x20) = lVar4 + ((long)plVar9 - lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__memcpy_11034c658)(lVar8,*(long *)(lVar7 + 0x10) + lVar4);
          return;
        }
        puVar5 = &UNK_10f63c881;
      }
      FUN_10a00946c(puVar5);
    }
    else {
      FUN_10a0ee900(&puStack_58,&UNK_10f63cd04,0x19);
      FUN_10a0029c0(&puStack_58);
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a0f91f0);
  (*pcVar2)();
}



/* Entry: 10a0f9224; end: 10a0f9417;  */

void FUN_10a0f9224(long *param_1,long param_2)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined *puStack_58;
  undefined8 uStack_50;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar3 = param_2;
  FUN_10a0f70fc();
  if (lVar3 == 0) {
    FUN_10a0ee900(&puStack_58,&UNK_10f63ccee,0x15);
    FUN_10a0029c0(&puStack_58);
  }
  else {
    puStack_58 = &UNK_10f63cc79;
    uStack_50 = 0x12;
    if (*(uint **)(lVar3 + 0x10) == (uint *)0x0) {
      FUN_10a0edfc4(&puStack_58);
    }
    else if (*(short *)(lVar3 + 0xc) == 0xf) {
      uVar1 = *(uint *)(lVar3 + 8);
      uVar9 = (ulong)uVar1;
      if (uVar1 == 0) {
        return;
      }
      uVar7 = (ulong)**(uint **)(lVar3 + 0x10);
      if (*(ulong *)(*(long *)(param_2 + 0xe0) + 0x18) < uVar7) {
        puVar6 = &UNK_10f63c88c;
      }
      else {
        *(ulong *)(*(long *)(param_2 + 0xe0) + 0x20) = uVar7;
        param_1[1] = 0;
        plVar4 = param_1;
        FUN_10a107ab0();
        _bzero();
        lVar3 = (long)plVar4 + (((ulong)uVar1 * 0x14 - 0x14) / 0x14) * 0x14 + 0x14;
        lVar10 = (long)plVar4 - (param_1[1] - *param_1);
        _memcpy(lVar10);
        lVar5 = *param_1;
        *param_1 = lVar10;
        param_1[1] = lVar3;
        param_1[2] = (long)plVar4 + uVar9 * 0x14;
        if (lVar5 != 0) {
          __ZdlPv();
          lVar10 = *param_1;
          lVar3 = param_1[1];
        }
        lVar8 = *(long *)(param_2 + 0xe0);
        lVar5 = *(long *)(lVar8 + 0x20);
        if ((ulong)(lVar3 - lVar10) <= (ulong)(*(long *)(lVar8 + 0x18) - lVar5)) {
          *(long *)(lVar8 + 0x20) = lVar5 + (lVar3 - lVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__memcpy_11034c658)(lVar10,*(long *)(lVar8 + 0x10) + lVar5);
          return;
        }
        puVar6 = &UNK_10f63c881;
      }
      FUN_10a00946c(puVar6);
    }
    else {
      FUN_10a0ee900(&puStack_58,&UNK_10f63cd04,0x19);
      FUN_10a0029c0(&puStack_58);
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a0f93e4);
  (*pcVar2)();
}



/* Entry: 10a0f9418; end: 10a0f95ff;  */

void FUN_10a0f9418(long *param_1,long param_2)

{
  uint uVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  undefined *puStack_58;
  undefined8 uStack_50;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar10 = param_2;
  FUN_10a0f70fc();
  if (lVar10 == 0) {
    FUN_10a0ee900(&puStack_58,&UNK_10f63ccee,0x15);
    FUN_10a0029c0(&puStack_58);
  }
  else {
    puStack_58 = &UNK_10f63cc79;
    uStack_50 = 0x12;
    if (*(uint **)(lVar10 + 0x10) == (uint *)0x0) {
      FUN_10a0edfc4(&puStack_58);
    }
    else if (*(short *)(lVar10 + 0xc) == 0xf) {
      uVar1 = *(uint *)(lVar10 + 8);
      uVar9 = (ulong)uVar1;
      if (uVar1 == 0) {
        return;
      }
      uVar6 = (ulong)**(uint **)(lVar10 + 0x10);
      if (*(ulong *)(*(long *)(param_2 + 0xe0) + 0x18) < uVar6) {
        puVar5 = &UNK_10f63c88c;
      }
      else {
        *(ulong *)(*(long *)(param_2 + 0xe0) + 0x20) = uVar6;
        param_1[1] = 0;
        plVar3 = param_1;
        FUN_10a0cc12c();
        plVar11 = (long *)((long)plVar3 + (ulong)uVar1 * 0x14);
        plVar8 = plVar3;
        do {
          *plVar8 = 0;
          plVar8[1] = 0;
          *(undefined4 *)(plVar8 + 2) = 0x3f800000;
          plVar8 = (long *)((long)plVar8 + 0x14);
        } while (plVar8 != plVar11);
        lVar10 = (long)plVar3 - (param_1[1] - *param_1);
        _memcpy(lVar10);
        lVar4 = *param_1;
        *param_1 = lVar10;
        param_1[1] = (long)plVar11;
        param_1[2] = (long)plVar3 + uVar9 * 0x14;
        if (lVar4 != 0) {
          __ZdlPv();
          lVar10 = *param_1;
          plVar11 = (long *)param_1[1];
        }
        lVar7 = *(long *)(param_2 + 0xe0);
        lVar4 = *(long *)(lVar7 + 0x20);
        if ((ulong)((long)plVar11 - lVar10) <= (ulong)(*(long *)(lVar7 + 0x18) - lVar4)) {
          *(long *)(lVar7 + 0x20) = lVar4 + ((long)plVar11 - lVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__memcpy_11034c658)(lVar10,*(long *)(lVar7 + 0x10) + lVar4);
          return;
        }
        puVar5 = &UNK_10f63c881;
      }
      FUN_10a00946c(puVar5);
    }
    else {
      FUN_10a0ee900(&puStack_58,&UNK_10f63cd04,0x19);
      FUN_10a0029c0(&puStack_58);
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a0f95cc);
  (*pcVar2)();
}



/* Entry: 10a0f9600; end: 10a0f984b;  */

void FUN_10a0f9600(long *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 ***pppuVar2;
  code *pcVar3;
  ulong uVar4;
  undefined8 ***pppuVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 **ppuStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar8 = param_2;
  FUN_10a0f70fc();
  if (lVar8 == 0) {
    FUN_10a0ee900(&ppuStack_78,&UNK_10f63ccee,0x15);
    FUN_10a0029c0(&ppuStack_78);
  }
  else {
    ppuStack_78 = (undefined8 **)&UNK_10f63cc79;
    uStack_70 = 0x12;
    if (*(uint **)(lVar8 + 0x10) == (uint *)0x0) {
      FUN_10a0edfc4(&ppuStack_78);
    }
    else {
      if (*(short *)(lVar8 + 0xc) == 0xf) {
        if (*(int *)(lVar8 + 8) != 0) {
          uVar7 = (ulong)**(uint **)(lVar8 + 0x10);
          if (*(ulong *)(*(long *)(param_2 + 0xe0) + 0x18) < uVar7) {
            FUN_10a00946c(&UNK_10f63c88c);
            goto LAB_10a0f9810;
          }
          *(ulong *)(*(long *)(param_2 + 0xe0) + 0x20) = uVar7;
          FUN_10a042718(param_1);
          uVar7 = (ulong)*(uint *)(lVar8 + 8);
          func_0x0001095649e4(param_1);
          if (param_1[1] != *param_1) {
            lVar8 = 0;
            uVar9 = 0;
            do {
              uVar4 = *(ulong *)(param_2 + 0xe0);
              func_0x00010a0f70a0();
              if (0x7ffffffffffffff7 < uVar7) {
                func_0x000109ffde50();
                goto LAB_10a0f9810;
              }
              if (uVar7 < 0x17) {
                uStack_68 = CONCAT17((char)uVar7,(undefined7)uStack_68);
                pppuVar5 = &ppuStack_78;
                uVar6 = uVar7;
                if (uVar7 != 0) goto LAB_10a0f9710;
              }
              else {
                pppuVar2 = (undefined8 ***)0x19;
                if ((uVar7 | 7) != 0x17) {
                  pppuVar2 = (undefined8 ***)((uVar7 | 7) + 1);
                }
                pppuVar5 = pppuVar2;
                __Znwm();
                uStack_68 = (ulong)pppuVar2 | 0x8000000000000000;
                ppuStack_78 = pppuVar5;
                uStack_70 = uVar7;
LAB_10a0f9710:
                _memmove(pppuVar5,uVar4,uVar7);
                uVar6 = uVar4;
              }
              *(undefined1 *)((long)pppuVar5 + uVar7) = 0;
              uVar7 = (param_1[1] - *param_1 >> 3) * -0x5555555555555555;
              if (uVar7 < uVar9 || uVar7 - uVar9 == 0) goto LAB_10a0f9810;
              puVar1 = (undefined8 *)(*param_1 + lVar8);
              if (*(char *)((long)puVar1 + 0x17) < '\0') {
                __ZdlPv(*puVar1);
              }
              puVar1[1] = uStack_70;
              *puVar1 = ppuStack_78;
              puVar1[2] = uStack_68;
              uVar9 = uVar9 + 1;
              uVar4 = (param_1[1] - *param_1 >> 3) * -0x5555555555555555;
              lVar8 = lVar8 + 0x18;
              uVar7 = uVar6;
            } while (uVar9 <= uVar4 && uVar4 - uVar9 != 0);
          }
        }
        return;
      }
      FUN_10a0ee900(&ppuStack_78,&UNK_10f63cd04,0x19);
      FUN_10a0029c0(&ppuStack_78);
    }
  }
LAB_10a0f9810:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a0f9814);
  (*pcVar3)();
}



/* Entry: 10a0f984c; end: 10a0f98bb;  */

undefined8 * FUN_10a0f984c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba53b0;
  param_1[1] = &PTR_FUN_110ba5578;
  func_0x00010969b5d0(param_1 + 2);
  func_0x00010969b5d0(param_1 + 4);
  func_0x00010969b5d0(param_1 + 6);
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  return param_1;
}



/* Entry: 10a0f98bc; end: 10a0f99d3;  */

void FUN_10a0f98bc(undefined8 param_1,long *param_2,long param_3)

{
  (**(code **)(*param_2 + 0x48))(param_2,param_3,4,1);
  (**(code **)(*param_2 + 0x48))(param_2,param_3 + 4,4,1);
  (**(code **)(*param_2 + 0x48))(param_2,param_3 + 8,4,1);
                    /* WARNING: Could not recover jumptable at 0x00010a0f9944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x48))(param_2,param_3 + 0xc,4,1);
  return;
}



/* Entry: 10a0f99d4; end: 10a0f9a7b;  */

void FUN_10a0f99d4(long param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  undefined4 uStack_3c;
  undefined2 uStack_36;
  undefined4 uStack_34;
  
  uStack_36 = 2;
  plVar1 = (long *)(param_1 + 0x20);
  uStack_34 = param_3;
  (**(code **)(*plVar1 + 0x48))(plVar1,&uStack_36,2,1);
  FUN_10a0f9a7c(param_1,param_2);
  uStack_3c = 4;
  (**(code **)(*plVar1 + 0x48))(plVar1,&uStack_3c,4,1);
  (**(code **)(*plVar1 + 0x48))(plVar1,&uStack_34,4,1);
  return;
}



/* Entry: 10a0f9a7c; end: 10a0f9b8f;  */

void FUN_10a0f9a7c(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined1 **ppuVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  undefined1 **ppuVar7;
  undefined4 uStack_8c;
  undefined2 uStack_86;
  undefined4 uStack_84;
  undefined1 *puStack_50;
  ulong uStack_48;
  byte bStack_39;
  uint uStack_34;
  
  lVar5 = param_2[1];
  if (lVar5 != 0) {
    FUN_109ffe064(&puStack_50,*param_2);
    plVar6 = (long *)(param_1 + 0x20);
    uStack_34 = (uint)uStack_48;
    if (-1 < (char)bStack_39) {
      uStack_34 = (uint)bStack_39;
    }
    (**(code **)(*plVar6 + 0x48))(plVar6,&uStack_34,4,1);
    uVar1 = uStack_48;
    if (-1 < (char)bStack_39) {
      uVar1 = (ulong)bStack_39;
    }
    if (uVar1 != 0) {
      ppuVar7 = (undefined1 **)puStack_50;
      if (-1 < (char)bStack_39) {
        ppuVar7 = &puStack_50;
      }
      do {
        (**(code **)(*plVar6 + 0x48))(plVar6,ppuVar7,1,1);
        ppuVar7 = (undefined1 **)((long)ppuVar7 + 1);
        uVar1 = uStack_48;
        ppuVar2 = (undefined1 **)puStack_50;
        if (-1 < (char)bStack_39) {
          uVar1 = (ulong)bStack_39;
          ppuVar2 = &puStack_50;
        }
      } while (ppuVar7 != (undefined1 **)((long)ppuVar2 + uVar1));
    }
    if ((char)bStack_39 < '\0') {
      __ZdlPv(puStack_50);
    }
    return;
  }
  puVar3 = &UNK_10f63b87d;
  FUN_10a00946c();
  uVar4 = (undefined4)lVar5;
  if ((char)bStack_39 < '\0') {
    __ZdlPv(puStack_50);
  }
  __Unwind_Resume();
  uStack_86 = 6;
  plVar6 = (long *)(puVar3 + 0x20);
  uStack_84 = uVar4;
  (**(code **)(*plVar6 + 0x48))(plVar6,&uStack_86,2,1);
  FUN_10a0f9a7c(puVar3,param_2);
  uStack_8c = 4;
  (**(code **)(*plVar6 + 0x48))(plVar6,&uStack_8c,4,1);
  (**(code **)(*plVar6 + 0x48))(plVar6,&uStack_84,4,1);
  return;
}



/* Entry: 10a0f9b90; end: 10a0f9d87;  */

void FUN_10a0f9b90(long param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  undefined4 uStack_3c;
  undefined2 uStack_36;
  undefined4 uStack_34;
  
  uStack_36 = 6;
  plVar1 = (long *)(param_1 + 0x20);
  uStack_34 = param_3;
  (**(code **)(*plVar1 + 0x48))(plVar1,&uStack_36,2,1);
  FUN_10a0f9a7c(param_1,param_2);
  uStack_3c = 4;
  (**(code **)(*plVar1 + 0x48))(plVar1,&uStack_3c,4,1);
  (**(code **)(*plVar1 + 0x48))(plVar1,&uStack_34,4,1);
  return;
}



/* Entry: 10a0f9d88; end: 10a0f9e37;  */

void FUN_10a0f9d88(long param_1,undefined8 param_2,undefined1 param_3)

{
  long *plVar1;
  undefined1 uStack_49;
  undefined4 uStack_48;
  undefined2 uStack_42;
  
  uStack_42 = 1;
  plVar1 = (long *)(param_1 + 0x20);
  (**(code **)(*plVar1 + 0x48))(plVar1,&uStack_42,2,1);
  FUN_10a0f9a7c(param_1,param_2);
  uStack_48 = 1;
  (**(code **)(*plVar1 + 0x48))(plVar1,&uStack_48,4,1);
  uStack_49 = param_3;
  (**(code **)(*plVar1 + 0x48))(plVar1,&uStack_49,1,1);
  return;
}



/* Entry: 10a0f9e38; end: 10a0fad93;  */

void FUN_10a0f9e38(undefined4 param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  undefined4 uStack_3c;
  undefined2 uStack_36;
  undefined4 uStack_34;
  
  uStack_36 = 3;
  plVar1 = (long *)(param_2 + 0x20);
  uStack_34 = param_1;
  (**(code **)(*plVar1 + 0x48))(plVar1,&uStack_36,2,1);
  FUN_10a0f9a7c(param_2,param_3);
  uStack_3c = 4;
  (**(code **)(*plVar1 + 0x48))(plVar1,&uStack_3c,4,1);
  (**(code **)(*plVar1 + 0x48))(plVar1,&uStack_34,4,1);
  return;
}



/* Entry: 10a0fad94; end: 10a0fadd7;  */

void FUN_10a0fad94(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puStack_20;
  ulong uStack_18;
  
  uStack_18 = param_3[1];
  puStack_20 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uStack_18 = (ulong)*(byte *)((long)param_3 + 0x17);
    puStack_20 = param_3;
  }
  (**(code **)(*param_1 + 0x30))(param_1,param_2,&puStack_20);
  return;
}



/* Entry: 10a0fadd8; end: 10a0fae67;  */

void FUN_10a0fadd8(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined4 uStack_38;
  undefined2 uStack_32;
  
  uStack_32 = 0xe;
  plVar1 = (long *)(param_1 + 0x20);
  (**(code **)(*plVar1 + 0x48))(plVar1,&uStack_32,2,1);
  FUN_10a0f9a7c(param_1,param_2);
  uStack_38 = 0;
  (**(code **)(*plVar1 + 0x48))(plVar1,&uStack_38,4,1);
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  return;
}



/* Entry: 10a0fae68; end: 10a0fafbf;  */

void FUN_10a0fae68(long param_1)

{
  ulong uVar1;
  undefined2 *puVar2;
  long *plVar3;
  undefined2 *puVar4;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined4 uStack_4c;
  ulong uStack_48;
  byte bStack_39;
  uint uStack_34;
  
  plVar3 = (long *)(param_1 + 0x20);
  uStack_50 = 0xe;
  (**(code **)(*plVar3 + 0x48))(plVar3,&uStack_50,2,1);
  func_0x000107c2b054(&uStack_50,&UNK_10f63b3ad);
  uStack_34 = (uint)uStack_48;
  if (-1 < (char)bStack_39) {
    uStack_34 = (uint)bStack_39;
  }
  (**(code **)(*plVar3 + 0x48))(plVar3,&uStack_34,4,1);
  uVar1 = uStack_48;
  if (-1 < (char)bStack_39) {
    uVar1 = (ulong)bStack_39;
  }
  if (uVar1 != 0) {
    puVar4 = (undefined2 *)CONCAT44(uStack_4c,CONCAT22(uStack_4e,uStack_50));
    if (-1 < (char)bStack_39) {
      puVar4 = &uStack_50;
    }
    do {
      (**(code **)(*plVar3 + 0x48))(plVar3,puVar4,1,1);
      puVar4 = (undefined2 *)((long)puVar4 + 1);
      uVar1 = uStack_48;
      puVar2 = (undefined2 *)CONCAT44(uStack_4c,CONCAT22(uStack_4e,uStack_50));
      if (-1 < (char)bStack_39) {
        uVar1 = (ulong)bStack_39;
        puVar2 = &uStack_50;
      }
    } while (puVar4 != (undefined2 *)((long)puVar2 + uVar1));
  }
  if ((char)bStack_39 < '\0') {
    __ZdlPv(CONCAT44(uStack_4c,CONCAT22(uStack_4e,uStack_50)));
  }
  uStack_50 = 0;
  uStack_4e = 0;
  (**(code **)(*(long *)(param_1 + 0x20) + 0x48))(plVar3,&uStack_50,4,1);
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  return;
}



/* Entry: 10a0fafc0; end: 10a0fb197;  */

/* WARNING: Possible PIC construction at 0x00010a0fb108: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a107c5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a0fb10c) */
/* WARNING: Removing unreachable block (ram,0x00010a107384) */
/* WARNING: Removing unreachable block (ram,0x00010a1073ac) */
/* WARNING: Removing unreachable block (ram,0x00010a107410) */
/* WARNING: Removing unreachable block (ram,0x00010a1074b4) */
/* WARNING: Removing unreachable block (ram,0x00010a1074c8) */
/* WARNING: Removing unreachable block (ram,0x00010a1074d8) */
/* WARNING: Removing unreachable block (ram,0x00010a1074e4) */
/* WARNING: Removing unreachable block (ram,0x00010a1074f4) */
/* WARNING: Removing unreachable block (ram,0x00010a10741c) */
/* WARNING: Removing unreachable block (ram,0x00010a10742c) */
/* WARNING: Removing unreachable block (ram,0x00010a107438) */
/* WARNING: Removing unreachable block (ram,0x00010a107448) */
/* WARNING: Removing unreachable block (ram,0x00010a10745c) */
/* WARNING: Removing unreachable block (ram,0x00010a107468) */
/* WARNING: Removing unreachable block (ram,0x00010a107484) */
/* WARNING: Removing unreachable block (ram,0x00010a107488) */
/* WARNING: Removing unreachable block (ram,0x00010a107494) */
/* WARNING: Removing unreachable block (ram,0x00010a1074a4) */
/* WARNING: Removing unreachable block (ram,0x00010a107500) */
/* WARNING: Removing unreachable block (ram,0x00010a1073c8) */
/* WARNING: Removing unreachable block (ram,0x00010a10758c) */
/* WARNING: Removing unreachable block (ram,0x00010a107608) */
/* WARNING: Removing unreachable block (ram,0x00010a10760c) */
/* WARNING: Removing unreachable block (ram,0x00010a107620) */
/* WARNING: Removing unreachable block (ram,0x00010a1075c0) */
/* WARNING: Removing unreachable block (ram,0x00010a1076a0) */
/* WARNING: Removing unreachable block (ram,0x00010a1076d0) */
/* WARNING: Removing unreachable block (ram,0x00010a1076e0) */
/* WARNING: Removing unreachable block (ram,0x00010a107728) */
/* WARNING: Removing unreachable block (ram,0x00010a10778c) */
/* WARNING: Removing unreachable block (ram,0x00010a1077c4) */
/* WARNING: Removing unreachable block (ram,0x00010a1077d8) */
/* WARNING: Removing unreachable block (ram,0x00010a1077e8) */
/* WARNING: Removing unreachable block (ram,0x00010a1077f4) */
/* WARNING: Removing unreachable block (ram,0x00010a107804) */
/* WARNING: Removing unreachable block (ram,0x00010a107798) */
/* WARNING: Removing unreachable block (ram,0x00010a10787c) */
/* WARNING: Removing unreachable block (ram,0x00010a1077a4) */
/* WARNING: Removing unreachable block (ram,0x00010a1077b0) */
/* WARNING: Removing unreachable block (ram,0x00010a1077c0) */
/* WARNING: Removing unreachable block (ram,0x00010a107884) */
/* WARNING: Removing unreachable block (ram,0x00010a107890) */
/* WARNING: Removing unreachable block (ram,0x00010a1078a4) */
/* WARNING: Removing unreachable block (ram,0x00010a1078b4) */
/* WARNING: Removing unreachable block (ram,0x00010a1078c0) */
/* WARNING: Removing unreachable block (ram,0x00010a1078d0) */
/* WARNING: Removing unreachable block (ram,0x00010a1078dc) */
/* WARNING: Removing unreachable block (ram,0x00010a107744) */
/* WARNING: Removing unreachable block (ram,0x00010a107900) */
/* WARNING: Removing unreachable block (ram,0x00010a10795c) */
/* WARNING: Removing unreachable block (ram,0x00010a10794c) */
/* WARNING: Removing unreachable block (ram,0x00010a107964) */
/* WARNING: Removing unreachable block (ram,0x00010a1079a8) */
/* WARNING: Removing unreachable block (ram,0x00010a107974) */
/* WARNING: Removing unreachable block (ram,0x00010a1079b4) */
/* WARNING: Removing unreachable block (ram,0x00010a1079fc) */
/* WARNING: Removing unreachable block (ram,0x00010a107a54) */
/* WARNING: Removing unreachable block (ram,0x00010a107a98) */
/* WARNING: Removing unreachable block (ram,0x00010a107aec) */
/* WARNING: Removing unreachable block (ram,0x00010a107b24) */
/* WARNING: Removing unreachable block (ram,0x00010a107b6c) */
/* WARNING: Removing unreachable block (ram,0x00010a107bb4) */
/* WARNING: Removing unreachable block (ram,0x00010a107bc8) */
/* WARNING: Removing unreachable block (ram,0x00010a107bd0) */
/* WARNING: Removing unreachable block (ram,0x00010a107be4) */
/* WARNING: Removing unreachable block (ram,0x00010a107c10) */
/* WARNING: Removing unreachable block (ram,0x00010a107c9c) */
/* WARNING: Removing unreachable block (ram,0x00010a107c3c) */
/* WARNING: Removing unreachable block (ram,0x00010a107c44) */
/* WARNING: Removing unreachable block (ram,0x00010a107c48) */
/* WARNING: Removing unreachable block (ram,0x00010a107c58) */
/* WARNING: Removing unreachable block (ram,0x00010a107c04) */
/* WARNING: Removing unreachable block (ram,0x00010a107b50) */
/* WARNING: Removing unreachable block (ram,0x00010a107b04) */
/* WARNING: Removing unreachable block (ram,0x00010a107acc) */
/* WARNING: Removing unreachable block (ram,0x00010a107a74) */
/* WARNING: Removing unreachable block (ram,0x00010a107a34) */
/* WARNING: Removing unreachable block (ram,0x00010a1079d8) */
/* WARNING: Removing unreachable block (ram,0x00010a107994) */
/* WARNING: Removing unreachable block (ram,0x00010a107754) */
/* WARNING: Removing unreachable block (ram,0x00010a107764) */
/* WARNING: Removing unreachable block (ram,0x00010a107774) */
/* WARNING: Removing unreachable block (ram,0x00010a107814) */
/* WARNING: Removing unreachable block (ram,0x00010a10777c) */
/* WARNING: Removing unreachable block (ram,0x00010a107818) */
/* WARNING: Removing unreachable block (ram,0x00010a10786c) */
/* WARNING: Removing unreachable block (ram,0x00010a107874) */
/* WARNING: Removing unreachable block (ram,0x00010a1078e0) */
/* WARNING: Removing unreachable block (ram,0x00010a1076d4) */
/* WARNING: Removing unreachable block (ram,0x00010a1075d0) */
/* WARNING: Removing unreachable block (ram,0x00010a1075dc) */
/* WARNING: Removing unreachable block (ram,0x00010a1075ec) */
/* WARNING: Removing unreachable block (ram,0x00010a107628) */
/* WARNING: Removing unreachable block (ram,0x00010a1075f4) */
/* WARNING: Removing unreachable block (ram,0x00010a107630) */
/* WARNING: Removing unreachable block (ram,0x00010a107688) */
/* WARNING: Removing unreachable block (ram,0x00010a10766c) */
/* WARNING: Removing unreachable block (ram,0x00010bdbe28c) */
/* WARNING: Removing unreachable block (ram,0x00010a1073d8) */
/* WARNING: Removing unreachable block (ram,0x00010a1073e8) */
/* WARNING: Removing unreachable block (ram,0x00010a1073f8) */
/* WARNING: Removing unreachable block (ram,0x00010a107508) */
/* WARNING: Removing unreachable block (ram,0x00010a107400) */
/* WARNING: Removing unreachable block (ram,0x00010a10750c) */
/* WARNING: Removing unreachable block (ram,0x00010a107560) */
/* WARNING: Removing unreachable block (ram,0x00010a107568) */
/* WARNING: Removing unreachable block (ram,0x00010a10756c) */
/* WARNING: Removing unreachable block (ram,0x00010a107c60) */
/* WARNING: Removing unreachable block (ram,0x00010a107ca8) */
/* WARNING: Removing unreachable block (ram,0x00010a107cac) */
/* WARNING: Removing unreachable block (ram,0x00010a107d0c) */
/* WARNING: Removing unreachable block (ram,0x00010a107cd0) */
/* WARNING: Removing unreachable block (ram,0x00010a107ce8) */
/* WARNING: Removing unreachable block (ram,0x00010a107cfc) */
/* WARNING: Removing unreachable block (ram,0x00010a107d10) */
/* WARNING: Removing unreachable block (ram,0x00010a107c84) */

void FUN_10a0fafc0(long param_1)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined *unaff_x20;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined1 auStack_30 [14];
  undefined2 uStack_22;
  
  puVar9 = &stack0xfffffffffffffff0;
  uStack_22 = 0;
  plVar7 = (long *)(param_1 + 0x20);
  plVar8 = (long *)&uStack_22;
  (**(code **)(*plVar7 + 0x48))(plVar7,plVar8,2,1);
  iVar1 = *(int *)(param_1 + 0x40);
  *(int *)(param_1 + 0x40) = iVar1 + -1;
  if (0 < iVar1) {
    return;
  }
  puVar4 = &UNK_10f63b855;
  uVar10 = 0x10a0fb024;
  FUN_10a00946c();
  puVar3 = auStack_30;
  while( true ) {
    *(undefined **)(puVar3 + -0x20) = unaff_x20;
    *(long **)(puVar3 + -0x18) = plVar7;
    *(undefined1 **)(puVar3 + -0x10) = puVar9;
    *(undefined8 *)(puVar3 + -8) = uVar10;
    if (*(int *)(puVar4 + 0x40) == 0) break;
    puVar4 = &UNK_10f63b88a;
    FUN_10a00946c();
    *(undefined **)(puVar3 + -0x90) = unaff_x20;
    *(long **)(puVar3 + -0x88) = plVar7;
    *(undefined1 **)(puVar3 + -0x80) = puVar3 + -0x10;
    *(undefined8 *)(puVar3 + -0x78) = 0x10a0fb0f4;
    puVar9 = puVar3 + -0x80;
    uVar10 = 0x10a0fb10c;
    puVar3 = puVar3 + -0x90;
    plVar7 = plVar8;
    unaff_x20 = puVar4;
  }
  *(undefined2 *)(puVar3 + -0x70) = 0;
  (**(code **)(*(long *)(puVar4 + 0x20) + 0x48))(puVar4 + 0x20,puVar3 + -0x70,2,1);
  plVar8 = (long *)(puVar4 + 0x10);
  lVar5 = *plVar8;
  *(undefined8 *)(puVar3 + -0x30) = 0;
  *(undefined8 *)(puVar3 + -0x48) = 0;
  *(undefined8 *)(puVar3 + -0x50) = 0;
  *(undefined8 *)(puVar3 + -0x38) = 0;
  *(undefined8 *)(puVar3 + -0x40) = 0;
  *(undefined8 *)(puVar3 + -0x68) = 0;
  *(undefined8 *)(puVar3 + -0x70) = 0;
  *(undefined8 *)(puVar3 + -0x58) = 0;
  *(undefined8 *)(puVar3 + -0x60) = 0;
  (**(code **)(lVar5 + 0x48))(plVar8,puVar3 + -0x70,0x48,1);
  lVar5 = *(long *)(puVar4 + 0x18);
  lVar6 = *(long *)(lVar5 + 0x10) - *(long *)(lVar5 + 8);
  iVar1 = *(int *)(*(long *)(puVar4 + 0x28) + 0x10);
  iVar2 = *(int *)(*(long *)(puVar4 + 0x28) + 8);
  *(undefined4 *)(puVar3 + -0x70) = 1;
  *(int *)(puVar3 + -0x6c) = ((int)lVar6 + iVar1) - iVar2;
  puVar3[-0x68] = 0;
  if (-1 < lVar6) {
    *(undefined8 *)(lVar5 + 0x20) = 0;
  }
  (**(code **)(*plVar8 + 0x48))(plVar8,puVar3 + -0x70,0x48,1);
  return;
}



/* Entry: 10a0fb198; end: 10a0fb207;  */

void FUN_10a0fb198(undefined8 param_1,undefined8 param_2)

{
  long lStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  lStack_38 = 0;
  lStack_30 = 0;
  uStack_28 = 0;
  func_0x00010a0fb0f4(param_1,&lStack_38);
  FUN_10ad00d7c(param_2,lStack_38,lStack_30 - lStack_38);
  if (lStack_38 != 0) {
    lStack_30 = lStack_38;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a0fb208; end: 10a0fbacb;  */

void FUN_10a0fb208(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined2 uStack_32;
  
  uStack_32 = 0xf;
  plVar3 = (long *)(param_1 + 0x20);
  (**(code **)(*plVar3 + 0x48))(plVar3,&uStack_32,2,1);
  FUN_10a0f9a7c(param_1,param_2);
  uStack_38 = (undefined4)((ulong)(param_3[1] - *param_3) >> 3);
  (**(code **)(*plVar3 + 0x48))(plVar3,&uStack_38,4,1);
  uStack_3c = (undefined4)*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x20);
  (**(code **)(*plVar3 + 0x48))(plVar3,&uStack_3c,4,1);
  lVar1 = param_3[1];
  for (lVar2 = *param_3; lVar2 != lVar1; lVar2 = lVar2 + 8) {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x48))(param_1 + 0x30,lVar2,4,1);
    (**(code **)(*(long *)(param_1 + 0x30) + 0x48))(param_1 + 0x30,lVar2 + 4,4,1);
  }
  return;
}



/* Entry: 10a0fbacc; end: 10a0fbba3;  */

void FUN_10a0fbacc(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long *plVar1;
  undefined4 uStack_4c;
  int iStack_48;
  undefined2 uStack_42;
  
  uStack_42 = 0xf;
  plVar1 = (long *)(param_1 + 0x20);
  (**(code **)(*plVar1 + 0x48))(plVar1,&uStack_42,2,1);
  FUN_10a0f9a7c(param_1,param_2);
  iStack_48 = param_4;
  (**(code **)(*plVar1 + 0x48))(plVar1,&iStack_48,4,1);
  uStack_4c = (undefined4)*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x20);
  (**(code **)(*plVar1 + 0x48))(plVar1,&uStack_4c,4,1);
  (**(code **)(*(long *)(param_1 + 0x30) + 0x48))((long *)(param_1 + 0x30),param_3,1,(long)param_4);
  return;
}



/* Entry: 10a0fbba4; end: 10a0fbf93;  */

void FUN_10a0fbba4(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 uStack_3c;
  int iStack_38;
  undefined2 uStack_32;
  
  uStack_32 = 0xf;
  plVar3 = (long *)(param_1 + 0x20);
  (**(code **)(*plVar3 + 0x48))(plVar3,&uStack_32,2,1);
  FUN_10a0f9a7c(param_1,param_2);
  iStack_38 = (int)((ulong)(param_3[1] - *param_3) >> 2) * -0x55555555;
  (**(code **)(*plVar3 + 0x48))(plVar3,&iStack_38,4,1);
  uStack_3c = (undefined4)*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x20);
  (**(code **)(*plVar3 + 0x48))(plVar3,&uStack_3c,4,1);
  lVar1 = param_3[1];
  for (lVar2 = *param_3; lVar2 != lVar1; lVar2 = lVar2 + 0xc) {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x48))(param_1 + 0x30,lVar2,4,1);
    (**(code **)(*(long *)(param_1 + 0x30) + 0x48))(param_1 + 0x30,lVar2 + 4,4,1);
    (**(code **)(*(long *)(param_1 + 0x30) + 0x48))(param_1 + 0x30,lVar2 + 8,4,1);
  }
  return;
}



/* Entry: 10a0fbf94; end: 10a0fc02f;  */

undefined8 * FUN_10a0fbf94(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110ba3160;
  FUN_10a10b430(param_1 + 4);
  puStack_28 = param_1 + 1;
  FUN_10a0426d8(&puStack_28);
  return param_1;
}



/* Entry: 10a0fc030; end: 10a0fc0b7;  */

undefined1  [16] FUN_10a0fc030(long *param_1,long *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  
  if ((int)param_1[1] != 0) {
    uVar1 = (int)param_1[1] - 1;
    uVar3 = (ulong)(*(uint *)((long)param_2 + 0xc) & uVar1);
    plVar5 = (long *)(*param_1 + uVar3 * 0x10);
    if (*plVar5 != 0 || (int)plVar5[1] != 0) {
      do {
        if (*plVar5 == *param_2 && (int)plVar5[1] == (int)param_2[1]) {
          uVar4 = uVar3 & 0xffffffffffffff00;
          uVar3 = uVar3 & 0xff;
          uVar2 = 1;
          goto LAB_10a0fc0a0;
        }
        uVar3 = (ulong)((int)uVar3 + 1U & uVar1);
        plVar5 = (long *)(*param_1 + uVar3 * 0x10);
      } while (*plVar5 != 0 || (int)plVar5[1] != 0);
    }
  }
  uVar4 = 0;
  uVar2 = 0;
  uVar3 = 0;
LAB_10a0fc0a0:
  auVar6._0_8_ = uVar3 | uVar4;
  auVar6._8_8_ = uVar2;
  return auVar6;
}



/* Entry: 10a0fc0b8; end: 10a0fc3ff;  */

undefined8 * FUN_10a0fc0b8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long *plVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined4 **ppuVar12;
  long *plVar13;
  ulong *puVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  int *piVar24;
  undefined8 *puVar25;
  undefined8 uVar26;
  undefined4 *puVar27;
  undefined8 uVar28;
  undefined4 *puVar29;
  undefined8 uVar30;
  undefined4 *puVar31;
  undefined8 uVar32;
  undefined4 *puVar33;
  undefined8 uVar34;
  undefined4 *puVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined4 *puVar38;
  undefined4 *puVar39;
  long *plStack_90;
  long *plStack_88;
  undefined4 *puStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  long lStack_60;
  ulong *puStack_58;
  long *plStack_50;
  undefined2 uStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar7 = (long *)0x88;
  __Znwm();
  plVar7[1] = 0;
  plVar7[2] = 0;
  *plVar7 = (long)&PTR_FUN_110ba4db8;
  plVar7[8] = 0;
  plVar7[7] = 0;
  plVar7[6] = 0;
  plVar7[5] = 0;
  plVar7[0xd] = 0;
  plVar7[0xe] = 0;
  *(undefined4 *)(plVar7 + 8) = 0x3f800000;
  plVar7[10] = 0;
  plVar7[9] = 0;
  plVar7[0xc] = 0;
  plVar7[0xb] = 0;
  *(undefined4 *)(plVar7 + 0xd) = 0x3f800000;
  plVar7[0xf] = 0;
  plVar7[0x10] = 0;
  plStack_90 = plVar7 + 3;
  plVar7[4] = 0;
  *plStack_90 = 0;
  plStack_88 = plVar7;
  FUN_10a0f602c(param_1,param_3,&plStack_90);
  plVar7 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar13 = plStack_88 + 1;
    do {
      lVar15 = *plVar13;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar5) {
        *plVar13 = lVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  *param_1 = &PTR_FUN_110ba3180;
  piVar24 = (int *)(param_1 + 0xf);
  param_1[0x10] = 0;
  piVar24[0] = 0;
  piVar24[1] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x25] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  plVar7 = *(long **)*param_2;
  (**(code **)(*plVar7 + 0x18))();
  lVar15 = param_1[0x23];
  plVar13 = (long *)(param_1[0x24] - lVar15);
  if (plVar7 < plVar13 || (long)plVar7 - (long)plVar13 == 0) {
    if (plVar7 < plVar13) {
      param_1[0x24] = lVar15 + (long)plVar7;
    }
  }
  else {
    FUN_10a107590(param_1 + 0x23,(long)plVar7 - (long)plVar13);
    lVar15 = param_1[0x23];
  }
  plVar13 = *(long **)*param_2;
  (**(code **)(*plVar13 + 0x20))(plVar13,lVar15,1,plVar7);
  if (plVar13 == plVar7) {
    puVar11 = (undefined8 *)param_1[0x23];
    uVar17 = puVar11[8];
    uVar32 = puVar11[5];
    uVar30 = puVar11[4];
    uVar28 = puVar11[7];
    uVar26 = puVar11[6];
    uVar37 = *puVar11;
    uVar36 = puVar11[3];
    uVar34 = puVar11[2];
    param_1[0x10] = puVar11[1];
    *(undefined8 *)piVar24 = uVar37;
    param_1[0x12] = uVar36;
    param_1[0x11] = uVar34;
    param_1[0x14] = uVar32;
    param_1[0x13] = uVar30;
    param_1[0x16] = uVar28;
    param_1[0x15] = uVar26;
    param_1[0x17] = uVar17;
    if (*(char *)(param_1 + 0x10) == '\x01') {
      if (*piVar24 == 1) {
        if ((ulong)*(uint *)((long)param_1 + 0x7c) < (ulong)(param_1[0x24] - (long)puVar11)) {
          puVar1 = (uint *)((long)puVar11 + (ulong)*(uint *)((long)param_1 + 0x7c));
          uVar2 = puVar1[4];
          uVar3 = puVar1[5];
          uVar16 = (long)puVar1 + (ulong)*puVar1;
          puVar14 = (ulong *)((long)puVar1 + (ulong)puVar1[2]);
          param_1[0x18] = uVar16;
          param_1[0x19] = puVar14;
          param_1[0x1a] = (long)puVar1 + (ulong)uVar2;
          if ((uVar16 & 0xf) == 0) {
            plVar7 = param_1 + 0x1c;
            uVar18 = *puVar14;
            param_1[0x1b] = uVar18;
            uVar21 = (ulong)(uVar3 << 1);
            uVar19 = param_1[0x1d] - *plVar7;
            if (uVar21 < uVar19 || uVar21 - uVar19 == 0) {
              uVar20 = uVar18 >> 0x20;
              if (uVar21 < uVar19) {
                param_1[0x1d] = *plVar7 + uVar21;
              }
            }
            else {
              func_0x000107c27d58(plVar7,uVar21 - uVar19);
              uVar16 = param_1[0x18];
              puVar14 = (ulong *)param_1[0x19];
              uVar18 = (ulong)*(uint *)(param_1 + 0x1b);
              uVar20 = (ulong)*(uint *)((long)param_1 + 0xdc);
            }
            puVar27 = (undefined4 *)(uVar16 + (uVar18 & 0xffffffff));
            puStack_80 = puVar27 + 4;
            uStack_78 = *puVar27;
            lStack_60 = (long)puVar14 + uVar20;
            uStack_70 = 0;
            uStack_48 = 0;
            puVar11 = param_1 + 0x20;
            ppuVar12 = &puStack_80;
            puStack_58 = param_1 + 0x18;
            plStack_50 = plVar7;
            FUN_10a0fc400();
            if (*(char *)((long)param_1 + 0x4f) < '\0') {
              *(undefined1 *)param_1[7] = 0;
              param_1[8] = 0;
            }
            else {
              *(undefined1 *)(param_1 + 7) = 0;
              *(undefined1 *)((long)param_1 + 0x4f) = 0;
            }
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
              return param_1;
            }
            ___stack_chk_fail();
            FUN_10a10a59c(&plStack_90);
            __Unwind_Resume();
            puVar25 = (undefined8 *)puVar11[1];
            if (puVar25 < (undefined8 *)puVar11[2]) {
              puVar29 = ppuVar12[1];
              puVar27 = *ppuVar12;
              puVar33 = ppuVar12[3];
              puVar31 = ppuVar12[2];
              puVar35 = ppuVar12[4];
              puVar39 = ppuVar12[7];
              puVar38 = ppuVar12[6];
              puVar25[5] = ppuVar12[5];
              puVar25[4] = puVar35;
              puVar25[7] = puVar39;
              puVar25[6] = puVar38;
              puVar25[1] = puVar29;
              *puVar25 = puVar27;
              puVar25[3] = puVar33;
              puVar25[2] = puVar31;
              puVar25 = puVar25 + 8;
              puVar10 = puVar11;
LAB_10a0fc4d0:
              puVar11[1] = puVar25;
              return puVar10;
            }
            puVar22 = (undefined8 *)*puVar11;
            lVar15 = (long)puVar25 - (long)puVar22;
            uVar16 = (lVar15 >> 6) + 1;
            if (uVar16 >> 0x3a == 0) {
              uVar19 = (long)puVar11[2] - (long)puVar22;
              uVar18 = (long)uVar19 >> 5;
              if (uVar18 <= uVar16) {
                uVar18 = uVar16;
              }
              if (0x7fffffffffffffbf < uVar19) {
                uVar18 = 0x3ffffffffffffff;
              }
              if (uVar18 >> 0x3a == 0) {
                lVar9 = uVar18 << 6;
                __Znwm();
                puVar23 = (undefined8 *)(lVar9 + lVar15);
                puVar27 = *ppuVar12;
                puVar31 = ppuVar12[3];
                puVar29 = ppuVar12[2];
                puVar23[1] = ppuVar12[1];
                *puVar23 = puVar27;
                puVar23[3] = puVar31;
                puVar23[2] = puVar29;
                puVar27 = ppuVar12[4];
                puVar31 = ppuVar12[7];
                puVar29 = ppuVar12[6];
                puVar23[5] = ppuVar12[5];
                puVar23[4] = puVar27;
                puVar23[7] = puVar31;
                puVar23[6] = puVar29;
                puVar25 = puVar23 + 8;
                puVar23 = puVar23 + (lVar15 >> 6) * -8;
                puVar10 = puVar23;
                _memcpy(puVar23,puVar22,lVar15);
                *puVar11 = puVar23;
                puVar11[1] = puVar25;
                puVar11[2] = lVar9 + uVar18 * 0x40;
                if (puVar22 != (undefined8 *)0x0) {
                  __ZdlPv(puVar22);
                  puVar10 = puVar22;
                }
                goto LAB_10a0fc4d0;
              }
            }
            else {
              FUN_10a107904();
            }
            func_0x000109ffded8();
            if (puVar11[0x20] != puVar11[0x21]) {
              puVar11 = (undefined8 *)(puVar11[0x21] + -0x40);
              FUN_10a107918(puVar11,ppuVar12[2],ppuVar12[3]);
              return (undefined8 *)*puVar11;
            }
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10a0fc524);
            (*pcVar6)();
          }
          puVar8 = &UNK_10f63c899;
        }
        else {
          puVar8 = &UNK_10f63b95f;
        }
      }
      else {
        puVar8 = &UNK_10f63b93c;
      }
    }
    else {
      puVar8 = &UNK_10f63b90e;
    }
  }
  else {
    puVar8 = &UNK_10f63b8da;
  }
  FUN_10a00946c(puVar8);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a0fc3a4);
  (*pcVar6)();
}



/* Entry: 10a0fc400; end: 10a0fc4f3;  */

long * FUN_10a0fc400(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  puVar6 = (undefined8 *)param_1[1];
  if (puVar6 < (undefined8 *)param_1[2]) {
    uVar13 = param_2[1];
    uVar12 = *param_2;
    uVar15 = param_2[3];
    uVar14 = param_2[2];
    uVar16 = param_2[4];
    uVar18 = param_2[7];
    uVar17 = param_2[6];
    puVar6[5] = param_2[5];
    puVar6[4] = uVar16;
    puVar6[7] = uVar18;
    puVar6[6] = uVar17;
    puVar6[1] = uVar13;
    *puVar6 = uVar12;
    puVar6[3] = uVar15;
    puVar6[2] = uVar14;
    puVar6 = puVar6 + 8;
    plVar5 = param_1;
LAB_10a0fc4d0:
    param_1[1] = (long)puVar6;
    return plVar5;
  }
  plVar9 = (long *)*param_1;
  lVar11 = (long)puVar6 - (long)plVar9;
  uVar1 = (lVar11 >> 6) + 1;
  if (uVar1 >> 0x3a == 0) {
    uVar7 = param_1[2] - (long)plVar9;
    uVar8 = (long)uVar7 >> 5;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7fffffffffffffbf < uVar7) {
      uVar8 = 0x3ffffffffffffff;
    }
    if (uVar8 >> 0x3a == 0) {
      lVar4 = uVar8 << 6;
      __Znwm();
      puVar2 = (undefined8 *)(lVar4 + lVar11);
      uVar12 = *param_2;
      uVar14 = param_2[3];
      uVar13 = param_2[2];
      puVar2[1] = param_2[1];
      *puVar2 = uVar12;
      puVar2[3] = uVar14;
      puVar2[2] = uVar13;
      uVar12 = param_2[4];
      uVar14 = param_2[7];
      uVar13 = param_2[6];
      puVar2[5] = param_2[5];
      puVar2[4] = uVar12;
      puVar2[7] = uVar14;
      puVar2[6] = uVar13;
      puVar6 = puVar2 + 8;
      plVar10 = puVar2 + (lVar11 >> 6) * -8;
      plVar5 = plVar10;
      _memcpy(plVar10,plVar9,lVar11);
      *param_1 = (long)plVar10;
      param_1[1] = (long)puVar6;
      param_1[2] = lVar4 + uVar8 * 0x40;
      if (plVar9 != (long *)0x0) {
        __ZdlPv(plVar9);
        plVar5 = plVar9;
      }
      goto LAB_10a0fc4d0;
    }
  }
  else {
    FUN_10a107904();
  }
  func_0x000109ffded8();
  if (param_1[0x20] != param_1[0x21]) {
    puVar6 = (undefined8 *)(param_1[0x21] + -0x40);
    FUN_10a107918(puVar6,param_2[2],param_2[3]);
    return (long *)*puVar6;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a0fc524);
  (*pcVar3)();
}



/* Entry: 10a0fc4f4; end: 10a0fc5b7;  */

undefined8 FUN_10a0fc4f4(long param_1,long param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  if (*(long *)(param_1 + 0x100) != *(long *)(param_1 + 0x108)) {
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0x108) + -0x40);
    FUN_10a107918(puVar2,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
    return *puVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0fc524);
  (*pcVar1)();
}



/* Entry: 10a0fc5b8; end: 10a0fc607;  */

int * FUN_10a0fc5b8(long param_1,long param_2)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  code *pcVar4;
  uint *puVar5;
  
  lVar3 = *(long *)(param_1 + 0x108);
  if (*(long *)(param_1 + 0x100) != lVar3) {
    puVar5 = (uint *)(lVar3 + -0x40);
    FUN_10a107918(puVar5,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
    piVar1 = (int *)(*(long *)(*(long *)(lVar3 + -0x18) + 0x10) + (ulong)*puVar5);
    piVar2 = (int *)0x0;
    if (*piVar1 != 0) {
      piVar2 = piVar1 + 1;
    }
    return piVar2;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a0fc608);
  (*pcVar4)();
}



/* Entry: 10a0fc608; end: 10a0fc6af;  */

void FUN_10a0fc608(ulong *param_1,long param_2,long param_3)

{
  ulong *puVar1;
  long lVar2;
  uint uVar3;
  code *pcVar4;
  uint *puVar5;
  ulong *puVar6;
  ulong uVar7;
  
  lVar2 = *(long *)(param_2 + 0x108);
  if (*(long *)(param_2 + 0x100) == lVar2) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a0fc6b0);
    (*pcVar4)();
  }
  puVar5 = (uint *)(lVar2 + -0x40);
  FUN_10a107918(puVar5,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x18));
  puVar5 = (uint *)(*(long *)(*(long *)(lVar2 + -0x18) + 0x10) + (ulong)*puVar5);
  uVar3 = *puVar5;
  uVar7 = (ulong)uVar3;
  if (uVar3 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)uVar3;
    puVar6 = param_1;
    if (uVar3 == 0) goto LAB_10a0fc698;
  }
  else {
    puVar1 = (ulong *)0x19;
    if ((uVar7 | 7) != 0x17) {
      puVar1 = (ulong *)((uVar7 | 7) + 1);
    }
    puVar6 = puVar1;
    __Znwm();
    param_1[1] = uVar7;
    param_1[2] = (ulong)puVar1 | 0x8000000000000000;
    *param_1 = (ulong)puVar6;
  }
  _memmove(puVar6,puVar5 + 1,uVar7);
  param_1 = puVar6;
LAB_10a0fc698:
  *(undefined1 *)((long)param_1 + uVar7) = 0;
  return;
}



/* Entry: 10a0fc6b0; end: 10a0fc9db;  */

undefined8 FUN_10a0fc6b0(long param_1,long param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  if (*(long *)(param_1 + 0x100) != *(long *)(param_1 + 0x108)) {
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0x108) + -0x40);
    FUN_10a107918(puVar2,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
    return *puVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0fc6e0);
  (*pcVar1)();
}



/* Entry: 10a0fc9dc; end: 10a0fca27;  */

void FUN_10a0fc9dc(undefined8 *param_1,long param_2,long param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (*(long *)(param_2 + 0x100) != *(long *)(param_2 + 0x108)) {
    puVar2 = (undefined8 *)(*(long *)(param_2 + 0x108) + -0x40);
    FUN_10a107918(puVar2,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x18));
    uVar3 = *puVar2;
    uVar5 = puVar2[3];
    uVar4 = puVar2[2];
    param_1[1] = puVar2[1];
    *param_1 = uVar3;
    param_1[3] = uVar5;
    param_1[2] = uVar4;
    uVar3 = puVar2[4];
    uVar5 = puVar2[7];
    uVar4 = puVar2[6];
    param_1[5] = puVar2[5];
    param_1[4] = uVar3;
    param_1[7] = uVar5;
    param_1[6] = uVar4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0fca28);
  (*pcVar1)();
}



/* Entry: 10a0fca28; end: 10a0fca5b;  */

undefined4 FUN_10a0fca28(long param_1,long param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  
  if (*(long *)(param_1 + 0x100) != *(long *)(param_1 + 0x108)) {
    puVar2 = (undefined4 *)(*(long *)(param_1 + 0x108) + -0x40);
    FUN_10a107918(puVar2,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
    return *puVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0fca5c);
  (*pcVar1)();
}



/* Entry: 10a0fca5c; end: 10a0fcc67;  */

void FUN_10a0fca5c(undefined8 *param_1,long param_2,long param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (*(long *)(param_2 + 0x100) != *(long *)(param_2 + 0x108)) {
    puVar2 = (undefined8 *)(*(long *)(param_2 + 0x108) + -0x40);
    FUN_10a107918(puVar2,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x18));
    uVar3 = *puVar2;
    uVar5 = puVar2[3];
    uVar4 = puVar2[2];
    param_1[1] = puVar2[1];
    *param_1 = uVar3;
    param_1[3] = uVar5;
    param_1[2] = uVar4;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(puVar2 + 4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0fcaa8);
  (*pcVar1)();
}



/* Entry: 10a0fcc68; end: 10a0fce77;  */

void FUN_10a0fcc68(long *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined8 uVar3;
  uint uVar4;
  ushort uVar5;
  undefined2 *puVar6;
  long lVar7;
  code *pcVar8;
  long *plVar9;
  ulong *puVar10;
  long *plVar11;
  long *plVar12;
  uint *puVar13;
  undefined8 *puVar14;
  undefined4 **ppuVar15;
  undefined4 **ppuVar16;
  undefined1 uVar17;
  long lVar18;
  ushort *puVar19;
  undefined8 *extraout_x8;
  ulong uVar20;
  undefined4 *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  undefined2 uStack_c8;
  undefined6 uStack_c6;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined4 *puStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  long lStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined2 uStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar9 = param_1;
  puVar14 = param_2;
  (**(code **)(*param_1 + 0x200))();
  if ((int)plVar9 == 0) {
    plVar9 = (long *)&UNK_10f63b981;
    FUN_10a00946c();
  }
  else {
    lVar18 = param_1[0x21];
    if (param_1[0x20] == lVar18) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10a0fcd34);
      (*pcVar8)();
    }
    puVar10 = (ulong *)(lVar18 + -0x40);
    FUN_10a107918(puVar10,param_2[2],param_2[3]);
    uStack_50 = *(undefined8 *)(lVar18 + -0x10);
    plStack_58 = *(long **)(lVar18 + -0x18);
    puVar1 = (undefined4 *)(*plStack_58 + (*puVar10 & 0xffffffff));
    puStack_80 = puVar1 + 4;
    uStack_78 = *puVar1;
    lStack_60 = plStack_58[1] + (*puVar10 >> 0x20);
    uStack_70 = 0;
    uStack_48 = 0;
    plVar9 = param_1 + 0x20;
    FUN_10a0fc400(plVar9,&puStack_80);
    puVar14 = (undefined8 *)*param_2;
    uVar3 = param_2[1];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      lVar18 = (long)*(char *)((long)param_1 + 0x4f);
      if (lVar18 < 0) {
        lVar18 = param_1[8];
      }
      if (lVar18 != 0) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                  (param_1 + 7,0x2e);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)
                (param_1 + 7,puVar14,uVar3);
      return;
    }
  }
  ___stack_chk_fail();
  ppuVar15 = &puStack_100;
  ppuVar16 = &puStack_100;
  uStack_b8 = *(ulong *)PTR____stack_chk_guard_11034bdc0;
  lVar18 = plVar9[0x21];
  if (plVar9[0x20] == lVar18) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x10a0fce5c);
    (*pcVar8)();
  }
  uStack_f8 = 0xd12fcfc100000000;
  puStack_100 = (undefined4 *)0x19052481;
  plVar11 = (long *)(lVar18 + -0x40);
  FUN_10a0fc030();
  if (((ulong)ppuVar15 & 1) == 0) {
    puVar19 = (ushort *)&UNK_10e4965ac;
  }
  else {
    puVar19 = (ushort *)(*(long *)(lVar18 + -0x40) + (long)plVar11 * 0x10 + 0xc);
  }
  uVar5 = *puVar19;
  if ((ulong)uVar5 == 0xffff) {
    FUN_10a00946c(&UNK_10f63c8ec);
LAB_10a0fce68:
    ppuVar16 = ppuVar15;
    plVar12 = (long *)&UNK_10f63c941;
    FUN_10a00946c();
  }
  else {
    *(ushort *)(lVar18 + -8) = uVar5;
    plVar11 = *(long **)(lVar18 + -0x18);
    puVar13 = (uint *)(plVar11[2] + (ulong)*(uint *)(*(long *)(lVar18 + -0x20) + (ulong)uVar5));
    if (*puVar13 >> 3 <= (uint)puVar14) goto LAB_10a0fce68;
    uVar20 = *(ulong *)(puVar13 + ((ulong)puVar14 & 0xffffffff) * 2 + 1);
    puVar1 = (undefined4 *)(*plVar11 + (uVar20 & 0xffffffff));
    puStack_100 = puVar1 + 4;
    uStack_f8 = CONCAT44(uStack_f8._4_4_,*puVar1);
    uStack_d0 = *(undefined8 *)(lVar18 + -0x10);
    lStack_e0 = plVar11[1] + (uVar20 >> 0x20);
    uStack_f0 = 0;
    uStack_c8 = 0;
    plVar12 = plVar9 + 0x20;
    plStack_d8 = plVar11;
    FUN_10a0fc400();
    if (*(ulong *)PTR____stack_chk_guard_11034bdc0 == uStack_b8) {
      lVar18 = (long)*(char *)((long)plVar9 + 0x4f);
      if (lVar18 < 0) {
        lVar18 = plVar9[8];
      }
      if (lVar18 != 0) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                  (plVar9 + 7,0x2e);
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(plVar9 + 7,0x23);
      __ZNSt3__19to_stringEi(&uStack_c8,puVar14);
      puVar6 = (undefined2 *)CONCAT62(uStack_c6,uStack_c8);
      if (-1 < (long)uStack_b8) {
        uStack_c0 = uStack_b8 >> 0x38;
        puVar6 = &uStack_c8;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (plVar9 + 7,puVar6,uStack_c0);
      if ((long)uStack_b8 < 0) {
        __ZdlPv(CONCAT62(uStack_c6,uStack_c8));
      }
      return;
    }
  }
  ___stack_chk_fail();
  lVar18 = plVar12[0x21];
  if ((ulong)(lVar18 - plVar12[0x20]) < 0x41) {
    plVar9 = (long *)&UNK_10f63b9a7;
    FUN_10a00946c();
    plVar11 = plVar9;
    (**(code **)(*plVar9 + 0x200))();
    if ((int)plVar11 == 0) {
      uVar17 = 0;
      *(undefined1 *)extraout_x8 = 0;
    }
    else {
      lVar18 = plVar9[0x21];
      if (plVar9[0x20] == lVar18) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10a0fcf40);
        (*pcVar8)();
      }
      puVar13 = (uint *)(lVar18 + -0x40);
      FUN_10a107918(puVar13,*(undefined8 *)((long)ppuVar16 + 0x10),
                    *(undefined8 *)((long)ppuVar16 + 0x18));
      puVar13 = (uint *)(*(long *)(*(long *)(lVar18 + -0x18) + 0x10) + (ulong)*puVar13);
      uVar4 = *puVar13;
      puVar2 = (uint *)0x0;
      if (uVar4 != 0) {
        puVar2 = puVar13 + 1;
      }
      *extraout_x8 = puVar2;
      extraout_x8[1] = (ulong)uVar4;
      uVar17 = 1;
    }
    *(undefined1 *)(extraout_x8 + 2) = uVar17;
    return;
  }
  if (plVar12[0x20] == lVar18) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x10a0fcea0);
    (*pcVar8)();
  }
  plVar12[0x21] = lVar18 + -0x40;
  lVar18 = (long)*(char *)((long)plVar12 + 0x4f);
  plVar9 = plVar12 + 7;
  if (lVar18 < 0) {
    lVar18 = plVar12[8];
    plVar9 = (long *)plVar12[7];
  }
  if (lVar18 != 0) {
    do {
      if (lVar18 == 0) goto LAB_10a0f758c;
      lVar7 = lVar18 + -1;
      lVar18 = lVar18 + -1;
    } while (*(char *)((long)plVar9 + lVar7) != '.');
    if (lVar18 != -1) goto LAB_10a0f7590;
  }
LAB_10a0f758c:
  lVar18 = 0;
LAB_10a0f7590:
                    /* WARNING: Could not recover jumptable at 0x00010bdbcdc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc_1103462e8
  )(plVar12 + 7,lVar18,0);
  return;
}



/* Entry: 10a0fce78; end: 10a0fceb3;  */

void FUN_10a0fce78(long param_1,long param_2)

{
  char *pcVar1;
  uint *puVar2;
  uint uVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  uint *puVar8;
  long lVar9;
  undefined1 uVar10;
  undefined8 *extraout_x8;
  
  lVar9 = *(long *)(param_1 + 0x108);
  if ((ulong)(lVar9 - *(long *)(param_1 + 0x100)) < 0x41) {
    plVar6 = (long *)&UNK_10f63b9a7;
    FUN_10a00946c();
    plVar7 = plVar6;
    (**(code **)(*plVar6 + 0x200))();
    if ((int)plVar7 == 0) {
      uVar10 = 0;
      *(undefined1 *)extraout_x8 = 0;
    }
    else {
      lVar9 = plVar6[0x21];
      if (plVar6[0x20] == lVar9) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10a0fcf40);
        (*pcVar5)();
      }
      puVar8 = (uint *)(lVar9 + -0x40);
      FUN_10a107918(puVar8,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
      puVar8 = (uint *)(*(long *)(*(long *)(lVar9 + -0x18) + 0x10) + (ulong)*puVar8);
      uVar3 = *puVar8;
      puVar2 = (uint *)0x0;
      if (uVar3 != 0) {
        puVar2 = puVar8 + 1;
      }
      *extraout_x8 = puVar2;
      extraout_x8[1] = (ulong)uVar3;
      uVar10 = 1;
    }
    *(undefined1 *)(extraout_x8 + 2) = uVar10;
    return;
  }
  if (*(long *)(param_1 + 0x100) == lVar9) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a0fcea0);
    (*pcVar5)();
  }
  *(long *)(param_1 + 0x108) = lVar9 + -0x40;
  lVar9 = (long)*(char *)(param_1 + 0x4f);
  lVar4 = param_1 + 0x38;
  if (lVar9 < 0) {
    lVar9 = *(long *)(param_1 + 0x40);
    lVar4 = *(long *)(param_1 + 0x38);
  }
  if (lVar9 != 0) {
    do {
      if (lVar9 == 0) goto LAB_10a0f758c;
      pcVar1 = (char *)(lVar4 + -1 + lVar9);
      lVar9 = lVar9 + -1;
    } while (*pcVar1 != '.');
    if (lVar9 != -1) goto LAB_10a0f7590;
  }
LAB_10a0f758c:
  lVar9 = 0;
LAB_10a0f7590:
                    /* WARNING: Could not recover jumptable at 0x00010bdbcdc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc_1103462e8
  )(param_1 + 0x38,lVar9,0);
  return;
}



/* Entry: 10a0fceb4; end: 10a0fcf3f;  */

void FUN_10a0fceb4(undefined8 *param_1,long *param_2,long param_3)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  code *pcVar4;
  long *plVar5;
  uint *puVar6;
  undefined1 uVar7;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x200))();
  if ((int)plVar5 == 0) {
    uVar7 = 0;
    *(undefined1 *)param_1 = 0;
  }
  else {
    lVar2 = param_2[0x21];
    if (param_2[0x20] == lVar2) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a0fcf40);
      (*pcVar4)();
    }
    puVar6 = (uint *)(lVar2 + -0x40);
    FUN_10a107918(puVar6,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x18));
    puVar6 = (uint *)(*(long *)(*(long *)(lVar2 + -0x18) + 0x10) + (ulong)*puVar6);
    uVar3 = *puVar6;
    puVar1 = (uint *)0x0;
    if (uVar3 != 0) {
      puVar1 = puVar6 + 1;
    }
    *param_1 = puVar1;
    param_1[1] = (ulong)uVar3;
    uVar7 = 1;
  }
  *(undefined1 *)(param_1 + 2) = uVar7;
  return;
}



/* Entry: 10a0fcf40; end: 10a0fd06b;  */

void FUN_10a0fcf40(long *param_1,long param_2,long param_3)

{
  uint uVar1;
  code *pcVar2;
  uint *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long *extraout_x8_03;
  undefined8 *puVar8;
  long *extraout_x8_04;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  uint *puVar12;
  uint *puVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  long *plStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  long *plStack_190;
  
  lVar15 = *(long *)(param_2 + 0x108);
  if (*(long *)(param_2 + 0x100) == lVar15) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a0fd044);
    (*pcVar2)();
  }
  puVar3 = (uint *)(lVar15 + -0x40);
  lVar9 = *(long *)(param_3 + 0x10);
  FUN_10a107918(puVar3,lVar9,*(undefined8 *)(param_3 + 0x18));
  puVar3 = (uint *)(*(long *)(*(long *)(lVar15 + -0x18) + 0x10) + (ulong)*puVar3);
  puVar13 = puVar3 + 1;
  uVar1 = *puVar3;
  puVar3 = puVar13;
  if (((ulong)puVar13 & 3) != 0) {
    plVar6 = *(long **)(lVar15 + -0x10);
    lVar5 = *plVar6;
    lVar15 = ((ulong)(uint)-((int)lVar5 + (int)plVar6[3]) & 3) + plVar6[3];
    if ((ulong)(plVar6[1] - lVar5) < lVar15 + (ulong)uVar1) {
      puVar4 = &UNK_10f63c91e;
      FUN_10a00946c();
      if (*param_1 != 0) {
        param_1[1] = *param_1;
        __ZdlPv();
      }
      __Unwind_Resume();
      lVar15 = *(long *)(puVar4 + 0x108);
      if (*(long *)(puVar4 + 0x100) == lVar15) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a0fd154);
        (*pcVar2)();
      }
      puVar3 = (uint *)(lVar15 + -0x40);
      lVar5 = *(long *)(lVar9 + 0x10);
      FUN_10a107918(puVar3,lVar5,*(undefined8 *)(lVar9 + 0x18));
      puVar3 = (uint *)(*(long *)(*(long *)(lVar15 + -0x18) + 0x10) + (ulong)*puVar3);
      puVar13 = puVar3 + 1;
      uVar1 = *puVar3;
      puVar3 = puVar13;
      if (((ulong)puVar13 & 3) != 0) {
        plVar6 = *(long **)(lVar15 + -0x10);
        lVar9 = *plVar6;
        lVar15 = ((ulong)(uint)-((int)lVar9 + (int)plVar6[3]) & 3) + plVar6[3];
        if ((ulong)(plVar6[1] - lVar9) < lVar15 + (ulong)uVar1) {
          puVar4 = &UNK_10f63c91e;
          FUN_10a00946c();
          if (*extraout_x8 != 0) {
            extraout_x8[1] = *extraout_x8;
            __ZdlPv();
          }
          __Unwind_Resume();
          lVar15 = *(long *)(puVar4 + 0x108);
          if (*(long *)(puVar4 + 0x100) == lVar15) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10a0fd280);
            (*pcVar2)();
          }
          puVar3 = (uint *)(lVar15 + -0x40);
          lVar9 = *(long *)(lVar5 + 0x10);
          FUN_10a107918(puVar3,lVar9,*(undefined8 *)(lVar5 + 0x18));
          puVar3 = (uint *)(*(long *)(*(long *)(lVar15 + -0x18) + 0x10) + (ulong)*puVar3);
          puVar13 = puVar3 + 1;
          uVar1 = *puVar3;
          puVar3 = puVar13;
          if (((ulong)puVar13 & 3) != 0) {
            plVar6 = *(long **)(lVar15 + -0x10);
            lVar5 = *plVar6;
            lVar15 = ((ulong)(uint)-((int)lVar5 + (int)plVar6[3]) & 3) + plVar6[3];
            if ((ulong)(plVar6[1] - lVar5) < lVar15 + (ulong)uVar1) {
              puVar4 = &UNK_10f63c91e;
              FUN_10a00946c();
              if (*extraout_x8_00 != 0) {
                extraout_x8_00[1] = *extraout_x8_00;
                __ZdlPv();
              }
              __Unwind_Resume();
              lVar15 = *(long *)(puVar4 + 0x108);
              if (*(long *)(puVar4 + 0x100) == lVar15) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x10a0fd3ac);
                (*pcVar2)();
              }
              puVar3 = (uint *)(lVar15 + -0x40);
              lVar5 = *(long *)(lVar9 + 0x10);
              FUN_10a107918(puVar3,lVar5,*(undefined8 *)(lVar9 + 0x18));
              puVar3 = (uint *)(*(long *)(*(long *)(lVar15 + -0x18) + 0x10) + (ulong)*puVar3);
              puVar13 = puVar3 + 1;
              uVar1 = *puVar3;
              puVar3 = puVar13;
              if (((ulong)puVar13 & 3) != 0) {
                plVar6 = *(long **)(lVar15 + -0x10);
                lVar9 = *plVar6;
                lVar15 = ((ulong)(uint)-((int)lVar9 + (int)plVar6[3]) & 3) + plVar6[3];
                if ((ulong)(plVar6[1] - lVar9) < lVar15 + (ulong)uVar1) {
                  puVar4 = &UNK_10f63c91e;
                  FUN_10a00946c();
                  if (*extraout_x8_01 != 0) {
                    extraout_x8_01[1] = *extraout_x8_01;
                    __ZdlPv();
                  }
                  __Unwind_Resume();
                  lVar15 = *(long *)(puVar4 + 0x108);
                  if (*(long *)(puVar4 + 0x100) == lVar15) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a0fd4bc);
                    (*pcVar2)();
                  }
                  puVar3 = (uint *)(lVar15 + -0x40);
                  lVar9 = *(long *)(lVar5 + 0x10);
                  FUN_10a107918(puVar3,lVar9,*(undefined8 *)(lVar5 + 0x18));
                  puVar3 = (uint *)(*(long *)(*(long *)(lVar15 + -0x18) + 0x10) + (ulong)*puVar3);
                  puVar13 = puVar3 + 1;
                  uVar1 = *puVar3;
                  puVar3 = puVar13;
                  if (((ulong)puVar13 & 3) != 0) {
                    plVar6 = *(long **)(lVar15 + -0x10);
                    lVar5 = *plVar6;
                    lVar15 = ((ulong)(uint)-((int)lVar5 + (int)plVar6[3]) & 3) + plVar6[3];
                    if ((ulong)(plVar6[1] - lVar5) < lVar15 + (ulong)uVar1) {
                      puVar4 = &UNK_10f63c91e;
                      FUN_10a00946c();
                      if (*extraout_x8_02 != 0) {
                        extraout_x8_02[1] = *extraout_x8_02;
                        __ZdlPv();
                      }
                      __Unwind_Resume();
                      lVar15 = *(long *)(puVar4 + 0x108);
                      if (*(long *)(puVar4 + 0x100) == lVar15) {
                    /* WARNING: Does not return */
                        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a0fd5cc);
                        (*pcVar2)();
                      }
                      puVar3 = (uint *)(lVar15 + -0x40);
                      lVar5 = *(long *)(lVar9 + 0x10);
                      FUN_10a107918(puVar3,lVar5,*(undefined8 *)(lVar9 + 0x18));
                      puVar3 = (uint *)(*(long *)(*(long *)(lVar15 + -0x18) + 0x10) + (ulong)*puVar3
                                       );
                      puVar13 = puVar3 + 1;
                      uVar1 = *puVar3;
                      puVar3 = puVar13;
                      if (((ulong)puVar13 & 3) != 0) {
                        plVar6 = *(long **)(lVar15 + -0x10);
                        lVar9 = *plVar6;
                        lVar15 = ((ulong)(uint)-((int)lVar9 + (int)plVar6[3]) & 3) + plVar6[3];
                        if ((ulong)(plVar6[1] - lVar9) < lVar15 + (ulong)uVar1) {
                          puVar4 = &UNK_10f63c91e;
                          FUN_10a00946c();
                          if (*extraout_x8_03 != 0) {
                            extraout_x8_03[1] = *extraout_x8_03;
                            __ZdlPv();
                          }
                          __Unwind_Resume();
                          lVar15 = *(long *)(puVar4 + 0x108);
                          if (*(long *)(puVar4 + 0x100) == lVar15) {
LAB_10a0fd794:
                    /* WARNING: Does not return */
                            pcVar2 = (code *)SoftwareBreakpoint(1,0x10a0fd798);
                            (*pcVar2)();
                          }
                          puVar3 = (uint *)(lVar15 + -0x40);
                          FUN_10a107918(puVar3,*(undefined8 *)(lVar5 + 0x10),
                                        *(undefined8 *)(lVar5 + 0x18));
                          puVar3 = (uint *)(*(long *)(*(long *)(lVar15 + -0x18) + 0x10) +
                                           (ulong)*puVar3);
                          uVar1 = *puVar3;
                          extraout_x8_04[1] = 0;
                          extraout_x8_04[2] = 0;
                          *extraout_x8_04 = 0;
                          if (uVar1 != 0) {
                            uVar14 = 0;
                            puVar13 = puVar3 + 1;
                            do {
                              puVar12 = puVar13 + 1;
                              uVar16 = (ulong)*puVar13;
                              puVar13 = (uint *)((long)puVar12 + uVar16);
                              if (uVar14 < (ulong)extraout_x8_04[2]) {
                                FUN_109ffdf00(uVar14,puVar12,puVar13,uVar16);
                                uVar14 = uVar14 + 0x18;
                              }
                              else {
                                lVar15 = uVar14 - *extraout_x8_04;
                                uVar14 = (lVar15 >> 3) * -0x5555555555555555 + 1;
                                if (0xaaaaaaaaaaaaaaa < uVar14) {
                                  FUN_10a05a0c0();
                                  goto LAB_10a0fd794;
                                }
                                lVar9 = extraout_x8_04[2] - *extraout_x8_04 >> 3;
                                uVar11 = lVar9 * 0x5555555555555556;
                                if (uVar11 < uVar14 || uVar11 - uVar14 == 0) {
                                  uVar11 = uVar14;
                                }
                                if (0x555555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
                                  uVar11 = 0xaaaaaaaaaaaaaaa;
                                }
                                if (uVar11 == 0) {
                                  plVar6 = (long *)0x0;
                                }
                                else {
                                  plVar6 = extraout_x8_04;
                                  FUN_10a05a0d4();
                                }
                                lVar15 = (long)plVar6 + lVar15;
                                plStack_1a8 = plVar6;
                                plStack_1a0 = (long *)lVar15;
                                plStack_198 = (long *)lVar15;
                                plStack_190 = plVar6 + uVar11 * 3;
                                FUN_109ffdf00(lVar15,puVar12,puVar13,uVar16);
                                uVar14 = lVar15 + 0x18;
                                lVar15 = lVar15 - (extraout_x8_04[1] - *extraout_x8_04);
                                _memcpy(lVar15);
                                plStack_1a8 = (long *)*extraout_x8_04;
                                *extraout_x8_04 = lVar15;
                                extraout_x8_04[1] = uVar14;
                                plStack_190 = (long *)extraout_x8_04[2];
                                extraout_x8_04[2] = (long)(plVar6 + uVar11 * 3);
                                plStack_1a0 = plStack_1a8;
                                plStack_198 = plStack_1a8;
                                func_0x000107c31938(&plStack_1a8);
                              }
                              extraout_x8_04[1] = uVar14;
                            } while (puVar13 != (uint *)((long)puVar3 + (ulong)uVar1 + 4));
                          }
                          return;
                        }
                        plVar6[3] = lVar15;
                        puVar3 = (uint *)(lVar9 + lVar15);
                        _memcpy(puVar3,puVar13,(ulong)uVar1);
                      }
                      *extraout_x8_03 = 0;
                      extraout_x8_03[1] = 0;
                      extraout_x8_03[2] = 0;
                      if (7 < uVar1) {
                        FUN_10a0cb3e4(extraout_x8_03,uVar1 >> 3);
                        puVar8 = (undefined8 *)extraout_x8_03[1];
                        puVar13 = puVar3;
                        do {
                          puVar12 = puVar13 + 2;
                          puVar7 = puVar8 + 1;
                          *puVar8 = *(undefined8 *)puVar13;
                          puVar8 = puVar7;
                          puVar13 = puVar12;
                        } while (puVar12 != puVar3 + (ulong)(uVar1 >> 3) * 2);
                        extraout_x8_03[1] = (long)puVar7;
                      }
                      return;
                    }
                    plVar6[3] = lVar15;
                    puVar3 = (uint *)(lVar5 + lVar15);
                    _memcpy(puVar3,puVar13,(ulong)uVar1);
                  }
                  *extraout_x8_02 = 0;
                  extraout_x8_02[1] = 0;
                  extraout_x8_02[2] = 0;
                  if (7 < uVar1) {
                    func_0x00010a107af0(extraout_x8_02,uVar1 >> 3);
                    puVar8 = (undefined8 *)extraout_x8_02[1];
                    puVar13 = puVar3;
                    do {
                      puVar12 = puVar13 + 2;
                      puVar7 = puVar8 + 1;
                      *puVar8 = *(undefined8 *)puVar13;
                      puVar8 = puVar7;
                      puVar13 = puVar12;
                    } while (puVar12 != puVar3 + (ulong)(uVar1 >> 3) * 2);
                    extraout_x8_02[1] = (long)puVar7;
                  }
                  return;
                }
                plVar6[3] = lVar15;
                puVar3 = (uint *)(lVar9 + lVar15);
                _memcpy(puVar3,puVar13,(ulong)uVar1);
              }
              *extraout_x8_01 = 0;
              extraout_x8_01[1] = 0;
              extraout_x8_01[2] = 0;
              if (0x13 < uVar1) {
                FUN_10a0cc640(extraout_x8_01,(ulong)uVar1 / 0x14);
                puVar13 = puVar3 + ((ulong)uVar1 / 0x14) * 5;
                puVar8 = (undefined8 *)extraout_x8_01[1];
                do {
                  uVar17 = *(undefined8 *)(puVar3 + 2);
                  uVar10 = *(undefined8 *)puVar3;
                  *(uint *)(puVar8 + 2) = puVar3[4];
                  puVar7 = (undefined8 *)((long)puVar8 + 0x14);
                  puVar8[1] = uVar17;
                  *puVar8 = uVar10;
                  puVar3 = puVar3 + 5;
                  puVar8 = puVar7;
                } while (puVar3 != puVar13);
                extraout_x8_01[1] = (long)puVar7;
              }
              return;
            }
            plVar6[3] = lVar15;
            puVar3 = (uint *)(lVar5 + lVar15);
            _memcpy(puVar3,puVar13,(ulong)uVar1);
          }
          *extraout_x8_00 = 0;
          extraout_x8_00[1] = 0;
          extraout_x8_00[2] = 0;
          if (0x13 < uVar1) {
            func_0x00010a107a58(extraout_x8_00,(ulong)uVar1 / 0x14);
            puVar13 = puVar3 + ((ulong)uVar1 / 0x14) * 5;
            puVar8 = (undefined8 *)extraout_x8_00[1];
            do {
              uVar17 = *(undefined8 *)(puVar3 + 2);
              uVar10 = *(undefined8 *)puVar3;
              *(uint *)(puVar8 + 2) = puVar3[4];
              puVar7 = (undefined8 *)((long)puVar8 + 0x14);
              puVar8[1] = uVar17;
              *puVar8 = uVar10;
              puVar3 = puVar3 + 5;
              puVar8 = puVar7;
            } while (puVar3 != puVar13);
            extraout_x8_00[1] = (long)puVar7;
          }
          return;
        }
        plVar6[3] = lVar15;
        puVar3 = (uint *)(lVar9 + lVar15);
        _memcpy(puVar3,puVar13,(ulong)uVar1);
      }
      *extraout_x8 = 0;
      extraout_x8[1] = 0;
      extraout_x8[2] = 0;
      if (0xf < uVar1) {
        FUN_10a0cbee4(extraout_x8,uVar1 >> 4);
        puVar8 = (undefined8 *)extraout_x8[1];
        puVar13 = puVar3;
        do {
          puVar12 = puVar13 + 4;
          uVar10 = *(undefined8 *)puVar13;
          puVar7 = puVar8 + 2;
          puVar8[1] = *(undefined8 *)(puVar13 + 2);
          *puVar8 = uVar10;
          puVar8 = puVar7;
          puVar13 = puVar12;
        } while (puVar12 != puVar3 + (ulong)(uVar1 >> 4) * 4);
        extraout_x8[1] = (long)puVar7;
      }
      return;
    }
    plVar6[3] = lVar15;
    puVar3 = (uint *)(lVar5 + lVar15);
    _memcpy(puVar3,puVar13,(ulong)uVar1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (0xb < uVar1) {
    func_0x00010a1079b8(param_1,(ulong)uVar1 / 0xc);
    puVar13 = puVar3 + ((ulong)uVar1 / 0xc) * 3;
    puVar8 = (undefined8 *)param_1[1];
    do {
      uVar10 = *(undefined8 *)puVar3;
      *(uint *)(puVar8 + 1) = puVar3[2];
      puVar7 = (undefined8 *)((long)puVar8 + 0xc);
      *puVar8 = uVar10;
      puVar3 = puVar3 + 3;
      puVar8 = puVar7;
    } while (puVar3 != puVar13);
    param_1[1] = (long)puVar7;
  }
  return;
}



/* Entry: 10a0fd06c; end: 10a0fd17b;  */

void FUN_10a0fd06c(long *param_1,long param_2,long param_3)

{
  uint uVar1;
  code *pcVar2;
  uint *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long *extraout_x8;
  undefined8 *puVar7;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  undefined8 *puVar8;
  long *extraout_x8_03;
  long lVar9;
  ulong uVar10;
  uint *puVar11;
  uint *puVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long *plStack_178;
  long *plStack_170;
  long *plStack_168;
  long *plStack_160;
  
  lVar14 = *(long *)(param_2 + 0x108);
  if (*(long *)(param_2 + 0x100) == lVar14) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a0fd154);
    (*pcVar2)();
  }
  puVar3 = (uint *)(lVar14 + -0x40);
  lVar9 = *(long *)(param_3 + 0x10);
  FUN_10a107918(puVar3,lVar9,*(undefined8 *)(param_3 + 0x18));
  puVar3 = (uint *)(*(long *)(*(long *)(lVar14 + -0x18) + 0x10) + (ulong)*puVar3);
  puVar12 = puVar3 + 1;
  uVar1 = *puVar3;
  puVar3 = puVar12;
  if (((ulong)puVar12 & 3) != 0) {
    plVar6 = *(long **)(lVar14 + -0x10);
    lVar5 = *plVar6;
    lVar14 = ((ulong)(uint)-((int)lVar5 + (int)plVar6[3]) & 3) + plVar6[3];
    if ((ulong)(plVar6[1] - lVar5) < lVar14 + (ulong)uVar1) {
      puVar4 = &UNK_10f63c91e;
      FUN_10a00946c();
      if (*param_1 != 0) {
        param_1[1] = *param_1;
        __ZdlPv();
      }
      __Unwind_Resume();
      lVar14 = *(long *)(puVar4 + 0x108);
      if (*(long *)(puVar4 + 0x100) == lVar14) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a0fd280);
        (*pcVar2)();
      }
      puVar3 = (uint *)(lVar14 + -0x40);
      lVar5 = *(long *)(lVar9 + 0x10);
      FUN_10a107918(puVar3,lVar5,*(undefined8 *)(lVar9 + 0x18));
      puVar3 = (uint *)(*(long *)(*(long *)(lVar14 + -0x18) + 0x10) + (ulong)*puVar3);
      puVar12 = puVar3 + 1;
      uVar1 = *puVar3;
      puVar3 = puVar12;
      if (((ulong)puVar12 & 3) != 0) {
        plVar6 = *(long **)(lVar14 + -0x10);
        lVar9 = *plVar6;
        lVar14 = ((ulong)(uint)-((int)lVar9 + (int)plVar6[3]) & 3) + plVar6[3];
        if ((ulong)(plVar6[1] - lVar9) < lVar14 + (ulong)uVar1) {
          puVar4 = &UNK_10f63c91e;
          FUN_10a00946c();
          if (*extraout_x8 != 0) {
            extraout_x8[1] = *extraout_x8;
            __ZdlPv();
          }
          __Unwind_Resume();
          lVar14 = *(long *)(puVar4 + 0x108);
          if (*(long *)(puVar4 + 0x100) == lVar14) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10a0fd3ac);
            (*pcVar2)();
          }
          puVar3 = (uint *)(lVar14 + -0x40);
          lVar9 = *(long *)(lVar5 + 0x10);
          FUN_10a107918(puVar3,lVar9,*(undefined8 *)(lVar5 + 0x18));
          puVar3 = (uint *)(*(long *)(*(long *)(lVar14 + -0x18) + 0x10) + (ulong)*puVar3);
          puVar12 = puVar3 + 1;
          uVar1 = *puVar3;
          puVar3 = puVar12;
          if (((ulong)puVar12 & 3) != 0) {
            plVar6 = *(long **)(lVar14 + -0x10);
            lVar5 = *plVar6;
            lVar14 = ((ulong)(uint)-((int)lVar5 + (int)plVar6[3]) & 3) + plVar6[3];
            if ((ulong)(plVar6[1] - lVar5) < lVar14 + (ulong)uVar1) {
              puVar4 = &UNK_10f63c91e;
              FUN_10a00946c();
              if (*extraout_x8_00 != 0) {
                extraout_x8_00[1] = *extraout_x8_00;
                __ZdlPv();
              }
              __Unwind_Resume();
              lVar14 = *(long *)(puVar4 + 0x108);
              if (*(long *)(puVar4 + 0x100) == lVar14) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x10a0fd4bc);
                (*pcVar2)();
              }
              puVar3 = (uint *)(lVar14 + -0x40);
              lVar5 = *(long *)(lVar9 + 0x10);
              FUN_10a107918(puVar3,lVar5,*(undefined8 *)(lVar9 + 0x18));
              puVar3 = (uint *)(*(long *)(*(long *)(lVar14 + -0x18) + 0x10) + (ulong)*puVar3);
              puVar12 = puVar3 + 1;
              uVar1 = *puVar3;
              puVar3 = puVar12;
              if (((ulong)puVar12 & 3) != 0) {
                plVar6 = *(long **)(lVar14 + -0x10);
                lVar9 = *plVar6;
                lVar14 = ((ulong)(uint)-((int)lVar9 + (int)plVar6[3]) & 3) + plVar6[3];
                if ((ulong)(plVar6[1] - lVar9) < lVar14 + (ulong)uVar1) {
                  puVar4 = &UNK_10f63c91e;
                  FUN_10a00946c();
                  if (*extraout_x8_01 != 0) {
                    extraout_x8_01[1] = *extraout_x8_01;
                    __ZdlPv();
                  }
                  __Unwind_Resume();
                  lVar14 = *(long *)(puVar4 + 0x108);
                  if (*(long *)(puVar4 + 0x100) == lVar14) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a0fd5cc);
                    (*pcVar2)();
                  }
                  puVar3 = (uint *)(lVar14 + -0x40);
                  lVar9 = *(long *)(lVar5 + 0x10);
                  FUN_10a107918(puVar3,lVar9,*(undefined8 *)(lVar5 + 0x18));
                  puVar3 = (uint *)(*(long *)(*(long *)(lVar14 + -0x18) + 0x10) + (ulong)*puVar3);
                  puVar12 = puVar3 + 1;
                  uVar1 = *puVar3;
                  puVar3 = puVar12;
                  if (((ulong)puVar12 & 3) != 0) {
                    plVar6 = *(long **)(lVar14 + -0x10);
                    lVar5 = *plVar6;
                    lVar14 = ((ulong)(uint)-((int)lVar5 + (int)plVar6[3]) & 3) + plVar6[3];
                    if ((ulong)(plVar6[1] - lVar5) < lVar14 + (ulong)uVar1) {
                      puVar4 = &UNK_10f63c91e;
                      FUN_10a00946c();
                      if (*extraout_x8_02 != 0) {
                        extraout_x8_02[1] = *extraout_x8_02;
                        __ZdlPv();
                      }
                      __Unwind_Resume();
                      lVar14 = *(long *)(puVar4 + 0x108);
                      if (*(long *)(puVar4 + 0x100) == lVar14) {
LAB_10a0fd794:
                    /* WARNING: Does not return */
                        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a0fd798);
                        (*pcVar2)();
                      }
                      puVar3 = (uint *)(lVar14 + -0x40);
                      FUN_10a107918(puVar3,*(undefined8 *)(lVar9 + 0x10),
                                    *(undefined8 *)(lVar9 + 0x18));
                      puVar3 = (uint *)(*(long *)(*(long *)(lVar14 + -0x18) + 0x10) + (ulong)*puVar3
                                       );
                      uVar1 = *puVar3;
                      extraout_x8_03[1] = 0;
                      extraout_x8_03[2] = 0;
                      *extraout_x8_03 = 0;
                      if (uVar1 != 0) {
                        uVar13 = 0;
                        puVar12 = puVar3 + 1;
                        do {
                          puVar11 = puVar12 + 1;
                          uVar15 = (ulong)*puVar12;
                          puVar12 = (uint *)((long)puVar11 + uVar15);
                          if (uVar13 < (ulong)extraout_x8_03[2]) {
                            FUN_109ffdf00(uVar13,puVar11,puVar12,uVar15);
                            uVar13 = uVar13 + 0x18;
                          }
                          else {
                            lVar14 = uVar13 - *extraout_x8_03;
                            uVar13 = (lVar14 >> 3) * -0x5555555555555555 + 1;
                            if (0xaaaaaaaaaaaaaaa < uVar13) {
                              FUN_10a05a0c0();
                              goto LAB_10a0fd794;
                            }
                            lVar9 = extraout_x8_03[2] - *extraout_x8_03 >> 3;
                            uVar10 = lVar9 * 0x5555555555555556;
                            if (uVar10 < uVar13 || uVar10 - uVar13 == 0) {
                              uVar10 = uVar13;
                            }
                            if (0x555555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
                              uVar10 = 0xaaaaaaaaaaaaaaa;
                            }
                            if (uVar10 == 0) {
                              plVar6 = (long *)0x0;
                            }
                            else {
                              plVar6 = extraout_x8_03;
                              FUN_10a05a0d4();
                            }
                            lVar14 = (long)plVar6 + lVar14;
                            plStack_178 = plVar6;
                            plStack_170 = (long *)lVar14;
                            plStack_168 = (long *)lVar14;
                            plStack_160 = plVar6 + uVar10 * 3;
                            FUN_109ffdf00(lVar14,puVar11,puVar12,uVar15);
                            uVar13 = lVar14 + 0x18;
                            lVar14 = lVar14 - (extraout_x8_03[1] - *extraout_x8_03);
                            _memcpy(lVar14);
                            plStack_178 = (long *)*extraout_x8_03;
                            *extraout_x8_03 = lVar14;
                            extraout_x8_03[1] = uVar13;
                            plStack_160 = (long *)extraout_x8_03[2];
                            extraout_x8_03[2] = (long)(plVar6 + uVar10 * 3);
                            plStack_170 = plStack_178;
                            plStack_168 = plStack_178;
                            func_0x000107c31938(&plStack_178);
                          }
                          extraout_x8_03[1] = uVar13;
                        } while (puVar12 != (uint *)((long)puVar3 + (ulong)uVar1 + 4));
                      }
                      return;
                    }
                    plVar6[3] = lVar14;
                    puVar3 = (uint *)(lVar5 + lVar14);
                    _memcpy(puVar3,puVar12,(ulong)uVar1);
                  }
                  *extraout_x8_02 = 0;
                  extraout_x8_02[1] = 0;
                  extraout_x8_02[2] = 0;
                  if (7 < uVar1) {
                    FUN_10a0cb3e4(extraout_x8_02,uVar1 >> 3);
                    puVar8 = (undefined8 *)extraout_x8_02[1];
                    puVar12 = puVar3;
                    do {
                      puVar11 = puVar12 + 2;
                      puVar7 = puVar8 + 1;
                      *puVar8 = *(undefined8 *)puVar12;
                      puVar8 = puVar7;
                      puVar12 = puVar11;
                    } while (puVar11 != puVar3 + (ulong)(uVar1 >> 3) * 2);
                    extraout_x8_02[1] = (long)puVar7;
                  }
                  return;
                }
                plVar6[3] = lVar14;
                puVar3 = (uint *)(lVar9 + lVar14);
                _memcpy(puVar3,puVar12,(ulong)uVar1);
              }
              *extraout_x8_01 = 0;
              extraout_x8_01[1] = 0;
              extraout_x8_01[2] = 0;
              if (7 < uVar1) {
                func_0x00010a107af0(extraout_x8_01,uVar1 >> 3);
                puVar8 = (undefined8 *)extraout_x8_01[1];
                puVar12 = puVar3;
                do {
                  puVar11 = puVar12 + 2;
                  puVar7 = puVar8 + 1;
                  *puVar8 = *(undefined8 *)puVar12;
                  puVar8 = puVar7;
                  puVar12 = puVar11;
                } while (puVar11 != puVar3 + (ulong)(uVar1 >> 3) * 2);
                extraout_x8_01[1] = (long)puVar7;
              }
              return;
            }
            plVar6[3] = lVar14;
            puVar3 = (uint *)(lVar5 + lVar14);
            _memcpy(puVar3,puVar12,(ulong)uVar1);
          }
          *extraout_x8_00 = 0;
          extraout_x8_00[1] = 0;
          extraout_x8_00[2] = 0;
          if (0x13 < uVar1) {
            FUN_10a0cc640(extraout_x8_00,(ulong)uVar1 / 0x14);
            puVar12 = puVar3 + ((ulong)uVar1 / 0x14) * 5;
            puVar8 = (undefined8 *)extraout_x8_00[1];
            do {
              uVar17 = *(undefined8 *)(puVar3 + 2);
              uVar16 = *(undefined8 *)puVar3;
              *(uint *)(puVar8 + 2) = puVar3[4];
              puVar7 = (undefined8 *)((long)puVar8 + 0x14);
              puVar8[1] = uVar17;
              *puVar8 = uVar16;
              puVar3 = puVar3 + 5;
              puVar8 = puVar7;
            } while (puVar3 != puVar12);
            extraout_x8_00[1] = (long)puVar7;
          }
          return;
        }
        plVar6[3] = lVar14;
        puVar3 = (uint *)(lVar9 + lVar14);
        _memcpy(puVar3,puVar12,(ulong)uVar1);
      }
      *extraout_x8 = 0;
      extraout_x8[1] = 0;
      extraout_x8[2] = 0;
      if (0x13 < uVar1) {
        func_0x00010a107a58(extraout_x8,(ulong)uVar1 / 0x14);
        puVar12 = puVar3 + ((ulong)uVar1 / 0x14) * 5;
        puVar8 = (undefined8 *)extraout_x8[1];
        do {
          uVar17 = *(undefined8 *)(puVar3 + 2);
          uVar16 = *(undefined8 *)puVar3;
          *(uint *)(puVar8 + 2) = puVar3[4];
          puVar7 = (undefined8 *)((long)puVar8 + 0x14);
          puVar8[1] = uVar17;
          *puVar8 = uVar16;
          puVar3 = puVar3 + 5;
          puVar8 = puVar7;
        } while (puVar3 != puVar12);
        extraout_x8[1] = (long)puVar7;
      }
      return;
    }
    plVar6[3] = lVar14;
    puVar3 = (uint *)(lVar5 + lVar14);
    _memcpy(puVar3,puVar12,(ulong)uVar1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (0xf < uVar1) {
    FUN_10a0cbee4(param_1,uVar1 >> 4);
    puVar8 = (undefined8 *)param_1[1];
    puVar12 = puVar3;
    do {
      puVar11 = puVar12 + 4;
      uVar16 = *(undefined8 *)puVar12;
      puVar7 = puVar8 + 2;
      puVar8[1] = *(undefined8 *)(puVar12 + 2);
      *puVar8 = uVar16;
      puVar8 = puVar7;
      puVar12 = puVar11;
    } while (puVar11 != puVar3 + (ulong)(uVar1 >> 4) * 4);
    param_1[1] = (long)puVar7;
  }
  return;
}



/* Entry: 10a0fd17c; end: 10a0fd2a7;  */

void FUN_10a0fd17c(long *param_1,long param_2,long param_3)

{
  uint uVar1;
  code *pcVar2;
  uint *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  undefined8 *puVar8;
  long *extraout_x8_02;
  long lVar9;
  ulong uVar10;
  uint *puVar11;
  uint *puVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long *plStack_148;
  long *plStack_140;
  long *plStack_138;
  long *plStack_130;
  
  lVar14 = *(long *)(param_2 + 0x108);
  if (*(long *)(param_2 + 0x100) == lVar14) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a0fd280);
    (*pcVar2)();
  }
  puVar3 = (uint *)(lVar14 + -0x40);
  lVar9 = *(long *)(param_3 + 0x10);
  FUN_10a107918(puVar3,lVar9,*(undefined8 *)(param_3 + 0x18));
  puVar3 = (uint *)(*(long *)(*(long *)(lVar14 + -0x18) + 0x10) + (ulong)*puVar3);
  puVar12 = puVar3 + 1;
  uVar1 = *puVar3;
  puVar3 = puVar12;
  if (((ulong)puVar12 & 3) != 0) {
    plVar6 = *(long **)(lVar14 + -0x10);
    lVar5 = *plVar6;
    lVar14 = ((ulong)(uint)-((int)lVar5 + (int)plVar6[3]) & 3) + plVar6[3];
    if ((ulong)(plVar6[1] - lVar5) < lVar14 + (ulong)uVar1) {
      puVar4 = &UNK_10f63c91e;
      FUN_10a00946c();
      if (*param_1 != 0) {
        param_1[1] = *param_1;
        __ZdlPv();
      }
      __Unwind_Resume();
      lVar14 = *(long *)(puVar4 + 0x108);
      if (*(long *)(puVar4 + 0x100) == lVar14) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a0fd3ac);
        (*pcVar2)();
      }
      puVar3 = (uint *)(lVar14 + -0x40);
      lVar5 = *(long *)(lVar9 + 0x10);
      FUN_10a107918(puVar3,lVar5,*(undefined8 *)(lVar9 + 0x18));
      puVar3 = (uint *)(*(long *)(*(long *)(lVar14 + -0x18) + 0x10) + (ulong)*puVar3);
      puVar12 = puVar3 + 1;
      uVar1 = *puVar3;
      puVar3 = puVar12;
      if (((ulong)puVar12 & 3) != 0) {
        plVar6 = *(long **)(lVar14 + -0x10);
        lVar9 = *plVar6;
        lVar14 = ((ulong)(uint)-((int)lVar9 + (int)plVar6[3]) & 3) + plVar6[3];
        if ((ulong)(plVar6[1] - lVar9) < lVar14 + (ulong)uVar1) {
          puVar4 = &UNK_10f63c91e;
          FUN_10a00946c();
          if (*extraout_x8 != 0) {
            extraout_x8[1] = *extraout_x8;
            __ZdlPv();
          }
          __Unwind_Resume();
          lVar14 = *(long *)(puVar4 + 0x108);
          if (*(long *)(puVar4 + 0x100) == lVar14) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10a0fd4bc);
            (*pcVar2)();
          }
          puVar3 = (uint *)(lVar14 + -0x40);
          lVar9 = *(long *)(lVar5 + 0x10);
          FUN_10a107918(puVar3,lVar9,*(undefined8 *)(lVar5 + 0x18));
          puVar3 = (uint *)(*(long *)(*(long *)(lVar14 + -0x18) + 0x10) + (ulong)*puVar3);
          puVar12 = puVar3 + 1;
          uVar1 = *puVar3;
          puVar3 = puVar12;
          if (((ulong)puVar12 & 3) != 0) {
            plVar6 = *(long **)(lVar14 + -0x10);
            lVar5 = *plVar6;
            lVar14 = ((ulong)(uint)-((int)lVar5 + (int)plVar6[3]) & 3) + plVar6[3];
            if ((ulong)(plVar6[1] - lVar5) < lVar14 + (ulong)uVar1) {
              puVar4 = &UNK_10f63c91e;
              FUN_10a00946c();
              if (*extraout_x8_00 != 0) {
                extraout_x8_00[1] = *extraout_x8_00;
                __ZdlPv();
              }
              __Unwind_Resume();
              lVar14 = *(long *)(puVar4 + 0x108);
              if (*(long *)(puVar4 + 0x100) == lVar14) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x10a0fd5cc);
                (*pcVar2)();
              }
              puVar3 = (uint *)(lVar14 + -0x40);
              lVar5 = *(long *)(lVar9 + 0x10);
              FUN_10a107918(puVar3,lVar5,*(undefined8 *)(lVar9 + 0x18));
              puVar3 = (uint *)(*(long *)(*(long *)(lVar14 + -0x18) + 0x10) + (ulong)*puVar3);
              puVar12 = puVar3 + 1;
              uVar1 = *puVar3;
              puVar3 = puVar12;
              if (((ulong)puVar12 & 3) != 0) {
                plVar6 = *(long **)(lVar14 + -0x10);
                lVar9 = *plVar6;
                lVar14 = ((ulong)(uint)-((int)lVar9 + (int)plVar6[3]) & 3) + plVar6[3];
                if ((ulong)(plVar6[1] - lVar9) < lVar14 + (ulong)uVar1) {
                  puVar4 = &UNK_10f63c91e;
                  FUN_10a00946c();
                  if (*extraout_x8_01 != 0) {
                    extraout_x8_01[1] = *extraout_x8_01;
                    __ZdlPv();
                  }
                  __Unwind_Resume();
                  lVar14 = *(long *)(puVar4 + 0x108);
                  if (*(long *)(puVar4 + 0x100) == lVar14) {
LAB_10a0fd794:
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a0fd798);
                    (*pcVar2)();
                  }
                  puVar3 = (uint *)(lVar14 + -0x40);
                  FUN_10a107918(puVar3,*(undefined8 *)(lVar5 + 0x10),*(undefined8 *)(lVar5 + 0x18));
                  puVar3 = (uint *)(*(long *)(*(long *)(lVar14 + -0x18) + 0x10) + (ulong)*puVar3);
                  uVar1 = *puVar3;
                  extraout_x8_02[1] = 0;
                  extraout_x8_02[2] = 0;
                  *extraout_x8_02 = 0;
                  if (uVar1 != 0) {
                    uVar13 = 0;
                    puVar12 = puVar3 + 1;
                    do {
                      puVar11 = puVar12 + 1;
                      uVar15 = (ulong)*puVar12;
                      puVar12 = (uint *)((long)puVar11 + uVar15);
                      if (uVar13 < (ulong)extraout_x8_02[2]) {
                        FUN_109ffdf00(uVar13,puVar11,puVar12,uVar15);
                        uVar13 = uVar13 + 0x18;
                      }
                      else {
                        lVar14 = uVar13 - *extraout_x8_02;
                        uVar13 = (lVar14 >> 3) * -0x5555555555555555 + 1;
                        if (0xaaaaaaaaaaaaaaa < uVar13) {
                          FUN_10a05a0c0();
                          goto LAB_10a0fd794;
                        }
                        lVar9 = extraout_x8_02[2] - *extraout_x8_02 >> 3;
                        uVar10 = lVar9 * 0x5555555555555556;
                        if (uVar10 < uVar13 || uVar10 - uVar13 == 0) {
                          uVar10 = uVar13;
                        }
                        if (0x555555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
                          uVar10 = 0xaaaaaaaaaaaaaaa;
                        }
                        if (uVar10 == 0) {
                          plVar6 = (long *)0x0;
                        }
                        else {
                          plVar6 = extraout_x8_02;
                          FUN_10a05a0d4();
                        }
                        lVar14 = (long)plVar6 + lVar14;
                        plStack_148 = plVar6;
                        plStack_140 = (long *)lVar14;
                        plStack_138 = (long *)lVar14;
                        plStack_130 = plVar6 + uVar10 * 3;
                        FUN_109ffdf00(lVar14,puVar11,puVar12,uVar15);
                        uVar13 = lVar14 + 0x18;
                        lVar14 = lVar14 - (extraout_x8_02[1] - *extraout_x8_02);
                        _memcpy(lVar14);
                        plStack_148 = (long *)*extraout_x8_02;
                        *extraout_x8_02 = lVar14;
                        extraout_x8_02[1] = uVar13;
                        plStack_130 = (long *)extraout_x8_02[2];
                        extraout_x8_02[2] = (long)(plVar6 + uVar10 * 3);
                        plStack_140 = plStack_148;
                        plStack_138 = plStack_148;
                        func_0x000107c31938(&plStack_148);
                      }
                      extraout_x8_02[1] = uVar13;
                    } while (puVar12 != (uint *)((long)puVar3 + (ulong)uVar1 + 4));
                  }
                  return;
                }
                plVar6[3] = lVar14;
                puVar3 = (uint *)(lVar9 + lVar14);
                _memcpy(puVar3,puVar12,(ulong)uVar1);
              }
              *extraout_x8_01 = 0;
              extraout_x8_01[1] = 0;
              extraout_x8_01[2] = 0;
              if (7 < uVar1) {
                FUN_10a0cb3e4(extraout_x8_01,uVar1 >> 3);
                puVar8 = (undefined8 *)extraout_x8_01[1];
                puVar12 = puVar3;
                do {
                  puVar11 = puVar12 + 2;
                  puVar7 = puVar8 + 1;
                  *puVar8 = *(undefined8 *)puVar12;
                  puVar8 = puVar7;
                  puVar12 = puVar11;
                } while (puVar11 != puVar3 + (ulong)(uVar1 >> 3) * 2);
                extraout_x8_01[1] = (long)puVar7;
              }
              return;
            }
            plVar6[3] = lVar14;
            puVar3 = (uint *)(lVar5 + lVar14);
            _memcpy(puVar3,puVar12,(ulong)uVar1);
          }
          *extraout_x8_00 = 0;
          extraout_x8_00[1] = 0;
          extraout_x8_00[2] = 0;
          if (7 < uVar1) {
            func_0x00010a107af0(extraout_x8_00,uVar1 >> 3);
            puVar8 = (undefined8 *)extraout_x8_00[1];
            puVar12 = puVar3;
            do {
              puVar11 = puVar12 + 2;
              puVar7 = puVar8 + 1;
              *puVar8 = *(undefined8 *)puVar12;
              puVar8 = puVar7;
              puVar12 = puVar11;
            } while (puVar11 != puVar3 + (ulong)(uVar1 >> 3) * 2);
            extraout_x8_00[1] = (long)puVar7;
          }
          return;
        }
        plVar6[3] = lVar14;
        puVar3 = (uint *)(lVar9 + lVar14);
        _memcpy(puVar3,puVar12,(ulong)uVar1);
      }
      *extraout_x8 = 0;
      extraout_x8[1] = 0;
      extraout_x8[2] = 0;
      if (0x13 < uVar1) {
        FUN_10a0cc640(extraout_x8,(ulong)uVar1 / 0x14);
        puVar12 = puVar3 + ((ulong)uVar1 / 0x14) * 5;
        puVar8 = (undefined8 *)extraout_x8[1];
        do {
          uVar17 = *(undefined8 *)(puVar3 + 2);
          uVar16 = *(undefined8 *)puVar3;
          *(uint *)(puVar8 + 2) = puVar3[4];
          puVar7 = (undefined8 *)((long)puVar8 + 0x14);
          puVar8[1] = uVar17;
          *puVar8 = uVar16;
          puVar3 = puVar3 + 5;
          puVar8 = puVar7;
        } while (puVar3 != puVar12);
        extraout_x8[1] = (long)puVar7;
      }
      return;
    }
    plVar6[3] = lVar14;
    puVar3 = (uint *)(lVar5 + lVar14);
    _memcpy(puVar3,puVar12,(ulong)uVar1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (0x13 < uVar1) {
    func_0x00010a107a58(param_1,(ulong)uVar1 / 0x14);
    puVar12 = puVar3 + ((ulong)uVar1 / 0x14) * 5;
    puVar8 = (undefined8 *)param_1[1];
    do {
      uVar17 = *(undefined8 *)(puVar3 + 2);
      uVar16 = *(undefined8 *)puVar3;
      *(uint *)(puVar8 + 2) = puVar3[4];
      puVar7 = (undefined8 *)((long)puVar8 + 0x14);
      puVar8[1] = uVar17;
      *puVar8 = uVar16;
      puVar3 = puVar3 + 5;
      puVar8 = puVar7;
    } while (puVar3 != puVar12);
    param_1[1] = (long)puVar7;
  }
  return;
}



/* Entry: 10a0fd2a8; end: 10a0fd3d3;  */

void FUN_10a0fd2a8(long *param_1,long param_2,long param_3)

{
  uint uVar1;
  code *pcVar2;
  uint *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *extraout_x8;
  long *extraout_x8_00;
  undefined8 *puVar8;
  long *extraout_x8_01;
  long lVar9;
  ulong uVar10;
  uint *puVar11;
  uint *puVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long *plStack_118;
  long *plStack_110;
  long *plStack_108;
  long *plStack_100;
  
  lVar14 = *(long *)(param_2 + 0x108);
  if (*(long *)(param_2 + 0x100) == lVar14) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a0fd3ac);
    (*pcVar2)();
  }
  puVar3 = (uint *)(lVar14 + -0x40);
  lVar9 = *(long *)(param_3 + 0x10);
  FUN_10a107918(puVar3,lVar9,*(undefined8 *)(param_3 + 0x18));
  puVar3 = (uint *)(*(long *)(*(long *)(lVar14 + -0x18) + 0x10) + (ulong)*puVar3);
  puVar12 = puVar3 + 1;
  uVar1 = *puVar3;
  puVar3 = puVar12;
  if (((ulong)puVar12 & 3) != 0) {
    plVar6 = *(long **)(lVar14 + -0x10);
    lVar5 = *plVar6;
    lVar14 = ((ulong)(uint)-((int)lVar5 + (int)plVar6[3]) & 3) + plVar6[3];
    if ((ulong)(plVar6[1] - lVar5) < lVar14 + (ulong)uVar1) {
      puVar4 = &UNK_10f63c91e;
      FUN_10a00946c();
      if (*param_1 != 0) {
        param_1[1] = *param_1;
        __ZdlPv();
      }
      __Unwind_Resume();
      lVar14 = *(long *)(puVar4 + 0x108);
      if (*(long *)(puVar4 + 0x100) == lVar14) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a0fd4bc);
        (*pcVar2)();
      }
      puVar3 = (uint *)(lVar14 + -0x40);
      lVar5 = *(long *)(lVar9 + 0x10);
      FUN_10a107918(puVar3,lVar5,*(undefined8 *)(lVar9 + 0x18));
      puVar3 = (uint *)(*(long *)(*(long *)(lVar14 + -0x18) + 0x10) + (ulong)*puVar3);
      puVar12 = puVar3 + 1;
      uVar1 = *puVar3;
      puVar3 = puVar12;
      if (((ulong)puVar12 & 3) != 0) {
        plVar6 = *(long **)(lVar14 + -0x10);
        lVar9 = *plVar6;
        lVar14 = ((ulong)(uint)-((int)lVar9 + (int)plVar6[3]) & 3) + plVar6[3];
        if ((ulong)(plVar6[1] - lVar9) < lVar14 + (ulong)uVar1) {
          puVar4 = &UNK_10f63c91e;
          FUN_10a00946c();
          if (*extraout_x8 != 0) {
            extraout_x8[1] = *extraout_x8;
            __ZdlPv();
          }
          __Unwind_Resume();
          lVar14 = *(long *)(puVar4 + 0x108);
          if (*(long *)(puVar4 + 0x100) == lVar14) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10a0fd5cc);
            (*pcVar2)();
          }
          puVar3 = (uint *)(lVar14 + -0x40);
          lVar9 = *(long *)(lVar5 + 0x10);
          FUN_10a107918(puVar3,lVar9,*(undefined8 *)(lVar5 + 0x18));
          puVar3 = (uint *)(*(long *)(*(long *)(lVar14 + -0x18) + 0x10) + (ulong)*puVar3);
          puVar12 = puVar3 + 1;
          uVar1 = *puVar3;
          puVar3 = puVar12;
          if (((ulong)puVar12 & 3) != 0) {
            plVar6 = *(long **)(lVar14 + -0x10);
            lVar5 = *plVar6;
            lVar14 = ((ulong)(uint)-((int)lVar5 + (int)plVar6[3]) & 3) + plVar6[3];
            if ((ulong)(plVar6[1] - lVar5) < lVar14 + (ulong)uVar1) {
              puVar4 = &UNK_10f63c91e;
              FUN_10a00946c();
              if (*extraout_x8_00 != 0) {
                extraout_x8_00[1] = *extraout_x8_00;
                __ZdlPv();
              }
              __Unwind_Resume();
              lVar14 = *(long *)(puVar4 + 0x108);
              if (*(long *)(puVar4 + 0x100) == lVar14) {
LAB_10a0fd794:
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x10a0fd798);
                (*pcVar2)();
              }
              puVar3 = (uint *)(lVar14 + -0x40);
              FUN_10a107918(puVar3,*(undefined8 *)(lVar9 + 0x10),*(undefined8 *)(lVar9 + 0x18));
              puVar3 = (uint *)(*(long *)(*(long *)(lVar14 + -0x18) + 0x10) + (ulong)*puVar3);
              uVar1 = *puVar3;
              extraout_x8_01[1] = 0;
              extraout_x8_01[2] = 0;
              *extraout_x8_01 = 0;
              if (uVar1 != 0) {
                uVar13 = 0;
                puVar12 = puVar3 + 1;
                do {
                  puVar11 = puVar12 + 1;
                  uVar15 = (ulong)*puVar12;
                  puVar12 = (uint *)((long)puVar11 + uVar15);
                  if (uVar13 < (ulong)extraout_x8_01[2]) {
                    FUN_109ffdf00(uVar13,puVar11,puVar12,uVar15);
                    uVar13 = uVar13 + 0x18;
                  }
                  else {
                    lVar14 = uVar13 - *extraout_x8_01;
                    uVar13 = (lVar14 >> 3) * -0x5555555555555555 + 1;
                    if (0xaaaaaaaaaaaaaaa < uVar13) {
                      FUN_10a05a0c0();
                      goto LAB_10a0fd794;
                    }
                    lVar9 = extraout_x8_01[2] - *extraout_x8_01 >> 3;
                    uVar10 = lVar9 * 0x5555555555555556;
                    if (uVar10 < uVar13 || uVar10 - uVar13 == 0) {
                      uVar10 = uVar13;
                    }
                    if (0x555555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
                      uVar10 = 0xaaaaaaaaaaaaaaa;
                    }
                    if (uVar10 == 0) {
                      plVar6 = (long *)0x0;
                    }
                    else {
                      plVar6 = extraout_x8_01;
                      FUN_10a05a0d4();
                    }
                    lVar14 = (long)plVar6 + lVar14;
                    plStack_118 = plVar6;
                    plStack_110 = (long *)lVar14;
                    plStack_108 = (long *)lVar14;
                    plStack_100 = plVar6 + uVar10 * 3;
                    FUN_109ffdf00(lVar14,puVar11,puVar12,uVar15);
                    uVar13 = lVar14 + 0x18;
                    lVar14 = lVar14 - (extraout_x8_01[1] - *extraout_x8_01);
                    _memcpy(lVar14);
                    plStack_118 = (long *)*extraout_x8_01;
                    *extraout_x8_01 = lVar14;
                    extraout_x8_01[1] = uVar13;
                    plStack_100 = (long *)extraout_x8_01[2];
                    extraout_x8_01[2] = (long)(plVar6 + uVar10 * 3);
                    plStack_110 = plStack_118;
                    plStack_108 = plStack_118;
                    func_0x000107c31938(&plStack_118);
                  }
                  extraout_x8_01[1] = uVar13;
                } while (puVar12 != (uint *)((long)puVar3 + (ulong)uVar1 + 4));
              }
              return;
            }
            plVar6[3] = lVar14;
            puVar3 = (uint *)(lVar5 + lVar14);
            _memcpy(puVar3,puVar12,(ulong)uVar1);
          }
          *extraout_x8_00 = 0;
          extraout_x8_00[1] = 0;
          extraout_x8_00[2] = 0;
          if (7 < uVar1) {
            FUN_10a0cb3e4(extraout_x8_00,uVar1 >> 3);
            puVar8 = (undefined8 *)extraout_x8_00[1];
            puVar12 = puVar3;
            do {
              puVar11 = puVar12 + 2;
              puVar7 = puVar8 + 1;
              *puVar8 = *(undefined8 *)puVar12;
              puVar8 = puVar7;
              puVar12 = puVar11;
            } while (puVar11 != puVar3 + (ulong)(uVar1 >> 3) * 2);
            extraout_x8_00[1] = (long)puVar7;
          }
          return;
        }
        plVar6[3] = lVar14;
        puVar3 = (uint *)(lVar9 + lVar14);
        _memcpy(puVar3,puVar12,(ulong)uVar1);
      }
      *extraout_x8 = 0;
      extraout_x8[1] = 0;
      extraout_x8[2] = 0;
      if (7 < uVar1) {
        func_0x00010a107af0(extraout_x8,uVar1 >> 3);
        puVar8 = (undefined8 *)extraout_x8[1];
        puVar12 = puVar3;
        do {
          puVar11 = puVar12 + 2;
          puVar7 = puVar8 + 1;
          *puVar8 = *(undefined8 *)puVar12;
          puVar8 = puVar7;
          puVar12 = puVar11;
        } while (puVar11 != puVar3 + (ulong)(uVar1 >> 3) * 2);
        extraout_x8[1] = (long)puVar7;
      }
      return;
    }
    plVar6[3] = lVar14;
    puVar3 = (uint *)(lVar5 + lVar14);
    _memcpy(puVar3,puVar12,(ulong)uVar1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (0x13 < uVar1) {
    FUN_10a0cc640(param_1,(ulong)uVar1 / 0x14);
    puVar12 = puVar3 + ((ulong)uVar1 / 0x14) * 5;
    puVar8 = (undefined8 *)param_1[1];
    do {
      uVar17 = *(undefined8 *)(puVar3 + 2);
      uVar16 = *(undefined8 *)puVar3;
      *(uint *)(puVar8 + 2) = puVar3[4];
      puVar7 = (undefined8 *)((long)puVar8 + 0x14);
      puVar8[1] = uVar17;
      *puVar8 = uVar16;
      puVar3 = puVar3 + 5;
      puVar8 = puVar7;
    } while (puVar3 != puVar12);
    param_1[1] = (long)puVar7;
  }
  return;
}



/* Entry: 10a0fd3d4; end: 10a0fd4e3;  */

void FUN_10a0fd3d4(long *param_1,long param_2,long param_3)

{
  uint uVar1;
  code *pcVar2;
  uint *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *extraout_x8;
  undefined8 *puVar8;
  long *extraout_x8_00;
  long lVar9;
  ulong uVar10;
  uint *puVar11;
  uint *puVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long *plStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  
  lVar14 = *(long *)(param_2 + 0x108);
  if (*(long *)(param_2 + 0x100) == lVar14) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a0fd4bc);
    (*pcVar2)();
  }
  puVar3 = (uint *)(lVar14 + -0x40);
  lVar9 = *(long *)(param_3 + 0x10);
  FUN_10a107918(puVar3,lVar9,*(undefined8 *)(param_3 + 0x18));
  puVar3 = (uint *)(*(long *)(*(long *)(lVar14 + -0x18) + 0x10) + (ulong)*puVar3);
  puVar12 = puVar3 + 1;
  uVar1 = *puVar3;
  puVar3 = puVar12;
  if (((ulong)puVar12 & 3) != 0) {
    plVar6 = *(long **)(lVar14 + -0x10);
    lVar5 = *plVar6;
    lVar14 = ((ulong)(uint)-((int)lVar5 + (int)plVar6[3]) & 3) + plVar6[3];
    if ((ulong)(plVar6[1] - lVar5) < lVar14 + (ulong)uVar1) {
      puVar4 = &UNK_10f63c91e;
      FUN_10a00946c();
      if (*param_1 != 0) {
        param_1[1] = *param_1;
        __ZdlPv();
      }
      __Unwind_Resume();
      lVar14 = *(long *)(puVar4 + 0x108);
      if (*(long *)(puVar4 + 0x100) == lVar14) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a0fd5cc);
        (*pcVar2)();
      }
      puVar3 = (uint *)(lVar14 + -0x40);
      lVar5 = *(long *)(lVar9 + 0x10);
      FUN_10a107918(puVar3,lVar5,*(undefined8 *)(lVar9 + 0x18));
      puVar3 = (uint *)(*(long *)(*(long *)(lVar14 + -0x18) + 0x10) + (ulong)*puVar3);
      puVar12 = puVar3 + 1;
      uVar1 = *puVar3;
      puVar3 = puVar12;
      if (((ulong)puVar12 & 3) != 0) {
        plVar6 = *(long **)(lVar14 + -0x10);
        lVar9 = *plVar6;
        lVar14 = ((ulong)(uint)-((int)lVar9 + (int)plVar6[3]) & 3) + plVar6[3];
        if ((ulong)(plVar6[1] - lVar9) < lVar14 + (ulong)uVar1) {
          puVar4 = &UNK_10f63c91e;
          FUN_10a00946c();
          if (*extraout_x8 != 0) {
            extraout_x8[1] = *extraout_x8;
            __ZdlPv();
          }
          __Unwind_Resume();
          lVar14 = *(long *)(puVar4 + 0x108);
          if (*(long *)(puVar4 + 0x100) == lVar14) {
LAB_10a0fd794:
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10a0fd798);
            (*pcVar2)();
          }
          puVar3 = (uint *)(lVar14 + -0x40);
          FUN_10a107918(puVar3,*(undefined8 *)(lVar5 + 0x10),*(undefined8 *)(lVar5 + 0x18));
          puVar3 = (uint *)(*(long *)(*(long *)(lVar14 + -0x18) + 0x10) + (ulong)*puVar3);
          uVar1 = *puVar3;
          extraout_x8_00[1] = 0;
          extraout_x8_00[2] = 0;
          *extraout_x8_00 = 0;
          if (uVar1 != 0) {
            uVar13 = 0;
            puVar12 = puVar3 + 1;
            do {
              puVar11 = puVar12 + 1;
              uVar15 = (ulong)*puVar12;
              puVar12 = (uint *)((long)puVar11 + uVar15);
              if (uVar13 < (ulong)extraout_x8_00[2]) {
                FUN_109ffdf00(uVar13,puVar11,puVar12,uVar15);
                uVar13 = uVar13 + 0x18;
              }
              else {
                lVar14 = uVar13 - *extraout_x8_00;
                uVar13 = (lVar14 >> 3) * -0x5555555555555555 + 1;
                if (0xaaaaaaaaaaaaaaa < uVar13) {
                  FUN_10a05a0c0();
                  goto LAB_10a0fd794;
                }
                lVar9 = extraout_x8_00[2] - *extraout_x8_00 >> 3;
                uVar10 = lVar9 * 0x5555555555555556;
                if (uVar10 < uVar13 || uVar10 - uVar13 == 0) {
                  uVar10 = uVar13;
                }
                if (0x555555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
                  uVar10 = 0xaaaaaaaaaaaaaaa;
                }
                if (uVar10 == 0) {
                  plVar6 = (long *)0x0;
                }
                else {
                  plVar6 = extraout_x8_00;
                  FUN_10a05a0d4();
                }
                lVar14 = (long)plVar6 + lVar14;
                plStack_e8 = plVar6;
                plStack_e0 = (long *)lVar14;
                plStack_d8 = (long *)lVar14;
                plStack_d0 = plVar6 + uVar10 * 3;
                FUN_109ffdf00(lVar14,puVar11,puVar12,uVar15);
                uVar13 = lVar14 + 0x18;
                lVar14 = lVar14 - (extraout_x8_00[1] - *extraout_x8_00);
                _memcpy(lVar14);
                plStack_e8 = (long *)*extraout_x8_00;
                *extraout_x8_00 = lVar14;
                extraout_x8_00[1] = uVar13;
                plStack_d0 = (long *)extraout_x8_00[2];
                extraout_x8_00[2] = (long)(plVar6 + uVar10 * 3);
                plStack_e0 = plStack_e8;
                plStack_d8 = plStack_e8;
                func_0x000107c31938(&plStack_e8);
              }
              extraout_x8_00[1] = uVar13;
            } while (puVar12 != (uint *)((long)puVar3 + (ulong)uVar1 + 4));
          }
          return;
        }
        plVar6[3] = lVar14;
        puVar3 = (uint *)(lVar9 + lVar14);
        _memcpy(puVar3,puVar12,(ulong)uVar1);
      }
      *extraout_x8 = 0;
      extraout_x8[1] = 0;
      extraout_x8[2] = 0;
      if (7 < uVar1) {
        FUN_10a0cb3e4(extraout_x8,uVar1 >> 3);
        puVar8 = (undefined8 *)extraout_x8[1];
        puVar12 = puVar3;
        do {
          puVar11 = puVar12 + 2;
          puVar7 = puVar8 + 1;
          *puVar8 = *(undefined8 *)puVar12;
          puVar8 = puVar7;
          puVar12 = puVar11;
        } while (puVar11 != puVar3 + (ulong)(uVar1 >> 3) * 2);
        extraout_x8[1] = (long)puVar7;
      }
      return;
    }
    plVar6[3] = lVar14;
    puVar3 = (uint *)(lVar5 + lVar14);
    _memcpy(puVar3,puVar12,(ulong)uVar1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (7 < uVar1) {
    func_0x00010a107af0(param_1,uVar1 >> 3);
    puVar8 = (undefined8 *)param_1[1];
    puVar12 = puVar3;
    do {
      puVar11 = puVar12 + 2;
      puVar7 = puVar8 + 1;
      *puVar8 = *(undefined8 *)puVar12;
      puVar8 = puVar7;
      puVar12 = puVar11;
    } while (puVar11 != puVar3 + (ulong)(uVar1 >> 3) * 2);
    param_1[1] = (long)puVar7;
  }
  return;
}



/* Entry: 10a0fd4e4; end: 10a0fd5f3;  */

void FUN_10a0fd4e4(long *param_1,long param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  uint *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *extraout_x8;
  long lVar9;
  ulong uVar10;
  uint *puVar11;
  uint *puVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  
  lVar14 = *(long *)(param_2 + 0x108);
  if (*(long *)(param_2 + 0x100) == lVar14) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a0fd5cc);
    (*pcVar3)();
  }
  puVar4 = (uint *)(lVar14 + -0x40);
  lVar9 = *(long *)(param_3 + 0x10);
  FUN_10a107918(puVar4,lVar9,*(undefined8 *)(param_3 + 0x18));
  puVar4 = (uint *)(*(long *)(*(long *)(lVar14 + -0x18) + 0x10) + (ulong)*puVar4);
  puVar12 = puVar4 + 1;
  uVar2 = *puVar4;
  puVar4 = puVar12;
  if (((ulong)puVar12 & 3) != 0) {
    plVar6 = *(long **)(lVar14 + -0x10);
    lVar1 = *plVar6;
    lVar14 = ((ulong)(uint)-((int)lVar1 + (int)plVar6[3]) & 3) + plVar6[3];
    if ((ulong)(plVar6[1] - lVar1) < lVar14 + (ulong)uVar2) {
      puVar5 = &UNK_10f63c91e;
      FUN_10a00946c();
      if (*param_1 != 0) {
        param_1[1] = *param_1;
        __ZdlPv();
      }
      __Unwind_Resume();
      lVar14 = *(long *)(puVar5 + 0x108);
      if (*(long *)(puVar5 + 0x100) == lVar14) {
LAB_10a0fd794:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10a0fd798);
        (*pcVar3)();
      }
      puVar4 = (uint *)(lVar14 + -0x40);
      FUN_10a107918(puVar4,*(undefined8 *)(lVar9 + 0x10),*(undefined8 *)(lVar9 + 0x18));
      puVar4 = (uint *)(*(long *)(*(long *)(lVar14 + -0x18) + 0x10) + (ulong)*puVar4);
      uVar2 = *puVar4;
      extraout_x8[1] = 0;
      extraout_x8[2] = 0;
      *extraout_x8 = 0;
      if (uVar2 != 0) {
        uVar13 = 0;
        puVar12 = puVar4 + 1;
        do {
          puVar11 = puVar12 + 1;
          uVar15 = (ulong)*puVar12;
          puVar12 = (uint *)((long)puVar11 + uVar15);
          if (uVar13 < (ulong)extraout_x8[2]) {
            FUN_109ffdf00(uVar13,puVar11,puVar12,uVar15);
            uVar13 = uVar13 + 0x18;
          }
          else {
            lVar14 = uVar13 - *extraout_x8;
            uVar13 = (lVar14 >> 3) * -0x5555555555555555 + 1;
            if (0xaaaaaaaaaaaaaaa < uVar13) {
              FUN_10a05a0c0();
              goto LAB_10a0fd794;
            }
            lVar9 = extraout_x8[2] - *extraout_x8 >> 3;
            uVar10 = lVar9 * 0x5555555555555556;
            if (uVar10 < uVar13 || uVar10 - uVar13 == 0) {
              uVar10 = uVar13;
            }
            if (0x555555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
              uVar10 = 0xaaaaaaaaaaaaaaa;
            }
            if (uVar10 == 0) {
              plVar6 = (long *)0x0;
            }
            else {
              plVar6 = extraout_x8;
              FUN_10a05a0d4();
            }
            lVar14 = (long)plVar6 + lVar14;
            plStack_b8 = plVar6;
            plStack_b0 = (long *)lVar14;
            plStack_a8 = (long *)lVar14;
            plStack_a0 = plVar6 + uVar10 * 3;
            FUN_109ffdf00(lVar14,puVar11,puVar12,uVar15);
            uVar13 = lVar14 + 0x18;
            lVar14 = lVar14 - (extraout_x8[1] - *extraout_x8);
            _memcpy(lVar14);
            plStack_b8 = (long *)*extraout_x8;
            *extraout_x8 = lVar14;
            extraout_x8[1] = uVar13;
            plStack_a0 = (long *)extraout_x8[2];
            extraout_x8[2] = (long)(plVar6 + uVar10 * 3);
            plStack_b0 = plStack_b8;
            plStack_a8 = plStack_b8;
            func_0x000107c31938(&plStack_b8);
          }
          extraout_x8[1] = uVar13;
        } while (puVar12 != (uint *)((long)puVar4 + (ulong)uVar2 + 4));
      }
      return;
    }
    plVar6[3] = lVar14;
    puVar4 = (uint *)(lVar1 + lVar14);
    _memcpy(puVar4,puVar12,(ulong)uVar2);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (7 < uVar2) {
    FUN_10a0cb3e4(param_1,uVar2 >> 3);
    puVar7 = (undefined8 *)param_1[1];
    puVar12 = puVar4;
    do {
      puVar11 = puVar12 + 2;
      puVar8 = puVar7 + 1;
      *puVar7 = *(undefined8 *)puVar12;
      puVar7 = puVar8;
      puVar12 = puVar11;
    } while (puVar11 != puVar4 + (ulong)(uVar2 >> 3) * 2);
    param_1[1] = (long)puVar8;
  }
  return;
}



/* Entry: 10a0fd5f4; end: 10a0fd7cf;  */

void FUN_10a0fd5f4(long *param_1,long param_2,long param_3)

{
  uint uVar1;
  code *pcVar2;
  uint *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  uint *puVar7;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  uint *puVar8;
  
  lVar10 = *(long *)(param_2 + 0x108);
  if (*(long *)(param_2 + 0x100) == lVar10) {
LAB_10a0fd794:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a0fd798);
    (*pcVar2)();
  }
  puVar3 = (uint *)(lVar10 + -0x40);
  FUN_10a107918(puVar3,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x18));
  puVar3 = (uint *)(*(long *)(*(long *)(lVar10 + -0x18) + 0x10) + (ulong)*puVar3);
  uVar1 = *puVar3;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  if (uVar1 != 0) {
    uVar9 = 0;
    puVar7 = puVar3 + 1;
    do {
      puVar8 = puVar7 + 1;
      uVar11 = (ulong)*puVar7;
      puVar7 = (uint *)((long)puVar8 + uVar11);
      if (uVar9 < (ulong)param_1[2]) {
        FUN_109ffdf00(uVar9,puVar8,puVar7,uVar11);
        uVar9 = uVar9 + 0x18;
      }
      else {
        lVar10 = uVar9 - *param_1;
        uVar9 = (lVar10 >> 3) * -0x5555555555555555 + 1;
        if (0xaaaaaaaaaaaaaaa < uVar9) {
          FUN_10a05a0c0();
          goto LAB_10a0fd794;
        }
        lVar5 = param_1[2] - *param_1 >> 3;
        uVar6 = lVar5 * 0x5555555555555556;
        if (uVar6 < uVar9 || uVar6 - uVar9 == 0) {
          uVar6 = uVar9;
        }
        if (0x555555555555554 < (ulong)(lVar5 * -0x5555555555555555)) {
          uVar6 = 0xaaaaaaaaaaaaaaa;
        }
        plStack_68 = param_1;
        if (uVar6 == 0) {
          plVar4 = (long *)0x0;
        }
        else {
          plVar4 = param_1;
          FUN_10a05a0d4();
        }
        lVar10 = (long)plVar4 + lVar10;
        plStack_88 = plVar4;
        plStack_80 = (long *)lVar10;
        plStack_78 = (long *)lVar10;
        plStack_70 = plVar4 + uVar6 * 3;
        FUN_109ffdf00(lVar10,puVar8,puVar7,uVar11);
        uVar9 = lVar10 + 0x18;
        lVar10 = lVar10 - (param_1[1] - *param_1);
        _memcpy(lVar10);
        plStack_88 = (long *)*param_1;
        *param_1 = lVar10;
        param_1[1] = uVar9;
        plStack_70 = (long *)param_1[2];
        param_1[2] = (long)(plVar4 + uVar6 * 3);
        plStack_80 = plStack_88;
        plStack_78 = plStack_88;
        func_0x000107c31938(&plStack_88);
      }
      param_1[1] = uVar9;
    } while (puVar7 != (uint *)((long)puVar3 + (ulong)uVar1 + 4));
  }
  return;
}



/* Entry: 10a0fd7d0; end: 10a0fd893;  */

void FUN_10a0fd7d0(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  char cVar7;
  bool bVar8;
  long *plVar9;
  char *pcVar10;
  char *pcVar11;
  undefined8 uVar12;
  undefined8 in_x6;
  undefined8 in_x7;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  long *plVar19;
  undefined8 uStack_c0;
  long *plStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long *plStack_98;
  
  puVar4 = (undefined8 *)param_1[1];
  if (puVar4 < (undefined8 *)param_1[2]) {
    puVar18 = puVar4 + 1;
    *puVar4 = *param_2;
  }
  else {
    lVar17 = (long)puVar4 - *param_1;
    uVar1 = (lVar17 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      FUN_10a107b70();
      pcVar10 = (char *)param_1[1];
      plVar9 = *(long **)(pcVar10 + 0x58);
      plVar6 = *(long **)(pcVar10 + 0x60);
      do {
        if (plVar9 == plVar6) {
          return;
        }
        plVar14 = plVar9 + 3;
        if ((*(char *)(*plVar14 + 8) == '\x01') && ((uint)*(byte *)(plVar9 + 0xd) <= (uint)param_2))
        {
          plVar19 = plVar9 + 2;
          lStack_a8 = plVar9[1];
          lStack_b0 = *plVar9;
          if (lStack_b0 == -1 && lStack_a8 == -1) {
            lStack_a0 = 0;
            plStack_98 = (long *)0x0;
            (*(code *)*plVar19)(&lStack_a0,plVar19);
            plVar2 = plStack_98;
            if (plStack_98 != (long *)0x0) {
              plVar3 = plStack_98 + 1;
              do {
                lVar17 = *plVar3;
                cVar7 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                if (bVar8) {
                  *plVar3 = lVar17 + -1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (lVar17 == 0) {
                (**(code **)(*plStack_98 + 0x10))(plStack_98);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
              }
            }
            *plVar19 = (long)FUN_10a5850a8;
            (**(code **)*plVar14)(plVar14);
            *plVar14 = (long)&PTR_DAT_110ae9180;
          }
          else {
            plStack_98 = (long *)plVar9[1];
            lStack_a0 = *plVar9;
            if (*pcVar10 == '\x01') {
              pcVar11 = pcVar10 + 8;
              FUN_10a35c254(pcVar11,&lStack_b0);
              if (pcVar11 != (char *)0x0) {
                plStack_98 = *(long **)(pcVar11 + 0x28);
                lStack_a0 = *(long *)(pcVar11 + 0x20);
                goto LAB_10a571504;
              }
              if ((bRam000000011330a9e8 >> 3 & 1) == 0) goto LAB_10a5715fc;
              plVar14 = plVar9 + 10;
              if (*(char *)((long)plVar9 + 0x67) < '\0') {
                plVar14 = (long *)*plVar14;
              }
              uVar12 = 0x5f;
LAB_10a571680:
              func_0x00010ae06f08(1,8,&UNK_10f661d87,&UNK_10f661dc2,uVar12,&UNK_10f661e24,in_x6,
                                  in_x7,plVar14);
            }
            else {
LAB_10a571504:
              pcVar11 = pcVar10 + 0x30;
              FUN_10a5850b8(pcVar11,&lStack_a0);
              if (pcVar11 == (char *)0x0) {
                if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
                  plVar14 = plVar9 + 10;
                  if (*(char *)((long)plVar9 + 0x67) < '\0') {
                    plVar14 = (long *)*plVar14;
                  }
                  uVar12 = 0x68;
                  goto LAB_10a571680;
                }
              }
              else {
                plStack_b8 = *(long **)(pcVar11 + 0x28);
                uStack_c0 = *(undefined8 *)(pcVar11 + 0x20);
                if (*(long *)(pcVar11 + 0x28) != 0) {
                  plVar2 = (long *)(*(long *)(pcVar11 + 0x28) + 8);
                  do {
                    cVar7 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                    if (bVar8) {
                      *plVar2 = *plVar2 + 1;
                      cVar7 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar7 != '\0');
                }
                FUN_10a1f495c(plVar19,&uStack_c0);
                *plVar19 = (long)FUN_10a5850a8;
                (**(code **)*plVar14)(plVar14);
                plVar19 = plStack_b8;
                *plVar14 = (long)&PTR_DAT_110ae9180;
                if (plStack_b8 != (long *)0x0) {
                  plVar14 = plStack_b8 + 1;
                  do {
                    lVar17 = *plVar14;
                    cVar7 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                    if (bVar8) {
                      *plVar14 = lVar17 + -1;
                      cVar7 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar7 != '\0');
                  if (lVar17 == 0) {
                    (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
                  }
                }
              }
            }
          }
        }
LAB_10a5715fc:
        plVar9 = plVar9 + 0xe;
      } while( true );
    }
    uVar13 = param_1[2] - *param_1;
    uVar15 = (long)uVar13 >> 2;
    if (uVar15 <= uVar1) {
      uVar15 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar13) {
      uVar15 = 0x1fffffffffffffff;
    }
    plVar9 = param_1;
    func_0x00010a0433c0();
    lVar5 = *param_1;
    puVar4 = (undefined8 *)((long)plVar9 + lVar17);
    lVar16 = (long)puVar4 - (param_1[1] - lVar5);
    puVar18 = puVar4 + 1;
    *puVar4 = *param_2;
    _memcpy(lVar16,lVar5);
    lVar17 = *param_1;
    *param_1 = lVar16;
    param_1[1] = (long)puVar18;
    param_1[2] = (long)(plVar9 + uVar15);
    if (lVar17 != 0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar18;
  return;
}



/* Entry: 10a0fd894; end: 10a0fd89b;  */

void FUN_10a0fd894(long param_1,uint param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  char *pcVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined8 in_x6;
  undefined8 in_x7;
  long *plVar10;
  long lVar11;
  long *plVar12;
  undefined8 uStack_90;
  long *plStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  pcVar7 = *(char **)(param_1 + 8);
  plVar3 = *(long **)(pcVar7 + 0x58);
  plVar4 = *(long **)(pcVar7 + 0x60);
  do {
    if (plVar3 == plVar4) {
      return;
    }
    plVar10 = plVar3 + 3;
    if ((*(char *)(*plVar10 + 8) == '\x01') && (*(byte *)(plVar3 + 0xd) <= param_2)) {
      plVar12 = plVar3 + 2;
      lStack_78 = plVar3[1];
      lStack_80 = *plVar3;
      if (lStack_80 == -1 && lStack_78 == -1) {
        lStack_70 = 0;
        plStack_68 = (long *)0x0;
        (*(code *)*plVar12)(&lStack_70,plVar12);
        plVar1 = plStack_68;
        if (plStack_68 != (long *)0x0) {
          plVar2 = plStack_68 + 1;
          do {
            lVar11 = *plVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar6) {
              *plVar2 = lVar11 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar11 == 0) {
            (**(code **)(*plStack_68 + 0x10))(plStack_68);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
          }
        }
        *plVar12 = (long)FUN_10a5850a8;
        (**(code **)*plVar10)(plVar10);
        *plVar10 = (long)&PTR_DAT_110ae9180;
      }
      else {
        plStack_68 = (long *)plVar3[1];
        lStack_70 = *plVar3;
        if (*pcVar7 == '\x01') {
          pcVar8 = pcVar7 + 8;
          FUN_10a35c254(pcVar8,&lStack_80);
          if (pcVar8 != (char *)0x0) {
            plStack_68 = *(long **)(pcVar8 + 0x28);
            lStack_70 = *(long *)(pcVar8 + 0x20);
            goto LAB_10a571504;
          }
          if ((bRam000000011330a9e8 >> 3 & 1) == 0) goto LAB_10a5715fc;
          plVar10 = plVar3 + 10;
          if (*(char *)((long)plVar3 + 0x67) < '\0') {
            plVar10 = (long *)*plVar10;
          }
          uVar9 = 0x5f;
LAB_10a571680:
          func_0x00010ae06f08(1,8,&UNK_10f661d87,&UNK_10f661dc2,uVar9,&UNK_10f661e24,in_x6,in_x7,
                              plVar10);
        }
        else {
LAB_10a571504:
          pcVar8 = pcVar7 + 0x30;
          FUN_10a5850b8(pcVar8,&lStack_70);
          if (pcVar8 == (char *)0x0) {
            if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
              plVar10 = plVar3 + 10;
              if (*(char *)((long)plVar3 + 0x67) < '\0') {
                plVar10 = (long *)*plVar10;
              }
              uVar9 = 0x68;
              goto LAB_10a571680;
            }
          }
          else {
            plStack_88 = *(long **)(pcVar8 + 0x28);
            uStack_90 = *(undefined8 *)(pcVar8 + 0x20);
            if (*(long *)(pcVar8 + 0x28) != 0) {
              plVar1 = (long *)(*(long *)(pcVar8 + 0x28) + 8);
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar6) {
                  *plVar1 = *plVar1 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            FUN_10a1f495c(plVar12,&uStack_90);
            *plVar12 = (long)FUN_10a5850a8;
            (**(code **)*plVar10)(plVar10);
            plVar12 = plStack_88;
            *plVar10 = (long)&PTR_DAT_110ae9180;
            if (plStack_88 != (long *)0x0) {
              plVar10 = plStack_88 + 1;
              do {
                lVar11 = *plVar10;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                if (bVar6) {
                  *plVar10 = lVar11 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar11 == 0) {
                (**(code **)(*plStack_88 + 0x10))(plStack_88);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
              }
            }
          }
        }
      }
    }
LAB_10a5715fc:
    plVar3 = plVar3 + 0xe;
  } while( true );
}



/* Entry: 10a0fd89c; end: 10a0fd9cb;  */

undefined1  [16]
FUN_10a0fd89c(undefined8 *param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  char *pcVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 uStack_81;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined1 *puStack_70;
  undefined ***pppuStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  
  ppuVar2 = &PTR_DAT_110ba3900;
  ppuVar1 = param_2;
  (**(code **)(*param_2 + 0x200))();
  if (((ulong)ppuVar1 & 1) != 0) {
    ppuVar2 = &PTR_DAT_110ba4bb8;
    ppuVar1 = param_2;
    (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110ba4bb8);
    if ((int)ppuVar1 == 0) {
      func_0x00010a0fda30();
    }
    else {
      ppuVar6 = &PTR_DAT_110ba4bb8;
      ppuVar2 = param_2;
      (**(code **)(*param_2 + 0x10))(param_2,&PTR_DAT_110ba4bb8);
      ppuVar1 = param_2;
      FUN_10a0fd9cc(param_2,ppuVar2,ppuVar6);
    }
    ppuVar6 = &PTR_DAT_110ba3900;
    ppuVar3 = param_2;
    (**(code **)(*param_2 + 0xb0))();
    ppuStack_50 = ppuVar3;
    ppuStack_48 = ppuVar6;
    FUN_10a0fdb20(param_1,param_2[3],&ppuStack_50,ppuVar1,ppuVar2);
    (**(code **)(*param_2 + 0x260))(param_2,param_1,param_3);
    uVar7 = *param_1;
    (**(code **)(*param_2 + 0x1e0))(param_2,uVar7);
    auVar8._8_8_ = uVar7;
    auVar8._0_8_ = param_2;
    return auVar8;
  }
  puVar4 = &UNK_10f63b9cc;
  FUN_10a00946c();
  FUN_10a10c9ac(param_1);
  __Unwind_Resume();
  pcStack_58 = FUN_10a0fd9cc;
  if (**(char **)(puVar4 + 8) == '\x01') {
    pppuStack_68 = &ppuStack_80;
    puStack_70 = &uStack_81;
    pcVar5 = *(char **)(puVar4 + 8) + 8;
    ppuStack_80 = ppuVar2;
    uStack_78 = param_4;
    puStack_60 = &stack0xfffffffffffffff0;
    FUN_10a10cf74(pcVar5,&ppuStack_80,&UNK_10dd5b8f9,&pppuStack_68,&puStack_70);
    ppuVar2 = *(undefined ***)(pcVar5 + 0x20);
    param_4 = *(undefined8 *)(pcVar5 + 0x28);
  }
  auVar9._8_8_ = param_4;
  auVar9._0_8_ = ppuVar2;
  return auVar9;
}



/* Entry: 10a0fd9cc; end: 10a0fdb1f;  */

undefined1  [16] FUN_10a0fd9cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined1 auVar2 [16];
  undefined1 uStack_31;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 *puStack_20;
  undefined8 *puStack_18;
  
  if (**(char **)(param_1 + 8) == '\x01') {
    puStack_18 = &uStack_30;
    puStack_20 = &uStack_31;
    pcVar1 = *(char **)(param_1 + 8) + 8;
    uStack_30 = param_2;
    uStack_28 = param_3;
    FUN_10a10cf74(pcVar1,&uStack_30,&UNK_10dd5b8f9,&puStack_18,&puStack_20);
    param_2 = *(undefined8 *)(pcVar1 + 0x20);
    param_3 = *(undefined8 *)(pcVar1 + 0x28);
  }
  auVar2._8_8_ = param_3;
  auVar2._0_8_ = param_2;
  return auVar2;
}



/* Entry: 10a0fdb20; end: 10a0fdf47;  */

void FUN_10a0fdb20(long *param_1,long param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uStack_88;
  long *plStack_80;
  undefined1 auStack_78 [24];
  undefined8 ***pppuStack_60;
  long lStack_58;
  char cStack_49;
  
  lVar9 = param_2;
  FUN_10a3dd220();
  FUN_10a3ca004();
  FUN_10a3ca840();
  lVar8 = lVar9;
  FUN_10a10bbb4();
  if (lVar8 == 0) {
    FUN_10a0ee900(&pppuStack_60,&UNK_10f63cd1e,0x2c);
    FUN_10a10bcb0(&pppuStack_60);
LAB_10a0fdec8:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a0fdecc);
    (*pcVar4)();
  }
  if (*(int *)(lVar8 + 0x20) < *(int *)(*(long *)(param_2 + 0x100) + 0x288)) {
    FUN_10a0ee900(&pppuStack_60,&UNK_10f63cd4b,0x32);
    if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
      if (-1 < cStack_49) {
        pppuStack_60 = &pppuStack_60;
      }
      func_0x00010ae06f08(1,8,&UNK_10f63cd7e,&UNK_10f63cdb0,0xbf,"%s",param_8,param_9,pppuStack_60);
    }
    func_0x0001098998d4(auStack_78,param_3);
    FUN_10a10be38(&pppuStack_60,auStack_78,param_4,param_5,*(undefined4 *)(lVar8 + 0x20));
    goto LAB_10a0fdec8;
  }
  lVar5 = param_2;
  (**(code **)(lVar8 + 0x28))(param_2,param_4,param_5);
  FUN_10a570894(lVar9,param_2,*param_3,param_3[1]);
  if (lVar5 == 0) {
LAB_10a0fddd8:
    *param_1 = lVar5;
    puVar7 = (undefined8 *)0x20;
    __Znwm();
    *puVar7 = &PTR_DAT_110ba4ee0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = lVar5;
    param_1[1] = (long)puVar7;
    return;
  }
  lVar9 = lVar5;
  ___dynamic_cast(lVar5,&PTR_DAT_110b9fe10,&PTR_DAT_110c42c58,0);
  if (lVar9 != 0) {
    uStack_88 = *(undefined8 *)(param_2 + 0x858);
    plStack_80 = *(long **)(param_2 + 0x860);
    if (plStack_80 != (long *)0x0) {
      plVar6 = plStack_80 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a10b9d8(&pppuStack_60,&uStack_88,lVar9);
    plVar6 = plStack_80;
    param_1[1] = lStack_58;
    *param_1 = (long)pppuStack_60;
    pppuStack_60 = (undefined8 ***)0x0;
    lStack_58 = 0;
    if (plStack_80 == (long *)0x0) {
      return;
    }
    plVar10 = plStack_80 + 1;
    do {
      lVar9 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 != 0) {
      return;
    }
    (**(code **)(*plStack_80 + 0x10))(plStack_80);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    return;
  }
  lVar9 = lVar5;
  ___dynamic_cast(lVar5,&PTR_DAT_110b9fe10,&PTR_DAT_110bd31d8,0);
  if (lVar9 != 0) {
    FUN_10a10c3cc(&pppuStack_60,lVar9,FUN_10a3df8cc);
LAB_10a0fdcb4:
    param_1[1] = lStack_58;
    *param_1 = (long)pppuStack_60;
    return;
  }
  lVar9 = lVar5;
  ___dynamic_cast(lVar5,&PTR_DAT_110b9fe10,&PTR_DAT_110bd3290,0);
  if (lVar9 != 0) {
    FUN_10a10c584(&pppuStack_60,lVar9,0x10a3df904);
    goto LAB_10a0fdcb4;
  }
  lVar9 = lVar5;
  ___dynamic_cast(lVar5,&PTR_DAT_110b9fe10,&PTR_DAT_110bf32c0,0);
  if (lVar9 == 0) {
    lVar9 = lVar5;
    ___dynamic_cast(lVar5,&PTR_DAT_110b9fe10,&PTR_DAT_110c681e8,0);
    if (lVar9 == 0) goto LAB_10a0fddd8;
    FUN_10a10c7a8(&pppuStack_60,lVar9);
    goto LAB_10a0fdcb4;
  }
  plVar6 = (long *)0x20;
  __Znwm();
  plVar10 = plVar6 + 1;
  *plVar10 = 0;
  *plVar6 = (long)&PTR_DAT_110ba4e68;
  plVar6[2] = 0;
  plVar6[3] = lVar9;
  if (*(long *)(lVar9 + 0x30) == 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar1 = plVar6 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *(long *)(lVar9 + 0x28) = lVar9;
    *(long **)(lVar9 + 0x30) = plVar6;
  }
  else {
    if (*(long *)(*(long *)(lVar9 + 0x30) + 8) != -1) goto LAB_10a0fdda0;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar1 = plVar6 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *(long *)(lVar9 + 0x28) = lVar9;
    *(long **)(lVar9 + 0x30) = plVar6;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  do {
    lVar8 = *plVar10;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar3) {
      *plVar10 = lVar8 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar8 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
  }
LAB_10a0fdda0:
  *param_1 = lVar9;
  param_1[1] = (long)plVar6;
  return;
}



/* Entry: 10a0fdf48; end: 10a0fdfc7;  */

void FUN_10a0fdf48(long param_1)

{
  long lVar1;
  int iVar2;
  long lStack_30;
  long lStack_28;
  
  iVar2 = (int)&lStack_30;
  lVar1 = param_1 + 0x20;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar1);
  lStack_28 = (long)*(char *)(param_1 + 0x37);
  lStack_30 = lVar1;
  if (lStack_28 < 0) {
    lStack_28 = *(long *)(param_1 + 0x28);
    lStack_30 = *(long *)(param_1 + 0x20);
  }
  if ((lStack_28 == 0) || (FUN_10a0423ac(&lStack_30,lStack_28 + -1,1,&UNK_10f63b764,1), iVar2 != 0))
  {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (lVar1,&UNK_10f63b764,1);
  }
  return;
}



/* Entry: 10a0fdfc8; end: 10a0fdfcf;  */

long FUN_10a0fdfc8(long param_1)

{
  return param_1 + 0x20;
}



/* Entry: 10a0fdfd0; end: 10a0fe24f;  */

void FUN_10a0fdfd0(long param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  long lStack_50;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  lVar5 = *param_2;
  if ((lVar5 != 0) && (___dynamic_cast(lVar5,&PTR_DAT_110b9fe10,&PTR_DAT_110bf32c0,0), lVar5 != 0))
  {
    plStack_48 = (long *)param_2[1];
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lVar6 = *(long *)(param_1 + 8);
    plStack_58 = *(long **)(lVar5 + 0x48);
    lStack_60 = *(long *)(lVar5 + 0x40);
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lStack_50 = lVar5;
    lStack_40 = lVar5;
    plStack_38 = plStack_48;
    FUN_10a10caf8(lVar6 + 0x30,&lStack_60,&lStack_60);
    plVar1 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar2 = plStack_48 + 1;
      do {
        lVar5 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    lVar5 = *param_2;
    if (lVar5 == 0) {
      lStack_60 = 0;
      plStack_58 = (long *)0x0;
    }
    else {
      lVar6 = lVar5;
      ___dynamic_cast(lVar5,&PTR_DAT_110b9fe10,&PTR_DAT_110bd3290,0);
      if (lVar6 == 0) {
        lStack_60 = 0;
        plStack_58 = (long *)0x0;
        ___dynamic_cast(lVar5,&PTR_DAT_110b9fe10,&PTR_DAT_110bd31d8,0);
        if (lVar5 != 0) {
          plStack_68 = (long *)param_2[1];
          if (plStack_68 != (long *)0x0) {
            plVar1 = plStack_68 + 1;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *plVar1 = *plVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          lStack_70 = lVar5;
          FUN_10a3c7ce8(param_3,&lStack_70);
          plVar1 = plStack_68;
          if (plStack_68 != (long *)0x0) {
            plVar2 = plStack_68 + 1;
            do {
              lVar5 = *plVar2;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar4) {
                *plVar2 = lVar5 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar5 == 0) {
              (**(code **)(*plStack_68 + 0x10))(plStack_68);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
            }
          }
        }
      }
      else {
        plStack_58 = (long *)param_2[1];
        if (plStack_58 != (long *)0x0) {
          plVar1 = plStack_58 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = *plVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        lStack_60 = lVar6;
        FUN_10a3dd718(*(undefined8 *)(param_1 + 0x18),&lStack_60);
      }
    }
    plVar1 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar2 = plStack_58 + 1;
      do {
        lVar5 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    plVar1 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      plVar2 = plStack_38 + 1;
      do {
        lVar5 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
  }
  return;
}



/* Entry: 10a0fe250; end: 10a0fe2f3;  */

long * FUN_10a0fe250(long *param_1,ulong param_2)

{
  code *pcVar1;
  long **pplVar2;
  long *plVar3;
  long *plVar4;
  long **pplVar5;
  long **pplVar6;
  long *plStack_30;
  long *plStack_28;
  long *plStack_20;
  ulong uStack_18;
  
  (**(code **)(*param_1 + 0xb0))();
  pplVar6 = &plStack_30;
  plStack_28 = (long *)0x0;
  pplVar2 = &plStack_20;
  pplVar5 = &plStack_28;
  plStack_20 = param_1;
  uStack_18 = param_2;
  FUN_10a102960(pplVar2,pplVar5);
  if ((((int)pplVar2 != 0) && (1 < uStack_18)) && ((char)*plStack_20 == ':')) {
    if ((long)(uStack_18 - 1) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0fe2e8);
      (*pcVar1)();
    }
    plStack_30 = (long *)0x0;
    pplVar2 = &plStack_20;
    plStack_20 = (long *)((long)plStack_20 + 1);
    uStack_18 = uStack_18 - 1;
    FUN_10a102960(pplVar2,&plStack_30);
    pplVar5 = pplVar6;
    if (((int)pplVar2 != 0) && (uStack_18 == 0)) {
      return plStack_28;
    }
  }
  plVar3 = (long *)&UNK_10f63bbf3;
  FUN_10a00946c();
  plVar4 = plVar3;
  (**(code **)(*plVar3 + 0x200))();
  if ((int)plVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010a0fe33c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x40))(plVar3,pplVar5);
    return plVar3;
  }
  return plVar4;
}



/* Entry: 10a0fe2f4; end: 10a0fe3b3;  */

undefined8 FUN_10a0fe2f4(undefined8 param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = param_2;
  uVar2 = param_1;
  (**(code **)(*param_2 + 0x200))();
  if ((int)plVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010a0fe33c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x40))(param_2,param_3);
    return uVar2;
  }
  return param_1;
}



/* Entry: 10a0fe3b4; end: 10a0fea53;  */

void FUN_10a0fe3b4(long *param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x200))();
  if (((ulong)plVar1 & 1) != 0) {
    (**(code **)(*param_1 + 0x108))(param_1,param_2);
  }
  return;
}



/* Entry: 10a0fea54; end: 10a0feb27;  */

ulong * FUN_10a0fea54(ulong *param_1,ulong *param_2,undefined8 param_3,ulong *param_4,ulong param_5)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 uVar4;
  
  puVar1 = param_2;
  uVar4 = param_3;
  puVar2 = param_4;
  (**(code **)(*param_2 + 0x200))();
  if (((ulong)puVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010a0feab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0xa0))(param_1,param_2,param_3);
    return param_2;
  }
  if (0x7ffffffffffffff7 < param_5) {
    func_0x000109ffde50();
    puVar3 = puVar1;
    (**(code **)(*puVar1 + 0x200))();
    if ((int)puVar3 == 0) {
      return puVar2;
    }
                    /* WARNING: Could not recover jumptable at 0x00010a0feb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*puVar1 + 200))(puVar1,uVar4);
    return puVar1;
  }
  if (param_5 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)param_5;
    puVar2 = param_1;
    if (param_5 == 0) goto LAB_10a0feb0c;
  }
  else {
    puVar1 = (ulong *)0x19;
    if ((param_5 | 7) != 0x17) {
      puVar1 = (ulong *)((param_5 | 7) + 1);
    }
    puVar2 = puVar1;
    __Znwm();
    param_1[1] = param_5;
    param_1[2] = (ulong)puVar1 | 0x8000000000000000;
    *param_1 = (ulong)puVar2;
  }
  puVar1 = puVar2;
  _memmove(puVar2,param_4,param_5);
  param_1 = puVar2;
LAB_10a0feb0c:
  *(undefined1 *)((long)param_1 + param_5) = 0;
  return puVar1;
}



/* Entry: 10a0feb28; end: 10a0fed2f;  */

long * FUN_10a0feb28(long *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x200))();
  if ((int)plVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010a0feb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 200))(param_1,param_2);
    return param_1;
  }
  return param_3;
}



/* Entry: 10a0fed30; end: 10a0fedc3;  */

void FUN_10a0fed30(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_4[1];
  puVar2 = (undefined8 *)*param_4;
  if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_4 + 0x17);
    puVar2 = param_4;
  }
  (**(code **)(*param_2 + 0xa8))(param_1,param_2,param_3,puVar2,uVar1);
  FUN_10a0fedc4(&uStack_38,param_1);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  param_1[1] = uStack_30;
  *param_1 = uStack_38;
  param_1[2] = uStack_28;
  return;
}



/* Entry: 10a0fedc4; end: 10a0feebf;  */

void FUN_10a0fedc4(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  lStack_30 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  FUN_10ad03508(param_1,&uStack_40);
  if (lStack_30 < 0) {
    __ZdlPv(uStack_40);
  }
  puVar2 = param_2;
  FUN_10ad03bac();
  if ((int)puVar2 == 0) {
    return;
  }
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (auStack_70,&UNK_10f63c9a2,param_2);
  FUN_10a012db0(auStack_58,auStack_70,&UNK_10f63c9ae);
  FUN_10a0029c0(auStack_58);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0fee60);
  (*pcVar1)();
}



/* Entry: 10a0feec0; end: 10a0ff18b;  */

void FUN_10a0feec0(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined8 uStack_80;
  undefined7 uStack_78;
  char cStack_71;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  undefined8 uStack_68;
  undefined7 uStack_60;
  undefined1 uStack_59;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  char cStack_39;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x200))();
  if (((ulong)plVar1 & 1) == 0) {
    if (*(char *)((long)param_4 + 0x17) < '\0') {
      func_0x000107c3192c(param_1,*param_4,param_4[1]);
    }
    else {
      uVar2 = *param_4;
      param_1[1] = param_4[1];
      *param_1 = uVar2;
      param_1[2] = param_4[2];
    }
    if (*(char *)((long)param_4 + 0x2f) < '\0') {
      func_0x000107c3192c(param_1 + 3,param_4[3],param_4[4]);
    }
    else {
      uVar2 = param_4[3];
      param_1[4] = param_4[4];
      param_1[3] = uVar2;
      param_1[5] = param_4[5];
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_4 + 6);
  }
  else {
    if (*(char *)((long)param_4 + 0x17) < '\0') {
      func_0x000107c3192c(param_1,*param_4,param_4[1]);
    }
    else {
      uVar2 = *param_4;
      param_1[1] = param_4[1];
      *param_1 = uVar2;
      param_1[2] = param_4[2];
    }
    if (*(char *)((long)param_4 + 0x2f) < '\0') {
      func_0x000107c3192c(param_1 + 3,param_4[3],param_4[4]);
    }
    else {
      uVar2 = param_4[3];
      param_1[4] = param_4[4];
      param_1[3] = uVar2;
      param_1[5] = param_4[5];
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_4 + 6);
    (**(code **)(*param_2 + 0x210))(param_2,param_3);
    plVar1 = param_2;
    (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110ba4bd8);
    if (((int)plVar1 != 0) &&
       (plVar1 = param_2, (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110ba3660),
       (int)plVar1 != 0)) {
      (**(code **)(*param_2 + 0xa0))(&uStack_50,param_2,&PTR_DAT_110ba4bd8);
      FUN_10a0fedc4(&uStack_88,&uStack_50);
      if (cStack_39 < '\0') {
        __ZdlPv(uStack_50);
      }
      uStack_50 = CONCAT71(uStack_87,uStack_88);
      uStack_48 = uStack_80;
      cStack_39 = cStack_71;
      plVar1 = param_2;
      (**(code **)(*param_2 + 200))(param_2,&PTR_DAT_110ba3660);
      FUN_10a0ff18c(&uStack_88,&uStack_50,plVar1);
      if (*(char *)((long)param_1 + 0x17) < '\0') {
        __ZdlPv(*param_1);
      }
      param_1[1] = uStack_80;
      *param_1 = CONCAT71(uStack_87,uStack_88);
      param_1[2] = CONCAT17(cStack_71,uStack_78);
      cStack_71 = '\0';
      uStack_88 = 0;
      if (*(char *)((long)param_1 + 0x2f) < '\0') {
        __ZdlPv(param_1[3]);
        param_1[4] = uStack_68;
        param_1[3] = CONCAT71(uStack_6f,uStack_70);
        param_1[5] = CONCAT17(uStack_59,uStack_60);
        uStack_59 = 0;
        uStack_70 = 0;
        *(undefined4 *)(param_1 + 6) = uStack_58;
        if (cStack_71 < '\0') {
          __ZdlPv(CONCAT71(uStack_87,uStack_88));
        }
      }
      else {
        param_1[4] = uStack_68;
        param_1[3] = CONCAT71(uStack_6f,uStack_70);
        param_1[5] = CONCAT17(uStack_59,uStack_60);
        uStack_59 = 0;
        uStack_70 = 0;
        *(undefined4 *)(param_1 + 6) = uStack_58;
      }
      if (cStack_39 < '\0') {
        __ZdlPv(uStack_50);
      }
    }
    (**(code **)(*param_2 + 0x220))(param_2);
    (**(code **)(*param_2 + 0x248))(param_2);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 3,param_2);
  }
  return;
}



/* Entry: 10a0ff18c; end: 10a0ff213;  */

undefined8 FUN_10a0ff18c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 auStack_48 [2];
  char cStack_31;
  
  func_0x000107c2b054(auStack_48,&UNK_10f63b3ad);
  FUN_10a107e2c(param_1,param_2,auStack_48,param_3);
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  return param_1;
}



/* Entry: 10a0ff214; end: 10a0ff253;  */

undefined8 * FUN_10a0ff214(undefined8 *param_1)

{
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10a0ff254; end: 10a0ff347;  */

void FUN_10a0ff254(long *param_1,undefined8 *param_2,undefined8 param_3,code *param_4)

{
  code *pcVar1;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  byte bStack_38;
  
  (**(code **)(*param_1 + 0x1d8))(auStack_48);
  if ((bStack_38 & 1) == 0) {
    FUN_109ffe064(auStack_90,*param_2,param_2[1]);
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (auStack_78,&UNK_10f63b9fc,auStack_90);
    FUN_10a012db0(auStack_60,auStack_78,&UNK_10f63ba05);
    FUN_10a0029c0(auStack_60);
  }
  else {
    (*param_4)(uStack_40,param_3);
    if ((bStack_38 & 1) != 0) {
      _memcpy();
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0ff2fc);
  (*pcVar1)();
}



/* Entry: 10a0ff348; end: 10a0ff41f;  */

undefined1  [16] FUN_10a0ff348(long *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined **ppuVar2;
  undefined1 auVar3 [16];
  
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x200))();
  if ((int)plVar1 == 0) {
    plVar1 = (long *)0xffffffffffffffff;
    ppuVar2 = (undefined **)0xffffffffffffffff;
  }
  else {
    (**(code **)(*param_1 + 0x210))(param_1,param_2);
    plVar1 = param_1;
    (**(code **)(*param_1 + 0x200))(param_1,&PTR_DAT_110ba4bb8);
    if ((int)plVar1 == 0) {
      plVar1 = (long *)0xffffffffffffffff;
      ppuVar2 = (undefined **)0xffffffffffffffff;
    }
    else {
      ppuVar2 = &PTR_DAT_110ba4bb8;
      plVar1 = param_1;
      (**(code **)(*param_1 + 0x10))(param_1,&PTR_DAT_110ba4bb8);
    }
    (**(code **)(*param_1 + 0x220))(param_1);
  }
  auVar3._8_8_ = ppuVar2;
  auVar3._0_8_ = plVar1;
  return auVar3;
}



/* Entry: 10a0ff420; end: 10a0ff6df;  */

long * FUN_10a0ff420(long *param_1,undefined **param_2,ulong *param_3,undefined1 param_4,
                    undefined8 *param_5)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined **ppuVar3;
  long **pplVar4;
  long *plVar5;
  long lVar6;
  ulong *unaff_x27;
  undefined *puVar7;
  undefined *puVar8;
  long *plStack_130;
  undefined **ppuStack_128;
  ulong uStack_120;
  undefined8 *apuStack_118 [7];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined1 uStack_c8;
  ulong uStack_c0;
  undefined **appuStack_b8 [7];
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  pplVar4 = &plStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = param_1;
  ppuVar3 = param_2;
  (**(code **)(*param_1 + 0x200))();
  if ((int)plVar2 == 0) {
    plVar5 = (long *)0x0;
    goto LAB_10a0ff5fc;
  }
  (**(code **)(*param_1 + 0x210))(param_1,param_2);
  ppuVar3 = &PTR_DAT_110ba4bb8;
  plVar5 = param_1;
  (**(code **)(*param_1 + 0x200))();
  if (((ulong)plVar5 & 1) != 0) {
    ppuVar3 = &PTR_DAT_110ba4bb8;
    plVar2 = param_1;
    (**(code **)(*param_1 + 0x10))();
    unaff_x27 = &uStack_c0;
    uStack_78 = 0;
    lStack_70 = 0;
    uStack_80 = 0;
    uStack_c0 = *param_3;
    appuStack_b8[0] = &PTR_DAT_110ae9180;
    (**(code **)(param_3[1] + 0x10))(appuStack_b8,param_3 + 1);
    if (*(char *)((long)param_5 + 0x17) < '\0') {
      if (param_5[1] == 0) goto LAB_10a0ff538;
      func_0x000107c3192c(&plStack_130,*param_5);
    }
    else if (*(char *)((long)param_5 + 0x17) == '\0') {
LAB_10a0ff538:
      func_0x000107c2b054(&plStack_130,*param_2);
    }
    else {
      ppuStack_128 = (undefined **)param_5[1];
      plStack_130 = (long *)*param_5;
      uStack_120 = param_5[2];
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (&uStack_80,&plStack_130);
    if ((long)uStack_120 < 0) {
      __ZdlPv(plStack_130);
    }
    lVar6 = param_1[1];
    uStack_120 = uStack_c0;
    plStack_130 = plVar2;
    ppuStack_128 = ppuVar3;
    (*(code *)appuStack_b8[0][2])(apuStack_118,appuStack_b8);
    uStack_d8 = uStack_78;
    uStack_e0 = uStack_80;
    lStack_d0 = lStack_70;
    uStack_78 = 0;
    lStack_70 = 0;
    uStack_80 = 0;
    uStack_c8 = param_4;
    FUN_10a0ff6e0(lVar6 + 0x58);
    ppuVar3 = (undefined **)pplVar4;
    if (lStack_d0 < 0) {
      __ZdlPv(uStack_e0);
      ppuVar3 = (undefined **)pplVar4;
    }
    (*(code *)*apuStack_118[0])(apuStack_118);
    if (lStack_70 < 0) {
      __ZdlPv(uStack_80);
    }
    (*(code *)*appuStack_b8[0])(appuStack_b8);
  }
  plVar2 = param_1;
  (**(code **)(*param_1 + 0x220))();
LAB_10a0ff5fc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return plVar5;
  }
  ___stack_chk_fail();
  if (lStack_70 < 0) {
    __ZdlPv(uStack_80);
  }
  (*(code *)*appuStack_b8[0])(unaff_x27 + 1);
  (**(code **)(*param_1 + 0x220))(param_1);
  __Unwind_Resume(plVar2);
  func_0x000104bd46a0();
  puVar1 = (undefined8 *)plVar2[1];
  if (puVar1 < (undefined8 *)plVar2[2]) {
    puVar7 = *ppuVar3;
    puVar1[1] = ppuVar3[1];
    *puVar1 = puVar7;
    puVar1[2] = ppuVar3[2];
    (**(code **)(ppuVar3[3] + 0x10))(puVar1 + 3,ppuVar3 + 3);
    puVar8 = ppuVar3[0xb];
    puVar7 = ppuVar3[10];
    puVar1[0xc] = ppuVar3[0xc];
    puVar1[0xb] = puVar8;
    puVar1[10] = puVar7;
    ppuVar3[10] = (undefined *)0x0;
    ppuVar3[0xb] = (undefined *)0x0;
    ppuVar3[0xc] = (undefined *)0x0;
    *(undefined1 *)(puVar1 + 0xd) = *(undefined1 *)(ppuVar3 + 0xd);
    plVar5 = puVar1 + 0xe;
  }
  else {
    plVar5 = plVar2;
    FUN_10a107ed0(plVar2,ppuVar3);
  }
  plVar2[1] = (long)plVar5;
  return plVar5;
}



/* Entry: 10a0ff6e0; end: 10a0ff76f;  */

void FUN_10a0ff6e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    uVar2 = *param_2;
    puVar1[1] = param_2[1];
    *puVar1 = uVar2;
    puVar1[2] = param_2[2];
    (**(code **)(param_2[3] + 0x10))(puVar1 + 3,param_2 + 3);
    uVar3 = param_2[0xb];
    uVar2 = param_2[10];
    puVar1[0xc] = param_2[0xc];
    puVar1[0xb] = uVar3;
    puVar1[10] = uVar2;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[0xc] = 0;
    *(undefined1 *)(puVar1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
    puVar1 = puVar1 + 0xe;
  }
  else {
    puVar1 = param_1;
    FUN_10a107ed0(param_1,param_2);
  }
  param_1[1] = puVar1;
  return;
}



/* Entry: 10a0ff770; end: 10a0ff99f;  */

void FUN_10a0ff770(undefined8 param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  code *pcStack_118;
  undefined **ppuStack_110;
  long *plStack_108;
  undefined1 uStack_100;
  code *pcStack_d8;
  undefined **ppuStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_1053a6a3c;
  ppuStack_90 = &PTR_DAT_110ae9180;
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x28))();
  if (plVar1 != (long *)0x0) {
    *(ushort *)((long)plVar1 + 0x59) =
         *(ushort *)((long)plVar1 + 0x59) & 0xff80 | *(ushort *)((long)plVar1 + 0x59) + 1 & 0x7f;
    uStack_c0 = CONCAT71(uStack_c0._1_7_,1);
    pcStack_d8 = FUN_10a1d0710;
    ppuStack_d0 = &PTR_FUN_110bad6c8;
    plStack_c8 = plVar1;
    func_0x00010a108320(&puStack_98,&pcStack_d8);
    FUN_10a044790(&pcStack_d8);
    (*(code *)*ppuStack_d0)(&ppuStack_d0);
  }
  uStack_a0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  plStack_c8 = (long *)0x0;
  pcStack_d8 = (code *)&UNK_1053a6a3c;
  ppuStack_d0 = &PTR_DAT_110ae9180;
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x30))();
  if (plVar1 != (long *)0x0) {
    *(ushort *)(plVar1 + 6) = *(ushort *)(plVar1 + 6) & 0xff80 | *(ushort *)(plVar1 + 6) + 1 & 0x7f;
    uStack_100 = 1;
    pcStack_118 = FUN_10a1d355c;
    ppuStack_110 = &PTR_FUN_110bad800;
    plStack_108 = plVar1;
    func_0x00010a108320(&pcStack_d8,&pcStack_118);
    FUN_10a044790(&pcStack_118);
    (*(code *)*ppuStack_110)(&ppuStack_110);
  }
  (**(code **)(*param_2 + 0x10))(param_2,param_1);
  FUN_10a044790(&pcStack_d8);
  (*(code *)*ppuStack_d0)(&ppuStack_d0);
  FUN_10a044790(&puStack_98);
  (*(code *)*ppuStack_90)(&ppuStack_90);
  (**(code **)(*param_2 + 0x28))();
  if (param_2 != (long *)0x0) {
    FUN_10a1c08dc();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  (**(code **)(*param_2 + 0x218))();
  (**(code **)(*param_2 + 0x1e0))(param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010a0ff9e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x220))(param_2);
  return;
}



/* Entry: 10a0ff9a0; end: 10a0ffa37;  */

void FUN_10a0ff9a0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(*param_1 + 0x218))();
  (**(code **)(*param_1 + 0x1e0))(param_1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010a0ff9e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x220))(param_1);
  return;
}



/* Entry: 10a0ffa38; end: 10a0ffa93;  */

long * FUN_10a0ffa38(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x200))();
  if ((int)plVar1 != 0) {
    (**(code **)(*param_1 + 0x1f0))(param_1,param_2,param_3);
  }
  return plVar1;
}



/* Entry: 10a0ffa94; end: 10a0ffba3;  */

byte FUN_10a0ffa94(long param_1,long param_2)

{
  undefined8 ***pppuVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  long *plVar2;
  undefined8 **appuStack_48 [2];
  char cStack_31;
  
  plVar2 = *(long **)(*(long *)(param_1 + 0x18) + 0xd20);
  if (plVar2 != (long *)0x0) {
    FUN_10a0ffba4(appuStack_48,param_2);
    (**(code **)(*plVar2 + 0x40))
              (plVar2,appuStack_48,*(undefined8 *)(param_2 + 0x138),*(undefined8 *)(param_2 + 0x140)
               ,*(undefined4 *)(param_2 + 0x148));
    if (cStack_31 < '\0') {
      __ZdlPv(appuStack_48[0]);
    }
  }
  if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    FUN_10a0ffba4(appuStack_48,param_2);
    pppuVar1 = (undefined8 ***)appuStack_48[0];
    if (-1 < cStack_31) {
      pppuVar1 = appuStack_48;
    }
    func_0x00010ae06f08(1,8,&UNK_10f63ba2b,&UNK_10f63ba72,0x205,&UNK_10f63baf0,in_x6,in_x7,pppuVar1)
    ;
    if (cStack_31 < '\0') {
      __ZdlPv(appuStack_48[0]);
    }
  }
  return (*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0x910) + 0x38) ^ 0xff) & 1;
}



/* Entry: 10a0ffba4; end: 10a0ffbdf;  */

void FUN_10a0ffba4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_2 + 0x137) < '\0') {
    func_0x000107c3192c(param_1,*(undefined8 *)(param_2 + 0x120),*(undefined8 *)(param_2 + 0x128));
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x120);
    param_1[1] = *(undefined8 *)(param_2 + 0x128);
    *param_1 = uVar1;
    param_1[2] = *(undefined8 *)(param_2 + 0x130);
  }
  return;
}



/* Entry: 10a0ffbe0; end: 10a0ffbfb;  */

void FUN_10a0ffbe0(long *param_1,undefined8 param_2,undefined8 *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010a0ffbf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))(param_1,param_2,*param_3,*(int *)(param_3 + 1) - (int)*param_3);
  return;
}



/* Entry: 10a0ffbfc; end: 10a0ffca3;  */

void FUN_10a0ffbfc(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 **ppuStack_68;
  long lStack_60;
  char cStack_51;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 **ppuStack_40;
  long lStack_38;
  
  uStack_50 = param_3;
  uStack_48 = param_4;
  FUN_10a0ffca4(&ppuStack_68,&uStack_50);
  lStack_38 = (long)cStack_51;
  ppuStack_40 = &ppuStack_68;
  if (lStack_38 < 0) {
    ppuStack_40 = ppuStack_68;
    lStack_38 = lStack_60;
    if (lStack_60 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0ffc88);
      (*pcVar1)();
    }
  }
  (**(code **)(*param_1 + 0x30))(param_1,param_2,&ppuStack_40);
  if (cStack_51 < '\0') {
    __ZdlPv(ppuStack_68);
  }
  return;
}



/* Entry: 10a0ffca4; end: 10a0ffdc7;  */

void FUN_10a0ffca4(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 **ppuVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 *puStack_70;
  ulong uStack_68;
  byte bStack_59;
  undefined8 auStack_58 [2];
  char cStack_41;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  
  __ZNSt3__19to_stringEx(auStack_58,*param_2);
  puVar2 = auStack_58;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar2,&UNK_10f63bc09,1);
  uStack_38 = puVar2[1];
  uStack_40 = *puVar2;
  lStack_30 = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  __ZNSt3__19to_stringEx(&puStack_70,param_2[1]);
  ppuVar1 = (undefined1 **)puStack_70;
  if (-1 < (char)bStack_59) {
    uStack_68 = (ulong)bStack_59;
    ppuVar1 = &puStack_70;
  }
  puVar2 = &uStack_40;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar2,ppuVar1,uStack_68);
  uVar3 = *puVar2;
  param_1[1] = puVar2[1];
  *param_1 = uVar3;
  param_1[2] = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  if ((char)bStack_59 < '\0') {
    __ZdlPv(puStack_70);
  }
  if (lStack_30 < 0) {
    __ZdlPv(uStack_40);
  }
  if (cStack_41 < '\0') {
    __ZdlPv(auStack_58[0]);
  }
  return;
}



/* Entry: 10a0ffdc8; end: 10a0ffe2b;  */

void FUN_10a0ffdc8(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (**(code **)(*param_1 + 0x18))();
  (**(code **)(*param_1 + 0x140))(param_1,&PTR_DAT_110ba4bf8,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010a0ffe28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1);
  return;
}



/* Entry: 10a0ffe2c; end: 10a0ffe53;  */

void FUN_10a0ffe2c(long *param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *param_3;
  if (lVar3 == 0) {
    uVar1 = 0xffffffffffffffff;
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar1 = *(undefined8 *)(lVar3 + 0x40);
    uVar2 = *(undefined8 *)(lVar3 + 0x48);
  }
                    /* WARNING: Could not recover jumptable at 0x00010a0ffe50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x100))(param_1,param_2,uVar1,uVar2,param_4);
  return;
}



/* Entry: 10a0ffe54; end: 10a0fff13;  */

void FUN_10a0ffe54(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_40;
  long *plStack_38;
  
  uStack_40 = 0;
  plStack_38 = (long *)0x0;
  plVar4 = (long *)param_3[1];
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    plStack_38 = plVar4;
    if (plVar4 != (long *)0x0) {
      uStack_40 = *param_3;
    }
  }
  (**(code **)(*param_1 + 0x108))(param_1,param_2,&uStack_40,param_4);
  plVar4 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10a0fff14; end: 10a0fff23;  */

void FUN_10a0fff14(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a0fff20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x130))();
  return;
}



/* Entry: 10a0fff24; end: 10a100157;  */

void FUN_10a0fff24(undefined ***param_1,undefined ***param_2,long param_3)

{
  undefined ***pppuVar1;
  undefined **unaff_x22;
  code **unaff_x23;
  code *pcStack_118;
  undefined **ppuStack_110;
  undefined ***pppuStack_108;
  undefined1 uStack_100;
  code *pcStack_d8;
  undefined **ppuStack_d0;
  undefined ***pppuStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((param_2 != (undefined ***)0x0) &&
     ((*(char *)(param_2 + 1) != '\x01' || ((param_3 != 0 && ((*(byte *)(param_3 + 8) & 1) == 0)))))
     ) {
    uStack_60 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_88 = 0;
    unaff_x22 = &puStack_98;
    puStack_98 = &UNK_1053a6a3c;
    ppuStack_90 = &PTR_DAT_110ae9180;
    pppuVar1 = param_2;
    (*(code *)(*param_2)[5])();
    if (pppuVar1 != (undefined ***)0x0) {
      *(ushort *)((long)pppuVar1 + 0x59) =
           *(ushort *)((long)pppuVar1 + 0x59) & 0xff80 |
           *(ushort *)((long)pppuVar1 + 0x59) + 1 & 0x7f;
      uStack_c0 = CONCAT71(uStack_c0._1_7_,1);
      pcStack_d8 = FUN_10a1d0710;
      ppuStack_d0 = &PTR_FUN_110bad6c8;
      pppuStack_c8 = pppuVar1;
      func_0x00010a108320(&puStack_98,&pcStack_d8);
      FUN_10a044790(&pcStack_d8);
      (*(code *)*ppuStack_d0)(&ppuStack_d0);
    }
    uStack_a0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    pppuStack_c8 = (undefined ***)0x0;
    unaff_x23 = &pcStack_d8;
    pcStack_d8 = (code *)&UNK_1053a6a3c;
    ppuStack_d0 = &PTR_DAT_110ae9180;
    pppuVar1 = param_2;
    (*(code *)(*param_2)[6])();
    if (pppuVar1 != (undefined ***)0x0) {
      *(ushort *)(pppuVar1 + 6) =
           *(ushort *)(pppuVar1 + 6) & 0xff80 | *(ushort *)(pppuVar1 + 6) + 1 & 0x7f;
      uStack_100 = 1;
      pcStack_118 = FUN_10a1d355c;
      ppuStack_110 = &PTR_FUN_110bad800;
      pppuStack_108 = pppuVar1;
      func_0x00010a108320(&pcStack_d8,&pcStack_118);
      FUN_10a044790(&pcStack_118);
      (*(code *)*ppuStack_110)(&ppuStack_110);
    }
    (*(code *)(*param_2)[4])(param_2);
    FUN_10a044790(&pcStack_d8);
    (*(code *)*ppuStack_d0)(&ppuStack_d0);
    param_2 = param_1;
    FUN_10a044790(&puStack_98);
    param_1 = &ppuStack_90;
    (*(code *)*ppuStack_90)();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a044790(&pcStack_d8);
  (*(code *)*ppuStack_d0)(unaff_x23 + 1);
  FUN_10a044790(&puStack_98);
  (*(code *)*ppuStack_90)(unaff_x22 + 1);
  __Unwind_Resume();
  (*(code *)(*param_1)[2])();
  if ((param_2 != (undefined ***)0x0) &&
     ((*(char *)(param_2 + 1) != '\x01' || ((param_3 != 0 && ((*(byte *)(param_3 + 8) & 1) == 0)))))
     ) {
    (*(code *)(*param_1)[0x24])(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010a1001cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(*param_1)[4])(param_1);
  return;
}



/* Entry: 10a100158; end: 10a1001ef;  */

void FUN_10a100158(long *param_1,long param_2,long param_3)

{
  (**(code **)(*param_1 + 0x10))();
  if ((param_2 != 0) &&
     ((*(char *)(param_2 + 8) != '\x01' || ((param_3 != 0 && ((*(byte *)(param_3 + 8) & 1) == 0)))))
     ) {
    (**(code **)(*param_1 + 0x120))(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010a1001cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1);
  return;
}



/* Entry: 10a1001f0; end: 10a10029b;  */

void FUN_10a1001f0(long *param_1,undefined8 param_2,long param_3,long param_4)

{
  if ((param_3 != 0) &&
     ((*(char *)(param_3 + 8) != '\x01' || ((param_4 != 0 && ((*(byte *)(param_4 + 8) & 1) == 0)))))
     ) {
    (**(code **)(*param_1 + 0x18))(param_1);
    (**(code **)(*param_1 + 0x120))(param_1,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010a100278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x20))(param_1);
    return;
  }
  return;
}



/* Entry: 10a10029c; end: 10a10029f;  */

void FUN_10a10029c(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined8 *puStack_20;
  long lStack_18;
  
  lStack_18 = (long)*(char *)((long)param_3 + 0x17);
  puStack_20 = param_3;
  if (lStack_18 < 0) {
    puStack_20 = (undefined8 *)*param_3;
    lStack_18 = param_3[1];
    if (lStack_18 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a00d7a8);
      (*pcVar1)();
    }
  }
  (**(code **)(*param_1 + 0x30))(param_1,param_2,&puStack_20);
  return;
}



/* Entry: 10a1002a0; end: 10a1002c7;  */

void FUN_10a1002a0(long *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *extraout_x8;
  ulong *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_b0 [24];
  undefined8 auStack_98 [3];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  if ((int)param_3 != 2) {
                    /* WARNING: Could not recover jumptable at 0x00010a1002b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x50))();
    return;
  }
  plVar4 = (long *)&UNK_10f63bb28;
  FUN_10a00946c();
  if (*(int *)(param_3 + 0x30) == 2) {
    puVar3 = (undefined8 *)&UNK_10f63bb55;
    FUN_10a00946c();
    puVar5 = (ulong *)*puVar3;
    if ((puVar5 != (ulong *)0x0) && ((uint)puVar5[1] < 5)) {
      plVar4 = (long *)*puVar5;
      (**(code **)(*plVar4 + 0x10))();
      if (((ulong)plVar4 & 1) != 0) {
        plVar4 = *(long **)*puVar3;
        (**(code **)(*plVar4 + 0x18))();
        extraout_x8[1] = 0;
        extraout_x8[2] = 0;
        *extraout_x8 = 0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
                  (extraout_x8,plVar4,0);
        (**(code **)(**(long **)*puVar3 + 0x28))(*(long **)*puVar3,0);
        puVar6 = (undefined8 *)*extraout_x8;
        if (-1 < *(char *)((long)extraout_x8 + 0x17)) {
          puVar6 = extraout_x8;
        }
        (**(code **)(**(long **)*puVar3 + 0x20))(*(long **)*puVar3,puVar6,1,plVar4);
        return;
      }
    }
    func_0x000107c2b054(auStack_b0,&UNK_10f63bb83);
    FUN_10a012db0(auStack_98,auStack_b0,&UNK_10f63bbbd);
    uVar1 = puVar3[2];
    puVar6 = (undefined8 *)puVar3[1];
    if (-1 < (char)*(byte *)((long)puVar3 + 0x1f)) {
      uVar1 = (ulong)*(byte *)((long)puVar3 + 0x1f);
      puVar6 = puVar3 + 1;
    }
    puVar3 = auStack_98;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar3,puVar6,uVar1);
    uStack_78 = puVar3[1];
    uStack_80 = *puVar3;
    uStack_70 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    FUN_10a012db0(auStack_68,&uStack_80,&UNK_10f63bb81);
    FUN_10a0029c0(auStack_68);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a100428);
    (*pcVar2)();
  }
  (**(code **)(*plVar4 + 0x18))();
  (**(code **)(*plVar4 + 0x1a8))(plVar4,&PTR_DAT_110ba4c18,param_3);
  (**(code **)(*plVar4 + 0x50))(plVar4,&PTR_DAT_110ba36a0,*(undefined4 *)(param_3 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010a100340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x20))(plVar4);
  return;
}



/* Entry: 10a1002c8; end: 10a10034f;  */

void FUN_10a1002c8(long *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *extraout_x8;
  ulong *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_a0 [24];
  undefined8 auStack_88 [3];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  if (*(int *)(param_3 + 0x30) != 2) {
    (**(code **)(*param_1 + 0x18))();
    (**(code **)(*param_1 + 0x1a8))(param_1,&PTR_DAT_110ba4c18,param_3);
    (**(code **)(*param_1 + 0x50))(param_1,&PTR_DAT_110ba36a0,*(undefined4 *)(param_3 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010a100340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x20))(param_1);
    return;
  }
  puVar3 = (undefined8 *)&UNK_10f63bb55;
  FUN_10a00946c();
  puVar5 = (ulong *)*puVar3;
  if ((puVar5 != (ulong *)0x0) && ((uint)puVar5[1] < 5)) {
    plVar4 = (long *)*puVar5;
    (**(code **)(*plVar4 + 0x10))();
    if (((ulong)plVar4 & 1) != 0) {
      plVar4 = *(long **)*puVar3;
      (**(code **)(*plVar4 + 0x18))();
      extraout_x8[1] = 0;
      extraout_x8[2] = 0;
      *extraout_x8 = 0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
                (extraout_x8,plVar4,0);
      (**(code **)(**(long **)*puVar3 + 0x28))(*(long **)*puVar3,0);
      puVar6 = (undefined8 *)*extraout_x8;
      if (-1 < *(char *)((long)extraout_x8 + 0x17)) {
        puVar6 = extraout_x8;
      }
      (**(code **)(**(long **)*puVar3 + 0x20))(*(long **)*puVar3,puVar6,1,plVar4);
      return;
    }
  }
  func_0x000107c2b054(auStack_a0,&UNK_10f63bb83);
  FUN_10a012db0(auStack_88,auStack_a0,&UNK_10f63bbbd);
  uVar1 = puVar3[2];
  puVar6 = (undefined8 *)puVar3[1];
  if (-1 < (char)*(byte *)((long)puVar3 + 0x1f)) {
    uVar1 = (ulong)*(byte *)((long)puVar3 + 0x1f);
    puVar6 = puVar3 + 1;
  }
  puVar3 = auStack_88;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar3,puVar6,uVar1);
  uStack_68 = puVar3[1];
  uStack_70 = *puVar3;
  uStack_60 = puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  FUN_10a012db0(auStack_58,&uStack_70,&UNK_10f63bb81);
  FUN_10a0029c0(auStack_58);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a100428);
  (*pcVar2)();
}



/* Entry: 10a100350; end: 10a10048b;  */

void FUN_10a100350(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  undefined1 auStack_80 [24];
  undefined8 auStack_68 [3];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  puVar6 = (ulong *)*param_2;
  if ((puVar6 != (ulong *)0x0) && ((uint)puVar6[1] < 5)) {
    plVar4 = (long *)*puVar6;
    (**(code **)(*plVar4 + 0x10))();
    if (((ulong)plVar4 & 1) != 0) {
      plVar4 = *(long **)*param_2;
      (**(code **)(*plVar4 + 0x18))();
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = 0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc(param_1,plVar4,0);
      (**(code **)(**(long **)*param_2 + 0x28))(*(long **)*param_2,0);
      puVar1 = (undefined8 *)*param_1;
      if (-1 < *(char *)((long)param_1 + 0x17)) {
        puVar1 = param_1;
      }
      (**(code **)(**(long **)*param_2 + 0x20))(*(long **)*param_2,puVar1,1,plVar4);
      return;
    }
  }
  func_0x000107c2b054(auStack_80,&UNK_10f63bb83);
  FUN_10a012db0(auStack_68,auStack_80,&UNK_10f63bbbd);
  uVar2 = param_2[2];
  puVar1 = (undefined8 *)param_2[1];
  if (-1 < (char)*(byte *)((long)param_2 + 0x1f)) {
    uVar2 = (ulong)*(byte *)((long)param_2 + 0x1f);
    puVar1 = param_2 + 1;
  }
  puVar5 = auStack_68;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar5,puVar1,uVar2);
  uStack_48 = puVar5[1];
  uStack_50 = *puVar5;
  uStack_40 = puVar5[2];
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  FUN_10a012db0(auStack_38,&uStack_50,&UNK_10f63bb81);
  FUN_10a0029c0(auStack_38);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a100428);
  (*pcVar3)();
}



/* Entry: 10a10048c; end: 10a1006af;  */

void FUN_10a10048c(char *param_1)

{
  long lVar1;
  code *pcVar2;
  char **ppcVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  char *pcStack_48;
  
  if (*param_1 != '\0') {
    iVar6 = 1;
    pcStack_48 = param_1;
    do {
      func_0x00010a10058c(&pcStack_48);
      if (*pcStack_48 == '#') {
        ppcVar3 = &pcStack_48;
        FUN_10a1006b0();
        lVar1 = (long)pcStack_48 - (long)ppcVar3;
        if (lVar1 < 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10a10058c);
          (*pcVar2)();
        }
        if (lVar1 == 9) {
          uVar5 = ((ulong)*ppcVar3 & 0xff00ff00ff00ff00) >> 8 |
                  ((ulong)*ppcVar3 & 0xff00ff00ff00ff) << 8;
          uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
          uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
          if (uVar5 == 0x23656e646d616372) {
            iVar4 = *(byte *)(ppcVar3 + 1) - 0x6f;
          }
          else {
            iVar4 = 1;
            if (uVar5 < 0x23656e646d616372) {
              iVar4 = -1;
            }
          }
          iVar6 = iVar6 - (uint)(iVar4 == 0);
        }
        else if ((lVar1 == 6) &&
                (*(int *)ppcVar3 == 0x63616d23 && *(short *)((long)ppcVar3 + 4) == 0x6f72)) {
          iVar6 = iVar6 + 1;
        }
        if (iVar6 == 0) {
          return;
        }
      }
      func_0x00010a100740(&pcStack_48);
    } while (*pcStack_48 != '\0');
  }
  return;
}



/* Entry: 10a1006b0; end: 10a1007df;  */

void FUN_10a1006b0(undefined8 *param_1)

{
  byte *pbVar1;
  uint uVar2;
  
  func_0x00010a10058c();
  pbVar1 = (byte *)*param_1;
  uVar2 = (uint)*pbVar1;
  if (0x20 < *pbVar1) {
    do {
      pbVar1 = pbVar1 + 1;
      uVar2 = uVar2 - 0x28;
      if (uVar2 < 0x36) {
        if ((ulong)uVar2 == 7) {
          if (*pbVar1 == 0x2a) {
            return;
          }
          if (*pbVar1 == 0x2f) {
            return;
          }
        }
        else if ((1L << ((ulong)uVar2 & 0x3f) & 0x28000000280013U) != 0) {
          return;
        }
      }
      *param_1 = pbVar1;
      uVar2 = (uint)*pbVar1;
    } while (0x20 < uVar2);
  }
  return;
}



/* Entry: 10a1007e0; end: 10a100947;  */

long * FUN_10a1007e0(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined1 auStack_1e8 [24];
  long *plStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined1 *puStack_1b8;
  undefined8 uStack_1b0;
  undefined1 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined4 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
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
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a0f523c(auStack_1e8,0,0x606a0,uRam0000000113834bd8);
  uStack_1c8 = 0;
  uStack_1c0 = 0;
  uStack_1b0 = 0;
  uStack_1a0 = 0;
  uStack_198 = 0x3f800000;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_70 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  puStack_1b8 = auStack_1e8;
  puStack_1a8 = auStack_1e8;
  puStack_68 = auStack_1e8;
  puStack_50 = auStack_1e8;
  FUN_10a1009b0(&uStack_88,param_2);
  FUN_10a100a5c(param_1,&uStack_1c8);
  FUN_10a10859c(&uStack_88);
  FUN_10a100948(&uStack_1c8);
  plVar2 = plStack_1d0;
  plStack_1d0 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return plVar2;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  plVar5 = (long *)plVar2[3];
  while (plVar1 = plVar5, plVar1 != (long *)0x0) {
    plVar5 = (long *)*plVar1;
    plVar3 = (long *)plVar2[4];
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x18))(plVar3,plVar1,0x12c8,8);
    }
  }
  lVar4 = *plVar2;
  *plVar2 = 0;
  if (lVar4 != 0) {
    FUN_10a108494(plVar2 + 1);
  }
  return plVar2;
}



/* Entry: 10a100948; end: 10a1009af;  */

long * FUN_10a100948(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = (long *)param_1[3];
  while (plVar1 = plVar4, plVar1 != (long *)0x0) {
    plVar4 = (long *)*plVar1;
    plVar2 = (long *)param_1[4];
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plVar2,plVar1,0x12c8,8);
    }
  }
  lVar3 = *param_1;
  *param_1 = 0;
  if (lVar3 != 0) {
    FUN_10a108494(param_1 + 1);
  }
  return param_1;
}



/* Entry: 10a1009b0; end: 10a100a5b;  */

void FUN_10a1009b0(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar2 = *(long *)(param_1 + 8);
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != lVar2) {
    uVar1 = (*(long *)(param_1 + 0x10) - lVar2 >> 3) * 0xaa - 1;
  }
  uVar4 = *(long *)(param_1 + 0x30) + *(long *)(param_1 + 0x28);
  if (uVar1 == uVar4) {
    FUN_10a10d398(param_1);
    lVar2 = *(long *)(param_1 + 8);
    uVar4 = *(long *)(param_1 + 0x30) + *(long *)(param_1 + 0x28);
  }
  puVar3 = (undefined8 *)(*(long *)(lVar2 + (uVar4 / 0xaa) * 8) + (uVar4 % 0xaa) * 0x18);
  uVar6 = param_2[1];
  uVar5 = *param_2;
  puVar3[2] = param_2[2];
  puVar3[1] = uVar6;
  *puVar3 = uVar5;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 1;
  return;
}



/* Entry: 10a100a5c; end: 10a101be3;  */

/* WARNING: Removing unreachable block (ram,0x00010a100c90) */
/* WARNING: Removing unreachable block (ram,0x00010a100b10) */
/* WARNING: Removing unreachable block (ram,0x00010a1018c8) */

void FUN_10a100a5c(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  ulong *puVar2;
  long *plVar3;
  byte **ppbVar4;
  char cVar5;
  uint uVar6;
  long lVar7;
  undefined8 ******ppppppuVar8;
  ulong *puVar9;
  undefined1 auVar10 [2];
  undefined1 auVar11 [2];
  undefined5 uVar12;
  undefined5 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  code *pcVar16;
  bool bVar17;
  undefined1 *puVar18;
  byte **ppbVar19;
  undefined5 *puVar20;
  byte **ppbVar21;
  ulong uVar22;
  undefined *puVar23;
  long lVar24;
  undefined8 *puVar25;
  long *plVar26;
  long *plVar27;
  byte *pbVar28;
  byte bVar29;
  byte *pbVar30;
  ulong uVar31;
  long *plVar32;
  long lVar33;
  int iVar34;
  long *plVar35;
  long *plVar36;
  long *plVar37;
  long lVar38;
  byte **ppbVar39;
  long lVar40;
  byte *pbVar41;
  byte *pbVar42;
  long *plVar43;
  long *plVar44;
  long *plVar45;
  char *pcVar46;
  ulong uVar47;
  ulong uVar48;
  byte **ppbVar49;
  long *plVar50;
  byte **ppbStack_200;
  undefined8 *****pppppuStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  undefined8 *****pppppuStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  byte *pbStack_1a0;
  byte **ppbStack_198;
  ulong uStack_190;
  long *plStack_188;
  byte *pbStack_180;
  undefined1 auStack_178 [2];
  undefined5 uStack_176;
  undefined1 uStack_171;
  undefined8 uStack_170;
  long alStack_168 [31];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = (long *)(param_2[0x29] + ((ulong)(param_2[0x2d] + param_2[0x2e]) / 0xaa) * 8);
  lVar38 = *plVar3;
  lVar40 = 0;
  if (param_2[0x2a] != param_2[0x29]) {
    lVar40 = lVar38 + ((ulong)(param_2[0x2d] + param_2[0x2e]) % 0xaa) * 0x18;
  }
  if (lVar40 == lVar38) {
    lVar40 = plVar3[-1] + 0xff0;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar38 = (long)*(char *)(lVar40 + -1);
  if (lVar38 < 0) {
    lVar38 = *(long *)(lVar40 + -0x10);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm(param_1,lVar38 + 0x800)
  ;
  pbVar42 = (byte *)(lVar40 + -0x18);
  lVar38 = 0;
  plVar44 = (long *)(lVar40 + -0x10);
  plVar3 = param_2 + 4;
  plVar1 = param_2 + 3;
  pbVar28 = pbVar42;
  pbStack_180 = pbVar42;
LAB_10a100b60:
LAB_10a100b64:
  bVar29 = *pbStack_180;
  if (0x5e < bVar29) {
    if (bVar29 != 0x5f) goto LAB_10a100be0;
    if (param_2[7] < 0) goto LAB_10a100d34;
LAB_10a100c0c:
    pbStack_180 = pbStack_180 + 1;
    goto LAB_10a100b64;
  }
  if (bVar29 == 0x2f) {
    if (pbStack_180[1] == 0x2f) {
      do {
        pbStack_180 = pbStack_180 + 1;
      } while (*pbStack_180 != 0 && *pbStack_180 != 10);
    }
    else {
      if (pbStack_180[1] != 0x2a) goto LAB_10a100c0c;
      bVar29 = 0x2f;
      for (pbVar30 = pbStack_180 + 2;
          ((bVar29 != 0x2a || (pbStack_180 = pbVar30, pbVar30[-1] != 0x2f)) &&
          (pbStack_180 = pbVar30 + -1, *pbVar30 != 0)); pbVar30 = pbVar30 + 1) {
        bVar29 = pbVar30[-1];
      }
    }
    goto LAB_10a100b64;
  }
  if (bVar29 == 0) {
    if (*pbVar28 != 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_1,pbVar28,(long)pbStack_180 - (long)pbVar28);
    }
    if (lVar38 == 0) {
      uStack_170._0_7_ = 0;
      auStack_178 = (undefined1  [2])0x0;
      uStack_176 = 0;
      uStack_171 = 0;
      *(undefined8 *)(lVar40 + -0x18) = 0;
      *plVar44 = 0;
      *(undefined8 *)(lVar40 + -9) = 0;
      *(undefined1 *)(lVar40 + -1) = 0;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return;
    }
    ___stack_chk_fail();
    goto LAB_10a101960;
  }
  if (bVar29 == 0x23) goto LAB_10a100c48;
LAB_10a100be0:
  if (0x19 < (((int)(char)bVar29 & 0xffffffdfU) - 0x41 & 0xff)) goto LAB_10a100c0c;
  lVar24 = -0x41;
  if (0x60 < (char)bVar29) {
    lVar24 = -0x61;
  }
  if (((ulong)param_2[7] >> (lVar24 + (char)bVar29 & 0x3fU) & 1) == 0) goto LAB_10a100c0c;
  if (bVar29 != 0x23) {
LAB_10a100d34:
    ppbVar19 = &pbStack_1a0;
    pbStack_1a0 = pbStack_180;
    FUN_10a1006b0();
    uVar47 = (long)pbStack_1a0 - (long)ppbVar19;
    if ((uVar47 - 1 < 0xff) && (*(char *)((long)param_2 + uVar47 + 0x40) == '\x01')) {
      plStack_188 = (long *)0x0;
      ppbStack_198 = ppbVar19;
      uStack_190 = uVar47;
      FUN_10a108410(&ppbStack_198);
      pbVar30 = pbStack_180;
      plVar27 = (long *)param_2[1];
      if (plVar27 != (long *)0x0) {
        uVar47 = (long)plVar27 - 1;
        if (((ulong)plVar27 & uVar47) == 0) {
          plVar45 = (long *)(uVar47 & (ulong)plStack_188);
        }
        else {
          plVar45 = plStack_188;
          if (plVar27 <= plStack_188) {
            uVar31 = 0;
            if (plVar27 != (long *)0x0) {
              uVar31 = (ulong)plStack_188 / (ulong)plVar27;
            }
            plVar45 = (long *)((long)plStack_188 - uVar31 * (long)plVar27);
          }
        }
        plVar50 = *(long **)(*param_2 + (long)plVar45 * 8);
        if (plVar50 != (long *)0x0) {
          for (plVar50 = (long *)*plVar50; plVar50 != (long *)0x0; plVar50 = (long *)*plVar50) {
            plVar43 = (long *)plVar50[1];
            if (plVar43 == plStack_188) {
              if ((long *)plVar50[4] == plStack_188) {
                pbStack_180 = pbStack_180 + plVar50[3];
                auStack_178 = (undefined1  [2])0x0;
                uStack_176 = 0;
                uStack_171 = 0;
                func_0x00010a10058c(&pbStack_180);
                bVar17 = false;
                uVar47 = CONCAT17(uStack_171,CONCAT52(uStack_176,auStack_178));
                bVar29 = *pbStack_180;
                uVar31 = 0;
                goto LAB_10a10145c;
              }
            }
            else {
              if (((ulong)plVar27 & uVar47) == 0) {
                plVar43 = (long *)((ulong)plVar43 & uVar47);
              }
              else if (plVar27 <= plVar43) {
                uVar31 = 0;
                if (plVar27 != (long *)0x0) {
                  uVar31 = (ulong)plVar43 / (ulong)plVar27;
                }
                plVar43 = (long *)((long)plVar43 - uVar31 * (long)plVar27);
              }
              if (plVar43 != plVar45) break;
            }
          }
        }
      }
    }
    goto LAB_10a101868;
  }
LAB_10a100c48:
  lVar24 = (long)*(char *)(lVar40 + -1);
  pbVar30 = pbVar42;
  if (lVar24 < 0) {
    lVar24 = *plVar44;
    pbVar30 = *(byte **)pbVar42;
  }
  pbVar30 = pbVar30 + (lVar24 - (long)pbStack_180);
  auStack_178 = SUB82(pbStack_180,0);
  uStack_176 = (undefined5)((ulong)pbStack_180 >> 0x10);
  uStack_171 = (undefined1)((ulong)pbStack_180 >> 0x38);
  uStack_170._0_7_ = SUB87(pbVar30,0);
  uStack_170._7_1_ = (undefined1)((ulong)pbVar30 >> 0x38);
  if ((long)pbVar30 < 0) goto LAB_10a101b00;
  puVar18 = auStack_178;
  FUN_10a04236c(puVar18,&UNK_10f63c9ed,6);
  if ((int)puVar18 == 0) goto LAB_10a10186c;
  pbVar30 = pbStack_180;
  if ((pbVar42 < pbStack_180) && (pbVar30 = pbStack_180 + -1, pbStack_180[-1] != 10)) {
    pbVar30 = pbStack_180;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,pbVar28,(long)pbVar30 - (long)pbVar28);
  pbStack_180 = pbStack_180 + 6;
  ppbStack_200 = &pbStack_180;
  FUN_10a1006b0();
  cVar5 = *(char *)ppbStack_200;
  if ((cVar5 != '#') && (cVar5 != '_')) {
    if ((((int)cVar5 & 0xffffffdfU) - 0x41 & 0xff) < 0x1a) {
      lVar24 = -0x41;
      if ('`' < cVar5) {
        lVar24 = -0x61;
      }
      uVar31 = 1L << (lVar24 + cVar5 & 0x3fU);
      if ((uVar31 & param_2[7]) == 0) {
        uVar47 = 0x8000000000000000;
        if (cVar5 != '-') {
          uVar47 = uVar31;
        }
LAB_10a100dbc:
        param_2[7] = uVar47 | param_2[7];
      }
    }
    else if ((int)cVar5 == 0x2d) {
      uVar47 = 0x8000000000000000;
      goto LAB_10a100dbc;
    }
  }
  uVar47 = (long)pbStack_180 - (long)ppbStack_200;
  if (0xff < uVar47) {
    FUN_10a0ee900(auStack_178,&UNK_10f63c9f4,0x2a);
    FUN_10a0029c0(auStack_178);
    goto LAB_10a101b00;
  }
  plStack_188 = (long *)0x0;
  ppbStack_198 = ppbStack_200;
  uStack_190 = uVar47;
  FUN_10a108410(&ppbStack_198);
  plVar27 = plStack_188;
  plVar50 = (long *)param_2[1];
  plVar45 = plVar44;
  if (plVar50 != (long *)0x0) {
    uVar31 = (long)plVar50 - 1;
    if (((ulong)plVar50 & uVar31) == 0) {
      plVar45 = (long *)(uVar31 & (ulong)plStack_188);
    }
    else {
      plVar45 = plStack_188;
      if (plVar50 <= plStack_188) {
        uVar48 = 0;
        if (plVar50 != (long *)0x0) {
          uVar48 = (ulong)plStack_188 / (ulong)plVar50;
        }
        plVar45 = (long *)((long)plStack_188 - uVar48 * (long)plVar50);
      }
    }
    puVar25 = *(undefined8 **)(*param_2 + (long)plVar45 * 8);
    if (puVar25 != (undefined8 *)0x0) {
      for (plVar43 = (long *)*puVar25; plVar43 != (long *)0x0; plVar43 = (long *)*plVar43) {
        plVar26 = (long *)plVar43[1];
        if (plVar26 == plStack_188) {
          if ((long *)plVar43[4] == plStack_188) goto LAB_10a1011c8;
        }
        else {
          if (((ulong)plVar50 & uVar31) == 0) {
            plVar26 = (long *)((ulong)plVar26 & uVar31);
          }
          else if (plVar50 <= plVar26) {
            uVar48 = 0;
            if (plVar50 != (long *)0x0) {
              uVar48 = (ulong)plVar26 / (ulong)plVar50;
            }
            plVar26 = (long *)((long)plVar26 - uVar48 * (long)plVar50);
          }
          if (plVar26 != plVar45) break;
        }
      }
    }
  }
  plVar43 = (long *)*plVar3;
  (**(code **)(*plVar43 + 0x10))(plVar43,0x12c8,8);
  auStack_178 = SUB82(plVar43,0);
  uStack_176 = (undefined5)((ulong)plVar43 >> 0x10);
  uStack_171 = (undefined1)((ulong)plVar43 >> 0x38);
  uStack_170._0_7_ = SUB87(plVar3,0);
  uStack_170._7_1_ = (undefined1)((ulong)plVar3 >> 0x38);
  alStack_168[0] = 1;
  *plVar43 = 0;
  plVar43[1] = (long)plVar27;
  plVar43[3] = uStack_190;
  plVar43[2] = (long)ppbStack_198;
  plVar43[4] = (long)plStack_188;
  _bzero(plVar43 + 5,0x12a0);
  if ((plVar50 == (long *)0x0) ||
     (*(float *)(param_2 + 6) * (float)plVar50 < (float)(param_2[5] + 1))) {
    uVar31 = 1;
    if ((long *)0x2 < plVar50) {
      uVar31 = (ulong)(((ulong)plVar50 & (long)plVar50 - 1U) != 0);
    }
    plVar45 = (long *)(uVar31 | (long)plVar50 << 1);
    plVar50 = (long *)(long)((float)(param_2[5] + 1) / *(float *)(param_2 + 6));
    if (plVar45 <= plVar50) {
      plVar45 = plVar50;
    }
    if ((long)plVar45 - 1U == 0) {
      plVar45 = (long *)0x2;
    }
    else if (((ulong)plVar45 & (long)plVar45 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
    }
    plVar50 = (long *)param_2[1];
    if (plVar50 < plVar45) {
LAB_10a100f50:
      plVar50 = (long *)param_2[2];
      if (plVar50 != (long *)0x0) {
        (**(code **)(*plVar50 + 0x10))(plVar50,(long)plVar45 << 3,8);
      }
      lVar24 = *param_2;
      *param_2 = (long)plVar50;
      if (lVar24 != 0) {
        FUN_10a108494(param_2 + 1);
      }
      plVar50 = (long *)0x0;
      param_2[1] = (long)plVar45;
      do {
        *(undefined8 *)(*param_2 + (long)plVar50 * 8) = 0;
        plVar50 = (long *)((long)plVar50 + 1);
      } while (plVar45 != plVar50);
      plVar26 = (long *)*plVar1;
      plVar50 = plVar45;
      if (plVar26 != (long *)0x0) {
        plVar32 = (long *)plVar26[1];
        uVar31 = (long)plVar45 - 1;
        if (((ulong)plVar45 & uVar31) == 0) {
          plVar32 = (long *)((ulong)plVar32 & uVar31);
        }
        else if (plVar45 <= plVar32) {
          uVar48 = 0;
          if (plVar45 != (long *)0x0) {
            uVar48 = (ulong)plVar32 / (ulong)plVar45;
          }
          plVar32 = (long *)((long)plVar32 - uVar48 * (long)plVar45);
        }
        *(long **)(*param_2 + (long)plVar32 * 8) = plVar1;
        plVar35 = (long *)*plVar26;
        while (plVar35 != (long *)0x0) {
          plVar37 = (long *)plVar35[1];
          if (((ulong)plVar45 & uVar31) == 0) {
            plVar37 = (long *)((ulong)plVar37 & uVar31);
          }
          else if (plVar45 <= plVar37) {
            uVar48 = 0;
            if (plVar45 != (long *)0x0) {
              uVar48 = (ulong)plVar37 / (ulong)plVar45;
            }
            plVar37 = (long *)((long)plVar37 - uVar48 * (long)plVar45);
          }
          plVar36 = plVar35;
          if (plVar37 != plVar32) {
            lVar24 = *param_2;
            if (*(long *)(lVar24 + (long)plVar37 * 8) == 0) {
              *(long **)(lVar24 + (long)plVar37 * 8) = plVar26;
              plVar32 = plVar37;
            }
            else {
              *plVar26 = *plVar35;
              *plVar35 = **(undefined8 **)(lVar24 + (long)plVar37 * 8);
              **(long **)(lVar24 + (long)plVar37 * 8) = (long)plVar35;
              plVar36 = plVar26;
            }
          }
          plVar26 = plVar36;
          plVar35 = (long *)*plVar36;
        }
      }
    }
    else if (plVar45 < plVar50) {
      plVar26 = (long *)(long)((float)(ulong)param_2[5] / *(float *)(param_2 + 6));
      if ((plVar50 < (long *)0x3) || (((ulong)plVar50 & (long)plVar50 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if ((long *)0x1 < plVar26) {
        plVar26 = (long *)(1L << (-LZCOUNT((long)plVar26 + -1) & 0x3fU));
      }
      if (plVar45 <= plVar26) {
        plVar45 = plVar26;
      }
      if (plVar45 < plVar50) {
        if (plVar45 != (long *)0x0) goto LAB_10a100f50;
        lVar24 = *param_2;
        *param_2 = 0;
        if (lVar24 != 0) {
          FUN_10a108494(param_2 + 1);
        }
        param_2[1] = 0;
        plVar50 = (long *)0x0;
      }
      else {
        plVar50 = (long *)param_2[1];
      }
    }
    if (((ulong)plVar50 & (long)plVar50 - 1U) == 0) {
      plVar45 = (long *)((long)plVar50 - 1U & (ulong)plVar27);
    }
    else {
      plVar45 = plVar27;
      if (plVar50 <= plVar27) {
        uVar31 = 0;
        if (plVar50 != (long *)0x0) {
          uVar31 = (ulong)plVar27 / (ulong)plVar50;
        }
        plVar45 = (long *)((long)plVar27 - uVar31 * (long)plVar50);
      }
    }
  }
  lVar24 = *param_2;
  plVar27 = *(long **)(lVar24 + (long)plVar45 * 8);
  if (plVar27 == (long *)0x0) {
    *plVar43 = *plVar1;
    *plVar1 = (long)plVar43;
    *(long **)(lVar24 + (long)plVar45 * 8) = plVar1;
    if (*plVar43 != 0) {
      plVar27 = *(long **)(*plVar43 + 8);
      if (((ulong)plVar50 & (long)plVar50 - 1U) == 0) {
        plVar27 = (long *)((ulong)plVar27 & (long)plVar50 - 1U);
      }
      else if (plVar50 <= plVar27) {
        uVar31 = 0;
        if (plVar50 != (long *)0x0) {
          uVar31 = (ulong)plVar27 / (ulong)plVar50;
        }
        plVar27 = (long *)((long)plVar27 - uVar31 * (long)plVar50);
      }
      *(long **)(*param_2 + (long)plVar27 * 8) = plVar43;
    }
  }
  else {
    *plVar43 = *plVar27;
    *plVar27 = (long)plVar43;
  }
  auStack_178 = (undefined1  [2])0x0;
  uStack_176 = 0;
  uStack_171 = 0;
  param_2[5] = param_2[5] + 1;
  FUN_10a108444(auStack_178);
LAB_10a1011c8:
  *(undefined1 *)((long)param_2 + uVar47 + 0x40) = 1;
  if (plVar43[5] == 0x11) {
    FUN_10a0ee900(auStack_178,&UNK_10f63ca1f,0x25);
    FUN_10a0029c0(auStack_178);
    goto LAB_10a101b00;
  }
  plVar27 = plVar43 + 6;
  plVar45 = plVar27 + plVar43[5] * 0x23;
  plVar45[0x22] = 0;
  plVar45[0x1f] = 0;
  plVar45[0x1e] = 0;
  plVar45[0x21] = 0;
  plVar45[0x20] = 0;
  plVar45[0x1b] = 0;
  plVar45[0x1a] = 0;
  plVar45[0x1d] = 0;
  plVar45[0x1c] = 0;
  plVar45[0x17] = 0;
  plVar45[0x16] = 0;
  plVar45[0x19] = 0;
  plVar45[0x18] = 0;
  plVar45[0x13] = 0;
  plVar45[0x12] = 0;
  plVar45[0x15] = 0;
  plVar45[0x14] = 0;
  plVar45[0xf] = 0;
  plVar45[0xe] = 0;
  plVar45[0x11] = 0;
  plVar45[0x10] = 0;
  plVar45[0xb] = 0;
  plVar45[10] = 0;
  plVar45[0xd] = 0;
  plVar45[0xc] = 0;
  plVar45[7] = 0;
  plVar45[6] = 0;
  plVar45[9] = 0;
  plVar45[8] = 0;
  plVar45[3] = 0;
  plVar45[2] = 0;
  plVar45[5] = 0;
  plVar45[4] = 0;
  plVar45[1] = 0;
  *plVar45 = 0;
  lVar24 = plVar43[5];
  plVar43[5] = lVar24 + 1;
  func_0x00010a10058c(&pbStack_180);
  if (*pbStack_180 != 0x28) {
LAB_10a101960:
    func_0x000107c2b054(auStack_178,&UNK_10f63ca45);
    ppbVar19 = ppbStack_200;
    _strlen();
    if ((byte **)0x12b < ppbVar19) {
      ppbVar19 = (byte **)0x12c;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (auStack_178,ppbStack_200,ppbVar19);
    FUN_10a1084cc(auStack_178);
LAB_10a101b00:
                    /* WARNING: Does not return */
    pcVar16 = (code *)SoftwareBreakpoint(1,0x10a101b04);
    (*pcVar16)();
  }
  lVar38 = lVar38 + 1;
  plVar45 = plVar27 + lVar24 * 0x23;
  bVar29 = 0x28;
  while (bVar29 != 0x29) {
    if (bVar29 == 0) {
      FUN_10a0ee900(auStack_178,&UNK_10f63ca98,0x34);
      FUN_10a0029c0(auStack_178);
      goto LAB_10a101b00;
    }
    pbStack_180 = pbStack_180 + 1;
    func_0x00010a10058c(&pbStack_180);
    pbVar28 = pbStack_180;
    lVar24 = *plVar45;
    if (lVar24 == 0x10) {
      FUN_10a0ee900(auStack_178,&UNK_10f63ca77,0x20);
      FUN_10a0029c0(auStack_178);
      goto LAB_10a101b00;
    }
    auStack_178 = (undefined1  [2])0x292c;
    bVar29 = *pbStack_180;
    pbVar30 = pbStack_180;
    if (bVar29 != 0) {
      pbVar30 = pbStack_180 + 1;
      do {
        pbVar41 = pbVar30;
        puVar20 = (undefined5 *)auStack_178;
        _memchr(puVar20,(int)(char)bVar29,2);
        if ((puVar20 != (undefined5 *)0x0) && (pbVar30 = pbVar41, puVar20 != &uStack_176)) break;
        pbVar30 = pbVar41 + 1;
        bVar29 = *pbVar41;
        pbStack_180 = pbVar41;
      } while (bVar29 != 0);
      pbVar30 = pbVar30 + -1;
    }
    lVar7 = (long)pbVar30 - (long)pbVar28;
    plVar45[lVar24 * 2 + 1] = (long)pbVar28;
    (plVar45 + lVar24 * 2 + 1)[1] = lVar7;
    if (lVar7 < 0) goto LAB_10a101b00;
    *plVar45 = lVar24 + 1;
    bVar29 = *pbStack_180;
  }
  uVar47 = plVar43[5];
  if (1 < uVar47) {
    if (uVar47 * 0x118 == 0x118) {
LAB_10a10130c:
      if (plVar43 + uVar47 * 0x23 + -0x1d != plVar27) {
        FUN_10a0ee900(auStack_178,&UNK_10f63cacd,0x34);
        FUN_10a0029c0(auStack_178);
        goto LAB_10a101b00;
      }
    }
    else {
      lVar24 = uVar47 * 0x118 + -0x118;
      do {
        if (*plVar27 == *plVar45) goto LAB_10a10130c;
        plVar27 = plVar27 + 0x23;
        lVar24 = lVar24 + -0x118;
      } while (lVar24 != 0);
    }
  }
  pbVar28 = pbStack_180 + 1;
  do {
    bVar29 = *pbVar28;
    pbVar30 = pbVar28;
    if (bVar29 == 0) break;
    pbVar30 = pbVar28 + 1;
    pbVar28 = pbVar28 + 1;
  } while (bVar29 != 10);
  pbVar28 = pbVar30;
  pbStack_180 = pbVar30;
  func_0x00010a10048c();
  pbStack_180 = pbVar28;
  if (*pbVar28 == 0) {
    FUN_10a00946c(&UNK_10f63cb02);
    goto LAB_10a101b00;
  }
  pbVar41 = pbVar28 + -1;
  if (pbVar28[-1] != 10) {
    pbVar41 = pbVar28;
  }
  if (*pbVar28 != 10) {
    do {
      pbVar28 = pbVar28 + 1;
      pbStack_180 = pbVar28;
    } while (*pbVar28 != 10 && *pbVar28 != 0);
  }
  if ((long)pbVar41 - (long)pbVar30 < 0) goto LAB_10a101b00;
  plVar45[0x21] = (long)pbVar30;
  plVar45[0x22] = (long)pbVar41 - (long)pbVar30;
  pbVar28 = pbStack_180;
LAB_10a10186c:
  if (*pbStack_180 != 0) {
    pbStack_180 = pbStack_180 + 1;
  }
  goto LAB_10a100b60;
LAB_10a10145c:
  uVar14 = uStack_171;
  uVar12 = uStack_176;
  auVar10 = auStack_178;
  uStack_171 = (undefined1)(uVar47 >> 0x38);
  uVar15 = uStack_171;
  auStack_178 = SUB82(uVar47,0);
  auVar11 = auStack_178;
  uStack_176 = (undefined5)(uVar47 >> 0x10);
  uVar13 = uStack_176;
  if ((bVar29 == 0) || (bVar29 == 0x29)) goto LAB_10a10151c;
  pbStack_180 = pbStack_180 + 1;
  auStack_178 = auVar10;
  uStack_176 = uVar12;
  uStack_171 = uVar14;
  func_0x00010a10058c(&pbStack_180);
  pbVar41 = pbStack_180;
  iVar34 = 0;
  while( true ) {
    bVar29 = *pbStack_180;
    do {
      if (bVar29 == 0) goto LAB_10a10145c;
      if (bVar29 == 0x28) {
        iVar34 = iVar34 + 1;
        goto LAB_10a1014dc;
      }
      if (0 < iVar34 && bVar29 == 0x29) {
        iVar34 = iVar34 + -1;
        goto LAB_10a1014dc;
      }
      if (iVar34 != 0) {
        if (bVar29 == 0) goto LAB_10a10145c;
        goto LAB_10a1014dc;
      }
      iVar34 = 0;
    } while (bVar29 == 0);
    if ((bVar29 == 0x2c) || (bVar29 == 0x29)) break;
    iVar34 = 0;
LAB_10a1014dc:
    pbStack_180 = pbStack_180 + 1;
  }
  if (uVar31 == 0x10) {
    auStack_178 = auVar11;
    uStack_176 = uVar13;
    uStack_171 = uVar15;
    FUN_10a0ee900(&pppppuStack_1c0,&UNK_10f63ca77,0x20);
    FUN_10a0029c0(&pppppuStack_1c0);
    goto LAB_10a101b00;
  }
  lVar24 = (long)pbStack_180 - (long)pbVar41;
  (&uStack_170)[uVar31 * 2] = pbVar41;
  alStack_168[uVar31 * 2] = lVar24;
  if (lVar24 < 0) {
                    /* WARNING: Does not return */
    pcVar16 = (code *)SoftwareBreakpoint(1,0x10a10190c);
    auStack_178 = auVar11;
    uStack_176 = uVar13;
    uStack_171 = uVar15;
    (*pcVar16)();
  }
  uVar47 = uVar31 + 1;
  bVar29 = *pbStack_180;
  bVar17 = bVar29 == 0x29;
  uVar31 = uVar47;
  goto LAB_10a10145c;
LAB_10a10151c:
  if (!bVar17) {
    func_0x000107c2b054(&pppppuStack_1c0,&UNK_10f63cb15);
    pbVar28 = pbVar30;
    _strlen();
    if ((byte *)0x12b < pbVar28) {
      pbVar28 = (byte *)0x12c;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&pppppuStack_1c0,pbVar30,pbVar28);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&pppppuStack_1c0,&UNK_10f63cb43,8);
    uVar47 = *(ulong *)(lVar40 + -0x10);
    pbVar28 = *(byte **)(lVar40 + -0x18);
    if (-1 < (char)*(byte *)(lVar40 + -1)) {
      uVar47 = (ulong)*(byte *)(lVar40 + -1);
      pbVar28 = pbVar42;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&pppppuStack_1c0,pbVar28,uVar47);
    FUN_10a1084cc(&pppppuStack_1c0);
    goto LAB_10a101b00;
  }
  lVar33 = plVar50[5];
  lVar24 = lVar33 * 0x118;
  lVar7 = lVar33;
  for (puVar2 = (ulong *)(plVar50 + 6); (lVar7 != 0 && (*puVar2 != uVar31)); puVar2 = puVar2 + 0x23)
  {
    lVar24 = lVar24 + -0x118;
    lVar7 = lVar24;
  }
  if (puVar2 == (ulong *)(plVar50 + 6 + lVar33 * 0x23)) {
    FUN_10a0ee900(&pppppuStack_1c0,&UNK_10f63cb4c,0x32);
    FUN_10a0029c0(&pppppuStack_1c0);
    goto LAB_10a101b00;
  }
  ppbStack_200 = (byte **)puVar2[0x21];
  uVar47 = puVar2[0x22];
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,pbVar28,(long)pbVar30 - (long)pbVar28);
  if (*pbStack_180 != 0) {
    pbStack_180 = pbStack_180 + 1;
  }
  pbVar28 = pbStack_180;
  pppppuStack_1c0 = (undefined8 ******)0x0;
  uStack_1b8 = 0;
  uStack_1b0 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm
            (&pppppuStack_1c0,uVar47);
  ppbVar19 = ppbStack_200;
  ppbVar39 = ppbStack_200;
  if (uVar47 != 0) {
    ppbVar4 = (byte **)((long)ppbStack_200 + uVar47);
    do {
      if (*puVar2 != 0) {
        uVar31 = 0;
        plVar27 = alStack_168;
        puVar9 = puVar2;
        do {
          uVar48 = puVar9[2];
          if (uVar48 <= (ulong)((long)ppbVar4 - (long)ppbVar19)) {
            if ((long)uVar48 < 0) goto LAB_10a101b00;
            ppbVar21 = ppbVar19;
            _memcmp(ppbVar19,puVar9[1],uVar48);
            if ((int)ppbVar21 == 0) {
              if (ppbVar19 != ppbStack_200) {
                uVar22 = (ulong)*(byte *)((long)ppbVar19 + -1);
                FUN_10a1083b8();
                if ((uVar22 & 1) != 0) goto LAB_10a101648;
              }
              ppbVar21 = (byte **)((long)ppbVar19 + uVar48);
              ppbVar49 = ppbVar4;
              if (ppbVar21 != ppbVar4) {
                uVar48 = (ulong)*(char *)ppbVar21;
                FUN_10a1083b8();
                ppbVar49 = ppbVar21;
                if ((uVar48 & 1) != 0) goto LAB_10a101648;
              }
              if (*(char *)((long)ppbVar19 + -1) == '#') {
                iVar34 = -2;
                if (*(char *)((long)ppbVar19 + -2) != '#') {
                  iVar34 = 0;
                }
              }
              else {
                iVar34 = 0;
              }
              if (*(char *)ppbVar39 == '#') {
                lVar24 = 2;
                if (*(char *)((long)ppbVar39 + 1) != '#') {
                  lVar24 = 0;
                }
              }
              else {
                lVar24 = 0;
              }
              uVar6 = ((int)ppbVar19 + iVar34) - (int)(char *)((long)ppbVar39 + lVar24);
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                        (&pppppuStack_1c0,(char *)((long)ppbVar39 + lVar24),
                         uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU));
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                        (&pppppuStack_1c0,plVar27[-1],*plVar27);
              ppbVar19 = ppbVar49;
              ppbVar39 = ppbVar49;
              break;
            }
          }
LAB_10a101648:
          uVar31 = uVar31 + 1;
          plVar27 = plVar27 + 2;
          puVar9 = puVar9 + 2;
        } while (uVar31 < *puVar2);
      }
      ppbVar19 = (byte **)((long)ppbVar19 + 1);
    } while ((ulong)((long)ppbVar19 - (long)ppbStack_200) < uVar47);
  }
  if (*(char *)ppbVar39 == '#') {
    lVar24 = 2;
    if (*(char *)((long)ppbVar39 + 1) != '#') {
      lVar24 = 0;
    }
  }
  else {
    lVar24 = 0;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&pppppuStack_1c0,(char *)((long)ppbVar39 + lVar24),
             (long)ppbVar19 - ((long)ppbVar39 + lVar24));
  FUN_10a1009b0(param_2 + 0x28,&pppppuStack_1c0);
  FUN_10a100a5c(&pppppuStack_1d8,param_2);
  if ((long)uStack_1b0 < 0) {
    __ZdlPv(pppppuStack_1c0);
  }
  uStack_1b0 = uStack_1c8;
  uStack_1b8 = uStack_1d0;
  pppppuStack_1c0 = pppppuStack_1d8;
  uVar47 = uStack_1d0;
  ppppppuVar8 = (undefined8 ******)pppppuStack_1d8;
  if (-1 < (long)uStack_1c8) {
    uVar47 = uStack_1c8 >> 0x38;
    ppppppuVar8 = &pppppuStack_1c0;
  }
  if (uVar47 != 0) {
    uVar31 = 0;
    do {
      puVar23 = &UNK_10f63cb7f;
      _memchr(&UNK_10f63cb7f,(long)*(char *)((long)ppppppuVar8 + uVar31),4);
      if (puVar23 == (undefined *)0x0) goto LAB_10a1017d8;
      uVar31 = uVar31 + 1;
    } while (uVar47 != uVar31);
  }
  uVar31 = 0xffffffffffffffff;
LAB_10a1017d8:
  uVar48 = uVar47;
  if (uVar31 <= uVar47) {
    uVar48 = uVar31;
  }
  lVar24 = ~uVar47 + uVar48;
  pcVar46 = (char *)((long)ppppppuVar8 + uVar47);
  do {
    pcVar46 = pcVar46 + -1;
    if (lVar24 == -1) {
      lVar24 = 0;
      break;
    }
    puVar23 = &UNK_10f63cb7f;
    _memchr(&UNK_10f63cb7f,(long)*pcVar46,4);
    lVar24 = lVar24 + 1;
  } while (puVar23 != (undefined *)0x0);
  uVar47 = uVar47 - uVar48;
  lVar7 = 0;
  if (lVar24 + uVar47 <= uVar47) {
    lVar7 = uVar47 - (lVar24 + uVar47);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,(long)ppppppuVar8 + uVar48,lVar7);
  if ((long)uStack_1b0 < 0) {
    __ZdlPv(pppppuStack_1c0);
  }
LAB_10a101868:
  pbStack_180 = pbStack_1a0;
  goto LAB_10a10186c;
}



/* Entry: 10a101be4; end: 10a101da3;  */

void FUN_10a101be4(long *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 *****pppppuVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 ****ppppuStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = param_4;
  if (param_3 == 0) {
    func_0x000107c2b054(param_1,&UNK_10f63b3ad);
    return;
  }
  ppppuStack_50 = (undefined8 *****)0x0;
  uStack_48 = 0;
  uStack_40 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
            (&ppppuStack_50,param_3 << 1,0);
  uVar5 = uStack_48;
  pppppuVar3 = (undefined8 *****)ppppuStack_50;
  if (-1 < (long)uStack_40) {
    uVar5 = uStack_40 >> 0x38;
    pppppuVar3 = &ppppuStack_50;
  }
  _vsnprintf(pppppuVar3,uVar5,param_2);
  iVar2 = (int)pppppuVar3;
  if (iVar2 < 1) {
    if (-1 < iVar2) goto LAB_10a101c90;
    puVar4 = (undefined8 *)0x20;
    __Znwm();
    *param_1 = (long)puVar4;
    param_1[2] = -0x7fffffffffffffe0;
    param_1[1] = 0x1d;
    puVar4[1] = 0x6e45203a74616d72;
    *puVar4 = 0x6f46676e69727453;
    *(undefined8 *)((long)puVar4 + 0x15) = 0x2e726f7272652067;
    *(undefined8 *)((long)puVar4 + 0xd) = 0x6e69646f636e4520;
    *(undefined1 *)((long)puVar4 + 0x1d) = 0;
    if (-1 < (long)uStack_40) {
      return;
    }
LAB_10a101d44:
    __ZdlPv(ppppuStack_50);
  }
  else {
    uVar5 = uStack_48;
    if (-1 < (long)uStack_40) {
      uVar5 = uStack_40 >> 0x38;
    }
    if (((ulong)pppppuVar3 & 0xffffffff) < uVar5) {
      uVar5 = (ulong)pppppuVar3 & 0xffffffff;
    }
    else {
LAB_10a101c90:
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
                (&ppppuStack_50,iVar2 + 1,0);
      uVar5 = uStack_48;
      pppppuVar3 = (undefined8 *****)ppppuStack_50;
      if (-1 < (long)uStack_40) {
        uVar5 = uStack_40 >> 0x38;
        pppppuVar3 = &ppppuStack_50;
      }
      _vsnprintf(pppppuVar3,uVar5,param_2,uStack_38);
      uVar1 = (uint)(char)uStack_40._7_1_;
      uVar5 = uStack_48;
      if (-1 < (int)uVar1) {
        uVar5 = (ulong)uStack_40._7_1_;
      }
      if (uVar5 - 1 != (long)(int)pppppuVar3) {
        puVar4 = (undefined8 *)0x20;
        __Znwm();
        *param_1 = (long)puVar4;
        param_1[2] = -0x7fffffffffffffe0;
        param_1[1] = 0x1f;
        puVar4[1] = 0x6f46203a74616d72;
        *puVar4 = 0x6f46676e69727453;
        *(undefined8 *)((long)puVar4 + 0x17) = 0x2e726f7272652067;
        *(undefined8 *)((long)puVar4 + 0xf) = 0x6e697474616d726f;
        *(undefined1 *)((long)puVar4 + 0x1f) = 0;
        if ((uVar1 >> 7 & 1) == 0) {
          return;
        }
        goto LAB_10a101d44;
      }
      uVar5 = (ulong)(int)pppppuVar3;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
              (&ppppuStack_50,uVar5,0);
    param_1[1] = uStack_48;
    *param_1 = (long)ppppuStack_50;
    param_1[2] = uStack_40;
  }
  return;
}



/* Entry: 10a101da4; end: 10a101f8f;  */

void FUN_10a101da4(long *param_1,long *param_2)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  long *unaff_x20;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plStack_3c0;
  char cStack_3b8;
  long *plStack_3b0;
  long *plStack_3a8;
  undefined1 *puStack_3a0;
  code *pcStack_398;
  undefined4 uStack_384;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  ulong uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  long lStack_280;
  undefined8 uStack_278;
  long lStack_270;
  long alStack_268 [64];
  ulong uStack_68;
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = param_2;
  if ((int)param_2 == 0) {
LAB_10a101e24:
    *(undefined4 *)(param_1 + 0x20) = 0;
    param_2 = unaff_x20;
  }
  else {
    plVar4 = param_2;
    _pthread_self();
    iVar6 = (int)plVar4;
    _pthread_mach_thread_np();
    if (iVar6 == (int)param_2) {
      plVar5 = alStack_268;
      FUN_10a0ec6a0(plVar5,0x40,0);
      iVar3 = (int)plVar5;
      iVar6 = iVar3;
      if (0x1f < iVar3) {
        iVar6 = 0x20;
      }
      *(int *)(param_1 + 0x20) = iVar6;
    }
    else {
      _thread_suspend();
      unaff_x20 = param_2;
      if ((int)plVar5 != 0) goto LAB_10a101e24;
      uStack_288 = 0;
      uStack_290 = 0;
      uStack_278 = 0;
      lStack_280 = 0;
      uStack_2a8 = 0;
      uStack_2b0 = 0;
      uStack_298 = 0;
      uStack_2a0 = 0;
      uStack_2c8 = 0;
      uStack_2d0 = 0;
      uStack_2b8 = 0;
      uStack_2c0 = 0;
      uStack_2e8 = 0;
      uStack_2f0 = 0;
      uStack_2d8 = 0;
      uStack_2e0 = 0;
      uStack_2f8 = 0;
      uStack_300 = 0;
      uStack_318 = 0;
      uStack_320 = 0;
      uStack_308 = 0;
      uStack_310 = 0;
      uStack_338 = 0;
      uStack_340 = 0;
      uStack_328 = 0;
      uStack_330 = 0;
      uStack_358 = 0;
      uStack_360 = 0;
      uStack_348 = 0;
      uStack_350 = 0;
      uStack_378 = 0;
      uStack_380 = 0;
      uStack_368 = 0;
      uStack_370 = 0;
      uStack_384 = 0x44;
      plVar5 = param_2;
      _thread_get_state(param_2,6,&uStack_380,&uStack_384);
      puVar1 = PTR__mach_task_self__11034c5c8;
      if ((int)plVar5 == 0) {
        if (lStack_280 != 0) {
          alStack_268[0] = lStack_280;
        }
        uVar9 = (ulong)(lStack_280 != 0);
        uVar8 = uVar9;
        if ((uStack_298 != 0) && (uVar7 = uStack_298, (uStack_298 & 7) == 0)) {
          while( true ) {
            lStack_60 = 0;
            uStack_68 = 0;
            lStack_270 = 0;
            iVar6 = *(int *)puVar1;
            _vm_read_overwrite(iVar6,uVar7,0x10,&uStack_68,&lStack_270);
            uVar8 = uVar9;
            if ((iVar6 != 0 || lStack_270 != 0x10) || (lStack_60 == 0)) break;
            alStack_268[uVar9] = lStack_60;
            uVar8 = uVar9 + 1;
            if (((uStack_68 <= uVar7 || (uStack_68 & 7) != 0) || uStack_68 == 0) ||
               (bVar2 = 0x3e < uVar9, uVar7 = uStack_68, uVar9 = uVar8, bVar2)) break;
          }
        }
      }
      else {
        uVar8 = 0;
      }
      plVar5 = param_2;
      _thread_resume();
      iVar3 = (int)uVar8;
      iVar6 = iVar3;
      if (0x1f < iVar3) {
        iVar6 = 0x20;
      }
      *(int *)(param_1 + 0x20) = iVar6;
    }
    if (0 < iVar3) {
      plVar5 = param_1;
      _memcpy(param_1,alStack_268,iVar6 << 3);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_398 = FUN_10a101f90;
  plVar4 = plVar5 + 0xe;
  cStack_3b8 = '\x01';
  plStack_3c0 = plVar4;
  plStack_3b0 = param_2;
  plStack_3a8 = param_1;
  puStack_3a0 = &stack0xfffffffffffffff0;
  __ZNSt3__15mutex4lockEv(plVar4);
  *(int *)((long)plVar5 + 0x6c) = *(int *)((long)plVar5 + 0x6c) + 1;
  if ((int)plVar5[0xd] != 0) {
    do {
      __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE(plVar5 + 1,&plStack_3c0);
    } while ((int)plVar5[0xd] != 0);
    plVar4 = plStack_3c0;
    if (cStack_3b8 != '\x01') {
      return;
    }
  }
  __ZNSt3__15mutex6unlockEv(plVar4);
  return;
}



/* Entry: 10a101f90; end: 10a102007;  */

void FUN_10a101f90(long param_1)

{
  long lVar1;
  long lStack_30;
  char cStack_28;
  
  lVar1 = param_1 + 0x70;
  cStack_28 = '\x01';
  lStack_30 = lVar1;
  __ZNSt3__15mutex4lockEv(lVar1);
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
  if (*(int *)(param_1 + 0x68) != 0) {
    do {
      __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE(param_1 + 8,&lStack_30);
    } while (*(int *)(param_1 + 0x68) != 0);
    lVar1 = lStack_30;
    if (cStack_28 != '\x01') {
      return;
    }
  }
  __ZNSt3__15mutex6unlockEv(lVar1);
  return;
}



/* Entry: 10a102008; end: 10a102017;  */

bool FUN_10a102008(long param_1)

{
  return *(int *)(param_1 + 0x6c) == 0;
}


