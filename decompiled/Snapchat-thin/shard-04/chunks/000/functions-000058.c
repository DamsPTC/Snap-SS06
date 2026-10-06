/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103061290; end: 103061313;  */

void FUN_103061290(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f36d98 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR___s7SwiftUI5ColorVAA10ShapeStyleAAMc_1103496d8;
  func_0x000107c61520(PTR___s7SwiftUI5ColorVAA10ShapeStyleAAMc_1103496d8,
                      PTR___s7SwiftUI5ColorVN_1103496f0);
  puRam0000000112f36d98 = puVar1;
  return;
}



/* Entry: 103061314; end: 103061357;  */

void FUN_103061314(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    func_0x000107c61520(param_4,param_2);
    *param_1 = param_4;
  }
  return;
}



/* Entry: 103061358; end: 10306138b;  */

void FUN_103061358(undefined8 param_1,long param_2)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)(param_2 + 0x18);
  uStack_20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c614f4(&uStack_20,&UNK_10e741f1c,1);
  return;
}



/* Entry: 10306138c; end: 103061393;  */

void FUN_10306138c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbffa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericValueMetadata_11034f228)();
  return;
}



/* Entry: 103061394; end: 103061413;  */

void FUN_103061394(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_38 = &UNK_10db7f868;
  puStack_30 = &UNK_10db7f880;
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  func_0x000107c6143c();
  if (uVar2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c6153c(param_1,0,3,&puStack_38,param_1 + 0x20);
  }
  return;
}



/* Entry: 103061414; end: 1030614f3;  */

long * FUN_103061414(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  lVar2 = *(long *)(param_3 + 0x10);
  lVar5 = *(long *)(lVar2 + -8);
  uVar4 = (ulong)*(uint *)(lVar5 + 0x50) & 0xff;
  if (((uint)uVar4 < 8 && (*(uint *)(lVar5 + 0x50) & 0x100000) == 0) &&
      0xffffffffffffffe6 < (-uVar4 - 0xb | uVar4) - *(long *)(lVar5 + 0x40)) {
    lVar3 = *param_2;
    lVar1 = param_2[1];
    FUN_10305a4a0(lVar3,(char)lVar1);
    *param_1 = lVar3;
    *(char *)(param_1 + 1) = (char)lVar1;
    *(undefined1 *)((long)param_1 + 9) = *(undefined1 *)((long)param_2 + 9);
    (**(code **)(lVar5 + 0x10))
              ((long)param_1 + uVar4 + 10 & (uVar4 ^ 0xffffffffffffffff),
               (long)param_2 + uVar4 + 10 & (uVar4 ^ 0xffffffffffffffff),lVar2);
  }
  else {
    lVar2 = *param_2;
    *param_1 = lVar2;
    param_1 = (long *)(lVar2 + ((ulong)((uint)uVar4 & 0xf8 ^ 0x1f8) & uVar4 + 0x10));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 1030614f4; end: 10306153b;  */

void FUN_1030614f4(undefined8 *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  
  FUN_10305a544(*param_1,*(undefined1 *)(param_1 + 1));
  lVar1 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x000103061538. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))((long)param_1 + uVar2 + 10 & (uVar2 ^ 0xffffffffffffffff));
  return;
}



/* Entry: 10306153c; end: 10306164f;  */

undefined8 * FUN_10306153c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined1 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  FUN_10305a4a0(uVar4,uVar1);
  *param_1 = uVar4;
  *(undefined1 *)(param_1 + 1) = uVar1;
  *(undefined1 *)((long)param_1 + 9) = *(undefined1 *)((long)param_2 + 9);
  lVar2 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  (**(code **)(lVar2 + 0x10))
            (uVar3 + 10 + (long)param_1 & (uVar3 ^ 0xffffffffffffffff),
             uVar3 + 10 + (long)param_2 & (uVar3 ^ 0xffffffffffffffff));
  return param_1;
}



/* Entry: 103061650; end: 1030616af;  */

undefined8 * FUN_103061650(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)((long)param_1 + 9) = *(undefined1 *)((long)param_2 + 9);
  lVar1 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50);
  (**(code **)(lVar1 + 0x20))
            (uVar2 + 10 + (long)param_1 & (uVar2 ^ 0xffffffffffffffff),
             uVar2 + 10 + (long)param_2 & (uVar2 ^ 0xffffffffffffffff));
  return param_1;
}



/* Entry: 1030616b0; end: 10306172b;  */

undefined8 * FUN_1030616b0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 1);
  uVar3 = *param_1;
  *param_1 = *param_2;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  FUN_10305a544(uVar3,uVar2);
  *(undefined1 *)((long)param_1 + 9) = *(undefined1 *)((long)param_2 + 9);
  lVar4 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar5 = (ulong)*(byte *)(lVar4 + 0x50);
  (**(code **)(lVar4 + 0x28))
            (uVar5 + 10 + (long)param_1 & (uVar5 ^ 0xffffffffffffffff),
             uVar5 + 10 + (long)param_2 & (uVar5 ^ 0xffffffffffffffff));
  return param_1;
}



/* Entry: 10306172c; end: 103061863;  */

