/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101f27d50; end: 101f27d57;  */

void FUN_101f27d50(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = uVar4;
  func_0x000107c5f43c();
  *param_1 = uVar5;
  param_1[1] = 0x4020000000000000;
  *(undefined1 *)(param_1 + 2) = 0;
  lVar3 = 0x112e41228;
  func_0x0001000285a8(0x112e41228,&UNK_10da2fb20);
  FUN_101f26940((long)param_1 + (long)*(int *)(lVar3 + 0x2c));
  uVar2 = (undefined1)uVar4;
  func_0x000107c5f56c();
  uVar5 = 0x4030000000000000;
  func_0x000107c5f280();
  lVar3 = 0x112e41198;
  func_0x0001000285a8(0x112e41198,&UNK_10da2fab8);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(lVar3 + 0x24));
  *puVar1 = uVar2;
  *(undefined8 *)(puVar1 + 8) = uVar5;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  return;
}



/* Entry: 101f27d58; end: 101f27def;  */

void FUN_101f27d58(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  if (puRam0000000112e411a0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e41198;
  func_0x00010002969c(0x112e41198,&UNK_10da2fab8);
  uVar2 = 0x112e411a8;
  FUN_101f29b0c(0x112e411a8,0x112e411b0,&UNK_10da2fac0,
                PTR___s7SwiftUI6VStackVyxGAA4ViewAAMc_1103498f0);
  puStack_28 = PTR___s7SwiftUI14_PaddingLayoutVAA12ViewModifierAAWP_1103489f8;
  puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_30 = uVar2;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&uStack_30);
  puRam0000000112e411a0 = puVar3;
  return;
}



/* Entry: 101f27df0; end: 101f27dff;  */

void FUN_101f27df0(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0x112e41178;
  func_0x0001000285a8(0x112e41178,&UNK_10da2faa8);
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &stack0xffffffffffffffb0 + -extraout_x8;
  FUN_101f270a4(puVar3);
  uVar2 = 0x112e41180;
  FUN_101f29b0c(0x112e41180,0x112e41178,&UNK_10da2faa8,
                PTR___s7SwiftUI19TupleToolbarContentVyxGAA0dE0AAMc_110348e30);
  func_0x000107c5f4d0(param_1,puVar3,lVar1,uVar2);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
  return;
}



/* Entry: 101f27e00; end: 101f27eab;  */

void FUN_101f27e00(void)

{
  long unaff_x20;
  
  if (*(code **)(unaff_x20 + 0x30) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x30))();
  }
  return;
}



/* Entry: 101f27eac; end: 101f27eb3;  */

void FUN_101f27eac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + 0x10);
  func_0x000107c61434();
  uVar1 = 0x112e41210;
  func_0x0001000285a8(0x112e41210,&UNK_10da2fb18);
  uVar2 = 0x112e41218;
  FUN_101f29b0c(0x112e41218,0x112e41210,&UNK_10da2fb18,PTR___sSayxGSksMc_11034dd18);
  uVar3 = 0x112e41220;
  func_0x000101f28028(0x112e41220,FUN_101f25c2c,&UNK_10da2f9bc);
  func_0x000107c5f78c(param_1,&uStack_38,FUN_101f27814,0,uVar1,PTR___sSiN_11034deb0,
                      PTR___s7SwiftUI7AnyViewVN_110349928,uVar2,
                      PTR___s7SwiftUI7AnyViewVAA0D0AAWP_110349918,uVar3);
  return;
}



/* Entry: 101f27eb4; end: 101f27f1b;  */

void FUN_101f27eb4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_18;
  
  if (puRam0000000112e411f0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e411e8;
  func_0x00010002969c(0x112e411e8,&UNK_10da2fb08);
  puStack_18 = PTR___s7SwiftUI7AnyViewVAA0D0AAWP_110349918;
  puVar2 = PTR___s7SwiftUI7ForEachVyxq_q0_GAA4ViewA2aER0_rlMc_1103499a8;
  func_0x000107c61520(PTR___s7SwiftUI7ForEachVyxq_q0_GAA4ViewA2aER0_rlMc_1103499a8,uVar1,&puStack_18
                     );
  puRam0000000112e411f0 = puVar2;
  return;
}



/* Entry: 101f27f1c; end: 101f27f23;  */

void FUN_101f27f1c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_128 [64];
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
  undefined1 uStack_38;
  
  puVar2 = *(undefined8 **)(unaff_x20 + 0x10);
  if (puVar2[4] == 0) {
    uStack_88 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
  }
  else {
    uStack_80 = 0x74754f20676f4c;
    uStack_78 = 0xe700000000000000;
    uStack_38 = 1;
    puVar1 = &UNK_1104a08f8;
    func_0x000107c613fc(&UNK_1104a08f8,0x50,7);
    uVar3 = *puVar2;
    uVar5 = puVar2[3];
    uVar4 = puVar2[2];
    *(undefined8 *)(puVar1 + 0x18) = puVar2[1];
    *(undefined8 *)(puVar1 + 0x10) = uVar3;
    *(undefined8 *)(puVar1 + 0x28) = uVar5;
    *(undefined8 *)(puVar1 + 0x20) = uVar4;
    uVar3 = puVar2[4];
    uVar5 = puVar2[7];
    uVar4 = puVar2[6];
    *(undefined8 *)(puVar1 + 0x38) = puVar2[5];
    *(undefined8 *)(puVar1 + 0x30) = uVar3;
    *(undefined8 *)(puVar1 + 0x48) = uVar5;
    *(undefined8 *)(puVar1 + 0x40) = uVar4;
    func_0x00010307738c(&uStack_e8,&uStack_80,FUN_101f27fd4,puVar1);
    func_0x000101f27e28(puVar2,auStack_128);
  }
  param_1[1] = uStack_e0;
  *param_1 = uStack_e8;
  param_1[3] = uStack_d0;
  param_1[2] = uStack_d8;
  param_1[5] = uStack_c0;
  param_1[4] = uStack_c8;
  param_1[7] = uStack_b0;
  param_1[6] = uStack_b8;
  param_1[9] = uStack_a0;
  param_1[8] = uStack_a8;
  param_1[0xb] = uStack_90;
  param_1[10] = uStack_98;
  param_1[0xc] = uStack_88;
  return;
}



/* Entry: 101f27f24; end: 101f27f93;  */

void FUN_101f27f24(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_28;
  
  if (puRam0000000112e41200 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e411f8;
  func_0x00010002969c(0x112e411f8,&UNK_10da2fb10);
  uVar2 = uVar1;
  FUN_101f27f94();
  puVar3 = PTR___sxSg7SwiftUI4ViewA2bCRzlMc_110349ad0;
  uStack_28 = uVar2;
  func_0x000107c61520(PTR___sxSg7SwiftUI4ViewA2bCRzlMc_110349ad0,uVar1,&uStack_28);
  puRam0000000112e41200 = puVar3;
  return;
}



/* Entry: 101f27f94; end: 101f27fd3;  */

void FUN_101f27f94(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e41208 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db80dd8;
  func_0x000107c61520(&UNK_10db80dd8,&UNK_110604288);
  puRam0000000112e41208 = puVar1;
  return;
}



/* Entry: 101f27fd4; end: 101f28067;  */

void FUN_101f27fd4(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 uStack_31;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)(unaff_x20 + 0x48);
  uStack_30 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_31 = 1;
  uVar1 = 0x112d4f580;
  func_0x0001000285a8(0x112d4f580,&UNK_10d915430);
  func_0x000107c5f730(&uStack_31,uVar1);
  return;
}



/* Entry: 101f28068; end: 101f2806f;  */

void FUN_101f28068(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_a8 [64];
  undefined8 uStack_68;
  
  puVar10 = *(undefined8 **)(unaff_x20 + 0x10);
  puVar2 = puVar10;
  func_0x000107c5f438();
  *param_1 = puVar2;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  lVar3 = 0x112e41258;
  func_0x0001000285a8(0x112e41258,&UNK_10da2fb48);
  iVar1 = *(int *)(lVar3 + 0x2c);
  uVar4 = *puVar10;
  FUN_101f292dc();
  puVar5 = &UNK_10da2fb50;
  uStack_68 = uVar4;
  func_0x000107c614e0(&UNK_10da2fb50);
  puVar6 = &UNK_1104a0920;
  func_0x000107c613fc(&UNK_1104a0920,0x50,7);
  uVar4 = *puVar10;
  uVar12 = puVar10[3];
  uVar11 = puVar10[2];
  *(undefined8 *)(puVar6 + 0x18) = puVar10[1];
  *(undefined8 *)(puVar6 + 0x10) = uVar4;
  *(undefined8 *)(puVar6 + 0x28) = uVar12;
  *(undefined8 *)(puVar6 + 0x20) = uVar11;
  uVar4 = puVar10[4];
  uVar12 = puVar10[7];
  uVar11 = puVar10[6];
  *(undefined8 *)(puVar6 + 0x38) = puVar10[5];
  *(undefined8 *)(puVar6 + 0x30) = uVar4;
  *(undefined8 *)(puVar6 + 0x48) = uVar12;
  *(undefined8 *)(puVar6 + 0x40) = uVar11;
  puVar7 = &UNK_1104a0948;
  func_0x000107c613fc(&UNK_1104a0948,0x20,7);
  *(code **)(puVar7 + 0x10) = FUN_101f294d0;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  func_0x000101f27e28(puVar10,auStack_a8);
  uVar4 = 0x112e41260;
  func_0x0001000285a8(0x112e41260,&UNK_10da2fb80);
  uVar11 = 0x112e41268;
  func_0x0001000285a8(0x112e41268,&UNK_10da2fb88);
  uVar12 = 0x112e41270;
  FUN_101f29b0c(0x112e41270,0x112e41260,&UNK_10da2fb80,PTR___sSayxGSksMc_11034dd18);
  uVar8 = uVar12;
  FUN_101f29508();
  uVar9 = 0x112e41280;
  FUN_101f29b0c(0x112e41280,0x112e41268,&UNK_10da2fb88,
                PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_110349aa8);
  func_0x000107c5f788((long)param_1 + (long)iVar1,&uStack_68,puVar5,FUN_101f294d8,puVar7,uVar4,
                      uVar11,uVar12,uVar8,uVar9);
  return;
}



/* Entry: 101f28070; end: 101f280ff;  */

