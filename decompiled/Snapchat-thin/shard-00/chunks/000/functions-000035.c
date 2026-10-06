/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1000dedd4; end: 1000dee37;  */

void FUN_1000dedd4(void)

{
  return;
}



/* Entry: 1000dee38; end: 1000dee5b;  */

void FUN_1000dee38(void)

{
  func_0x0001000dee18();
  func_0x0001000d04f0();
  return;
}



/* Entry: 1000dee5c; end: 1000dee67;  */

void FUN_1000dee5c(void)

{
  return;
}



/* Entry: 1000dee68; end: 1000defd7;  */

void FUN_1000dee68(undefined8 *param_1,long param_2,undefined8 param_3,long *param_4,int *param_5,
                  long param_6)

{
  undefined1 auStack_108 [56];
  undefined1 auStack_d0 [16];
  byte bStack_c0;
  int iStack_b4;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [56];
  undefined1 auStack_68 [16];
  byte bStack_58;
  
  iStack_b4 = 0;
  if (*param_4 == 0) {
    FUN_1000defd8(auStack_a0);
    if ((bStack_58 & 1) == 0) {
      auStack_108[0] = 0;
      bStack_c0 = 0;
    }
    else {
      FUN_1000e13e8(auStack_b0);
      func_0x0001000e2ef0(auStack_68,auStack_b0);
      FUN_1000e13bc(auStack_b0);
      auStack_108[0] = 0;
      bStack_c0 = 0;
      if (bStack_58 == 1) {
        func_0x0001000e2f14(auStack_108,auStack_a0);
      }
    }
    func_0x0001000e2f30(auStack_a0);
  }
  else {
    FUN_1000defd8(auStack_108);
  }
  if (param_5 != (int *)0x0) {
    *param_5 = iStack_b4;
  }
  if ((bStack_c0 & 1) == 0) {
    if (iStack_b4 == 4) {
      (**(code **)(**(long **)(param_2 + 0x50) + 0x20))(*(long **)(param_2 + 0x50),param_3);
    }
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (*param_4 != 0) {
      func_0x0001000e2ef0(auStack_d0,param_4);
    }
    if (param_6 != 0) {
      func_0x000107c60ca4(auStack_108,param_6);
    }
    FUN_1000e2f5c(param_1,auStack_108);
  }
  func_0x0001000e2f30(auStack_108);
  return;
}



/* Entry: 1000defd8; end: 1000defe3;  */

void FUN_1000defd8(undefined1 *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  ulong *unaff_x21;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  ulong uStack_70;
  long alStack_68 [5];
  
  puVar1 = (ulong *)*unaff_x21;
  if (-1 < *(char *)((long)unaff_x21 + 0x17)) {
    puVar1 = unaff_x21;
  }
  func_0x000107c611c4(puVar1,0);
  if (-1 < (int)puVar1) {
    uVar2 = (ulong)puVar1;
    func_0x000107c61068();
    func_0x000107c61068(puVar1,0,0);
    if (uVar2 < 0x5a) {
      func_0x000107c60f10(puVar1);
    }
    else {
      lVar3 = 0;
      func_0x000107c610e4(0,uVar2,1,2,puVar1,0);
      func_0x000107c60f10(puVar1);
      if (lVar3 != -1) {
        alStack_68[0] = 0;
        alStack_68[2] = 0;
        alStack_68[1] = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_80 = 0;
        alStack_68[3] = 0;
        lStack_78 = lVar3;
        uStack_70 = uVar2;
        func_0x000107c60ca4(&uStack_90);
        FUN_1000e0cc8(auStack_a0);
        FUN_1000e12d8(alStack_68,auStack_a0);
        func_0x0001000e12fc(auStack_a0);
        if (alStack_68[0] == 0) {
          *param_1 = 0;
          param_1[0x48] = 0;
        }
        else {
          FUN_1000e1360(param_1,&uStack_90);
        }
        FUN_1000e137c(&uStack_90);
        return;
      }
    }
  }
  *param_1 = 0;
  param_1[0x48] = 0;
  return;
}



/* Entry: 1000defe4; end: 1000df137;  */

void FUN_1000defe4(undefined1 *param_1,undefined8 param_2,ulong *param_3,undefined4 *param_4)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  ulong uStack_70;
  long alStack_68 [5];
  
  puVar1 = (ulong *)*param_3;
  if (-1 < *(char *)((long)param_3 + 0x17)) {
    puVar1 = param_3;
  }
  func_0x000107c611c4(puVar1,0);
  if (-1 < (int)puVar1) {
    uVar2 = (ulong)puVar1;
    func_0x000107c61068();
    func_0x000107c61068(puVar1,0,0);
    if (uVar2 < 0x5a) {
      func_0x000107c60f10(puVar1);
    }
    else {
      lVar3 = 0;
      func_0x000107c610e4(0,uVar2,1,2,puVar1,0);
      func_0x000107c60f10(puVar1);
      if (lVar3 != -1) {
        alStack_68[0] = 0;
        alStack_68[2] = 0;
        alStack_68[1] = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_80 = 0;
        alStack_68[3] = 0;
        lStack_78 = lVar3;
        uStack_70 = uVar2;
        func_0x000107c60ca4(&uStack_90,param_3);
        FUN_1000e0cc8(auStack_a0);
        FUN_1000e12d8(alStack_68,auStack_a0);
        func_0x0001000e12fc(auStack_a0);
        if (alStack_68[0] == 0) {
          *param_1 = 0;
          param_1[0x48] = 0;
        }
        else {
          FUN_1000e1360(param_1,&uStack_90);
        }
        FUN_1000e137c(&uStack_90);
        return;
      }
    }
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 6;
  }
  *param_1 = 0;
  param_1[0x48] = 0;
  return;
}



/* Entry: 1000df138; end: 1000df15b;  */

ulong FUN_1000df138(ulong param_1)

{
  byte bVar1;
  ulong uVar2;
  byte *pbVar3;
  
  if ((long)param_1 < 0) {
    pbVar3 = (byte *)(param_1 & 0x7fffffffffffffff);
    uVar2 = 0x1505;
    do {
      param_1 = uVar2;
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + 1;
      uVar2 = param_1 * 0x21 ^ (ulong)bVar1;
    } while ((ulong)bVar1 != 0);
  }
  return param_1;
}



/* Entry: 1000df15c; end: 1000df183;  */

ulong FUN_1000df15c(ulong param_1)

{
  ulong unaff_x20;
  
  FUN_1000df138();
  FUN_1000df184();
  return param_1 ^ unaff_x20;
}



/* Entry: 1000df184; end: 1000df1ab;  */

void FUN_1000df184(void)

{
  FUN_1000df370(&stack0xffffffffffffffe8,8);
  return;
}



/* Entry: 1000df1ac; end: 1000df36f;  */