ulong FUN_10306172c(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  
  lVar6 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar2 = *(uint *)(lVar6 + 0x54);
  uVar1 = uVar2;
  if (uVar2 < 0xff) {
    uVar1 = 0xfe;
  }
  if (param_2 == 0) {
    return 0;
  }
  uVar7 = (ulong)*(byte *)(lVar6 + 0x50);
  if (param_2 < uVar1 || param_2 - uVar1 == 0) goto LAB_1030617e4;
  uVar5 = (uVar7 + 10 & (uVar7 ^ 0xffffffffffffffff)) + *(long *)(lVar6 + 0x40);
  uVar4 = (uint)uVar5;
  uVar3 = uVar4 << 3;
  if (uVar4 < 4) {
    uVar8 = ((param_2 - uVar1) + ~(-1 << (ulong)(uVar3 & 0x1f)) >> (ulong)(uVar3 & 0x1f)) + 1;
    if (uVar8 < 0x100) {
      if (uVar8 < 2) goto LAB_1030617e4;
      goto LAB_103061774;
    }
    if (uVar8 >> 0x10 == 0) {
      uVar8 = (uint)*(ushort *)((long)param_1 + uVar5);
    }
    else {
      uVar8 = *(uint *)((long)param_1 + uVar5);
    }
  }
  else {
LAB_103061774:
    uVar8 = (uint)*(byte *)((long)param_1 + uVar5);
  }
  if (uVar8 != 0) {
    uVar2 = 0;
    if (uVar4 < 4) {
      uVar2 = uVar8 - 1 << (ulong)(uVar3 & 0x1f);
    }
    if (uVar4 != 0) {
      uVar3 = 4;
      if (uVar4 < 4) {
        uVar3 = uVar4;
      }
      if ((int)uVar3 < 3) {
        if (uVar3 == 1) {
          uVar5 = (ulong)(byte)*param_1;
        }
        else {
          uVar5 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar3 == 3) {
        uVar5 = (ulong)(uint3)*param_1;
      }
      else {
        uVar5 = (ulong)*param_1;
      }
    }
    return (ulong)(uVar1 + ((uint)uVar5 | uVar2) + 1);
  }
LAB_1030617e4:
  if (uVar2 < 0xff) {
    uVar1 = 0;
    if (1 < (byte)param_1[2]) {
      uVar1 = ((byte)param_1[2] ^ 0xff) + 1;
    }
    return (ulong)uVar1;
  }
  uVar7 = (long)param_1 + uVar7 + 10 & ~uVar7;
                    /* WARNING: Could not recover jumptable at 0x000103061814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar6 + 0x30))(uVar7);
  return uVar7;
}



/* Entry: 103061864; end: 103061a63;  */

void FUN_103061864(ulong *param_1,uint param_2,uint param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined2 uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  byte bVar9;
  int iVar10;
  
  lVar6 = *(long *)(*(long *)(param_4 + 0x10) + -8);
  uVar4 = *(uint *)(lVar6 + 0x54);
  uVar3 = uVar4;
  if (uVar4 < 0xff) {
    uVar3 = 0xfe;
  }
  uVar7 = (ulong)*(byte *)(lVar6 + 0x50);
  lVar2 = (uVar7 + 10 & (uVar7 ^ 0xffffffffffffffff)) + *(long *)(lVar6 + 0x40);
  uVar8 = (uint)lVar2;
  if (param_3 < uVar3 || param_3 - uVar3 == 0) {
    bVar9 = 0;
  }
  else if (uVar8 < 4) {
    uVar1 = ((param_3 - uVar3) + ~(-1 << (ulong)(uVar8 << 3 & 0x1f)) >> (ulong)(uVar8 << 3 & 0x1f))
            + 1;
    bVar9 = 2;
    if (0xffff < uVar1) {
      bVar9 = 4;
    }
    if (uVar1 < 0x100) {
      bVar9 = 1 < uVar1;
    }
  }
  else {
    bVar9 = 1;
  }
  if (uVar3 < param_2) {
    param_2 = param_2 + ~uVar3;
    if (uVar8 < 4) {
      iVar10 = (param_2 >> (ulong)(uVar8 << 3 & 0x1f)) + 1;
      if (uVar8 != 0) {
        uVar3 = param_2 & (-1 << (ulong)(uVar8 << 3 & 0x1f) ^ 0xffffffffU);
        func_0x000107c60ee4(param_1,lVar2);
        uVar5 = (undefined2)uVar3;
        if (uVar8 == 3) {
          *(undefined2 *)param_1 = uVar5;
          *(char *)((long)param_1 + 2) = (char)(uVar3 >> 0x10);
        }
        else if (uVar8 == 2) {
          *(undefined2 *)param_1 = uVar5;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      func_0x000107c60ee4(param_1,lVar2);
      *(uint *)param_1 = param_2;
      iVar10 = 1;
    }
    if (bVar9 < 2) {
      if (bVar9 != 0) {
        *(char *)((long)param_1 + lVar2) = (char)iVar10;
      }
    }
    else if (bVar9 == 2) {
      *(short *)((long)param_1 + lVar2) = (short)iVar10;
    }
    else {
      *(int *)((long)param_1 + lVar2) = iVar10;
    }
  }
  else {
    if (bVar9 < 2) {
      if (bVar9 != 0) {
        *(undefined1 *)((long)param_1 + lVar2) = 0;
      }
    }
    else if (bVar9 == 2) {
      *(undefined2 *)((long)param_1 + lVar2) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar2) = 0;
    }
    if (param_2 != 0) {
      if (0xfe < uVar4) {
                    /* WARNING: Could not recover jumptable at 0x0001030619f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar6 + 0x38))((long)param_1 + uVar7 + 10 & ~uVar7);
        return;
      }
      if (param_2 < 0xff) {
        *(char *)(param_1 + 1) = -(char)param_2;
      }
      else {
        *(undefined1 *)(param_1 + 1) = 0;
        *param_1 = (ulong)(param_2 - 0xff);
      }
    }
  }
  return;
}



/* Entry: 103061a64; end: 103061a7f;  */

void FUN_103061a64(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100d311a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_1,param_2);
  return;
}



/* Entry: 103061a80; end: 103061ae3;  */

long FUN_103061a80(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103061ae4; end: 103061beb;  */

undefined8 * FUN_103061ae4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar3 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar3;
  uVar3 = param_2[4];
  uVar2 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar2;
  func_0x000107c6157c();
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar2);
  return param_1;
}



/* Entry: 103061bec; end: 103061c57;  */

undefined8 * FUN_103061bec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61574(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61574(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar1 = param_1[4];
  uVar2 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar2;
  func_0x000107c61574(uVar1);
  param_1[5] = param_2[5];
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 103061c58; end: 103061ceb;  */

int FUN_103061c58(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xe] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103061cec; end: 103061d57;  */

void FUN_103061cec(undefined8 param_1,long param_2)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)(param_2 + 0x18);
  uStack_20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c614f4(&uStack_20,&UNK_10e741fcc,1);
  return;
}



/* Entry: 103061d58; end: 10306371f;  */

void FUN_103061d58(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar16;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x12;
  undefined8 *unaff_x20;
  undefined1 *puVar17;
  code *pcVar18;
  long lVar19;
  undefined8 uStack_210;
  undefined1 auStack_208 [8];
  undefined8 uStack_200;
  undefined1 auStack_1f8 [8];
  long alStack_1f0 [4];
  undefined1 auStack_1d0 [8];
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  long lStack_188;
  undefined8 uStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined1 auStack_69 [9];
  
  uVar8 = 0x112f369b8;
  func_0x00010002969c(0x112f369b8,&UNK_10db7f060);
  uStack_140 = *(undefined8 *)(param_3 + 0x10);
  uVar1 = 0xff;
  lStack_150 = uVar8;
  func_0x000107c5f34c(0xff,uStack_140,PTR___s7SwiftUI16_FlexFrameLayoutVN_110348bd8);
  uVar8 = 0x112f36ea0;
  func_0x00010002969c(0x112f36ea0,&UNK_10db7f988);
  uVar2 = 0xff;
  func_0x000107c5f34c(0xff,uVar1,uVar8);
  uVar3 = 0xff;
  func_0x000107c5f34c(0xff,uVar2,PTR___s7SwiftUI14_PaddingLayoutVN_110348a08);
  uVar4 = 0xff;
  func_0x000107c5f34c(0xff,uVar3,PTR___s7SwiftUI13_OffsetEffectVN_1103488f8);
  uVar8 = 0x112f36ea8;
  func_0x00010002969c(0x112f36ea8,&UNK_10db81240);
  puVar7 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_148 = *(undefined8 *)(param_3 + 0x18);
  puStack_78 = PTR___s7SwiftUI16_FlexFrameLayoutVAA12ViewModifierAAWP_110348bc8;
  puVar5 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_80 = uStack_148;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&uStack_80);
  uVar1 = 0x112f36eb0;
  FUN_103063fe4(0x112f36eb0,0x112f36ea0,&UNK_10db7f988,
                PTR___s7SwiftUI19_BackgroundModifierVyxGAA04ViewD0AAMc_110348ee0);
  puVar6 = puVar7;
  puStack_90 = puVar5;
  uStack_88 = uVar1;
  func_0x000107c61520(puVar7,uVar2,&puStack_90);
  puStack_98 = PTR___s7SwiftUI14_PaddingLayoutVAA12ViewModifierAAWP_1103489f8;
  puVar5 = puVar7;
  puStack_a0 = puVar6;
  func_0x000107c61520(puVar7,uVar3,&puStack_a0);
  puStack_a8 = PTR___s7SwiftUI13_OffsetEffectVAA12ViewModifierAAWP_1103488e8;
  puStack_b0 = puVar5;
  func_0x000107c61520(puVar7,uVar4,&puStack_b0);
  uVar1 = 0x112f36eb8;
  FUN_103063fe4(0x112f36eb8,0x112f36ea8,&UNK_10db81240,
                PTR___s7SwiftUI13_EndedGestureVyxGAA0D0AAMc_1103488d8);
  uVar2 = 0xff;
  uStack_110 = uVar4;
  uStack_108 = uVar8;
  puStack_100 = puVar7;
  uStack_f8 = uVar1;
  func_0x000107c614f8(0xff,&uStack_110,
                      PTR___s7SwiftUI4ViewPAAE7gesture_9includingQrqd___AA11GestureMaskVtAA0F0Rd__lFQOMQ_110349628
                      ,0);
  uVar1 = 0xff;
  func_0x000107c5f34c(0xff,uVar2,PTR___s7SwiftUI25_AppearanceActionModifierVN_110349168);
  uVar8 = 0x112e09088;
  func_0x00010002969c(0x112e09088,&UNK_10db7f080);
  uVar2 = 0xff;
  func_0x000107c5f34c(0xff,uVar1,uVar8);
  uVar8 = 0xff;
  func_0x000107c61510(0xff,lStack_150,uVar2,0,0);
  uVar1 = 0xff;
  func_0x000107c5f7dc(0xff,uVar8);
  uVar8 = 0xff;
  func_0x000107c60188(0xff,uVar1);
  puVar7 = PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_110349aa8;
  func_0x000107c61520(PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_110349aa8,uVar1);
  puVar5 = PTR___sxSg7SwiftUI4ViewA2bCRzlMc_110349ad0;
  uStack_198 = uVar8;
  puStack_b8 = puVar7;
  func_0x000107c61520(PTR___sxSg7SwiftUI4ViewA2bCRzlMc_110349ad0,uVar8,&puStack_b8);
  lVar9 = 0;
  puStack_1a0 = puVar5;
  func_0x000107c5f768(0,uVar8,puVar5);
  lStack_188 = *(long *)(lVar9 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(lStack_188 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar17 = auStack_1d0 + -extraout_x8;
  lVar10 = 0;
  func_0x000107c5f34c(0,lVar9,PTR___s7SwiftUI16_FlexFrameLayoutVN_110348bd8);
  lStack_158 = *(long *)(lVar10 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(lStack_158 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar8 = 0x112e02e30;
  lStack_1b0 = (long)puVar17 - extraout_x8_00;
  func_0x00010002969c(0x112e02e30,&UNK_10da5a740);
  lVar11 = 0;
  func_0x000107c5f34c(0,lVar10,uVar8);
  lStack_168 = *(long *)(lVar11 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(lStack_168 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = ((long)puVar17 - extraout_x8_00) - extraout_x8_01;
  lVar12 = 0;
  lStack_178 = lVar16;
  func_0x000107c5f34c(0,lVar11,PTR___s7SwiftUI30_SafeAreaRegionsIgnoringLayoutVN_110349200);
  lStack_150 = *(long *)(lVar12 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(lStack_150 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = lVar16 - extraout_x8_02;
  puVar7 = &UNK_10db7f938;
  lStack_160 = lVar16;
  func_0x000107c61520(&UNK_10db7f938,param_3);
  uVar1 = 0xff;
  func_0x000107c5f4d8(0xff,param_3,puVar7);
  puVar5 = PTR___s7SwiftUI6ZStackVyxGAA4ViewAAMc_110349910;
  func_0x000107c61520(PTR___s7SwiftUI6ZStackVyxGAA4ViewAAMc_110349910,lVar9);
  puVar7 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  puStack_c0 = PTR___s7SwiftUI16_FlexFrameLayoutVAA12ViewModifierAAWP_110348bc8;
  puVar13 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  puStack_c8 = puVar5;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,lVar10,&puStack_c8);
  uVar8 = 0x112e02e28;
  FUN_103063fe4(0x112e02e28,0x112e02e30,&UNK_10da5a740,
                PTR___s7SwiftUI18_AnimationModifierVyxGAA04ViewD0AAMc_110348d80);
  puVar6 = puVar7;
  puStack_1c8 = puVar13;
  puStack_d8 = puVar13;
  uStack_d0 = uVar8;
  func_0x000107c61520(puVar7,lVar11,&puStack_d8);
  puStack_e0 = PTR___s7SwiftUI30_SafeAreaRegionsIgnoringLayoutVAA12ViewModifierAAWP_1103491f0;
  puStack_1c0 = puVar6;
  puStack_e8 = puVar6;
  func_0x000107c61520(puVar7,lVar12,&puStack_e8);
  uVar8 = 0xff;
  puStack_1b8 = puVar7;
  lStack_170 = lVar12;
  func_0x000107c5f38c(0xff,lVar12);
  lVar14 = 0;
  uStack_1a8 = uVar8;
  uStack_180 = uVar1;
  func_0x000107c5f34c();
  lStack_190 = *(long *)(lVar14 + -8);
  lVar12 = lVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_190 + 0x40));
  lVar16 = lVar16 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar19 = lVar16 - extraout_x12;
  func_0x000107c5f7a8();
  puStack_100 = (undefined *)uStack_140;
  uStack_f8 = uStack_148;
  func_0x000107c5f764(puVar17);
  func_0x000107c5f7a8();
  *(long *)(lVar19 + -0x10) = lVar9;
  *(undefined **)(lVar19 + -8) = puVar5;
  *(long *)(lVar19 + -0x20) = lVar12;
  *(undefined8 *)(lVar19 + -0x18) = uVar1;
  *(undefined1 *)(lVar19 + -0x28) = 0;
  *(undefined8 *)(lVar19 + -0x30) = 0x7ff0000000000000;
  *(undefined1 *)(lVar19 + -0x38) = 1;
  *(undefined8 *)(lVar19 + -0x40) = 0;
  lVar12 = lStack_1b0;
  func_0x000107c5f684(0,1,0,1,0x7ff0000000000000,0,0,1);
  (**(code **)(lStack_188 + 8))(puVar17,lVar9);
  if (lRam0000000112f36ec0 != -1) {
    func_0x000107c61568(0x112f36ec0,0x103061d20);
  }
  uVar8 = uRam0000000112f36ec8;
  uStack_108 = unaff_x20[1];
  uStack_110 = *unaff_x20;
  puStack_100 = (undefined *)CONCAT71(puStack_100._1_7_,*(undefined1 *)(unaff_x20 + 2));
  func_0x0001000285a8(0x112d4fe10,&UNK_10d9160e0);
  func_0x000107c5f770(auStack_69);
  lVar9 = lStack_178;
  uStack_110 = CONCAT71(uStack_110._1_7_,auStack_69[0]);
  func_0x000107c5f6b4(lStack_178,uVar8,&uStack_110,lVar10,PTR___sSbN_11034dd40,puStack_1c8,
                      PTR___sSbSQsWP_11034dd50);
  (**(code **)(lStack_158 + 8))(lVar12,lVar10);
  func_0x000107c5f354();
  lVar15 = lVar12;
  func_0x000107c5f574();
  lVar10 = lStack_160;
  func_0x000107c5f630(lStack_160,lVar12,lVar15,lVar11,puStack_1c0);
  (**(code **)(lStack_168 + 8))(lVar9,lVar11);
  func_0x000107c5f7ac();
  uVar8 = uStack_180;
  puVar7 = PTR___s7SwiftUI21_ViewModifier_ContentVyxGAA0C0AAMc_110349008;
  func_0x000107c61520(PTR___s7SwiftUI21_ViewModifier_ContentVyxGAA0C0AAMc_110349008,uStack_180);
  lVar12 = lStack_170;
  func_0x000107c5f698(lVar16,lVar10,lVar9,lVar11,uVar8,lStack_170,puVar7,puStack_1b8);
  (**(code **)(lStack_150 + 8))(lVar10,lVar12);
  puVar5 = PTR___s7SwiftUI16_OverlayModifierVyxGAA04ViewD0AAMc_110348bf0;
  func_0x000107c61520(PTR___s7SwiftUI16_OverlayModifierVyxGAA04ViewD0AAMc_110348bf0,uStack_1a8);
  puVar6 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  puStack_120 = puVar7;
  puStack_118 = puVar5;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,lVar14,&puStack_120);
  FUN_103061a64(lVar19,lVar16,lVar14,puVar6);
  pcVar18 = *(code **)(lStack_190 + 8);
  (*pcVar18)(lVar16,lVar14);
  FUN_103061a64(param_1,lVar19,lVar14,puVar6);
  (*pcVar18)(lVar19,lVar14);
  return;
}



/* Entry: 103063720; end: 1030637c3;  */

void FUN_103063720(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if (lRam0000000112f36ec0 != -1) {
    func_0x000107c61568(0x112f36ec0,0x103061d20);
  }
  uStack_50 = param_2;
  uStack_48 = param_3;
  uStack_40 = param_1;
  func_0x000107c5f300(uRam0000000112f36ec8,FUN_103064128,auStack_60,PTR___sytN_11034f1b0 + 8);
  return;
}



/* Entry: 1030637c4; end: 10306382f;  */

void FUN_1030637c4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 uStack_41;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  
  func_0x000103061a6c(0);
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  uStack_30 = *(undefined1 *)(param_1 + 2);
  uStack_41 = 0;
  uVar1 = 0x112d4fe10;
  func_0x0001000285a8(0x112d4fe10,&UNK_10d9160e0);
  func_0x000107c5f774(&uStack_41,uVar1);
  return;
}



/* Entry: 103063830; end: 103063b27;  */

void FUN_103063830(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 *unaff_x20;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  
  lVar3 = 0;
  uStack_98 = param_1;
  func_0x000107c5f334();
  lVar8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar9 = (long)&lStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  func_0x000107c5f2a0();
  lStack_b0 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b0 + 0x40));
  lVar7 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0x112f36f00;
  func_0x0001000285a8(0x112f36f00,&UNK_10db7f998);
  lStack_a0 = *(long *)(lVar5 + -8);
  lStack_a8 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_a0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  (**(code **)(lVar8 + 0x68))
            (lVar9,*(undefined4 *)PTR___s7SwiftUI15CoordinateSpaceO6globalyA2CmFWC_110348a30,lVar3);
  func_0x000107c5f294(lVar7,0x4010000000000000,lVar9);
  uStack_68 = *unaff_x20;
  uVar1 = unaff_x20[1];
  uVar10 = unaff_x20[4];
  uStack_78 = unaff_x20[6];
  uStack_80 = unaff_x20[5];
  puVar6 = &UNK_110602d80;
  func_0x000107c613fc(&UNK_110602d80,0x58,7);
  uVar14 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(puVar6 + 0x10) = uVar14;
  *(undefined8 *)(puVar6 + 0x18) = uVar2;
  uVar11 = *unaff_x20;
  uVar13 = unaff_x20[3];
  uVar12 = unaff_x20[2];
  *(undefined8 *)(puVar6 + 0x28) = unaff_x20[1];
  *(undefined8 *)(puVar6 + 0x20) = uVar11;
  *(undefined8 *)(puVar6 + 0x38) = uVar13;
  *(undefined8 *)(puVar6 + 0x30) = uVar12;
  uVar11 = unaff_x20[4];
  *(undefined8 *)(puVar6 + 0x48) = unaff_x20[5];
  *(undefined8 *)(puVar6 + 0x40) = uVar11;
  *(undefined8 *)(puVar6 + 0x50) = unaff_x20[6];
  func_0x000103063f08(&uStack_68,auStack_90);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar10);
  func_0x000103063f44(&uStack_80,auStack_90,0x112eb92c0,&UNK_10dad08b0);
  uVar11 = 0x112f36f08;
  FUN_103063f98(0x112f36f08,PTR___s7SwiftUI11DragGestureVMa_110348758,
                PTR___s7SwiftUI11DragGestureVAA0D0AAMc_110348750);
  uVar12 = 0x112f36f10;
  FUN_103063f98(0x112f36f10,PTR___s7SwiftUI11DragGestureV5ValueVMa_110348740,
                PTR___s7SwiftUI11DragGestureV5ValueVSQAAMc_110348748);
  func_0x000107c5f798(lVar7 - extraout_x8_01,FUN_103063f8c,puVar6,lVar4,uVar11,uVar12);
  func_0x000107c61574(puVar6);
  (**(code **)(lStack_b0 + 8))(lVar7,lVar4);
  puVar6 = &UNK_110602da8;
  func_0x000107c613fc(&UNK_110602da8,0x58,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar14;
  *(undefined8 *)(puVar6 + 0x18) = uVar2;
  uVar11 = *unaff_x20;
  uVar14 = unaff_x20[3];
  uVar12 = unaff_x20[2];
  *(undefined8 *)(puVar6 + 0x28) = unaff_x20[1];
  *(undefined8 *)(puVar6 + 0x20) = uVar11;
  *(undefined8 *)(puVar6 + 0x38) = uVar14;
  *(undefined8 *)(puVar6 + 0x30) = uVar12;
  uVar11 = unaff_x20[4];
  *(undefined8 *)(puVar6 + 0x48) = unaff_x20[5];
  *(undefined8 *)(puVar6 + 0x40) = uVar11;
  *(undefined8 *)(puVar6 + 0x50) = unaff_x20[6];
  func_0x000103063f08(&uStack_68,auStack_90);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar10);
  func_0x000103063f44(&uStack_80,auStack_90,0x112eb92c0,&UNK_10dad08b0);
  uVar11 = 0x112f36f18;
  FUN_103063fe4(0x112f36f18,0x112f36f00,&UNK_10db7f998,
                PTR___s7SwiftUI15_ChangedGestureVyxGAA0D0AAMc_110348ab8);
  lVar5 = lStack_a8;
  func_0x000107c5f794(uStack_98,FUN_103063fd8,puVar6,lStack_a8,uVar11);
  func_0x000107c61574(puVar6);
  (**(code **)(lStack_a0 + 8))(lVar7 - extraout_x8_01,lVar5);
  return;
}



/* Entry: 103063b28; end: 103063b83;  */

void FUN_103063b28(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c5f298();
  uStack_28 = *(undefined8 *)(param_4 + 0x30);
  uStack_30 = *(undefined8 *)(param_4 + 0x28);
  uVar1 = 0x112eb92c0;
  uStack_38 = param_2;
  func_0x0001000285a8(0x112eb92c0,&UNK_10dad08b0);
  func_0x000107c5f730(&uStack_38,uVar1);
  return;
}



/* Entry: 103063b84; end: 103063c6b;  */

void FUN_103063b84(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000107c5f29c();
  if (param_2 <= 120.0) {
    if (lRam0000000112f36ec0 != -1) {
      func_0x000107c61568(0x112f36ec0,0x103061d20);
    }
    pcVar1 = (code *)0x103064028;
  }
  else {
    if (lRam0000000112f36ec0 != -1) {
      func_0x000107c61568(0x112f36ec0,0x103061d20);
    }
    pcVar1 = FUN_103064084;
  }
  uStack_50 = param_5;
  uStack_48 = param_6;
  uStack_40 = param_4;
  func_0x000107c5f300(uRam0000000112f36ec8,pcVar1,auStack_60,PTR___sytN_11034f1b0 + 8);
  return;
}



/* Entry: 103063c6c; end: 103063d0f;  */

void FUN_103063c6c(void)

{
  undefined8 uVar1;
  ulong uStack_28;
  
  func_0x000103061a6c(0);
  uStack_28 = uStack_28 & 0xffffffffffffff00;
  uVar1 = 0x112d4fe10;
  func_0x0001000285a8(0x112d4fe10,&UNK_10d9160e0);
  func_0x000107c5f774(&uStack_28,uVar1);
  uStack_28 = 0;
  uVar1 = 0x112eb92c0;
  func_0x0001000285a8(0x112eb92c0,&UNK_10dad08b0);
  func_0x000107c5f730(&uStack_28,uVar1);
  return;
}



/* Entry: 103063d10; end: 103063d1b;  */

void FUN_103063d10(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb5ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI12ViewModifierPAAE05_makeC08modifier6inputs4bodyAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVAiA01_J0V_ANtctFZ_110348800
  )();
  return;
}



/* Entry: 103063d1c; end: 103063d5b;  */

void FUN_103063d1c(void)

{
  FUN_103061d58();
  return;
}



/* Entry: 103063d5c; end: 103063d67;  */

void FUN_103063d5c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long extraout_x8;
  long extraout_x8_00;
  long lVar17;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar18;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long unaff_x20;
  long lVar19;
  code *pcVar20;
  long lVar21;
  undefined1 auStack_1a0 [8];
  long lStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  long lStack_178;
  undefined *puStack_170;
  undefined1 *puStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long lStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined *puStack_110;
  long lStack_108;
  long lStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  long *plStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  uVar13 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar16 = *(long **)(unaff_x20 + 0x20);
  lVar15 = 0x112f369b8;
  uStack_148 = uVar12;
  uStack_138 = uVar13;
  uStack_120 = param_1;
  func_0x00010002969c(0x112f369b8,&UNK_10db7f060);
  uVar5 = 0xff;
  func_0x000107c5f34c(0xff,uVar13,PTR___s7SwiftUI16_FlexFrameLayoutVN_110348bd8);
  uVar13 = 0x112f36ea0;
  func_0x00010002969c(0x112f36ea0,&UNK_10db7f988);
  uVar6 = 0xff;
  func_0x000107c5f34c(0xff,uVar5,uVar13);
  uVar7 = 0xff;
  func_0x000107c5f34c(0xff,uVar6,PTR___s7SwiftUI14_PaddingLayoutVN_110348a08);
  lVar8 = 0xff;
  func_0x000107c5f34c(0xff,uVar7,PTR___s7SwiftUI13_OffsetEffectVN_1103488f8);
  uVar13 = 0x112f36ea8;
  func_0x00010002969c(0x112f36ea8,&UNK_10db81240);
  puVar11 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  puStack_70 = PTR___s7SwiftUI16_FlexFrameLayoutVAA12ViewModifierAAWP_110348bc8;
  puVar9 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_78 = uVar12;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar5,&uStack_78);
  uVar12 = 0x112f36eb0;
  FUN_103063fe4(0x112f36eb0,0x112f36ea0,&UNK_10db7f988,
                PTR___s7SwiftUI19_BackgroundModifierVyxGAA04ViewD0AAMc_110348ee0);
  puVar10 = puVar11;
  puStack_88 = puVar9;
  uStack_80 = uVar12;
  func_0x000107c61520(puVar11,uVar6,&puStack_88);
  puStack_90 = PTR___s7SwiftUI14_PaddingLayoutVAA12ViewModifierAAWP_1103489f8;
  puVar9 = puVar11;
  puStack_98 = puVar10;
  func_0x000107c61520(puVar11,uVar7,&puStack_98);
  puStack_a0 = PTR___s7SwiftUI13_OffsetEffectVAA12ViewModifierAAWP_1103488e8;
  puStack_a8 = puVar9;
  func_0x000107c61520(puVar11,lVar8,&puStack_a8);
  uVar12 = 0x112f36eb8;
  FUN_103063fe4(0x112f36eb8,0x112f36ea8,&UNK_10db81240,
                PTR___s7SwiftUI13_EndedGestureVyxGAA0D0AAMc_1103488d8);
  uVar5 = 0xff;
  uStack_188 = uVar12;
  puStack_170 = puVar11;
  uStack_160 = uVar13;
  lStack_158 = lVar8;
  lStack_d0 = lVar8;
  lStack_c8 = uVar13;
  puStack_c0 = puVar11;
  uStack_b8 = uVar12;
  func_0x000107c614f8(0xff,&lStack_d0,
                      PTR___s7SwiftUI4ViewPAAE7gesture_9includingQrqd___AA11GestureMaskVtAA0F0Rd__lFQOMQ_110349628
                      ,0);
  uVar12 = 0xff;
  func_0x000107c5f34c(0xff,uVar5,PTR___s7SwiftUI25_AppearanceActionModifierVN_110349168);
  uVar13 = 0x112e09088;
  func_0x00010002969c(0x112e09088,&UNK_10db7f080);
  lVar8 = 0xff;
  uStack_190 = uVar12;
  func_0x000107c5f34c(0xff,uVar12,uVar13);
  uVar13 = 0xff;
  func_0x000107c61510(0xff,lVar15,lVar8,0,0);
  lVar14 = 0;
  func_0x000107c5f7dc(0,uVar13);
  lStack_128 = *(long *)(lVar14 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(lStack_128 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lStack_180 = *(long *)(lVar8 + -8);
  puStack_168 = auStack_1a0 + -extraout_x8;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_180 + 0x40));
  lVar21 = (long)(auStack_1a0 + -extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar17 = lVar21 - extraout_x12;
  lStack_150 = lVar15;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar15 + -8) + 0x40));
  lVar18 = lVar17 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_178 = lVar18;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar18 = lVar18 - extraout_x12_00;
  lVar15 = 0;
  func_0x000107c60188(0,lVar14);
  lStack_130 = *(long *)(lVar15 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_130 + 0x40));
  lVar19 = lVar18 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_140 = lVar19 - extraout_x12_01;
  uVar13 = 0;
  func_0x000103061a6c(0,uStack_138,uStack_148);
  lStack_c8 = plVar16[1];
  lStack_d0 = *plVar16;
  puStack_c0 = (undefined *)CONCAT71(puStack_c0._1_7_,(char)plVar16[2]);
  func_0x0001000285a8(0x112d4fe10,&UNK_10d9160e0);
  func_0x000107c5f770(&lStack_108);
  bVar4 = (char)lStack_108 != '\x01';
  if (bVar4) {
    pcVar20 = *(code **)(lStack_128 + 0x38);
  }
  else {
    lStack_198 = lVar18;
    func_0x000103062c10(lVar18,uVar13);
    func_0x000103062f4c(lVar21,uVar13);
    lStack_d0 = lStack_158;
    lStack_c8 = uStack_160;
    puStack_c0 = puStack_170;
    uStack_b8 = uStack_188;
    plVar16 = &lStack_d0;
    func_0x000107c614f4(plVar16,
                        PTR___s7SwiftUI4ViewPAAE7gesture_9includingQrqd___AA11GestureMaskVtAA0F0Rd__lFQOMQ_110349628
                        ,1);
    puVar11 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
    puStack_e0 = PTR___s7SwiftUI25_AppearanceActionModifierVAA04ViewE0AAWP_110349158;
    puVar9 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
    plStack_e8 = plVar16;
    func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                        ,uStack_190,&plStack_e8);
    uVar13 = 0x112e09080;
    FUN_103063fe4(0x112e09080,0x112e09088,&UNK_10db7f080,
                  PTR___s7SwiftUI21_TraitWritingModifierVyxGAA04ViewE0AAMc_110348ff0);
    puStack_f8 = puVar9;
    uStack_f0 = uVar13;
    func_0x000107c61520(puVar11,lVar8,&puStack_f8);
    func_0x000103061a64(lVar17,lVar21,lVar8,puVar11);
    lVar1 = lStack_180;
    pcVar20 = *(code **)(lStack_180 + 8);
    (*pcVar20)(lVar21,lVar8);
    lVar2 = lStack_178;
    func_0x000100d31344(lVar18,lStack_178);
    lStack_d0 = lVar2;
    lVar18 = lVar21;
    (**(code **)(lVar1 + 0x10))(lVar21,lVar17,lVar8);
    lStack_108 = lStack_150;
    lStack_100 = lVar8;
    lStack_c8 = lVar21;
    FUN_103059874();
    puVar3 = puStack_168;
    lStack_118 = lVar18;
    puStack_110 = puVar11;
    func_0x000101c14e58(puStack_168,&lStack_d0,2,&lStack_108,&lStack_118);
    (*pcVar20)(lVar17,lVar8);
    FUN_1030640e8(lStack_198,0x112f369b8,&UNK_10db7f060);
    (*pcVar20)(lVar21,lVar8);
    FUN_1030640e8(lVar2,0x112f369b8,&UNK_10db7f060);
    lVar8 = lStack_128;
    (**(code **)(lStack_128 + 0x20))(lVar19,puVar3,lVar14);
    pcVar20 = *(code **)(lVar8 + 0x38);
  }
  (*pcVar20)(lVar19,bVar4,1,lVar14);
  puVar11 = PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_110349aa8;
  func_0x000107c61520(PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_110349aa8,lVar14);
  lVar8 = lStack_140;
  FUN_10305896c(lStack_140,lVar19,lVar14,puVar11);
  pcVar20 = *(code **)(lStack_130 + 8);
  (*pcVar20)(lVar19,lVar15);
  puVar11 = PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_110349aa8;
  func_0x000107c61520(PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_110349aa8,lVar14);
  puVar9 = PTR___sxSg7SwiftUI4ViewA2bCRzlMc_110349ad0;
  puStack_d8 = puVar11;
  func_0x000107c61520(PTR___sxSg7SwiftUI4ViewA2bCRzlMc_110349ad0,lVar15,&puStack_d8);
  func_0x000103061a68(uStack_120,lVar8,lVar15,puVar9);
  (*pcVar20)(lVar8,lVar15);
  return;
}