undefined8 FUN_101f28070(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112e41250;
  func_0x0001000285a8(0x112e41250,&UNK_10da2fb40);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 101f28100; end: 101f281fb;  */

void FUN_101f28100(ulong *param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  long lStack_50;
  ulong uStack_48;
  
  uVar3 = *param_1;
  uVar1 = uVar3;
  func_0x000107c61558();
  if ((uVar1 & 1) == 0) {
    FUN_101f2919c();
  }
  uVar4 = *(ulong *)(uVar3 + 0x10);
  lStack_50 = uVar3 + 0x20;
  uVar1 = uVar4;
  uStack_48 = uVar4;
  func_0x000107c60574();
  if ((long)uVar1 < (long)uVar4) {
    puVar5 = (undefined *)(uVar4 >> 1);
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (1 < uVar4) {
      puVar2 = puVar5;
      func_0x000107c60380(puVar5,&UNK_1104a09f0);
      *(undefined **)(puVar2 + 0x10) = puVar5;
    }
    puStack_68 = puVar2 + 0x20;
    puStack_60 = puVar5;
    FUN_101f284bc(&puStack_68,auStack_58,&lStack_50,uVar1);
    *(undefined8 *)(puVar2 + 0x10) = 0;
    func_0x000107c61574(puVar2);
  }
  else if (uVar4 != 0) {
    FUN_101f28a38(0,uVar4,1,&lStack_50);
  }
  *param_1 = uVar3;
  return;
}



/* Entry: 101f281fc; end: 101f2833f;  */

undefined * FUN_101f281fc(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101f28340);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x112e412c0;
    func_0x0001000285a8(0x112e412c0,&UNK_10da2fbc0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x28) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112e412c8;
    func_0x0001000285a8(0x112e412c8,&UNK_10da2fbc8);
    func_0x000107c6140c(puVar4,puVar1,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x28 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar7 * 0x28);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 101f28340; end: 101f284bb;  */

undefined * FUN_101f28340(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  uVar7 = param_2;
  if ((param_3 & 1) != 0) {
    uVar7 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar7 < (long)param_2) {
      if ((long)(uVar7 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101f284bc);
        (*pcVar3)();
      }
      uVar7 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar7 <= (long)param_2) {
        uVar7 = param_2;
      }
    }
  }
  uVar9 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar7 <= (long)uVar9) {
    uVar7 = uVar9;
  }
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar7 != 0) {
    puVar4 = (undefined *)0x112e412b0;
    func_0x0001000285a8(0x112e412b0,&UNK_10da2fbb0);
    lVar5 = 0;
    FUN_101f25c2c();
    lVar10 = *(long *)(*(long *)(lVar5 + -8) + 0x48);
    uVar8 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
    uVar11 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
    func_0x000107c613fc(puVar4,uVar11 + lVar10 * uVar7,uVar8 | 7);
    puVar6 = puVar4;
    func_0x000107c610a4();
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101f284b4);
      (*pcVar3)();
    }
    lVar5 = (long)puVar6 - uVar11;
    if (lVar5 == -0x8000000000000000 && lVar10 == -1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101f284b8);
      (*pcVar3)();
    }
    lVar2 = 0;
    if (lVar10 != 0) {
      lVar2 = lVar5 / lVar10;
    }
    *(ulong *)(puVar4 + 0x10) = uVar9;
    *(long *)(puVar4 + 0x18) = lVar2 << 1;
  }
  lVar5 = 0;
  FUN_101f25c2c();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar7 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  puVar6 = puVar4 + uVar7;
  puVar1 = param_4 + uVar7;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar6,puVar1,uVar9,lVar5);
  }
  else {
    if ((puVar4 < param_4) || (puVar1 + *(long *)(*(long *)(lVar5 + -8) + 0x48) * uVar9 <= puVar6))
    {
      func_0x000107c61414(puVar6,puVar1,uVar9);
    }
    else if (puVar4 != param_4) {
      func_0x000107c61410(puVar6,puVar1,uVar9);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar4;
}



/* Entry: 101f284bc; end: 101f28a37;  */

void FUN_101f284bc(long *param_1,undefined *param_2,long *param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  byte bVar3;
  undefined1 uVar4;
  code *pcVar5;
  bool bVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long unaff_x21;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  byte *pbVar22;
  byte *pbVar23;
  undefined8 uVar24;
  long lVar25;
  ulong uStack_80;
  undefined *puStack_78;
  ulong uStack_70;
  undefined *puStack_68;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar14 = param_3[1];
  if (0 < lVar14) {
    lVar13 = 0;
    do {
      lVar19 = lVar13 + 1;
      if (lVar19 < lVar14) {
        pbVar22 = (byte *)(*param_3 + lVar19 * 0x10);
        uVar24 = *(undefined8 *)(pbVar22 + 8);
        lVar16 = lVar13 * 0x10;
        pbVar23 = (byte *)(*param_3 + lVar16);
        uVar20 = *(undefined8 *)(pbVar23 + 8);
        uVar7 = (ulong)*pbVar22;
        pbVar22 = pbVar23 + 0x28;
        uVar17 = (ulong)*pbVar23;
        func_0x000103053cd4();
        puVar12 = param_2;
        uStack_70 = uVar7;
        puStack_68 = param_2;
        func_0x000103053cd4();
        uStack_80 = uVar17;
        puStack_78 = puVar12;
        func_0x000100e8b654();
        func_0x000107c6157c(uVar24);
        func_0x000107c6157c(uVar20);
        puVar8 = &uStack_80;
        puVar10 = PTR___sSSN_11034da80;
        func_0x000107c6020c(puVar8,PTR___sSSN_11034da80,PTR___sSSN_11034da80,uVar17,uVar17);
        func_0x000107c61574(uVar24);
        func_0x000107c61574(uVar20);
        func_0x000107c6142c(param_2);
        func_0x000107c6142c(puVar12);
        lVar21 = lVar13 + 2;
        do {
          lVar25 = lVar21;
          param_2 = puVar10;
          lVar19 = lVar14;
          if (lVar14 == lVar25) break;
          uVar20 = *(undefined8 *)pbVar22;
          uVar24 = *(undefined8 *)(pbVar22 + -0x10);
          uVar7 = (ulong)pbVar22[-8];
          uVar18 = (ulong)pbVar22[-0x18];
          func_0x000103053cd4();
          puVar12 = puVar10;
          uStack_70 = uVar7;
          puStack_68 = puVar10;
          func_0x000103053cd4();
          uStack_80 = uVar18;
          puStack_78 = puVar12;
          func_0x000107c6157c(uVar20);
          func_0x000107c6157c(uVar24);
          puVar9 = &uStack_80;
          param_2 = PTR___sSSN_11034da80;
          func_0x000107c6020c(puVar9,PTR___sSSN_11034da80,PTR___sSSN_11034da80,uVar17,uVar17);
          func_0x000107c61574(uVar20);
          func_0x000107c61574(uVar24);
          func_0x000107c6142c(puVar10);
          func_0x000107c6142c(puVar12);
          pbVar22 = pbVar22 + 0x10;
          puVar10 = param_2;
          lVar21 = lVar25 + 1;
          lVar19 = lVar25;
        } while ((puVar8 == (ulong *)0xffffffffffffffff) != (puVar9 != (ulong *)0xffffffffffffffff))
        ;
        if (puVar8 == (ulong *)0xffffffffffffffff) {
          if (lVar19 < lVar13) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x101f28a14);
            (*pcVar5)();
          }
          if (lVar13 < lVar19) {
            lVar25 = *param_3;
            lVar15 = lVar19 << 4;
            lVar21 = lVar19;
            lVar14 = lVar13;
            do {
              lVar21 = lVar21 + -1;
              if (lVar14 != lVar21) {
                if (lVar25 == 0) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x101f28a2c);
                  (*pcVar5)();
                }
                puVar1 = (undefined8 *)(lVar25 + lVar16);
                lVar2 = lVar25 + lVar15;
                uVar4 = *(undefined1 *)puVar1;
                uVar20 = puVar1[1];
                uVar24 = *(undefined8 *)(lVar2 + -0x10);
                puVar1[1] = *(undefined8 *)(lVar2 + -8);
                *puVar1 = uVar24;
                *(undefined1 *)(lVar2 + -0x10) = uVar4;
                *(undefined8 *)(lVar2 + -8) = uVar20;
              }
              lVar14 = lVar14 + 1;
              lVar15 = lVar15 + -0x10;
              lVar16 = lVar16 + 0x10;
            } while (lVar14 < lVar21);
          }
        }
      }
      lVar14 = param_3[1];
      lVar16 = lVar19;
      if (lVar19 < lVar14) {
        if (SBORROW8(lVar19,lVar13)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101f28a08);
          (*pcVar5)();
        }
        if (lVar19 - lVar13 < param_4) {
          if (SCARRY8(lVar13,param_4)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x101f28a0c);
            (*pcVar5)();
          }
          lVar21 = lVar13 + param_4;
          if (lVar14 <= lVar13 + param_4) {
            lVar21 = lVar14;
          }
          if (lVar21 < lVar13) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x101f28a10);
            (*pcVar5)();
          }
          if (lVar19 != lVar21) {
            lVar25 = *param_3;
            pbVar22 = (byte *)(lVar25 + lVar19 * 0x10);
            lVar14 = lVar13 - lVar19;
            do {
              pbVar23 = (byte *)(lVar25 + lVar19 * 0x10);
              bVar3 = *pbVar23;
              uVar20 = *(undefined8 *)(pbVar23 + 8);
              puVar12 = param_2;
              lVar16 = lVar14;
              pbVar23 = pbVar22;
              do {
                uVar7 = (ulong)bVar3;
                uVar17 = (ulong)pbVar23[-0x10];
                uVar24 = *(undefined8 *)(pbVar23 + -8);
                func_0x000103053cd4();
                puVar10 = puVar12;
                uStack_70 = uVar7;
                puStack_68 = puVar12;
                func_0x000103053cd4();
                uStack_80 = uVar17;
                puStack_78 = puVar10;
                func_0x000100e8b654();
                func_0x000107c6157c(uVar20);
                func_0x000107c6157c(uVar24);
                puVar8 = &uStack_80;
                param_2 = PTR___sSSN_11034da80;
                func_0x000107c6020c(puVar8,PTR___sSSN_11034da80,PTR___sSSN_11034da80,uVar17,uVar17);
                func_0x000107c61574(uVar20);
                func_0x000107c61574(uVar24);
                func_0x000107c6142c(puVar12);
                func_0x000107c6142c(puVar10);
                if (puVar8 != (ulong *)0xffffffffffffffff) break;
                if (lVar25 == 0) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x101f28a18);
                  (*pcVar5)();
                }
                bVar3 = *pbVar23;
                uVar20 = *(undefined8 *)(pbVar23 + 8);
                *(undefined8 *)(pbVar23 + 8) = *(undefined8 *)(pbVar23 + -8);
                *(undefined8 *)pbVar23 = *(undefined8 *)(pbVar23 + -0x10);
                *(undefined8 *)(pbVar23 + -8) = uVar20;
                pbVar23 = pbVar23 + -0x10;
                *pbVar23 = bVar3;
                bVar6 = lVar16 != -1;
                lVar16 = lVar16 + 1;
                puVar12 = param_2;
              } while (bVar6);
              lVar19 = lVar19 + 1;
              pbVar22 = pbVar22 + 0x10;
              lVar14 = lVar14 + -1;
              lVar16 = lVar21;
            } while (lVar19 != lVar21);
          }
        }
      }
      puVar12 = puStack_58;
      if (lVar16 < lVar13) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101f289fc);
        (*pcVar5)();
      }
      puVar10 = puStack_58;
      func_0x000107c61558();
      puVar11 = puVar12;
      if (((ulong)puVar10 & 1) == 0) {
        puVar11 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar12 + 0x10) + 1,1,puVar12);
      }
      uVar7 = *(ulong *)(puVar11 + 0x10);
      puVar12 = puVar11;
      if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar7) {
        puVar12 = (undefined *)(ulong)(1 < *(ulong *)(puVar11 + 0x18));
        func_0x0001000a91e0(puVar12,uVar7 + 1,1,puVar11);
      }
      *(ulong *)(puVar12 + 0x10) = uVar7 + 1;
      *(long *)(puVar12 + uVar7 * 0x10 + 0x20) = lVar13;
      *(long *)(puVar12 + uVar7 * 0x10 + 0x28) = lVar16;
      param_2 = (undefined *)*param_1;
      puStack_58 = puVar12;
      if (param_2 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101f28a30);
        (*pcVar5)();
      }
      FUN_101f28b90(&puStack_58,param_2,param_3);
      puVar12 = puStack_58;
      if (unaff_x21 != 0) goto LAB_101f289cc;
      lVar14 = param_3[1];
      lVar13 = lVar16;
    } while (lVar16 < lVar14);
  }
  puVar12 = puStack_58;
  lVar14 = *param_1;
  if (lVar14 == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x101f28a38);
    (*pcVar5)();
  }
  puVar10 = puStack_58;
  func_0x000107c61558();
  if (((ulong)puVar10 & 1) == 0) {
    func_0x000100e06d54();
  }
  uVar7 = *(ulong *)(puVar12 + 0x10);
  while (puStack_58 = puVar12, 1 < uVar7) {
    lVar13 = *param_3;
    if (lVar13 == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x101f28a34);
      (*pcVar5)();
    }
    lVar21 = uVar7 - 1;
    lVar16 = *(long *)(puVar12 + uVar7 * 0x10);
    lVar19 = *(long *)(puVar12 + lVar21 * 0x10 + 0x28);
    FUN_101f28df8(lVar13 + lVar16 * 0x10,lVar13 + *(long *)(puVar12 + lVar21 * 0x10 + 0x20) * 0x10,
                  lVar13 + lVar19 * 0x10,lVar14);
    if (unaff_x21 != 0) break;
    if (lVar19 < lVar16) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x101f28a00);
      (*pcVar5)();
    }
    puVar10 = puVar12;
    func_0x000107c61558();
    if (((ulong)puVar10 & 1) == 0) {
      func_0x000100e06d54();
    }
    if (*(ulong *)(puVar12 + 0x10) <= uVar7 - 2) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x101f28a04);
      (*pcVar5)();
    }
    *(long *)(puVar12 + uVar7 * 0x10) = lVar16;
    *(long *)((long)(puVar12 + uVar7 * 0x10) + 8) = lVar19;
    puStack_58 = puVar12;
    func_0x0001000a97cc(lVar21);
    puVar12 = puStack_58;
    uVar7 = *(ulong *)(puStack_58 + 0x10);
  }
LAB_101f289cc:
  func_0x000107c6142c(puVar12);
  return;
}



/* Entry: 101f28a38; end: 101f28b8f;  */

void FUN_101f28a38(long param_1,undefined *param_2,undefined *param_3,long *param_4)

{
  byte bVar1;
  undefined *puVar2;
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  ulong *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  byte *pbVar11;
  byte *pbVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong uStack_80;
  undefined *puStack_78;
  ulong uStack_70;
  undefined *puStack_68;
  
  puVar2 = PTR___sSSN_11034da80;
  if (param_3 != param_2) {
    lVar10 = *param_4;
    pbVar11 = (byte *)(lVar10 + (long)param_3 * 0x10);
    param_1 = param_1 - (long)param_3;
    puVar9 = param_2;
    do {
      pbVar12 = (byte *)(lVar10 + (long)param_3 * 0x10);
      bVar1 = *pbVar12;
      uVar15 = *(undefined8 *)(pbVar12 + 8);
      puVar7 = puVar9;
      pbVar12 = pbVar11;
      lVar14 = param_1;
      do {
        uVar5 = (ulong)bVar1;
        uVar13 = (ulong)pbVar12[-0x10];
        uVar16 = *(undefined8 *)(pbVar12 + -8);
        func_0x000103053cd4();
        puVar8 = puVar7;
        uStack_70 = uVar5;
        puStack_68 = puVar7;
        func_0x000103053cd4();
        uStack_80 = uVar13;
        puStack_78 = puVar8;
        func_0x000100e8b654();
        func_0x000107c6157c(uVar15);
        func_0x000107c6157c(uVar16);
        puVar6 = &uStack_80;
        puVar9 = puVar2;
        func_0x000107c6020c(puVar6,puVar2,puVar2,uVar13,uVar13);
        func_0x000107c61574(uVar15);
        func_0x000107c61574(uVar16);
        func_0x000107c6142c(puVar7);
        func_0x000107c6142c(puVar8);
        if (puVar6 != (ulong *)0xffffffffffffffff) break;
        if (lVar10 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101f28b90);
          (*pcVar3)();
        }
        bVar1 = *pbVar12;
        uVar15 = *(undefined8 *)(pbVar12 + 8);
        *(undefined8 *)(pbVar12 + 8) = *(undefined8 *)(pbVar12 + -8);
        *(undefined8 *)pbVar12 = *(undefined8 *)(pbVar12 + -0x10);
        *(undefined8 *)(pbVar12 + -8) = uVar15;
        pbVar12 = pbVar12 + -0x10;
        *pbVar12 = bVar1;
        bVar4 = lVar14 != -1;
        lVar14 = lVar14 + 1;
        puVar7 = puVar9;
      } while (bVar4);
      param_3 = param_3 + 1;
      pbVar11 = pbVar11 + 0x10;
      param_1 = param_1 + -1;
    } while (param_3 != param_2);
  }
  return;
}



/* Entry: 101f28b90; end: 101f28df7;  */

undefined8 FUN_101f28b90(ulong *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x21;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  uVar8 = *param_1;
  if (1 < *(ulong *)(uVar8 + 0x10)) {
    uVar6 = uVar8;
    func_0x000107c61558();
    if ((uVar6 & 1) == 0) {
      func_0x000100e06d54();
    }
    *param_1 = uVar8;
    uVar6 = *(ulong *)(uVar8 + 0x10);
    do {
      lVar9 = uVar6 - 1;
      if (uVar6 < 4) {
        if (uVar6 == 3) {
          bVar5 = SBORROW8(*(long *)(uVar8 + 0x28),*(long *)(uVar8 + 0x20));
          lVar7 = *(long *)(uVar8 + 0x28) - *(long *)(uVar8 + 0x20);
          goto LAB_101f28c64;
        }
        if (uVar6 < 2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101f28de0);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar7 = *plVar1;
        lVar12 = plVar1[1];
        bVar5 = SBORROW8(lVar12,lVar7);
        lVar12 = lVar12 - lVar7;
LAB_101f28cc8:
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101f28dd0);
          (*pcVar4)();
        }
        lVar7 = uVar8 + lVar9 * 0x10;
        lVar2 = *(long *)(lVar7 + 0x20);
        lVar7 = *(long *)(lVar7 + 0x28);
        if (SBORROW8(lVar7,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101f28dd8);
          (*pcVar4)();
        }
        lVar10 = lVar9;
        if (lVar7 - lVar2 < lVar12) {
          return 1;
        }
      }
      else {
        lVar12 = uVar8 + 0x20 + uVar6 * 0x10;
        if (SBORROW8(*(long *)(lVar12 + -0x38),*(long *)(lVar12 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101f28db8);
          (*pcVar4)();
        }
        lVar7 = *(long *)(lVar12 + -0x28) - *(long *)(lVar12 + -0x30);
        if (SBORROW8(*(long *)(lVar12 + -0x28),*(long *)(lVar12 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101f28dbc);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar2 = *plVar1;
        lVar10 = plVar1[1];
        lVar3 = lVar10 - lVar2;
        if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101f28dc4);
          (*pcVar4)();
        }
        if (SCARRY8(lVar7,lVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101f28dcc);
          (*pcVar4)();
        }
        bVar5 = false;
        if (lVar7 + lVar3 < *(long *)(lVar12 + -0x38) - *(long *)(lVar12 + -0x40)) {
LAB_101f28c64:
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101f28dc0);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar12 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101f28dc8);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar3 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101f28dd4);
            (*pcVar4)();
          }
          if (SCARRY8(lVar12,lVar3)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101f28ddc);
            (*pcVar4)();
          }
          bVar5 = false;
          if (lVar12 + lVar3 < lVar7) goto LAB_101f28cc8;
          lVar10 = uVar6 - 2;
          if (lVar3 <= lVar7) {
            lVar10 = lVar9;
          }
        }
        else {
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar12 = *plVar1;
          lVar2 = plVar1[1];
          if (SBORROW8(lVar2,lVar12)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101f28de4);
            (*pcVar4)();
          }
          lVar10 = uVar6 - 2;
          if (lVar2 - lVar12 <= lVar7) {
            lVar10 = lVar9;
          }
        }
      }
      uVar11 = lVar10 - 1;
      if (uVar6 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101f28dac);
        (*pcVar4)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101f28df8);
        (*pcVar4)();
      }
      lVar12 = *(long *)(uVar8 + 0x20 + uVar11 * 0x10);
      plVar1 = (long *)(uVar8 + 0x20 + lVar10 * 0x10);
      lVar7 = plVar1[1];
      FUN_101f28df8(lVar9 + lVar12 * 0x10,lVar9 + *plVar1 * 0x10,lVar9 + lVar7 * 0x10,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar7 < lVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101f28db0);
        (*pcVar4)();
      }
      uVar6 = uVar8;
      func_0x000107c61558();
      if ((uVar6 & 1) == 0) {
        func_0x000100e06d54();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101f28db4);
        (*pcVar4)();
      }
      lVar9 = uVar8 + uVar11 * 0x10;
      *(long *)(lVar9 + 0x20) = lVar12;
      *(long *)(lVar9 + 0x28) = lVar7;
      *param_1 = uVar8;
      func_0x0001000a97cc(lVar10);
      uVar8 = *param_1;
      uVar6 = *(ulong *)(uVar8 + 0x10);
    } while (1 < uVar6);
  }
  return 1;
}



/* Entry: 101f28df8; end: 101f2919b;  */

undefined8 FUN_101f28df8(byte *param_1,byte *param_2,byte *param_3,byte *param_4)