ulong FUN_1000df1ac(undefined8 param_1,ulong *param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 unaff_x30;
  
  if (param_3 < 0x21) {
    if (param_3 < 0x11) {
      func_0x0001000df194();
      if (8 < param_3) {
        uVar6 = *param_2;
        uVar11 = *(ulong *)((long)param_2 + (param_3 - 8));
        uVar8 = uVar11 + param_3;
        FUN_1000df47c(uVar6,uVar8 >> (param_3 & 0x3f) | uVar8 << 0x40 - (param_3 & 0x3f));
        return uVar6 ^ uVar11;
      }
      if (param_3 < 4) {
        uVar8 = 0x9ae16a3b2f90404f;
        if (param_3 != 0) {
          uVar8 = (param_3 | (ulong)*(byte *)((long)param_2 + (param_3 - 1)) << 2) *
                  -0x36b62838af619aa9 ^
                  (ulong)CONCAT11(*(undefined1 *)((long)param_2 + (param_3 >> 1)),(char)*param_2) *
                  -0x651e95c4d06fbfb1;
          uVar8 = (uVar8 ^ uVar8 >> 0x2f) * -0x651e95c4d06fbfb1;
        }
        return uVar8;
      }
      uVar7 = (ulong)*(uint *)((long)param_2 + (param_3 - 4));
      uVar8 = param_3 + (uint)((int)*param_2 << 3);
    }
    else {
      func_0x0001000df194();
      lVar12 = *(long *)((long)param_2 + (param_3 - 8));
      uVar8 = lVar12 * -0x651e95c4d06fbfb1;
      uVar11 = *param_2 * -0x4b6d499041670d8d - param_2[1];
      uVar6 = param_2[1] ^ 0xc949d7c7509e6557;
      uVar8 = (uVar8 >> 0x1e | uVar8 << 0x22) + (uVar11 >> 0x2b | uVar11 * 0x200000) +
              *(long *)((long)param_2 + (param_3 - 0x10)) * -0x3c5a37a36834ced9;
      uVar7 = *param_2 * -0x4b6d499041670d8d + param_3 + (uVar6 >> 0x14 | uVar6 << 0x2c) +
              lVar12 * 0x651e95c4d06fbfb1;
    }
  }
  else {
    if (param_3 < 0x41) {
      func_0x0001000df194();
      lVar1 = *(long *)((long)param_2 + (param_3 - 0x10));
      uVar9 = *param_2 + (lVar1 + param_3) * -0x3c5a37a36834ced9;
      uVar2 = param_2[3];
      uVar8 = uVar9 + param_2[1];
      uVar6 = uVar8 + param_2[2];
      uVar11 = *(long *)((long)param_2 + (param_3 - 0x20)) + param_2[2];
      lVar12 = *(long *)((long)param_2 + (param_3 - 8)) + uVar2;
      uVar7 = lVar12 + uVar11;
      lVar13 = (uVar8 >> 7 | uVar8 << 0x39) + (uVar9 >> 0x25 | uVar9 * 0x8000000) +
               (uVar9 + uVar2 >> 0x34 | (uVar9 + uVar2) * 0x1000) + (uVar6 >> 0x1f | uVar6 << 0x21);
      uVar8 = *(long *)((long)param_2 + (param_3 - 0x18)) + uVar11;
      uVar9 = uVar8 + lVar1;
      uVar8 = (uVar9 + lVar12 + lVar13) * -0x3c5a37a36834ced9 +
              (uVar6 + uVar2 + (uVar11 >> 0x25 | uVar11 * 0x8000000) + (uVar8 >> 7 | uVar8 << 0x39)
                       + (uVar7 >> 0x34 | uVar7 * 0x1000) + (uVar9 >> 0x1f | uVar9 << 0x21)) *
              -0x651e95c4d06fbfb1;
      uVar8 = lVar13 + (uVar8 ^ uVar8 >> 0x2f) * -0x3c5a37a36834ced9;
      return (uVar8 ^ uVar8 >> 0x2f) * -0x651e95c4d06fbfb1;
    }
    lVar12 = *(long *)((long)param_2 + (param_3 - 0x28));
    uVar8 = *(long *)((long)param_2 + (param_3 - 0x38)) +
            *(long *)((long)param_2 + (param_3 - 0x10));
    uVar6 = *(long *)((long)param_2 + (param_3 - 0x30)) + param_3;
    FUN_1000df47c(uVar6,*(undefined8 *)((long)param_2 + (param_3 - 0x18)));
    puVar3 = (ulong *)((long)param_2 + (param_3 - 0x40));
    uVar7 = param_3;
    func_0x0001001030fc(puVar3,param_3,uVar6);
    puVar4 = (ulong *)((long)param_2 + (param_3 - 0x20));
    uVar11 = uVar8 + 0xb492b66fbe98f273;
    func_0x0001001030fc(puVar4,uVar11,lVar12);
    puVar10 = param_2 + 4;
    lVar13 = *param_2 + lVar12 * -0x4b6d499041670d8d;
    lVar12 = -(param_3 - 1 & 0xffffffffffffffc0);
    do {
      uVar9 = (long)puVar3 + puVar10[-3] + uVar8 + lVar13;
      uVar8 = uVar8 + uVar7 + puVar10[2];
      puVar5 = puVar10 + -4;
      uVar9 = (uVar9 >> 0x25 | uVar9 * 0x8000000) * -0x4b6d499041670d8d ^ uVar11;
      uVar8 = (long)puVar3 + (uVar8 >> 0x2a | uVar8 * 0x400000) * -0x4b6d499041670d8d + puVar10[1];
      lVar13 = (uVar6 + (long)puVar4 >> 0x21 | (uVar6 + (long)puVar4) * 0x80000000) *
               -0x4b6d499041670d8d;
      uVar7 = uVar7 * -0x4b6d499041670d8d;
      func_0x0001001030fc(puVar5,uVar7,uVar9 + (long)puVar4);
      uVar11 = lVar13 + uVar11;
      puVar4 = puVar10;
      func_0x0001001030fc(puVar10,uVar11,uVar8 + puVar10[-2]);
      puVar10 = puVar10 + 8;
      lVar12 = lVar12 + 0x40;
      puVar3 = puVar5;
      uVar6 = uVar9;
    } while (lVar12 != 0);
    FUN_1000df47c(puVar5,puVar4);
    FUN_1000df47c(uVar7,uVar11);
    uVar8 = uVar9 + (uVar8 ^ uVar8 >> 0x2f) * -0x4b6d499041670d8d + (long)puVar5;
    uVar7 = uVar7 + lVar13;
    func_0x0001000df194(uVar8,uVar7,unaff_x30);
  }
  uVar8 = (uVar7 ^ uVar8) * -0x622015f714c7d297;
  uVar8 = (uVar7 ^ uVar8 >> 0x2f ^ uVar8) * -0x622015f714c7d297;
  return (uVar8 ^ uVar8 >> 0x2f) * -0x622015f714c7d297;
}



/* Entry: 1000df370; end: 1000df39b;  */

void FUN_1000df370(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_1000df1ac(&uStack_11,param_1,param_2);
  return;
}



/* Entry: 1000df39c; end: 1000df3c3;  */

void FUN_1000df39c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_1000df370(&uStack_18,8);
  return;
}



/* Entry: 1000df3c4; end: 1000df47b;  */

ulong FUN_1000df3c4(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (8 < param_2) {
    uVar1 = *param_1;
    uVar3 = *(ulong *)((long)param_1 + (param_2 - 8));
    uVar2 = uVar3 + param_2;
    FUN_1000df47c(uVar1,uVar2 >> (param_2 & 0x3f) | uVar2 << 0x40 - (param_2 & 0x3f));
    return uVar1 ^ uVar3;
  }
  if (3 < param_2) {
    uVar2 = (ulong)*(uint *)((long)param_1 + (param_2 - 4));
    uVar1 = (uVar2 ^ param_2 + (uint)((int)*param_1 << 3)) * -0x622015f714c7d297;
    uVar2 = (uVar2 ^ uVar1 >> 0x2f ^ uVar1) * -0x622015f714c7d297;
    return (uVar2 ^ uVar2 >> 0x2f) * -0x622015f714c7d297;
  }
  uVar2 = 0x9ae16a3b2f90404f;
  if (param_2 != 0) {
    uVar2 = (param_2 | (ulong)*(byte *)((long)param_1 + (param_2 - 1)) << 2) * -0x36b62838af619aa9 ^
            (ulong)CONCAT11(*(undefined1 *)((long)param_1 + (param_2 >> 1)),(char)*param_1) *
            -0x651e95c4d06fbfb1;
    uVar2 = (uVar2 ^ uVar2 >> 0x2f) * -0x651e95c4d06fbfb1;
  }
  return uVar2;
}



/* Entry: 1000df47c; end: 1000df4d7;  */

long FUN_1000df47c(ulong param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = (param_2 ^ param_1) * -0x622015f714c7d297;
  uVar1 = (param_2 ^ uVar1 >> 0x2f ^ uVar1) * -0x622015f714c7d297;
  return (uVar1 ^ uVar1 >> 0x2f) * -0x622015f714c7d297;
}



/* Entry: 1000df4d8; end: 1000df4f7;  */

void FUN_1000df4d8(void)

{
  FUN_1000de6a4();
  FUN_1000df4f8();
  return;
}



/* Entry: 1000df4f8; end: 1000df523;  */

void FUN_1000df4f8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    func_0x0001005f2228(lVar1 + 0x20);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 1000df524; end: 1000df597;  */