/* Entry: 103063d68; end: 103063f8b;  */

void FUN_103063d68(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  if (puRam0000000112f36ee0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f36ed8;
  func_0x00010002969c(0x112f36ed8,&UNK_10db7f990);
  uVar2 = uVar1;
  func_0x000103063de0();
  puStack_28 = PTR___s7SwiftUI30_SafeAreaRegionsIgnoringLayoutVAA12ViewModifierAAWP_1103491f0;
  puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_30 = uVar2;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&uStack_30);
  puRam0000000112f36ee0 = puVar3;
  return;
}



/* Entry: 103063f8c; end: 103063f97;  */

void FUN_103063f8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c5f298(param_3,unaff_x20 + 0x20,*(undefined8 *)(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  uStack_28 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_30 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar1 = 0x112eb92c0;
  uStack_38 = param_2;
  func_0x0001000285a8(0x112eb92c0,&UNK_10dad08b0);
  func_0x000107c5f730(&uStack_38,uVar1);
  return;
}



/* Entry: 103063f98; end: 103063fd7;  */

void FUN_103063f98(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 103063fd8; end: 103063fe3;  */

void FUN_103063fd8(undefined8 param_1,double param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c5f29c();
  if (param_2 <= 120.0) {
    if (lRam0000000112f36ec0 != -1) {
      func_0x000107c61568(0x112f36ec0,0x103061d20);
    }
    pcVar3 = (code *)0x103064028;
  }
  else {
    if (lRam0000000112f36ec0 != -1) {
      func_0x000107c61568(0x112f36ec0,0x103061d20);
    }
    pcVar3 = FUN_103064084;
  }
  uStack_50 = uVar1;
  uStack_48 = uVar2;
  lStack_40 = unaff_x20 + 0x20;
  func_0x000107c5f300(uRam0000000112f36ec8,pcVar3,auStack_60,PTR___sytN_11034f1b0 + 8);
  return;
}



/* Entry: 103063fe4; end: 103064083;  */

void FUN_103063fe4(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    func_0x000107c61520(param_4,param_2);
    *param_1 = param_4;
  }
  return;
}



/* Entry: 103064084; end: 1030640db;  */

void FUN_103064084(void)

{
  long unaff_x20;
  
  FUN_103063c6c(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1030640dc; end: 1030640e7;  */

void FUN_1030640dc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  if (lRam0000000112f36ec0 != -1) {
    func_0x000107c61568(0x112f36ec0,0x103061d20);
  }
  uStack_50 = uVar1;
  uStack_48 = uVar2;
  lStack_40 = unaff_x20 + 0x20;
  func_0x000107c5f300(uRam0000000112f36ec8,FUN_103064128,auStack_60,PTR___sytN_11034f1b0 + 8);
  return;
}



/* Entry: 1030640e8; end: 103064127;  */

undefined8 FUN_1030640e8(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 103064128; end: 103064143;  */

void FUN_103064128(void)

{
  long unaff_x20;
  
  FUN_1030637c4(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 103064144; end: 103064157;  */

bool FUN_103064144(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103064158; end: 103064203;  */

void FUN_103064158(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103064204; end: 103064397;  */

void FUN_103064204(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long extraout_x8;
  byte *unaff_x20;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_d0 [8];
  undefined1 *puStack_c8;
  undefined1 *puStack_c0;
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
  undefined8 uStack_68;
  
  lVar3 = 0x112d503e8;
  func_0x0001000285a8(0x112d503e8,&UNK_10d916ac0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_d0 + -extraout_x8;
  uVar2 = 0x7465726143474953;
  func_0x000107c5f700(0x7465726143474953,0xe800000000000000,0);
  uVar1 = *(undefined4 *)PTR___s7SwiftUI5ImageV21TemplateRenderingModeO8templateyA2EmFWC_110349758;
  lVar3 = 0;
  func_0x000107c5f6f8();
  lVar6 = *(long *)(lVar3 + -8);
  (**(code **)(lVar6 + 0x68))(puVar5,uVar1,lVar3);
  (**(code **)(lVar6 + 0x38))(puVar5,0,1,lVar3);
  puVar4 = puVar5;
  func_0x000107c5f6f4(puVar5,uVar2);
  func_0x000107c61574(uVar2);
  FUN_103064398();
  uStack_98 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_a0 = *(undefined8 *)(unaff_x20 + 8);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_90 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_80 = uVar7;
  uStack_70 = uVar8;
  FUN_103080684();
  uVar9 = *(undefined8 *)(&UNK_10db7fa88 + (ulong)*unaff_x20 * 8);
  func_0x000107c5f7e4();
  uVar2 = 0x112f36f20;
  puStack_c8 = puVar4;
  puStack_c0 = puVar5;
  uStack_b8 = uVar9;
  uStack_b0 = uVar7;
  uStack_a8 = uVar8;
  func_0x0001000285a8(0x112f36f20,&UNK_10db7f9a0);
  uVar7 = uVar2;
  func_0x0001030643e0();
  func_0x000107c5f650(param_1,1,uVar2,uVar7);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(puVar4);
  return;
}



/* Entry: 103064398; end: 1030644cf;  */

undefined8 FUN_103064398(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112d503e8;
  func_0x0001000285a8(0x112d503e8,&UNK_10d916ac0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1030644d0; end: 1030644d3;  */

void FUN_1030644d0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f36f40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db7f9b0;
  func_0x000107c61520(&UNK_10db7f9b0,&UNK_110602f28);
  puRam0000000112f36f40 = puVar1;
  return;
}



/* Entry: 1030644d4; end: 103064513;  */

void FUN_1030644d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f36f40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db7f9b0;
  func_0x000107c61520(&UNK_10db7f9b0,&UNK_110602f28);
  puRam0000000112f36f40 = puVar1;
  return;
}



/* Entry: 103064514; end: 103064533;  */

void FUN_103064514(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc028c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_11034f3b8)(param_1,&UNK_10e742038,1);
  return;
}



/* Entry: 103064534; end: 10306455f;  */

long FUN_103064534(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103064560; end: 10306476b;  */

int FUN_103064560(byte *param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfc < param_2) && (param_1[0x48] != 0)) {
    return *(int *)param_1 + 0xfd;
  }
  iVar1 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar1 = -1;
  }
  return iVar1 + 1;
}



/* Entry: 10306476c; end: 1030647e3;  */

void FUN_10306476c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000112f36f48 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f36f50;
  func_0x00010002969c(0x112f36f50,&UNK_10db7fa80);
  uVar2 = uVar1;
  func_0x0001030643e0();
  uVar3 = uVar2;
  FUN_10305de24();
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&uStack_30);
  puRam0000000112f36f48 = puVar4;
  return;
}



/* Entry: 1030647e4; end: 1030648f3;  */

void FUN_1030647e4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,code *param_4,
                  undefined8 param_5,code *param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  uVar3 = param_2[4];
  uVar5 = param_2[7];
  uVar4 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  param_1[7] = uVar5;
  param_1[6] = uVar4;
  uVar3 = *(undefined8 *)((long)param_2 + 0x39);
  *(undefined8 *)((long)param_1 + 0x41) = *(undefined8 *)((long)param_2 + 0x41);
  *(undefined8 *)((long)param_1 + 0x39) = uVar3;
  uVar5 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  uVar3 = param_3[4];
  uVar5 = param_3[7];
  uVar4 = param_3[6];
  param_1[0xf] = param_3[5];
  param_1[0xe] = uVar3;
  param_1[0x11] = uVar5;
  param_1[0x10] = uVar4;
  uVar3 = *(undefined8 *)((long)param_3 + 0x39);
  *(undefined8 *)((long)param_1 + 0x91) = *(undefined8 *)((long)param_3 + 0x41);
  *(undefined8 *)((long)param_1 + 0x89) = uVar3;
  uVar5 = *param_3;
  uVar4 = param_3[3];
  uVar3 = param_3[2];
  param_1[0xb] = param_3[1];
  param_1[10] = uVar5;
  param_1[0xd] = uVar4;
  param_1[0xc] = uVar3;
  uStack_a0 = param_10;
  uStack_98 = param_11;
  lVar2 = 0;
  uStack_b0 = param_8;
  uStack_a8 = param_9;
  FUN_1030648f4(0,&uStack_b0);
  iVar1 = *(int *)(lVar2 + 0x38);
  func_0x000103059b1c(param_2,&uStack_b0);
  func_0x000103067a54(param_3,&uStack_b0,0x112f36930,&UNK_10db7ef80);
  (*param_4)((long)param_1 + (long)iVar1);
  (*param_6)((long)param_1 + (long)*(int *)(lVar2 + 0x3c));
  func_0x000103067a9c(param_3,0x112f36930,&UNK_10db7ef80);
  FUN_103059634(param_2);
  return;
}



/* Entry: 1030648f4; end: 1030648ff;  */

void FUN_1030648f4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getGenericMetadata_11034f380)(param_1,param_2,&DAT_10e742060);
  return;
}



/* Entry: 103064900; end: 10306494b;  */

void FUN_103064900(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_1030647e4(param_1,param_2,FUN_10306494c,0,param_3,param_4,
                PTR___s7SwiftUI9EmptyViewVN_110349a58,param_5,
                PTR___s7SwiftUI9EmptyViewVAA0D0AAWP_110349a48,param_6);
  return;
}



/* Entry: 10306494c; end: 10306494f;  */

void FUN_10306494c(void)

{
  return;
}



/* Entry: 103064950; end: 1030653f3;  */