{
  ulong uVar1;
  ulong *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  long lVar6;
  byte *pbVar7;
  long lVar8;
  byte *pbVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  byte *pbVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uStack_80;
  byte *pbStack_78;
  ulong uStack_70;
  byte *pbStack_68;
  
  lVar10 = (long)param_2 - (long)param_1;
  lVar6 = lVar10 + 0xf;
  if (-1 < lVar10) {
    lVar6 = lVar10;
  }
  lVar6 = lVar6 >> 4;
  lVar12 = (long)param_3 - (long)param_2;
  lVar8 = lVar12 + 0xf;
  if (-1 < lVar12) {
    lVar8 = lVar12;
  }
  lVar8 = lVar8 >> 4;
  if (lVar6 < lVar8) {
    if (((param_4 < param_1) || (param_1 + lVar6 * 0x10 <= param_4)) || (param_4 != param_1)) {
      func_0x000107c610b8(param_4,param_1,lVar6 << 4);
    }
    pbVar9 = param_4 + lVar6 * 0x10;
    pbVar4 = param_1;
    if (0xf < lVar10) {
      do {
        if (param_3 <= param_2) break;
        uVar14 = *(undefined8 *)(param_2 + 8);
        uVar15 = *(undefined8 *)(param_4 + 8);
        uVar1 = (ulong)*param_2;
        uVar11 = (ulong)*param_4;
        pbVar3 = param_2;
        func_0x000103053cd4();
        pbVar7 = pbVar3;
        uStack_70 = uVar1;
        pbStack_68 = pbVar3;
        func_0x000103053cd4();
        uStack_80 = uVar11;
        pbStack_78 = pbVar7;
        func_0x000100e8b654();
        func_0x000107c6157c(uVar14);
        func_0x000107c6157c(uVar15);
        puVar2 = &uStack_80;
        func_0x000107c6020c(puVar2,PTR___sSSN_11034da80,PTR___sSSN_11034da80,uVar11,uVar11);
        func_0x000107c61574(uVar14);
        func_0x000107c61574(uVar15);
        func_0x000107c6142c(pbVar3);
        func_0x000107c6142c(pbVar7);
        if (puVar2 == (ulong *)0xffffffffffffffff) {
          pbVar7 = param_2 + 0x10;
          pbVar3 = param_2;
        }
        else {
          pbVar7 = param_2;
          pbVar3 = param_4;
          param_4 = param_4 + 0x10;
        }
        param_2 = pbVar7;
        if (pbVar4 != pbVar3) {
          uVar14 = *(undefined8 *)pbVar3;
          *(undefined8 *)(pbVar4 + 8) = *(undefined8 *)(pbVar3 + 8);
          *(undefined8 *)pbVar4 = uVar14;
        }
        pbVar4 = pbVar4 + 0x10;
      } while (param_4 < pbVar9);
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar8 * 0x10 <= param_4)) || (param_4 != param_2)) {
      func_0x000107c610b8(param_4,param_2,lVar8 << 4);
    }
    pbVar9 = param_4 + lVar8 * 0x10;
    pbVar4 = param_2;
    if ((param_1 < param_2) && (0xf < lVar12)) {
      do {
        pbVar7 = param_2 + -0x10;
        pbVar3 = param_3;
        while( true ) {
          param_3 = pbVar3 + -0x10;
          pbVar13 = pbVar9 + -0x10;
          uVar1 = (ulong)*pbVar13;
          uVar14 = *(undefined8 *)(pbVar9 + -8);
          uVar15 = *(undefined8 *)(param_2 + -8);
          uVar11 = (ulong)param_2[-0x10];
          pbVar4 = param_2;
          func_0x000103053cd4();
          pbVar5 = pbVar4;
          uStack_70 = uVar1;
          pbStack_68 = pbVar4;
          func_0x000103053cd4();
          uStack_80 = uVar11;
          pbStack_78 = pbVar5;
          func_0x000100e8b654();
          func_0x000107c6157c(uVar14);
          func_0x000107c6157c(uVar15);
          puVar2 = &uStack_80;
          func_0x000107c6020c(puVar2,PTR___sSSN_11034da80,PTR___sSSN_11034da80,uVar11,uVar11);
          func_0x000107c61574(uVar14);
          func_0x000107c61574(uVar15);
          func_0x000107c6142c(pbVar4);
          func_0x000107c6142c(pbVar5);
          if (puVar2 == (ulong *)0xffffffffffffffff) break;
          if (pbVar3 != pbVar9) {
            uVar14 = *(undefined8 *)pbVar13;
            *(undefined8 *)(pbVar3 + -8) = *(undefined8 *)(pbVar9 + -8);
            *(undefined8 *)param_3 = uVar14;
          }
          pbVar4 = param_2;
          pbVar9 = pbVar13;
          pbVar3 = param_3;
          if (pbVar13 <= param_4) goto LAB_101f29130;
        }
        if (pbVar3 != param_2) {
          uVar14 = *(undefined8 *)pbVar7;
          *(undefined8 *)(pbVar3 + -8) = *(undefined8 *)(param_2 + -8);
          *(undefined8 *)param_3 = uVar14;
        }
        pbVar4 = pbVar7;
      } while ((param_1 < pbVar7) && (param_2 = pbVar7, param_4 < pbVar9));
    }
  }
LAB_101f29130:
  uVar11 = (long)pbVar9 - (long)param_4;
  uVar1 = uVar11 + 0xf;
  if (-1 < (long)uVar11) {
    uVar1 = uVar11;
  }
  if ((pbVar4 != param_4) || (param_4 + (uVar1 & 0xfffffffffffffff0) <= pbVar4)) {
    func_0x000107c610b8(pbVar4,param_4,((long)uVar1 >> 4) << 4);
  }
  return 1;
}



/* Entry: 101f2919c; end: 101f291c7;  */

void FUN_101f2919c(long param_1)

{
  FUN_101f291c8(0,*(undefined8 *)(param_1 + 0x10),0,param_1,PTR__swift_release_11034f4c0);
  return;
}



/* Entry: 101f291c8; end: 101f292db;  */

undefined *
FUN_101f291c8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101f292dc);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112e412b8;
    func_0x0001000285a8(0x112e412b8,&UNK_10da2fbb8);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar1,puVar4,uVar6,&UNK_1104a09f0);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_5)(param_4);
  return puVar3;
}



/* Entry: 101f292dc; end: 101f2947b;  */

undefined * FUN_101f292dc(long param_1)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  
  lVar11 = *(long *)(param_1 + 0x10);
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar11 == 0) {
    lVar13 = 0;
  }
  else {
    lVar14 = 0;
    lVar13 = 0;
    plVar9 = (long *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x20);
    plVar12 = (long *)(param_1 + 0x28);
    do {
      lVar2 = plVar12[-1];
      lVar10 = *plVar12;
      if (lVar13 == 0) {
        uVar6 = *(ulong *)(puVar8 + 0x18);
        if ((long)((uVar6 >> 1) + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101f29478);
          (*pcVar3)();
        }
        uVar7 = uVar6 & 0xfffffffffffffffe;
        if ((long)uVar6 < 2) {
          uVar7 = 1;
        }
        puVar4 = (undefined *)0x112e412a8;
        func_0x0001000285a8(0x112e412a8,&UNK_10da2fba8);
        func_0x000107c613fc();
        func_0x000107c6157c(lVar10);
        puVar5 = puVar4;
        func_0x000107c610a4();
        *(ulong *)(puVar4 + 0x10) = uVar7;
        *(long *)(puVar4 + 0x18) = ((long)(puVar5 + -0x20) / 0x18) * 2;
        puVar1 = puVar4 + 0x20;
        uVar6 = *(ulong *)(puVar8 + 0x18) >> 1;
        plVar9 = (long *)(puVar1 + uVar6 * 0x18);
        lVar13 = ((long)(puVar5 + -0x20) / 0x18 & 0x7fffffffffffffffU) - uVar6;
        if (*(long *)(puVar8 + 0x10) != 0) {
          if (puVar4 != puVar8 || puVar8 + 0x20 + uVar6 * 0x18 <= puVar1) {
            func_0x000107c610b8(puVar1,puVar8 + 0x20,uVar6 * 0x18);
          }
          *(undefined8 *)(puVar8 + 0x10) = 0;
        }
        func_0x000107c61574(puVar8);
        puVar8 = puVar4;
      }
      else {
        func_0x000107c6157c(lVar10);
      }
      if (SBORROW8(lVar13,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101f29474);
        (*pcVar3)();
      }
      lVar13 = lVar13 + -1;
      *plVar9 = lVar14;
      lVar14 = lVar14 + 1;
      plVar12 = plVar12 + 2;
      *(char *)(plVar9 + 1) = (char)lVar2;
      plVar9[2] = lVar10;
      plVar9 = plVar9 + 3;
    } while (lVar11 != lVar14);
  }
  if (1 < *(ulong *)(puVar8 + 0x18)) {
    uVar6 = *(ulong *)(puVar8 + 0x18) >> 1;
    if (SBORROW8(uVar6,lVar13)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101f2947c);
      (*pcVar3)();
    }
    *(ulong *)(puVar8 + 0x10) = uVar6 - lVar13;
  }
  return puVar8;
}



/* Entry: 101f2947c; end: 101f294cf;  */

void FUN_101f2947c(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101f294d0; end: 101f294d7;  */

void FUN_101f294d0(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar6;
  long unaff_x20;
  undefined1 *puVar7;
  code *pcVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auStack_210 [8];
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  undefined1 auStack_1f0 [64];
  undefined1 auStack_1b0 [160];
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined1 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  
  plVar1 = (long *)(unaff_x20 + 0x10);
  lVar4 = 0x112e41288;
  puVar5 = &UNK_10da2fb90;
  lStack_208 = param_2;
  lStack_200 = param_1;
  func_0x0001000285a8();
  lStack_1f8 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_1f8 + 0x40));
  puVar7 = auStack_210 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = (long)puVar7 - extraout_x12;
  uVar12 = param_3;
  func_0x000103053cd4();
  uStack_c8 = 1;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_80 = 0;
  uVar10 = 0xff;
  uStack_78 = 0xff;
  uStack_110 = uVar12;
  puStack_108 = puVar5;
  func_0x000101f29548();
  func_0x000103064900(auStack_1b0,&uStack_110,&uStack_c0,FUN_101f26f24,0,&UNK_110603010,uVar12);
  puVar5 = &UNK_1104a0970;
  func_0x000107c613fc(&UNK_1104a0970,0x60,7);
  lVar11 = *plVar1;
  uVar13 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(puVar5 + 0x18) = *(undefined8 *)(unaff_x20 + 0x18);
  *(long *)(puVar5 + 0x10) = lVar11;
  *(undefined8 *)(puVar5 + 0x28) = uVar13;
  *(undefined8 *)(puVar5 + 0x20) = uVar12;
  uVar12 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined8 *)(puVar5 + 0x38) = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(puVar5 + 0x30) = uVar12;
  *(undefined8 *)(puVar5 + 0x48) = uVar14;
  *(undefined8 *)(puVar5 + 0x40) = uVar13;
  puVar5[0x50] = (char)param_3;
  *(undefined8 *)(puVar5 + 0x58) = param_4;
  func_0x000101f27e28(plVar1,auStack_1f0);
  func_0x000107c6157c(param_4);
  uVar12 = 0x112e41298;
  uVar13 = uVar12;
  func_0x0001000285a8(0x112e41298,&UNK_10da2fb98);
  func_0x00010306583c(lVar9,FUN_101f29588,puVar5,uVar13);
  func_0x000107c61574(puVar5);
  puVar6 = auStack_1b0;
  FUN_101f29598(puVar6,0x112e41298,&UNK_10da2fb98);
  if (lStack_208 < *(long *)(*plVar1 + 0x10) + -1) {
    func_0x00010306d06c();
    func_0x000101f295ec();
    uVar10 = uVar12;
  }
  else {
    puVar6 = (undefined1 *)0x0;
  }
  lVar3 = lStack_1f8;
  pcVar8 = *(code **)(lStack_1f8 + 0x10);
  (*pcVar8)(puVar7,lVar9,lVar4);
  lVar2 = lStack_200;
  (*pcVar8)(lStack_200,puVar7,lVar4);
  lVar11 = 0x112e412a0;
  func_0x0001000285a8(0x112e412a0,&UNK_10da2fba0);
  plVar1 = (long *)(lVar2 + *(int *)(lVar11 + 0x30));
  func_0x000101f295d8(puVar6,uVar10);
  func_0x000101f295fc(puVar6,uVar10);
  *plVar1 = (long)puVar6;
  *(char *)(plVar1 + 1) = (char)uVar10;
  pcVar8 = *(code **)(lVar3 + 8);
  (*pcVar8)(lVar9,lVar4);
  func_0x000101f295fc(puVar6,uVar10);
  (*pcVar8)(puVar7,lVar4);
  return;
}



/* Entry: 101f294d8; end: 101f29507;  */

void FUN_101f294d8(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,*(undefined1 *)(param_1 + 1),param_1[2]);
  return;
}



/* Entry: 101f29508; end: 101f29587;  */

void FUN_101f29508(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e41278 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db7e8c0;
  func_0x000107c61520(&UNK_10db7e8c0,&UNK_110601b68);
  puRam0000000112e41278 = puVar1;
  return;
}



/* Entry: 101f29588; end: 101f29597;  */

void FUN_101f29588(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x000100083b20(&uStack_68,unaff_x20 + 0x10,*(undefined1 *)(unaff_x20 + 0x50),
                      *(undefined8 *)(unaff_x20 + 0x58));
  uVar1 = uStack_68;
  func_0x000107c614f0(uStack_68);
  lVar2 = lStack_60;
  (**(code **)(lStack_60 + 8))();
  func_0x000107c615e8(uStack_68);
  func_0x000100083b20(&uStack_68);
  func_0x0001000a8868(&uStack_68,uStack_50);
  (**(code **)(lStack_48 + 8))(uVar1,lVar2,uStack_50,lStack_48);
  func_0x000107c615e8(uVar1);
  func_0x0001000834e4(&uStack_68);
  return;
}



/* Entry: 101f29598; end: 101f295d7;  */