void FUN_1000df524(long param_1)

{
  func_0x0001000df518();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1000df598; end: 1000df59f;  */

void FUN_1000df598(void)

{
  return;
}



/* Entry: 1000df5a0; end: 1000df5cf;  */

undefined8 * FUN_1000df5a0(undefined8 *param_1)

{
  if (*(char *)(param_1 + 1) == '\x01') {
    func_0x000107c60d8c(*param_1);
  }
  return param_1;
}



/* Entry: 1000df5d0; end: 1000df5e7;  */

void FUN_1000df5d0(void)

{
  return;
}



/* Entry: 1000df5e8; end: 1000df613;  */

void FUN_1000df5e8(void)

{
  long unaff_x20;
  
  func_0x0001000df5e0();
  func_0x0001000df6ec();
  func_0x0001000df6fc(unaff_x20 + 0xb0);
  func_0x0001000df794();
  return;
}



/* Entry: 1000df614; end: 1000df6a7;  */

undefined8 FUN_1000df614(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((bRam000000011383d968 & 1) == 0) {
    iVar1 = 0x1383d968;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      uVar2 = 0x110;
      func_0x000107c60e20();
      func_0x000107c60ee4();
      FUN_1000df6a8(uVar2);
      uRam000000011383d960 = uVar2;
      func_0x000107c60e4c(0x11383d968);
    }
  }
  return uRam000000011383d960;
}



/* Entry: 1000df6a8; end: 1000df6e3;  */

undefined8 * FUN_1000df6a8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cf1148;
  func_0x000107c60d64(param_1 + 1);
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  return param_1;
}



/* Entry: 1000df6e4; end: 1000df703;  */

void FUN_1000df6e4(void)

{
  return;
}



/* Entry: 1000df704; end: 1000df74f;  */

undefined8 * FUN_1000df704(undefined8 *param_1,undefined8 *param_2)

{
  int extraout_w10;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_1000ded18();
    } while (extraout_w10 != 0);
  }
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  FUN_1000df75c(&uStack_30);
  return param_1;
}



/* Entry: 1000df750; end: 1000df75b;  */