void FUN_103064950(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  long extraout_x8;
  long extraout_x8_00;
  long lVar14;
  long extraout_x8_01;
  long lVar15;
  long extraout_x8_02;
  long lVar16;
  long extraout_x8_03;
  long lVar17;
  long extraout_x12;
  undefined8 uVar18;
  long lVar19;
  code *pcVar20;
  long lVar21;
  undefined8 uStack_190;
  undefined1 auStack_188 [8];
  undefined8 uStack_180;
  undefined1 auStack_178 [8];
  long alStack_170 [4];
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long lStack_130;
  undefined8 uStack_128;
  long lStack_120;
  long lStack_118;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar18 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = 0x112d50268;
  uStack_128 = uVar18;
  func_0x00010002969c(0x112d50268,&UNK_10d9d5360);
  uVar1 = 0xff;
  func_0x000107c5f34c(0xff,uVar18,uVar2);
  uVar2 = 0x112f36f58;
  uStack_a0 = uVar1;
  func_0x00010002969c(0x112f36f58,&UNK_10db7fab0);
  puStack_90 = PTR___s7SwiftUI6SpacerVN_1103498b8;
  uStack_148 = *(undefined8 *)(param_2 + 0x18);
  uStack_140 = *(undefined8 *)(param_2 + 0x28);
  uVar1 = 0xff;
  uStack_98 = uVar2;
  func_0x000107c5f750();
  uVar2 = 0xff;
  uStack_88 = uVar1;
  func_0x000107c6150c(0xff,4,&uStack_a0,0,0);
  uVar1 = 0xff;
  func_0x000107c5f7dc(0xff,uVar2);
  puVar3 = PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_110349aa8;
  func_0x000107c61520(PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_110349aa8,uVar1);
  lVar4 = 0;
  puStack_150 = puVar3;
  func_0x000107c5f750(0,uVar1,puVar3);
  lStack_138 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(lStack_138 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = PTR___s7SwiftUI14_PaddingLayoutVN_110348a08;
  lVar11 = (long)&puStack_150 - extraout_x8;
  lVar5 = 0;
  func_0x000107c5f34c(0,lVar4,PTR___s7SwiftUI14_PaddingLayoutVN_110348a08);
  lStack_120 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(lStack_120 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar21 = lVar11 - extraout_x8_00;
  lVar6 = 0;
  func_0x000107c5f34c(0,lVar5,puVar3);
  lVar14 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar19 = lVar21 - extraout_x8_01;
  lVar7 = 0;
  func_0x000107c5f34c(0,lVar6,PTR___s7SwiftUI16_FlexFrameLayoutVN_110348bd8);
  lVar15 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar2 = 0x112d4fe70;
  lStack_130 = lVar19 - extraout_x8_02;
  func_0x00010002969c(0x112d4fe70,&UNK_10da5a660);
  lVar8 = 0;
  func_0x000107c5f34c(0,lVar7,uVar2);
  lVar16 = *(long *)(lVar8 + -8);
  lVar9 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  lVar17 = (lVar19 - extraout_x8_02) - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  lStack_118 = lVar17;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar17 = lVar17 - extraout_x12;
  puStack_90 = (undefined *)uStack_128;
  uStack_88 = uStack_148;
  uStack_80 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = uStack_140;
  func_0x000107c5f410();
  func_0x000107c5f74c(lVar11);
  func_0x000107c5f568();
  puVar10 = PTR___s7SwiftUI6HStackVyxGAA4ViewAAMc_110349878;
  func_0x000107c61520(PTR___s7SwiftUI6HStackVyxGAA4ViewAAMc_110349878,lVar4);
  func_0x000107c5f6a0(lVar21,lVar9,0x4030000000000000,0,lVar4,puVar10);
  (**(code **)(lStack_138 + 8))(lVar11,lVar4);
  func_0x000107c5f584();
  puVar13 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  puVar3 = PTR___s7SwiftUI14_PaddingLayoutVAA12ViewModifierAAWP_1103489f8;
  puStack_a8 = PTR___s7SwiftUI14_PaddingLayoutVAA12ViewModifierAAWP_1103489f8;
  puVar12 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  puStack_b0 = puVar10;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,lVar5,&puStack_b0);
  func_0x000107c5f6a0(lVar19,lVar11,0x4020000000000000,0,lVar5,puVar12);
  (**(code **)(lStack_120 + 8))();
  func_0x000107c5f7ac();
  puStack_b8 = puVar3;
  puVar3 = puVar13;
  puStack_c0 = puVar12;
  func_0x000107c61520(puVar13,lVar6,&puStack_c0);
  *(long *)(lVar17 + -0x10) = lVar6;
  *(undefined **)(lVar17 + -8) = puVar3;
  *(long *)(lVar17 + -0x20) = lVar21;
  *(long *)(lVar17 + -0x18) = lVar5;
  *(undefined1 *)(lVar17 + -0x28) = 1;
  *(undefined8 *)(lVar17 + -0x30) = 0;
  *(undefined1 *)(lVar17 + -0x38) = 1;
  *(undefined8 *)(lVar17 + -0x40) = 0;
  lVar9 = lStack_130;
  func_0x000107c5f684(lStack_130,0,1,0,1,0,1,0x404c000000000000,0);
  (**(code **)(lVar14 + 8))(lVar19,lVar6);
  puStack_c8 = PTR___s7SwiftUI16_FlexFrameLayoutVAA12ViewModifierAAWP_110348bc8;
  puVar10 = puVar13;
  puStack_d0 = puVar3;
  func_0x000107c61520(puVar13,lVar7,&puStack_d0);
  func_0x0001026f90e8();
  lVar4 = lStack_118;
  func_0x000107c5f61c(lStack_118);
  (**(code **)(lVar15 + 8))(lVar9,lVar7);
  uVar2 = 0x112d4fe68;
  FUN_103067afc(0x112d4fe68,0x112d4fe70,&UNK_10da5a660,
                PTR___s7SwiftUI21_ContentShapeModifierVyxGAA04ViewE0AAMc_110348fd8);
  puStack_e0 = puVar10;
  uStack_d8 = uVar2;
  func_0x000107c61520(puVar13,lVar8,&puStack_e0);
  FUN_103061a64(lVar17,lVar4,lVar8,puVar13);
  pcVar20 = *(code **)(lVar16 + 8);
  (*pcVar20)(lVar4,lVar8);
  FUN_103061a64(param_1,lVar17,lVar8,puVar13);
  (*pcVar20)(lVar17,lVar8);
  return;
}



/* Entry: 1030653f4; end: 1030653ff;  */

void FUN_1030653f4(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long extraout_x8;
  long lVar14;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  code *pcVar15;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  long lStack_478;
  long lStack_470;
  undefined *puStack_468;
  long lStack_460;
  long lStack_458;
  long lStack_450;
  code *pcStack_448;
  long lStack_440;
  undefined8 uStack_438;
  undefined *puStack_430;
  long lStack_428;
  long lStack_420;
  undefined *puStack_418;
  undefined8 uStack_410;
  undefined *puStack_408;
  undefined *puStack_400;
  undefined7 uStack_3f8;
  undefined1 uStack_3f1;
  undefined7 uStack_3f0;
  undefined1 uStack_3e9;
  undefined7 uStack_3e8;
  undefined1 uStack_3e1;
  undefined7 uStack_3e0;
  undefined1 uStack_3d9;
  undefined7 uStack_3d8;
  undefined8 uStack_370;
  undefined1 uStack_368;
  long lStack_360;
  long *plStack_358;
  undefined8 *puStack_350;
  long lStack_348;
  long lStack_340;
  undefined8 uStack_338;
  long lStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  long lStack_260;
  undefined8 uStack_258;
  undefined1 uStack_250;
  undefined7 uStack_24f;
  undefined1 uStack_248;
  undefined7 uStack_247;
  long lStack_1f0;
  undefined8 uStack_1e8;
  undefined1 uStack_1e0;
  undefined7 uStack_1df;
  undefined1 uStack_1d8;
  undefined7 uStack_1d7;
  long lStack_180;
  undefined8 uStack_178;
  undefined1 uStack_170;
  undefined7 uStack_16f;
  undefined1 uStack_168;
  undefined7 uStack_167;
  undefined1 uStack_160;
  undefined7 uStack_15f;
  undefined1 uStack_158;
  undefined7 uStack_157;
  undefined1 uStack_150;
  undefined7 uStack_14f;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_490 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  puStack_430 = *(undefined **)(unaff_x20 + 0x30);
  lVar9 = 0;
  uStack_488 = uVar2;
  uStack_480 = uVar3;
  uStack_438 = param_1;
  func_0x000107c5f750(0,uVar2,uVar3);
  lStack_440 = *(long *)(lVar9 + -8);
  lStack_450 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_440 + 0x40));
  lVar14 = (long)&uStack_490 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_460 = lVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar14 - extraout_x12;
  uVar10 = 0x112d50268;
  lStack_458 = lVar14;
  func_0x00010002969c(0x112d50268,&UNK_10d9d5360);
  lVar9 = 0;
  func_0x000107c5f34c(0,lVar1,uVar10);
  lStack_428 = *(long *)(lVar9 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_428 + 0x40));
  lVar14 = lVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar4 = uStack_490;
  uStack_e8 = (undefined1)uStack_490;
  uStack_e7 = (undefined7)((ulong)uStack_490 >> 8);
  uStack_e0 = (undefined1)uVar3;
  uStack_df = (undefined7)((ulong)uVar3 >> 8);
  puVar11 = (undefined8 *)0x0;
  lStack_420 = lVar14 - extraout_x12_00;
  lStack_f8 = lVar1;
  uStack_f0 = uVar2;
  FUN_1030648f4(0,&lStack_f8);
  func_0x000103080bf0();
  puVar13 = puStack_430;
  uStack_298 = puVar11[1];
  uStack_2a0 = *puVar11;
  uStack_288 = puVar11[3];
  uStack_290 = puVar11[2];
  uStack_278 = puVar11[5];
  uStack_280 = puVar11[4];
  uStack_268 = puVar11[7];
  uStack_270 = puVar11[6];
  FUN_103067c28(lVar14,&uStack_2a0,lVar1,uVar4);
  uVar10 = 0x112d50260;
  FUN_103067afc(0x112d50260,0x112d50268,&UNK_10d9d5360,
                PTR___s7SwiftUI24_ForegroundStyleModifierVyxGAA04ViewE0AAMc_110349110);
  uStack_2b0 = uVar4;
  puVar12 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_2a8 = uVar10;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,lVar9,&uStack_2b0);
  lStack_478 = lVar14;
  lStack_470 = lVar9;
  puStack_468 = puVar12;
  FUN_103061a64(lVar14 - extraout_x12_00,lVar14,lVar9,puVar12);
  pcStack_448 = *(code **)(lStack_428 + 8);
  (*pcStack_448)(lVar14,lVar9);
  func_0x000107c5f43c();
  uVar2 = uStack_480;
  uVar10 = uStack_488;
  FUN_103065400(&lStack_f8,puVar13,lVar1,uStack_488,uVar4,uStack_480);
  uStack_248 = uStack_e0;
  uStack_247 = uStack_df;
  uStack_250 = uStack_e8;
  uStack_24f = uStack_e7;
  uStack_258 = uStack_f0;
  lStack_260 = lStack_f8;
  uStack_1e8 = uStack_f0;
  lStack_1f0 = lStack_f8;
  uStack_1e0 = uStack_250;
  uStack_1df = uStack_24f;
  uStack_1d8 = uStack_248;
  uStack_1d7 = uStack_247;
  func_0x000103067a54(&lStack_260,&lStack_180,0x112f37008,&UNK_10db7fcc8);
  func_0x000103067a9c(&lStack_1f0,0x112f37008,&UNK_10db7fcc8);
  uStack_3d9 = uStack_248;
  uStack_3d8 = uStack_247;
  uStack_3e1 = uStack_250;
  uStack_3e0 = uStack_24f;
  uStack_3e9 = (undefined1)uStack_258;
  uStack_3e8 = (undefined7)((ulong)uStack_258 >> 8);
  uStack_3f1 = (undefined1)lStack_260;
  uStack_3f0 = (undefined7)((ulong)lStack_260 >> 8);
  uStack_167 = uStack_3f0;
  uStack_160 = uStack_3e9;
  uStack_16f = uStack_3f8;
  uStack_168 = uStack_3f1;
  uStack_157 = uStack_24f;
  uStack_150 = uStack_248;
  uStack_15f = uStack_3e8;
  uStack_158 = uStack_250;
  uStack_14f = uStack_247;
  uStack_c7 = uStack_247;
  uStack_cf = uStack_24f;
  uStack_c8 = uStack_248;
  uStack_d7 = uStack_3e8;
  uStack_d0 = uStack_250;
  uStack_178 = 0x4000000000000000;
  uStack_170 = 0;
  uStack_f0 = 0x4000000000000000;
  uStack_e8 = 0;
  uStack_df = uStack_3f0;
  uStack_d8 = uStack_3e9;
  uStack_e0 = uStack_3f1;
  lStack_180 = lVar14;
  lStack_f8 = lVar14;
  func_0x000103067a54(&lStack_180,&lStack_340,0x112f36f58,&UNK_10db7fab0);
  func_0x000103067a9c(&lStack_f8,0x112f36f58,&UNK_10db7fab0);
  uStack_328 = uVar10;
  uStack_320 = uVar4;
  uStack_318 = uVar2;
  uStack_310 = puStack_430;
  lStack_330 = lVar1;
  func_0x000107c5f410();
  lVar14 = lStack_460;
  func_0x000107c5f74c(lStack_460);
  lVar6 = lStack_450;
  puVar13 = PTR___s7SwiftUI6HStackVyxGAA4ViewAAMc_110349878;
  func_0x000107c61520(PTR___s7SwiftUI6HStackVyxGAA4ViewAAMc_110349878,lStack_450);
  lVar5 = lStack_458;
  puStack_430 = puVar13;
  FUN_103061a64(lStack_458,lVar14,lVar6,puVar13);
  lVar8 = lStack_440;
  pcVar15 = *(code **)(lStack_440 + 8);
  (*pcVar15)(lVar14,lVar6);
  lVar9 = lStack_470;
  lVar1 = lStack_478;
  (**(code **)(lStack_428 + 0x10))(lStack_478,lStack_420,lStack_470);
  uStack_318 = CONCAT71(uStack_157,uStack_158);
  uStack_320 = CONCAT71(uStack_15f,uStack_160);
  uStack_310 = CONCAT71(uStack_14f,uStack_150);
  uStack_328 = CONCAT71(uStack_167,uStack_168);
  lStack_330 = CONCAT71(uStack_16f,uStack_170);
  uStack_338 = uStack_178;
  lStack_340 = lStack_180;
  plStack_358 = &lStack_340;
  lStack_360 = lVar1;
  uStack_370 = 0x4020000000000000;
  uStack_368 = 0;
  puStack_350 = &uStack_370;
  (**(code **)(lVar8 + 0x10))(lVar14,lVar5,lVar6);
  lStack_348 = lVar14;
  uVar10 = 0x112f36f58;
  func_0x000103067a54(&lStack_180,&uStack_3f8,0x112f36f58,&UNK_10db7fab0);
  uStack_3f8 = (undefined7)lVar9;
  uStack_3f1 = (undefined1)((ulong)lVar9 >> 0x38);
  func_0x0001000285a8(0x112f36f58,&UNK_10db7fab0);
  uStack_3f0 = (undefined7)uVar10;
  uStack_3e9 = (undefined1)((ulong)uVar10 >> 0x38);
  uStack_3e8 = SUB87(PTR___s7SwiftUI6SpacerVN_1103498b8,0);
  uStack_3e1 = (undefined1)((ulong)PTR___s7SwiftUI6SpacerVN_1103498b8 >> 0x38);
  uStack_3e0 = (undefined7)lVar6;
  uStack_3d9 = (undefined1)((ulong)lVar6 >> 0x38);
  puStack_418 = puStack_468;
  uVar10 = 0x112f37010;
  FUN_103067afc(0x112f37010,0x112f36f58,&UNK_10db7fab0,
                PTR___s7SwiftUI6VStackVyxGAA4ViewAAMc_1103498f0);
  puStack_408 = PTR___s7SwiftUI6SpacerVAA4ViewAAWP_1103498a8;
  puStack_400 = puStack_430;
  uStack_410 = uVar10;
  func_0x000101c14e58(uStack_438,&lStack_360,4,&uStack_3f8,&puStack_418);
  func_0x000103067a9c(&lStack_180,0x112f36f58,&UNK_10db7fab0);
  (*pcVar15)(lVar5,lVar6);
  pcVar7 = pcStack_448;
  (*pcStack_448)(lStack_420,lVar9);
  (*pcVar15)(lVar14,lVar6);
  func_0x000103067a9c(&lStack_340,0x112f36f58,&UNK_10db7fab0);
  (*pcVar7)(lVar1,lVar9);
  return;
}



/* Entry: 103065400; end: 10306577f;  */

void FUN_103065400(undefined8 *param_1,byte *param_2,byte *param_3)

{
  byte *pbVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined *puVar10;
  byte *pbVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  byte *pbStack_250;
  undefined1 auStack_240 [80];
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined1 uStack_1b8;
  undefined7 uStack_1b7;
  undefined1 uStack_1b0;
  undefined8 uStack_1af;
  byte *pbStack_1a0;
  undefined1 *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 uStack_168;
  undefined7 uStack_167;
  undefined1 uStack_160;
  undefined8 uStack_15f;
  byte *pbStack_148;
  undefined1 *puStack_140;
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
  byte *pbStack_b8;
  byte *pbStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  pbVar11 = *(byte **)param_2;
  pbVar5 = *(byte **)(param_2 + 8);
  if (param_2[0x48] == 1) {
    pbVar1 = pbVar5;
    func_0x000107c61434();
    param_3 = pbVar5;
  }
  else {
    uStack_a0 = *(undefined8 *)(param_2 + 0x18);
    uStack_a8 = *(undefined8 *)(param_2 + 0x10);
    uStack_90 = *(undefined8 *)(param_2 + 0x28);
    uStack_98 = *(undefined8 *)(param_2 + 0x20);
    uStack_80 = *(undefined8 *)(param_2 + 0x38);
    uStack_88 = *(undefined8 *)(param_2 + 0x30);
    uStack_78 = *(undefined8 *)(param_2 + 0x40);
    pbVar1 = param_2;
    pbStack_b8 = pbVar11;
    pbStack_b0 = pbVar5;
    FUN_10307ff24();
    pbVar11 = pbVar1;
  }
  func_0x000103081b2c();
  uVar2 = (ulong)*pbVar1;
  FUN_103081288(*(undefined8 *)(pbVar1 + 8),*(undefined8 *)(pbVar1 + 0x18),uVar2,pbVar1[0x10]);
  puVar3 = (undefined8 *)&UNK_10db7fcd0;
  func_0x000107c614e0();
  puVar4 = puVar3;
  func_0x000103080be4();
  uStack_f8 = puVar4[1];
  uStack_100 = *puVar4;
  uStack_e8 = puVar4[3];
  uStack_f0 = puVar4[2];
  uStack_d8 = puVar4[5];
  uStack_e0 = puVar4[4];
  uStack_c8 = puVar4[7];
  uStack_d0 = puVar4[6];
  FUN_103080684();
  uVar12 = *(undefined8 *)(param_2 + 0x91);
  uStack_160 = (undefined1)((ulong)*(undefined8 *)(param_2 + 0x89) >> 0x38);
  puVar13 = *(undefined1 **)(param_2 + 0x58);
  pbStack_250 = *(byte **)(param_2 + 0x50);
  uStack_188 = *(undefined8 *)(param_2 + 0x68);
  uStack_190 = *(undefined8 *)(param_2 + 0x60);
  uStack_178 = *(undefined8 *)(param_2 + 0x78);
  uStack_180 = *(undefined8 *)(param_2 + 0x70);
  uStack_170 = *(undefined8 *)(param_2 + 0x80);
  uStack_168 = (undefined1)*(undefined8 *)(param_2 + 0x88);
  uStack_167 = (undefined7)((ulong)*(undefined8 *)(param_2 + 0x88) >> 8);
  uStack_15f._7_1_ = (char)((ulong)uVar12 >> 0x38);
  pbStack_1a0 = pbStack_250;
  puStack_198 = puVar13;
  uStack_15f = uVar12;
  if (uStack_15f._7_1_ == '\x01') {
    uStack_1c8 = *(undefined8 *)(param_2 + 0x78);
    uStack_1d0 = *(undefined8 *)(param_2 + 0x70);
    uStack_1c0 = *(undefined8 *)(param_2 + 0x80);
    uStack_1b8 = (undefined1)*(undefined8 *)(param_2 + 0x88);
    uStack_1af = *(undefined8 *)(param_2 + 0x91);
    uStack_1b7 = (undefined7)*(undefined8 *)(param_2 + 0x89);
    uStack_1b0 = (undefined1)((ulong)*(undefined8 *)(param_2 + 0x89) >> 0x38);
    uStack_1e8 = *(undefined8 *)(param_2 + 0x58);
    uStack_1f0 = *(undefined8 *)(param_2 + 0x50);
    uStack_1d8 = *(undefined8 *)(param_2 + 0x68);
    uStack_1e0 = *(undefined8 *)(param_2 + 0x60);
    func_0x000103067a54(&pbStack_1a0,auStack_240,0x112f36930,&UNK_10db7ef80);
    pbVar5 = (byte *)&uStack_1f0;
    func_0x000103059b1c(pbVar5,auStack_240);
  }
  else {
    if (uStack_15f._7_1_ == -1) {
      pbStack_250 = (byte *)0x0;
      puVar7 = (undefined8 *)0x0;
      uVar9 = 0;
      puVar8 = (undefined8 *)0x0;
      puVar10 = (undefined *)0x0;
      puVar13 = (undefined1 *)0x0;
      goto LAB_103065654;
    }
    uStack_1e8 = *(undefined8 *)(param_2 + 0x58);
    uStack_1f0 = *(undefined8 *)(param_2 + 0x50);
    uStack_130 = *(undefined8 *)(param_2 + 0x68);
    uStack_138 = *(undefined8 *)(param_2 + 0x60);
    uStack_1d8 = *(undefined8 *)(param_2 + 0x68);
    uStack_1e0 = *(undefined8 *)(param_2 + 0x60);
    uStack_120 = *(undefined8 *)(param_2 + 0x78);
    uStack_128 = *(undefined8 *)(param_2 + 0x70);
    uStack_1c8 = *(undefined8 *)(param_2 + 0x78);
    uStack_1d0 = *(undefined8 *)(param_2 + 0x70);
    uStack_110 = *(undefined8 *)(param_2 + 0x88);
    uStack_118 = *(undefined8 *)(param_2 + 0x80);
    uStack_1c0 = *(undefined8 *)(param_2 + 0x80);
    uStack_1b8 = (undefined1)*(undefined8 *)(param_2 + 0x88);
    uStack_1af = *(undefined8 *)(param_2 + 0x91);
    uStack_1b7 = (undefined7)*(undefined8 *)(param_2 + 0x89);
    uStack_1b0 = (undefined1)((ulong)*(undefined8 *)(param_2 + 0x89) >> 0x38);
    uStack_108 = *(undefined8 *)(param_2 + 0x90);
    pbVar5 = (byte *)&uStack_1f0;
    puVar6 = auStack_240;
    pbStack_148 = pbStack_250;
    puStack_140 = puVar13;
    func_0x000103059b1c();
    FUN_10307ff24();
    puVar13 = puVar6;
    pbStack_250 = pbVar5;
  }
  func_0x000103081b44();
  uVar9 = (ulong)*pbVar5;
  FUN_103081288(*(undefined8 *)(pbVar5 + 8),*(undefined8 *)(pbVar5 + 0x18),uVar9,pbVar5[0x10]);
  puVar7 = (undefined8 *)&UNK_10db7fcd0;
  func_0x000107c614e0();
  puVar8 = puVar7;
  func_0x000103080bc0();
  uStack_1e8 = puVar8[1];
  uStack_1f0 = *puVar8;
  uStack_1d8 = puVar8[3];
  uStack_1e0 = puVar8[2];
  uStack_1c8 = puVar8[5];
  uStack_1d0 = puVar8[4];
  uStack_1c0 = puVar8[6];
  uStack_1b8 = (undefined1)puVar8[7];
  uStack_1b7 = (undefined7)((ulong)puVar8[7] >> 8);
  FUN_103080684();
  func_0x000103067a9c(&pbStack_1a0,0x112f36930,&UNK_10db7ef80);
  func_0x000107c61434(puVar13);
  func_0x000107c6157c(puVar7);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(puVar8);
  puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
LAB_103065654:
  func_0x000100f8a880(pbVar11,param_3,0);
  func_0x000107c61434(PTR___swiftEmptyArrayStorage_11034f1c8);
  func_0x000107c6157c(puVar3);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(puVar4);
  FUN_103067b40(pbStack_250,puVar13,0,puVar10,puVar7,uVar9,puVar8);
  func_0x000103067b98(pbStack_250,puVar13,0,puVar10,puVar7,uVar9,puVar8);
  *param_1 = pbVar11;
  param_1[1] = param_3;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[4] = puVar3;
  param_1[5] = uVar2;
  param_1[6] = puVar4;
  param_1[7] = pbStack_250;
  param_1[8] = puVar13;
  param_1[9] = 0;
  param_1[10] = puVar10;
  param_1[0xb] = puVar7;
  param_1[0xc] = uVar9;
  param_1[0xd] = puVar8;
  func_0x000103067b98(pbStack_250,puVar13,0,puVar10,puVar7,uVar9,puVar8);
  func_0x000100f795bc(pbVar11,param_3,0);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c6142c(PTR___swiftEmptyArrayStorage_11034f1c8);
  return;
}