undefined8 FUN_101f29598(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 101f295d8; end: 101f2961f;  */

void FUN_101f295d8(undefined8 param_1,char param_2)

{
  if (param_2 == -1) {
    return;
  }
  if (param_2 != '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 101f29620; end: 101f29663;  */

undefined8 FUN_101f29620(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_101f25c2c();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 101f29664; end: 101f2999b;  */

/* WARNING: Removing unreachable block (ram,0x000101f29990) */

void FUN_101f29664(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long lVar15;
  undefined **ppuVar16;
  code *pcVar17;
  long alStack_100 [3];
  long lStack_e8;
  undefined **ppuStack_e0;
  undefined *apuStack_d8 [3];
  undefined8 uStack_c0;
  long lStack_b8;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  apuStack_d8[0] = (undefined *)((ulong)apuStack_d8[0] & 0xffffffffffffff00);
  ppuVar5 = apuStack_d8;
  func_0x000107c5f728(&uStack_78,ppuVar5,PTR___sSbN_11034dd40);
  func_0x000103053f10();
  puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar13 = ppuVar5[2];
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar13 != (undefined *)0x0) {
    ppuVar16 = ppuVar5 + 4;
    do {
      uVar2 = *(undefined1 *)ppuVar16;
      alStack_100[0] = CONCAT71(alStack_100[0]._1_7_,uVar2);
      func_0x0001008f0ca8(apuStack_d8,alStack_100);
      puVar3 = apuStack_d8[0];
      if (apuStack_d8[0] != (undefined *)0x0) {
        puVar6 = puVar7;
        func_0x000107c61558();
        puVar8 = puVar7;
        if (((ulong)puVar6 & 1) == 0) {
          puVar8 = (undefined *)0x0;
          FUN_101f291c8(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7,
                        PTR__swift_bridgeObjectRelease_11034f258);
        }
        uVar1 = *(ulong *)(puVar8 + 0x10);
        puVar7 = puVar8;
        if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
          puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
          FUN_101f291c8(puVar7,uVar1 + 1,1,puVar8,PTR__swift_bridgeObjectRelease_11034f258);
        }
        *(ulong *)(puVar7 + 0x10) = uVar1 + 1;
        puVar7[uVar1 * 0x10 + 0x20] = uVar2;
        *(undefined **)(puVar7 + uVar1 * 0x10 + 0x28) = puVar3;
      }
      puVar13 = puVar13 + -1;
      ppuVar16 = (undefined **)((long)ppuVar16 + 1);
    } while (puVar13 != (undefined *)0x0);
  }
  func_0x000107c6142c(ppuVar5);
  apuStack_d8[0] = puVar7;
  func_0x000107c61434(puVar7);
  FUN_101f28100(apuStack_d8);
  func_0x000107c6142c(puVar7);
  puStack_a8 = apuStack_d8[0];
  lVar9 = 0;
  func_0x000101f25954();
  lVar10 = lVar9;
  func_0x000107c613fc();
  *(undefined8 *)(lVar10 + 0x10) = puVar12;
  lVar11 = lVar10;
  func_0x000103c5dc38();
  puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  for (lVar15 = *(long *)(lVar11 + 0x10); lVar15 != 0; lVar15 = lVar15 + -1) {
    func_0x0001008f0ca8(apuStack_d8);
    puVar12 = apuStack_d8[0];
    if (apuStack_d8[0] != (undefined *)0x0) {
      func_0x000100083b20(alStack_100);
      func_0x000107c61574(puVar12);
      FUN_101f2999c(alStack_100,apuStack_d8);
      FUN_101f299b4(apuStack_d8,alStack_100);
      puVar12 = puVar13;
      func_0x000107c61558();
      puVar7 = puVar13;
      if (((ulong)puVar12 & 1) == 0) {
        puVar7 = (undefined *)0x0;
        FUN_101f281fc(0,*(long *)(puVar13 + 0x10) + 1,1,puVar13);
      }
      uVar1 = *(ulong *)(puVar7 + 0x10);
      puVar13 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
        puVar13 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
        FUN_101f281fc(puVar13,uVar1 + 1,1,puVar7);
      }
      *(ulong *)(puVar13 + 0x10) = uVar1 + 1;
      FUN_101f2999c(alStack_100,puVar13 + uVar1 * 0x28 + 0x20);
      lVar4 = lStack_b8;
      uVar14 = uStack_c0;
      func_0x0001000a8868(apuStack_d8,uStack_c0);
      ppuStack_e0 = &PTR_DAT_1104a08b0;
      pcVar17 = *(code **)(lVar4 + 8);
      alStack_100[0] = lVar10;
      lStack_e8 = lVar9;
      func_0x000107c6157c(lVar10);
      (*pcVar17)(alStack_100,uVar14,lVar4);
      func_0x0001000834e4(alStack_100);
      func_0x0001000834e4(apuStack_d8);
    }
    puVar12 = puVar13;
  }
  func_0x000107c61574(param_3);
  func_0x000107c6142c(lVar11);
  func_0x000107c61574(param_2);
  puStack_a0 = puVar12;
  func_0x000107c61428((undefined8 *)(lVar10 + 0x10),apuStack_d8,0,0);
  uVar14 = *(undefined8 *)(lVar10 + 0x10);
  func_0x000107c61434(uVar14);
  func_0x000107c61574(lVar10);
  param_1[1] = puStack_a0;
  *param_1 = puStack_a8;
  param_1[3] = param_4;
  param_1[2] = uVar14;
  param_1[5] = param_6;
  param_1[4] = param_5;
  param_1[7] = uStack_70;
  param_1[6] = uStack_78;
  return;
}



/* Entry: 101f2999c; end: 101f299b3;  */

undefined8 * FUN_101f2999c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 101f299b4; end: 101f299f7;  */

long FUN_101f299b4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 101f299f8; end: 101f299ff;  */

void FUN_101f299f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 101f29a00; end: 101f29a77;  */

undefined1 * FUN_101f29a00(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 101f29a78; end: 101f29b0b;  */

int FUN_101f29a78(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101f29b0c; end: 101f29b4f;  */

void FUN_101f29b0c(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    func_0x000107c61520(param_4,param_2);
    *param_1 = param_4;
  }
  return;
}



/* Entry: 101f29b50; end: 101f29b5b;  */

void FUN_101f29b50(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e41278 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db7e8c0;
  func_0x000107c61520(&UNK_10db7e8c0,&UNK_110601b68);
  puRam0000000112e41278 = puVar1;
  return;
}



/* Entry: 101f29b5c; end: 101f29c0b;  */

void FUN_101f29b5c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar3 = &UNK_1104a0b40;
  func_0x000107c613fc(&UNK_1104a0b40,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x0001000285a8(0x112e412e8,&UNK_10da2fc50);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_101f29c48;
  func_0x0001008f0b08(FUN_101f29c48,puVar3);
  func_0x0001008f0b74(&UNK_10da2fc30,0x1f,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 101f29c0c; end: 101f29c1b;  */

undefined1  [16] FUN_101f29c0c(void)

{
  return ZEXT816(0x1104a0b20);
}



/* Entry: 101f29c1c; end: 101f29c47;  */

void FUN_101f29c1c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101f29c48; end: 101f29ccf;  */

void FUN_101f29c48(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112e412f0,&UNK_10da2fc58);
  func_0x0001000838ec();
  uVar1 = param_2;
  FUN_101f29ec0();
  func_0x0001002acff8("MapEntryPointProvider",0x15,2);
  func_0x000107c61574(param_2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101f29cd0; end: 101f29d1b;  */

void FUN_101f29cd0(undefined8 param_1)

{
  func_0x0001000285a8(0x112e412f8,&UNK_10da2fc60);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_101f29d70,param_1);
  return;
}



/* Entry: 101f29d1c; end: 101f29d6f;  */

void FUN_101f29d1c(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_2;
  FUN_101f29ea0();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(long *)(lVar2 + 0x10) = param_2;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_1104a0bd8;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 101f29d70; end: 101f29d77;  */

void FUN_101f29d70(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  FUN_101f29ea0();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(long *)(lVar2 + 0x10) = unaff_x20;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_1104a0bd8;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 101f29d78; end: 101f29da7;  */

void FUN_101f29d78(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 101f29da8; end: 101f29dcb;  */

void FUN_101f29da8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101f29dcc; end: 101f29e53;  */

void FUN_101f29dcc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_40;
  undefined **ppuStack_38;
  
  func_0x000100083b20(&uStack_58);
  uVar1 = uStack_58;
  func_0x000107c614f0(uStack_58);
  puStack_40 = &UNK_1104a5f40;
  ppuStack_38 = &PTR_DAT_1104a5f28;
  func_0x000104471544(&uStack_58,param_1,param_2,uVar1,uStack_50);
  func_0x000107c615e8(uStack_58);
  func_0x0001000834e4(&uStack_58);
  return;
}



/* Entry: 101f29e54; end: 101f29e8f;  */

undefined8 FUN_101f29e54(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&DAT_103071730)(param_2,param_1);
  return param_2;
}



/* Entry: 101f29e90; end: 101f29e9f;  */

undefined1  [16] FUN_101f29e90(void)

{
  return ZEXT816(0x1104a0bf8);
}



/* Entry: 101f29ea0; end: 101f29ebf;  */

void FUN_101f29ea0(void)

{
  func_0x000107c61168(&PTR_PTR_112e41348);
  return;
}



/* Entry: 101f29ec0; end: 101f29f63;  */

void FUN_101f29ec0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104a0c30;
  func_0x000107c613fc(&UNK_1104a0c30,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x0001000285a8(0x112e413a8,&UNK_10da2fd10);
  func_0x000107c613fc();
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001002acf1c(FUN_101f2a0b0,puVar1);
  return;
}



/* Entry: 101f29f64; end: 101f2a0af;  */

void FUN_101f29f64(undefined8 *param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined1 uStack_c9;
  undefined1 auStack_c8 [24];
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [48];
  
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(auStack_c8);
  FUN_101f2a0cc(auStack_c8,param_1 + 2);
  func_0x0001000a8868(auStack_c8,uStack_b0);
  pcVar4 = *(code **)(lStack_a8 + 8);
  func_0x000107c6157c(uStack_98);
  puVar2 = auStack_80;
  uVar3 = uStack_b0;
  (*pcVar4)(puVar2,uStack_b0,lStack_a8);
  func_0x0001048580f8(param_1 + 9);
  FUN_101f2a0cc(auStack_80,param_1 + 0x10);
  uStack_c9 = 1;
  func_0x000107c615f0(uStack_90);
  func_0x000107c5f728(param_1 + 0x15,&uStack_c9,&UNK_1104a5690);
  puVar1 = PTR___sSbN_11034dd40;
  uStack_c9 = 0;
  func_0x000107c5f728(param_1 + 0x17,&uStack_c9,PTR___sSbN_11034dd40);
  uStack_c9 = 0;
  func_0x000107c5f728(param_1 + 0x19,&uStack_c9,puVar1);
  func_0x000101f2a110(&uStack_a0);
  param_1[1] = uStack_98;
  *param_1 = uStack_a0;
  param_1[7] = puVar2;
  param_1[8] = uVar3;
  param_1[0xf] = uStack_88;
  param_1[0xe] = uStack_90;
  func_0x0001000834e4(auStack_c8);
  return;
}



/* Entry: 101f2a0b0; end: 101f2a0cb;  */

void FUN_101f2a0b0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  code *pcVar4;
  undefined1 uStack_c9;
  undefined1 auStack_c8 [24];
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [48];
  
  func_0x000100083b20(&uStack_a0,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100083b20(auStack_c8);
  FUN_101f2a0cc(auStack_c8,param_1 + 2);
  func_0x0001000a8868(auStack_c8,uStack_b0);
  pcVar4 = *(code **)(lStack_a8 + 8);
  func_0x000107c6157c(uStack_98);
  puVar2 = auStack_80;
  uVar3 = uStack_b0;
  (*pcVar4)(puVar2,uStack_b0,lStack_a8);
  func_0x0001048580f8(param_1 + 9);
  FUN_101f2a0cc(auStack_80,param_1 + 0x10);
  uStack_c9 = 1;
  func_0x000107c615f0(uStack_90);
  func_0x000107c5f728(param_1 + 0x15,&uStack_c9,&UNK_1104a5690);
  puVar1 = PTR___sSbN_11034dd40;
  uStack_c9 = 0;
  func_0x000107c5f728(param_1 + 0x17,&uStack_c9,PTR___sSbN_11034dd40);
  uStack_c9 = 0;
  func_0x000107c5f728(param_1 + 0x19,&uStack_c9,puVar1);
  func_0x000101f2a110(&uStack_a0);
  param_1[1] = uStack_98;
  *param_1 = uStack_a0;
  param_1[7] = puVar2;
  param_1[8] = uVar3;
  param_1[0xf] = uStack_88;
  param_1[0xe] = uStack_90;
  func_0x0001000834e4(auStack_c8);
  return;
}



/* Entry: 101f2a0cc; end: 101f2a143;  */

long FUN_101f2a0cc(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 101f2a144; end: 101f2a233;  */

void FUN_101f2a144(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e413b0,&UNK_10da2fd40);
  puVar1 = &UNK_1104a0c78;
  func_0x000107c613fc(&UNK_1104a0c78,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_101f2a234,puVar1);
  return;
}



/* Entry: 101f2a234; end: 101f2a23b;  */

void FUN_101f2a234(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uStack_38;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100083b20(&uStack_38);
  FUN_101f2a420();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = uStack_38;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_1104a0c90;
  *param_1 = lVar2;
  return;
}



/* Entry: 101f2a23c; end: 101f2a26b;  */

void FUN_101f2a23c(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 101f2a26c; end: 101f2a34b;  */

void FUN_101f2a26c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uStack_178;
  undefined1 auStack_170 [216];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [40];
  
  FUN_101b6dd08(param_4,auStack_78);
  uStack_98 = param_5;
  uStack_90 = param_6;
  uStack_88 = param_2;
  uStack_80 = param_3;
  func_0x000107c6157c(param_6);
  func_0x000107c615f0(param_2);
  func_0x0001008f0ca8(&uStack_178,&uStack_98);
  func_0x0001048580f8(auStack_170);
  func_0x000107c61574(uStack_178);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar1);
  pcVar3 = *(code **)(lVar2 + 8);
  FUN_101f2a34c();
  (*pcVar3)(auStack_170,&UNK_1104a0d88,param_1,uVar1,lVar2);
  FUN_101f2a38c(auStack_170);
  func_0x000101f2a110(&uStack_98);
  return;
}



/* Entry: 101f2a34c; end: 101f2a38b;  */

void FUN_101f2a34c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e413b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da2fe28;
  func_0x000107c61520(&UNK_10da2fe28,&UNK_1104a0d88);
  puRam0000000112e413b8 = puVar1;
  return;
}



/* Entry: 101f2a38c; end: 101f2a3bf;  */

undefined8 FUN_101f2a38c(undefined8 param_1)

{
  (*(code *)(undefined *)0x101f2c6e8)();
  return param_1;
}



/* Entry: 101f2a3c0; end: 101f2a3e3;  */

void FUN_101f2a3c0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101f2a3e4; end: 101f2a403;  */

void FUN_101f2a3e4(void)

{
  FUN_101f2a26c();
  return;
}



/* Entry: 101f2a404; end: 101f2a41f;  */

undefined ** FUN_101f2a404(void)

{
  return &PTR_DAT_112ffc1c0;
}



/* Entry: 101f2a420; end: 101f2a43f;  */

void FUN_101f2a420(void)

{
  func_0x000107c61168(&PTR_PTR_112e41418);
  return;
}



/* Entry: 101f2a440; end: 101f2a4b7;  */

void FUN_101f2a440(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 uStack_31;
  
  uVar2 = *param_1;
  uVar3 = 0x112e414e0;
  uStack_31 = uVar2;
  func_0x0001000285a8(0x112e414e0,&UNK_10da2fea0);
  func_0x000107c5f730(&uStack_31,uVar3);
  uVar3 = *(undefined8 *)(param_4 + 0x38);
  lVar1 = *(long *)(param_4 + 0x40);
  func_0x000107c614f0(uVar3);
  (**(code **)(lVar1 + 0x10))(uVar2,uVar3,lVar1);
  return;
}



/* Entry: 101f2a4b8; end: 101f2ab03;  */

void FUN_101f2a4b8(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar13;
  long lVar14;
  long alStack_180 [6];
  long *plStack_150;
  long *plStack_148;
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
  undefined1 auStack_80 [16];
  
  lVar2 = 0;
  alStack_180[2] = param_1;
  func_0x000107c5fd0c();
  alStack_180[3] = *(long *)(lVar2 + -8);
  alStack_180[4] = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(alStack_180[3] + 0x40));
  lVar13 = (long)alStack_180 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x112e41480;
  func_0x0001000285a8(0x112e41480,&UNK_10da2fde0);
  alStack_180[1] = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = lVar13 - extraout_x8_00;
  uVar3 = 0x112e41488;
  func_0x0001000285a8(0x112e41488,&UNK_10da2fde8);
  uVar11 = 0x112e41490;
  func_0x00010002969c(0x112e41490,&UNK_10da2fdf0);
  uVar4 = 0x112e41498;
  func_0x00010002969c(0x112e41498,&UNK_10da2fdf8);
  uVar5 = 0x112e414a0;
  func_0x00010002969c(0x112e414a0,&UNK_10da2fe00);
  uVar6 = 0x112e414a8;
  func_0x00010002969c(0x112e414a8,&UNK_10da2fe08);
  uVar7 = uVar6;
  FUN_101f2ab0c();
  plVar8 = alStack_180 + 5;
  alStack_180[5] = uVar6;
  plStack_150 = (long *)uVar7;
  func_0x000107c614f4(plVar8,
                      PTR___s7SwiftUI4ViewPAAE15navigationTitleyQrAA18LocalizedStringKeyVFQOMQ_110349508
                      ,1);
  plVar9 = alStack_180 + 5;
  alStack_180[5] = uVar5;
  plStack_150 = plVar8;
  func_0x000107c614f4(plVar9,
                      PTR___s7SwiftUI4ViewPAAE29navigationBarTitleDisplayModeyQrAA010NavigationE4ItemV0fgH0OFQOMQ_1103495f8
                      ,1);
  uVar5 = 0x112e414b8;
  FUN_101f2ce30(0x112e414b8,0x112e41498,&UNK_10da2fdf8,
                PTR___s7SwiftUI19TupleToolbarContentVyxGAA0dE0AAMc_110348e30);
  plVar8 = alStack_180 + 5;
  alStack_180[5] = uVar11;
  plStack_150 = (long *)uVar4;
  plStack_148 = plVar9;
  uStack_140 = uVar5;
  func_0x000107c614f4(plVar8,
                      PTR___s7SwiftUI4ViewPAAE7toolbar7contentQrqd__yXE_tAA14ToolbarContentRd__lFQOMQ_110349658
                      ,1);
  func_0x00010306b210(lVar14,FUN_101f2ab04,auStack_80,uVar3,plVar8);
  FUN_101f2c150();
  puVar10 = &UNK_1104a0ce0;
  func_0x000107c613fc(&UNK_1104a0ce0,0xe8,7);
  lVar2 = alStack_180[1];
  *(undefined8 *)(puVar10 + 0xb8) = uStack_b0;
  *(undefined8 *)(puVar10 + 0xb0) = uStack_b8;
  *(undefined8 *)(puVar10 + 200) = uStack_a0;
  *(undefined8 *)(puVar10 + 0xc0) = uStack_a8;
  *(undefined8 *)(puVar10 + 0xd8) = uStack_90;
  *(undefined8 *)(puVar10 + 0xd0) = uStack_98;
  *(undefined8 *)(puVar10 + 0xe0) = uStack_88;
  *(undefined8 *)(puVar10 + 0x78) = uStack_f0;
  *(undefined8 *)(puVar10 + 0x70) = uStack_f8;
  *(undefined8 *)(puVar10 + 0x88) = uStack_e0;
  *(undefined8 *)(puVar10 + 0x80) = uStack_e8;
  *(undefined8 *)(puVar10 + 0x98) = uStack_d0;
  *(undefined8 *)(puVar10 + 0x90) = uStack_d8;
  *(undefined8 *)(puVar10 + 0xa8) = uStack_c0;
  *(undefined8 *)(puVar10 + 0xa0) = uStack_c8;
  *(undefined8 *)(puVar10 + 0x38) = uStack_130;
  *(undefined8 *)(puVar10 + 0x30) = uStack_138;
  *(undefined8 *)(puVar10 + 0x48) = uStack_120;
  *(undefined8 *)(puVar10 + 0x40) = uStack_128;
  *(undefined8 *)(puVar10 + 0x58) = uStack_110;
  *(undefined8 *)(puVar10 + 0x50) = uStack_118;
  *(undefined8 *)(puVar10 + 0x68) = uStack_100;
  *(undefined8 *)(puVar10 + 0x60) = uStack_108;
  *(long **)(puVar10 + 0x18) = plStack_150;
  *(long *)(puVar10 + 0x10) = alStack_180[5];
  *(undefined8 *)(puVar10 + 0x28) = uStack_140;
  *(long **)(puVar10 + 0x20) = plStack_148;
  puVar1 = (undefined8 *)(lVar14 + *(int *)(alStack_180[1] + 0x24));
  *puVar1 = FUN_101f2c184;
  puVar1[1] = puVar10;
  puVar1[2] = 0;
  puVar1[3] = 0;
  FUN_101f2c150();
  uVar11 = 0;
  func_0x000107c5fcec();
  func_0x000107c5fce8();
  uVar3 = uVar11;
  func_0x000100eea164();
  puVar10 = &UNK_1104a0d08;
  func_0x000107c613fc(&UNK_1104a0d08,0xf8,7);
  *(undefined8 *)(puVar10 + 0x10) = uVar11;
  *(undefined8 *)(puVar10 + 0x18) = uVar3;
  *(undefined8 *)(puVar10 + 200) = uStack_b0;
  *(undefined8 *)(puVar10 + 0xc0) = uStack_b8;
  *(undefined8 *)(puVar10 + 0xd8) = uStack_a0;
  *(undefined8 *)(puVar10 + 0xd0) = uStack_a8;
  *(undefined8 *)(puVar10 + 0xe8) = uStack_90;
  *(undefined8 *)(puVar10 + 0xe0) = uStack_98;
  *(undefined8 *)(puVar10 + 0xf0) = uStack_88;
  *(undefined8 *)(puVar10 + 0x88) = uStack_f0;
  *(undefined8 *)(puVar10 + 0x80) = uStack_f8;
  *(undefined8 *)(puVar10 + 0x98) = uStack_e0;
  *(undefined8 *)(puVar10 + 0x90) = uStack_e8;
  *(undefined8 *)(puVar10 + 0xa8) = uStack_d0;
  *(undefined8 *)(puVar10 + 0xa0) = uStack_d8;
  *(undefined8 *)(puVar10 + 0xb8) = uStack_c0;
  *(undefined8 *)(puVar10 + 0xb0) = uStack_c8;
  *(undefined8 *)(puVar10 + 0x48) = uStack_130;
  *(undefined8 *)(puVar10 + 0x40) = uStack_138;
  *(undefined8 *)(puVar10 + 0x58) = uStack_120;
  *(undefined8 *)(puVar10 + 0x50) = uStack_128;
  *(undefined8 *)(puVar10 + 0x68) = uStack_110;
  *(undefined8 *)(puVar10 + 0x60) = uStack_118;
  *(undefined8 *)(puVar10 + 0x78) = uStack_100;
  *(undefined8 *)(puVar10 + 0x70) = uStack_108;
  *(long **)(puVar10 + 0x28) = plStack_150;
  *(long *)(puVar10 + 0x20) = alStack_180[5];
  *(undefined8 *)(puVar10 + 0x38) = uStack_140;
  *(long **)(puVar10 + 0x30) = plStack_148;
  puVar12 = puVar10;
  func_0x000107c5fcf4(lVar13);
  FUN_101f2c604();
  func_0x000103c5e8d0(alStack_180[2],unaff_x20 + 0x80,0,0,lVar13,&UNK_10da2fe18,puVar10,lVar2,
                      puVar12);
  func_0x000107c61574(puVar10);
  (**(code **)(alStack_180[3] + 8))(lVar13,alStack_180[4]);
  func_0x000100cd729c(lVar14);
  return;
}



/* Entry: 101f2ab04; end: 101f2ab0b;  */

void FUN_101f2ab04(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  uint uVar11;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined1 *puVar12;
  undefined1 auStack_c0 [8];
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lVar9 = *(long *)(unaff_x20 + 0x10);
  lVar1 = 0x112e414a0;
  uStack_98 = param_1;
  func_0x0001000285a8(0x112e414a0,&UNK_10da2fe00);
  lStack_b0 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_b0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  puVar12 = auStack_c0 + -extraout_x8;
  lVar2 = 0x112e41490;
  func_0x0001000285a8(0x112e41490,&UNK_10da2fdf0);
  lStack_a0 = *(long *)(lVar2 + -8);
  lStack_a8 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_a0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lStack_b8 = (long)puVar12 - extraout_x8_00;
  uVar4 = *(undefined8 *)(lVar9 + 0x28);
  lVar2 = *(long *)(lVar9 + 0x30);
  func_0x0001000a8868(lVar9 + 0x10,uVar4);
  uVar3 = *(undefined8 *)(lVar9 + 0x38);
  (**(code **)(lVar2 + 0x10))(uVar3,*(undefined8 *)(lVar9 + 0x40),uVar4,lVar2);
  uVar11 = (uint)uVar4;
  uVar4 = uVar3;
  func_0x000107c5f350();
  uVar5 = uVar4;
  func_0x000107c5f56c();
  lStack_70 = CONCAT71(lStack_70._1_7_,(char)uVar5);
  uVar6 = 0x70614d;
  uVar10 = 0xe300000000000000;
  uStack_80 = uVar3;
  uStack_78 = uVar4;
  func_0x000107c5f414(0x70614d,0xe300000000000000);
  uVar4 = 0x112e414a8;
  func_0x0001000285a8(0x112e414a8,&UNK_10da2fe08);
  uVar5 = uVar4;
  FUN_101f2ab0c();
  func_0x000107c5f634(puVar12,uVar6,uVar10,uVar11 & 1,lVar2,uVar4,uVar5);
  func_0x000107c61574(uVar3);
  func_0x000107c6142c(lVar2);
  func_0x000107c6142c(uVar10);
  puVar7 = &uStack_80;
  uStack_80 = uVar4;
  uStack_78 = uVar5;
  func_0x000107c614f4(puVar7,
                      PTR___s7SwiftUI4ViewPAAE15navigationTitleyQrAA18LocalizedStringKeyVFQOMQ_110349508
                      ,1);
  lVar2 = lStack_b8;
  func_0x00010306b5d8(lStack_b8,lVar1,puVar7);
  (**(code **)(lStack_b0 + 8))(puVar12,lVar1);
  uVar4 = 0x112e41498;
  lStack_70 = lVar9;
  func_0x0001000285a8(0x112e41498,&UNK_10da2fdf8);
  plVar8 = &lStack_90;
  lStack_90 = lVar1;
  puStack_88 = puVar7;
  func_0x000107c614f4(plVar8,
                      PTR___s7SwiftUI4ViewPAAE29navigationBarTitleDisplayModeyQrAA010NavigationE4ItemV0fgH0OFQOMQ_1103495f8
                      ,1);
  uVar3 = 0x112e414b8;
  FUN_101f2ce30(0x112e414b8,0x112e41498,&UNK_10da2fdf8,
                PTR___s7SwiftUI19TupleToolbarContentVyxGAA0dE0AAMc_110348e30);
  lVar1 = lStack_a8;
  func_0x000107c5f6a4(uStack_98,0x101f2cb08,&uStack_80,lStack_a8,uVar4,plVar8,uVar3);
  (**(code **)(lStack_a0 + 8))(lVar2,lVar1);
  return;
}



/* Entry: 101f2ab0c; end: 101f2ab7b;  */

void FUN_101f2ab0c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_20;
  undefined *puStack_18;
  
  if (puRam0000000112e414b0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e414a8;
  func_0x00010002969c(0x112e414a8,&UNK_10da2fe08);
  puStack_20 = PTR___s7SwiftUI7AnyViewVAA0D0AAWP_110349918;
  puStack_18 = PTR___s7SwiftUI30_SafeAreaRegionsIgnoringLayoutVAA12ViewModifierAAWP_1103491f0;
  puVar2 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&puStack_20);
  puRam0000000112e414b0 = puVar2;
  return;
}



/* Entry: 101f2ab7c; end: 101f2af13;  */

void FUN_101f2ab7c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x12;
  long lVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  undefined1 auStack_f0 [8];
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined1 *puStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  
  lVar6 = 0x112e414e8;
  uStack_a0 = param_1;
  func_0x0001000285a8(0x112e414e8,&UNK_10da2fea8);
  lStack_98 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0x112e414f0;
  puStack_c0 = auStack_f0 + -extraout_x8;
  func_0x0001000285a8(0x112e414f0,&UNK_10da2feb0);
  lStack_b0 = *(long *)(lVar6 + -8);
  lStack_a8 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_b0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar9 = (long)(auStack_f0 + -extraout_x8) - extraout_x8_00;
  lVar6 = 0x112e414f8;
  lStack_90 = lVar9;
  func_0x0001000285a8(0x112e414f8,&UNK_10da2feb8);
  lStack_88 = *(long *)(lVar6 + -8);
  lStack_b8 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_88 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar9 = lVar9 - extraout_x8_01;
  lVar6 = 0;
  func_0x000107c5f4bc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  lVar10 = lVar9 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0x112e41500;
  func_0x0001000285a8(0x112e41500,&UNK_10da2fec0);
  lStack_d0 = *(long *)(lVar6 + -8);
  lStack_c8 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_d0 + 0x40));
  lVar11 = lVar10 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar11 - extraout_x12;
  func_0x000107c5f4ac(lVar10);
  uStack_70 = param_2;
  FUN_101f27f94();
  lStack_d8 = lVar13;
  func_0x000107c5f2b8(lVar13,lVar10,0x101f2cb10,auStack_80,&UNK_110604288,lVar6);
  func_0x000107c5f4a8(lVar10);
  uVar7 = 0x112e41508;
  uStack_70 = param_2;
  func_0x0001000285a8(0x112e41508,&UNK_10da2fec8);
  uVar8 = 0x112e41510;
  FUN_101f2ce30(0x112e41510,0x112e41508,&UNK_10da2fec8,
                PTR___s7SwiftUI4MenuVyxq_GAA4ViewAAMc_110349388);
  lStack_e0 = lVar9;
  func_0x000107c5f2b8(lVar9,lVar10,0x101f2cb18,auStack_80,uVar7,uVar8);
  func_0x000107c5f4a8(lVar10);
  uVar7 = 0x112e41518;
  uStack_70 = param_2;
  func_0x0001000285a8(0x112e41518,&UNK_10da2fed0);
  uVar8 = uVar7;
  FUN_101f2cb28();
  func_0x000107c5f2b8(lStack_90,lVar10,0x101f2cb20,auStack_80,uVar7,uVar8);
  func_0x000107c5f4a8(lVar10);
  uStack_70 = param_2;
  func_0x000107c5f2b8(lVar11,lVar10,FUN_101f2cbc0,auStack_80,&UNK_110604288,lVar6);
  puVar3 = puStack_c0;
  lVar10 = lStack_c8;
  lVar6 = lStack_d0;
  iVar1 = *(int *)(lStack_98 + 0x30);
  iVar2 = *(int *)(lStack_98 + 0x40);
  lStack_e8 = (long)*(int *)(lStack_98 + 0x50);
  pcVar12 = *(code **)(lStack_d0 + 0x10);
  (*pcVar12)(puStack_c0,lVar13,lStack_c8);
  lVar13 = lStack_b8;
  (**(code **)(lStack_88 + 0x10))(puVar3 + iVar1,lVar9,lStack_b8);
  lVar5 = lStack_90;
  lVar4 = lStack_a8;
  lVar9 = lStack_b0;
  (**(code **)(lStack_b0 + 0x10))(puVar3 + iVar2,lStack_90,lStack_a8);
  (*pcVar12)(puVar3 + lStack_e8,lVar11,lVar10);
  func_0x000107c5f440(uStack_a0,puVar3,lStack_98);
  pcVar12 = *(code **)(lVar6 + 8);
  (*pcVar12)(lVar11,lVar10);
  (**(code **)(lVar9 + 8))(lVar5,lVar4);
  (**(code **)(lStack_88 + 8))(lStack_e0,lVar13);
  (*pcVar12)(lStack_d8,lVar10);
  return;
}