undefined8 FUN_1000df750(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1000df75c; end: 1000df77f;  */

void FUN_1000df75c(long param_1)

{
  FUN_1000df750();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1000df780; end: 1000df79b;  */

void FUN_1000df780(void)

{
  return;
}



/* Entry: 1000df79c; end: 1000df7c3;  */

undefined8 * FUN_1000df79c(undefined8 *param_1)

{
  func_0x000107c60d60(*param_1);
  return param_1;
}



/* Entry: 1000df7c4; end: 1000df7f7;  */

void FUN_1000df7c4(void)

{
  return;
}



/* Entry: 1000df7f8; end: 1000df89f; +[SCNCofCircumstanceEngineRegistry setCircumstanceEngine:] */

void FUN_1000df7f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [16];
  
  func_0x000107c61174(param_3);
  FUN_1000df8a0(auStack_40,param_3);
  FUN_1000dfb14(auStack_40);
  func_0x0001000dfc28();
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1000df8a0; end: 1000df957;  */

void FUN_1000df8a0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    func_0x000107c61174(param_2);
    ppuStack_38 = &PTR_DAT_110cbb3f0;
    lStack_40 = param_2;
    FUN_1000de59c(&uStack_30,&ppuStack_38,&lStack_40,FUN_1000df958);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    FUN_1000df524(&uStack_30);
    func_0x000107c61170(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_1000dfa54(&uStack_50);
  }
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 1000df958; end: 1000dfa53;  */

void FUN_1000df958(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  func_0x000107c60e20();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_110cbb430;
  puVar4[3] = &PTR_DAT_110cbb4b0;
  puVar5 = puVar8;
  func_0x000107c61174();
  func_0x000107c6110c();
  puVar6 = puVar5;
  FUN_1000de520();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x000107c61174(puVar8);
  puVar4[6] = puVar8;
  func_0x000107c61108(puVar5);
  func_0x000107c61170(puVar8);
  puVar4[3] = &PTR_DAT_110cbb480;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_1000dfa54(&uStack_50);
  return;
}



/* Entry: 1000dfa54; end: 1000dfa7f;  */

long FUN_1000dfa54(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1000dfa80; end: 1000dfb13;  */

undefined8 FUN_1000dfa80(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((bRam000000011383d780 & 1) == 0) {
    iVar1 = 0x1383d780;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      uVar2 = 0xc0;
      func_0x000107c60e20();
      func_0x000107c60ee4();
      func_0x0001000dfb58(uVar2);
      uRam000000011383d778 = uVar2;
      func_0x000107c60e4c(0x11383d780);
    }
  }
  return uRam000000011383d778;
}



/* Entry: 1000dfb14; end: 1000dfb87;  */

void FUN_1000dfb14(long param_1)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = param_1;
  FUN_1000dfa80();
  lStack_28 = lVar1 + 8;
  func_0x000107c60d5c();
  func_0x0001000dfbb8(lVar1 + 0xb0,param_1);
  FUN_1000df79c(&lStack_28);
  return;
}



/* Entry: 1000dfb88; end: 1000dfb93;  */

undefined8 FUN_1000dfb88(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1000dfb94; end: 1000dfc13;  */

void FUN_1000dfb94(long param_1)

{
  FUN_1000dfb88();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1000dfc14; end: 1000dfc2f;  */

void FUN_1000dfc14(void)

{
  return;
}



/* Entry: 1000dfc30; end: 1000dfc87; -[_TtC38SCCompositeConfigValueProviderServices38SCCompositeConfigValueProviderServices initWithParamsProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000dfc30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_11305ede0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c615f0(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1000dfc88; end: 1000dfccf; -[_TtC38SCCompositeConfigValueProviderServices38SCCompositeConfigValueProviderServices paramsProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000dfc88(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305ede0;
  func_0x000107c61428(param_1 + _DAT_11305ede0,auStack_38,0,0);
  func_0x000107c615f0(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1000dfcd0; end: 1000dfd6b; -[SCCompositeConfigurationDelegate initWithValueProviders:valueProvidersLen:paramsProvider:] */

undefined1 *
FUN_1000dfcd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_112702ef0;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 1000dfd6c; end: 1000dfebf; -[SCCompositeConfiguration initWithDelegate:] */

undefined8 *
FUN_1000dfd6c(undefined8 param_1,undefined8 param_2,undefined **param_3,undefined ***param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined ***pppuVar5;
  undefined **ppuVar6;
  undefined *unaff_x21;
  undefined **ppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined **ppuStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = param_3;
  func_0x000107c61174(param_3);
  puStack_50 = PTR_PTR_112702ef8;
  puVar1 = &uStack_58;
  uStack_58 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    func_0x000107c61170(uVar2);
    unaff_x21 = PTR_PTR_1126ae720;
    func_0x000107c3e4fc();
    func_0x000107c61180();
    ppuStack_48 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2748;
    ppuVar6 = &puStack_40;
    param_4 = &ppuStack_48;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_40 = unaff_x21;
    func_0x000107c419ac();
    func_0x000107c61180();
    uVar2 = puVar1[1];
    puVar1[1] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61170(unaff_x21);
  }
  ppuVar4 = param_3;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar1;
  }
  func_0x000107c60e78();
  func_0x000107c61170(unaff_x21);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c60bd8();
  pppuVar5 = &ppuStack_a0;
  func_0x000107c61174(ppuVar6);
  func_0x000107c61174(param_4);
  puStack_98 = PTR_PTR_112702ee0;
  ppuStack_a0 = ppuVar4;
  func_0x000107c61154(&ppuStack_a0,PTR_s_init_1125d9248);
  if (pppuVar5 != (undefined ***)0x0) {
    func_0x000107c61174(ppuVar6);
    uVar2 = pppuVar5[1];
    pppuVar5[1] = ppuVar6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = pppuVar5[3];
    pppuVar5[3] = (undefined **)param_4;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x000107c61160();
    uVar2 = pppuVar5[2];
    pppuVar5[2] = (undefined **)puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(ppuVar6);
  return pppuVar5;
}



/* Entry: 1000dfec0; end: 1000dff7f; -[SCCompositeConfigurationMarshaller initWithConfiguration:configMetric:] */

undefined1 *
FUN_1000dfec0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_112702ee0;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1000dff80; end: 1000dffef; +[SCNConfigConfigurationRegistry setCompositeConfig:] */

void FUN_1000dff80(void)

{
  undefined1 auStack_40 [16];
  
  FUN_1000de3a8();
  FUN_1000de424();
  FUN_1000dfff0(auStack_40);
  func_0x0001000df7d8();
  func_0x0001000df7e0();
  return;
}



/* Entry: 1000dfff0; end: 1000e001b;  */

void FUN_1000dfff0(void)

{
  long unaff_x20;
  
  func_0x0001000df5e0();
  func_0x0001000df6ec();
  func_0x0001000df6fc(unaff_x20 + 0xc0);
  func_0x0001000df794();
  return;
}



/* Entry: 1000e001c; end: 1000e005f;  */

void FUN_1000e001c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1000e0060; end: 1000e0067;  */

void FUN_1000e0060(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  FUN_1000e0068();
  func_0x000107c613fc();
  uVar2 = 0;
  FUN_100097458(0);
  func_0x000107c610f8();
  FUN_1000e00e4(uVar1,&PTR_DAT_1103c73d0,uVar2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1000e0068; end: 1000e0087;  */

void FUN_1000e0068(void)

{
  func_0x000107c61168(&PTR_PTR_112da31b8);
  return;
}



/* Entry: 1000e0088; end: 1000e00e3;  */

void FUN_1000e0088(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  FUN_1000e0068();
  func_0x000107c613fc();
  uVar2 = 0;
  FUN_100097458(0);
  func_0x000107c610f8();
  FUN_1000e00e4(uVar1,&PTR_DAT_1103c73d0,uVar2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1000e00e4; end: 1000e013f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e00e4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f53120);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1000e0140; end: 1000e01c7; +[SCRequestManager shared] */

void FUN_1000e0140(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  uStack_38 = 0x1000e0340;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam00000001137f45b0 != -1) {
    FUN_10002a2fc(0x1137f45b0,&puStack_48);
  }
  uVar1 = uRam00000001137f45b8;
  func_0x000107c61174(uRam00000001137f45b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1000e01c8; end: 1000e023f; -[_TtC24SnapTokenStorageServices24SnapTokenStorageServices initWithStore:reader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e01c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_11305f238) = param_3;
  *(undefined8 *)(param_1 + _DAT_11305f240) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 1000e0240; end: 1000e0273;  */

void FUN_1000e0240(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1000e0274; end: 1000e040f; -[SCLegacyUserSessionRepository initWithApplicationPreferences:legacyUserStateLogger:snapTokenReader:] */

undefined1 *
FUN_1000e0274(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_1126ed920;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1000e0410; end: 1000e04a7; -[SCRequestManager init] */

undefined1 * FUN_1000e0410(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112706020;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126dff20;
    func_0x000107c610fc();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c53fcc(*(undefined8 *)((long)puVar1 + 8));
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    func_0x000107c4f7e8(uVar3);
    func_0x000107c61180();
    func_0x000107c4e524();
    func_0x000107c61170(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1000e04a8; end: 1000e0563; -[SCNetworkManager init] */

undefined1 * FUN_1000e04a8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112706018;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    func_0x000107c45454();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126dff18;
    func_0x000107c610f4();
    func_0x000107c48210();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c53fcc(*(undefined8 *)((long)puVar1 + 8));
    func_0x000107c3acf8(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1000e0564; end: 1000e088b; -[SCRequestScheduler initWithQueuePerformer:] */

undefined8 * FUN_1000e0564(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  puStack_68 = PTR_PTR_112706030;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b7f08;
    func_0x000107c610fc();
    uVar4 = puVar1[7];
    puVar1[7] = puVar2;
    func_0x000107c61170(uVar4);
    func_0x000107c3c38c(puVar1);
    puVar2 = PTR_PTR_1126dfeb8;
    func_0x000107c508e0();
    func_0x000107c61180();
    uVar4 = puVar1[1];
    puVar1[1] = puVar2;
    func_0x000107c61170(uVar4);
    puVar2 = PTR_PTR_1126b19f8;
    func_0x000107c4cdf0();
    func_0x000107c61180();
    uVar4 = puVar1[2];
    puVar1[2] = puVar2;
    func_0x000107c61170(uVar4);
    func_0x000107c3c694(puVar1);
    func_0x000107c61174(param_3);
    uVar4 = puVar1[0x12];
    puVar1[0x12] = param_3;
    func_0x000107c61170(uVar4);
    puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x000107c5a790();
    func_0x000107c61180();
    func_0x000107c61144(auStack_78,puVar1);
    puVar2 = PTR_PTR_1126ae720;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_1005ae588;
    puStack_90 = &UNK_110ccc330;
    func_0x000107c6111c(auStack_80,auStack_78);
    func_0x000107c61174(puVar3);
    puStack_88 = puVar3;
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar4 = puVar1[0x13];
    puVar1[0x13] = puVar2;
    func_0x000107c61170(uVar4);
    puVar2 = PTR_PTR_1126ae720;
    func_0x000107c6111c(auStack_b0,auStack_78);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar4 = puVar1[8];
    puVar1[8] = puVar2;
    func_0x000107c61170(uVar4);
    func_0x000107c61120(auStack_b0);
    func_0x000107c61170(puStack_88);
    func_0x000107c61120(auStack_80);
    func_0x000107c61120(auStack_78);
    func_0x000107c61170(puVar3);
  }
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1000e088c; end: 1000e08ff; -[SCGrapheneContentDeliveryMetric2 init] */

undefined1 * FUN_1000e088c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112706098;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1000e0900; end: 1000e0993; -[SCRequestScheduler _resetTasks] */

/* WARNING: Possible PIC construction at 0x0001000e0964: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000e0938: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001000e0968) */

void FUN_1000e0900(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (*(long *)(param_1 + 0x78) == 0) {
    puVar1 = PTR_PTR_1126dff78;
    func_0x000107c610fc();
    puVar2 = *(undefined **)(param_1 + 0x78);
    *(undefined **)(param_1 + 0x78) = puVar1;
  }
  else {
    func_0x000107c504e8();
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    func_0x000107c61180();
    func_0x000107c57f70(param_1,param_2,puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1000e0994; end: 1000e0a6f; -[SCRequestManagerRunningTaskState init] */

undefined1 * FUN_1000e0994(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112706058;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126dfe18;
    func_0x000107c610fc();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    func_0x000107c470d0();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    func_0x000107c61170(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1000e0a70; end: 1000e0b37; -[SCRequestConcurrencyCounter init] */

undefined1 * FUN_1000e0a70(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112705f38;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    func_0x000107c45454();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    func_0x000107c61170(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1000e0b38; end: 1000e0b6b;  */

void FUN_1000e0b38(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1000e0b6c; end: 1000e0b77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e0b6c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x20;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  FUN_100083b20(&uStack_58,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  puVar1 = PTR_PTR_1126c5598;
  func_0x000107c61168(PTR_PTR_1126c5598);
  func_0x000107c5a9bc();
  func_0x000107c61180();
  FUN_100083b20(&uStack_60);
  uVar2 = uStack_60;
  func_0x000107c444a4(uStack_60);
  func_0x000107c61180();
  func_0x000107c61170(uStack_60);
  FUN_100083b20(&lStack_68);
  uVar3 = *(undefined8 *)(lStack_68 + _DAT_11305f240);
  func_0x000107c61174(uVar3);
  func_0x000107c61170(lStack_68);
  FUN_100083b20(&lStack_70);
  uVar4 = *(undefined8 *)(lStack_70 + _DAT_11305f238);
  func_0x000107c61174(uVar4);
  func_0x000107c61170(lStack_70);
  puVar5 = PTR_PTR_1126a6f28;
  func_0x000107c610f8();
  func_0x000107c45744();
  func_0x000107c61170(uStack_58);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *param_1 = puVar5;
  return;
}



/* Entry: 1000e0b78; end: 1000e0cc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e0b78(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  FUN_100083b20(&uStack_58);
  puVar1 = PTR_PTR_1126c5598;
  func_0x000107c61168(PTR_PTR_1126c5598);
  func_0x000107c5a9bc();
  func_0x000107c61180();
  FUN_100083b20(&uStack_60);
  uVar2 = uStack_60;
  func_0x000107c444a4(uStack_60);
  func_0x000107c61180();
  func_0x000107c61170(uStack_60);
  FUN_100083b20(&lStack_68);
  uVar3 = *(undefined8 *)(lStack_68 + _DAT_11305f240);
  func_0x000107c61174(uVar3);
  func_0x000107c61170(lStack_68);
  FUN_100083b20(&lStack_70);
  uVar4 = *(undefined8 *)(lStack_70 + _DAT_11305f238);
  func_0x000107c61174(uVar4);
  func_0x000107c61170(lStack_70);
  puVar5 = PTR_PTR_1126a6f28;
  func_0x000107c610f8();
  func_0x000107c45744();
  func_0x000107c61170(uStack_58);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *param_1 = puVar5;
  return;
}



/* Entry: 1000e0cc8; end: 1000e0f67;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1000e0cc8(undefined8 *param_1,undefined8 param_2,uint *param_3,ulong param_4,
                  undefined4 *param_5)

{
  ulong uVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *******pppppppuVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined2 uStack_d8;
  undefined1 uStack_d6;
  undefined1 uStack_c1;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined1 uStack_a9;
  uint uStack_a8;
  undefined8 uStack_a4;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *******pppppppuStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  
  if (param_5 == (undefined4 *)0x0) {
    if ((((param_3 == (uint *)0x0) || (2000000000 < param_4)) || (param_4 < 0x5a)) ||
       (uStack_a8 = *param_3, uStack_a8 - 4 < 0xfffffffe)) goto LAB_1000e0d8c;
    uVar1 = 0x5e;
    if (uStack_a8 < 3) {
      uVar1 = 0x5a;
    }
    if (param_4 < uVar1) goto LAB_1000e0d8c;
LAB_1000e0db4:
    bVar2 = 2 < uStack_a8;
    uStack_4c = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_54 = 0;
    pppppppuStack_60 = (undefined8 *******)0x0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_a4 = *(undefined8 *)(param_3 + 1);
    uStack_98 = *(undefined8 *)(param_3 + 3);
    uStack_a9 = 0x10;
    uStack_b8 = *(undefined8 *)(param_3 + 7);
    uStack_c0 = *(undefined8 *)(param_3 + 5);
    uStack_b0 = 0;
    FUN_100066230(&uStack_90,&uStack_c0);
    FUN_1000e0f68();
    func_0x000107c60c50(&uStack_c0,param_3 + 9,0x34);
    puVar3 = &uStack_c0;
    FUN_1000e0ff8(puVar3,0,0xffffffffffffffff);
    if (puVar3 == (undefined8 *)0xffffffffffffffff) {
      func_0x00010533bd1c();
      func_0x00010533bdf8();
    }
    else {
      FUN_1000e1048(&uStack_d8,&uStack_c0,0,(long)puVar3 + 1);
    }
    FUN_100066230(&uStack_78,&uStack_d8);
    FUN_1000e1074();
    uStack_c1 = 2;
    uStack_d8 = (undefined2)param_3[0x16];
    uStack_d6 = 0;
    FUN_100066230(&pppppppuStack_60,&uStack_d8);
    FUN_1000e1074();
    pppppppuVar4 = &pppppppuStack_60;
    FUN_1000e107c(&pppppppuStack_60,&UNK_10dd97910);
    if (((ulong)pppppppuVar4 & 1) == 0) {
      uVar1 = CONCAT44(uStack_54,uStack_58);
      pppppppuVar4 = pppppppuStack_60;
      if (-1 < (char)uStack_4c._3_1_) {
        uVar1 = (ulong)uStack_4c._3_1_;
        pppppppuVar4 = &pppppppuStack_60;
      }
      if (uVar1 != 0) {
        for (uVar6 = 0; uVar1 != uVar6; uVar6 = uVar6 + 1) {
          if (*(char *)((long)pppppppuVar4 + uVar6) != '\0') {
            if (uVar6 != 0xffffffffffffffff) goto joined_r0x0001000e0efc;
            break;
          }
        }
      }
    }
    if ((char)uStack_4c._3_1_ < '\0') {
      *(undefined1 *)pppppppuStack_60 = 0;
      uStack_58 = 0;
      uStack_54 = 0;
    }
    else {
      pppppppuStack_60 = (undefined8 *******)((ulong)pppppppuStack_60 & 0xffffffffffffff00);
      uStack_4c._0_4_ = (uint)(uint3)uStack_4c;
    }
joined_r0x0001000e0efc:
    if (bVar2) {
      uStack_4c = CONCAT44(*(uint *)((long)param_3 + 0x5a),(uint)uStack_4c);
      if (100000 < *(uint *)((long)param_3 + 0x5a)) {
        if (param_5 != (undefined4 *)0x0) {
          *param_5 = 5;
        }
        *param_1 = 0;
        param_1[1] = 0;
        goto LAB_1000e0f38;
      }
    }
    FUN_1000e1148(param_1,&uStack_a8);
LAB_1000e0f38:
    FUN_1000e0f68();
    FUN_1000e128c(&uStack_a8);
    return;
  }
  *param_5 = 0;
  if (param_3 == (uint *)0x0) {
    uVar5 = 1;
  }
  else if (param_4 < 0x77359401) {
    if (0x59 < param_4) {
      uStack_a8 = *param_3;
      if (uStack_a8 - 4 < 0xfffffffe) {
        uVar5 = 4;
        goto LAB_1000e0d88;
      }
      uVar1 = 0x5e;
      if (uStack_a8 < 3) {
        uVar1 = 0x5a;
      }
      if (uVar1 <= param_4) goto LAB_1000e0db4;
    }
    uVar5 = 2;
  }
  else {
    uVar5 = 3;
  }
LAB_1000e0d88:
  *param_5 = uVar5;
LAB_1000e0d8c:
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 1000e0f68; end: 1000e0f6f;  */

void FUN_1000e0f68(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (&stack0x00000020);
  return;
}



/* Entry: 1000e0f70; end: 1000e0ff7; +[SCAuthTokenManager shared] */

void FUN_1000e0f70(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  uStack_38 = 0x1000e1168;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam00000001137f46c0 != -1) {
    FUN_10002a2fc(0x1137f46c0,&puStack_48);
  }
  uVar1 = uRam00000001137f46c8;
  func_0x000107c61174(uRam00000001137f46c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1000e0ff8; end: 1000e1047;  */

ulong FUN_1000e0ff8(undefined8 *param_1,char param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = (ulong)*(char *)((long)param_1 + 0x17);
  if ((long)uVar2 < 0) {
    uVar2 = param_1[1];
    param_1 = (undefined8 *)*param_1;
  }
  if (param_3 < uVar2) {
    uVar2 = param_3 + 1;
  }
  do {
    if (uVar2 == 0) {
      return 0xffffffffffffffff;
    }
    lVar1 = uVar2 - 1;
    uVar2 = uVar2 - 1;
  } while (*(char *)((long)param_1 + lVar1) == param_2);
  return uVar2;
}



/* Entry: 1000e1048; end: 1000e1073;  */

void FUN_1000e1048(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uStack_11;
  
  func_0x000107c60c98(param_1,param_2,param_3,param_4,&uStack_11);
  return;
}



/* Entry: 1000e1074; end: 1000e107b;  */

void FUN_1000e1074(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (&stack0x00000008);
  return;
}



/* Entry: 1000e107c; end: 1000e10e7;  */

bool FUN_1000e107c(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  byte bVar4;
  byte bVar5;
  long *plVar6;
  
  bVar4 = *(byte *)((long)param_1 + 0x17);
  uVar1 = param_1[1];
  if (-1 < (char)bVar4) {
    uVar1 = (ulong)bVar4;
  }
  bVar5 = *(byte *)((long)param_2 + 0x17);
  uVar2 = param_2[1];
  if (-1 < (char)bVar5) {
    uVar2 = (ulong)bVar5;
  }
  if (uVar1 == uVar2) {
    plVar6 = (long *)*param_1;
    if (-1 < (char)bVar4) {
      plVar6 = param_1;
    }
    plVar3 = (long *)*param_2;
    if (-1 < (char)bVar5) {
      plVar3 = param_2;
    }
    func_0x000107c610b0(plVar6,plVar3);
    return (int)plVar6 == 0;
  }
  return false;
}



/* Entry: 1000e10e8; end: 1000e1147;  */

void FUN_1000e10e8(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined1 uStack_51;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001000cb560();
  FUN_1000cb690();
  FUN_1000e1190();
  FUN_1000e123c(uStack_30,param_2);
  func_0x0001000cb6f8();
  FUN_1000e127c();
  func_0x0001000cb720(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x00010533bc84();
  FUN_1000e127c();
  func_0x00010533bbe8();
  pcStack_48 = FUN_1000e1148;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_1000e10e8(&uStack_51,uStack_30);
  return;
}



/* Entry: 1000e1148; end: 1000e118f;  */

void FUN_1000e1148(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_1000e10e8(&uStack_11,param_1);
  return;
}



/* Entry: 1000e1190; end: 1000e11af;  */

void FUN_1000e1190(void)

{
  func_0x0001000cb69c();
  FUN_1000e11b0();
  FUN_1000cb6e4();
  return;
}



/* Entry: 1000e11b0; end: 1000e11cb;  */

void FUN_1000e11b0(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((ulong)param_2 >> 0x39 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)((long)param_2 << 7);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001000da72c();
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x000107c60c94(param_1 + 3,param_2 + 3);
  func_0x000107c60c94(unaff_x19 + 0x30,unaff_x20 + 0x30);
  func_0x000107c60c94(unaff_x19 + 0x48,unaff_x20 + 0x48);
  *(undefined4 *)(unaff_x19 + 0x60) = *(undefined4 *)(unaff_x20 + 0x60);
  return;
}



/* Entry: 1000e11cc; end: 1000e123b;  */

void FUN_1000e11cc(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0001000da72c();
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x000107c60c94(param_1 + 3,param_2 + 3);
  func_0x000107c60c94(unaff_x19 + 0x30,unaff_x20 + 0x30);
  func_0x000107c60c94(unaff_x19 + 0x48,unaff_x20 + 0x48);
  *(undefined4 *)(unaff_x19 + 0x60) = *(undefined4 *)(unaff_x20 + 0x60);
  return;
}



/* Entry: 1000e123c; end: 1000e127b;  */

undefined8 * FUN_1000e123c(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_DAT_11087c5d0;
  param_1[1] = 0;
  FUN_1000e11cc(param_1 + 3);
  return param_1;
}



/* Entry: 1000e127c; end: 1000e128b;  */

void FUN_1000e127c(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1000e128c; end: 1000e12bb;  */

long FUN_1000e128c(long param_1)

{
  func_0x000107c60ca0(param_1 + 0x48);
  func_0x000107c60ca0(param_1 + 0x30);
  FUN_1000e12bc();
  return param_1;
}



/* Entry: 1000e12bc; end: 1000e12d7;  */

void FUN_1000e12bc(void)

{
  long unaff_x19;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (unaff_x19 + 0x18);
  return;
}



/* Entry: 1000e12d8; end: 1000e131f;  */

void FUN_1000e12d8(void)

{
  func_0x0001000dee18();
  func_0x0001000e12fc();
  return;
}



/* Entry: 1000e1320; end: 1000e135f;  */

void FUN_1000e1320(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar1 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  param_2[5] = 0;
  param_2[6] = 0;
  uVar1 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar1;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  return;
}



/* Entry: 1000e1360; end: 1000e137b;  */

void FUN_1000e1360(long param_1)

{
  FUN_1000e1320();
  *(undefined1 *)(param_1 + 0x48) = 1;
  return;
}



/* Entry: 1000e137c; end: 1000e13bb;  */

void FUN_1000e137c(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c610ec(*(long *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  }
  FUN_1000e13bc(param_1 + 0x38);
  func_0x0001000e12fc(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 1000e13bc; end: 1000e13df;  */

void FUN_1000e13bc(long param_1)

{
  func_0x0001000d04c0();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1000e13e0; end: 1000e13e7;  */

void FUN_1000e13e0(void)

{
  return;
}



/* Entry: 1000e13e8; end: 1000e14eb;  */

void FUN_1000e13e8(undefined8 param_1,undefined8 param_2,long param_3,long *param_4,ulong param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  int *piVar6;
  int *piVar7;
  ulong uVar8;
  ulong uVar9;
  int iStack_84;
  int aiStack_80 [12];
  
  if ((((*param_4 != 0) && (uVar4 = *(uint *)(*param_4 + 8), uVar9 = (ulong)uVar4, -1 < (int)uVar4))
      && (uVar5 = param_5 - uVar9, uVar9 <= param_5)) && ((uVar5 & 0xc) == 0)) {
    aiStack_80[2] = 0;
    aiStack_80[3] = 0;
    aiStack_80[0] = 0;
    aiStack_80[1] = 0;
    aiStack_80[6] = 0;
    aiStack_80[7] = 0;
    aiStack_80[4] = 0;
    aiStack_80[5] = 0;
    aiStack_80[8] = 0x3f800000;
    FUN_1000e14ec(aiStack_80,uVar5 >> 4);
    piVar7 = (int *)(uVar9 + param_3 + 8);
    for (uVar8 = 0; uVar8 < uVar5 >> 2; uVar8 = uVar8 + 4) {
      iStack_84 = piVar7[-2];
      iVar2 = piVar7[-1];
      iVar1 = *piVar7;
      iVar3 = piVar7[1];
      piVar6 = aiStack_80;
      FUN_1000e1b8c(piVar6,&iStack_84);
      *piVar6 = iVar1;
      piVar6[1] = iVar3 - iVar1;
      piVar6[2] = iVar2;
      piVar7 = piVar7 + 4;
    }
    FUN_1000e2d50(param_1,aiStack_80);
    func_0x0001000e2e8c(aiStack_80);
    return;
  }
  func_0x00010533b9e0(param_1,&stack0xffffffffffffffef);
  return;
}



/* Entry: 1000e14ec; end: 1000e14ff;  */

void FUN_1000e14ec(long *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  
  plVar3 = (long *)(long)((float)param_2 / *(float *)(param_1 + 4));
  plVar2 = param_1;
  plVar4 = plVar3;
  if ((long)plVar3 - 1U == 0) {
    plVar3 = (long *)0x2;
  }
  else if (((ulong)plVar3 & (long)plVar3 - 1U) != 0) {
    func_0x000107c60c44();
    plVar2 = plVar3;
  }
  plVar8 = (long *)param_1[1];
  if (plVar3 <= plVar8) {
    if (plVar3 < plVar8) {
      plVar2 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((plVar8 < (long *)0x3) || (((ulong)plVar8 & (long)plVar8 - 1U) != 0)) {
        func_0x000107c60c44();
      }
      else if ((long *)0x1 < plVar2) {
        plVar2 = (long *)(1L << (-LZCOUNT((long)plVar2 - 1) & 0x3fU));
      }
      if (plVar3 <= plVar2) {
        plVar3 = plVar2;
      }
      if (plVar3 < plVar8) goto LAB_1000e1548;
    }
    return;
  }
LAB_1000e1548:
  FUN_1000e15c4();
  if (plVar4 == (long *)0x0) {
    func_0x0001000e16f0(plVar2);
    plVar2[1] = 0;
  }
  else {
    plVar3 = plVar2 + 1;
    FUN_1000e15d0(plVar3);
    func_0x0001000e16f0(plVar2,plVar3);
    plVar2[1] = (long)plVar4;
    lVar5 = *plVar2;
    for (plVar3 = (long *)0x0; plVar4 != plVar3; plVar3 = (long *)((long)plVar3 + 1)) {
      *(undefined8 *)(lVar5 + (long)plVar3 * 8) = 0;
    }
    plVar3 = (long *)plVar2[2];
    if (plVar3 != (long *)0x0) {
      plVar8 = (long *)plVar3[1];
      uVar6 = (long)plVar4 - 1;
      uVar1 = 0;
      if (plVar4 != (long *)0x0) {
        uVar1 = (ulong)plVar8 / (ulong)plVar4;
      }
      plVar7 = plVar8;
      if (plVar4 <= plVar8) {
        plVar7 = (long *)((long)plVar8 - uVar1 * (long)plVar4);
      }
      if (((ulong)plVar4 & uVar6) == 0) {
        plVar7 = (long *)((ulong)plVar8 & uVar6);
      }
      *(long **)(lVar5 + (long)plVar7 * 8) = plVar2 + 2;
      while (plVar2 = plVar3, plVar3 = (long *)*plVar2, plVar3 != (long *)0x0) {
        plVar8 = (long *)plVar3[1];
        if (((ulong)plVar4 & uVar6) == 0) {
          plVar8 = (long *)((ulong)plVar8 & uVar6);
        }
        else if (plVar4 <= plVar8) {
          uVar1 = 0;
          if (plVar4 != (long *)0x0) {
            uVar1 = (ulong)plVar8 / (ulong)plVar4;
          }
          plVar8 = (long *)((long)plVar8 - uVar1 * (long)plVar4);
        }
        if (plVar8 != plVar7) {
          if (*(long *)(lVar5 + (long)plVar8 * 8) == 0) {
            *(long **)(lVar5 + (long)plVar8 * 8) = plVar2;
            plVar7 = plVar8;
          }
          else {
            *plVar2 = *plVar3;
            *plVar3 = **(undefined8 **)(lVar5 + (long)plVar8 * 8);
            **(long **)(lVar5 + (long)plVar8 * 8) = (long)plVar3;
            plVar3 = plVar2;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1000e1500; end: 1000e15c3;  */

void FUN_1000e1500(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  plVar2 = param_1;
  plVar3 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    func_0x000107c60c44();
    plVar2 = param_2;
  }
  plVar8 = (long *)param_1[1];
  if (param_2 <= plVar8) {
    if (param_2 < plVar8) {
      plVar2 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((plVar8 < (long *)0x3) || (((ulong)plVar8 & (long)plVar8 - 1U) != 0)) {
        func_0x000107c60c44();
      }
      else if ((long *)0x1 < plVar2) {
        plVar2 = (long *)(1L << (-LZCOUNT((long)plVar2 - 1) & 0x3fU));
      }
      if (param_2 <= plVar2) {
        param_2 = plVar2;
      }
      if (param_2 < plVar8) goto LAB_1000e1548;
    }
    return;
  }
LAB_1000e1548:
  FUN_1000e15c4();
  if (plVar3 == (long *)0x0) {
    func_0x0001000e16f0(plVar2);
    plVar2[1] = 0;
  }
  else {
    plVar8 = plVar2 + 1;
    FUN_1000e15d0(plVar8);
    func_0x0001000e16f0(plVar2,plVar8);
    plVar2[1] = (long)plVar3;
    lVar4 = *plVar2;
    for (plVar8 = (long *)0x0; plVar3 != plVar8; plVar8 = (long *)((long)plVar8 + 1)) {
      *(undefined8 *)(lVar4 + (long)plVar8 * 8) = 0;
    }
    plVar8 = (long *)plVar2[2];
    if (plVar8 != (long *)0x0) {
      plVar6 = (long *)plVar8[1];
      uVar5 = (long)plVar3 - 1;
      uVar1 = 0;
      if (plVar3 != (long *)0x0) {
        uVar1 = (ulong)plVar6 / (ulong)plVar3;
      }
      plVar7 = plVar6;
      if (plVar3 <= plVar6) {
        plVar7 = (long *)((long)plVar6 - uVar1 * (long)plVar3);
      }
      if (((ulong)plVar3 & uVar5) == 0) {
        plVar7 = (long *)((ulong)plVar6 & uVar5);
      }
      *(long **)(lVar4 + (long)plVar7 * 8) = plVar2 + 2;
      while (plVar2 = plVar8, plVar8 = (long *)*plVar2, plVar8 != (long *)0x0) {
        plVar6 = (long *)plVar8[1];
        if (((ulong)plVar3 & uVar5) == 0) {
          plVar6 = (long *)((ulong)plVar6 & uVar5);
        }
        else if (plVar3 <= plVar6) {
          uVar1 = 0;
          if (plVar3 != (long *)0x0) {
            uVar1 = (ulong)plVar6 / (ulong)plVar3;
          }
          plVar6 = (long *)((long)plVar6 - uVar1 * (long)plVar3);
        }
        if (plVar6 != plVar7) {
          if (*(long *)(lVar4 + (long)plVar6 * 8) == 0) {
            *(long **)(lVar4 + (long)plVar6 * 8) = plVar2;
            plVar7 = plVar6;
          }
          else {
            *plVar2 = *plVar8;
            *plVar8 = **(undefined8 **)(lVar4 + (long)plVar6 * 8);
            **(long **)(lVar4 + (long)plVar6 * 8) = (long)plVar8;
            plVar8 = plVar2;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1000e15c4; end: 1000e15cf;  */

void FUN_1000e15c4(void)

{
  return;
}



/* Entry: 1000e15d0; end: 1000e15eb;  */

void FUN_1000e15d0(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 >> 0x3d != 0) {
    func_0x000104bd35f4();
    if (param_2 == 0) {
      func_0x0001000e16f0(param_1);
      param_1[1] = 0;
    }
    else {
      plVar3 = param_1 + 1;
      FUN_1000e15d0(plVar3);
      func_0x0001000e16f0(param_1,plVar3);
      param_1[1] = param_2;
      lVar1 = *param_1;
      for (uVar2 = 0; param_2 != uVar2; uVar2 = uVar2 + 1) {
        *(undefined8 *)(lVar1 + uVar2 * 8) = 0;
      }
      plVar3 = (long *)param_1[2];
      if (plVar3 != (long *)0x0) {
        uVar6 = plVar3[1];
        uVar5 = param_2 - 1;
        uVar2 = 0;
        if (param_2 != 0) {
          uVar2 = uVar6 / param_2;
        }
        uVar7 = uVar6;
        if (param_2 <= uVar6) {
          uVar7 = uVar6 - uVar2 * param_2;
        }
        if ((param_2 & uVar5) == 0) {
          uVar7 = uVar6 & uVar5;
        }
        *(long **)(lVar1 + uVar7 * 8) = param_1 + 2;
        while (plVar4 = plVar3, plVar3 = (long *)*plVar4, plVar3 != (long *)0x0) {
          uVar2 = plVar3[1];
          if ((param_2 & uVar5) == 0) {
            uVar2 = uVar2 & uVar5;
          }
          else if (param_2 <= uVar2) {
            uVar6 = 0;
            if (param_2 != 0) {
              uVar6 = uVar2 / param_2;
            }
            uVar2 = uVar2 - uVar6 * param_2;
          }
          if (uVar2 != uVar7) {
            if (*(long *)(lVar1 + uVar2 * 8) == 0) {
              *(long **)(lVar1 + uVar2 * 8) = plVar4;
              uVar7 = uVar2;
            }
            else {
              *plVar4 = *plVar3;
              *plVar3 = **(undefined8 **)(lVar1 + uVar2 * 8);
              **(long **)(lVar1 + uVar2 * 8) = (long)plVar3;
              plVar3 = plVar4;
            }
          }
        }
      }
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(param_2 << 3);
  return;
}



/* Entry: 1000e15ec; end: 1000e16e7;  */

void FUN_1000e15ec(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    func_0x0001000e16f0(param_1);
    param_1[1] = 0;
  }
  else {
    plVar3 = param_1 + 1;
    FUN_1000e15d0(plVar3);
    func_0x0001000e16f0(param_1,plVar3);
    param_1[1] = param_2;
    lVar1 = *param_1;
    for (uVar2 = 0; param_2 != uVar2; uVar2 = uVar2 + 1) {
      *(undefined8 *)(lVar1 + uVar2 * 8) = 0;
    }
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      uVar6 = plVar3[1];
      uVar5 = param_2 - 1;
      uVar2 = 0;
      if (param_2 != 0) {
        uVar2 = uVar6 / param_2;
      }
      uVar7 = uVar6;
      if (param_2 <= uVar6) {
        uVar7 = uVar6 - uVar2 * param_2;
      }
      if ((param_2 & uVar5) == 0) {
        uVar7 = uVar6 & uVar5;
      }
      *(long **)(lVar1 + uVar7 * 8) = param_1 + 2;
      while (plVar4 = plVar3, plVar3 = (long *)*plVar4, plVar3 != (long *)0x0) {
        uVar2 = plVar3[1];
        if ((param_2 & uVar5) == 0) {
          uVar2 = uVar2 & uVar5;
        }
        else if (param_2 <= uVar2) {
          uVar6 = 0;
          if (param_2 != 0) {
            uVar6 = uVar2 / param_2;
          }
          uVar2 = uVar2 - uVar6 * param_2;
        }
        if (uVar2 != uVar7) {
          if (*(long *)(lVar1 + uVar2 * 8) == 0) {
            *(long **)(lVar1 + uVar2 * 8) = plVar4;
            uVar7 = uVar2;
          }
          else {
            *plVar4 = *plVar3;
            *plVar3 = **(undefined8 **)(lVar1 + uVar2 * 8);
            **(long **)(lVar1 + uVar2 * 8) = (long)plVar3;
            plVar3 = plVar4;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1000e16e8; end: 1000e1707; -[SCGrapheneServices grapheneRegistry] */

undefined8 FUN_1000e16e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1000e1708; end: 1000e183b; -[SCPreferencesBasedUserSessionRepository initWithApplicationPreferences:authTokenManager:grapheneRegistry:snapTokenReader:snapTokenStore:] */

undefined1 *
FUN_1000e1708(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puStack_48 = PTR_PTR_1126e9d08;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 8),param_3);
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x10),param_4);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    func_0x000107c61170(uVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x000107c3bdac();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined1 **)((long)puVar1 + 0x18) = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1000e183c; end: 1000e19cb; -[SCPreferencesBasedUserSessionRepository _loadUserSessionFromPreferences] */

void FUN_1000e183c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  
  lVar1 = param_1 + 8;
  func_0x000107c61148();
  lVar2 = lVar1;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + 8;
  func_0x000107c61148(lVar1);
  lVar3 = lVar1;
  func_0x000107c5db08();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + 8;
  func_0x000107c61148(lVar1);
  lVar4 = lVar1;
  func_0x000107c4a960();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_1 + 0x10;
    func_0x000107c61148();
    lVar5 = lVar1;
    func_0x000107c3e454();
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x000107c61170(lVar1);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar7 = uVar6;
    func_0x000107c44c14();
    func_0x000107c61170(uVar6);
    func_0x000107c3bdf4(param_1,param_2,lVar5 == 0,(uint)uVar7 ^ 1);
    if ((lVar5 != 0) || ((uint)uVar7 != 0)) {
      puVar8 = PTR_PTR_1126af970;
      func_0x000107c610f4(PTR_PTR_1126af970);
      param_1 = param_1 + 0x10;
      func_0x000107c61148(param_1);
      lVar1 = param_1;
      func_0x000107c3e454();
      func_0x000107c61180();
      func_0x000107c49274(puVar8,param_2,lVar2,lVar3,lVar1,lVar4);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(param_1);
      goto LAB_1000e1998;
    }
  }
  puVar8 = (undefined *)0x0;
LAB_1000e1998:
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1000e19cc; end: 1000e19df;  */

void FUN_1000e19cc(void)

{
  return;
}



/* Entry: 1000e19e0; end: 1000e1b8b;  */

undefined1  [16] FUN_1000e19e0(float param_1,float param_2,long *param_3,int *param_4)

{
  int iVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  undefined8 uVar3;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar4;
  ulong extraout_x8_01;
  long lVar5;
  long extraout_x8_02;
  ulong uVar6;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong unaff_x23;
  undefined1 auVar10 [16];
  long *aplStack_58 [3];
  
  iVar1 = *param_4;
  uVar7 = (ulong)iVar1;
  uVar9 = param_3[1];
  if (uVar9 != 0) {
    func_0x0001000e19d4();
    if ((bool)in_ZR) {
      unaff_x23 = extraout_x8 & uVar7;
    }
    else {
      unaff_x23 = uVar7;
      if (uVar9 <= uVar7) {
        uVar4 = 0;
        if (uVar9 != 0) {
          uVar4 = uVar7 / uVar9;
        }
        unaff_x23 = uVar7 - uVar4 * uVar9;
      }
    }
    plVar8 = *(long **)(*param_3 + unaff_x23 * 8);
    uVar4 = extraout_x8;
    if (plVar8 != (long *)0x0) {
      do {
        while( true ) {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_1000e1a84;
          uVar6 = plVar8[1];
          if (uVar6 != uVar7) break;
          if ((int)plVar8[2] == iVar1) {
            uVar3 = 0;
            aplStack_58[0] = plVar8;
            goto LAB_1000e1b64;
          }
        }
        if ((uVar9 & uVar4) == 0) {
          uVar6 = uVar6 & uVar4;
        }
        else if (uVar9 <= uVar6) {
          FUN_1000e1c88();
          uVar4 = extraout_x8_00;
          uVar6 = extraout_x9;
        }
      } while (uVar6 == unaff_x23);
    }
  }
LAB_1000e1a84:
  FUN_1000e15c4(aplStack_58);
  FUN_1000e1bc0();
  func_0x0001000e1c20();
  if ((uVar9 == 0) || (param_2 * (float)uVar9 < param_1)) {
    func_0x00010533bd90();
    uVar2 = uVar9 == 3;
    func_0x00010533bd78();
    FUN_1000e1500(param_3);
    uVar9 = param_3[1];
    func_0x0001000e19d4();
    if ((bool)uVar2) {
      unaff_x23 = extraout_x8_01 & uVar7;
    }
    else {
      unaff_x23 = uVar7;
      if (uVar9 <= uVar7) {
        uVar4 = 0;
        if (uVar9 != 0) {
          uVar4 = uVar7 / uVar9;
        }
        unaff_x23 = uVar7 - uVar4 * uVar9;
      }
    }
  }
  lVar5 = *param_3;
  plVar8 = *(long **)(lVar5 + unaff_x23 * 8);
  if (plVar8 == (long *)0x0) {
    param_3 = param_3 + 2;
    *aplStack_58[0] = *param_3;
    *param_3 = (long)aplStack_58[0];
    *(long **)(lVar5 + unaff_x23 * 8) = param_3;
    if (*aplStack_58[0] != 0) {
      uVar7 = *(ulong *)(*aplStack_58[0] + 8);
      if ((uVar9 & uVar9 - 1) == 0) {
        uVar7 = uVar7 & uVar9 - 1;
      }
      else if (uVar9 <= uVar7) {
        FUN_1000e1c88();
        lVar5 = extraout_x8_02;
        uVar7 = extraout_x9_00;
      }
      *(long **)(lVar5 + uVar7 * 8) = aplStack_58[0];
    }
  }
  else {
    *aplStack_58[0] = *plVar8;
    *plVar8 = (long)aplStack_58[0];
  }
  func_0x0001000e1c34();
  uVar3 = 1;
LAB_1000e1b64:
  auVar10._8_8_ = uVar3;
  auVar10._0_8_ = aplStack_58[0];
  return auVar10;
}



/* Entry: 1000e1b8c; end: 1000e1bbf;  */

long FUN_1000e1b8c(long param_1,undefined8 param_2)

{
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_1000e19e0(param_1,param_2,&UNK_10dd5b8f9,&uStack_18,&uStack_19);
  return param_1 + 0x14;
}



/* Entry: 1000e1bc0; end: 1000e1c13;  */

void FUN_1000e1bc0(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x20;
  func_0x000107c60e20();
  *param_1 = puVar1;
  param_1[1] = param_2 + 0x10;
  param_1[2] = 1;
  *puVar1 = 0;
  puVar1[1] = param_3;
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)*param_5;
  *(undefined4 *)((long)puVar1 + 0x1c) = 0;
  *(undefined8 *)((long)puVar1 + 0x14) = 0;
  return;
}