/* Entry: 103065780; end: 10306583b;  */

void FUN_103065780(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long lVar4;
  long lVar5;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar5 = *(long *)(param_4 + -8);
  lVar2 = param_4;
  uVar3 = param_6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  lVar4 = (long)&uStack_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  uStack_60 = param_3;
  lStack_58 = lVar2;
  uStack_50 = param_5;
  uStack_48 = uVar3;
  FUN_1030648f4(0,&uStack_60);
  FUN_103061a64(lVar4,param_2 + *(int *)(lVar1 + 0x3c),param_4,param_6);
  FUN_103061a64(param_1,lVar4,param_4,param_6);
  (**(code **)(lVar5 + 8))(lVar4,param_4);
  return;
}



/* Entry: 10306583c; end: 1030659bf;  */

void FUN_10306583c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar1 = 0;
  uStack_b0 = param_2;
  uStack_a8 = param_1;
  func_0x000107c5f374();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar5 = (long)&uStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = &UNK_10db7fac8;
  func_0x000107c61520(&UNK_10db7fac8,param_4);
  lVar3 = 0;
  func_0x000107c5f748(0,param_4,puVar2);
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uStack_88 = *(undefined8 *)(param_4 + 0x18);
  uStack_90 = *(undefined8 *)(param_4 + 0x10);
  uStack_78 = *(undefined8 *)(param_4 + 0x28);
  uStack_80 = *(undefined8 *)(param_4 + 0x20);
  func_0x000107c6157c(param_3);
  func_0x000107c5f738(lVar5 - extraout_x8_00,uStack_b0,param_3,FUN_103065a84,auStack_a0,param_4,
                      puVar2);
  func_0x000107c5f370(lVar5);
  puVar2 = PTR___s7SwiftUI6ButtonVyxGAA4ViewAAMc_110349850;
  func_0x000107c61520(PTR___s7SwiftUI6ButtonVyxGAA4ViewAAMc_110349850,lVar3);
  uVar4 = 0x112e02d28;
  func_0x000103067984(0x112e02d28,PTR___s7SwiftUI16PlainButtonStyleVMa_110348b30,
                      PTR___s7SwiftUI16PlainButtonStyleVAA09PrimitivedE0AAMc_110348b20);
  func_0x000107c5f608(uStack_a8,lVar5,lVar3,lVar1,puVar2,uVar4);
  (**(code **)(lVar7 + 8))(lVar5,lVar1);
  (**(code **)(lVar6 + 8))(lVar5 - extraout_x8_00,lVar3);
  return;
}



/* Entry: 1030659c0; end: 103065a83;  */

void FUN_1030659c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  long extraout_x8;
  long lVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = 0;
  uStack_60 = param_3;
  uStack_58 = param_4;
  uStack_50 = param_5;
  uStack_48 = param_6;
  FUN_1030648f4(0,&uStack_60);
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = (long)&uStack_60 - extraout_x8;
  puVar2 = &UNK_10db7fac8;
  func_0x000107c61520(&UNK_10db7fac8,lVar1);
  FUN_103061a64(lVar3,param_2,lVar1,puVar2);
  FUN_103061a64(param_1,lVar3,lVar1,puVar2);
  (**(code **)(lVar4 + 8))(lVar3,lVar1);
  return;
}



/* Entry: 103065a84; end: 103065a93;  */

void FUN_103065a84(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  long unaff_x20;
  long lVar4;
  long lVar5;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_60 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_50 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  lVar1 = 0;
  FUN_1030648f4(0,&uStack_60);
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = (long)&uStack_60 - extraout_x8;
  puVar2 = &UNK_10db7fac8;
  func_0x000107c61520(&UNK_10db7fac8,lVar1);
  FUN_103061a64(lVar4,uVar3,lVar1,puVar2);
  FUN_103061a64(param_1,lVar4,lVar1,puVar2);
  (**(code **)(lVar5 + 8))(lVar4,lVar1);
  return;
}



/* Entry: 103065a94; end: 103065b1f;  */

void FUN_103065a94(undefined4 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  FUN_1030820ac();
  uVar1 = *(undefined4 *)param_2;
  func_0x000103080b6c();
  uStack_58 = (undefined4)param_2[1];
  uStack_54 = (undefined4)((ulong)param_2[1] >> 0x20);
  uStack_60 = (undefined4)*param_2;
  uStack_5c = (undefined4)((ulong)*param_2 >> 0x20);
  uStack_48 = (undefined4)param_2[3];
  uStack_44 = (undefined4)((ulong)param_2[3] >> 0x20);
  uStack_50 = (undefined4)param_2[2];
  uStack_4c = (undefined4)((ulong)param_2[2] >> 0x20);
  uStack_38 = (undefined4)param_2[5];
  uStack_34 = (undefined4)((ulong)param_2[5] >> 0x20);
  uStack_40 = (undefined4)param_2[4];
  uStack_3c = (undefined4)((ulong)param_2[4] >> 0x20);
  uStack_28 = (undefined4)param_2[7];
  uStack_24 = (undefined4)((ulong)param_2[7] >> 0x20);
  uStack_30 = (undefined4)param_2[6];
  uStack_2c = (undefined4)((ulong)param_2[6] >> 0x20);
  *(ulong *)(param_1 + 7) = CONCAT44(uStack_48,uStack_4c);
  *(ulong *)(param_1 + 5) = CONCAT44(uStack_50,uStack_54);
  *(ulong *)(param_1 + 0xb) = CONCAT44(uStack_38,uStack_3c);
  *(ulong *)(param_1 + 9) = CONCAT44(uStack_40,uStack_44);
  *(ulong *)(param_1 + 0xf) = CONCAT44(uStack_28,uStack_2c);
  *(ulong *)(param_1 + 0xd) = CONCAT44(uStack_30,uStack_34);
  *param_1 = uVar1;
  param_1[0x11] = uStack_24;
  *(ulong *)(param_1 + 3) = CONCAT44(uStack_58,uStack_5c);
  *(ulong *)(param_1 + 1) = CONCAT44(uStack_60,uStack_64);
  *(undefined2 *)(param_1 + 0x12) = 0x200;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x26) = 0xff;
  return;
}



/* Entry: 103065b20; end: 103065ea3;  */

void FUN_103065b20(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined **ppuVar6;
  long extraout_x8;
  long extraout_x8_00;
  long lVar7;
  byte *unaff_x20;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  uint uStack_13c;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  byte bStack_78;
  
  lVar3 = 0;
  uStack_138 = param_1;
  func_0x000107c5f524();
  lVar7 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar8 = (long)&uStack_170 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar4 = (undefined8 *)0x112f36f60;
  func_0x0001000285a8(0x112f36f60,&UNK_10db7fac0);
  lVar9 = puVar4[-1];
  puVar5 = puVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  bStack_78 = unaff_x20[0x50];
  if (bStack_78 == 0xff) {
    uStack_13c = (uint)*unaff_x20;
    if ((*unaff_x20 & 1) == 0) {
      func_0x00010307f8ac();
    }
    else {
      func_0x00010307f95c();
    }
    uVar11 = puVar5[3];
    uStack_170 = puVar5[2];
    uStack_160 = puVar5[5];
    uStack_168 = puVar5[4];
    uStack_148 = puVar5[8];
    uStack_150 = puVar5[7];
    uStack_158 = puVar5[6];
    lVar12 = puVar5[1];
    uVar10 = *puVar5;
    uStack_120 = uVar10;
    lStack_118 = lVar12;
    uStack_110 = uStack_170;
    uStack_108 = uVar11;
    uStack_100 = uStack_168;
    uStack_f8 = uStack_160;
    uStack_f0 = uStack_158;
    uStack_e8 = uStack_150;
    uStack_e0 = uStack_148;
    func_0x000103059c3c(&uStack_120,&uStack_c0);
    uStack_b0 = uStack_170;
    uStack_a0 = uStack_168;
    uStack_98 = uStack_160;
    uStack_90 = uStack_158;
    uStack_88 = uStack_150;
    uStack_80 = uStack_148;
    bStack_78 = 0;
    uStack_c0 = uVar10;
    lStack_b8 = lVar12;
    uStack_a8 = uVar11;
    if ((uStack_13c & 1) == 0) goto LAB_103065d38;
  }
  else {
    uStack_b0 = *(undefined8 *)(unaff_x20 + 0x18);
    uStack_98 = *(undefined8 *)(unaff_x20 + 0x30);
    uStack_a0 = *(undefined8 *)(unaff_x20 + 0x28);
    uStack_88 = *(undefined8 *)(unaff_x20 + 0x40);
    uStack_90 = *(undefined8 *)(unaff_x20 + 0x38);
    uStack_80 = *(undefined8 *)(unaff_x20 + 0x48);
    uStack_c0 = *(undefined8 *)(unaff_x20 + 8);
    lStack_b8 = *(long *)(unaff_x20 + 0x10);
    uStack_a8 = *(undefined8 *)(unaff_x20 + 0x20);
    if ((*unaff_x20 & 1) == 0) {
LAB_103065d38:
      uVar10 = 0xd000000000000010;
      uVar11 = 0x800000010f11b570;
      goto LAB_103065d50;
    }
  }
  uVar10 = 0x536c6c6543474953;
  uVar11 = 0xef6e4f7463656c65;
  if ((unaff_x20[1] & 1) == 0) {
    uVar10 = 0xd000000000000017;
    uVar11 = 0x800000010f11b590;
  }
LAB_103065d50:
  FUN_103065ea4();
  func_0x000107c5f700(uVar10,uVar11,0);
  uStack_120 = uVar10;
  func_0x000107c5f520(lVar8);
  puVar2 = PTR___s7SwiftUI5ImageVN_110349788;
  puVar1 = PTR___s7SwiftUI5ImageVAA4ViewAAWP_110349778;
  func_0x000107c5f658(lVar8 - extraout_x8_00,lVar8,PTR___s7SwiftUI5ImageVN_110349788,
                      PTR___s7SwiftUI5ImageVAA4ViewAAWP_110349778);
  (**(code **)(lVar7 + 8))(lVar8,lVar3);
  func_0x000107c61574(uVar10);
  lVar7 = lStack_b8;
  uVar11 = uStack_c0;
  if (bStack_78 == 1) {
    func_0x000107c61434(lStack_b8);
    uVar10 = uVar11;
    lVar3 = lVar7;
  }
  else {
    uStack_120 = uStack_c0;
    lStack_118 = lStack_b8;
    uStack_108 = uStack_a8;
    uStack_110 = uStack_b0;
    uStack_f8 = uStack_98;
    uStack_100 = uStack_a0;
    uStack_e8 = uStack_88;
    uStack_f0 = uStack_90;
    uStack_e0 = uStack_80;
    FUN_10307ff24();
  }
  puStack_130 = puVar2;
  puStack_128 = puVar1;
  ppuVar6 = &puStack_130;
  func_0x000107c614f4(ppuVar6,
                      PTR___s7SwiftUI4ViewPAAE20accessibilityElement8childrenQrAA26AccessibilityChildBehaviorV_tFQOMQ_110349580
                      ,1);
  func_0x000107c5f640(uStack_138,uVar10,lVar3,0,PTR___swiftEmptyArrayStorage_11034f1c8,puVar4,
                      ppuVar6);
  func_0x000107c6142c(lVar3);
  FUN_103059634(&uStack_c0);
  (**(code **)(lVar9 + 8))(lVar8 - extraout_x8_00,puVar4);
  return;
}



/* Entry: 103065ea4; end: 103065f1f;  */

undefined8 FUN_103065ea4(undefined8 param_1,undefined8 param_2)

{
  FUN_103067028(param_2,param_1,&UNK_110603088);
  return param_2;
}



/* Entry: 103065f20; end: 10306609b;  */

void FUN_103065f20(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 auStack_d8 [9];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  char cStack_48;
  
  cStack_48 = *(char *)(unaff_x20 + 9);
  if (cStack_48 == -1) {
    FUN_10307f7fc();
    uStack_128 = param_2[1];
    uStack_130 = *param_2;
    uStack_118 = param_2[3];
    uStack_120 = param_2[2];
    uStack_108 = param_2[5];
    uStack_110 = param_2[4];
    uStack_f8 = param_2[7];
    uStack_100 = param_2[6];
    uStack_f0 = param_2[8];
    uStack_78 = param_2[3];
    uStack_80 = param_2[2];
    uStack_68 = param_2[5];
    uStack_70 = param_2[4];
    uStack_58 = param_2[7];
    uStack_60 = param_2[6];
    uStack_50 = param_2[8];
    uStack_88 = param_2[1];
    uStack_90 = *param_2;
    func_0x000103059c3c(&uStack_130,auStack_d8);
    cStack_48 = '\0';
  }
  else {
    uStack_68 = unaff_x20[5];
    uStack_70 = unaff_x20[4];
    uStack_58 = unaff_x20[7];
    uStack_60 = unaff_x20[6];
    uStack_50 = unaff_x20[8];
    uStack_88 = unaff_x20[1];
    uStack_90 = *unaff_x20;
    uStack_78 = unaff_x20[3];
    uStack_80 = unaff_x20[2];
  }
  FUN_10306609c();
  uVar2 = 0x4d6c6c6543474953;
  uVar3 = 0xeb0000000065726f;
  func_0x000107c5f700(0x4d6c6c6543474953,0xeb0000000065726f,0);
  uVar1 = uStack_88;
  auStack_d8[0] = uVar2;
  if (cStack_48 == '\x01') {
    func_0x000107c61434(uStack_88);
    uVar3 = uVar1;
  }
  else {
    uStack_130 = uStack_90;
    uStack_128 = uStack_88;
    uStack_118 = uStack_78;
    uStack_120 = uStack_80;
    uStack_108 = uStack_68;
    uStack_110 = uStack_70;
    uStack_f8 = uStack_58;
    uStack_100 = uStack_60;
    uStack_f0 = uStack_50;
    FUN_10307ff24();
  }
  func_0x000107c5f640(param_1);
  func_0x000107c6142c(uVar3);
  FUN_103059634(&uStack_90);
  func_0x000107c61574(uVar2);
  return;
}



/* Entry: 10306609c; end: 1030660cf;  */

undefined8 FUN_10306609c(undefined8 param_1,undefined8 param_2)

{
  FUN_1030674e0(param_2,param_1,&UNK_110603110);
  return param_2;
}



/* Entry: 1030660d0; end: 103066103;  */