/* Entry: 101f2af14; end: 101f2aff7;  */

void FUN_101f2af14(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
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
  undefined1 uStack_38;
  
  uStack_80 = 0x7373696d736944;
  uStack_78 = 0xe700000000000000;
  uStack_38 = 1;
  FUN_101f2c150(param_2,&uStack_1c0);
  puVar1 = &UNK_1104a0ec0;
  func_0x000107c613fc(&UNK_1104a0ec0,0xe8,7);
  *(undefined8 *)(puVar1 + 0xb8) = uStack_118;
  *(undefined8 *)(puVar1 + 0xb0) = uStack_120;
  *(undefined8 *)(puVar1 + 200) = uStack_108;
  *(undefined8 *)(puVar1 + 0xc0) = uStack_110;
  *(undefined8 *)(puVar1 + 0xd8) = uStack_f8;
  *(undefined8 *)(puVar1 + 0xd0) = uStack_100;
  *(undefined8 *)(puVar1 + 0xe0) = uStack_f0;
  *(undefined8 *)(puVar1 + 0x78) = uStack_158;
  *(undefined8 *)(puVar1 + 0x70) = uStack_160;
  *(undefined8 *)(puVar1 + 0x88) = uStack_148;
  *(undefined8 *)(puVar1 + 0x80) = uStack_150;
  *(undefined8 *)(puVar1 + 0x98) = uStack_138;
  *(undefined8 *)(puVar1 + 0x90) = uStack_140;
  *(undefined8 *)(puVar1 + 0xa8) = uStack_128;
  *(undefined8 *)(puVar1 + 0xa0) = uStack_130;
  *(undefined8 *)(puVar1 + 0x38) = uStack_198;
  *(undefined8 *)(puVar1 + 0x30) = uStack_1a0;
  *(undefined8 *)(puVar1 + 0x48) = uStack_188;
  *(undefined8 *)(puVar1 + 0x40) = uStack_190;
  *(undefined8 *)(puVar1 + 0x58) = uStack_178;
  *(undefined8 *)(puVar1 + 0x50) = uStack_180;
  *(undefined8 *)(puVar1 + 0x68) = uStack_168;
  *(undefined8 *)(puVar1 + 0x60) = uStack_170;
  *(undefined8 *)(puVar1 + 0x18) = uStack_1b8;
  *(undefined8 *)(puVar1 + 0x10) = uStack_1c0;
  *(undefined8 *)(puVar1 + 0x28) = uStack_1a8;
  *(undefined8 *)(puVar1 + 0x20) = uStack_1b0;
  func_0x00010307738c(&uStack_e8,&uStack_80,FUN_101f2cf60,puVar1);
  param_1[9] = uStack_a0;
  param_1[8] = uStack_a8;
  param_1[0xb] = uStack_90;
  param_1[10] = uStack_98;
  param_1[0xc] = uStack_88;
  param_1[1] = uStack_e0;
  *param_1 = uStack_e8;
  param_1[3] = uStack_d0;
  param_1[2] = uStack_d8;
  param_1[5] = uStack_c0;
  param_1[4] = uStack_c8;
  param_1[7] = uStack_b0;
  param_1[6] = uStack_b8;
  return;
}



/* Entry: 101f2aff8; end: 101f2b0a7;  */