void FUN_1030660d0(undefined8 param_1,long param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = *(undefined8 *)(param_2 + 0x18);
  uStack_30 = *(undefined8 *)(param_2 + 0x10);
  uStack_18 = *(undefined8 *)(param_2 + 0x28);
  uStack_20 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c614f4(&uStack_30,&UNK_10e7420fc,1);
  return;
}



/* Entry: 103066104; end: 103066133;  */

void FUN_103066104(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc028c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_11034f3b8)(param_1,&UNK_10e74213c,1);
  return;
}



/* Entry: 103066134; end: 103066173;  */

void FUN_103066134(void)

{
  FUN_103065f20();
  return;
}



/* Entry: 103066174; end: 10306617b;  */

void FUN_103066174(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbffa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericValueMetadata_11034f228)();
  return;
}



/* Entry: 10306617c; end: 10306621b;  */

void FUN_10306617c(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puStack_40;
  undefined *puStack_38;
  long lStack_30;
  long lStack_28;
  
  puStack_40 = &UNK_10db7fc20;
  puStack_38 = &UNK_10db7fc38;
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  func_0x000107c6143c();
  if (uVar2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    uVar2 = *(ulong *)(param_1 + 0x18);
    lVar1 = 0x13f;
    func_0x000107c6143c();
    if (uVar2 < 0x40) {
      lStack_28 = *(long *)(lVar1 + -8) + 0x40;
      func_0x000107c6153c(param_1,0,4,&puStack_40,param_1 + 0x30);
    }
  }
  return;
}



/* Entry: 10306621c; end: 10306645f;  */

long * FUN_10306621c(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  byte bVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  
  lVar1 = *(long *)(param_3 + 0x10);
  lVar6 = *(long *)(param_3 + 0x18);
  lVar19 = *(long *)(lVar1 + -8);
  uVar20 = (ulong)*(uint *)(lVar19 + 0x50) & 0xff;
  lVar18 = *(long *)(lVar19 + 0x40);
  lVar17 = *(long *)(lVar6 + -8);
  uVar21 = (ulong)*(uint *)(lVar17 + 0x50) & 0xff;
  uVar14 = uVar21 | uVar20;
  if ((uVar14 < 8 && ((*(uint *)(lVar17 + 0x50) | *(uint *)(lVar19 + 0x50)) & 0x100000) == 0) &&
      0xffffffffffffffe6 <
      ((-uVar20 - 0x9a | uVar20) - (lVar18 + uVar21) | uVar21) - *(long *)(lVar17 + 0x40)) {
    lVar2 = *param_2;
    lVar7 = param_2[1];
    lVar3 = param_2[2];
    lVar8 = param_2[3];
    lVar4 = param_2[4];
    lVar9 = param_2[5];
    lVar5 = param_2[6];
    lVar10 = param_2[7];
    lVar15 = param_2[8];
    lVar13 = param_2[9];
    FUN_103059198(lVar2,lVar7,lVar3,lVar8,lVar4,lVar9,lVar5,lVar10,lVar15,(char)lVar13);
    *param_1 = lVar2;
    param_1[1] = lVar7;
    param_1[2] = lVar3;
    param_1[3] = lVar8;
    param_1[4] = lVar4;
    param_1[5] = lVar9;
    param_1[6] = lVar5;
    param_1[7] = lVar10;
    param_1[8] = lVar15;
    *(char *)(param_1 + 9) = (char)lVar13;
    uVar14 = (ulong)param_1 & 0xfffffffffffffff8;
    uVar22 = (ulong)param_2 & 0xfffffffffffffff8;
    bVar12 = *(byte *)(uVar22 + 0x98);
    if (bVar12 < 2) {
      uVar23 = *(undefined8 *)(uVar22 + 0x50);
      uVar27 = *(undefined8 *)(uVar22 + 0x58);
      uVar24 = *(undefined8 *)(uVar22 + 0x60);
      uVar28 = *(undefined8 *)(uVar22 + 0x68);
      uVar25 = *(undefined8 *)(uVar22 + 0x70);
      uVar29 = *(undefined8 *)(uVar22 + 0x78);
      uVar26 = *(undefined8 *)(uVar22 + 0x80);
      uVar11 = *(undefined8 *)(uVar22 + 0x88);
      uVar16 = *(undefined8 *)(uVar22 + 0x90);
      FUN_103059198();
      *(undefined8 *)(uVar14 + 0x50) = uVar23;
      *(undefined8 *)(uVar14 + 0x58) = uVar27;
      *(undefined8 *)(uVar14 + 0x60) = uVar24;
      *(undefined8 *)(uVar14 + 0x68) = uVar28;
      *(undefined8 *)(uVar14 + 0x70) = uVar25;
      *(undefined8 *)(uVar14 + 0x78) = uVar29;
      *(undefined8 *)(uVar14 + 0x80) = uVar26;
      *(undefined8 *)(uVar14 + 0x88) = uVar11;
      *(undefined8 *)(uVar14 + 0x90) = uVar16;
      *(byte *)(uVar14 + 0x98) = bVar12;
    }
    else {
      uVar23 = *(undefined8 *)(uVar22 + 0x50);
      *(undefined8 *)(uVar14 + 0x58) = *(undefined8 *)(uVar22 + 0x58);
      *(undefined8 *)(uVar14 + 0x50) = uVar23;
      uVar24 = *(undefined8 *)(uVar22 + 0x68);
      uVar23 = *(undefined8 *)(uVar22 + 0x60);
      uVar26 = *(undefined8 *)(uVar22 + 0x78);
      uVar25 = *(undefined8 *)(uVar22 + 0x70);
      uVar28 = *(undefined8 *)(uVar22 + 0x88);
      uVar27 = *(undefined8 *)(uVar22 + 0x80);
      uVar29 = *(undefined8 *)(uVar22 + 0x89);
      *(undefined8 *)(uVar14 + 0x91) = *(undefined8 *)(uVar22 + 0x91);
      *(undefined8 *)(uVar14 + 0x89) = uVar29;
      *(undefined8 *)(uVar14 + 0x78) = uVar26;
      *(undefined8 *)(uVar14 + 0x70) = uVar25;
      *(undefined8 *)(uVar14 + 0x88) = uVar28;
      *(undefined8 *)(uVar14 + 0x80) = uVar27;
      *(undefined8 *)(uVar14 + 0x68) = uVar24;
      *(undefined8 *)(uVar14 + 0x60) = uVar23;
    }
    uVar14 = uVar14 + uVar20 + 0x99 & ~uVar20;
    uVar20 = uVar22 + uVar20 + 0x99 & ~uVar20;
    (**(code **)(lVar19 + 0x10))(uVar14,uVar20,lVar1);
    lVar18 = lVar18 + uVar21;
    (**(code **)(lVar17 + 0x10))(uVar14 + lVar18 & ~uVar21,uVar20 + lVar18 & ~uVar21,lVar6);
  }
  else {
    lVar18 = *param_2;
    *param_1 = lVar18;
    param_1 = (long *)(lVar18 + ((ulong)((uint)uVar14 & 0xf8 ^ 0x1f8) & uVar14 + 0x10));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 103066460; end: 103066527;  */

void FUN_103066460(undefined8 *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  FUN_103059268(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                param_1[7],param_1[8],*(undefined1 *)(param_1 + 9));
  uVar2 = (ulong)param_1 & 0xfffffffffffffff8;
  if (*(byte *)(uVar2 + 0x98) < 2) {
    FUN_103059268(*(undefined8 *)(uVar2 + 0x50),*(undefined8 *)(uVar2 + 0x58),
                  *(undefined8 *)(uVar2 + 0x60),*(undefined8 *)(uVar2 + 0x68),
                  *(undefined8 *)(uVar2 + 0x70),*(undefined8 *)(uVar2 + 0x78),
                  *(undefined8 *)(uVar2 + 0x80),*(undefined8 *)(uVar2 + 0x88),
                  *(undefined8 *)(uVar2 + 0x90),*(byte *)(uVar2 + 0x98));
  }
  lVar4 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  uVar3 = uVar2 + *(byte *)(lVar4 + 0x50) + 0x99 &
          ((ulong)*(byte *)(lVar4 + 0x50) ^ 0xffffffffffffffff);
  (**(code **)(lVar4 + 8))(uVar3);
  lVar1 = *(long *)(*(long *)(param_2 + 0x18) + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x000103066524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(uVar3 + *(long *)(lVar4 + 0x40) + uVar2 & (uVar2 ^ 0xffffffffffffffff));
  return;
}



/* Entry: 103066528; end: 103066977;  */

undefined8 * FUN_103066528(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  uVar10 = *param_2;
  uVar14 = param_2[1];
  uVar11 = param_2[2];
  uVar15 = param_2[3];
  uVar12 = param_2[4];
  uVar16 = param_2[5];
  uVar13 = param_2[6];
  uVar1 = param_2[7];
  uVar4 = param_2[8];
  uVar2 = *(undefined1 *)(param_2 + 9);
  FUN_103059198(uVar10,uVar14,uVar11,uVar15,uVar12,uVar16,uVar13,uVar1,uVar4,uVar2);
  *param_1 = uVar10;
  param_1[1] = uVar14;
  param_1[2] = uVar11;
  param_1[3] = uVar15;
  param_1[4] = uVar12;
  param_1[5] = uVar16;
  param_1[6] = uVar13;
  param_1[7] = uVar1;
  param_1[8] = uVar4;
  *(undefined1 *)(param_1 + 9) = uVar2;
  uVar9 = (ulong)param_1 & 0xfffffffffffffff8;
  uVar7 = (ulong)param_2 & 0xfffffffffffffff8;
  bVar3 = *(byte *)(uVar7 + 0x98);
  if (bVar3 < 2) {
    uVar10 = *(undefined8 *)(uVar7 + 0x50);
    uVar14 = *(undefined8 *)(uVar7 + 0x58);
    uVar11 = *(undefined8 *)(uVar7 + 0x60);
    uVar15 = *(undefined8 *)(uVar7 + 0x68);
    uVar12 = *(undefined8 *)(uVar7 + 0x70);
    uVar16 = *(undefined8 *)(uVar7 + 0x78);
    uVar13 = *(undefined8 *)(uVar7 + 0x80);
    uVar1 = *(undefined8 *)(uVar7 + 0x88);
    uVar4 = *(undefined8 *)(uVar7 + 0x90);
    FUN_103059198(uVar10,uVar14,uVar11,uVar15,uVar12,uVar16,uVar13,uVar1,uVar4,bVar3);
    *(undefined8 *)(uVar9 + 0x50) = uVar10;
    *(undefined8 *)(uVar9 + 0x58) = uVar14;
    *(undefined8 *)(uVar9 + 0x60) = uVar11;
    *(undefined8 *)(uVar9 + 0x68) = uVar15;
    *(undefined8 *)(uVar9 + 0x70) = uVar12;
    *(undefined8 *)(uVar9 + 0x78) = uVar16;
    *(undefined8 *)(uVar9 + 0x80) = uVar13;
    *(undefined8 *)(uVar9 + 0x88) = uVar1;
    *(undefined8 *)(uVar9 + 0x90) = uVar4;
    *(byte *)(uVar9 + 0x98) = bVar3;
  }
  else {
    uVar10 = *(undefined8 *)(uVar7 + 0x50);
    *(undefined8 *)(uVar9 + 0x58) = *(undefined8 *)(uVar7 + 0x58);
    *(undefined8 *)(uVar9 + 0x50) = uVar10;
    uVar11 = *(undefined8 *)(uVar7 + 0x68);
    uVar10 = *(undefined8 *)(uVar7 + 0x60);
    uVar13 = *(undefined8 *)(uVar7 + 0x78);
    uVar12 = *(undefined8 *)(uVar7 + 0x70);
    uVar15 = *(undefined8 *)(uVar7 + 0x88);
    uVar14 = *(undefined8 *)(uVar7 + 0x80);
    uVar16 = *(undefined8 *)(uVar7 + 0x89);
    *(undefined8 *)(uVar9 + 0x91) = *(undefined8 *)(uVar7 + 0x91);
    *(undefined8 *)(uVar9 + 0x89) = uVar16;
    *(undefined8 *)(uVar9 + 0x78) = uVar13;
    *(undefined8 *)(uVar9 + 0x70) = uVar12;
    *(undefined8 *)(uVar9 + 0x88) = uVar15;
    *(undefined8 *)(uVar9 + 0x80) = uVar14;
    *(undefined8 *)(uVar9 + 0x68) = uVar11;
    *(undefined8 *)(uVar9 + 0x60) = uVar10;
  }
  lVar8 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar5 = (ulong)*(byte *)(lVar8 + 0x50);
  uVar9 = uVar9 + uVar5 + 0x99 & (uVar5 ^ 0xffffffffffffffff);
  uVar5 = uVar7 + uVar5 + 0x99 & (uVar5 ^ 0xffffffffffffffff);
  (**(code **)(lVar8 + 0x10))(uVar9,uVar5);
  lVar6 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar7 = (ulong)*(byte *)(lVar6 + 0x50);
  lVar8 = *(long *)(lVar8 + 0x40) + uVar7;
  (**(code **)(lVar6 + 0x10))
            (lVar8 + uVar9 & (uVar7 ^ 0xffffffffffffffff),
             lVar8 + uVar5 & (uVar7 ^ 0xffffffffffffffff));
  return param_1;
}



/* Entry: 103066978; end: 103066bcb;  */

undefined8 * FUN_103066978(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar7 = param_2[4];
  uVar9 = param_2[7];
  uVar8 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar7;
  param_1[7] = uVar9;
  param_1[6] = uVar8;
  uVar7 = *(undefined8 *)((long)param_2 + 0x39);
  *(undefined8 *)((long)param_1 + 0x41) = *(undefined8 *)((long)param_2 + 0x41);
  *(undefined8 *)((long)param_1 + 0x39) = uVar7;
  uVar9 = *param_2;
  uVar8 = param_2[3];
  uVar7 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar9;
  param_1[3] = uVar8;
  param_1[2] = uVar7;
  uVar1 = (ulong)param_1 & 0xfffffffffffffff8;
  uVar2 = (ulong)param_2 & 0xfffffffffffffff8;
  uVar7 = *(undefined8 *)(uVar2 + 0x50);
  *(undefined8 *)(uVar1 + 0x58) = *(undefined8 *)(uVar2 + 0x58);
  *(undefined8 *)(uVar1 + 0x50) = uVar7;
  uVar11 = *(undefined8 *)(uVar2 + 0x78);
  uVar10 = *(undefined8 *)(uVar2 + 0x70);
  uVar8 = *(undefined8 *)(uVar2 + 0x88);
  uVar7 = *(undefined8 *)(uVar2 + 0x80);
  uVar9 = *(undefined8 *)(uVar2 + 0x89);
  uVar13 = *(undefined8 *)(uVar2 + 0x68);
  uVar12 = *(undefined8 *)(uVar2 + 0x60);
  *(undefined8 *)(uVar1 + 0x91) = *(undefined8 *)(uVar2 + 0x91);
  *(undefined8 *)(uVar1 + 0x89) = uVar9;
  *(undefined8 *)(uVar1 + 0x78) = uVar11;
  *(undefined8 *)(uVar1 + 0x70) = uVar10;
  *(undefined8 *)(uVar1 + 0x88) = uVar8;
  *(undefined8 *)(uVar1 + 0x80) = uVar7;
  *(undefined8 *)(uVar1 + 0x68) = uVar13;
  *(undefined8 *)(uVar1 + 0x60) = uVar12;
  lVar6 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar4 = (ulong)*(byte *)(lVar6 + 0x50);
  uVar5 = uVar4 + 0x99 + uVar1 & (uVar4 ^ 0xffffffffffffffff);
  uVar2 = uVar4 + 0x99 + uVar2 & (uVar4 ^ 0xffffffffffffffff);
  (**(code **)(lVar6 + 0x20))(uVar5,uVar2);
  lVar3 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar1 = (ulong)*(byte *)(lVar3 + 0x50);
  lVar6 = *(long *)(lVar6 + 0x40) + uVar1;
  (**(code **)(lVar3 + 0x20))
            (lVar6 + uVar5 & (uVar1 ^ 0xffffffffffffffff),
             lVar6 + uVar2 & (uVar1 ^ 0xffffffffffffffff));
  return param_1;
}



/* Entry: 103066bcc; end: 103066d63;  */

ulong FUN_103066bcc(uint *param_1,uint param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  
  lVar9 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar7 = *(uint *)(lVar9 + 0x54);
  lVar10 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar4 = *(uint *)(lVar10 + 0x54);
  uVar3 = uVar7;
  if (uVar7 <= uVar4) {
    uVar3 = uVar4;
  }
  uVar2 = uVar3;
  if (uVar3 < 0xff) {
    uVar2 = 0xfe;
  }
  if (param_2 == 0) {
    return 0;
  }
  uVar12 = (ulong)*(byte *)(lVar9 + 0x50);
  uVar11 = (ulong)*(byte *)(lVar10 + 0x50);
  if (param_2 < uVar2 || param_2 - uVar2 == 0) goto LAB_103066cb0;
  lVar1 = (*(long *)(lVar9 + 0x40) + uVar11 + (uVar12 + 0x99 & (uVar12 ^ 0xffffffffffffffff)) &
          (uVar11 ^ 0xffffffffffffffff)) + *(long *)(lVar10 + 0x40);
  uVar8 = (uint)lVar1;
  uVar5 = uVar8 << 3;
  if (uVar8 < 4) {
    uVar6 = ((param_2 - uVar2) + ~(-1 << (ulong)(uVar5 & 0x1f)) >> (ulong)(uVar5 & 0x1f)) + 1;
    if (uVar6 < 0x100) {
      if (uVar6 < 2) goto LAB_103066cb0;
      goto LAB_103066c40;
    }
    if (uVar6 >> 0x10 == 0) {
      uVar6 = (uint)*(ushort *)((long)param_1 + lVar1);
    }
    else {
      uVar6 = *(uint *)((long)param_1 + lVar1);
    }
  }
  else {
LAB_103066c40:
    uVar6 = (uint)*(byte *)((long)param_1 + lVar1);
  }
  if (uVar6 != 0) {
    uVar3 = 0;
    if (uVar8 < 4) {
      uVar3 = uVar6 - 1 << (ulong)(uVar5 & 0x1f);
    }
    if (uVar8 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = 4;
      if (uVar8 < 4) {
        uVar7 = uVar8;
      }
      if ((int)uVar7 < 3) {
        if (uVar7 == 1) {
          uVar7 = (uint)(byte)*param_1;
        }
        else {
          uVar7 = (uint)(ushort)*param_1;
        }
      }
      else if (uVar7 == 3) {
        uVar7 = (uint)(uint3)*param_1;
      }
      else {
        uVar7 = *param_1;
      }
    }
    return (ulong)(uVar2 + (uVar7 | uVar3) + 1);
  }
LAB_103066cb0:
  if (uVar3 < 0xff) {
    uVar3 = 0;
    if (1 < (byte)param_1[0x12]) {
      uVar3 = ((byte)param_1[0x12] ^ 0xff) + 1;
    }
    return (ulong)uVar3;
  }
  uVar12 = ((ulong)param_1 & 0xfffffffffffffff8) + uVar12 + 0x99 & ~uVar12;
  if (uVar7 == uVar2) {
                    /* WARNING: Could not recover jumptable at 0x000103066cec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar9 + 0x30))();
    return uVar12;
  }
  uVar11 = uVar12 + *(long *)(lVar9 + 0x40) + uVar11 & ~uVar11;
                    /* WARNING: Could not recover jumptable at 0x000103066d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar10 + 0x30))(uVar11,uVar4,*(long *)(param_3 + 0x18));
  return uVar11;
}



/* Entry: 103066d64; end: 103066fcf;  */

void FUN_103066d64(ulong *param_1,undefined8 param_2,uint param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  code *UNRECOVERED_JUMPTABLE;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  byte bVar16;
  int iVar17;
  
  lVar8 = *(long *)(param_4 + 0x10);
  lVar9 = *(long *)(param_4 + 0x18);
  lVar10 = *(long *)(lVar8 + -8);
  uVar4 = *(uint *)(lVar10 + 0x54);
  lVar11 = *(long *)(lVar9 + -8);
  uVar7 = *(uint *)(lVar11 + 0x54);
  uVar2 = uVar4;
  if (uVar4 <= uVar7) {
    uVar2 = uVar7;
  }
  uVar3 = uVar2;
  if (uVar2 < 0xff) {
    uVar3 = 0xfe;
  }
  uVar14 = (ulong)*(byte *)(lVar10 + 0x50);
  lVar13 = *(long *)(lVar10 + 0x40);
  uVar12 = (ulong)*(byte *)(lVar11 + 0x50);
  lVar1 = (lVar13 + uVar12 + (uVar14 + 0x99 & (uVar14 ^ 0xffffffffffffffff)) &
          (uVar12 ^ 0xffffffffffffffff)) + *(long *)(lVar11 + 0x40);
  uVar15 = (uint)lVar1;
  if (param_3 < uVar3 || param_3 - uVar3 == 0) {
    bVar16 = 0;
  }
  else if (uVar15 < 4) {
    uVar6 = ((param_3 - uVar3) + ~(-1 << (ulong)(uVar15 << 3 & 0x1f)) >> (ulong)(uVar15 << 3 & 0x1f)
            ) + 1;
    bVar16 = 2;
    if (0xffff < uVar6) {
      bVar16 = 4;
    }
    if (uVar6 < 0x100) {
      bVar16 = 1 < uVar6;
    }
  }
  else {
    bVar16 = 1;
  }
  uVar6 = (uint)param_2;
  if (uVar3 < uVar6) {
    uVar6 = uVar6 + ~uVar3;
    if (uVar15 < 4) {
      iVar17 = (uVar6 >> (ulong)(uVar15 << 3 & 0x1f)) + 1;
      if (uVar15 != 0) {
        uVar2 = uVar6 & (-1 << (ulong)(uVar15 << 3 & 0x1f) ^ 0xffffffffU);
        func_0x000107c60ee4(param_1,lVar1);
        uVar5 = (undefined2)uVar2;
        if (uVar15 == 3) {
          *(undefined2 *)param_1 = uVar5;
          *(char *)((long)param_1 + 2) = (char)(uVar2 >> 0x10);
        }
        else if (uVar15 == 2) {
          *(undefined2 *)param_1 = uVar5;
        }
        else {
          *(char *)param_1 = (char)uVar6;
        }
      }
    }
    else {
      func_0x000107c60ee4(param_1,lVar1);
      *(uint *)param_1 = uVar6;
      iVar17 = 1;
    }
    if (bVar16 < 2) {
      if (bVar16 != 0) {
        *(char *)((long)param_1 + lVar1) = (char)iVar17;
      }
    }
    else if (bVar16 == 2) {
      *(short *)((long)param_1 + lVar1) = (short)iVar17;
    }
    else {
      *(int *)((long)param_1 + lVar1) = iVar17;
    }
  }
  else {
    if (bVar16 < 2) {
      if (bVar16 != 0) {
        *(undefined1 *)((long)param_1 + lVar1) = 0;
      }
    }
    else if (bVar16 == 2) {
      *(undefined2 *)((long)param_1 + lVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar1) = 0;
    }
    if (uVar6 != 0) {
      if (0xfe < uVar2) {
        uVar14 = ((ulong)param_1 & 0xfffffffffffffff8) + uVar14 + 0x99 & ~uVar14;
        if (uVar4 == uVar3) {
          UNRECOVERED_JUMPTABLE = *(code **)(lVar10 + 0x38);
          lVar9 = lVar8;
          uVar7 = uVar4;
        }
        else {
          UNRECOVERED_JUMPTABLE = *(code **)(lVar11 + 0x38);
          uVar14 = uVar14 + lVar13 + uVar12 & ~uVar12;
        }
                    /* WARNING: Could not recover jumptable at 0x000103066f78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(uVar14,param_2,uVar7,lVar9);
        return;
      }
      if (uVar6 < 0xff) {
        *(char *)(param_1 + 9) = -(char)param_2;
      }
      else {
        param_1[8] = 0;
        param_1[7] = 0;
        param_1[6] = 0;
        param_1[5] = 0;
        param_1[4] = 0;
        param_1[3] = 0;
        param_1[2] = 0;
        param_1[1] = 0;
        *(undefined1 *)(param_1 + 9) = 0;
        *param_1 = (ulong)(uVar6 - 0xff);
      }
    }
  }
  return;
}



/* Entry: 103066fd0; end: 103066fdf;  */

undefined1  [16] FUN_103066fd0(void)

{
  return ZEXT816(0x110603010);
}



/* Entry: 103066fe0; end: 103067027;  */

void FUN_103066fe0(long param_1)

{
  if (*(char *)(param_1 + 0x50) != -1) {
    FUN_103059268(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                  *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                  *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                  *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                  *(undefined8 *)(param_1 + 0x48),*(char *)(param_1 + 0x50));
  }
  return;
}



/* Entry: 103067028; end: 1030672c7;  */

void FUN_103067028(undefined2 *param_1,undefined2 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  *param_1 = *param_2;
  cVar4 = *(char *)(param_2 + 0x28);
  if (cVar4 == -1) {
    uVar7 = *(undefined8 *)(param_2 + 0x10);
    uVar6 = *(undefined8 *)(param_2 + 0xc);
    uVar8 = *(undefined8 *)(param_2 + 0x14);
    uVar10 = *(undefined8 *)(param_2 + 0x20);
    uVar9 = *(undefined8 *)(param_2 + 0x1c);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x14) = uVar8;
    *(undefined8 *)(param_1 + 0x20) = uVar10;
    *(undefined8 *)(param_1 + 0x1c) = uVar9;
    uVar8 = *(undefined8 *)((long)param_2 + 0x41);
    *(undefined8 *)((long)param_1 + 0x49) = *(undefined8 *)((long)param_2 + 0x49);
    *(undefined8 *)((long)param_1 + 0x41) = uVar8;
    uVar8 = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 4) = uVar8;
    *(undefined8 *)(param_1 + 0x10) = uVar7;
    *(undefined8 *)(param_1 + 0xc) = uVar6;
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 4);
    uVar10 = *(undefined8 *)(param_2 + 8);
    uVar7 = *(undefined8 *)(param_2 + 0xc);
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    uVar8 = *(undefined8 *)(param_2 + 0x14);
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    uVar9 = *(undefined8 *)(param_2 + 0x1c);
    uVar3 = *(undefined8 *)(param_2 + 0x20);
    uVar5 = *(undefined8 *)(param_2 + 0x24);
    FUN_103059198(uVar6,uVar10,uVar7,uVar1,uVar8,uVar2,uVar9,uVar3,uVar5,cVar4);
    *(undefined8 *)(param_1 + 4) = uVar6;
    *(undefined8 *)(param_1 + 8) = uVar10;
    *(undefined8 *)(param_1 + 0xc) = uVar7;
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    *(undefined8 *)(param_1 + 0x14) = uVar8;
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    *(undefined8 *)(param_1 + 0x1c) = uVar9;
    *(undefined8 *)(param_1 + 0x20) = uVar3;
    *(undefined8 *)(param_1 + 0x24) = uVar5;
    *(char *)(param_1 + 0x28) = cVar4;
  }
  return;
}



/* Entry: 1030672c8; end: 1030673d7;  */

undefined1 * FUN_1030672c8(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  char cVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  cVar8 = param_1[0x50];
  if (cVar8 != -1) {
    cVar9 = param_2[0x50];
    if (cVar9 == -1) {
      FUN_103059634(param_1 + 8);
      uVar13 = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
      *(undefined8 *)(param_1 + 0x18) = uVar13;
      uVar13 = *(undefined8 *)(param_2 + 0x28);
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
      *(undefined8 *)(param_1 + 0x28) = uVar13;
      uVar13 = *(undefined8 *)(param_2 + 0x38);
      *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
      *(undefined8 *)(param_1 + 0x38) = uVar13;
      uVar13 = *(undefined8 *)(param_2 + 0x41);
      *(undefined8 *)(param_1 + 0x49) = *(undefined8 *)(param_2 + 0x49);
      *(undefined8 *)(param_1 + 0x41) = uVar13;
      uVar13 = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(param_1 + 8) = uVar13;
    }
    else {
      uVar10 = *(undefined8 *)(param_2 + 0x48);
      uVar13 = *(undefined8 *)(param_1 + 8);
      uVar4 = *(undefined8 *)(param_1 + 0x10);
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      uVar6 = *(undefined8 *)(param_1 + 0x30);
      uVar3 = *(undefined8 *)(param_1 + 0x38);
      uVar7 = *(undefined8 *)(param_1 + 0x40);
      uVar11 = *(undefined8 *)(param_1 + 0x48);
      uVar12 = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(param_1 + 8) = uVar12;
      uVar12 = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
      *(undefined8 *)(param_1 + 0x18) = uVar12;
      uVar12 = *(undefined8 *)(param_2 + 0x28);
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
      *(undefined8 *)(param_1 + 0x28) = uVar12;
      uVar12 = *(undefined8 *)(param_2 + 0x38);
      *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
      *(undefined8 *)(param_1 + 0x38) = uVar12;
      *(undefined8 *)(param_1 + 0x48) = uVar10;
      param_1[0x50] = cVar9;
      FUN_103059268(uVar13,uVar4,uVar1,uVar5,uVar2,uVar6,uVar3,uVar7,uVar11,cVar8);
    }
    return param_1;
  }
  uVar13 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar13;
  uVar13 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar13;
  uVar13 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = uVar13;
  uVar13 = *(undefined8 *)(param_2 + 0x41);
  *(undefined8 *)(param_1 + 0x49) = *(undefined8 *)(param_2 + 0x49);
  *(undefined8 *)(param_1 + 0x41) = uVar13;
  uVar13 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar13;
  return param_1;
}



/* Entry: 1030673d8; end: 103067497;  */

int FUN_1030673d8(byte *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (param_1[0x51] != 0)) {
    return *(int *)param_1 + 0xff;
  }
  uVar1 = 0xffffffff;
  if (1 < *param_1) {
    uVar1 = *param_1 + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103067498; end: 1030674df;  */

void FUN_103067498(undefined8 *param_1)

{
  if (*(char *)(param_1 + 9) != -1) {
    FUN_103059268(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                  param_1[7],param_1[8],*(char *)(param_1 + 9));
  }
  return;
}



/* Entry: 1030674e0; end: 103067753;  */

undefined8 * FUN_1030674e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  cVar6 = *(char *)(param_2 + 9);
  if (cVar6 == -1) {
    uVar8 = param_2[4];
    uVar10 = param_2[7];
    uVar9 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar8;
    param_1[7] = uVar10;
    param_1[6] = uVar9;
    uVar8 = *(undefined8 *)((long)param_2 + 0x39);
    *(undefined8 *)((long)param_1 + 0x41) = *(undefined8 *)((long)param_2 + 0x41);
    *(undefined8 *)((long)param_1 + 0x39) = uVar8;
    uVar10 = *param_2;
    uVar9 = param_2[3];
    uVar8 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar10;
    param_1[3] = uVar9;
    param_1[2] = uVar8;
  }
  else {
    uVar8 = *param_2;
    uVar2 = param_2[1];
    uVar9 = param_2[2];
    uVar3 = param_2[3];
    uVar10 = param_2[4];
    uVar4 = param_2[5];
    uVar1 = param_2[6];
    uVar5 = param_2[7];
    uVar7 = param_2[8];
    FUN_103059198(uVar8,uVar2,uVar9,uVar3,uVar10,uVar4,uVar1,uVar5,uVar7,cVar6);
    *param_1 = uVar8;
    param_1[1] = uVar2;
    param_1[2] = uVar9;
    param_1[3] = uVar3;
    param_1[4] = uVar10;
    param_1[5] = uVar4;
    param_1[6] = uVar1;
    param_1[7] = uVar5;
    param_1[8] = uVar7;
    *(char *)(param_1 + 9) = cVar6;
  }
  return param_1;
}



/* Entry: 103067754; end: 10306781b;  */

undefined8 * FUN_103067754(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  char cVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  cVar6 = *(char *)(param_1 + 9);
  if (cVar6 == -1) {
    uVar11 = param_2[4];
    uVar15 = param_2[7];
    uVar12 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar11;
    param_1[7] = uVar15;
    param_1[6] = uVar12;
    uVar11 = *(undefined8 *)((long)param_2 + 0x39);
    *(undefined8 *)((long)param_1 + 0x41) = *(undefined8 *)((long)param_2 + 0x41);
    *(undefined8 *)((long)param_1 + 0x39) = uVar11;
    uVar15 = *param_2;
    uVar12 = param_2[3];
    uVar11 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar15;
    param_1[3] = uVar12;
    param_1[2] = uVar11;
  }
  else {
    cVar7 = *(char *)(param_2 + 9);
    if (cVar7 == -1) {
      FUN_103059634();
      uVar11 = param_2[4];
      uVar15 = param_2[7];
      uVar12 = param_2[6];
      param_1[5] = param_2[5];
      param_1[4] = uVar11;
      param_1[7] = uVar15;
      param_1[6] = uVar12;
      uVar11 = *(undefined8 *)((long)param_2 + 0x39);
      *(undefined8 *)((long)param_1 + 0x41) = *(undefined8 *)((long)param_2 + 0x41);
      *(undefined8 *)((long)param_1 + 0x39) = uVar11;
      uVar15 = *param_2;
      uVar12 = param_2[3];
      uVar11 = param_2[2];
      param_1[1] = param_2[1];
      *param_1 = uVar15;
      param_1[3] = uVar12;
      param_1[2] = uVar11;
    }
    else {
      uVar8 = param_2[8];
      uVar11 = *param_1;
      uVar2 = param_1[1];
      uVar12 = param_1[2];
      uVar3 = param_1[3];
      uVar15 = param_1[4];
      uVar4 = param_1[5];
      uVar1 = param_1[6];
      uVar5 = param_1[7];
      uVar9 = param_1[8];
      uVar10 = *param_2;
      uVar14 = param_2[3];
      uVar13 = param_2[2];
      param_1[1] = param_2[1];
      *param_1 = uVar10;
      param_1[3] = uVar14;
      param_1[2] = uVar13;
      uVar10 = param_2[4];
      uVar14 = param_2[7];
      uVar13 = param_2[6];
      param_1[5] = param_2[5];
      param_1[4] = uVar10;
      param_1[7] = uVar14;
      param_1[6] = uVar13;
      param_1[8] = uVar8;
      *(char *)(param_1 + 9) = cVar7;
      FUN_103059268(uVar11,uVar2,uVar12,uVar3,uVar15,uVar4,uVar1,uVar5,uVar9,cVar6);
    }
  }
  return param_1;
}



/* Entry: 10306781c; end: 1030678cf;  */

int FUN_10306781c(int *param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && (*(char *)((long)param_1 + 0x49) != '\0')) {
    return *param_1 + 0xfe;
  }
  iVar1 = (*(byte *)(param_1 + 0x12) ^ 0xff) - 1;
  if (*(byte *)(param_1 + 0x12) < 2) {
    iVar1 = -1;
  }
  return iVar1 + 1;
}



/* Entry: 1030678d0; end: 103067adb;  */

void FUN_1030678d0(void)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  if (puRam0000000112f36fe8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f36ff0;
  func_0x00010002969c(0x112f36ff0,&UNK_10db7fcb8);
  puStack_30 = PTR___s7SwiftUI5ImageVN_110349788;
  puStack_28 = PTR___s7SwiftUI5ImageVAA4ViewAAWP_110349778;
  ppuVar2 = &puStack_30;
  func_0x000107c614f4(ppuVar2,
                      PTR___s7SwiftUI4ViewPAAE20accessibilityElement8childrenQrAA26AccessibilityChildBehaviorV_tFQOMQ_110349580
                      ,1);
  uVar3 = 0x112d500b8;
  func_0x000103067984(0x112d500b8,PTR___s7SwiftUI31AccessibilityAttachmentModifierVMa_110349210,
                      PTR___s7SwiftUI31AccessibilityAttachmentModifierVAA04ViewE0AAMc_110349208);
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  ppuStack_40 = ppuVar2;
  uStack_38 = uVar3;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&ppuStack_40);
  puRam0000000112f36fe8 = puVar4;
  return;
}



/* Entry: 103067adc; end: 103067afb;  */

void FUN_103067adc(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long extraout_x8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar4 = *(long *)(unaff_x20 + 0x30);
  lVar10 = *(long *)(lVar1 + -8);
  lVar6 = lVar1;
  uVar8 = uVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar9 = (long)&uStack_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  uStack_60 = uVar5;
  lStack_58 = lVar6;
  uStack_50 = uVar7;
  uStack_48 = uVar8;
  FUN_1030648f4(0,&uStack_60);
  FUN_103061a64(lVar9,lVar4 + *(int *)(lVar3 + 0x3c),lVar1,uVar2);
  FUN_103061a64(param_1,lVar9,lVar1,uVar2);
  (**(code **)(lVar10 + 8))(lVar9,lVar1);
  return;
}



/* Entry: 103067afc; end: 103067b3f;  */

void FUN_103067afc(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    func_0x000107c61520(param_4,param_2);
    *param_1 = param_4;
  }
  return;
}



/* Entry: 103067b40; end: 103067bef;  */

/* WARNING: Possible PIC construction at 0x000103067b6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103067b70) */

void FUN_103067b40(void)

{
  long in_x3;
  undefined8 in_x5;
  
  if (in_x3 != 0) {
    func_0x000100f8a880();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(in_x5);
    return;
  }
  return;
}



/* Entry: 103067bf0; end: 103067c27;  */

void FUN_103067bf0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb6854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_110349438
  )();
  return;
}



/* Entry: 103067c28; end: 103067ca7;  */

void FUN_103067c28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uStack_48;
  
  FUN_103080684();
  uVar1 = param_2;
  uStack_48 = param_2;
  FUN_103061290();
  func_0x000107c5f62c(param_1,&uStack_48,param_3,PTR___s7SwiftUI5ColorVN_1103496f0,param_4,uVar1);
  func_0x000107c61574(param_2);
  return;
}