void FUN_101f2aff8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  
  uVar1 = 0x112e41528;
  uStack_50 = param_2;
  func_0x0001000285a8(0x112e41528,&UNK_10da2ff28);
  uVar2 = uVar1;
  FUN_101f2cce4();
  uVar3 = 0x112e41538;
  FUN_101f2ce30(0x112e41538,0x112e41528,&UNK_10da2ff28,
                PTR___s7SwiftUI6PickerVyxq_q0_GAA4ViewAAMc_1103498a0);
  func_0x000107c5f5b0(param_1,FUN_101f2ccdc,auStack_60,FUN_101f2b8c0,0,&UNK_1106031d0,uVar1,uVar2,
                      uVar3);
  return;
}



/* Entry: 101f2b0a8; end: 101f2b2bb;  */

void FUN_101f2b0a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 uStack_130;
  undefined7 uStack_12f;
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
  
  uVar1 = 0x657079542070614d;
  uVar7 = 0xe800000000000000;
  func_0x000107c5f414(0x657079542070614d,0xe800000000000000);
  FUN_101f2c150(param_2,&uStack_140);
  uVar2 = 0;
  func_0x000107c5fcec();
  func_0x000107c5fce8();
  uVar3 = uVar2;
  func_0x000100eea164();
  puVar4 = &UNK_1104a0e70;
  func_0x000107c613fc(&UNK_1104a0e70,0xf8,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar2;
  *(undefined8 *)(puVar4 + 0x18) = uVar3;
  *(undefined8 *)(puVar4 + 200) = uStack_98;
  *(undefined8 *)(puVar4 + 0xc0) = uStack_a0;
  *(undefined8 *)(puVar4 + 0xd8) = uStack_88;
  *(undefined8 *)(puVar4 + 0xd0) = uStack_90;
  *(undefined8 *)(puVar4 + 0xe8) = uStack_78;
  *(undefined8 *)(puVar4 + 0xe0) = uStack_80;
  *(undefined8 *)(puVar4 + 0xf0) = uStack_70;
  *(undefined8 *)(puVar4 + 0x88) = uStack_d8;
  *(undefined8 *)(puVar4 + 0x80) = uStack_e0;
  *(undefined8 *)(puVar4 + 0x98) = uStack_c8;
  *(undefined8 *)(puVar4 + 0x90) = uStack_d0;
  *(undefined8 *)(puVar4 + 0xa8) = uStack_b8;
  *(undefined8 *)(puVar4 + 0xa0) = uStack_c0;
  *(undefined8 *)(puVar4 + 0xb8) = uStack_a8;
  *(undefined8 *)(puVar4 + 0xb0) = uStack_b0;
  *(undefined8 *)(puVar4 + 0x48) = uStack_118;
  *(undefined8 *)(puVar4 + 0x40) = uStack_120;
  *(undefined8 *)(puVar4 + 0x58) = uStack_108;
  *(undefined8 *)(puVar4 + 0x50) = uStack_110;
  *(undefined8 *)(puVar4 + 0x68) = uStack_f8;
  *(undefined8 *)(puVar4 + 0x60) = uStack_100;
  *(undefined8 *)(puVar4 + 0x78) = uStack_e8;
  *(undefined8 *)(puVar4 + 0x70) = uStack_f0;
  *(undefined8 *)(puVar4 + 0x28) = uStack_138;
  *(undefined8 *)(puVar4 + 0x20) = uStack_140;
  *(undefined8 *)(puVar4 + 0x38) = uStack_128;
  *(ulong *)(puVar4 + 0x30) = CONCAT71(uStack_12f,uStack_130);
  FUN_101f2c150(param_2,&uStack_140);
  func_0x000107c5fce8();
  puVar5 = &UNK_1104a0e98;
  func_0x000107c613fc(&UNK_1104a0e98,0xf8,7);
  *(undefined8 *)(puVar5 + 0x10) = param_2;
  *(undefined8 *)(puVar5 + 0x18) = uVar3;
  *(undefined8 *)(puVar5 + 200) = uStack_98;
  *(undefined8 *)(puVar5 + 0xc0) = uStack_a0;
  *(undefined8 *)(puVar5 + 0xd8) = uStack_88;
  *(undefined8 *)(puVar5 + 0xd0) = uStack_90;
  *(undefined8 *)(puVar5 + 0xe8) = uStack_78;
  *(undefined8 *)(puVar5 + 0xe0) = uStack_80;
  *(undefined8 *)(puVar5 + 0xf0) = uStack_70;
  *(undefined8 *)(puVar5 + 0x88) = uStack_d8;
  *(undefined8 *)(puVar5 + 0x80) = uStack_e0;
  *(undefined8 *)(puVar5 + 0x98) = uStack_c8;
  *(undefined8 *)(puVar5 + 0x90) = uStack_d0;
  *(undefined8 *)(puVar5 + 0xa8) = uStack_b8;
  *(undefined8 *)(puVar5 + 0xa0) = uStack_c0;
  *(undefined8 *)(puVar5 + 0xb8) = uStack_a8;
  *(undefined8 *)(puVar5 + 0xb0) = uStack_b0;
  *(undefined8 *)(puVar5 + 0x48) = uStack_118;
  *(undefined8 *)(puVar5 + 0x40) = uStack_120;
  *(undefined8 *)(puVar5 + 0x58) = uStack_108;
  *(undefined8 *)(puVar5 + 0x50) = uStack_110;
  *(undefined8 *)(puVar5 + 0x68) = uStack_f8;
  *(undefined8 *)(puVar5 + 0x60) = uStack_100;
  *(undefined8 *)(puVar5 + 0x78) = uStack_e8;
  *(undefined8 *)(puVar5 + 0x70) = uStack_f0;
  *(undefined8 *)(puVar5 + 0x28) = uStack_138;
  *(undefined8 *)(puVar5 + 0x20) = uStack_140;
  *(undefined8 *)(puVar5 + 0x38) = uStack_128;
  *(ulong *)(puVar5 + 0x30) = CONCAT71(uStack_12f,uStack_130);
  func_0x000107c5f77c(&uStack_140,FUN_101f2cd24,puVar4,FUN_101f2cde4,puVar5,&UNK_1104a5690);
  uVar3 = 0x112e41540;
  func_0x0001000285a8(0x112e41540,&UNK_10da2ff30);
  uVar6 = uVar3;
  FUN_101f2cdf0();
  uVar2 = 0x112e41550;
  FUN_101f2ce30(0x112e41550,0x112e41540,&UNK_10da2ff30,
                PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_110349aa8);
  func_0x000107c5f754(param_1,uVar1,uVar7,param_4 & 1,param_5,&uStack_140,FUN_101f2b2bc,0,
                      &UNK_1104a5690,uVar3,uVar6,uVar2);
  return;
}



/* Entry: 101f2b2bc; end: 101f2b8bf;  */

void FUN_101f2b2bc(long param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  long lVar11;
  long extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x12;
  code *pcVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 *puStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  undefined8 *apuStack_2c8 [3];
  long alStack_2b0 [6];
  undefined8 auStack_280 [10];
  undefined8 uStack_230;
  undefined1 uStack_1e8;
  undefined7 uStack_1e7;
  undefined8 uStack_1e0;
  undefined1 uStack_1d8;
  undefined7 uStack_1d7;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 uStack_188;
  undefined7 uStack_187;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined2 uStack_138;
  undefined1 auStack_130 [8];
  undefined8 uStack_128;
  undefined1 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined2 uStack_80;
  
  puVar9 = (undefined1 *)0x112e41558;
  alStack_2b0[0] = param_1;
  func_0x0001000285a8(0x112e41558,&UNK_10da2ff38);
  alStack_2b0[1] = *(long *)(puVar9 + -8);
  lVar14 = *(long *)(alStack_2b0[1] + 0x40);
  puVar10 = puVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar14 + 0xfU & 0xfffffffffffffff0);
  lVar11 = -extraout_x8;
  puVar13 = (undefined8 *)((long)&puStack_2e0 + lVar11);
  func_0x000103081b2c();
  uVar1 = *puVar10;
  uVar22 = *(undefined8 *)(puVar10 + 8);
  uVar2 = puVar10[0x10];
  uVar21 = *(undefined8 *)(puVar10 + 0x18);
  iVar8 = 2;
  func_0x000100029b9c(2,0x1a,0,0);
  if (iVar8 == 0) {
    uStack_1a0 = 0;
    uStack_1a8 = 0;
    uStack_190 = 0;
    uStack_198 = 0;
    uStack_1c0 = 0;
    uStack_1c8 = 0;
    uStack_1b0 = 0;
    uStack_1b8 = 0;
    uStack_188 = 1;
    uStack_180 = 0x73746565727453;
    uStack_178 = 0xe700000000000000;
    uStack_138 = 0x101;
    uStack_1e8 = uVar1;
    uStack_1e0 = uVar22;
    uStack_1d8 = uVar2;
    uStack_1d0 = uVar21;
    *(undefined1 *)((long)&uStack_230 + lVar11 + 2) = 1;
    *(undefined2 *)((long)&uStack_230 + lVar11) = 0x101;
    uVar5 = uStack_140;
    uVar4 = uStack_148;
    uVar3 = uStack_158;
    *(undefined8 *)((long)auStack_280 + lVar11 + 0x38) = uStack_150;
    *(undefined8 *)((long)auStack_280 + lVar11 + 0x30) = uVar3;
    *(undefined8 *)((long)auStack_280 + lVar11 + 0x48) = uVar5;
    *(undefined8 *)((long)auStack_280 + lVar11 + 0x40) = uVar4;
    uVar5 = uStack_160;
    uVar4 = uStack_168;
    uVar3 = uStack_178;
    *(undefined8 *)((long)auStack_280 + lVar11 + 0x18) = uStack_170;
    *(undefined8 *)((long)auStack_280 + lVar11 + 0x10) = uVar3;
    *(undefined8 *)((long)auStack_280 + lVar11 + 0x28) = uVar5;
    *(undefined8 *)((long)auStack_280 + lVar11 + 0x20) = uVar4;
    uVar5 = uStack_180;
    uVar4 = uStack_198;
    uVar3 = CONCAT71(uStack_187,uStack_188);
    *(undefined8 *)((long)alStack_2b0 + lVar11 + 0x28) = uStack_190;
    *(undefined8 *)((long)alStack_2b0 + lVar11 + 0x20) = uVar4;
    *(undefined8 *)((long)auStack_280 + lVar11 + 8) = uVar5;
    *(undefined8 *)((long)auStack_280 + lVar11) = uVar3;
    uVar7 = uStack_1a0;
    uVar6 = uStack_1a8;
    uVar5 = uStack_1d0;
    uVar3 = CONCAT71(uStack_1e7,uStack_1e8);
    uVar4 = CONCAT71(uStack_1d7,uStack_1d8);
    *(undefined8 *)((long)&lStack_2d8 + lVar11) = uStack_1e0;
    *puVar13 = uVar3;
    *(undefined8 *)((long)apuStack_2c8 + lVar11) = uVar5;
    *(undefined8 *)((long)&lStack_2d0 + lVar11) = uVar4;
    uVar5 = uStack_1b0;
    uVar4 = uStack_1b8;
    uVar3 = uStack_1c8;
    *(undefined8 *)((long)apuStack_2c8 + lVar11 + 0x10) = uStack_1c0;
    *(undefined8 *)((long)apuStack_2c8 + lVar11 + 8) = uVar3;
    *(undefined8 *)((long)alStack_2b0 + lVar11 + 8) = uVar5;
    *(undefined8 *)((long)alStack_2b0 + lVar11) = uVar4;
    *(undefined8 *)((long)alStack_2b0 + lVar11 + 0x18) = uVar7;
    *(undefined8 *)((long)alStack_2b0 + lVar11 + 0x10) = uVar6;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_d0 = 1;
    uStack_c8 = 0x73746565727453;
    uStack_c0 = 0xe700000000000000;
    uStack_80 = 0x101;
    auStack_130[0] = uVar1;
    uStack_128 = uVar22;
    uStack_120 = uVar2;
    uStack_118 = uVar21;
    func_0x000101f2ce74(&uStack_1e8,alStack_2b0 + 2,0x112e41300,&UNK_10da2fc70);
    func_0x000101f2cebc(auStack_130,0x112e41300,&UNK_10da2fc70);
  }
  else {
    *(undefined1 *)((long)&uStack_230 + lVar11 + 2) = 1;
    *(undefined1 *)puVar13 = uVar1;
    *(undefined8 *)((long)&lStack_2d8 + lVar11) = uVar22;
    *(undefined1 *)((long)&lStack_2d0 + lVar11) = uVar2;
    *(undefined8 *)((long)apuStack_2c8 + lVar11) = uVar21;
    *(undefined8 *)((long)apuStack_2c8 + lVar11 + 0x10) = 0;
    *(undefined8 *)((long)apuStack_2c8 + lVar11 + 8) = 0;
    *(undefined8 *)((long)alStack_2b0 + lVar11 + 8) = 0;
    *(undefined8 *)((long)alStack_2b0 + lVar11) = 0;
    *(undefined8 *)((long)alStack_2b0 + lVar11 + 0x18) = 0;
    *(undefined8 *)((long)alStack_2b0 + lVar11 + 0x10) = 0;
    *(undefined8 *)((long)alStack_2b0 + lVar11 + 0x28) = 0;
    *(undefined8 *)((long)alStack_2b0 + lVar11 + 0x20) = 0;
    *(undefined1 *)((long)auStack_280 + lVar11) = 1;
    *(undefined8 *)((long)auStack_280 + lVar11 + 8) = 0x73746565727453;
    *(undefined8 *)((long)auStack_280 + lVar11 + 0x10) = 0xe700000000000000;
    *(undefined2 *)((long)&uStack_230 + lVar11) = 0x101;
  }
  apuStack_2c8[2] = puVar13;
  (*(code *)PTR____chkstk_darwin_11034bd40)(0xe900000000000065);
  puVar16 = (undefined8 *)((long)puVar13 - (lVar14 + 0xfU & 0xfffffffffffffff0));
  uVar1 = *puVar10;
  uVar22 = *(undefined8 *)(puVar10 + 8);
  uVar2 = puVar10[0x10];
  uVar21 = *(undefined8 *)(puVar10 + 0x18);
  if (iVar8 == 0) {
    uStack_1a0 = 0;
    uStack_1a8 = 0;
    uStack_190 = 0;
    uStack_198 = 0;
    uStack_1c0 = 0;
    uStack_1c8 = 0;
    uStack_1b0 = 0;
    uStack_1b8 = 0;
    uStack_188 = 1;
    uStack_138 = 1;
    uStack_1e8 = uVar1;
    uStack_1e0 = uVar22;
    uStack_1d8 = uVar2;
    uStack_1d0 = uVar21;
    uStack_180 = extraout_x12;
    uStack_178 = extraout_x8_00;
    *(undefined1 *)((long)puVar16 + 0xb2) = 0;
    *(undefined2 *)(puVar16 + 0x16) = 1;
    uVar5 = uStack_140;
    uVar4 = uStack_148;
    uVar3 = uStack_158;
    puVar16[0x13] = uStack_150;
    puVar16[0x12] = uVar3;
    puVar16[0x15] = uVar5;
    puVar16[0x14] = uVar4;
    uVar5 = uStack_160;
    uVar4 = uStack_168;
    uVar3 = uStack_178;
    puVar16[0xf] = uStack_170;
    puVar16[0xe] = uVar3;
    puVar16[0x11] = uVar5;
    puVar16[0x10] = uVar4;
    uVar5 = uStack_180;
    uVar4 = uStack_198;
    uVar3 = CONCAT71(uStack_187,uStack_188);
    puVar16[0xb] = uStack_190;
    puVar16[10] = uVar4;
    puVar16[0xd] = uVar5;
    puVar16[0xc] = uVar3;
    uVar7 = uStack_1a0;
    uVar6 = uStack_1a8;
    uVar5 = uStack_1d0;
    uVar3 = CONCAT71(uStack_1e7,uStack_1e8);
    uVar4 = CONCAT71(uStack_1d7,uStack_1d8);
    puVar16[1] = uStack_1e0;
    *puVar16 = uVar3;
    puVar16[3] = uVar5;
    puVar16[2] = uVar4;
    uVar5 = uStack_1b0;
    uVar4 = uStack_1b8;
    uVar3 = uStack_1c8;
    puVar16[5] = uStack_1c0;
    puVar16[4] = uVar3;
    puVar16[7] = uVar5;
    puVar16[6] = uVar4;
    puVar16[9] = uVar7;
    puVar16[8] = uVar6;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_d0 = 1;
    uStack_80 = 1;
    auStack_130[0] = uVar1;
    uStack_128 = uVar22;
    uStack_120 = uVar2;
    uStack_118 = uVar21;
    uStack_c8 = extraout_x12;
    uStack_c0 = extraout_x8_00;
    func_0x000101f2ce74(&uStack_1e8,alStack_2b0 + 2,0x112e41300,&UNK_10da2fc70);
    func_0x000101f2cebc(auStack_130,0x112e41300,&UNK_10da2fc70);
  }
  else {
    *(undefined1 *)((long)puVar16 + 0xb2) = 1;
    *(undefined1 *)puVar16 = uVar1;
    puVar16[1] = uVar22;
    *(undefined1 *)(puVar16 + 2) = uVar2;
    puVar16[3] = uVar21;
    puVar16[5] = 0;
    puVar16[4] = 0;
    puVar16[7] = 0;
    puVar16[6] = 0;
    puVar16[9] = 0;
    puVar16[8] = 0;
    puVar16[0xb] = 0;
    puVar16[10] = 0;
    *(undefined1 *)(puVar16 + 0xc) = 1;
    puVar16[0xd] = extraout_x12;
    puVar16[0xe] = extraout_x8_00;
    *(undefined2 *)(puVar16 + 0x16) = 1;
  }
  apuStack_2c8[1] = puVar16;
  (*(code *)PTR____chkstk_darwin_11034bd40)(0x70616d74616548);
  puVar19 = (undefined8 *)((long)puVar16 - (lVar14 + 0xfU & 0xfffffffffffffff0));
  uVar1 = *puVar10;
  uVar22 = *(undefined8 *)(puVar10 + 8);
  uVar2 = puVar10[0x10];
  uVar21 = *(undefined8 *)(puVar10 + 0x18);
  if (iVar8 == 0) {
    uStack_1a0 = 0;
    uStack_1a8 = 0;
    uStack_190 = 0;
    uStack_198 = 0;
    uStack_1c0 = 0;
    uStack_1c8 = 0;
    uStack_1b0 = 0;
    uStack_1b8 = 0;
    uStack_188 = 1;
    uStack_178 = 0xe700000000000000;
    uStack_138 = 0x201;
    uStack_1e8 = uVar1;
    uStack_1e0 = uVar22;
    uStack_1d8 = uVar2;
    uStack_1d0 = uVar21;
    uStack_180 = extraout_x8_01;
    *(undefined1 *)((long)puVar19 + 0xb2) = 2;
    *(undefined2 *)(puVar19 + 0x16) = 0x201;
    puVar19[0x13] = uStack_150;
    puVar19[0x12] = uStack_158;
    puVar19[0x15] = uStack_140;
    puVar19[0x14] = uStack_148;
    uVar3 = uStack_178;
    puVar19[0xf] = uStack_170;
    puVar19[0xe] = uVar3;
    puVar19[0x11] = uStack_160;
    puVar19[0x10] = uStack_168;
    uVar5 = uStack_180;
    uVar4 = uStack_198;
    uVar3 = CONCAT71(uStack_187,uStack_188);
    puVar19[0xb] = uStack_190;
    puVar19[10] = uVar4;
    puVar19[0xd] = uVar5;
    puVar19[0xc] = uVar3;
    uVar7 = uStack_1a0;
    uVar6 = uStack_1a8;
    uVar5 = uStack_1d0;
    uVar3 = CONCAT71(uStack_1e7,uStack_1e8);
    uVar4 = CONCAT71(uStack_1d7,uStack_1d8);
    puVar19[1] = uStack_1e0;
    *puVar19 = uVar3;
    puVar19[3] = uVar5;
    puVar19[2] = uVar4;
    uVar5 = uStack_1b0;
    uVar4 = uStack_1b8;
    uVar3 = uStack_1c8;
    puVar19[5] = uStack_1c0;
    puVar19[4] = uVar3;
    puVar19[7] = uVar5;
    puVar19[6] = uVar4;
    puVar19[9] = uVar7;
    puVar19[8] = uVar6;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_d0 = 1;
    uStack_c0 = 0xe700000000000000;
    uStack_80 = 0x201;
    auStack_130[0] = uVar1;
    uStack_128 = uVar22;
    uStack_120 = uVar2;
    uStack_118 = uVar21;
    uStack_c8 = extraout_x8_01;
    func_0x000101f2ce74(&uStack_1e8,alStack_2b0 + 2,0x112e41300,&UNK_10da2fc70);
    func_0x000101f2cebc(auStack_130,0x112e41300,&UNK_10da2fc70);
  }
  else {
    *(undefined1 *)((long)puVar19 + 0xb2) = 1;
    *(undefined1 *)puVar19 = uVar1;
    puVar19[1] = uVar22;
    *(undefined1 *)(puVar19 + 2) = uVar2;
    puVar19[3] = uVar21;
    puVar19[5] = 0;
    puVar19[4] = 0;
    puVar19[7] = 0;
    puVar19[6] = 0;
    puVar19[9] = 0;
    puVar19[8] = 0;
    puVar19[0xb] = 0;
    puVar19[10] = 0;
    *(undefined1 *)(puVar19 + 0xc) = 1;
    puVar19[0xd] = extraout_x8_01;
    puVar19[0xe] = 0xe700000000000000;
    *(undefined2 *)(puVar19 + 0x16) = 0x201;
  }
  apuStack_2c8[0] = puVar19;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar20 = lVar14 + 0xfU & 0xfffffffffffffff0;
  lVar17 = (long)puVar19 - uVar20;
  pcVar12 = *(code **)(alStack_2b0[1] + 0x10);
  (*pcVar12)(lVar17,puVar13,puVar9);
  lStack_2d0 = lVar17;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar18 = lVar17 - uVar20;
  (*pcVar12)(lVar18,puVar16,puVar9);
  lStack_2d8 = lVar18;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = lVar18 - uVar20;
  (*pcVar12)(lVar15,puVar19,puVar9);
  lVar14 = alStack_2b0[0];
  puStack_2e0 = puVar13;
  (*pcVar12)(alStack_2b0[0],lVar17,puVar9);
  lVar11 = 0x112e41560;
  func_0x0001000285a8(0x112e41560,&UNK_10da2ff48);
  (*pcVar12)(lVar14 + *(int *)(lVar11 + 0x30),lVar18,puVar9);
  (*pcVar12)(lVar14 + *(int *)(lVar11 + 0x40),lVar15,puVar9);
  pcVar12 = *(code **)(alStack_2b0[1] + 8);
  (*pcVar12)(puVar19,puVar9);
  (*pcVar12)(puVar16,puVar9);
  (*pcVar12)(puStack_2e0,puVar9);
  (*pcVar12)(lVar15,puVar9);
  (*pcVar12)(lVar18,puVar9);
  (*pcVar12)(lVar17,puVar9);
  return;
}



/* Entry: 101f2b8c0; end: 101f2b953;  */

void FUN_101f2b8c0(undefined4 *param_1,undefined8 *param_2)

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
  
  func_0x0001030820b8();
  uVar1 = *(undefined4 *)param_2;
  func_0x000103080bf0();
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
  *(undefined8 *)(param_1 + 0x14) = 0x657079542070614d;
  *(undefined8 *)(param_1 + 0x16) = 0xe800000000000000;
  *(undefined1 *)(param_1 + 0x26) = 1;
  return;
}



/* Entry: 101f2b954; end: 101f2bb7f;  */

void FUN_101f2b954(ulong *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  byte bVar6;
  undefined1 auStack_2d0 [128];
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  undefined *puStack_1e8;
  ulong uStack_1e0;
  undefined *puStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
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
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_48;
  
  puVar2 = param_2;
  func_0x0001030820d0();
  uVar1 = *puVar2;
  uStack_90 = 0x4c20656c62616e45;
  uStack_88 = 0xef6e6f697461636f;
  uStack_48 = 1;
  FUN_101f2c150(param_2,&uStack_1d0);
  puVar3 = &UNK_1104a0df8;
  func_0x000107c613fc(&UNK_1104a0df8,0xe8,7);
  *(undefined8 *)(puVar3 + 0xb8) = uStack_128;
  *(undefined8 *)(puVar3 + 0xb0) = uStack_130;
  *(undefined8 *)(puVar3 + 200) = uStack_118;
  *(undefined8 *)(puVar3 + 0xc0) = uStack_120;
  *(undefined8 *)(puVar3 + 0xd8) = uStack_108;
  *(undefined8 *)(puVar3 + 0xd0) = uStack_110;
  *(undefined8 *)(puVar3 + 0xe0) = uStack_100;
  *(undefined **)(puVar3 + 0x78) = puStack_168;
  *(ulong *)(puVar3 + 0x70) = uStack_170;
  *(undefined **)(puVar3 + 0x88) = puStack_158;
  *(undefined8 *)(puVar3 + 0x80) = uStack_160;
  *(undefined8 *)(puVar3 + 0x98) = uStack_148;
  *(undefined8 *)(puVar3 + 0x90) = uStack_150;
  *(undefined8 *)(puVar3 + 0xa8) = uStack_138;
  *(undefined8 *)(puVar3 + 0xa0) = uStack_140;
  *(ulong *)(puVar3 + 0x38) = uStack_1a8;
  *(ulong *)(puVar3 + 0x30) = uStack_1b0;
  *(ulong *)(puVar3 + 0x48) = uStack_198;
  *(ulong *)(puVar3 + 0x40) = uStack_1a0;
  *(ulong *)(puVar3 + 0x58) = uStack_188;
  *(ulong *)(puVar3 + 0x50) = uStack_190;
  *(ulong *)(puVar3 + 0x68) = uStack_178;
  *(ulong *)(puVar3 + 0x60) = uStack_180;
  *(ulong *)(puVar3 + 0x18) = uStack_1c8;
  *(ulong *)(puVar3 + 0x10) = uStack_1d0;
  *(ulong *)(puVar3 + 0x28) = uStack_1b8;
  *(ulong *)(puVar3 + 0x20) = uStack_1c0;
  func_0x0001030773b4(&uStack_f8,uVar1,&uStack_90,FUN_101f2cc18,puVar3);
  uStack_1c8 = *(ulong *)(param_2 + 0x30);
  uVar4 = 0x112d4f580;
  uStack_1d0._0_1_ = *(undefined1 *)(param_2 + 0x2e);
  func_0x0001000285a8(0x112d4f580,&UNK_10d915430);
  func_0x000107c5f72c(&uStack_250);
  if ((uStack_250 & 1) == 0) {
    uStack_1d0._0_1_ = *(undefined1 *)(param_2 + 0x32);
    uStack_1c8 = *(ulong *)(param_2 + 0x34);
    func_0x000107c5f72c(&uStack_250,uVar4);
    bVar6 = (byte)uStack_250 ^ 1;
  }
  else {
    bVar6 = 0;
  }
  puVar3 = &UNK_10da2fee0;
  func_0x000107c614e0();
  puVar5 = &UNK_1104a0e20;
  func_0x000107c613fc(&UNK_1104a0e20,0x11,7);
  uStack_208 = uStack_b0;
  uStack_210 = uStack_b8;
  uStack_1f8 = uStack_a0;
  uStack_200 = uStack_a8;
  uStack_248 = uStack_f0;
  uStack_250 = uStack_f8;
  uStack_238 = uStack_e0;
  uStack_240 = uStack_e8;
  uStack_228 = uStack_d0;
  uStack_230 = uStack_d8;
  uStack_218 = uStack_c0;
  uStack_220 = uStack_c8;
  uStack_188 = uStack_b0;
  uStack_190 = uStack_b8;
  uStack_178 = uStack_a0;
  uStack_180 = uStack_a8;
  uStack_1c8 = uStack_f0;
  uStack_1d0 = uStack_f8;
  uStack_1b8 = uStack_e0;
  uStack_1c0 = uStack_e8;
  puVar5[0x10] = bVar6 & 1;
  uStack_1f0 = uStack_98;
  uStack_1e0 = 0x101f2cc20;
  uStack_1a8 = uStack_d0;
  uStack_1b0 = uStack_d8;
  uStack_198 = uStack_c0;
  uStack_1a0 = uStack_c8;
  uStack_170 = uStack_98;
  uStack_160 = 0x101f2cc20;
  puStack_1e8 = puVar3;
  puStack_1d8 = puVar5;
  puStack_168 = puVar3;
  puStack_158 = puVar5;
  func_0x000101f2ce74(&uStack_250,auStack_2d0,0x112e41518,&UNK_10da2fed0);
  func_0x000101f2cebc(&uStack_1d0,0x112e41518,&UNK_10da2fed0);
  param_1[9] = uStack_208;
  param_1[8] = uStack_210;
  param_1[0xb] = uStack_1f8;
  param_1[10] = uStack_200;
  param_1[0xd] = (ulong)puStack_1e8;
  param_1[0xc] = uStack_1f0;
  param_1[0xf] = (ulong)puStack_1d8;
  param_1[0xe] = uStack_1e0;
  param_1[1] = uStack_248;
  *param_1 = uStack_250;
  param_1[3] = uStack_238;
  param_1[2] = uStack_240;
  param_1[5] = uStack_228;
  param_1[4] = uStack_230;
  param_1[7] = uStack_218;
  param_1[6] = uStack_220;
  return;
}



/* Entry: 101f2bb80; end: 101f2bd1f;  */

void FUN_101f2bb80(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long extraout_x8;
  undefined1 *puVar5;
  code *pcVar6;
  undefined1 auStack_140 [8];
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
  undefined8 uStack_68;
  
  lVar2 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_140 + -extraout_x8;
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  lVar2 = *(long *)(param_1 + 0xa0);
  func_0x0001000a8868(param_1 + 0x80,uVar1);
  lVar3 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(puVar5,1,1,lVar3);
  FUN_101f2c150(param_1,&uStack_138);
  puVar4 = &UNK_1104a0e48;
  func_0x000107c613fc(&UNK_1104a0e48,0xf8,7);
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined8 *)(puVar4 + 0x18) = 0;
  *(undefined8 *)(puVar4 + 200) = uStack_90;
  *(undefined8 *)(puVar4 + 0xc0) = uStack_98;
  *(undefined8 *)(puVar4 + 0xd8) = uStack_80;
  *(undefined8 *)(puVar4 + 0xd0) = uStack_88;
  *(undefined8 *)(puVar4 + 0xe8) = uStack_70;
  *(undefined8 *)(puVar4 + 0xe0) = uStack_78;
  *(undefined8 *)(puVar4 + 0xf0) = uStack_68;
  *(undefined8 *)(puVar4 + 0x88) = uStack_d0;
  *(undefined8 *)(puVar4 + 0x80) = uStack_d8;
  *(undefined8 *)(puVar4 + 0x98) = uStack_c0;
  *(undefined8 *)(puVar4 + 0x90) = uStack_c8;
  *(undefined8 *)(puVar4 + 0xa8) = uStack_b0;
  *(undefined8 *)(puVar4 + 0xa0) = uStack_b8;
  *(undefined8 *)(puVar4 + 0xb8) = uStack_a0;
  *(undefined8 *)(puVar4 + 0xb0) = uStack_a8;
  *(undefined8 *)(puVar4 + 0x48) = uStack_110;
  *(undefined8 *)(puVar4 + 0x40) = uStack_118;
  *(undefined8 *)(puVar4 + 0x58) = uStack_100;
  *(undefined8 *)(puVar4 + 0x50) = uStack_108;
  *(undefined8 *)(puVar4 + 0x68) = uStack_f0;
  *(undefined8 *)(puVar4 + 0x60) = uStack_f8;
  *(undefined8 *)(puVar4 + 0x78) = uStack_e0;
  *(undefined8 *)(puVar4 + 0x70) = uStack_e8;
  *(undefined8 *)(puVar4 + 0x28) = uStack_130;
  *(undefined8 *)(puVar4 + 0x20) = uStack_138;
  *(undefined8 *)(puVar4 + 0x38) = uStack_120;
  *(undefined8 *)(puVar4 + 0x30) = uStack_128;
  pcVar6 = *(code **)(lVar2 + 8);
  func_0x000107c6157c();
  (*pcVar6)(0,0,puVar5,&UNK_10da2ff20,puVar4,PTR___sytN_11034f1b0 + 8,uVar1,lVar2);
  func_0x000107c61574();
  func_0x000107c61574(puVar4);
  func_0x000101f2cebc(puVar5,0x112d453c8,&UNK_10d90ac60);
  return;
}



/* Entry: 101f2bd20; end: 101f2bd37;  */

void FUN_101f2bd20(void)

{
  undefined8 in_x3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = in_x3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101f2bd38,0,0);
  return;
}



/* Entry: 101f2bd38; end: 101f2bd9f;  */

void FUN_101f2bd38(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101f2bda0,uVar1,uVar2);
  return;
}