/* Entry: 103067ca8; end: 103067eb3;  */

void FUN_103067ca8(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint *unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  undefined8 uStack_158;
  ulong uStack_150;
  undefined1 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 uStack_118;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar1 = (ulong)*unaff_x20;
  func_0x000103081ea8();
  uVar2 = uVar1;
  FUN_103082048(*(undefined8 *)(&UNK_10db7fe30 + (ulong)*(byte *)((long)unaff_x20 + 0x49) * 8));
  uVar6 = 0;
  uVar3 = uVar2;
  uVar5 = param_3;
  func_0x000107c5f5d4();
  func_0x000107c6142c(param_3);
  func_0x000107c61574();
  if ((char)unaff_x20[0x12] == '\x01') {
    uStack_90 = uVar5 & 0xff;
    uStack_80 = 0;
    uStack_78 = CONCAT71(uStack_78._1_7_,1);
    uStack_a0 = uVar3;
    uStack_98 = uVar1;
    uStack_88 = uVar6;
    func_0x000100f8a880(uVar3,uVar1,uVar5);
    func_0x000107c61434(uVar6);
    uVar7 = 0x112f37018;
    func_0x0001000285a8(0x112f37018,&UNK_10db7fd00);
    uVar8 = uVar7;
    FUN_103067eb4();
    puVar4 = &uStack_a0;
  }
  else {
    uStack_98 = *(ulong *)(unaff_x20 + 4);
    uStack_a0 = *(ulong *)(unaff_x20 + 2);
    uStack_88 = *(undefined8 *)(unaff_x20 + 8);
    uStack_90 = *(ulong *)(unaff_x20 + 6);
    uStack_78 = *(undefined8 *)(unaff_x20 + 0xc);
    uStack_80 = *(undefined8 *)(unaff_x20 + 10);
    uStack_68 = *(undefined8 *)(unaff_x20 + 0x10);
    uStack_70 = *(undefined8 *)(unaff_x20 + 0xe);
    FUN_103080684();
    uStack_160 = uVar5 & 0xff;
    uStack_148 = 0;
    uStack_170 = uVar3;
    uStack_168 = uVar1;
    uStack_158 = uVar6;
    uStack_150 = uVar2;
    func_0x000100f8a880(uVar3,uVar1,uVar5);
    func_0x000107c61434(uVar6);
    uVar7 = 0x112f37018;
    func_0x0001000285a8(0x112f37018,&UNK_10db7fd00);
    uVar8 = uVar7;
    FUN_103067eb4();
    puVar4 = &uStack_170;
  }
  func_0x000107c5f490(&uStack_140,puVar4,uVar7,PTR___s7SwiftUI4TextVN_1103493f8,uVar8,
                      PTR___s7SwiftUI4TextVAA4ViewAAWP_1103493e8);
  func_0x000100f795bc(uVar3,uVar1,uVar5);
  func_0x000107c6142c(uVar6);
  param_1[1] = uStack_138;
  *param_1 = uStack_140;
  param_1[3] = uStack_128;
  param_1[2] = uStack_130;
  param_1[4] = uStack_120;
  *(undefined1 *)(param_1 + 5) = uStack_118;
  uVar6 = *(undefined8 *)(unaff_x20 + 0x1c);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x22);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  param_1[0xb] = *(undefined8 *)(unaff_x20 + 0x1e);
  param_1[10] = uVar6;
  param_1[0xd] = uVar8;
  param_1[0xc] = uVar7;
  uVar6 = *(undefined8 *)((long)unaff_x20 + 0x89);
  *(undefined8 *)((long)param_1 + 0x71) = *(undefined8 *)((long)unaff_x20 + 0x91);
  *(undefined8 *)((long)param_1 + 0x69) = uVar6;
  uVar8 = *(undefined8 *)(unaff_x20 + 0x14);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x1a);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  param_1[7] = *(undefined8 *)(unaff_x20 + 0x16);
  param_1[6] = uVar8;
  param_1[9] = uVar7;
  param_1[8] = uVar6;
  func_0x000103067f4c();
  return;
}



/* Entry: 103067eb4; end: 103067f7f;  */

void FUN_103067eb4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000112f37020 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f37018;
  func_0x00010002969c(0x112f37018,&UNK_10db7fd00);
  uVar2 = 0x112d50260;
  func_0x000103068f78(0x112d50260,0x112d50268,&UNK_10d9d5360,
                      PTR___s7SwiftUI24_ForegroundStyleModifierVyxGAA04ViewE0AAMc_110349110);
  puStack_30 = PTR___s7SwiftUI4TextVAA4ViewAAWP_1103493e8;
  puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_28 = uVar2;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&puStack_30);
  puRam0000000112f37020 = puVar3;
  return;
}



/* Entry: 103067f80; end: 103067f9b;  */

void FUN_103067f80(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc028c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_11034f3b8)(param_1,&UNK_10e7421d0,1);
  return;
}



/* Entry: 103067f9c; end: 103067ff3;  */

void FUN_103067f9c(void)

{
  FUN_103067ca8();
  return;
}



/* Entry: 103067ff4; end: 10306803b;  */

void FUN_103067ff4(long param_1)

{
  if (*(char *)(param_1 + 0x98) != -1) {
    FUN_103059268(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                  *(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68),
                  *(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x78),
                  *(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x88),
                  *(undefined8 *)(param_1 + 0x90),*(char *)(param_1 + 0x98));
  }
  return;
}



/* Entry: 10306803c; end: 10306830f;  */

void FUN_10306803c(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  *param_1 = *param_2;
  uVar8 = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 6) = uVar8;
  uVar8 = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 10) = uVar8;
  uVar8 = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0xe) = uVar8;
  uVar8 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = uVar8;
  *(undefined2 *)(param_1 + 0x12) = *(undefined2 *)(param_2 + 0x12);
  cVar6 = *(char *)(param_2 + 0x26);
  if (cVar6 == -1) {
    uVar8 = *(undefined8 *)(param_2 + 0x1c);
    uVar10 = *(undefined8 *)(param_2 + 0x22);
    uVar9 = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_2 + 0x1e);
    *(undefined8 *)(param_1 + 0x1c) = uVar8;
    *(undefined8 *)(param_1 + 0x22) = uVar10;
    *(undefined8 *)(param_1 + 0x20) = uVar9;
    uVar8 = *(undefined8 *)((long)param_2 + 0x89);
    *(undefined8 *)((long)param_1 + 0x91) = *(undefined8 *)((long)param_2 + 0x91);
    *(undefined8 *)((long)param_1 + 0x89) = uVar8;
    uVar10 = *(undefined8 *)(param_2 + 0x14);
    uVar9 = *(undefined8 *)(param_2 + 0x1a);
    uVar8 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_2 + 0x16);
    *(undefined8 *)(param_1 + 0x14) = uVar10;
    *(undefined8 *)(param_1 + 0x1a) = uVar9;
    *(undefined8 *)(param_1 + 0x18) = uVar8;
  }
  else {
    uVar8 = *(undefined8 *)(param_2 + 0x14);
    uVar2 = *(undefined8 *)(param_2 + 0x16);
    uVar9 = *(undefined8 *)(param_2 + 0x18);
    uVar3 = *(undefined8 *)(param_2 + 0x1a);
    uVar10 = *(undefined8 *)(param_2 + 0x1c);
    uVar4 = *(undefined8 *)(param_2 + 0x1e);
    uVar1 = *(undefined8 *)(param_2 + 0x20);
    uVar5 = *(undefined8 *)(param_2 + 0x22);
    uVar7 = *(undefined8 *)(param_2 + 0x24);
    FUN_103059198(uVar8,uVar2,uVar9,uVar3,uVar10,uVar4,uVar1,uVar5,uVar7,cVar6);
    *(undefined8 *)(param_1 + 0x14) = uVar8;
    *(undefined8 *)(param_1 + 0x16) = uVar2;
    *(undefined8 *)(param_1 + 0x18) = uVar9;
    *(undefined8 *)(param_1 + 0x1a) = uVar3;
    *(undefined8 *)(param_1 + 0x1c) = uVar10;
    *(undefined8 *)(param_1 + 0x1e) = uVar4;
    *(undefined8 *)(param_1 + 0x20) = uVar1;
    *(undefined8 *)(param_1 + 0x22) = uVar5;
    *(undefined8 *)(param_1 + 0x24) = uVar7;
    *(char *)(param_1 + 0x26) = cVar6;
  }
  return;
}



/* Entry: 103068310; end: 10306840f;  */

undefined4 * FUN_103068310(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  char cVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  *param_1 = *param_2;
  uVar10 = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 6) = uVar10;
  uVar10 = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 10) = uVar10;
  uVar10 = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0xe) = uVar10;
  uVar10 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = uVar10;
  *(undefined2 *)(param_1 + 0x12) = *(undefined2 *)(param_2 + 0x12);
  cVar6 = *(char *)(param_1 + 0x26);
  if (cVar6 != -1) {
    cVar7 = *(char *)(param_2 + 0x26);
    if (cVar7 == -1) {
      FUN_103059634(param_1 + 0x14);
      uVar10 = *(undefined8 *)(param_2 + 0x1c);
      uVar15 = *(undefined8 *)(param_2 + 0x22);
      uVar12 = *(undefined8 *)(param_2 + 0x20);
      *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_2 + 0x1e);
      *(undefined8 *)(param_1 + 0x1c) = uVar10;
      *(undefined8 *)(param_1 + 0x22) = uVar15;
      *(undefined8 *)(param_1 + 0x20) = uVar12;
      uVar10 = *(undefined8 *)((long)param_2 + 0x89);
      *(undefined8 *)((long)param_1 + 0x91) = *(undefined8 *)((long)param_2 + 0x91);
      *(undefined8 *)((long)param_1 + 0x89) = uVar10;
      uVar15 = *(undefined8 *)(param_2 + 0x14);
      uVar12 = *(undefined8 *)(param_2 + 0x1a);
      uVar10 = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_2 + 0x16);
      *(undefined8 *)(param_1 + 0x14) = uVar15;
      *(undefined8 *)(param_1 + 0x1a) = uVar12;
      *(undefined8 *)(param_1 + 0x18) = uVar10;
    }
    else {
      uVar8 = *(undefined8 *)(param_2 + 0x24);
      uVar10 = *(undefined8 *)(param_1 + 0x14);
      uVar2 = *(undefined8 *)(param_1 + 0x16);
      uVar12 = *(undefined8 *)(param_1 + 0x18);
      uVar3 = *(undefined8 *)(param_1 + 0x1a);
      uVar15 = *(undefined8 *)(param_1 + 0x1c);
      uVar4 = *(undefined8 *)(param_1 + 0x1e);
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      uVar5 = *(undefined8 *)(param_1 + 0x22);
      uVar9 = *(undefined8 *)(param_1 + 0x24);
      uVar11 = *(undefined8 *)(param_2 + 0x14);
      uVar14 = *(undefined8 *)(param_2 + 0x1a);
      uVar13 = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_2 + 0x16);
      *(undefined8 *)(param_1 + 0x14) = uVar11;
      *(undefined8 *)(param_1 + 0x1a) = uVar14;
      *(undefined8 *)(param_1 + 0x18) = uVar13;
      uVar11 = *(undefined8 *)(param_2 + 0x1c);
      uVar14 = *(undefined8 *)(param_2 + 0x22);
      uVar13 = *(undefined8 *)(param_2 + 0x20);
      *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_2 + 0x1e);
      *(undefined8 *)(param_1 + 0x1c) = uVar11;
      *(undefined8 *)(param_1 + 0x22) = uVar14;
      *(undefined8 *)(param_1 + 0x20) = uVar13;
      *(undefined8 *)(param_1 + 0x24) = uVar8;
      *(char *)(param_1 + 0x26) = cVar7;
      FUN_103059268(uVar10,uVar2,uVar12,uVar3,uVar15,uVar4,uVar1,uVar5,uVar9,cVar6);
    }
    return param_1;
  }
  uVar10 = *(undefined8 *)(param_2 + 0x1c);
  uVar15 = *(undefined8 *)(param_2 + 0x22);
  uVar12 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_2 + 0x1e);
  *(undefined8 *)(param_1 + 0x1c) = uVar10;
  *(undefined8 *)(param_1 + 0x22) = uVar15;
  *(undefined8 *)(param_1 + 0x20) = uVar12;
  uVar10 = *(undefined8 *)((long)param_2 + 0x89);
  *(undefined8 *)((long)param_1 + 0x91) = *(undefined8 *)((long)param_2 + 0x91);
  *(undefined8 *)((long)param_1 + 0x89) = uVar10;
  uVar15 = *(undefined8 *)(param_2 + 0x14);
  uVar12 = *(undefined8 *)(param_2 + 0x1a);
  uVar10 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_2 + 0x16);
  *(undefined8 *)(param_1 + 0x14) = uVar15;
  *(undefined8 *)(param_1 + 0x1a) = uVar12;
  *(undefined8 *)(param_1 + 0x18) = uVar10;
  return param_1;
}



/* Entry: 103068410; end: 1030684d7;  */

int FUN_103068410(int *param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && (*(char *)((long)param_1 + 0x99) != '\0')) {
    return *param_1 + 0xfe;
  }
  iVar1 = (*(byte *)(param_1 + 0x26) ^ 0xff) - 1;
  if (*(byte *)(param_1 + 0x26) < 2) {
    iVar1 = -1;
  }
  return iVar1 + 1;
}



/* Entry: 1030684d8; end: 103068637;  */

void FUN_1030684d8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000112f37028 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f37030;
  func_0x00010002969c(0x112f37030,&UNK_10db7fd78);
  uVar2 = uVar1;
  func_0x000103068550();
  uVar3 = uVar2;
  FUN_103068638();
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&uStack_30);
  puRam0000000112f37028 = puVar4;
  return;
}



/* Entry: 103068638; end: 1030686bf;  */

void FUN_103068638(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f37058 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db7fda8;
  func_0x000107c61520(&UNK_10db7fda8,&UNK_110603258);
  puRam0000000112f37058 = puVar1;
  return;
}



/* Entry: 1030686c0; end: 103068933;  */

undefined8 * FUN_1030686c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  cVar6 = *(char *)(param_2 + 9);
  if (cVar6 == -1) {
    uVar8 = param_2[4];
    uVar10 = param_2[7];
    uVar9 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar8;
    param_1[7] = uVar10;
    param_1[6] = uVar9;
    uVar8 = *(undefined8 *)((long)param_2 + 0x39);
    *(undefined8 *)((long)param_1 + 0x41) = *(undefined8 *)((long)param_2 + 0x41);
    *(undefined8 *)((long)param_1 + 0x39) = uVar8;
    uVar10 = *param_2;
    uVar9 = param_2[3];
    uVar8 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar10;
    param_1[3] = uVar9;
    param_1[2] = uVar8;
  }
  else {
    uVar8 = *param_2;
    uVar2 = param_2[1];
    uVar9 = param_2[2];
    uVar3 = param_2[3];
    uVar10 = param_2[4];
    uVar4 = param_2[5];
    uVar1 = param_2[6];
    uVar5 = param_2[7];
    uVar7 = param_2[8];
    FUN_103059198(uVar8,uVar2,uVar9,uVar3,uVar10,uVar4,uVar1,uVar5,uVar7,cVar6);
    *param_1 = uVar8;
    param_1[1] = uVar2;
    param_1[2] = uVar9;
    param_1[3] = uVar3;
    param_1[4] = uVar10;
    param_1[5] = uVar4;
    param_1[6] = uVar1;
    param_1[7] = uVar5;
    param_1[8] = uVar7;
    *(char *)(param_1 + 9) = cVar6;
  }
  return param_1;
}