/* Entry: 101f2bda0; end: 101f2be5f;  */

void FUN_101f2bda0(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  code *pcVar5;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x18));
  uVar2 = *(undefined8 *)(lVar1 + 0x60);
  lVar3 = *(long *)(lVar1 + 0x68);
  func_0x0001000a8868(lVar1 + 0x48,uVar2);
  uVar4 = 0;
  (**(code **)(lVar3 + 0x10))(0,uVar2,lVar3);
  if ((uVar4 & 1) == 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x60);
    lVar3 = *(long *)(lVar1 + 0x68);
    func_0x0001000a8868(lVar1 + 0x48,uVar2);
    uVar4 = 1;
    (**(code **)(lVar3 + 0x10))(1,uVar2,lVar3);
    if ((uVar4 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000101f2be5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    pcVar5 = FUN_101f2bef8;
  }
  else {
    pcVar5 = FUN_101f2be60;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar5,0,0);
  return;
}



/* Entry: 101f2be60; end: 101f2bef7;  */

void FUN_101f2be60(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  int *piVar7;
  long unaff_x22;
  long lVar8;
  
  lVar8 = *(long *)(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(lVar8 + 0x60);
  lVar4 = *(long *)(lVar8 + 0x68);
  func_0x0001000a8868(lVar8 + 0x48,uVar2);
  uVar3 = *(undefined8 *)(lVar8 + 0x70);
  uVar5 = *(undefined8 *)(lVar8 + 0x78);
  piVar7 = *(int **)(lVar4 + 0x18);
  iVar1 = *piVar7;
  plVar6 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_101f2bf90;
                    /* WARNING: Could not recover jumptable at 0x000101f2bef4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))(0,0,uVar3,uVar5,uVar2,lVar4);
  return;
}



/* Entry: 101f2bef8; end: 101f2bf8f;  */

void FUN_101f2bef8(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  int *piVar7;
  long unaff_x22;
  long lVar8;
  
  lVar8 = *(long *)(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(lVar8 + 0x60);
  lVar4 = *(long *)(lVar8 + 0x68);
  func_0x0001000a8868(lVar8 + 0x48,uVar2);
  uVar3 = *(undefined8 *)(lVar8 + 0x70);
  uVar5 = *(undefined8 *)(lVar8 + 0x78);
  piVar7 = *(int **)(lVar4 + 0x18);
  iVar1 = *piVar7;
  plVar6 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_101f2bf90;
                    /* WARNING: Could not recover jumptable at 0x000101f2bf8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))(1,0,uVar3,uVar5,uVar2,lVar4);
  return;
}



/* Entry: 101f2bf90; end: 101f2bfd7;  */

void FUN_101f2bf90(void)

{
  long unaff_x20;
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x20));
  if (unaff_x20 != 0) {
    func_0x000107c614ac();
  }
                    /* WARNING: Could not recover jumptable at 0x000101f2bfd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101f2bfd8; end: 101f2c0e3;  */

void FUN_101f2bfd8(undefined8 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
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
  undefined1 uStack_48;
  
  puVar2 = param_2;
  func_0x0001030820c4();
  uVar1 = *puVar2;
  uStack_90 = 0x43594e2070616e53;
  uStack_88 = 0xef65636966664f20;
  uStack_48 = 1;
  FUN_101f2c150(param_2,&uStack_1d0);
  puVar3 = &UNK_1104a0dd0;
  func_0x000107c613fc(&UNK_1104a0dd0,0xe8,7);
  *(undefined8 *)(puVar3 + 0xb8) = uStack_128;
  *(undefined8 *)(puVar3 + 0xb0) = uStack_130;
  *(undefined8 *)(puVar3 + 200) = uStack_118;
  *(undefined8 *)(puVar3 + 0xc0) = uStack_120;
  *(undefined8 *)(puVar3 + 0xd8) = uStack_108;
  *(undefined8 *)(puVar3 + 0xd0) = uStack_110;
  *(undefined8 *)(puVar3 + 0xe0) = uStack_100;
  *(undefined8 *)(puVar3 + 0x78) = uStack_168;
  *(undefined8 *)(puVar3 + 0x70) = uStack_170;
  *(undefined8 *)(puVar3 + 0x88) = uStack_158;
  *(undefined8 *)(puVar3 + 0x80) = uStack_160;
  *(undefined8 *)(puVar3 + 0x98) = uStack_148;
  *(undefined8 *)(puVar3 + 0x90) = uStack_150;
  *(undefined8 *)(puVar3 + 0xa8) = uStack_138;
  *(undefined8 *)(puVar3 + 0xa0) = uStack_140;
  *(undefined8 *)(puVar3 + 0x38) = uStack_1a8;
  *(undefined8 *)(puVar3 + 0x30) = uStack_1b0;
  *(undefined8 *)(puVar3 + 0x48) = uStack_198;
  *(undefined8 *)(puVar3 + 0x40) = uStack_1a0;
  *(undefined8 *)(puVar3 + 0x58) = uStack_188;
  *(undefined8 *)(puVar3 + 0x50) = uStack_190;
  *(undefined8 *)(puVar3 + 0x68) = uStack_178;
  *(undefined8 *)(puVar3 + 0x60) = uStack_180;
  *(undefined8 *)(puVar3 + 0x18) = uStack_1c8;
  *(undefined8 *)(puVar3 + 0x10) = uStack_1d0;
  *(undefined8 *)(puVar3 + 0x28) = uStack_1b8;
  *(undefined8 *)(puVar3 + 0x20) = uStack_1c0;
  func_0x0001030773b4(&uStack_f8,uVar1,&uStack_90,FUN_101f2cbc8,puVar3);
  param_1[9] = uStack_b0;
  param_1[8] = uStack_b8;
  param_1[0xb] = uStack_a0;
  param_1[10] = uStack_a8;
  param_1[0xc] = uStack_98;
  param_1[1] = uStack_f0;
  *param_1 = uStack_f8;
  param_1[3] = uStack_e0;
  param_1[2] = uStack_e8;
  param_1[5] = uStack_d0;
  param_1[4] = uStack_d8;
  param_1[7] = uStack_c0;
  param_1[6] = uStack_c8;
  return;
}



/* Entry: 101f2c0e4; end: 101f2c14f;  */

void FUN_101f2c0e4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 uStack_31;
  
  uStack_31 = (undefined1)*(undefined8 *)(param_1 + 0x38);
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x000107c614f0();
  (**(code **)(lVar1 + 8))();
  uVar2 = 0x112e414e0;
  func_0x0001000285a8(0x112e414e0,&UNK_10da2fea0);
  func_0x000107c5f730(&uStack_31,uVar2);
  return;
}



/* Entry: 101f2c150; end: 101f2c183;  */

undefined8 FUN_101f2c150(undefined8 param_1,undefined8 param_2)

{
  FUN_101f2c748(param_2,param_1,&UNK_1104a0d88);
  return param_2;
}



/* Entry: 101f2c184; end: 101f2c18b;  */

void FUN_101f2c184(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 uStack_31;
  
  uStack_31 = (undefined1)*(undefined8 *)(unaff_x20 + 0x48);
  lVar1 = *(long *)(unaff_x20 + 0x50);
  func_0x000107c614f0();
  (**(code **)(lVar1 + 8))();
  uVar2 = 0x112e414e0;
  func_0x0001000285a8(0x112e414e0,&UNK_10da2fea0);
  func_0x000107c5f730(&uStack_31,uVar2);
  return;
}



/* Entry: 101f2c18c; end: 101f2c25f;  */

void FUN_101f2c18c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_3;
  lVar4 = 0x112e40840;
  func_0x0001000285a8(0x112e40840,&UNK_10da2e980);
  *(long *)(unaff_x22 + 0x18) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x20) = lVar4;
  uVar1 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x28) = uVar1;
  lVar4 = 0x112e414d8;
  func_0x0001000285a8(0x112e414d8,&UNK_10da2fe90);
  *(long *)(unaff_x22 + 0x30) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x38) = lVar4;
  uVar1 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x40) = uVar1;
  uVar2 = 0;
  func_0x000107c5fcec();
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x48) = uVar3;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x50) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x58) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101f2c260,uVar2,uVar3);
  return;
}



/* Entry: 101f2c260; end: 101f2c323;  */

void FUN_101f2c260(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x40);
  lVar1 = *(long *)(unaff_x22 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar2 = *(long *)(unaff_x22 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar3 = *(undefined8 *)(lVar2 + 0x60);
  lVar6 = *(long *)(lVar2 + 0x68);
  func_0x0001000a8868(lVar2 + 0x48,uVar3);
  (**(code **)(lVar6 + 8))(uVar4,uVar3,lVar6);
  func_0x000107c5fdbc(uVar8,uVar5);
  (**(code **)(lVar1 + 8))(uVar4,uVar5);
  plVar7 = (long *)(ulong)*(uint *)(PTR___sScs8IteratorV4nextxSgyYaKFTu_11034ff30 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x60) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_101f2c324;
                    /* WARNING: Could not recover jumptable at 0x00010bdb8078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScs8IteratorV4nextxSgyYaKF_11034ff28)
            (plVar7,unaff_x22 + 0x78,*(undefined8 *)(unaff_x22 + 0x30));
  return;
}



/* Entry: 101f2c324; end: 101f2c37f;  */

void FUN_101f2c324(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x60));
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar4 + 0x50);
    uVar3 = *(undefined8 *)(lVar4 + 0x58);
    pcVar1 = FUN_101f2c380;
  }
  else {
    *(long *)(lVar4 + 0x70) = unaff_x20;
    uVar2 = *(undefined8 *)(lVar4 + 0x50);
    uVar3 = *(undefined8 *)(lVar4 + 0x58);
    pcVar1 = FUN_101f2c53c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 101f2c380; end: 101f2c4df;  */

void FUN_101f2c380(void)

{
  undefined8 uVar1;
  long lVar2;
  byte bVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x22;
  long lVar6;
  
  if (*(char *)(unaff_x22 + 0x78) == '\x06') {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x48);
    (**(code **)(*(long *)(unaff_x22 + 0x38) + 8))
              (*(undefined8 *)(unaff_x22 + 0x40),*(undefined8 *)(unaff_x22 + 0x30));
    func_0x000107c61574(uVar5);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x28);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x40));
    func_0x000107c615c0(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000101f2c3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar6 = *(long *)(unaff_x22 + 0x10);
  uVar5 = *(undefined8 *)(lVar6 + 0x60);
  lVar2 = *(long *)(lVar6 + 0x68);
  func_0x0001000a8868(lVar6 + 0x48,uVar5);
  bVar3 = 0;
  (**(code **)(lVar2 + 0x10))(0,uVar5,lVar2);
  *(byte *)(unaff_x22 + 0x79) = bVar3 & 1;
  uVar5 = 0x112d4f580;
  func_0x0001000285a8(0x112d4f580,&UNK_10d915430);
  func_0x000107c5f730((byte *)(unaff_x22 + 0x79),uVar5);
  uVar1 = *(undefined8 *)(lVar6 + 0x60);
  lVar2 = *(long *)(lVar6 + 0x68);
  func_0x0001000a8868(lVar6 + 0x48,uVar1);
  bVar3 = 1;
  (**(code **)(lVar2 + 0x10))(1,uVar1,lVar2);
  *(byte *)(unaff_x22 + 0x7a) = bVar3 & 1;
  func_0x000107c5f730((byte *)(unaff_x22 + 0x7a),uVar5);
  plVar4 = (long *)(ulong)*(uint *)(PTR___sScs8IteratorV4nextxSgyYaKFTu_11034ff30 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x68) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101f2c4e0;
                    /* WARNING: Could not recover jumptable at 0x00010bdb8078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScs8IteratorV4nextxSgyYaKF_11034ff28)
            (plVar4,(char *)(unaff_x22 + 0x78),*(undefined8 *)(unaff_x22 + 0x30));
  return;
}



/* Entry: 101f2c4e0; end: 101f2c53b;  */

void FUN_101f2c4e0(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x68));
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar4 + 0x50);
    uVar3 = *(undefined8 *)(lVar4 + 0x58);
    pcVar1 = FUN_101f2c380;
  }
  else {
    *(long *)(lVar4 + 0x70) = unaff_x20;
    uVar2 = *(undefined8 *)(lVar4 + 0x50);
    uVar3 = *(undefined8 *)(lVar4 + 0x58);
    pcVar1 = FUN_101f2c53c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 101f2c53c; end: 101f2c5a7;  */

void FUN_101f2c53c(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x30);
  lVar2 = *(long *)(unaff_x22 + 0x38);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x48));
  (**(code **)(lVar2 + 8))(uVar4,uVar1);
  func_0x000107c614ac(uVar3);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x40));
  func_0x000107c615c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000101f2c5a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101f2c5a8; end: 101f2c603;  */

void FUN_101f2c5a8(void)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long unaff_x20;
  long unaff_x22;
  
  plVar3 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101f2cf88;
  plVar3[2] = unaff_x20 + 0x20;
  lVar4 = 0x112e40840;
  func_0x0001000285a8(0x112e40840,&UNK_10da2e980);
  plVar3[3] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar3[4] = lVar4;
  uVar1 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[5] = uVar1;
  lVar4 = 0x112e414d8;
  func_0x0001000285a8(0x112e414d8,&UNK_10da2fe90);
  plVar3[6] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar3[7] = lVar4;
  uVar1 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[8] = uVar1;
  lVar2 = 0;
  func_0x000107c5fcec();
  lVar4 = lVar2;
  func_0x000107c5fce8();
  plVar3[9] = lVar4;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar3[10] = lVar2;
  plVar3[0xb] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101f2c260,lVar2,lVar4);
  return;
}



/* Entry: 101f2c604; end: 101f2c69b;  */

void FUN_101f2c604(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  if (puRam0000000112e414c0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e41480;
  func_0x00010002969c(0x112e41480,&UNK_10da2fde0);
  uVar2 = 0x112e414c8;
  FUN_101f2ce30(0x112e414c8,0x112e414d0,&UNK_10da2fe20,&UNK_10db801f8);
  puStack_28 = PTR___s7SwiftUI25_AppearanceActionModifierVAA04ViewE0AAWP_110349158;
  puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_30 = uVar2;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&uStack_30);
  puRam0000000112e414c0 = puVar3;
  return;
}



/* Entry: 101f2c69c; end: 101f2c6bb;  */

void FUN_101f2c69c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc028c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_11034f3b8)(param_1,&UNK_10e69d1d4,1);
  return;
}



/* Entry: 101f2c6bc; end: 101f2c747;  */

long FUN_101f2c6bc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101f2c748; end: 101f2ca4b;  */

undefined8 * FUN_101f2c748(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  
  uVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  lVar4 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = lVar4;
  pcVar3 = (code *)**(undefined8 **)(lVar4 + -8);
  func_0x000107c6157c(uVar1);
  (*pcVar3)(param_1 + 2,param_2 + 2,lVar4);
  uVar1 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar1;
  lVar4 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = lVar4;
  pcVar3 = (code *)**(undefined8 **)(lVar4 + -8);
  func_0x000107c615f0(uVar1);
  (*pcVar3)(param_1 + 9,param_2 + 9,lVar4);
  uVar1 = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar1;
  lVar4 = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x13] = lVar4;
  pcVar3 = (code *)**(undefined8 **)(lVar4 + -8);
  func_0x000107c615f0(uVar1);
  (*pcVar3)(param_1 + 0x10,param_2 + 0x10,lVar4);
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_2 + 0x15);
  param_1[0x16] = param_2[0x16];
  *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)(param_2 + 0x17);
  uVar2 = param_2[0x18];
  param_1[0x18] = uVar2;
  *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)(param_2 + 0x19);
  uVar1 = param_2[0x1a];
  param_1[0x1a] = uVar1;
  func_0x000107c6157c();
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar1);
  return param_1;
}



/* Entry: 101f2ca4c; end: 101f2cb27;  */

int FUN_101f2ca4c(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x1b] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101f2cb28; end: 101f2cbbf;  */

void FUN_101f2cb28(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000112e41520 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e41518;
  func_0x00010002969c(0x112e41518,&UNK_10da2fed0);
  uVar2 = uVar1;
  FUN_101f27f94();
  uVar3 = 0x112d50390;
  FUN_101f2ce30(0x112d50390,0x112d50398,&UNK_10d9de950,
                PTR___s7SwiftUI32_EnvironmentKeyTransformModifierVyxGAA04ViewF0AAMc_110349258);
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&uStack_30);
  puRam0000000112e41520 = puVar4;
  return;
}


