/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100f8de10; end: 100f8de27;  */

void FUN_100f8de10(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb6854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_110349438
  )();
  return;
}



/* Entry: 100f8de28; end: 100f8e017;  */

undefined8 FUN_100f8de28(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 100f8e018; end: 100f8e107;  */

void FUN_100f8e018(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (puRam0000000112d50110 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112d500d8;
  func_0x00010002969c(0x112d500d8,&UNK_10d916518);
  uVar2 = 0x112d500c8;
  func_0x00010002969c(0x112d500c8,&UNK_10d9164e0);
  uVar3 = 0x112d500d0;
  FUN_100f8e108(0x112d500d0,0x112d500c8,&UNK_10d9164e0,
                PTR___s7SwiftUI6HStackVyxGAA4ViewAAMc_110349878);
  puVar4 = &uStack_40;
  uStack_40 = uVar2;
  uStack_38 = uVar3;
  func_0x000107c614f4(puVar4,PTR___s7SwiftUI4ViewPAAE10fontWeightyQrAA4FontV0E0VSgFQOMQ_110349460,1)
  ;
  uVar2 = 0x112d4fb58;
  FUN_100f8e108(0x112d4fb58,0x112d4fb60,&UNK_10d915b10,
                PTR___s7SwiftUI30_EnvironmentKeyWritingModifierVyxGAA04ViewF0AAMc_1103491e8);
  puVar5 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  puStack_50 = puVar4;
  uStack_48 = uVar2;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&puStack_50);
  puRam0000000112d50110 = puVar5;
  return;
}



/* Entry: 100f8e108; end: 100f8e14b;  */

void FUN_100f8e108(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    func_0x000107c61520(param_4,param_2);
    *param_1 = param_4;
  }
  return;
}



/* Entry: 100f8e14c; end: 100f8e1af;  */

int FUN_100f8e14c(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 100f8e1b0; end: 100f8e1fb;  */

undefined * FUN_100f8e1b0(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126aeff0;
  func_0x000107c610f8(PTR_PTR_1126aeff0);
  func_0x000107c45eac();
  func_0x000107c58c00();
  func_0x000107c5ba54(puVar1);
  return puVar1;
}



/* Entry: 100f8e1fc; end: 100f8e20b;  */

void FUN_100f8e1fc(void)

{
  return;
}



/* Entry: 100f8e20c; end: 100f8e253;  */

undefined8
FUN_100f8e20c(undefined8 param_1,char param_2,undefined8 param_3,char param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x4024000000000000;
  if (param_2 != '\x01') {
    uVar1 = param_1;
  }
  uVar2 = 0x4024000000000000;
  if (param_4 != '\x01') {
    uVar2 = param_3;
  }
  func_0x000107c5b098(uVar1,uVar2,param_5);
  return uVar1;
}



/* Entry: 100f8e254; end: 100f8e25f;  */

void FUN_100f8e254(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb63f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI19UIViewRepresentablePAAE21_overrideSizeThatFits_2in6uiViewySo6CGSizeVz_AA09_ProposedF0V0C4TypeQztF_110348eb0
  )();
  return;
}



/* Entry: 100f8e260; end: 100f8e273;  */

void FUN_100f8e260(void)

{
  func_0x000107c5f46c();
  return;
}



/* Entry: 100f8e274; end: 100f8e313;  */

void FUN_100f8e274(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  func_0x000100f8e380();
                    /* WARNING: Could not recover jumptable at 0x00010bdb641c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI19UIViewRepresentablePAAE9_makeView4view6inputsAA01_F7OutputsVAA11_GraphValueVyxG_AA01_F6InputsVtFZ_110348ec8
  )(param_1,param_2,param_3,param_4,uVar1);
  return;
}



/* Entry: 100f8e314; end: 100f8e317;  */

void FUN_100f8e314(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb68fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s7SwiftUI4ViewPAAE14_viewListCount6inputsSiSgAA01_ceF6InputsV_tFZ_1103494d8)();
  return;
}



/* Entry: 100f8e318; end: 100f8e33b;  */

void FUN_100f8e318(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  func_0x000100f8e380();
  func_0x000107c5f480(param_1,uVar2);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f8e33c);
  (*pcVar1)();
}



/* Entry: 100f8e33c; end: 100f8e33f;  */

void FUN_100f8e33c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d50118 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9165c0;
  func_0x000107c61520(&UNK_10d9165c0,&UNK_1103708b0);
  puRam0000000112d50118 = puVar1;
  return;
}



/* Entry: 100f8e340; end: 100f8e3bf;  */

void FUN_100f8e340(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d50118 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9165c0;
  func_0x000107c61520(&UNK_10d9165c0,&UNK_1103708b0);
  puRam0000000112d50118 = puVar1;
  return;
}



/* Entry: 100f8e3c0; end: 100f8e3c7;  */

void FUN_100f8e3c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbffa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericValueMetadata_11034f228)();
  return;
}



/* Entry: 100f8e3c8; end: 100f8e43b;  */

long FUN_100f8e3c8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 100f8e43c; end: 100f8e4db;  */

undefined8 * FUN_100f8e43c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar1 = param_2[5];
  uVar3 = param_2[6];
  param_1[5] = uVar1;
  param_1[6] = uVar3;
  uVar3 = param_2[7];
  uVar4 = param_2[8];
  param_1[7] = uVar3;
  param_1[8] = uVar4;
  uVar5 = param_2[9];
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  param_1[9] = uVar5;
  uVar5 = param_2[0xc];
  uVar6 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar6;
  func_0x000107c6157c();
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar5);
  return param_1;
}



/* Entry: 100f8e4dc; end: 100f8e5cb;  */

undefined8 * FUN_100f8e4dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  param_1[6] = param_2[6];
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[8];
  param_1[8] = param_2[8];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_2[9];
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  param_1[9] = uVar1;
  uVar2 = param_1[0xc];
  uVar1 = param_2[0xc];
  uVar3 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar3;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(uVar2);
  return param_1;
}



/* Entry: 100f8e5cc; end: 100f8e5f7;  */

void FUN_100f8e5cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar3 = param_2[2];
  uVar5 = param_2[5];
  uVar4 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  param_1[5] = uVar5;
  param_1[4] = uVar4;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  uVar2 = param_2[7];
  uVar1 = param_2[6];
  uVar4 = param_2[9];
  uVar3 = param_2[8];
  uVar6 = param_2[0xb];
  uVar5 = param_2[10];
  param_1[0xc] = param_2[0xc];
  param_1[9] = uVar4;
  param_1[8] = uVar3;
  param_1[0xb] = uVar6;
  param_1[10] = uVar5;
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  return;
}



/* Entry: 100f8e5f8; end: 100f8e6a3;  */

undefined8 * FUN_100f8e5f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61574(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61574(uVar1);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61574(uVar1);
  param_1[6] = param_2[6];
  func_0x000107c61574(param_1[7]);
  uVar1 = param_1[8];
  uVar2 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar2;
  func_0x000107c61574(uVar1);
  param_1[9] = param_2[9];
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  uVar1 = param_1[0xc];
  uVar2 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar2;
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 100f8e6a4; end: 100f8e74f;  */

int FUN_100f8e6a4(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x1a] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 0x10);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 100f8e750; end: 100f8e783;  */

void FUN_100f8e750(undefined8 param_1,long param_2)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)(param_2 + 0x18);
  uStack_20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c614f4(&uStack_20,&UNK_10e61c074,1);
  return;
}



/* Entry: 100f8e784; end: 100f8f31b;  */

void FUN_100f8e784(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined7 uVar3;
  undefined7 uVar4;
  undefined1 uVar5;
  undefined7 uVar6;
  undefined1 uVar7;
  undefined7 uVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  double dVar13;
  undefined *puVar14;
  undefined *puVar15;
  double dVar16;
  double *pdVar17;
  undefined8 uVar18;
  double dVar19;
  undefined *puVar20;
  undefined *puVar21;
  double dVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  long extraout_x8;
  long lVar27;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x12;
  code *pcVar28;
  double *unaff_x20;
  long lVar29;
  code *pcVar30;
  long lVar31;
  long lVar32;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  long lStack_1c8;
  double *pdStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  double *pdStack_170;
  long lStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  double dStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 uStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  double *pdStack_108;
  undefined8 uStack_100;
  double *pdStack_f8;
  undefined *puStack_f0;
  double *pdStack_e8;
  double dStack_e0;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  dVar19 = 2.27809415985067e-314;
  func_0x00010002969c(0x112d4f678,&UNK_10d915670);
  uStack_150 = *(undefined8 *)(param_4 + 0x10);
  uVar10 = 0xff;
  func_0x000107c5f34c(0xff,uStack_150,PTR___s7SwiftUI18_AspectRatioLayoutVN_110348d98);
  uVar11 = 0xff;
  func_0x000107c5f34c(0xff,uVar10,PTR___s7SwiftUI14_PaddingLayoutVN_110348a08);
  uVar12 = 0xff;
  func_0x000107c5f34c(0xff,uVar11,PTR___s7SwiftUI12_FrameLayoutVN_110348858);
  uVar18 = 0x112d501a8;
  func_0x00010002969c(0x112d501a8,&UNK_10d916748);
  dVar13 = 1.25986739689518e-321;
  func_0x000107c5f34c(0xff,uVar12,uVar18);
  uVar18 = 0x112d501b0;
  func_0x00010002969c(0x112d501b0,&UNK_10d916750);
  puVar21 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_158 = *(undefined8 *)(param_4 + 0x18);
  puStack_80 = PTR___s7SwiftUI18_AspectRatioLayoutVAA12ViewModifierAAWP_110348d88;
  puVar14 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_88 = uStack_158;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar10,&uStack_88);
  puStack_90 = PTR___s7SwiftUI14_PaddingLayoutVAA12ViewModifierAAWP_1103489f8;
  puVar15 = puVar21;
  puStack_98 = puVar14;
  func_0x000107c61520(puVar21,uVar11,&puStack_98);
  puStack_a0 = PTR___s7SwiftUI12_FrameLayoutVAA12ViewModifierAAWP_110348848;
  puVar14 = puVar21;
  puStack_a8 = puVar15;
  func_0x000107c61520(puVar21,uVar12,&puStack_a8);
  uVar10 = 0x112d501b8;
  FUN_100f90c1c(0x112d501b8,0x112d501a8,&UNK_10d916748,
                PTR___s7SwiftUI19_BackgroundModifierVyxGAA04ViewD0AAMc_110348ee0);
  puVar15 = puVar21;
  puStack_b8 = puVar14;
  uStack_b0 = uVar10;
  func_0x000107c61520(puVar21,dVar13,&puStack_b8);
  dVar22 = 2.27809558671225e-314;
  func_0x00010002969c(0x112d501c0,&UNK_10d916758);
  dVar16 = 1.25986739689518e-321;
  func_0x000107c5f390();
  uVar10 = 0x112d501c8;
  func_0x000100f90a70(0x112d501c8,PTR___s7SwiftUI17EmptyVisualEffectVMa_110348c08,
                      PTR___s7SwiftUI17EmptyVisualEffectVAA0dE0AAMc_110348c00);
  uStack_d8 = (undefined1)uVar10;
  uStack_d7 = (undefined7)((ulong)uVar10 >> 8);
  pdVar17 = &dStack_e0;
  dStack_e0 = dVar16;
  func_0x000107c614f4(pdVar17,PTR___s7SwiftUI12VisualEffectPAAE7opacityyQrSdFQOMQ_110348838,1);
  uStack_d8 = SUB81(pdVar17,0);
  uStack_d7 = (undefined7)((ulong)pdVar17 >> 8);
  pdVar17 = &dStack_e0;
  dStack_e0 = dVar22;
  func_0x000107c614f4(pdVar17,
                      PTR___s7SwiftUI12VisualEffectPAAE05scaleD0_6anchorQr12CoreGraphics7CGFloatV_AA9UnitPointVtFQOMQ_110348828
                      ,1);
  puVar14 = 
  PTR___s7SwiftUI4ViewPAAE16scrollTransition_4axis10transitionQrAA06ScrollE13ConfigurationV_AA4AxisOSgqd__AA17EmptyVisualEffectV_AA0hE5PhaseOtYbctAA0lM0Rd__lFQOMQ_110349528
  ;
  uStack_d8 = (undefined1)uVar18;
  uVar1 = uStack_d8;
  uStack_d7 = (undefined7)((ulong)uVar18 >> 8);
  uVar3 = uStack_d7;
  uStack_d0 = SUB81(puVar15,0);
  uVar5 = uStack_d0;
  uStack_cf = (undefined7)((ulong)puVar15 >> 8);
  uVar6 = uStack_cf;
  uStack_c8 = SUB81(pdVar17,0);
  uVar7 = uStack_c8;
  uStack_c7 = (undefined7)((ulong)pdVar17 >> 8);
  uVar8 = uStack_c7;
  uVar10 = 0xff;
  dStack_e0 = dVar13;
  func_0x000107c614f8(0xff,&dStack_e0,
                      PTR___s7SwiftUI4ViewPAAE16scrollTransition_4axis10transitionQrAA06ScrollE13ConfigurationV_AA4AxisOSgqd__AA17EmptyVisualEffectV_AA0hE5PhaseOtYbctAA0lM0Rd__lFQOMQ_110349528
                      ,0);
  uVar18 = uVar10;
  FUN_100f797cc();
  puVar15 = PTR___sSiSHsWP_11034dec0;
  uStack_d8 = SUB81(PTR___sSiN_11034deb0,0);
  uVar2 = uStack_d8;
  uStack_d7 = (undefined7)((ulong)PTR___sSiN_11034deb0 >> 8);
  uVar4 = uStack_d7;
  uStack_d0 = (undefined1)uVar10;
  uStack_cf = (undefined7)((ulong)uVar10 >> 8);
  uStack_c8 = (undefined1)uVar18;
  uStack_c7 = (undefined7)((ulong)uVar18 >> 8);
  puStack_c0 = PTR___sSiSHsWP_11034dec0;
  uVar18 = 0xff;
  dStack_e0 = dVar19;
  func_0x000107c5f790(0xff,&dStack_e0);
  pdVar17 = &dStack_e0;
  dStack_e0 = dVar13;
  uStack_d8 = uVar1;
  uStack_d7 = uVar3;
  uStack_d0 = uVar5;
  uStack_cf = uVar6;
  uStack_c8 = uVar7;
  uStack_c7 = uVar8;
  func_0x000107c614f4(pdVar17,puVar14,1);
  puVar14 = PTR___s7SwiftUI7ForEachVyxq_q0_GAA4ViewA2aER0_rlMc_1103499a8;
  pdStack_e8 = pdVar17;
  func_0x000107c61520(PTR___s7SwiftUI7ForEachVyxq_q0_GAA4ViewA2aER0_rlMc_1103499a8,uVar18,
                      &pdStack_e8);
  dVar19 = 1.25986739689518e-321;
  func_0x000107c5f750(0xff,uVar18,puVar14);
  puVar20 = PTR___s7SwiftUI6HStackVyxGAA4ViewAAMc_110349878;
  func_0x000107c61520(PTR___s7SwiftUI6HStackVyxGAA4ViewAAMc_110349878,dVar19);
  puVar14 = PTR___s7SwiftUI4ViewPAAE18scrollTargetLayout9isEnabledQrSb_tFQOMQ_110349558;
  uStack_d8 = SUB81(puVar20,0);
  uVar1 = uStack_d8;
  uStack_d7 = (undefined7)((ulong)puVar20 >> 8);
  uVar3 = uStack_d7;
  uVar18 = 0xff;
  dStack_e0 = dVar19;
  func_0x000107c614f8(0xff,&dStack_e0,
                      PTR___s7SwiftUI4ViewPAAE18scrollTargetLayout9isEnabledQrSb_tFQOMQ_110349558,0)
  ;
  uVar10 = 0xff;
  func_0x000107c5f34c(0xff,uVar18,PTR___s7SwiftUI16_FlexFrameLayoutVN_110348bd8);
  pdVar17 = &dStack_e0;
  dStack_e0 = dVar19;
  uStack_d8 = uVar1;
  uStack_d7 = uVar3;
  func_0x000107c614f4(pdVar17,puVar14,1);
  puStack_f0 = PTR___s7SwiftUI16_FlexFrameLayoutVAA12ViewModifierAAWP_110348bc8;
  uStack_1e0 = uVar10;
  pdStack_f8 = pdVar17;
  func_0x000107c61520(puVar21,uVar10,&pdStack_f8);
  dVar19 = 1.25986739689518e-321;
  puStack_1d0 = puVar21;
  func_0x000107c5f288(0xff,uVar10,puVar21);
  puVar14 = PTR___s7SwiftUI10ScrollViewVyxGAA0D0AAMc_110348700;
  func_0x000107c61520(PTR___s7SwiftUI10ScrollViewVyxGAA0D0AAMc_110348700,dVar19);
  puVar21 = 
  PTR___s7SwiftUI4ViewPAAE14scrollPosition2id6anchorQrAA7BindingVyqd__SgG_AA9UnitPointVSgtSHRd__lFQOMQ_1103494e8
  ;
  uStack_d0 = SUB81(puVar14,0);
  uVar1 = uStack_d0;
  uStack_cf = (undefined7)((ulong)puVar14 >> 8);
  uVar3 = uStack_cf;
  uStack_c8 = SUB81(puVar15,0);
  uVar5 = uStack_c8;
  uStack_c7 = (undefined7)((ulong)puVar15 >> 8);
  uVar6 = uStack_c7;
  uVar10 = 0xff;
  puStack_1d8 = puVar14;
  dStack_e0 = dVar19;
  uStack_d8 = uVar2;
  uStack_d7 = uVar4;
  func_0x000107c614f8(0xff,&dStack_e0,
                      PTR___s7SwiftUI4ViewPAAE14scrollPosition2id6anchorQrAA7BindingVyqd__SgG_AA9UnitPointVSgtSHRd__lFQOMQ_1103494e8
                      ,0);
  uVar18 = 0x112d501d0;
  lStack_200 = uVar10;
  func_0x00010002969c(0x112d501d0,&UNK_10d916760);
  uVar11 = 0xff;
  func_0x000107c5f34c(0xff,uVar10,uVar18);
  uVar18 = 0xff;
  func_0x000107c5f4e4(0xff);
  dVar22 = 1.25986739689518e-321;
  func_0x000107c5f34c(0xff,uVar11,uVar18);
  uVar10 = 0xff;
  func_0x000107c5f554();
  pdVar17 = &dStack_e0;
  dStack_e0 = dVar19;
  uStack_d8 = uVar2;
  uStack_d7 = uVar4;
  uStack_d0 = uVar1;
  uStack_cf = uVar3;
  uStack_c8 = uVar5;
  uStack_c7 = uVar6;
  func_0x000107c614f4(pdVar17,puVar21,1);
  uVar18 = 0x112d501d8;
  pdStack_1c0 = pdVar17;
  FUN_100f90c1c(0x112d501d8,0x112d501d0,&UNK_10d916760,
                PTR___s7SwiftUI16_OverlayModifierVyxGAA04ViewD0AAMc_110348bf0);
  puVar21 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  puVar14 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  pdStack_108 = pdVar17;
  uStack_100 = uVar18;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar11,&pdStack_108);
  uVar18 = 0x112d501e0;
  puStack_1a0 = puVar14;
  func_0x000100f90a70(0x112d501e0,PTR___s7SwiftUI23SafeAreaPaddingModifierVMa_110349048,
                      PTR___s7SwiftUI23SafeAreaPaddingModifierVAA04ViewF0AAMc_110349040);
  puStack_118 = puVar14;
  uStack_110 = uVar18;
  func_0x000107c61520(puVar21,dVar22,&puStack_118);
  puVar14 = PTR___s7SwiftUI4ViewPAAE20scrollTargetBehavioryQrqd__AA06ScrolleF0Rd__lFQOMQ_1103495a0;
  uStack_d8 = (undefined1)uVar10;
  uVar1 = uStack_d8;
  uStack_d7 = (undefined7)((ulong)uVar10 >> 8);
  uVar3 = uStack_d7;
  uStack_d0 = SUB81(puVar21,0);
  uVar2 = uStack_d0;
  uStack_cf = (undefined7)((ulong)puVar21 >> 8);
  uVar4 = uStack_cf;
  uStack_c8 = SUB81(PTR___s7SwiftUI31ViewAlignedScrollTargetBehaviorVAA0efG0AAWP_110349238,0);
  uVar5 = uStack_c8;
  uStack_c7 = (undefined7)
              ((ulong)PTR___s7SwiftUI31ViewAlignedScrollTargetBehaviorVAA0efG0AAWP_110349238 >> 8);
  uVar6 = uStack_c7;
  dVar13 = 1.25986739689518e-321;
  uStack_1a8 = uVar10;
  puStack_198 = puVar21;
  dStack_e0 = dVar22;
  func_0x000107c614f8(0xff,&dStack_e0,
                      PTR___s7SwiftUI4ViewPAAE20scrollTargetBehavioryQrqd__AA06ScrolleF0Rd__lFQOMQ_1103495a0
                      ,0);
  pdVar17 = &dStack_e0;
  dStack_e0 = dVar22;
  uStack_d8 = uVar1;
  uStack_d7 = uVar3;
  uStack_d0 = uVar2;
  uStack_cf = uVar4;
  uStack_c8 = uVar5;
  uStack_c7 = uVar6;
  func_0x000107c614f4(pdVar17,puVar14,1);
  uStack_d8 = SUB81(pdVar17,0);
  uStack_d7 = (undefined7)((ulong)pdVar17 >> 8);
  lVar23 = 0;
  pdStack_170 = pdVar17;
  dStack_e0 = dVar13;
  func_0x000107c614f8(0,&dStack_e0,
                      PTR___s7SwiftUI4ViewPAAE16scrollIndicators_4axesQrAA25ScrollIndicatorVisibilityV_AA4AxisO3SetVtFQOMQ_110349518
                      ,0);
  lStack_168 = *(long *)(lVar23 + -8);
  lStack_160 = lVar23;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_168 + 0x40));
  lVar27 = (long)&lStack_210 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_178 = lVar27;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar27 = lVar27 - extraout_x12;
  lVar23 = 0;
  lStack_188 = lVar27;
  func_0x000107c6143c(0,dVar13);
  lStack_180 = *(long *)(lVar23 + -8);
  lStack_190 = lVar23;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(lStack_180 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar27 = lVar27 - extraout_x8_00;
  lVar23 = 0;
  lStack_1b8 = lVar27;
  func_0x000107c6143c(0,dVar22);
  lStack_1b0 = *(long *)(lVar23 + -8);
  lStack_1c8 = lVar23;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(lStack_1b0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar27 = lVar27 - extraout_x8_01;
  lVar23 = 0;
  lStack_1f0 = lVar27;
  func_0x000107c6143c(0,uVar11);
  lStack_1e8 = *(long *)(lVar23 + -8);
  lStack_1f8 = lVar23;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(lStack_1e8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar27 = lVar27 - extraout_x8_02;
  lVar23 = 0;
  lStack_208 = lVar27;
  func_0x000107c6143c(0,lStack_200);
  lStack_200 = *(long *)(lVar23 + -8);
  lStack_210 = lVar23;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(lStack_200 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar27 = lVar27 - extraout_x8_03;
  lVar24 = 0;
  func_0x000107c6143c(0,dVar19);
  lVar31 = *(long *)(lVar24 + -8);
  lVar23 = lVar24;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar31 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar32 = lVar27 - extraout_x8_04;
  func_0x000107c5f55c();
  uStack_d0 = (undefined1)uStack_150;
  uVar1 = uStack_d0;
  uStack_cf = (undefined7)((ulong)uStack_150 >> 8);
  uVar3 = uStack_cf;
  uStack_c8 = (undefined1)uStack_158;
  uVar2 = uStack_c8;
  uStack_c7 = (undefined7)((ulong)uStack_158 >> 8);
  uVar4 = uStack_c7;
  uVar18 = 0;
  func_0x000107c6143c(0,uStack_1e0);
  func_0x000107c5f28c(lVar32,lVar23,1,FUN_100f90ab0,&dStack_e0,uVar18,puStack_1d0);
  dStack_e0 = unaff_x20[7];
  uStack_d8 = SUB81(unaff_x20[8],0);
  uVar18 = *(undefined8 *)((long)unaff_x20 + 0x41);
  uStack_cf = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x49);
  uStack_c8 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x49) >> 0x38);
  uStack_d7 = (undefined7)uVar18;
  uStack_d0 = (undefined1)((ulong)uVar18 >> 0x38);
  func_0x0001000285a8(0x112d501e8,&UNK_10d916768);
  func_0x000107c5f778(&dStack_138);
  dVar19 = dStack_138;
  dStack_e0 = dStack_138;
  uStack_d8 = (undefined1)uStack_130;
  uStack_d7 = (undefined7)((ulong)uStack_130 >> 8);
  uStack_d0 = (undefined1)uStack_128;
  uStack_cf = (undefined7)((ulong)uStack_128 >> 8);
  uStack_c8 = uStack_120;
  func_0x000107c5f7e8();
  func_0x000107c5f628(lVar27,&dStack_e0,uVar18,param_3,0,lVar24,PTR___sSiN_11034deb0,puStack_1d8,
                      PTR___sSiSHsWP_11034dec0);
  func_0x000107c61574(uStack_130);
  func_0x000107c61574(dVar19);
  lVar25 = lVar32;
  (**(code **)(lVar31 + 8))();
  uStack_d0 = uVar1;
  uStack_cf = uVar3;
  uStack_c8 = uVar2;
  uStack_c7 = uVar4;
  func_0x000107c5f7ac();
  uVar18 = 0x112d501f0;
  func_0x0001000285a8(0x112d501f0,&UNK_10d916770);
  uVar10 = 0x112d501f8;
  FUN_100f90c1c(0x112d501f8,0x112d501f0,&UNK_10d916770,
                PTR___s7SwiftUI14GeometryReaderVyxGAA4ViewAAMc_110348990);
  lVar31 = lStack_208;
  lVar23 = lStack_210;
  func_0x000107c5f694(lStack_208,lVar25,lVar24,0x100f90abc,&dStack_e0,lStack_210,uVar18,pdStack_1c0,
                      uVar10);
  (**(code **)(lStack_200 + 8))(lVar27,lVar23);
  func_0x000107c5f568();
  dStack_e0 = unaff_x20[2];
  uStack_d8 = SUB81(unaff_x20[3],0);
  uStack_d7 = (undefined7)((ulong)unaff_x20[3] >> 8);
  uVar18 = 0x112d50200;
  func_0x0001000285a8(0x112d50200,&UNK_10dad0750);
  func_0x000107c5f72c(&dStack_138);
  dVar19 = dStack_138 * 0.5;
  dStack_e0 = *unaff_x20;
  uStack_d8 = SUB81(unaff_x20[1],0);
  uStack_d7 = (undefined7)((ulong)unaff_x20[1] >> 8);
  func_0x000107c5f72c(&dStack_138,uVar18);
  lVar25 = lStack_1f0;
  lVar23 = lStack_1f8;
  FUN_100f90920(lStack_1f0,lVar27,dVar19 - dStack_138 * 0.5,0,lStack_1f8,puStack_1a0);
  (**(code **)(lStack_1e8 + 8))(lVar31,lVar23);
  lVar24 = 0;
  func_0x000107c6143c(0,uStack_1a8);
  lVar27 = *(long *)(lVar24 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar27 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar32 = lVar32 - extraout_x8_05;
  lVar23 = 0;
  func_0x000107c5f54c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar23 + -8) + 0x40));
  lVar29 = lVar32 - (extraout_x8_06 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5f548(lVar29);
  func_0x000107c5f550(lVar32,lVar29);
  lVar31 = lStack_1b8;
  lVar23 = lStack_1c8;
  func_0x000107c5f660(lStack_1b8,lVar32,lStack_1c8,lVar24,puStack_198,
                      PTR___s7SwiftUI31ViewAlignedScrollTargetBehaviorVAA0efG0AAWP_110349238);
  (**(code **)(lVar27 + 8))(lVar32,lVar24);
  (**(code **)(lStack_1b0 + 8))(lVar25,lVar23);
  lVar27 = 0;
  func_0x000107c5f51c();
  lVar32 = *(long *)(lVar27 + -8);
  lVar23 = lVar27;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar32 + 0x40));
  lVar29 = lVar29 - (extraout_x8_07 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5f518(lVar29);
  func_0x000107c5f564();
  lVar24 = lVar23;
  func_0x000107c5f55c();
  uVar9 = 0;
  func_0x000107c5f560();
  lVar25 = lVar23;
  func_0x000107c5f560(lVar23);
  func_0x000107c5f560((uint)lVar25 & uVar9);
  uVar9 = uVar9 | (uint)lVar23;
  func_0x000107c5f560();
  lVar23 = lVar24;
  func_0x000107c5f560(lVar24);
  func_0x000107c5f560((uint)lVar23 & uVar9);
  uVar26 = (ulong)(uVar9 | (uint)lVar24);
  func_0x000107c5f560();
  lVar25 = lStack_188;
  lVar23 = lStack_190;
  func_0x000107c5f638(lStack_188,lVar29,uVar26,lStack_190,pdStack_170);
  (**(code **)(lVar32 + 8))(lVar29,lVar27);
  (**(code **)(lStack_180 + 8))(lVar31,lVar23);
  lVar24 = lStack_160;
  lVar31 = lStack_168;
  lVar23 = lStack_178;
  pcVar28 = *(code **)(lStack_168 + 0x10);
  (*pcVar28)(lStack_178,lVar25,lStack_160);
  pcVar30 = *(code **)(lVar31 + 8);
  (*pcVar30)(lVar25,lVar24);
  (*pcVar28)(param_1,lVar23,lVar24);
  (*pcVar30)(lVar23,lVar24);
  return;
}



/* Entry: 100f8f31c; end: 100f90453;  */

void FUN_100f8f31c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  code *pcVar16;
  long lVar17;
  code *pcVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined8 uStack_170;
  undefined1 auStack_168 [8];
  undefined8 uStack_160;
  undefined1 auStack_158 [8];
  long alStack_150 [4];
  undefined1 auStack_130 [8];
  undefined *puStack_128;
  long lStack_120;
  undefined1 *puStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long *plStack_e8;
  undefined *puStack_e0;
  long *plStack_d8;
  long lStack_d0;
  long *plStack_c8;
  undefined *puStack_c0;
  long *plStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  lVar13 = 0x112d4f678;
  uStack_108 = param_4;
  uStack_100 = param_3;
  uStack_f8 = param_2;
  uStack_f0 = param_1;
  func_0x00010002969c(0x112d4f678,&UNK_10d915670);
  uVar2 = 0xff;
  func_0x000107c5f34c(0xff,param_3,PTR___s7SwiftUI18_AspectRatioLayoutVN_110348d98);
  uVar3 = 0xff;
  func_0x000107c5f34c(0xff,uVar2,PTR___s7SwiftUI14_PaddingLayoutVN_110348a08);
  uVar4 = 0xff;
  func_0x000107c5f34c(0xff,uVar3,PTR___s7SwiftUI12_FrameLayoutVN_110348858);
  uVar15 = 0x112d501a8;
  func_0x00010002969c(0x112d501a8,&UNK_10d916748);
  lVar5 = 0xff;
  func_0x000107c5f34c(0xff,uVar4,uVar15);
  uVar15 = 0x112d501b0;
  func_0x00010002969c(0x112d501b0,&UNK_10d916750);
  puVar8 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  puStack_70 = PTR___s7SwiftUI18_AspectRatioLayoutVAA12ViewModifierAAWP_110348d88;
  puVar6 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_78 = param_4;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar2,&uStack_78);
  puStack_80 = PTR___s7SwiftUI14_PaddingLayoutVAA12ViewModifierAAWP_1103489f8;
  puVar7 = puVar8;
  puStack_88 = puVar6;
  func_0x000107c61520(puVar8,uVar3,&puStack_88);
  puStack_90 = PTR___s7SwiftUI12_FrameLayoutVAA12ViewModifierAAWP_110348848;
  puVar6 = puVar8;
  puStack_98 = puVar7;
  func_0x000107c61520(puVar8,uVar4,&puStack_98);
  uVar2 = 0x112d501b8;
  FUN_100f90c1c(0x112d501b8,0x112d501a8,&UNK_10d916748,
                PTR___s7SwiftUI19_BackgroundModifierVyxGAA04ViewD0AAMc_110348ee0);
  puStack_a8 = puVar6;
  uStack_a0 = uVar2;
  func_0x000107c61520(puVar8,lVar5,&puStack_a8);
  lVar9 = 0x112d501c0;
  func_0x00010002969c(0x112d501c0,&UNK_10d916758);
  lVar10 = 0xff;
  func_0x000107c5f390();
  uVar2 = 0x112d501c8;
  func_0x000100f90a70(0x112d501c8,PTR___s7SwiftUI17EmptyVisualEffectVMa_110348c08,
                      PTR___s7SwiftUI17EmptyVisualEffectVAA0dE0AAMc_110348c00);
  plVar11 = &lStack_d0;
  lStack_d0 = lVar10;
  plStack_c8 = (long *)uVar2;
  func_0x000107c614f4(plVar11,PTR___s7SwiftUI12VisualEffectPAAE7opacityyQrSdFQOMQ_110348838,1);
  plVar12 = &lStack_d0;
  lStack_d0 = lVar9;
  plStack_c8 = plVar11;
  func_0x000107c614f4(plVar12,
                      PTR___s7SwiftUI12VisualEffectPAAE05scaleD0_6anchorQr12CoreGraphics7CGFloatV_AA9UnitPointVtFQOMQ_110348828
                      ,1);
  puVar6 = 
  PTR___s7SwiftUI4ViewPAAE16scrollTransition_4axis10transitionQrAA06ScrollE13ConfigurationV_AA4AxisOSgqd__AA17EmptyVisualEffectV_AA0hE5PhaseOtYbctAA0lM0Rd__lFQOMQ_110349528
  ;
  uVar3 = 0xff;
  lStack_d0 = lVar5;
  plStack_c8 = (long *)uVar15;
  puStack_c0 = puVar8;
  plStack_b8 = plVar12;
  func_0x000107c614f8(0xff,&lStack_d0,
                      PTR___s7SwiftUI4ViewPAAE16scrollTransition_4axis10transitionQrAA06ScrollE13ConfigurationV_AA4AxisOSgqd__AA17EmptyVisualEffectV_AA0hE5PhaseOtYbctAA0lM0Rd__lFQOMQ_110349528
                      ,0);
  uVar2 = uVar3;
  FUN_100f797cc();
  plStack_c8 = (long *)PTR___sSiN_11034deb0;
  puStack_b0 = PTR___sSiSHsWP_11034dec0;
  uVar4 = 0xff;
  lStack_d0 = lVar13;
  puStack_c0 = (undefined *)uVar3;
  plStack_b8 = (long *)uVar2;
  func_0x000107c5f790(0xff,&lStack_d0);
  plVar11 = &lStack_d0;
  lStack_d0 = lVar5;
  plStack_c8 = (long *)uVar15;
  puStack_c0 = puVar8;
  plStack_b8 = plVar12;
  func_0x000107c614f4(plVar11,puVar6,1);
  puVar8 = PTR___s7SwiftUI7ForEachVyxq_q0_GAA4ViewA2aER0_rlMc_1103499a8;
  plStack_d8 = plVar11;
  func_0x000107c61520(PTR___s7SwiftUI7ForEachVyxq_q0_GAA4ViewA2aER0_rlMc_1103499a8,uVar4,&plStack_d8
                     );
  lVar13 = 0xff;
  puStack_128 = puVar8;
  func_0x000107c5f750(0xff,uVar4,puVar8);
  puVar8 = PTR___s7SwiftUI6HStackVyxGAA4ViewAAMc_110349878;
  func_0x000107c61520(PTR___s7SwiftUI6HStackVyxGAA4ViewAAMc_110349878,lVar13);
  lVar5 = 0xff;
  lStack_d0 = lVar13;
  plStack_c8 = (long *)puVar8;
  func_0x000107c614f8(0xff,&lStack_d0,
                      PTR___s7SwiftUI4ViewPAAE18scrollTargetLayout9isEnabledQrSb_tFQOMQ_110349558,0)
  ;
  lVar10 = 0;
  func_0x000107c5f34c(0,lVar5,PTR___s7SwiftUI16_FlexFrameLayoutVN_110348bd8);
  lStack_110 = *(long *)(lVar10 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_110 + 0x40));
  puStack_118 = auStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar21 = (long)(auStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  lStack_120 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(lStack_120 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar19 = lVar21 - extraout_x8_00;
  lVar14 = 0;
  func_0x000107c6143c(0,lVar13);
  lVar20 = *(long *)(lVar14 + -8);
  lVar13 = lVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar20 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = lVar19 - extraout_x8_01;
  puStack_c0 = (undefined *)uStack_100;
  plStack_b8 = (long *)uStack_108;
  puStack_b0 = (undefined *)uStack_f8;
  func_0x000107c5f410();
  uVar15 = 0;
  func_0x000107c6143c(0,uVar4);
  func_0x000107c5f74c(lVar17,lVar13,0,1,FUN_100f90bb8,&lStack_d0,uVar15,puStack_128);
  func_0x000107c5f64c(lVar19,1,lVar14,puVar8);
  lVar13 = lVar17;
  lVar9 = lVar14;
  (**(code **)(lVar20 + 8))();
  func_0x000107c5f7ac();
  plVar11 = &lStack_d0;
  lStack_d0 = lVar14;
  plStack_c8 = (long *)puVar8;
  func_0x000107c614f4(plVar11,
                      PTR___s7SwiftUI4ViewPAAE18scrollTargetLayout9isEnabledQrSb_tFQOMQ_110349558,1)
  ;
  *(long *)(lVar17 + -0x10) = lVar5;
  *(long **)(lVar17 + -8) = plVar11;
  *(long *)(lVar17 + -0x20) = lVar13;
  *(long *)(lVar17 + -0x18) = lVar9;
  *(undefined1 *)(lVar17 + -0x28) = 0;
  *(undefined8 *)(lVar17 + -0x30) = 0x7ff0000000000000;
  *(undefined1 *)(lVar17 + -0x38) = 1;
  *(undefined8 *)(lVar17 + -0x40) = 0;
  func_0x000107c5f684(lVar21,0,1,0,1,0,1,0,1);
  (**(code **)(lStack_120 + 8))(lVar19,lVar5);
  puStack_e0 = PTR___s7SwiftUI16_FlexFrameLayoutVAA12ViewModifierAAWP_110348bc8;
  plStack_e8 = plVar11;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,lVar10,&plStack_e8);
  lVar13 = lStack_110;
  puVar1 = puStack_118;
  pcVar16 = *(code **)(lStack_110 + 0x10);
  (*pcVar16)(puStack_118,lVar21,lVar10);
  pcVar18 = *(code **)(lVar13 + 8);
  (*pcVar18)(lVar21,lVar10);
  (*pcVar16)(uStack_f0,puVar1,lVar10);
  (*pcVar18)(puVar1,lVar10);
  return;
}



/* Entry: 100f90454; end: 100f904d7;  */

void FUN_100f90454(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c5f4cc();
  uVar3 = 0x3ff0000000000000;
  if ((param_3 & 1) == 0) {
    uVar3 = 0;
  }
  uVar1 = 0;
  func_0x000107c5f390(0);
  uVar2 = 0x112d501c8;
  func_0x000100f90a70(0x112d501c8,PTR___s7SwiftUI17EmptyVisualEffectVMa_110348c08,
                      PTR___s7SwiftUI17EmptyVisualEffectVAA0dE0AAMc_110348c00);
  func_0x000107c5f2d0(param_1,uVar3,uVar1,uVar2);
  return;
}



/* Entry: 100f904d8; end: 100f90627;  */

void FUN_100f904d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long extraout_x8;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar1 = 0x112d501c0;
  func_0x0001000285a8(0x112d501c0,&UNK_10d916758);
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar2 = param_5;
  func_0x000107c5f4cc();
  uVar7 = 0x3ff0000000000000;
  if ((uVar2 & 1) == 0) {
    uVar7 = 0x3fe8000000000000;
  }
  uVar3 = 0;
  func_0x000107c5f390();
  uVar4 = 0x112d501c8;
  func_0x000100f90a70(0x112d501c8,PTR___s7SwiftUI17EmptyVisualEffectVMa_110348c08,
                      PTR___s7SwiftUI17EmptyVisualEffectVAA0dE0AAMc_110348c00);
  func_0x000107c5f2d0((long)&uStack_80 - extraout_x8,uVar7,uVar3,uVar4);
  func_0x000107c5f4cc();
  uVar8 = 0x3ff0000000000000;
  if ((param_5 & 1) == 0) {
    uVar8 = 0x3fe8000000000000;
  }
  func_0x000107c5f7e4();
  puVar5 = &uStack_80;
  uStack_80 = uVar3;
  uStack_78 = uVar4;
  func_0x000107c614f4(puVar5,PTR___s7SwiftUI12VisualEffectPAAE7opacityyQrSdFQOMQ_110348838,1);
  func_0x000107c5f2cc(param_1,uVar8,uVar7,param_3,lVar1,puVar5);
  (**(code **)(lVar6 + 8))((long)&uStack_80 - extraout_x8,lVar1);
  return;
}



/* Entry: 100f90628; end: 100f906cb;  */

void FUN_100f90628(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_98 [104];
  
  puVar1 = &UNK_1103709d8;
  func_0x000107c613fc(&UNK_1103709d8,0x88,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  uVar3 = param_2[8];
  uVar5 = param_2[0xb];
  uVar4 = param_2[10];
  *(undefined8 *)(puVar1 + 0x68) = param_2[9];
  *(undefined8 *)(puVar1 + 0x60) = uVar3;
  *(undefined8 *)(puVar1 + 0x78) = uVar5;
  *(undefined8 *)(puVar1 + 0x70) = uVar4;
  *(undefined8 *)(puVar1 + 0x80) = param_2[0xc];
  uVar3 = *param_2;
  uVar5 = param_2[3];
  uVar4 = param_2[2];
  *(undefined8 *)(puVar1 + 0x28) = param_2[1];
  *(undefined8 *)(puVar1 + 0x20) = uVar3;
  *(undefined8 *)(puVar1 + 0x38) = uVar5;
  *(undefined8 *)(puVar1 + 0x30) = uVar4;
  uVar5 = param_2[4];
  uVar4 = param_2[7];
  uVar3 = param_2[6];
  *(undefined8 *)(puVar1 + 0x48) = param_2[5];
  *(undefined8 *)(puVar1 + 0x40) = uVar5;
  *(undefined8 *)(puVar1 + 0x58) = uVar4;
  *(undefined8 *)(puVar1 + 0x50) = uVar3;
  *param_1 = 0x100f90ac8;
  param_1[1] = puVar1;
  lVar2 = 0;
  func_0x000100f8e744(0,param_3,param_4);
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(auStack_98,param_2,lVar2);
  return;
}



/* Entry: 100f906cc; end: 100f9080f;  */

void FUN_100f906cc(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lStack_d0;
  undefined1 auStack_c8 [104];
  
  lVar1 = 0;
  func_0x000107c5f2f4();
  lVar7 = *(long *)(lVar1 + -8);
  lVar5 = *(long *)(lVar7 + 0x40);
  lVar3 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000107c5f6cc();
  lStack_d0 = lVar3;
  (**(code **)(lVar7 + 0x10))(auStack_c8 + (-8 - (lVar5 + 0xfU & 0xfffffffffffffff0)),param_2,lVar1)
  ;
  uVar4 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar6 = uVar4 + 0x88 & (uVar4 ^ 0xffffffffffffffff);
  puVar2 = &UNK_110370a00;
  func_0x000107c613fc(&UNK_110370a00,uVar6 + lVar5,uVar4 | 7);
  *(undefined8 *)(puVar2 + 0x10) = param_4;
  *(undefined8 *)(puVar2 + 0x18) = param_5;
  uVar8 = param_3[8];
  uVar10 = param_3[0xb];
  uVar9 = param_3[10];
  *(undefined8 *)(puVar2 + 0x68) = param_3[9];
  *(undefined8 *)(puVar2 + 0x60) = uVar8;
  *(undefined8 *)(puVar2 + 0x78) = uVar10;
  *(undefined8 *)(puVar2 + 0x70) = uVar9;
  *(undefined8 *)(puVar2 + 0x80) = param_3[0xc];
  uVar8 = *param_3;
  uVar10 = param_3[3];
  uVar9 = param_3[2];
  *(undefined8 *)(puVar2 + 0x28) = param_3[1];
  *(undefined8 *)(puVar2 + 0x20) = uVar8;
  *(undefined8 *)(puVar2 + 0x38) = uVar10;
  *(undefined8 *)(puVar2 + 0x30) = uVar9;
  uVar10 = param_3[4];
  uVar9 = param_3[7];
  uVar8 = param_3[6];
  *(undefined8 *)(puVar2 + 0x48) = param_3[5];
  *(undefined8 *)(puVar2 + 0x40) = uVar10;
  *(undefined8 *)(puVar2 + 0x58) = uVar9;
  *(undefined8 *)(puVar2 + 0x50) = uVar8;
  (**(code **)(lVar7 + 0x20))
            (puVar2 + uVar6,auStack_c8 + (-8 - (lVar5 + 0xfU & 0xfffffffffffffff0)),lVar1);
  *param_1 = lStack_d0;
  param_1[1] = (long)FUN_100f90ad4;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = (long)puVar2;
  lVar3 = 0;
  func_0x000100f8e744(0,param_4,param_5);
  (**(code **)(*(long *)(lVar3 + -8) + 0x10))(auStack_c8,param_3,lVar3);
  return;
}



/* Entry: 100f90810; end: 100f9091f;  */

void FUN_100f90810(ulong *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_38;
  
  uStack_48 = param_1[5];
  uVar3 = param_1[4];
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_50 = uVar3;
  uStack_38 = uStack_48;
  FUN_100f90b20(&uStack_38,&uStack_68);
  uVar1 = 0x112d4f580;
  func_0x0001000285a8(0x112d4f580,&UNK_10d915430);
  func_0x000107c5f72c(&uStack_68);
  if ((uStack_68 & 1) == 0) {
    uStack_58 = param_1[5];
    uStack_60 = param_1[4];
    uStack_68 = CONCAT71(uStack_68._1_7_,1);
    func_0x000107c5f730(&uStack_68,uVar1);
    func_0x000100f90b70(&uStack_50);
    func_0x000107c5f2f0();
    uStack_58 = param_1[1];
    uVar2 = *param_1;
    uVar1 = 0x112d50200;
    uStack_68 = uVar3;
    uStack_60 = uVar2;
    func_0x0001000285a8(0x112d50200,&UNK_10dad0750);
    func_0x000107c5f730(&uStack_68,uVar1);
    func_0x000107c5f2f0();
    uStack_58 = param_1[3];
    uStack_60 = param_1[2];
    uStack_68 = uVar2;
    func_0x000107c5f730(&uStack_68,uVar1);
  }
  else {
    func_0x000100f90b70(&uStack_50);
  }
  return;
}



/* Entry: 100f90920; end: 100f90a1b;  */

void FUN_100f90920(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,char param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  long lVar3;
  undefined1 in_b2;
  undefined1 in_register_00005041;
  undefined1 in_register_00005042;
  undefined1 in_register_00005043;
  undefined1 in_register_00005044;
  undefined1 in_register_00005045;
  undefined1 in_register_00005046;
  undefined1 in_register_00005047;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  
  lVar1 = 0;
  func_0x000107c5f4e4();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  lVar2 = (long)&uStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (param_7 != '\x01') {
    func_0x000107c5f280();
  }
  else {
    param_6 = 0;
    param_3 = 0;
    in_b2 = 0;
    in_register_00005041 = 0;
    in_register_00005042 = 0;
    in_register_00005043 = 0;
    in_register_00005044 = 0;
    in_register_00005045 = 0;
    in_register_00005046 = 0;
    in_register_00005047 = 0;
    param_4 = 0;
  }
  uStack_70 = param_7 == '\x01';
  uStack_80 = CONCAT17(in_register_00005047,
                       CONCAT16(in_register_00005046,
                                CONCAT15(in_register_00005045,
                                         CONCAT14(in_register_00005044,
                                                  CONCAT13(in_register_00005043,
                                                           CONCAT12(in_register_00005042,
                                                                    CONCAT11(in_register_00005041,
                                                                             in_b2)))))));
  uStack_90 = param_6;
  uStack_88 = param_3;
  uStack_78 = param_4;
  func_0x000107c5f4e0(lVar2,param_5,&uStack_90);
  func_0x000107c5f6a8(param_1,lVar2,param_8,lVar1,param_9);
  (**(code **)(lVar3 + 8))(lVar2,lVar1);
  return;
}



/* Entry: 100f90a1c; end: 100f90a27;  */

void FUN_100f90a1c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb6854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_110349438
  )();
  return;
}



/* Entry: 100f90a28; end: 100f90aaf;  */

void FUN_100f90a28(void)

{
  FUN_100f8e784();
  return;
}



/* Entry: 100f90ab0; end: 100f90ad3;  */

void FUN_100f90ab0(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  code *pcVar17;
  long lVar18;
  code *pcVar19;
  long unaff_x20;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined8 uStack_170;
  undefined1 auStack_168 [8];
  undefined8 uStack_160;
  undefined1 auStack_158 [8];
  long alStack_150 [4];
  undefined1 auStack_130 [8];
  undefined *puStack_128;
  long lStack_120;
  undefined1 *puStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long *plStack_e8;
  undefined *puStack_e0;
  long *plStack_d8;
  long lStack_d0;
  long *plStack_c8;
  undefined *puStack_c0;
  long *plStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  uVar16 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_f8 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar14 = 0x112d4f678;
  uStack_108 = uVar8;
  uStack_100 = uVar16;
  uStack_f0 = param_1;
  func_0x00010002969c(0x112d4f678,&UNK_10d915670);
  uVar2 = 0xff;
  func_0x000107c5f34c(0xff,uVar16,PTR___s7SwiftUI18_AspectRatioLayoutVN_110348d98);
  uVar3 = 0xff;
  func_0x000107c5f34c(0xff,uVar2,PTR___s7SwiftUI14_PaddingLayoutVN_110348a08);
  uVar4 = 0xff;
  func_0x000107c5f34c(0xff,uVar3,PTR___s7SwiftUI12_FrameLayoutVN_110348858);
  uVar16 = 0x112d501a8;
  func_0x00010002969c(0x112d501a8,&UNK_10d916748);
  lVar5 = 0xff;
  func_0x000107c5f34c(0xff,uVar4,uVar16);
  uVar16 = 0x112d501b0;
  func_0x00010002969c(0x112d501b0,&UNK_10d916750);
  puVar9 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  puStack_70 = PTR___s7SwiftUI18_AspectRatioLayoutVAA12ViewModifierAAWP_110348d88;
  puVar6 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_78 = uVar8;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar2,&uStack_78);
  puStack_80 = PTR___s7SwiftUI14_PaddingLayoutVAA12ViewModifierAAWP_1103489f8;
  puVar7 = puVar9;
  puStack_88 = puVar6;
  func_0x000107c61520(puVar9,uVar3,&puStack_88);
  puStack_90 = PTR___s7SwiftUI12_FrameLayoutVAA12ViewModifierAAWP_110348848;
  puVar6 = puVar9;
  puStack_98 = puVar7;
  func_0x000107c61520(puVar9,uVar4,&puStack_98);
  uVar8 = 0x112d501b8;
  FUN_100f90c1c(0x112d501b8,0x112d501a8,&UNK_10d916748,
                PTR___s7SwiftUI19_BackgroundModifierVyxGAA04ViewD0AAMc_110348ee0);
  puStack_a8 = puVar6;
  uStack_a0 = uVar8;
  func_0x000107c61520(puVar9,lVar5,&puStack_a8);
  lVar10 = 0x112d501c0;
  func_0x00010002969c(0x112d501c0,&UNK_10d916758);
  lVar11 = 0xff;
  func_0x000107c5f390();
  uVar8 = 0x112d501c8;
  func_0x000100f90a70(0x112d501c8,PTR___s7SwiftUI17EmptyVisualEffectVMa_110348c08,
                      PTR___s7SwiftUI17EmptyVisualEffectVAA0dE0AAMc_110348c00);
  plVar12 = &lStack_d0;
  lStack_d0 = lVar11;
  plStack_c8 = (long *)uVar8;
  func_0x000107c614f4(plVar12,PTR___s7SwiftUI12VisualEffectPAAE7opacityyQrSdFQOMQ_110348838,1);
  plVar13 = &lStack_d0;
  lStack_d0 = lVar10;
  plStack_c8 = plVar12;
  func_0x000107c614f4(plVar13,
                      PTR___s7SwiftUI12VisualEffectPAAE05scaleD0_6anchorQr12CoreGraphics7CGFloatV_AA9UnitPointVtFQOMQ_110348828
                      ,1);
  puVar6 = 
  PTR___s7SwiftUI4ViewPAAE16scrollTransition_4axis10transitionQrAA06ScrollE13ConfigurationV_AA4AxisOSgqd__AA17EmptyVisualEffectV_AA0hE5PhaseOtYbctAA0lM0Rd__lFQOMQ_110349528
  ;
  uVar2 = 0xff;
  lStack_d0 = lVar5;
  plStack_c8 = (long *)uVar16;
  puStack_c0 = puVar9;
  plStack_b8 = plVar13;
  func_0x000107c614f8(0xff,&lStack_d0,
                      PTR___s7SwiftUI4ViewPAAE16scrollTransition_4axis10transitionQrAA06ScrollE13ConfigurationV_AA4AxisOSgqd__AA17EmptyVisualEffectV_AA0hE5PhaseOtYbctAA0lM0Rd__lFQOMQ_110349528
                      ,0);
  uVar8 = uVar2;
  FUN_100f797cc();
  plStack_c8 = (long *)PTR___sSiN_11034deb0;
  puStack_b0 = PTR___sSiSHsWP_11034dec0;
  uVar3 = 0xff;
  lStack_d0 = lVar14;
  puStack_c0 = (undefined *)uVar2;
  plStack_b8 = (long *)uVar8;
  func_0x000107c5f790(0xff,&lStack_d0);
  plVar12 = &lStack_d0;
  lStack_d0 = lVar5;
  plStack_c8 = (long *)uVar16;
  puStack_c0 = puVar9;
  plStack_b8 = plVar13;
  func_0x000107c614f4(plVar12,puVar6,1);
  puVar9 = PTR___s7SwiftUI7ForEachVyxq_q0_GAA4ViewA2aER0_rlMc_1103499a8;
  plStack_d8 = plVar12;
  func_0x000107c61520(PTR___s7SwiftUI7ForEachVyxq_q0_GAA4ViewA2aER0_rlMc_1103499a8,uVar3,&plStack_d8
                     );
  lVar14 = 0xff;
  puStack_128 = puVar9;
  func_0x000107c5f750(0xff,uVar3,puVar9);
  puVar9 = PTR___s7SwiftUI6HStackVyxGAA4ViewAAMc_110349878;
  func_0x000107c61520(PTR___s7SwiftUI6HStackVyxGAA4ViewAAMc_110349878,lVar14);
  lVar5 = 0xff;
  lStack_d0 = lVar14;
  plStack_c8 = (long *)puVar9;
  func_0x000107c614f8(0xff,&lStack_d0,
                      PTR___s7SwiftUI4ViewPAAE18scrollTargetLayout9isEnabledQrSb_tFQOMQ_110349558,0)
  ;
  lVar11 = 0;
  func_0x000107c5f34c(0,lVar5,PTR___s7SwiftUI16_FlexFrameLayoutVN_110348bd8);
  lStack_110 = *(long *)(lVar11 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_110 + 0x40));
  puStack_118 = auStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar22 = (long)(auStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  lStack_120 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(lStack_120 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar20 = lVar22 - extraout_x8_00;
  lVar15 = 0;
  func_0x000107c6143c(0,lVar14);
  lVar21 = *(long *)(lVar15 + -8);
  lVar14 = lVar15;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar21 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar18 = lVar20 - extraout_x8_01;
  puStack_c0 = (undefined *)uStack_100;
  plStack_b8 = (long *)uStack_108;
  puStack_b0 = (undefined *)uStack_f8;
  func_0x000107c5f410();
  uVar16 = 0;
  func_0x000107c6143c(0,uVar3);
  func_0x000107c5f74c(lVar18,lVar14,0,1,FUN_100f90bb8,&lStack_d0,uVar16,puStack_128);
  func_0x000107c5f64c(lVar20,1,lVar15,puVar9);
  lVar14 = lVar18;
  lVar10 = lVar15;
  (**(code **)(lVar21 + 8))();
  func_0x000107c5f7ac();
  plVar12 = &lStack_d0;
  lStack_d0 = lVar15;
  plStack_c8 = (long *)puVar9;
  func_0x000107c614f4(plVar12,
                      PTR___s7SwiftUI4ViewPAAE18scrollTargetLayout9isEnabledQrSb_tFQOMQ_110349558,1)
  ;
  *(long *)(lVar18 + -0x10) = lVar5;
  *(long **)(lVar18 + -8) = plVar12;
  *(long *)(lVar18 + -0x20) = lVar14;
  *(long *)(lVar18 + -0x18) = lVar10;
  *(undefined1 *)(lVar18 + -0x28) = 0;
  *(undefined8 *)(lVar18 + -0x30) = 0x7ff0000000000000;
  *(undefined1 *)(lVar18 + -0x38) = 1;
  *(undefined8 *)(lVar18 + -0x40) = 0;
  func_0x000107c5f684(lVar22,0,1,0,1,0,1,0,1);
  (**(code **)(lStack_120 + 8))(lVar20,lVar5);
  puStack_e0 = PTR___s7SwiftUI16_FlexFrameLayoutVAA12ViewModifierAAWP_110348bc8;
  plStack_e8 = plVar12;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,lVar11,&plStack_e8);
  lVar14 = lStack_110;
  puVar1 = puStack_118;
  pcVar17 = *(code **)(lStack_110 + 0x10);
  (*pcVar17)(puStack_118,lVar22,lVar11);
  pcVar19 = *(code **)(lVar14 + 8);
  (*pcVar19)(lVar22,lVar11);
  (*pcVar17)(uStack_f0,puVar1,lVar11);
  (*pcVar19)(puVar1,lVar11);
  return;
}



/* Entry: 100f90ad4; end: 100f90b1f;  */

void FUN_100f90ad4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  ulong uVar3;
  ulong uVar4;
  ulong uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c5f2f4();
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar4 = *(ulong *)(unaff_x20 + 0x40);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x48);
  uStack_60 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_50 = uVar4;
  uStack_38 = uStack_48;
  FUN_100f90b20(&uStack_38,&uStack_68,uVar2,uVar1);
  uVar2 = 0x112d4f580;
  func_0x0001000285a8(0x112d4f580,&UNK_10d915430);
  func_0x000107c5f72c(&uStack_68);
  if ((uStack_68 & 1) == 0) {
    uStack_58 = *(undefined8 *)(unaff_x20 + 0x48);
    uStack_60 = *(undefined8 *)(unaff_x20 + 0x40);
    uStack_68 = CONCAT71(uStack_68._1_7_,1);
    func_0x000107c5f730(&uStack_68,uVar2);
    func_0x000100f90b70(&uStack_50);
    func_0x000107c5f2f0();
    uStack_58 = *(undefined8 *)(unaff_x20 + 0x28);
    uVar3 = *(ulong *)(unaff_x20 + 0x20);
    uVar2 = 0x112d50200;
    uStack_68 = uVar4;
    uStack_60 = uVar3;
    func_0x0001000285a8(0x112d50200,&UNK_10dad0750);
    func_0x000107c5f730(&uStack_68,uVar2);
    func_0x000107c5f2f0();
    uStack_58 = *(undefined8 *)(unaff_x20 + 0x38);
    uStack_60 = *(undefined8 *)(unaff_x20 + 0x30);
    uStack_68 = uVar3;
    func_0x000107c5f730(&uStack_68,uVar2);
  }
  else {
    func_0x000100f90b70(&uStack_50);
  }
  return;
}



/* Entry: 100f90b20; end: 100f90bb7;  */

undefined8 FUN_100f90b20(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112d4f590;
  func_0x0001000285a8(0x112d4f590,&UNK_10d915440);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 100f90bb8; end: 100f90bc3;  */

void FUN_100f90bb8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long extraout_x8;
  long extraout_x12;
  code *pcVar14;
  code *pcVar15;
  long unaff_x20;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 auStack_170 [2];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined *puStack_110;
  undefined8 *puStack_108;
  undefined *puStack_100;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  uVar20 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar13 = *(undefined8 **)(unaff_x20 + 0x20);
  uVar19 = 0x112d4f678;
  uStack_130 = param_1;
  func_0x00010002969c(0x112d4f678,&UNK_10d915670);
  uVar1 = 0xff;
  uStack_148 = uVar20;
  func_0x000107c5f34c(0xff,uVar20,PTR___s7SwiftUI18_AspectRatioLayoutVN_110348d98);
  uVar2 = 0xff;
  func_0x000107c5f34c(0xff,uVar1,PTR___s7SwiftUI14_PaddingLayoutVN_110348a08);
  uVar3 = 0xff;
  func_0x000107c5f34c(0xff,uVar2,PTR___s7SwiftUI12_FrameLayoutVN_110348858);
  uVar20 = 0x112d501a8;
  func_0x00010002969c(0x112d501a8,&UNK_10d916748);
  uVar4 = 0xff;
  func_0x000107c5f34c(0xff,uVar3,uVar20);
  uVar20 = 0x112d501b0;
  func_0x00010002969c(0x112d501b0,&UNK_10d916750);
  puVar7 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  puStack_70 = PTR___s7SwiftUI18_AspectRatioLayoutVAA12ViewModifierAAWP_110348d88;
  puVar5 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_140 = uVar10;
  uStack_78 = uVar10;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&uStack_78);
  puStack_80 = PTR___s7SwiftUI14_PaddingLayoutVAA12ViewModifierAAWP_1103489f8;
  puVar6 = puVar7;
  puStack_88 = puVar5;
  func_0x000107c61520(puVar7,uVar2,&puStack_88);
  puStack_90 = PTR___s7SwiftUI12_FrameLayoutVAA12ViewModifierAAWP_110348848;
  puVar5 = puVar7;
  puStack_98 = puVar6;
  func_0x000107c61520(puVar7,uVar3,&puStack_98);
  uVar10 = 0x112d501b8;
  FUN_100f90c1c(0x112d501b8,0x112d501a8,&UNK_10d916748,
                PTR___s7SwiftUI19_BackgroundModifierVyxGAA04ViewD0AAMc_110348ee0);
  puStack_a8 = puVar5;
  uStack_a0 = uVar10;
  func_0x000107c61520(puVar7,uVar4,&puStack_a8);
  uVar10 = 0x112d501c0;
  func_0x00010002969c(0x112d501c0,&UNK_10d916758);
  uVar2 = 0xff;
  func_0x000107c5f390();
  uVar1 = 0x112d501c8;
  func_0x000100f90a70(0x112d501c8,PTR___s7SwiftUI17EmptyVisualEffectVMa_110348c08,
                      PTR___s7SwiftUI17EmptyVisualEffectVAA0dE0AAMc_110348c00);
  puVar8 = &uStack_120;
  uStack_120 = uVar2;
  puStack_118 = (undefined8 *)uVar1;
  func_0x000107c614f4(puVar8,PTR___s7SwiftUI12VisualEffectPAAE7opacityyQrSdFQOMQ_110348838,1);
  puVar9 = &uStack_120;
  uStack_120 = uVar10;
  puStack_118 = puVar8;
  func_0x000107c614f4(puVar9,
                      PTR___s7SwiftUI12VisualEffectPAAE05scaleD0_6anchorQr12CoreGraphics7CGFloatV_AA9UnitPointVtFQOMQ_110348828
                      ,1);
  uVar10 = 0xff;
  uStack_158 = uVar20;
  uStack_150 = uVar4;
  uStack_120 = uVar4;
  puStack_118 = (undefined8 *)uVar20;
  puStack_110 = puVar7;
  puStack_108 = puVar9;
  func_0x000107c614f8(0xff,&uStack_120,
                      PTR___s7SwiftUI4ViewPAAE16scrollTransition_4axis10transitionQrAA06ScrollE13ConfigurationV_AA4AxisOSgqd__AA17EmptyVisualEffectV_AA0hE5PhaseOtYbctAA0lM0Rd__lFQOMQ_110349528
                      ,0);
  uVar20 = uVar10;
  FUN_100f797cc();
  puStack_118 = (undefined8 *)PTR___sSiN_11034deb0;
  puStack_100 = PTR___sSiSHsWP_11034dec0;
  lVar11 = 0;
  uStack_138 = uVar19;
  uStack_120 = uVar19;
  puStack_110 = (undefined *)uVar10;
  puStack_108 = (undefined8 *)uVar20;
  func_0x000107c5f790(0,&uStack_120);
  lVar17 = *(long *)(lVar11 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar17 + 0x40));
  lVar18 = (long)&uStack_160 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = lVar18 - extraout_x12;
  lStack_b0 = puVar13[6];
  if (-1 < lStack_b0) {
    uStack_b8 = 0;
    puVar5 = &UNK_10d916788;
    func_0x000107c614e0(&UNK_10d916788);
    puVar6 = &UNK_110370a28;
    uStack_160 = uVar20;
    func_0x000107c613fc(&UNK_110370a28,0x88,7);
    *(undefined8 *)(puVar6 + 0x10) = uStack_148;
    *(undefined8 *)(puVar6 + 0x18) = uStack_140;
    uVar19 = puVar13[8];
    uVar1 = puVar13[0xb];
    uVar20 = puVar13[10];
    *(undefined8 *)(puVar6 + 0x68) = puVar13[9];
    *(undefined8 *)(puVar6 + 0x60) = uVar19;
    *(undefined8 *)(puVar6 + 0x78) = uVar1;
    *(undefined8 *)(puVar6 + 0x70) = uVar20;
    *(undefined8 *)(puVar6 + 0x80) = puVar13[0xc];
    uVar19 = *puVar13;
    uVar1 = puVar13[3];
    uVar20 = puVar13[2];
    *(undefined8 *)(puVar6 + 0x28) = puVar13[1];
    *(undefined8 *)(puVar6 + 0x20) = uVar19;
    *(undefined8 *)(puVar6 + 0x38) = uVar1;
    *(undefined8 *)(puVar6 + 0x30) = uVar20;
    uVar1 = puVar13[4];
    uVar20 = puVar13[7];
    uVar19 = puVar13[6];
    *(undefined8 *)(puVar6 + 0x48) = puVar13[5];
    *(undefined8 *)(puVar6 + 0x40) = uVar1;
    *(undefined8 *)(puVar6 + 0x58) = uVar20;
    *(undefined8 *)(puVar6 + 0x50) = uVar19;
    lVar12 = 0;
    func_0x000100f8e744();
    (**(code **)(*(long *)(lVar12 + -8) + 0x10))(&uStack_120,puVar13,lVar12);
    uStack_120 = uStack_150;
    puStack_118 = (undefined8 *)uStack_158;
    puVar8 = &uStack_120;
    puStack_110 = puVar7;
    puStack_108 = puVar9;
    func_0x000107c614f4(puVar8,
                        PTR___s7SwiftUI4ViewPAAE16scrollTransition_4axis10transitionQrAA06ScrollE13ConfigurationV_AA4AxisOSgqd__AA17EmptyVisualEffectV_AA0hE5PhaseOtYbctAA0lM0Rd__lFQOMQ_110349528
                        ,1);
    *(undefined8 **)(lVar16 + -0x10) = puVar8;
    func_0x000107c5f788(lVar16,&uStack_b8,puVar5,FUN_100f90c10,puVar6,uStack_138,uVar10,uStack_160,
                        PTR___sSiSHsWP_11034dec0);
    puStack_128 = puVar8;
    func_0x000107c61520(PTR___s7SwiftUI7ForEachVyxq_q0_GAA4ViewA2aER0_rlMc_1103499a8,lVar11,
                        &puStack_128);
    pcVar14 = *(code **)(lVar17 + 0x10);
    (*pcVar14)(lVar18,lVar16,lVar11);
    pcVar15 = *(code **)(lVar17 + 8);
    (*pcVar15)(lVar16,lVar11);
    (*pcVar14)(uStack_130,lVar18,lVar11);
    (*pcVar15)(lVar18,lVar11);
    return;
  }
                    /* WARNING: Does not return */
  pcVar14 = (code *)SoftwareBreakpoint(1,0x100f8fca8);
  (*pcVar14)();
}



/* Entry: 100f90bc4; end: 100f90c0f;  */

void FUN_100f90bc4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100f90c10; end: 100f90c1b;  */

void FUN_100f90c10(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar13;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x12;
  code *pcVar14;
  code *pcVar15;
  long unaff_x20;
  undefined1 *puVar16;
  long lVar17;
  long lVar18;
  undefined1 auStack_1c0 [8];
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  undefined *puStack_198;
  long lStack_190;
  long *plStack_188;
  long lStack_180;
  long *plStack_178;
  long lStack_170;
  long lStack_168;
  ulong uStack_160;
  long lStack_158;
  long lStack_150;
  long *plStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  undefined *puStack_118;
  long lStack_110;
  long lStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_d8;
  long lStack_d0;
  long *plStack_c8;
  undefined *puStack_c0;
  long *plStack_b8;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  lVar17 = *(long *)(unaff_x20 + 0x10);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x18);
  plStack_178 = (long *)(unaff_x20 + 0x20);
  lStack_158 = *(long *)(lVar17 + -8);
  uStack_1b8 = uVar8;
  uStack_100 = param_1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_158 + 0x40));
  puVar16 = auStack_1c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  func_0x000107c5f34c(0,lVar17,PTR___s7SwiftUI18_AspectRatioLayoutVN_110348d98);
  uStack_160 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(uStack_160 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar18 = (long)puVar16 - extraout_x8_00;
  lVar2 = 0;
  func_0x000107c5f34c(0,lVar1,PTR___s7SwiftUI14_PaddingLayoutVN_110348a08);
  lStack_120 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(lStack_120 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  lStack_190 = lVar18 - extraout_x8_01;
  func_0x000107c5f34c(0,lVar2,PTR___s7SwiftUI12_FrameLayoutVN_110348858);
  lStack_108 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(lStack_108 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = (lVar18 - extraout_x8_01) - extraout_x8_02;
  uStack_1a8 = *param_2;
  uVar4 = 0x112d501a8;
  lStack_f8 = lVar13;
  func_0x00010002969c(0x112d501a8,&UNK_10d916748);
  lVar5 = 0xff;
  lStack_110 = lVar3;
  func_0x000107c5f34c(0xff,lVar3,uVar4);
  uVar4 = 0x112d501b0;
  func_0x00010002969c(0x112d501b0,&UNK_10d916750);
  puVar9 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  puStack_70 = PTR___s7SwiftUI18_AspectRatioLayoutVAA12ViewModifierAAWP_110348d88;
  puVar6 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_138 = uVar4;
  uStack_78 = uVar8;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,lVar1,&uStack_78);
  puStack_80 = PTR___s7SwiftUI14_PaddingLayoutVAA12ViewModifierAAWP_1103489f8;
  puVar7 = puVar9;
  puStack_1b0 = puVar6;
  puStack_88 = puVar6;
  func_0x000107c61520(puVar9,lVar2,&puStack_88);
  puStack_90 = PTR___s7SwiftUI12_FrameLayoutVAA12ViewModifierAAWP_110348848;
  puVar6 = puVar9;
  puStack_198 = puVar7;
  puStack_98 = puVar7;
  func_0x000107c61520(puVar9,lVar3,&puStack_98);
  uVar8 = 0x112d501b8;
  puStack_118 = puVar6;
  FUN_100f90c1c(0x112d501b8,0x112d501a8,&UNK_10d916748,
                PTR___s7SwiftUI19_BackgroundModifierVyxGAA04ViewD0AAMc_110348ee0);
  puStack_a8 = puVar6;
  uStack_a0 = uVar8;
  func_0x000107c61520(puVar9,lVar5,&puStack_a8);
  lVar3 = 0x112d501c0;
  puStack_140 = puVar9;
  func_0x00010002969c(0x112d501c0,&UNK_10d916758);
  lVar10 = 0xff;
  func_0x000107c5f390();
  uVar8 = 0x112d501c8;
  func_0x000100f90a70(0x112d501c8,PTR___s7SwiftUI17EmptyVisualEffectVMa_110348c08,
                      PTR___s7SwiftUI17EmptyVisualEffectVAA0dE0AAMc_110348c00);
  plVar11 = &lStack_d0;
  lStack_d0 = lVar10;
  plStack_c8 = (long *)uVar8;
  func_0x000107c614f4(plVar11,PTR___s7SwiftUI12VisualEffectPAAE7opacityyQrSdFQOMQ_110348838,1);
  plVar12 = &lStack_d0;
  plStack_188 = plVar11;
  lStack_d0 = lVar3;
  plStack_c8 = plVar11;
  func_0x000107c614f4(plVar12,
                      PTR___s7SwiftUI12VisualEffectPAAE05scaleD0_6anchorQr12CoreGraphics7CGFloatV_AA9UnitPointVtFQOMQ_110348828
                      ,1);
  lVar10 = 0;
  plStack_148 = plVar12;
  lStack_d0 = lVar5;
  plStack_c8 = (long *)uVar4;
  puStack_c0 = puVar9;
  plStack_b8 = plVar12;
  func_0x000107c614f8(0,&lStack_d0,
                      PTR___s7SwiftUI4ViewPAAE16scrollTransition_4axis10transitionQrAA06ScrollE13ConfigurationV_AA4AxisOSgqd__AA17EmptyVisualEffectV_AA0hE5PhaseOtYbctAA0lM0Rd__lFQOMQ_110349528
                      ,0);
  lStack_130 = *(long *)(lVar10 + -8);
  lStack_128 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_130 + 0x40));
  lVar13 = lVar13 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  lStack_150 = lVar13;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar13 - extraout_x12;
  lVar10 = 0;
  lStack_170 = lVar13;
  func_0x000107c6143c(0,lVar5);
  lStack_168 = *(long *)(lVar10 + -8);
  lStack_180 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(lStack_168 + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar11 = plStack_178;
  lVar13 = lVar13 - extraout_x8_04;
  lStack_1a0 = lVar13;
  (*(code *)plStack_178[0xb])(puVar16,uStack_1a8);
  func_0x000107c5f604(lVar18,0,1,0,lVar17,uStack_1b8);
  (**(code **)(lStack_158 + 8))(puVar16,lVar17);
  func_0x000107c5f56c();
  lVar17 = lStack_190;
  func_0x000107c5f6a0(lStack_190);
  (**(code **)(uStack_160 + 8))(lVar18,lVar1);
  lStack_e8 = plVar11[1];
  lStack_f0 = *plVar11;
  plStack_c8 = (long *)plVar11[1];
  lStack_d0 = *plVar11;
  uVar4 = 0x112d50200;
  puVar9 = &UNK_10dad0750;
  func_0x0001000285a8(0x112d50200,&UNK_10dad0750);
  func_0x000107c5f72c(&uStack_d8);
  func_0x000107c5f72c(&lStack_d0,uVar4);
  lVar1 = lStack_d0;
  func_0x000107c5f7ac();
  func_0x000107c5f680(lStack_f8,uStack_d8,0,lVar1,0,uVar4,puVar9,lVar2,puStack_198);
  (**(code **)(lStack_120 + 8))(lVar17,lVar2);
  lVar17 = 0x112d50208;
  puVar9 = &UNK_10d9167a0;
  func_0x0001000285a8();
  lStack_120 = *(long *)(lVar17 + -8);
  lStack_158 = lVar17;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(lStack_120 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = lVar13 - extraout_x8_05;
  func_0x000107c5f7ac();
  lVar10 = 0;
  lStack_d0 = lVar17;
  plStack_c8 = (long *)puVar9;
  func_0x000107c5f540();
  lVar2 = *(long *)(lVar10 + -8);
  lVar17 = *(long *)(lVar2 + 0x40);
  plStack_178 = (long *)lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uStack_160 = lVar17 + 0xfU & 0xfffffffffffffff0;
  lVar18 = lVar13 - uStack_160;
  func_0x000107c5f53c(lVar18);
  lVar17 = 0x112d4f5e8;
  func_0x0001000285a8(0x112d4f5e8,&UNK_10d915498);
  lVar1 = lVar17;
  func_0x000100f79338();
  plVar11 = plStack_188;
  func_0x000107c5f63c(lVar13,lVar18,2,FUN_100f90454,0,lVar17,lVar3,lVar1,plStack_188);
  pcVar14 = *(code **)(lVar2 + 8);
  lVar5 = lVar18;
  (*pcVar14)(lVar18,lVar10);
  func_0x000107c5f7ac();
  plStack_b8 = plVar11;
  plVar11 = &lStack_d0;
  lStack_d0 = lVar17;
  plStack_c8 = (long *)lVar3;
  puStack_c0 = (undefined *)lVar1;
  func_0x000107c614f4(plVar11,
                      PTR___s7SwiftUI4ViewPAAE16scrollTransition_4axis10transitionQrAA06ScrollE13ConfigurationV_AA4AxisOSgqd__AA17EmptyVisualEffectV_AA0hE5PhaseOtYbctAA0lM0Rd__lFQOMQ_110349528
                      ,1);
  lVar2 = lStack_f8;
  lVar1 = lStack_110;
  lVar17 = lStack_158;
  lVar3 = lStack_1a0;
  func_0x000107c5f5f8(lStack_1a0,lVar13,lVar5,lVar10,lStack_110,lStack_158,puStack_118,plVar11);
  (**(code **)(lStack_120 + 8))(lVar13,lVar17);
  (**(code **)(lStack_108 + 8))(lVar2,lVar1);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar18 = lVar18 - uStack_160;
  func_0x000107c5f53c(lVar18);
  lVar1 = lStack_170;
  lVar17 = lStack_180;
  func_0x000107c5f63c(lStack_170,lVar18,2,FUN_100f904d8,0,lStack_180,uStack_138,puStack_140,
                      plStack_148);
  (*pcVar14)(lVar18,plStack_178);
  (**(code **)(lStack_168 + 8))(lVar3,lVar17);
  lVar2 = lStack_128;
  lVar17 = lStack_130;
  lVar3 = lStack_150;
  pcVar14 = *(code **)(lStack_130 + 0x10);
  (*pcVar14)(lStack_150,lVar1,lStack_128);
  pcVar15 = *(code **)(lVar17 + 8);
  (*pcVar15)(lVar1,lVar2);
  (*pcVar14)(uStack_100,lVar3,lVar2);
  (*pcVar15)(lVar3,lVar2);
  return;
}



/* Entry: 100f90c1c; end: 100f90c5f;  */

void FUN_100f90c1c(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    func_0x000107c61520(param_4,param_2);
    *param_1 = param_4;
  }
  return;
}



/* Entry: 100f90c60; end: 100f90c8f;  */

undefined1  [16] FUN_100f90c60(void)

{
  return ZEXT816(0x110370a88);
}



/* Entry: 100f90c90; end: 100f90daf;  */

void FUN_100f90c90(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  long extraout_x8;
  undefined8 unaff_x20;
  
  lVar1 = 0;
  func_0x000107c5eca0();
  lVar1 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar1 + 0x40));
  puVar2 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_100ece968(0);
  (**(code **)(lVar1 + 0x10))(puVar2);
  func_0x000107c5fff8();
  puVar3 = puVar2;
  func_0x000107c5c158();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = (undefined1 *)0x0;
    func_0x000107c5faec(0);
    func_0x000107c5fadc();
    func_0x000107c6142c(unaff_x20);
  }
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x000107c48af4();
  func_0x000107c61170(puVar3);
  func_0x000107c5af80(puVar4);
  func_0x000107c61180();
  func_0x000107c5eca8(param_1);
  func_0x000107c61170(puVar4);
  return;
}



/* Entry: 100f90db0; end: 100f90e7f;  */

void FUN_100f90db0(undefined8 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar3 = 0;
  func_0x000107c5f37c();
  iVar2 = *(int *)(lVar3 + 0x14);
  uVar1 = *(undefined4 *)PTR___s7SwiftUI18RoundedCornerStyleO10continuousyA2CmFWC_110348d50;
  lVar3 = 0;
  func_0x000107c5f41c();
  (**(code **)(*(long *)(lVar3 + -8) + 0x68))((long)param_1 + (long)iVar2,uVar1,lVar3);
  param_1[1] = 0x4040000000000000;
  *param_1 = 0x4040000000000000;
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c5f6c0();
  lVar3 = 0x112d50228;
  func_0x0001000285a8(0x112d50228,&UNK_10d9168a0);
  *(undefined **)((long)param_1 + (long)*(int *)(lVar3 + 0x24)) = puVar4;
  lVar3 = 0x112d50230;
  func_0x0001000285a8(0x112d50230,&UNK_10d9168a8);
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x24));
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 1;
  return;
}



/* Entry: 100f90e80; end: 100f90e8f;  */

void FUN_100f90e80(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc028c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_11034f3b8)(param_1,&UNK_10e61c0e0,1);
  return;
}



/* Entry: 100f90e90; end: 100f9100b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_100f90e90(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  long extraout_x8;
  undefined8 *puVar9;
  undefined8 auStack_60 [5];
  undefined8 uStack_38;
  
  lVar5 = 0;
  func_0x000107c5f37c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar7 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar9 = (undefined8 *)((long)auStack_60 + lVar7);
  iVar4 = *(int *)(lVar5 + 0x14);
  uVar3 = *(undefined4 *)PTR___s7SwiftUI18RoundedCornerStyleO10continuousyA2CmFWC_110348d50;
  lVar5 = 0;
  func_0x000107c5f41c();
  (**(code **)(*(long *)(lVar5 + -8) + 0x68))((long)puVar9 + (long)iVar4,uVar3,lVar5);
  *(undefined8 *)((long)auStack_60 + lVar7 + 8U) = 0x4040000000000000;
  *puVar9 = 0x4040000000000000;
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c5f6c0();
  func_0x000107c5f2b4(auStack_60 + 1,0x3ff0000000000000,0x4024000000000000,0,0,0,
                      PTR___swiftEmptyArrayStorage_11034f1c8);
  func_0x000100f8d554(puVar9,param_1);
  lVar7 = 0x112d50210;
  func_0x0001000285a8(0x112d50210,&UNK_10d916888);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar7 + 0x24));
  puVar1[1] = auStack_60[2];
  *puVar1 = auStack_60[1];
  puVar1[3] = auStack_60[4];
  puVar1[2] = auStack_60[3];
  puVar1[4] = uStack_38;
  lVar7 = 0x112d50218;
  puVar8 = &UNK_10d916890;
  func_0x0001000285a8();
  *(undefined **)(param_1 + *(int *)(lVar7 + 0x34)) = puVar6;
  *(undefined2 *)(param_1 + *(int *)(lVar7 + 0x38)) = 0x100;
  func_0x000107c5f7ac();
  func_0x000100f8d598(puVar9);
  lVar5 = 0x112d50220;
  func_0x0001000285a8(0x112d50220,&UNK_10d916898);
  plVar2 = (long *)(param_1 + *(int *)(lVar5 + 0x24));
  *plVar2 = lVar7;
  plVar2[1] = (long)puVar8;
  return;
}



/* Entry: 100f9100c; end: 100f9105b;  */

void FUN_100f9100c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112d50238 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112d50240;
  func_0x00010002969c(0x112d50240,&UNK_10d9168b0);
  puVar2 = PTR___s7SwiftUI15StrokeShapeViewVyxq_q0_GAA0E0AAMc_110348aa8;
  func_0x000107c61520(PTR___s7SwiftUI15StrokeShapeViewVyxq_q0_GAA0E0AAMc_110348aa8,uVar1);
  puRam0000000112d50238 = puVar2;
  return;
}



/* Entry: 100f9105c; end: 100f9114b;  */

void FUN_100f9105c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  if (puRam0000000112d50248 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112d50230;
  func_0x00010002969c(0x112d50230,&UNK_10d9168a8);
  uVar2 = uVar1;
  func_0x000100f910d4();
  puStack_28 = PTR___s7SwiftUI18_AspectRatioLayoutVAA12ViewModifierAAWP_110348d88;
  puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_30 = uVar2;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&uStack_30);
  puRam0000000112d50248 = puVar3;
  return;
}



/* Entry: 100f9114c; end: 100f911df;  */

void FUN_100f9114c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112d50258 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x000107c5f37c(0xff);
  puVar2 = PTR___s7SwiftUI16RoundedRectangleVAA4ViewAAMc_110348b50;
  func_0x000107c61520(PTR___s7SwiftUI16RoundedRectangleVAA4ViewAAMc_110348b50,uVar1);
  puRam0000000112d50258 = puVar2;
  return;
}



/* Entry: 100f911e0; end: 100f911f7;  */

void FUN_100f911e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb6854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_110349438
  )();
  return;
}



/* Entry: 100f911f8; end: 100f91457;  */

/* WARNING: Possible PIC construction at 0x000100f91390: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f91394) */
/* WARNING: Removing unreachable block (ram,0x000100f91454) */
/* WARNING: Removing unreachable block (ram,0x000100f9140c) */

void FUN_100f911f8(double param_1,double param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 unaff_x20;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  dVar5 = param_1;
  func_0x000107c5b078();
  dVar3 = dVar5;
  func_0x000107c51820();
  dVar5 = dVar5 * dVar3;
  func_0x000107c5b078();
  func_0x000107c51820();
  dVar4 = param_2;
  if (dVar5 <= param_1) {
    func_0x000107c5b078();
    func_0x000107c51820();
    func_0x000107c5b078();
    dVar4 = param_2;
    func_0x000107c51820();
    dVar3 = param_2 * dVar3;
    if (dVar3 <= param_1) goto code_r0x000107c61174;
  }
  func_0x000107c51820();
  param_1 = param_1 / dVar3;
  func_0x000107c5b078();
  func_0x000107c5b078();
  dVar3 = dVar3 / dVar4;
  if (dVar3 <= 1.0) {
    dVar3 = param_1 * dVar3;
    dVar5 = param_1;
  }
  else {
    dVar5 = param_1 / dVar3;
    dVar3 = param_1;
  }
  puVar1 = PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1126afe00;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1126afe00);
  func_0x000107c453e4();
  func_0x000107c51820();
  func_0x000107c58bfc(puVar1);
  func_0x000107c610f8(PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08);
  func_0x000107c486fc(dVar3,dVar5);
  puVar1 = &UNK_110370b00;
  func_0x000107c613fc(&UNK_110370b00,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = unaff_x20;
  *(double *)(puVar1 + 0x18) = dVar3;
  *(double *)(puVar1 + 0x20) = dVar5;
  puVar2 = &UNK_110370b28;
  func_0x000107c613fc(&UNK_110370b28,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_100f91458;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  pcStack_70 = FUN_100f9146c;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_100f9148c;
  puStack_78 = &UNK_110370b40;
  puStack_68 = puVar2;
  func_0x000107c60bc4(&puStack_90);
code_r0x000107c61174:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 100f91458; end: 100f9146b;  */

void FUN_100f91458(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf89930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,0,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
             *(undefined8 *)(unaff_x20 + 0x10),PTR_s_drawInRect__1125bfff0);
  return;
}



/* Entry: 100f9146c; end: 100f9148b;  */

void FUN_100f9146c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 100f9148c; end: 100f914c3;  */

void FUN_100f9148c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  func_0x000107c61174(param_2);
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100f914c4; end: 100f914df;  */

void FUN_100f914c4(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 100f914e0; end: 100f9158f;  */

long FUN_100f914e0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 100f91590; end: 100f916cf;  */

undefined8 * FUN_100f91590(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar5 = param_2[1];
  *param_1 = *param_2;
  if (1 < uVar5) {
    func_0x000107c61434();
  }
  uVar6 = param_2[2];
  uVar12 = param_2[3];
  param_1[1] = uVar5;
  param_1[2] = uVar6;
  param_1[3] = uVar12;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar8 = param_2[5];
  param_1[5] = uVar8;
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  uVar12 = param_2[7];
  uVar2 = param_2[8];
  param_1[7] = uVar12;
  param_1[8] = uVar2;
  uVar1 = param_2[9];
  uVar3 = param_2[10];
  param_1[9] = uVar1;
  param_1[10] = uVar3;
  uVar10 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar10;
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  uVar7 = param_2[0xf];
  uVar11 = param_2[0xe];
  uVar13 = param_2[0x11];
  uVar9 = param_2[0x10];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar11;
  param_1[0x11] = uVar13;
  param_1[0x10] = uVar9;
  uVar11 = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_2 + 0x13);
  uVar9 = param_2[0x14];
  uVar4 = *(undefined1 *)(param_2 + 0x15);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar12);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c615f0(uVar10);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar11);
  func_0x000100f74158(uVar9,uVar4);
  param_1[0x14] = uVar9;
  *(undefined1 *)(param_1 + 0x15) = uVar4;
  uVar6 = param_2[0x17];
  uVar12 = param_2[0x16];
  param_1[0x17] = param_2[0x17];
  param_1[0x16] = uVar12;
  func_0x000107c6157c(uVar6);
  return param_1;
}



/* Entry: 100f916d0; end: 100f91a2f;  */

undefined8 * FUN_100f916d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  ulong uVar3;
  ulong *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  *param_1 = *param_2;
  puVar4 = param_1 + 1;
  uVar7 = *puVar4;
  uVar3 = param_2[1];
  if (uVar7 < 2) {
    if (uVar3 < 2) {
      *puVar4 = uVar3;
    }
    else {
      *puVar4 = uVar3;
      func_0x000107c61434();
    }
  }
  else if (uVar3 < 2) {
    func_0x000100f96dec(puVar4,0x112d4f970,&UNK_10d9158d0);
    *puVar4 = param_2[1];
  }
  else {
    *puVar4 = uVar3;
    func_0x000107c61434();
    func_0x000107c6142c(uVar7);
  }
  uVar5 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c6157c();
  func_0x000107c61574(uVar5);
  uVar5 = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[3] = uVar5;
  uVar5 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c6157c();
  func_0x000107c61574(uVar5);
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  uVar5 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c6157c();
  func_0x000107c61574(uVar5);
  uVar5 = param_1[8];
  param_1[8] = param_2[8];
  func_0x000107c6157c();
  func_0x000107c61574(uVar5);
  uVar5 = param_1[9];
  param_1[9] = param_2[9];
  func_0x000107c6157c();
  func_0x000107c61574(uVar5);
  uVar5 = param_1[10];
  param_1[10] = param_2[10];
  func_0x000107c6157c();
  func_0x000107c61574(uVar5);
  uVar5 = param_2[0xc];
  uVar6 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  func_0x000107c615f0();
  func_0x000107c615e8(uVar6);
  param_1[0xc] = uVar5;
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  uVar6 = param_1[0xf];
  uVar5 = param_2[0xf];
  uVar8 = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar8;
  func_0x000107c6157c(uVar5);
  func_0x000107c61574(uVar6);
  uVar6 = param_1[0x11];
  uVar5 = param_2[0x11];
  uVar8 = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar8;
  func_0x000107c6157c(uVar5);
  func_0x000107c61574(uVar6);
  param_1[0x12] = param_2[0x12];
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_2 + 0x13);
  uVar6 = param_2[0x14];
  uVar1 = *(undefined1 *)(param_2 + 0x15);
  func_0x000100f74158(uVar6,uVar1);
  uVar5 = param_1[0x14];
  param_1[0x14] = uVar6;
  uVar2 = *(undefined1 *)(param_1 + 0x15);
  *(undefined1 *)(param_1 + 0x15) = uVar1;
  FUN_100f72e4c(uVar5,uVar2);
  uVar6 = param_1[0x17];
  uVar5 = param_2[0x17];
  uVar8 = param_2[0x16];
  param_1[0x17] = param_2[0x17];
  param_1[0x16] = uVar8;
  func_0x000107c6157c(uVar5);
  func_0x000107c61574(uVar6);
  return param_1;
}



/* Entry: 100f91a30; end: 100f91b07;  */

int FUN_100f91a30(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x30] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 0x10);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 100f91b08; end: 100f91b7f;  */

/* WARNING: Possible PIC construction at 0x000100f91b64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f91b68) */

void FUN_100f91b08(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 100f91b80; end: 100f91b93;  */

bool FUN_100f91b80(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 100f91b94; end: 100f91c3f;  */

void FUN_100f91b94(void)

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



/* Entry: 100f91c40; end: 100f921f7;  */

void FUN_100f91c40(ulong *param_1,undefined8 param_2,undefined8 param_3,byte param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long unaff_x20;
  ulong uVar12;
  ulong uStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  undefined *puStack_288;
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  code *pcStack_248;
  undefined *puStack_240;
  ulong uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined7 uStack_1d7;
  undefined8 uStack_1cf;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  undefined *puStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  undefined1 uStack_168;
  undefined1 uStack_167;
  undefined6 uStack_166;
  undefined1 uStack_160;
  undefined1 uStack_15f;
  undefined7 uStack_15e;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  undefined *puStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  undefined1 uStack_f8;
  undefined1 uStack_f7;
  undefined6 uStack_f6;
  undefined1 uStack_f0;
  undefined1 uStack_ef;
  undefined7 uStack_ee;
  undefined1 uStack_e7;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  undefined *puStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined2 uStack_88;
  undefined6 uStack_86;
  undefined2 uStack_80;
  undefined6 uStack_7e;
  undefined1 uStack_78;
  undefined1 uStack_77;
  
  uStack_d8 = *(ulong *)(unaff_x20 + 0x10);
  uStack_e0 = *(ulong *)(unaff_x20 + 8);
  uVar12 = 0x112d4f9d8;
  puVar10 = &UNK_10d9159a0;
  func_0x0001000285a8();
  func_0x000107c5f72c(&uStack_150);
  uVar6 = uStack_150;
  if (uStack_150 == 0) {
    func_0x000107c5f7ac();
    uStack_d8 = 2;
    uStack_e0 = 0x81;
    uStack_78 = 0;
    uVar7 = 0x112d4f518;
    uStack_d0 = uVar12;
    puStack_c8 = puVar10;
    func_0x0001000285a8(0x112d4f518,&UNK_10d9153e0);
    uVar8 = 0x112d4fb98;
    func_0x0001000285a8(0x112d4fb98,&UNK_10d916b80);
    uVar9 = uVar8;
    FUN_100f7912c();
    uVar11 = 0x112d4fb90;
    FUN_100f96d58(0x112d4fb90,0x112d4fb98,&UNK_10d916b80,&UNK_10d9166f0);
    func_0x000107c5f490(&uStack_230,&uStack_e0,uVar7,uVar8,uVar9,uVar11);
    uStack_178 = uStack_1e8;
    uStack_180 = uStack_1f0;
    uStack_170 = uStack_1e0;
    uStack_15f = (undefined1)uStack_1cf;
    uStack_15e = (undefined7)((ulong)uStack_1cf >> 8);
    uStack_167 = (undefined1)uStack_1d7;
    uStack_166 = (undefined6)((uint7)uStack_1d7 >> 8);
    uStack_1b8 = uStack_228;
    uStack_1c0 = uStack_230;
    puStack_1a8 = (undefined *)uStack_218;
    uStack_1b0 = uStack_220;
    uStack_198 = uStack_208;
    uStack_1a0 = uStack_210;
    uStack_188 = uStack_1f8;
    uStack_190 = uStack_200;
    uStack_108 = uStack_1e8;
    uStack_110 = uStack_1f0;
    uStack_100 = uStack_1e0;
    uStack_148 = uStack_228;
    uStack_150 = uStack_230;
    puStack_138 = (undefined *)uStack_218;
    uStack_140 = uStack_220;
    uStack_128 = uStack_208;
    uStack_130 = uStack_210;
    uStack_118 = uStack_1f8;
    uStack_120 = uStack_200;
    uStack_e7 = 0;
    uVar7 = 0x112d4fb78;
    uStack_f7 = uStack_167;
    uStack_f6 = uStack_166;
    uStack_ef = uStack_15f;
    uStack_ee = uStack_15e;
    FUN_100f96da4(&uStack_1c0,&uStack_e0,0x112d4fb78,&UNK_10d916b70);
    func_0x0001000285a8(0x112d4fb78,&UNK_10d916b70);
    uVar8 = 0x112d4fb80;
    func_0x0001000285a8(0x112d4fb80,&UNK_10d915c10);
    uVar11 = uVar8;
    FUN_100f83ed8();
    uVar9 = uVar11;
    func_0x000100f83f70();
    func_0x000107c5f490(&uStack_e0,&uStack_150,uVar7,uVar8,uVar11,uVar9);
  }
  else {
    if (uStack_150 == 1) {
      uVar6 = 0x6567616d49206f4e;
      uVar11 = 0xee00646e756f4620;
      func_0x000107c5f414();
      param_4 = param_4 & 1;
      func_0x000107c5f5d8();
      uVar12 = uVar6;
      uVar8 = uVar11;
      func_0x000107c5f7ac();
      uStack_140 = CONCAT71(uStack_140._1_7_,param_4);
      uStack_e7 = 1;
      uVar7 = 0x112d4fb78;
      uStack_150 = uVar6;
      uStack_148 = uVar11;
      puStack_138 = (undefined *)param_5;
      uStack_130 = uVar12;
      uStack_128 = uVar8;
      func_0x0001000285a8(0x112d4fb78,&UNK_10d916b70);
      uVar8 = 0x112d4fb80;
      func_0x0001000285a8(0x112d4fb80,&UNK_10d915c10);
      uVar11 = uVar8;
      FUN_100f83ed8();
      uVar9 = uVar11;
      func_0x000100f83f70();
      func_0x000107c5f490(&uStack_e0,&uStack_150,uVar7,uVar8,uVar11,uVar9);
      goto LAB_100f92150;
    }
    if (uStack_150 >> 0x3e == 0) {
      uVar12 = *(ulong *)((uStack_150 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar12 = uStack_150;
      if (-1 < (long)uStack_150) {
        uVar12 = uStack_150 & 0xffffffffffffff8;
      }
      func_0x000107c60480();
    }
    uStack_148 = *(undefined8 *)(unaff_x20 + 0x20);
    uStack_150 = *(ulong *)(unaff_x20 + 0x18);
    uStack_140 = *(undefined8 *)(unaff_x20 + 0x28);
    func_0x0001000285a8(0x112d4f558,&UNK_10d915410);
    func_0x000107c5f734(&uStack_e0);
    uVar4 = uStack_d0;
    uVar3 = uStack_d8;
    uVar2 = uStack_e0;
    uVar5 = puStack_c8._0_1_;
    puVar10 = &UNK_110370dc0;
    func_0x000107c613fc(&UNK_110370dc0,0x18,7);
    *(ulong *)(puVar10 + 0x10) = uVar6;
    puVar1 = PTR___sSdN_11034dd90;
    uStack_150 = 0;
    func_0x000107c5f728(&uStack_e0,&uStack_150,PTR___sSdN_11034dd90);
    uStack_150 = 0;
    func_0x000107c5f728(&uStack_d0,&uStack_150,puVar1);
    uStack_150 = uStack_150 & 0xffffffffffffff00;
    func_0x000107c5f728(&uStack_c0,&uStack_150,PTR___sSbN_11034dd40);
    uStack_90 = CONCAT71(uStack_90._1_7_,uVar5);
    uStack_88 = 0x6d9c;
    uStack_86 = 0x100f9;
    uStack_80 = SUB82(puVar10,0);
    uStack_7e = (undefined6)((ulong)puVar10 >> 0x10);
    uStack_298 = uStack_d8;
    uStack_2a0 = uStack_e0;
    puStack_288 = puStack_c8;
    uStack_290 = uStack_d0;
    uStack_278 = uStack_b8;
    uStack_280 = uStack_c0;
    uStack_268 = uVar2;
    pcStack_248 = FUN_100f96d9c;
    uStack_258 = uVar4;
    uStack_260 = uVar3;
    uStack_250 = uStack_90;
    uStack_98 = uVar4;
    uStack_a0 = uVar3;
    uStack_a8 = uVar2;
    uStack_78 = 1;
    uVar7 = 0x112d4fb98;
    uStack_270 = uVar12;
    puStack_240 = puVar10;
    uStack_b0 = uVar12;
    FUN_100f96da4(&uStack_2a0,&uStack_150,0x112d4fb98,&UNK_10d916b80);
    FUN_100f96da4(&uStack_2a0,&uStack_150,0x112d4fb98,&UNK_10d916b80);
    uVar8 = 0x112d4f518;
    func_0x0001000285a8(0x112d4f518,&UNK_10d9153e0);
    func_0x0001000285a8(0x112d4fb98,&UNK_10d916b80);
    uVar9 = uVar7;
    FUN_100f7912c();
    uVar11 = 0x112d4fb90;
    FUN_100f96d58(0x112d4fb90,0x112d4fb98,&UNK_10d916b80,&UNK_10d9166f0);
    func_0x000107c5f490(&uStack_230,&uStack_e0,uVar8,uVar7,uVar9,uVar11);
    uStack_178 = uStack_1e8;
    uStack_180 = uStack_1f0;
    uStack_170 = uStack_1e0;
    uStack_15f = (undefined1)uStack_1cf;
    uStack_15e = (undefined7)((ulong)uStack_1cf >> 8);
    uStack_167 = (undefined1)uStack_1d7;
    uStack_166 = (undefined6)((uint7)uStack_1d7 >> 8);
    uStack_1b8 = uStack_228;
    uStack_1c0 = uStack_230;
    puStack_1a8 = (undefined *)uStack_218;
    uStack_1b0 = uStack_220;
    uStack_198 = uStack_208;
    uStack_1a0 = uStack_210;
    uStack_188 = uStack_1f8;
    uStack_190 = uStack_200;
    uStack_108 = uStack_1e8;
    uStack_110 = uStack_1f0;
    uStack_100 = uStack_1e0;
    uStack_148 = uStack_228;
    uStack_150 = uStack_230;
    puStack_138 = (undefined *)uStack_218;
    uStack_140 = uStack_220;
    uStack_128 = uStack_208;
    uStack_130 = uStack_210;
    uStack_118 = uStack_1f8;
    uStack_120 = uStack_200;
    uStack_e7 = 0;
    uVar7 = 0x112d4fb78;
    uStack_f7 = uStack_167;
    uStack_f6 = uStack_166;
    uStack_ef = uStack_15f;
    uStack_ee = uStack_15e;
    FUN_100f96da4(&uStack_1c0,&uStack_e0,0x112d4fb78,&UNK_10d916b70);
    func_0x0001000285a8(0x112d4fb78,&UNK_10d916b70);
    uVar8 = 0x112d4fb80;
    func_0x0001000285a8(0x112d4fb80,&UNK_10d915c10);
    uVar11 = uVar8;
    FUN_100f83ed8();
    uVar9 = uVar11;
    func_0x000100f83f70();
    func_0x000107c5f490(&uStack_e0,&uStack_150,uVar7,uVar8,uVar11,uVar9);
    func_0x000100f96dec(&uStack_2a0,0x112d4fb98,&UNK_10d916b80);
    func_0x000100f96dec(&uStack_2a0,0x112d4fb98,&UNK_10d916b80);
  }
  func_0x000100f96dec(&uStack_230,0x112d4fb78,&UNK_10d916b70);
LAB_100f92150:
  uStack_178 = uStack_98;
  uStack_180 = uStack_a0;
  uStack_168 = (undefined1)uStack_88;
  uStack_167 = (undefined1)((ushort)uStack_88 >> 8);
  uStack_170 = uStack_90;
  uStack_15e = CONCAT16(uStack_78,uStack_7e);
  uStack_166 = uStack_86;
  uStack_160 = (undefined1)uStack_80;
  uStack_15f = (undefined1)((ushort)uStack_80 >> 8);
  uStack_1b8 = uStack_d8;
  uStack_1c0 = uStack_e0;
  puStack_1a8 = puStack_c8;
  uStack_1b0 = uStack_d0;
  uStack_198 = uStack_b8;
  uStack_1a0 = uStack_c0;
  uStack_188 = uStack_a8;
  uStack_190 = uStack_b0;
  param_1[1] = uStack_d8;
  *param_1 = uStack_e0;
  param_1[3] = (ulong)puStack_c8;
  param_1[2] = uStack_d0;
  *(ulong *)((long)param_1 + 0x62) = CONCAT17(uStack_77,uStack_15e);
  *(ulong *)((long)param_1 + 0x5a) = CONCAT26(uStack_80,uStack_86);
  param_1[5] = uStack_b8;
  param_1[4] = uStack_c0;
  param_1[7] = uStack_a8;
  param_1[6] = uStack_b0;
  param_1[9] = uStack_98;
  param_1[8] = uStack_a0;
  param_1[0xb] = CONCAT62(uStack_86,uStack_88);
  param_1[10] = uStack_90;
  uStack_128 = uStack_b8;
  uStack_130 = uStack_c0;
  uStack_118 = uStack_a8;
  uStack_120 = uStack_b0;
  uStack_108 = uStack_98;
  uStack_110 = uStack_a0;
  uStack_100 = uStack_90;
  uStack_f6 = uStack_86;
  uStack_148 = uStack_d8;
  uStack_150 = uStack_e0;
  puStack_138 = puStack_c8;
  uStack_140 = uStack_d0;
  uStack_f8 = uStack_168;
  uStack_f7 = uStack_167;
  uStack_f0 = uStack_160;
  uStack_ef = uStack_15f;
  uStack_ee = uStack_15e;
  FUN_100f96da4(&uStack_1c0,&uStack_230,0x112d4fa90,&UNK_10d915a48);
  func_0x000100f96dec(&uStack_150,0x112d4fa90,&UNK_10d915a48);
  return;
}



/* Entry: 100f921f8; end: 100f92307;  */

void FUN_100f921f8(undefined8 *param_1,ulong param_2,ulong param_3)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar2 = 0;
  func_0x000107c5f6f0();
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  puVar4 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if ((param_3 & 0xc000000000000001) == 0) {
    if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100f92304);
      (*pcVar1)();
    }
    if (*(ulong *)((param_3 & 0xffffffffffffff8) + 0x10) <= param_2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100f92308);
      (*pcVar1)();
    }
    param_2 = *(ulong *)(param_3 + param_2 * 8 + 0x20);
    func_0x000107c61174(param_2);
  }
  else {
    FUN_100f95e24(param_2,param_3);
  }
  func_0x000107c5f6e8();
  (**(code **)(lVar5 + 0x68))
            (puVar4,*(undefined4 *)PTR___s7SwiftUI5ImageV12ResizingModeO7stretchyA2EmFWC_110349738,
             lVar2);
  puVar3 = puVar4;
  func_0x000107c5f6fc(0,0,0,0,puVar4,param_2);
  func_0x000107c61574(param_2);
  (**(code **)(lVar5 + 8))(puVar4,lVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 100f92308; end: 100f92b7b;  */

void FUN_100f92308(undefined8 param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long alStack_150 [2];
  long alStack_140 [3];
  uint uStack_124;
  long alStack_120 [6];
  uint uStack_ec;
  undefined8 uStack_e8;
  ulong auStack_e0 [11];
  undefined8 uStack_88;
  undefined8 uStack_80;
  byte bStack_78;
  undefined7 uStack_77;
  undefined8 auStack_70 [2];
  
  lVar8 = 0x112d50270;
  func_0x0001000285a8(0x112d50270,&UNK_10d916930);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = -extraout_x8;
  plVar15 = (long *)((long)alStack_150 + lVar11);
  lVar9 = 0x112d50278;
  func_0x0001000285a8(0x112d50278,&UNK_10d916938);
  lVar10 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar14 = (undefined8 *)((long)plVar15 - extraout_x8_00);
  if ((*(byte *)(unaff_x20 + 0x68) & 1) == 0) {
    func_0x000107c5f438();
    *plVar15 = lVar10;
    *(undefined8 *)((long)alStack_140 + lVar11 + -8) = 0;
    *(undefined1 *)((long)alStack_140 + lVar11) = 1;
    lVar11 = 0x112d50280;
    func_0x0001000285a8(0x112d50280,&UNK_10d916940);
    func_0x000100f92784((long)plVar15 + (long)*(int *)(lVar11 + 0x2c));
    FUN_100f96da4(plVar15,puVar14,0x112d50270,&UNK_10d916930);
    puVar12 = puVar14;
    func_0x000107c6159c(puVar14,lVar9,1);
    FUN_100f95d00();
    uVar13 = 0x112d50290;
    FUN_100f96d58(0x112d50290,0x112d50270,&UNK_10d916930,
                  PTR___s7SwiftUI6VStackVyxGAA4ViewAAMc_1103498f0);
    func_0x000107c5f490(param_1,puVar14,&UNK_11036fad0,lVar8,puVar12,uVar13);
    func_0x000100f96dec(plVar15,0x112d50270,&UNK_10d916930);
  }
  else {
    auStack_e0[8] = *(undefined8 *)(unaff_x20 + 0x40);
    uVar13 = *(undefined8 *)(unaff_x20 + 0x48);
    uVar17 = *(undefined8 *)(unaff_x20 + 0x50);
    auStack_e0[9] = *(undefined8 *)(unaff_x20 + 0x90);
    auStack_e0[10] = 0;
    uVar16 = *(undefined8 *)(unaff_x20 + 0xa0);
    bVar1 = *(byte *)(unaff_x20 + 0xa8);
    uStack_ec = (uint)bVar1;
    uStack_e8 = uVar16;
    auStack_e0[6] = uVar17;
    auStack_e0[7] = uVar13;
    func_0x000107c6157c();
    func_0x000107c6157c(uVar13);
    func_0x000107c6157c(uVar17);
    auStack_e0[5] = *(undefined8 *)(unaff_x20 + 0x60);
    auStack_e0[4] = *(undefined8 *)(unaff_x20 + 0x58);
    func_0x000107c615f0(auStack_e0[4]);
    auStack_e0[3] = *(undefined8 *)(unaff_x20 + 0x78);
    auStack_e0[2] = *(undefined8 *)(unaff_x20 + 0x70);
    func_0x000107c6157c(*(undefined8 *)(unaff_x20 + 0x78));
    auStack_e0[1] = *(undefined8 *)(unaff_x20 + 0x88);
    auStack_e0[0] = *(ulong *)(unaff_x20 + 0x80);
    func_0x000107c6157c(*(undefined8 *)(unaff_x20 + 0x88));
    func_0x000100f74158(uVar16,bVar1);
    alStack_120[5] = *(undefined8 *)(unaff_x20 + 0xb8);
    alStack_120[4] = *(undefined8 *)(unaff_x20 + 0xb0);
    func_0x000107c6157c(*(undefined8 *)(unaff_x20 + 0xb8));
    func_0x000107c5f728(&uStack_80,auStack_e0 + 10,&UNK_110370ee8);
    alStack_120[2] = CONCAT71(uStack_80._1_7_,(undefined1)uStack_80);
    alStack_120[1] = CONCAT71(uStack_77,bStack_78);
    auStack_e0[10] = 0;
    uStack_88 = CONCAT71(uStack_88._1_7_,1);
    uVar13 = 0x112d4f4d0;
    func_0x0001000285a8(0x112d4f4d0,&UNK_10d9153c0);
    func_0x000107c5f728(&uStack_80,auStack_e0 + 10,uVar13);
    puVar3 = PTR___sSbN_11034dd40;
    alStack_120[0] = CONCAT71(uStack_80._1_7_,(undefined1)uStack_80);
    uStack_124 = (uint)bStack_78;
    alStack_140[2] = auStack_70[0];
    auStack_e0[10] = auStack_e0[10] & 0xffffffffffffff00;
    func_0x000107c5f728(&uStack_80,auStack_e0 + 10,PTR___sSbN_11034dd40);
    uVar5 = (undefined1)uStack_80;
    uVar17 = CONCAT71(uStack_77,bStack_78);
    auStack_e0[10] = auStack_e0[10] & 0xffffffffffffff00;
    alStack_120[3] = param_1;
    func_0x000107c5f728(&uStack_80,auStack_e0 + 10,puVar3);
    uVar6 = (undefined1)uStack_80;
    uVar2 = CONCAT71(uStack_77,bStack_78);
    auStack_e0[10] = 0;
    uStack_88 = 0xe000000000000000;
    func_0x000107c5f728(&uStack_80,auStack_e0 + 10,PTR___sSSN_11034da80);
    uVar7 = auStack_70[0];
    alStack_150[1] = CONCAT71(uStack_77,bStack_78);
    alStack_150[0] = CONCAT71(uStack_80._1_7_,(undefined1)uStack_80);
    auStack_e0[10] = 0;
    uStack_88 = CONCAT71(uStack_88._1_7_,0xff);
    uVar13 = 0x112d4f9c0;
    func_0x0001000285a8(0x112d4f9c0,&UNK_10d916950);
    func_0x000107c5f728(&uStack_80,auStack_e0 + 10,uVar13);
    bVar1 = bStack_78;
    uVar16 = CONCAT71(uStack_80._1_7_,(undefined1)uStack_80);
    auStack_e0[10] = 0;
    uVar13 = 0x112d50298;
    alStack_140[1] = lVar8;
    func_0x0001000285a8(0x112d50298,&UNK_10d916958);
    func_0x000107c5f728(&uStack_80,auStack_e0 + 10,uVar13);
    *puVar14 = alStack_120[2];
    puVar14[1] = alStack_120[1];
    puVar14[2] = alStack_120[0];
    *(char *)(puVar14 + 3) = (char)uStack_124;
    puVar14[4] = alStack_140[2];
    *(undefined1 *)(puVar14 + 5) = uVar5;
    puVar14[6] = uVar17;
    *(undefined1 *)(puVar14 + 7) = uVar6;
    puVar14[8] = uVar2;
    puVar14[10] = alStack_150[1];
    puVar14[9] = alStack_150[0];
    puVar14[0xb] = uVar7;
    puVar14[0xc] = uVar16;
    *(byte *)(puVar14 + 0xd) = bVar1;
    puVar14[0xe] = auStack_70[0];
    puVar14[0x10] = CONCAT71(uStack_77,bStack_78);
    puVar14[0xf] = CONCAT71(uStack_80._1_7_,(undefined1)uStack_80);
    puVar14[0x11] = FUN_100f7e060;
    puVar14[0x12] = 0;
    *(undefined1 *)(puVar14 + 0x13) = 0;
    uVar4 = auStack_e0[7];
    puVar14[0x14] = auStack_e0[8];
    puVar14[0x15] = uVar4;
    puVar14[0x16] = auStack_e0[6];
    puVar14[0x18] = auStack_e0[5];
    puVar14[0x17] = auStack_e0[4];
    puVar14[0x1a] = auStack_e0[3];
    puVar14[0x19] = auStack_e0[2];
    puVar14[0x1c] = auStack_e0[1];
    puVar14[0x1b] = auStack_e0[0];
    puVar14[0x1d] = auStack_e0[9];
    puVar14[0x1e] = uStack_e8;
    *(char *)(puVar14 + 0x1f) = (char)uStack_ec;
    puVar14[0x21] = alStack_120[5];
    puVar14[0x20] = alStack_120[4];
    puVar12 = puVar14;
    func_0x000107c6159c(puVar14,lVar9,0);
    FUN_100f95d00();
    uVar13 = 0x112d50290;
    FUN_100f96d58(0x112d50290,0x112d50270,&UNK_10d916930,
                  PTR___s7SwiftUI6VStackVyxGAA4ViewAAMc_1103498f0);
    func_0x000107c5f490(alStack_120[3],puVar14,&UNK_11036fad0,alStack_140[1],puVar12,uVar13);
  }
  return;
}



/* Entry: 100f92b7c; end: 100f9318f;  */

void FUN_100f92b7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  code *pcVar8;
  long lVar9;
  undefined *puVar10;
  long *plVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 *unaff_x20;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  long alStack_1b0 [6];
  long lStack_180;
  undefined1 uStack_171;
  long alStack_170 [3];
  long alStack_158 [21];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  
  lVar2 = 0x112d502b8;
  func_0x0001000285a8(0x112d502b8,&UNK_10d9169b0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar11 = (long *)((long)&lStack_180 - extraout_x8);
  lVar3 = 0x112d502c0;
  func_0x0001000285a8(0x112d502c0,&UNK_10d9169b8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = (long)plVar11 - extraout_x8_00;
  lVar4 = 0x112d502c8;
  func_0x0001000285a8(0x112d502c8,&UNK_10d9169c0);
  lVar5 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar13 = (long *)(lVar12 - extraout_x8_01);
  if ((*(int *)(unaff_x20 + 0x12) == 0x13c) && ((*(byte *)(unaff_x20 + 0x13) & 1) != 0)) {
    func_0x000107c5f410();
    *plVar13 = lVar5;
    plVar13[1] = 0x4020000000000000;
    *(undefined1 *)(plVar13 + 2) = 0;
    lVar5 = 0x112d503d0;
    puVar7 = &UNK_10d916a78;
    func_0x0001000285a8();
    puVar6 = unaff_x20;
    FUN_100f939ec((long)plVar13 + (long)*(int *)(lVar5 + 0x2c));
    func_0x000107c5f7ac();
    plVar13[-2] = (long)puVar6;
    plVar13[-1] = (long)puVar7;
    *(undefined1 *)(plVar13 + -3) = 1;
    plVar13[-4] = 0;
    *(undefined1 *)(plVar13 + -5) = 1;
    plVar13[-6] = 0;
    func_0x000107c5f388(alStack_170,0,1,0,1,0x7ff0000000000000,0,0,1);
    lVar5 = 0x112d50378;
    func_0x0001000285a8(0x112d50378,&UNK_10d916a58);
    plVar11 = (long *)((long)plVar13 + (long)*(int *)(lVar5 + 0x24));
    plVar11[9] = alStack_158[6];
    plVar11[8] = alStack_158[5];
    plVar11[0xb] = alStack_158[8];
    plVar11[10] = alStack_158[7];
    plVar11[0xd] = alStack_158[10];
    plVar11[0xc] = alStack_158[9];
    plVar11[1] = alStack_170[1];
    *plVar11 = alStack_170[0];
    plVar11[3] = alStack_158[0];
    plVar11[2] = alStack_170[2];
    plVar11[5] = alStack_158[2];
    plVar11[4] = alStack_158[1];
    plVar11[7] = alStack_158[4];
    plVar11[6] = alStack_158[3];
    func_0x000107c5f568();
    uVar14 = 0x4028000000000000;
    lVar16 = alStack_158[1];
    func_0x000107c5f280();
    lVar9 = 0x112d50368;
    lVar17 = lVar16;
    uVar15 = param_4;
    uVar18 = param_5;
    func_0x0001000285a8(0x112d50368,&UNK_10d916a50);
    puVar1 = (undefined1 *)((long)plVar13 + (long)*(int *)(lVar9 + 0x24));
    *puVar1 = (char)lVar5;
    *(undefined8 *)(puVar1 + 8) = uVar14;
    *(long *)(puVar1 + 0x10) = lVar16;
    *(undefined8 *)(puVar1 + 0x18) = param_4;
    *(undefined8 *)(puVar1 + 0x20) = param_5;
    puVar1[0x28] = 0;
    func_0x000107c5f584();
    uVar14 = 0x4030000000000000;
    func_0x000107c5f280();
    lVar5 = 0x112d50358;
    func_0x0001000285a8(0x112d50358,&UNK_10d916a48);
    puVar1 = (undefined1 *)((long)plVar13 + (long)*(int *)(lVar5 + 0x24));
    *puVar1 = (char)lVar9;
    *(undefined8 *)(puVar1 + 8) = uVar14;
    *(long *)(puVar1 + 0x10) = lVar17;
    *(undefined8 *)(puVar1 + 0x18) = uVar15;
    *(undefined8 *)(puVar1 + 0x20) = uVar18;
    puVar1[0x28] = 0;
    uStack_a8 = unaff_x20[7];
    uStack_b0 = unaff_x20[6];
    func_0x0001000285a8(0x112d4f580,&UNK_10d915430);
    func_0x000107c5f72c(&uStack_171);
    puVar7 = &UNK_10d916a18;
    func_0x000107c614e0();
    puVar10 = &UNK_110370cf8;
    func_0x000107c613fc(&UNK_110370cf8,0x11,7);
    puVar10[0x10] = uStack_171;
    puVar6 = (undefined8 *)((long)plVar13 + (long)*(int *)(lVar4 + 0x24));
    *puVar6 = puVar7;
    puVar6[1] = 0x100f972b8;
    puVar6[2] = puVar10;
    uVar15 = 0x112d502c8;
    puVar7 = &UNK_10d9169c0;
    FUN_100f96da4(plVar13,lVar12,0x112d502c8,&UNK_10d9169c0);
    lVar5 = lVar12;
    func_0x000107c6159c(lVar12,lVar3,0);
    FUN_100f96804();
    lVar3 = lVar5;
    func_0x000100f96a24();
    func_0x000107c5f490(param_1,lVar12,lVar4,lVar2,lVar5,lVar3);
    plVar11 = plVar13;
  }
  else {
    puVar7 = &UNK_110370ca8;
    func_0x000107c613fc(&UNK_110370ca8,0xd0,7);
    uVar15 = unaff_x20[0x10];
    uVar14 = unaff_x20[0x13];
    uVar18 = unaff_x20[0x12];
    *(undefined8 *)(puVar7 + 0x98) = unaff_x20[0x11];
    *(undefined8 *)(puVar7 + 0x90) = uVar15;
    *(undefined8 *)(puVar7 + 0xa8) = uVar14;
    *(undefined8 *)(puVar7 + 0xa0) = uVar18;
    uVar15 = unaff_x20[0x14];
    uVar14 = unaff_x20[0x17];
    uVar18 = unaff_x20[0x16];
    *(undefined8 *)(puVar7 + 0xb8) = unaff_x20[0x15];
    *(undefined8 *)(puVar7 + 0xb0) = uVar15;
    *(undefined8 *)(puVar7 + 200) = uVar14;
    *(undefined8 *)(puVar7 + 0xc0) = uVar18;
    uVar15 = unaff_x20[8];
    uVar14 = unaff_x20[0xb];
    uVar18 = unaff_x20[10];
    *(undefined8 *)(puVar7 + 0x58) = unaff_x20[9];
    *(undefined8 *)(puVar7 + 0x50) = uVar15;
    *(undefined8 *)(puVar7 + 0x68) = uVar14;
    *(undefined8 *)(puVar7 + 0x60) = uVar18;
    uVar15 = unaff_x20[0xc];
    uVar14 = unaff_x20[0xf];
    uVar18 = unaff_x20[0xe];
    *(undefined8 *)(puVar7 + 0x78) = unaff_x20[0xd];
    *(undefined8 *)(puVar7 + 0x70) = uVar15;
    *(undefined8 *)(puVar7 + 0x88) = uVar14;
    *(undefined8 *)(puVar7 + 0x80) = uVar18;
    uVar15 = *unaff_x20;
    uVar14 = unaff_x20[3];
    uVar18 = unaff_x20[2];
    *(undefined8 *)(puVar7 + 0x18) = unaff_x20[1];
    *(undefined8 *)(puVar7 + 0x10) = uVar15;
    *(undefined8 *)(puVar7 + 0x28) = uVar14;
    *(undefined8 *)(puVar7 + 0x20) = uVar18;
    uVar15 = unaff_x20[4];
    uVar14 = unaff_x20[7];
    uVar18 = unaff_x20[6];
    *(undefined8 *)(puVar7 + 0x38) = unaff_x20[5];
    *(undefined8 *)(puVar7 + 0x30) = uVar15;
    *(undefined8 *)(puVar7 + 0x48) = uVar14;
    *(undefined8 *)(puVar7 + 0x40) = uVar18;
    FUN_100f7d94c();
    uVar15 = 0x112d502d0;
    func_0x0001000285a8(0x112d502d0,&UNK_10d9169c8);
    uVar18 = uVar15;
    FUN_100f96534();
    pcVar8 = FUN_100f972b4;
    func_0x000107c5f738(plVar11,FUN_100f972b4,puVar7,0x100f9652c,&uStack_b0,uVar15,uVar18);
    func_0x000107c5f7ac();
    plVar13[-2] = (long)pcVar8;
    plVar13[-1] = (long)puVar7;
    *(undefined1 *)(plVar13 + -3) = 1;
    plVar13[-4] = 0;
    *(undefined1 *)(plVar13 + -5) = 1;
    plVar13[-6] = 0;
    func_0x000107c5f388(alStack_170,0,1,0,1,0x4079000000000000,0,0,1);
    lVar5 = 0x112d50330;
    func_0x0001000285a8(0x112d50330,&UNK_10d9169f8);
    plVar13 = (long *)((long)plVar11 + (long)*(int *)(lVar5 + 0x24));
    plVar13[9] = alStack_158[6];
    plVar13[8] = alStack_158[5];
    plVar13[0xb] = alStack_158[8];
    plVar13[10] = alStack_158[7];
    plVar13[0xd] = alStack_158[10];
    plVar13[0xc] = alStack_158[9];
    plVar13[1] = alStack_170[1];
    *plVar13 = alStack_170[0];
    plVar13[3] = alStack_158[0];
    plVar13[2] = alStack_170[2];
    plVar13[5] = alStack_158[2];
    plVar13[4] = alStack_158[1];
    plVar13[7] = alStack_158[4];
    plVar13[6] = alStack_158[3];
    func_0x000107c5f568();
    lVar9 = 0x112d50338;
    func_0x0001000285a8(0x112d50338,&UNK_10d916a00);
    puVar1 = (undefined1 *)((long)plVar11 + (long)*(int *)(lVar9 + 0x24));
    *puVar1 = (char)lVar5;
    *(undefined8 *)(puVar1 + 0x10) = 0;
    *(undefined8 *)(puVar1 + 8) = 0;
    *(undefined8 *)(puVar1 + 0x20) = 0;
    *(undefined8 *)(puVar1 + 0x18) = 0;
    puVar1[0x28] = 1;
    func_0x000107c5f56c();
    lVar5 = 0x112d50340;
    func_0x0001000285a8(0x112d50340,&UNK_10d916a08);
    puVar1 = (undefined1 *)((long)plVar11 + (long)*(int *)(lVar5 + 0x24));
    *puVar1 = (char)lVar9;
    *(undefined8 *)(puVar1 + 0x10) = 0;
    *(undefined8 *)(puVar1 + 8) = 0;
    *(undefined8 *)(puVar1 + 0x20) = 0;
    *(undefined8 *)(puVar1 + 0x18) = 0;
    puVar1[0x28] = 1;
    uStack_a8 = unaff_x20[7];
    uStack_b0 = unaff_x20[6];
    func_0x0001000285a8(0x112d4f580,&UNK_10d915430);
    func_0x000107c5f72c(&uStack_171);
    puVar7 = &UNK_10d916a18;
    func_0x000107c614e0();
    puVar10 = &UNK_110370cd0;
    func_0x000107c613fc(&UNK_110370cd0,0x11,7);
    puVar10[0x10] = uStack_171;
    puVar6 = (undefined8 *)((long)plVar11 + (long)*(int *)(lVar2 + 0x24));
    *puVar6 = puVar7;
    puVar6[1] = FUN_100f967ec;
    puVar6[2] = puVar10;
    uVar15 = 0x112d502b8;
    puVar7 = &UNK_10d9169b0;
    FUN_100f96da4(plVar11,lVar12,0x112d502b8,&UNK_10d9169b0);
    lVar5 = lVar12;
    func_0x000107c6159c(lVar12,lVar3,1);
    FUN_100f96804();
    lVar3 = lVar5;
    func_0x000100f96a24();
    func_0x000107c5f490(param_1,lVar12,lVar4,lVar2,lVar5,lVar3);
  }
  func_0x000100f96dec(plVar11,uVar15,puVar7);
  return;
}



/* Entry: 100f93190; end: 100f9325f;  */

void FUN_100f93190(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_f0 [192];
  
  uVar2 = param_1[0x12];
  puVar1 = &UNK_110370c58;
  func_0x000107c613fc(&UNK_110370c58,0xd0,7);
  uVar3 = param_1[0x10];
  uVar5 = param_1[0x13];
  uVar4 = param_1[0x12];
  *(undefined8 *)(puVar1 + 0x98) = param_1[0x11];
  *(undefined8 *)(puVar1 + 0x90) = uVar3;
  *(undefined8 *)(puVar1 + 0xa8) = uVar5;
  *(undefined8 *)(puVar1 + 0xa0) = uVar4;
  uVar3 = param_1[0x14];
  uVar5 = param_1[0x17];
  uVar4 = param_1[0x16];
  *(undefined8 *)(puVar1 + 0xb8) = param_1[0x15];
  *(undefined8 *)(puVar1 + 0xb0) = uVar3;
  *(undefined8 *)(puVar1 + 200) = uVar5;
  *(undefined8 *)(puVar1 + 0xc0) = uVar4;
  uVar3 = param_1[8];
  uVar5 = param_1[0xb];
  uVar4 = param_1[10];
  *(undefined8 *)(puVar1 + 0x58) = param_1[9];
  *(undefined8 *)(puVar1 + 0x50) = uVar3;
  *(undefined8 *)(puVar1 + 0x68) = uVar5;
  *(undefined8 *)(puVar1 + 0x60) = uVar4;
  uVar3 = param_1[0xc];
  uVar5 = param_1[0xf];
  uVar4 = param_1[0xe];
  *(undefined8 *)(puVar1 + 0x78) = param_1[0xd];
  *(undefined8 *)(puVar1 + 0x70) = uVar3;
  *(undefined8 *)(puVar1 + 0x88) = uVar5;
  *(undefined8 *)(puVar1 + 0x80) = uVar4;
  uVar3 = *param_1;
  uVar5 = param_1[3];
  uVar4 = param_1[2];
  *(undefined8 *)(puVar1 + 0x18) = param_1[1];
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  *(undefined8 *)(puVar1 + 0x28) = uVar5;
  *(undefined8 *)(puVar1 + 0x20) = uVar4;
  uVar3 = param_1[4];
  uVar5 = param_1[7];
  uVar4 = param_1[6];
  *(undefined8 *)(puVar1 + 0x38) = param_1[5];
  *(undefined8 *)(puVar1 + 0x30) = uVar3;
  *(undefined8 *)(puVar1 + 0x48) = uVar5;
  *(undefined8 *)(puVar1 + 0x40) = uVar4;
  FUN_100f7d94c(param_1,auStack_f0);
  func_0x0001001ca524(uVar2,1,0x2c,4,0,0,&UNK_10d916980,puVar1,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar2);
  return;
}



/* Entry: 100f93260; end: 100f932df;  */

void FUN_100f93260(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x110) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x118) = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x120) = uVar1;
  plVar2 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x128) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100f932e0;
                    /* WARNING: Could not recover jumptable at 0x000100f932dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_100f96304();
  return;
}



/* Entry: 100f932e0; end: 100f93333;  */

void FUN_100f932e0(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x130) = param_1;
  *(undefined1 *)(lVar1 + 0xb9) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x128));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f93334,0,0);
  return;
}



/* Entry: 100f93334; end: 100f93417;  */

void FUN_100f93334(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0xb9) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(unaff_x22 + 0x130);
    iVar1 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    param_1 = *(undefined8 *)(unaff_x22 + 0x130);
    if (iVar1 != 0) {
      uVar2 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0xe0,uVar2,PTR___ss5ErrorWS_11034ee10);
    }
    FUN_100f838dc(param_1,1);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x118);
    func_0x000100eea164();
    func_0x000107c5fca8(uVar2,param_1);
    pcVar3 = FUN_100f935ac;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x22 + 0x118);
    func_0x000100eea164();
    func_0x000107c5fca8();
    *(undefined8 *)(unaff_x22 + 0x138) = uVar2;
    *(undefined8 *)(unaff_x22 + 0x140) = param_1;
    pcVar3 = FUN_100f93418;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar3,uVar2,param_1);
  return;
}



/* Entry: 100f93418; end: 100f93527;  */

void FUN_100f93418(void)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  int *piVar4;
  long lVar5;
  long unaff_x22;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar5 = *(long *)(unaff_x22 + 0x130);
  if (lVar5 != 0) {
    lVar6 = *(long *)(unaff_x22 + 0x110);
    func_0x0001000d224c(unaff_x22 + 0x80);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x80);
    lVar2 = *(long *)(unaff_x22 + 0x88);
    *(undefined8 *)(unaff_x22 + 0x148) = uVar8;
    func_0x000107c614f0(uVar8);
    uVar7 = *(undefined8 *)(lVar6 + 0x90);
    piVar4 = *(int **)(lVar2 + 0x10);
    iVar1 = *piVar4;
    plVar3 = (long *)(ulong)(uint)piVar4[1];
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x150) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_100f93528;
                    /* WARNING: Could not recover jumptable at 0x000100f934bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar4))(lVar5,2,uVar7,uVar8,lVar2);
    return;
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x120));
  lVar5 = *(long *)(unaff_x22 + 0x110);
  uVar8 = *(undefined8 *)(lVar5 + 8);
  *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(lVar5 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x70) = uVar8;
  *(undefined8 *)(unaff_x22 + 0xe8) = 1;
  uVar8 = 0x112d4f9d8;
  func_0x0001000285a8(0x112d4f9d8,&UNK_10d9159a0);
  func_0x000107c5f730((undefined8 *)(unaff_x22 + 0xe8),uVar8);
  (**(code **)(lVar5 + 0x70))();
                    /* WARNING: Could not recover jumptable at 0x000100f93524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100f93528; end: 100f935ab;  */

void FUN_100f93528(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  *(undefined8 *)(lVar4 + 0x158) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x150));
  uVar3 = *(undefined8 *)(lVar4 + 0x148);
  if (unaff_x20 == 0) {
    func_0x000107c615e8(uVar3);
    uVar3 = *(undefined8 *)(lVar4 + 0x138);
    uVar2 = *(undefined8 *)(lVar4 + 0x140);
    pcVar1 = FUN_100f93628;
  }
  else {
    func_0x000107c614ac();
    func_0x000107c615e8(uVar3);
    uVar3 = *(undefined8 *)(lVar4 + 0x138);
    uVar2 = *(undefined8 *)(lVar4 + 0x140);
    pcVar1 = FUN_100f9387c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar3,uVar2);
  return;
}



/* Entry: 100f935ac; end: 100f93627;  */

void FUN_100f935ac(void)

{
  long lVar1;
  long unaff_x22;
  undefined8 uVar2;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x120));
  lVar1 = *(long *)(unaff_x22 + 0x110);
  uVar2 = *(undefined8 *)(lVar1 + 8);
  *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(lVar1 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x70) = uVar2;
  *(undefined8 *)(unaff_x22 + 0xe8) = 1;
  uVar2 = 0x112d4f9d8;
  func_0x0001000285a8(0x112d4f9d8,&UNK_10d9159a0);
  func_0x000107c5f730((undefined8 *)(unaff_x22 + 0xe8),uVar2);
  (**(code **)(lVar1 + 0x70))();
                    /* WARNING: Could not recover jumptable at 0x000100f93624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100f93628; end: 100f9387b;  */

void FUN_100f93628(void)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x22;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar4 = *(ulong *)(unaff_x22 + 0x158);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x120));
  if (uVar4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < *(ulong *)(unaff_x22 + 0x158)) {
      uVar2 = *(ulong *)(unaff_x22 + 0x158);
    }
    func_0x000107c60480();
  }
  if (uVar2 == 0) {
    puVar3 = (undefined8 *)(unaff_x22 + 0x28);
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x158));
    uVar5 = *(undefined8 *)(unaff_x22 + 0x130);
    lVar7 = *(long *)(unaff_x22 + 0x110);
    uVar1 = *(undefined1 *)(unaff_x22 + 0xb9);
    lVar6 = 0x112d36850;
    FUN_100f95d64(0x112d36850,&PTR__OBJC_CLASS___UIImage_1126aea68,0x112d502b0,&UNK_10d9169a0);
    func_0x000107c613fc();
    *(undefined8 *)(lVar6 + 0x18) = 3;
    *(undefined8 *)(lVar6 + 0x10) = 1;
    *(undefined8 *)(lVar6 + 0x20) = uVar5;
    uVar8 = *(undefined8 *)(lVar7 + 8);
    *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(lVar7 + 0x10);
    *(undefined8 *)(unaff_x22 + 0x90) = uVar8;
    *(long *)(unaff_x22 + 0xf0) = lVar6;
    func_0x000107c61174(uVar5);
    uVar8 = 0x112d4f9d8;
    func_0x0001000285a8(0x112d4f9d8,&UNK_10d9159a0);
    func_0x000107c5f730(unaff_x22 + 0xf0,uVar8);
    uVar9 = *(undefined8 *)(lVar7 + 0x20);
    uVar8 = *(undefined8 *)(lVar7 + 0x18);
    *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(lVar7 + 0x28);
    *(undefined8 *)(unaff_x22 + 0x30) = uVar9;
    *puVar3 = uVar8;
    uVar9 = *(undefined8 *)(lVar7 + 0x20);
    uVar8 = *(undefined8 *)(lVar7 + 0x18);
    *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(lVar7 + 0x28);
    *(undefined8 *)(unaff_x22 + 0x48) = uVar9;
    *(undefined8 *)(unaff_x22 + 0x40) = uVar8;
    *(undefined8 *)(unaff_x22 + 0xb0) = 0;
    *(undefined1 *)(unaff_x22 + 0xb8) = 0;
    *(undefined8 *)(unaff_x22 + 0xd8) = *(undefined8 *)(unaff_x22 + 0x38);
    FUN_100f96da4(unaff_x22 + 0xd8,unaff_x22 + 0xf8,0x112d4f588,&UNK_10d916990);
    uVar8 = 0x112d4f558;
    func_0x0001000285a8(0x112d4f558,&UNK_10d915410);
    lVar6 = unaff_x22 + 0xb0;
  }
  else {
    puVar3 = (undefined8 *)(unaff_x22 + 0x10);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x130);
    lVar6 = *(long *)(unaff_x22 + 0x110);
    uVar8 = *(undefined8 *)(lVar6 + 8);
    *(undefined8 *)(unaff_x22 + 0xa8) = *(undefined8 *)(lVar6 + 0x10);
    *(undefined8 *)(unaff_x22 + 0xa0) = uVar8;
    *(ulong *)(unaff_x22 + 0x100) = uVar4;
    uVar1 = *(undefined1 *)(unaff_x22 + 0xb9);
    uVar8 = 0x112d4f9d8;
    func_0x0001000285a8(0x112d4f9d8,&UNK_10d9159a0);
    func_0x000107c5f730(unaff_x22 + 0x100,uVar8);
    uVar9 = *(undefined8 *)(lVar6 + 0x20);
    uVar8 = *(undefined8 *)(lVar6 + 0x18);
    *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(lVar6 + 0x28);
    *(undefined8 *)(unaff_x22 + 0x18) = uVar9;
    *puVar3 = uVar8;
    uVar9 = *(undefined8 *)(lVar6 + 0x20);
    uVar8 = *(undefined8 *)(lVar6 + 0x18);
    *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(lVar6 + 0x28);
    *(undefined8 *)(unaff_x22 + 0x60) = uVar9;
    *(undefined8 *)(unaff_x22 + 0x58) = uVar8;
    *(undefined8 *)(unaff_x22 + 0xc0) = 0;
    *(undefined1 *)(unaff_x22 + 200) = 0;
    *(undefined8 *)(unaff_x22 + 0xd0) = *(undefined8 *)(unaff_x22 + 0x20);
    FUN_100f96da4(unaff_x22 + 0xd0,unaff_x22 + 0x108,0x112d4f588,&UNK_10d916990);
    uVar8 = 0x112d4f558;
    func_0x0001000285a8(0x112d4f558,&UNK_10d915410);
    lVar6 = unaff_x22 + 0xc0;
  }
  func_0x000107c5f730(lVar6,uVar8);
  FUN_100f838dc(uVar5,uVar1);
  func_0x000100f96dec(puVar3,0x112d4f558,&UNK_10d915410);
                    /* WARNING: Could not recover jumptable at 0x000100f93878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100f9387c; end: 100f939eb;  */

void FUN_100f9387c(void)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x120));
  uVar3 = *(undefined8 *)(unaff_x22 + 0x130);
  lVar4 = *(long *)(unaff_x22 + 0x110);
  uVar1 = *(undefined1 *)(unaff_x22 + 0xb9);
  lVar2 = 0x112d36850;
  FUN_100f95d64(0x112d36850,&PTR__OBJC_CLASS___UIImage_1126aea68,0x112d502b0,&UNK_10d9169a0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 3;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  *(undefined8 *)(lVar2 + 0x20) = uVar3;
  uVar5 = *(undefined8 *)(lVar4 + 8);
  *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(lVar4 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x90) = uVar5;
  *(long *)(unaff_x22 + 0xf0) = lVar2;
  func_0x000107c61174(uVar3);
  uVar5 = 0x112d4f9d8;
  func_0x0001000285a8(0x112d4f9d8,&UNK_10d9159a0);
  func_0x000107c5f730((long *)(unaff_x22 + 0xf0),uVar5);
  uVar6 = *(undefined8 *)(lVar4 + 0x20);
  uVar5 = *(undefined8 *)(lVar4 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(unaff_x22 + 0x30) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar5;
  uVar6 = *(undefined8 *)(lVar4 + 0x20);
  uVar5 = *(undefined8 *)(lVar4 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(unaff_x22 + 0xb0) = 0;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar5;
  *(undefined1 *)(unaff_x22 + 0xb8) = 0;
  *(undefined8 *)(unaff_x22 + 0xd8) = *(undefined8 *)(unaff_x22 + 0x38);
  FUN_100f96da4((undefined8 *)(unaff_x22 + 0xd8),unaff_x22 + 0xf8,0x112d4f588,&UNK_10d916990);
  uVar5 = 0x112d4f558;
  func_0x0001000285a8(0x112d4f558,&UNK_10d915410);
  func_0x000107c5f730((undefined8 *)(unaff_x22 + 0xb0),uVar5);
  FUN_100f838dc(uVar3,uVar1);
  func_0x000100f96dec(unaff_x22 + 0x28,0x112d4f558,&UNK_10d915410);
                    /* WARNING: Could not recover jumptable at 0x000100f939e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100f939ec; end: 100f94073;  */

void FUN_100f939ec(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined *puVar6;
  code *pcVar7;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uStack_200;
  undefined1 auStack_1f8 [8];
  undefined8 uStack_1f0;
  undefined1 auStack_1e8 [8];
  undefined8 auStack_1e0 [2];
  long alStack_1d0 [4];
  undefined8 *apuStack_1b0 [13];
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
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
  
  lVar5 = 0x112d50330;
  alStack_1d0[1] = param_1;
  func_0x0001000285a8(0x112d50330,&UNK_10d9169f8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar8 = (long)alStack_1d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  alStack_1d0[0] = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar8 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar8 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar9 - extraout_x12_01;
  puVar6 = &UNK_110370d20;
  func_0x000107c613fc(&UNK_110370d20,0xd0,7);
  uVar11 = param_2[0x10];
  uVar14 = param_2[0x13];
  uVar12 = param_2[0x12];
  *(undefined8 *)(puVar6 + 0x98) = param_2[0x11];
  *(undefined8 *)(puVar6 + 0x90) = uVar11;
  *(undefined8 *)(puVar6 + 0xa8) = uVar14;
  *(undefined8 *)(puVar6 + 0xa0) = uVar12;
  uVar11 = param_2[0x14];
  uVar14 = param_2[0x17];
  uVar12 = param_2[0x16];
  *(undefined8 *)(puVar6 + 0xb8) = param_2[0x15];
  *(undefined8 *)(puVar6 + 0xb0) = uVar11;
  *(undefined8 *)(puVar6 + 200) = uVar14;
  *(undefined8 *)(puVar6 + 0xc0) = uVar12;
  uVar11 = param_2[8];
  uVar14 = param_2[0xb];
  uVar12 = param_2[10];
  *(undefined8 *)(puVar6 + 0x58) = param_2[9];
  *(undefined8 *)(puVar6 + 0x50) = uVar11;
  *(undefined8 *)(puVar6 + 0x68) = uVar14;
  *(undefined8 *)(puVar6 + 0x60) = uVar12;
  uVar11 = param_2[0xc];
  uVar14 = param_2[0xf];
  uVar12 = param_2[0xe];
  *(undefined8 *)(puVar6 + 0x78) = param_2[0xd];
  *(undefined8 *)(puVar6 + 0x70) = uVar11;
  *(undefined8 *)(puVar6 + 0x88) = uVar14;
  *(undefined8 *)(puVar6 + 0x80) = uVar12;
  uVar11 = *param_2;
  uVar14 = param_2[3];
  uVar12 = param_2[2];
  *(undefined8 *)(puVar6 + 0x18) = param_2[1];
  *(undefined8 *)(puVar6 + 0x10) = uVar11;
  *(undefined8 *)(puVar6 + 0x28) = uVar14;
  *(undefined8 *)(puVar6 + 0x20) = uVar12;
  uVar11 = param_2[4];
  uVar14 = param_2[7];
  uVar12 = param_2[6];
  *(undefined8 *)(puVar6 + 0x38) = param_2[5];
  *(undefined8 *)(puVar6 + 0x30) = uVar11;
  *(undefined8 *)(puVar6 + 0x48) = uVar14;
  *(undefined8 *)(puVar6 + 0x40) = uVar12;
  puStack_d0 = param_2;
  FUN_100f7d94c(param_2,apuStack_1b0 + 2);
  uVar11 = 0x112d502d0;
  func_0x0001000285a8(0x112d502d0,&UNK_10d9169c8);
  uVar14 = uVar11;
  FUN_100f96534();
  uVar12 = 0x100f96c44;
  func_0x000107c5f738(lVar10,0x100f96c44,puVar6,FUN_100f96c68,&uStack_e0,uVar11,uVar14);
  func_0x000107c5f7ac();
  *(undefined8 *)(lVar10 + -0x10) = uVar12;
  *(undefined **)(lVar10 + -8) = puVar6;
  *(undefined1 *)(lVar10 + -0x18) = 1;
  *(undefined8 *)(lVar10 + -0x20) = 0;
  *(undefined1 *)(lVar10 + -0x28) = 1;
  *(undefined8 *)(lVar10 + -0x30) = 0;
  func_0x000107c5f388(&uStack_e0,0,1,0,1,0x7ff0000000000000,0,0,1);
  puVar1 = (undefined8 *)(lVar10 + *(int *)(lVar5 + 0x24));
  puVar1[9] = uStack_98;
  puVar1[8] = uStack_a0;
  puVar1[0xb] = uStack_88;
  puVar1[10] = uStack_90;
  puVar1[0xd] = uStack_78;
  puVar1[0xc] = uStack_80;
  puVar4 = puStack_d0;
  puVar1[1] = uStack_d8;
  *puVar1 = uStack_e0;
  puVar1[3] = uStack_c8;
  puVar1[2] = puVar4;
  puVar1[5] = uStack_b8;
  puVar1[4] = uStack_c0;
  puVar1[7] = uStack_a8;
  puVar1[6] = uStack_b0;
  puVar6 = &UNK_110370d48;
  func_0x000107c613fc(&UNK_110370d48,0xd0,7);
  uVar12 = param_2[0x10];
  uVar15 = param_2[0x13];
  uVar13 = param_2[0x12];
  *(undefined8 *)(puVar6 + 0x98) = param_2[0x11];
  *(undefined8 *)(puVar6 + 0x90) = uVar12;
  *(undefined8 *)(puVar6 + 0xa8) = uVar15;
  *(undefined8 *)(puVar6 + 0xa0) = uVar13;
  uVar12 = param_2[0x14];
  uVar15 = param_2[0x17];
  uVar13 = param_2[0x16];
  *(undefined8 *)(puVar6 + 0xb8) = param_2[0x15];
  *(undefined8 *)(puVar6 + 0xb0) = uVar12;
  *(undefined8 *)(puVar6 + 200) = uVar15;
  *(undefined8 *)(puVar6 + 0xc0) = uVar13;
  uVar12 = param_2[8];
  uVar15 = param_2[0xb];
  uVar13 = param_2[10];
  *(undefined8 *)(puVar6 + 0x58) = param_2[9];
  *(undefined8 *)(puVar6 + 0x50) = uVar12;
  *(undefined8 *)(puVar6 + 0x68) = uVar15;
  *(undefined8 *)(puVar6 + 0x60) = uVar13;
  uVar12 = param_2[0xc];
  uVar15 = param_2[0xf];
  uVar13 = param_2[0xe];
  *(undefined8 *)(puVar6 + 0x78) = param_2[0xd];
  *(undefined8 *)(puVar6 + 0x70) = uVar12;
  *(undefined8 *)(puVar6 + 0x88) = uVar15;
  *(undefined8 *)(puVar6 + 0x80) = uVar13;
  uVar12 = *param_2;
  uVar15 = param_2[3];
  uVar13 = param_2[2];
  *(undefined8 *)(puVar6 + 0x18) = param_2[1];
  *(undefined8 *)(puVar6 + 0x10) = uVar12;
  *(undefined8 *)(puVar6 + 0x28) = uVar15;
  *(undefined8 *)(puVar6 + 0x20) = uVar13;
  uVar12 = param_2[4];
  uVar15 = param_2[7];
  uVar13 = param_2[6];
  *(undefined8 *)(puVar6 + 0x38) = param_2[5];
  *(undefined8 *)(puVar6 + 0x30) = uVar12;
  *(undefined8 *)(puVar6 + 0x48) = uVar15;
  *(undefined8 *)(puVar6 + 0x40) = uVar13;
  apuStack_1b0[0] = param_2;
  FUN_100f7d94c(param_2,apuStack_1b0 + 2);
  pcVar7 = FUN_100f96c70;
  func_0x000107c5f738(lVar9,FUN_100f96c70,puVar6,FUN_100f96c94,alStack_1d0 + 2,uVar11,uVar14);
  func_0x000107c5f7ac();
  *(code **)(lVar10 + -0x10) = pcVar7;
  *(undefined **)(lVar10 + -8) = puVar6;
  *(undefined1 *)(lVar10 + -0x18) = 1;
  *(undefined8 *)(lVar10 + -0x20) = 0;
  *(undefined1 *)(lVar10 + -0x28) = 1;
  *(undefined8 *)(lVar10 + -0x30) = 0;
  func_0x000107c5f388(apuStack_1b0 + 2,0,1,0,1,0x7ff0000000000000,0,0,1);
  puVar1 = (undefined8 *)(lVar9 + *(int *)(lVar5 + 0x24));
  puVar1[9] = apuStack_1b0[0xb];
  puVar1[8] = apuStack_1b0[10];
  puVar1[0xb] = uStack_148;
  puVar1[10] = apuStack_1b0[0xc];
  puVar1[0xd] = uStack_138;
  puVar1[0xc] = uStack_140;
  puVar1[1] = apuStack_1b0[3];
  *puVar1 = apuStack_1b0[2];
  puVar1[3] = apuStack_1b0[5];
  puVar1[2] = apuStack_1b0[4];
  puVar1[5] = apuStack_1b0[7];
  puVar1[4] = apuStack_1b0[6];
  puVar1[7] = apuStack_1b0[9];
  puVar1[6] = apuStack_1b0[8];
  FUN_100f96da4(lVar10,lVar8,0x112d50330,&UNK_10d9169f8);
  lVar2 = alStack_1d0[0];
  FUN_100f96da4(lVar9,alStack_1d0[0],0x112d50330,&UNK_10d9169f8);
  lVar3 = alStack_1d0[1];
  FUN_100f96da4(lVar8,alStack_1d0[1],0x112d50330,&UNK_10d9169f8);
  lVar5 = 0x112d503d8;
  func_0x0001000285a8(0x112d503d8,&UNK_10d916a80);
  FUN_100f96da4(lVar2,lVar3 + *(int *)(lVar5 + 0x30),0x112d50330,&UNK_10d9169f8);
  func_0x000100f96dec(lVar9,0x112d50330,&UNK_10d9169f8);
  func_0x000100f96dec(lVar10,0x112d50330,&UNK_10d9169f8);
  func_0x000100f96dec(lVar2,0x112d50330,&UNK_10d9169f8);
  func_0x000100f96dec(lVar8,0x112d50330,&UNK_10d9169f8);
  return;
}



/* Entry: 100f94074; end: 100f9578f;  */

void FUN_100f94074(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 auStack_e08 [360];
  undefined8 uStack_ca0;
  undefined8 uStack_c98;
  undefined8 uStack_c90;
  undefined8 uStack_c88;
  undefined8 uStack_c80;
  undefined8 uStack_c78;
  undefined8 uStack_c70;
  undefined8 uStack_c68;
  undefined8 uStack_c60;
  undefined8 uStack_c58;
  undefined8 uStack_c50;
  undefined8 uStack_c48;
  undefined8 uStack_c40;
  undefined8 uStack_c38;
  undefined8 uStack_c30;
  undefined8 uStack_c28;
  undefined8 uStack_c20;
  undefined *puStack_c18;
  undefined *puStack_c10;
  undefined8 uStack_c08;
  undefined8 uStack_c00;
  undefined *puStack_bf8;
  undefined8 uStack_bf0;
  undefined8 uStack_be8;
  undefined8 uStack_be0;
  undefined1 uStack_bd8;
  undefined8 uStack_bd0;
  undefined8 uStack_bc8;
  undefined8 uStack_bc0;
  undefined8 uStack_bb8;
  undefined1 uStack_bb0;
  undefined *puStack_ba0;
  undefined8 uStack_b98;
  undefined8 uStack_b90;
  undefined8 uStack_b88;
  undefined8 uStack_b80;
  undefined8 uStack_b78;
  undefined8 uStack_b70;
  undefined8 uStack_b68;
  undefined8 uStack_b60;
  undefined8 uStack_b58;
  undefined8 uStack_b50;
  undefined8 uStack_b48;
  undefined8 uStack_b40;
  undefined8 uStack_b38;
  undefined8 uStack_b30;
  undefined8 uStack_b28;
  undefined8 uStack_b20;
  undefined7 uStack_a30;
  undefined1 uStack_a29;
  undefined7 uStack_a28;
  undefined1 uStack_a21;
  undefined7 uStack_a20;
  undefined1 uStack_a19;
  undefined7 uStack_a18;
  undefined1 uStack_a11;
  undefined7 uStack_a10;
  undefined1 uStack_a09;
  undefined7 uStack_a08;
  undefined1 uStack_a01;
  undefined7 uStack_a00;
  undefined1 uStack_9f9;
  undefined7 uStack_9f8;
  undefined1 uStack_9f1;
  undefined7 uStack_9f0;
  undefined1 uStack_9e9;
  undefined7 uStack_9e8;
  undefined1 uStack_9e1;
  undefined7 uStack_9e0;
  undefined1 uStack_9d9;
  undefined7 uStack_9d8;
  undefined1 uStack_9d1;
  undefined7 uStack_9d0;
  undefined1 uStack_9c9;
  undefined7 uStack_9c8;
  undefined1 uStack_9c1;
  undefined7 uStack_9c0;
  undefined1 uStack_9b9;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  undefined *puStack_9a8;
  undefined *puStack_9a0;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined *puStack_838;
  undefined *puStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined *puStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined1 uStack_800;
  undefined7 uStack_7ff;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined *puStack_768;
  undefined *puStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined *puStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined1 uStack_700;
  undefined1 auStack_6f8 [120];
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined *puStack_5a0;
  undefined8 uStack_598;
  undefined1 uStack_590;
  undefined7 uStack_58f;
  undefined1 uStack_588;
  undefined7 uStack_587;
  undefined1 uStack_580;
  undefined7 uStack_57f;
  undefined1 uStack_578;
  undefined7 uStack_577;
  undefined1 uStack_570;
  undefined7 uStack_56f;
  undefined1 uStack_568;
  undefined7 uStack_567;
  undefined1 uStack_560;
  undefined7 uStack_55f;
  undefined1 uStack_558;
  undefined7 uStack_557;
  undefined1 uStack_550;
  undefined7 uStack_54f;
  undefined1 uStack_548;
  undefined7 uStack_547;
  undefined1 uStack_540;
  undefined7 uStack_53f;
  undefined1 uStack_538;
  undefined7 uStack_537;
  undefined1 uStack_530;
  undefined7 uStack_52f;
  undefined1 uStack_528;
  undefined7 uStack_527;
  undefined1 uStack_520;
  undefined7 uStack_51f;
  undefined *puStack_518;
  undefined8 uStack_510;
  undefined1 uStack_508;
  undefined8 uStack_507;
  undefined8 uStack_4ff;
  undefined8 uStack_4f7;
  undefined8 uStack_4ef;
  undefined8 uStack_4e7;
  undefined8 uStack_4df;
  undefined8 uStack_4d7;
  undefined8 uStack_4cf;
  undefined8 uStack_4c7;
  undefined8 uStack_4bf;
  undefined8 uStack_4b7;
  undefined8 uStack_4af;
  undefined8 uStack_4a7;
  undefined7 uStack_49f;
  undefined1 uStack_498;
  undefined7 uStack_497;
  undefined *puStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined *puStack_408;
  undefined *puStack_400;
  undefined *puStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined *puStack_368;
  undefined *puStack_360;
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
  undefined *puStack_2c8;
  undefined *puStack_2c0;
  undefined1 uStack_2b8;
  undefined7 uStack_2b7;
  undefined8 uStack_2b0;
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined1 uStack_290;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined1 uStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined1 uStack_1c0;
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
  undefined *puStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  undefined **ppuVar11;
  
  FUN_100f97660();
  puVar6 = PTR_PTR_1126b0c40;
  func_0x000107c61168();
  puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  puVar8 = puVar7;
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c45098(0x4038000000000000,0x4038000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar8);
  if (puVar6 == (undefined *)0x0) {
    puVar6 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIImage_1126aea68);
    func_0x000107c453e4();
  }
  puVar9 = puVar7;
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c5f6c0();
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c5f6c0();
  puVar10 = puVar7;
  func_0x000107c5f410();
  FUN_100f95790(&uStack_7f0,puVar6,param_2,param_3);
  uStack_638 = uStack_7a8;
  uStack_640 = uStack_7b0;
  uStack_628 = uStack_798;
  uStack_630 = uStack_7a0;
  uStack_618 = uStack_788;
  uStack_620 = uStack_790;
  uStack_678 = uStack_7e8;
  uStack_680 = uStack_7f0;
  uStack_668 = uStack_7d8;
  uStack_670 = uStack_7e0;
  uStack_658 = uStack_7c8;
  uStack_660 = uStack_7d0;
  uStack_648 = uStack_7b8;
  uStack_650 = uStack_7c0;
  uStack_5f8 = uStack_7d8;
  uStack_600 = uStack_7e0;
  uStack_608 = uStack_7e8;
  uStack_610 = uStack_7f0;
  uStack_5e8 = uStack_7c8;
  uStack_5f0 = uStack_7d0;
  uStack_5c8 = uStack_7a8;
  uStack_5d0 = uStack_7b0;
  uStack_5d8 = uStack_7b8;
  uStack_5e0 = uStack_7c0;
  uStack_5b8 = uStack_798;
  uStack_5c0 = uStack_7a0;
  uStack_5a8 = uStack_788;
  uStack_5b0 = uStack_790;
  FUN_100f96da4(&uStack_680,&uStack_a30,0x112d503e0,&UNK_10d916a88);
  func_0x000100f96dec(&uStack_610,0x112d503e0,&UNK_10d916a88);
  uStack_9e1 = (undefined1)uStack_638;
  uStack_9e0 = (undefined7)((ulong)uStack_638 >> 8);
  uStack_9e9 = (undefined1)uStack_640;
  uStack_9e8 = (undefined7)((ulong)uStack_640 >> 8);
  uStack_9f1 = (undefined1)uStack_648;
  uStack_9f0 = (undefined7)((ulong)uStack_648 >> 8);
  uStack_9f9 = (undefined1)uStack_650;
  uStack_9f8 = (undefined7)((ulong)uStack_650 >> 8);
  uStack_a11 = (undefined1)uStack_668;
  uStack_a10 = (undefined7)((ulong)uStack_668 >> 8);
  uStack_a19 = (undefined1)uStack_670;
  uStack_a18 = (undefined7)((ulong)uStack_670 >> 8);
  uStack_a21 = (undefined1)uStack_678;
  uStack_a20 = (undefined7)((ulong)uStack_678 >> 8);
  uStack_a29 = (undefined1)uStack_680;
  uStack_a28 = (undefined7)((ulong)uStack_680 >> 8);
  uStack_9d1 = (undefined1)uStack_628;
  uStack_9d0 = (undefined7)((ulong)uStack_628 >> 8);
  uStack_9d9 = (undefined1)uStack_630;
  uStack_9d8 = (undefined7)((ulong)uStack_630 >> 8);
  uStack_9c1 = (undefined1)uStack_618;
  uStack_9c0 = (undefined7)((ulong)uStack_618 >> 8);
  uStack_9c9 = (undefined1)uStack_620;
  uStack_9c8 = (undefined7)((ulong)uStack_620 >> 8);
  uStack_a01 = (undefined1)uStack_658;
  uStack_a00 = (undefined7)((ulong)uStack_658 >> 8);
  uStack_a09 = (undefined1)uStack_660;
  uStack_a08 = (undefined7)((ulong)uStack_660 >> 8);
  uStack_547 = uStack_9e8;
  uStack_540 = uStack_9e1;
  uStack_54f = uStack_9f0;
  uStack_548 = uStack_9e9;
  uStack_537 = uStack_9d8;
  uStack_530 = uStack_9d1;
  uStack_53f = uStack_9e0;
  uStack_538 = uStack_9d9;
  uStack_527 = uStack_9c8;
  uStack_52f = uStack_9d0;
  uStack_528 = uStack_9c9;
  uStack_587 = uStack_a28;
  uStack_580 = uStack_a21;
  uStack_58f = uStack_a30;
  uStack_588 = uStack_a29;
  uStack_577 = uStack_a18;
  uStack_570 = uStack_a11;
  uStack_57f = uStack_a20;
  uStack_578 = uStack_a19;
  uStack_567 = uStack_a08;
  uStack_560 = uStack_a01;
  uStack_56f = uStack_a10;
  uStack_568 = uStack_a09;
  uStack_598 = 0x4020000000000000;
  uStack_590 = 0;
  uStack_557 = uStack_9f8;
  uStack_550 = uStack_9f1;
  uStack_55f = uStack_a00;
  uStack_558 = uStack_9f9;
  puVar8 = &UNK_10d916a90;
  uVar17 = uStack_660;
  uVar19 = uStack_680;
  puStack_5a0 = puVar10;
  uStack_520 = uStack_9c1;
  uStack_51f = uStack_9c0;
  func_0x000107c614e0();
  uStack_b38 = CONCAT71(uStack_537,uStack_538);
  uStack_b40 = CONCAT71(uStack_53f,uStack_540);
  uStack_b28 = CONCAT71(uStack_527,uStack_528);
  uStack_b30 = CONCAT71(uStack_52f,uStack_530);
  uStack_b78 = CONCAT71(uStack_577,uStack_578);
  uStack_b80 = CONCAT71(uStack_57f,uStack_580);
  uStack_b68 = CONCAT71(uStack_567,uStack_568);
  uStack_b70 = CONCAT71(uStack_56f,uStack_570);
  uStack_b58 = CONCAT71(uStack_557,uStack_558);
  uStack_b60 = CONCAT71(uStack_55f,uStack_560);
  uStack_b48 = CONCAT71(uStack_547,uStack_548);
  uStack_b50 = CONCAT71(uStack_54f,uStack_550);
  uStack_b88 = CONCAT71(uStack_587,uStack_588);
  uStack_b90 = CONCAT71(uStack_58f,uStack_590);
  uStack_b98 = uStack_598;
  puStack_ba0 = puStack_5a0;
  uStack_4bf = CONCAT17(uStack_9e1,uStack_9e8);
  uStack_4c7 = CONCAT17(uStack_9e9,uStack_9f0);
  uStack_4af = CONCAT17(uStack_9d1,uStack_9d8);
  uStack_4b7 = CONCAT17(uStack_9d9,uStack_9e0);
  uStack_4a7 = CONCAT17(uStack_9c9,uStack_9d0);
  uStack_49f = uStack_9c8;
  uStack_4ff = CONCAT17(uStack_a21,uStack_a28);
  uStack_507 = CONCAT17(uStack_a29,uStack_a30);
  uStack_4ef = CONCAT17(uStack_a11,uStack_a18);
  uStack_4f7 = CONCAT17(uStack_a19,uStack_a20);
  uStack_4df = CONCAT17(uStack_a01,uStack_a08);
  uStack_4e7 = CONCAT17(uStack_a09,uStack_a10);
  uStack_4cf = CONCAT17(uStack_9f1,uStack_9f8);
  uStack_4d7 = CONCAT17(uStack_9f9,uStack_a00);
  uStack_b20 = CONCAT71(uStack_51f,uStack_520);
  uStack_510 = 0x4020000000000000;
  uStack_508 = 0;
  uStack_498 = uStack_9c1;
  uStack_497 = uStack_9c0;
  puStack_518 = puVar10;
  FUN_100f96da4(&puStack_5a0,&uStack_7f0,0x112d50328,&UNK_10d9169f0);
  func_0x000107c6157c(puVar7);
  ppuVar11 = &puStack_518;
  func_0x000100f96dec(ppuVar11,0x112d50328,&UNK_10d9169f0);
  uVar4 = SUB81(ppuVar11,0);
  func_0x000107c5f568();
  uStack_428 = uStack_b38;
  uStack_430 = uStack_b40;
  uStack_418 = uStack_b28;
  uStack_420 = uStack_b30;
  uStack_468 = uStack_b78;
  uStack_470 = uStack_b80;
  uStack_458 = uStack_b68;
  uStack_460 = uStack_b70;
  uStack_448 = uStack_b58;
  uStack_450 = uStack_b60;
  uStack_438 = uStack_b48;
  uStack_440 = uStack_b50;
  uStack_488 = uStack_b98;
  puStack_490 = puStack_ba0;
  uStack_478 = uStack_b88;
  uStack_480 = uStack_b90;
  uStack_410 = uStack_b20;
  uVar14 = 0x4024000000000000;
  puVar10 = puStack_ba0;
  puStack_408 = puVar8;
  puStack_400 = puVar7;
  func_0x000107c5f280();
  uStack_9c8 = (undefined7)uStack_428;
  uStack_9c1 = (undefined1)((ulong)uStack_428 >> 0x38);
  uStack_9d0 = (undefined7)uStack_430;
  uStack_9c9 = (undefined1)((ulong)uStack_430 >> 0x38);
  uStack_9b8 = uStack_418;
  uStack_9c0 = (undefined7)uStack_420;
  uStack_9b9 = (undefined1)((ulong)uStack_420 >> 0x38);
  puStack_9a8 = puStack_408;
  uStack_9b0 = uStack_410;
  puStack_9a0 = puStack_400;
  uStack_a08 = (undefined7)uStack_468;
  uStack_a01 = (undefined1)((ulong)uStack_468 >> 0x38);
  uStack_a10 = (undefined7)uStack_470;
  uStack_a09 = (undefined1)((ulong)uStack_470 >> 0x38);
  uStack_9f8 = (undefined7)uStack_458;
  uStack_9f1 = (undefined1)((ulong)uStack_458 >> 0x38);
  uStack_a00 = (undefined7)uStack_460;
  uStack_9f9 = (undefined1)((ulong)uStack_460 >> 0x38);
  uStack_9e8 = (undefined7)uStack_448;
  uStack_9e1 = (undefined1)((ulong)uStack_448 >> 0x38);
  uStack_9f0 = (undefined7)uStack_450;
  uStack_9e9 = (undefined1)((ulong)uStack_450 >> 0x38);
  uStack_9d8 = (undefined7)uStack_438;
  uStack_9d1 = (undefined1)((ulong)uStack_438 >> 0x38);
  uStack_9e0 = (undefined7)uStack_440;
  uStack_9d9 = (undefined1)((ulong)uStack_440 >> 0x38);
  uStack_a28 = (undefined7)uStack_488;
  uStack_a21 = (undefined1)((ulong)uStack_488 >> 0x38);
  uStack_a30 = SUB87(puStack_490,0);
  uStack_a29 = (undefined1)((ulong)puStack_490 >> 0x38);
  uStack_a18 = (undefined7)uStack_478;
  uStack_a11 = (undefined1)((ulong)uStack_478 >> 0x38);
  uStack_a20 = (undefined7)uStack_480;
  uStack_a19 = (undefined1)((ulong)uStack_480 >> 0x38);
  uStack_388 = uStack_b38;
  uStack_390 = uStack_b40;
  uStack_378 = uStack_b28;
  uStack_380 = uStack_b30;
  uStack_3c8 = uStack_b78;
  uStack_3d0 = uStack_b80;
  uStack_3b8 = uStack_b68;
  uStack_3c0 = uStack_b70;
  uStack_3a8 = uStack_b58;
  uStack_3b0 = uStack_b60;
  uStack_398 = uStack_b48;
  uStack_3a0 = uStack_b50;
  uStack_3e8 = uStack_b98;
  puStack_3f0 = puStack_ba0;
  uStack_3d8 = uStack_b88;
  uStack_3e0 = uStack_b90;
  uStack_370 = uStack_b20;
  uVar18 = uVar17;
  uVar20 = uVar19;
  puStack_368 = puVar8;
  puStack_360 = puVar7;
  FUN_100f96da4(&puStack_490,&uStack_7f0,0x112d50318,&UNK_10d9169e8);
  ppuVar11 = &puStack_3f0;
  func_0x000100f96dec(ppuVar11,0x112d50318,&UNK_10d9169e8);
  uVar5 = SUB81(ppuVar11,0);
  func_0x000107c5f584();
  uStack_2e8 = CONCAT17(uStack_9c1,uStack_9c8);
  uStack_2f0 = CONCAT17(uStack_9c9,uStack_9d0);
  uStack_2e0 = CONCAT17(uStack_9b9,uStack_9c0);
  uStack_2d8 = uStack_9b8;
  puStack_2c8 = puStack_9a8;
  uStack_2d0 = uStack_9b0;
  puStack_2c0 = puStack_9a0;
  uStack_328 = CONCAT17(uStack_a01,uStack_a08);
  uStack_330 = CONCAT17(uStack_a09,uStack_a10);
  uStack_318 = CONCAT17(uStack_9f1,uStack_9f8);
  uStack_320 = CONCAT17(uStack_9f9,uStack_a00);
  uStack_308 = CONCAT17(uStack_9e1,uStack_9e8);
  uStack_310 = CONCAT17(uStack_9e9,uStack_9f0);
  uStack_2f8 = CONCAT17(uStack_9d1,uStack_9d8);
  uStack_300 = CONCAT17(uStack_9d9,uStack_9e0);
  uStack_348 = CONCAT17(uStack_a21,uStack_a28);
  uStack_350 = CONCAT17(uStack_a29,uStack_a30);
  uStack_338 = CONCAT17(uStack_a11,uStack_a18);
  uVar16 = CONCAT17(uStack_a19,uStack_a20);
  uStack_290 = 0;
  uVar15 = 0x4030000000000000;
  uStack_340 = uVar16;
  uStack_2b8 = uVar4;
  uStack_2b0 = uVar14;
  puStack_2a8 = puVar10;
  uStack_2a0 = uVar17;
  uStack_298 = uVar19;
  func_0x000107c5f280();
  puStack_818 = puStack_2a8;
  uStack_820 = uStack_2b0;
  uStack_808 = uStack_298;
  uStack_810 = uStack_2a0;
  uStack_800 = uStack_290;
  uStack_858 = uStack_2e8;
  uStack_860 = uStack_2f0;
  uStack_848 = uStack_2d8;
  uStack_850 = uStack_2e0;
  uStack_828 = CONCAT71(uStack_2b7,uStack_2b8);
  puStack_838 = puStack_2c8;
  uStack_840 = uStack_2d0;
  puStack_830 = puStack_2c0;
  uStack_898 = uStack_328;
  uStack_8a0 = uStack_330;
  uStack_888 = uStack_318;
  uStack_890 = uStack_320;
  uStack_878 = uStack_308;
  uStack_880 = uStack_310;
  uStack_868 = uStack_2f8;
  uStack_870 = uStack_300;
  uStack_8b8 = uStack_348;
  uStack_8c0 = uStack_350;
  uStack_8a8 = uStack_338;
  uStack_8b0 = uStack_340;
  uStack_218 = CONCAT17(uStack_9c1,uStack_9c8);
  uStack_220 = CONCAT17(uStack_9c9,uStack_9d0);
  uStack_210 = CONCAT17(uStack_9b9,uStack_9c0);
  uStack_208 = uStack_9b8;
  puStack_1f8 = puStack_9a8;
  uStack_200 = uStack_9b0;
  puStack_1f0 = puStack_9a0;
  uStack_258 = CONCAT17(uStack_a01,uStack_a08);
  uStack_260 = CONCAT17(uStack_a09,uStack_a10);
  uStack_248 = CONCAT17(uStack_9f1,uStack_9f8);
  uStack_250 = CONCAT17(uStack_9f9,uStack_a00);
  uStack_238 = CONCAT17(uStack_9e1,uStack_9e8);
  uStack_240 = CONCAT17(uStack_9e9,uStack_9f0);
  uStack_228 = CONCAT17(uStack_9d1,uStack_9d8);
  uStack_230 = CONCAT17(uStack_9d9,uStack_9e0);
  uStack_278 = CONCAT17(uStack_a21,uStack_a28);
  uStack_280 = CONCAT17(uStack_a29,uStack_a30);
  uStack_268 = CONCAT17(uStack_a11,uStack_a18);
  uStack_270 = CONCAT17(uStack_a19,uStack_a20);
  uStack_1c0 = 0;
  uStack_1e8 = uVar4;
  uStack_1e0 = uVar14;
  puStack_1d8 = puVar10;
  uStack_1d0 = uVar17;
  uStack_1c8 = uVar19;
  FUN_100f96da4(&uStack_350,&uStack_7f0,0x112d50308,&UNK_10d9169e0);
  func_0x000100f96dec(&uStack_280,0x112d50308,&UNK_10d9169e0);
  func_0x000107c5f7ac();
  uStack_118 = uStack_828;
  puStack_120 = puStack_830;
  puStack_108 = puStack_818;
  uStack_110 = uStack_820;
  uStack_f8 = uStack_808;
  uStack_100 = uStack_810;
  uStack_158 = uStack_868;
  uStack_160 = uStack_870;
  uStack_148 = uStack_858;
  uStack_150 = uStack_860;
  uStack_138 = uStack_848;
  uStack_140 = uStack_850;
  puStack_128 = puStack_838;
  uStack_130 = uStack_840;
  uStack_188 = uStack_898;
  uStack_190 = uStack_8a0;
  uStack_f0 = CONCAT71(uStack_7ff,uStack_800);
  uStack_178 = uStack_888;
  uStack_180 = uStack_890;
  uStack_168 = uStack_878;
  uStack_170 = uStack_880;
  uStack_1a8 = uStack_8b8;
  uStack_1b0 = uStack_8c0;
  uStack_198 = uStack_8a8;
  uStack_1a0 = uStack_8b0;
  uStack_c0 = 0;
  uStack_e8 = uVar5;
  uStack_e0 = uVar15;
  uStack_d8 = uVar16;
  uStack_d0 = uVar18;
  uStack_c8 = uVar20;
  func_0x000107c5f388(auStack_6f8,0,1,0,1,0x7ff0000000000000,0,0,1,0,1);
  func_0x000107c61170(puVar6);
  func_0x000107c61574(puVar7);
  func_0x000107c6142c(param_3);
  uStack_728 = CONCAT71(uStack_e7,uStack_e8);
  uStack_730 = uStack_f0;
  uStack_718 = uStack_d8;
  uStack_720 = uStack_e0;
  uStack_708 = uStack_c8;
  uStack_710 = uStack_d0;
  uStack_700 = uStack_c0;
  puStack_768 = puStack_128;
  uStack_770 = uStack_130;
  uStack_758 = uStack_118;
  puStack_760 = puStack_120;
  puStack_748 = puStack_108;
  uStack_750 = uStack_110;
  uStack_738 = uStack_f8;
  uStack_740 = uStack_100;
  uStack_7a8 = uStack_168;
  uStack_7b0 = uStack_170;
  uStack_798 = uStack_158;
  uStack_7a0 = uStack_160;
  uStack_788 = uStack_148;
  uStack_790 = uStack_150;
  uStack_778 = uStack_138;
  uStack_780 = uStack_140;
  uStack_7e8 = uStack_1a8;
  uStack_7f0 = uStack_1b0;
  uStack_7d8 = uStack_198;
  uStack_7e0 = uStack_1a0;
  uStack_7c8 = uStack_188;
  uStack_7d0 = uStack_190;
  uStack_7b8 = uStack_178;
  uStack_7c0 = uStack_180;
  puStack_bf8 = puStack_818;
  uStack_c00 = uStack_820;
  uStack_be8 = uStack_808;
  uStack_bf0 = uStack_810;
  uStack_be0 = CONCAT71(uStack_7ff,uStack_800);
  uStack_c38 = uStack_858;
  uStack_c40 = uStack_860;
  uStack_c28 = uStack_848;
  uStack_c30 = uStack_850;
  puStack_c18 = puStack_838;
  uStack_c20 = uStack_840;
  uStack_c08 = uStack_828;
  puStack_c10 = puStack_830;
  uStack_c78 = uStack_898;
  uStack_c80 = uStack_8a0;
  uStack_c68 = uStack_888;
  uStack_c70 = uStack_890;
  uStack_c58 = uStack_878;
  uStack_c60 = uStack_880;
  uStack_c48 = uStack_868;
  uStack_c50 = uStack_870;
  uStack_c98 = uStack_8b8;
  uStack_ca0 = uStack_8c0;
  uStack_c88 = uStack_8a8;
  uStack_c90 = uStack_8b0;
  uStack_bb0 = 0;
  uStack_bd8 = uVar5;
  uStack_bd0 = uVar15;
  uStack_bc8 = uVar16;
  uStack_bc0 = uVar18;
  uStack_bb8 = uVar20;
  FUN_100f96da4(&uStack_1b0,&uStack_a30,0x112d502f8,&UNK_10d9169d8);
  func_0x000100f96dec(&uStack_ca0,0x112d502f8,&UNK_10d9169d8);
  lVar12 = 0x112d502d0;
  func_0x0001000285a8(0x112d502d0,&UNK_10d9169c8);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar12 + 0x24));
  lVar12 = 0x112d4f648;
  func_0x0001000285a8(0x112d4f648,&UNK_10d9158b0);
  iVar3 = *(int *)(lVar12 + 0x34);
  uVar2 = *(undefined4 *)PTR___s7SwiftUI18RoundedCornerStyleO10continuousyA2CmFWC_110348d50;
  lVar13 = 0;
  func_0x000107c5f41c();
  (**(code **)(*(long *)(lVar13 + -8) + 0x68))((long)puVar1 + (long)iVar3,uVar2,lVar13);
  func_0x000107c610b4(&puStack_ba0,&uStack_7f0,0x168);
  *puVar1 = puVar9;
  *(undefined2 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x38)) = 0x100;
  func_0x000107c610b4(param_1,&uStack_7f0,0x168);
  func_0x000107c610b4(&uStack_a30,&uStack_7f0,0x168);
  FUN_100f96da4(&puStack_ba0,auStack_e08,0x112d502e8,&UNK_10d9169d0);
  func_0x000100f96dec(&uStack_a30,0x112d502e8,&UNK_10d9169d0);
  return;
}



/* Entry: 100f95790; end: 100f95bc7;  */

void FUN_100f95790(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  long extraout_x8;
  long lVar13;
  undefined1 auStack_430 [8];
  undefined1 *puStack_428;
  undefined *puStack_420;
  undefined1 *puStack_418;
  undefined8 *puStack_410;
  undefined1 auStack_408 [98];
  undefined6 uStack_3a6;
  undefined2 uStack_3a0;
  undefined6 uStack_39e;
  undefined2 uStack_398;
  undefined6 uStack_396;
  undefined2 uStack_390;
  undefined6 uStack_38e;
  undefined2 uStack_388;
  undefined6 uStack_386;
  undefined2 uStack_380;
  undefined6 uStack_37e;
  undefined2 uStack_378;
  undefined6 uStack_376;
  undefined2 uStack_370;
  undefined6 uStack_36e;
  undefined2 uStack_368;
  undefined6 uStack_366;
  undefined2 uStack_360;
  undefined6 uStack_35e;
  undefined2 uStack_358;
  undefined6 uStack_356;
  undefined2 uStack_350;
  undefined6 uStack_34e;
  undefined2 uStack_348;
  undefined6 uStack_346;
  undefined8 uStack_340;
  undefined8 *puStack_338;
  undefined1 uStack_330;
  undefined7 uStack_32f;
  undefined1 *puStack_328;
  undefined *puStack_320;
  undefined8 uStack_318;
  undefined1 uStack_310;
  undefined7 uStack_30f;
  undefined *puStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 *puStack_2f0;
  undefined1 uStack_2e8;
  undefined1 *puStack_2e0;
  undefined *puStack_2d8;
  undefined8 uStack_2d0;
  undefined1 uStack_2c8;
  undefined *puStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 uStack_2a0;
  undefined1 *puStack_298;
  undefined *puStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined *puStack_278;
  undefined8 uStack_270;
  undefined *puStack_268;
  undefined1 uStack_260;
  undefined8 uStack_250;
  undefined8 *puStack_248;
  undefined8 uStack_240;
  undefined1 *puStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  undefined *puStack_208;
  undefined1 uStack_200;
  undefined8 uStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 uStack_1e0;
  undefined1 *puStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  undefined1 *puStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined1 *puStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined1 *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar2 = 0x112d503e8;
  puStack_410 = param_1;
  func_0x0001000285a8(0x112d503e8,&UNK_10d916ac0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_430 + -extraout_x8;
  func_0x000107c61174(param_2);
  func_0x000107c5f6e8();
  uVar1 = *(undefined4 *)PTR___s7SwiftUI5ImageV21TemplateRenderingModeO8templateyA2EmFWC_110349758;
  lVar2 = 0;
  func_0x000107c5f6f8();
  lVar13 = *(long *)(lVar2 + -8);
  (**(code **)(lVar13 + 0x68))(puVar4,uVar1,lVar2);
  (**(code **)(lVar13 + 0x38))(puVar4,0,1,lVar2);
  puVar3 = puVar4;
  func_0x000107c5f6f4(puVar4,param_2);
  puStack_418 = puVar3;
  func_0x000107c61574(param_2);
  func_0x000100f96dec(puVar4,0x112d503e8,&UNK_10d916ac0);
  uStack_d0 = param_3;
  puStack_c8 = (undefined8 *)param_4;
  FUN_100e8b654();
  func_0x000107c61434(param_4);
  puVar5 = &uStack_d0;
  puVar8 = PTR___sSSN_11034da80;
  func_0x000107c5f5e0();
  uVar6 = 5;
  func_0x0001026ff85c();
  uVar7 = uVar6;
  puVar11 = puVar5;
  puVar12 = puVar8;
  puVar3 = puVar4;
  func_0x000107c5f5d4();
  puStack_428 = puVar3;
  func_0x000107c61574(uVar6);
  func_0x000100f795bc(puVar5,puVar8,puVar4);
  func_0x000107c6142c(lVar2);
  puVar8 = &UNK_10d916ac8;
  func_0x000107c614e0();
  puVar9 = &UNK_10d916af8;
  func_0x000107c614e0();
  puVar3 = puStack_428;
  puStack_328 = puStack_428;
  uStack_318 = 1;
  uStack_310 = 0;
  uStack_300 = 0x3fe4cccccccccccd;
  puVar10 = &UNK_10d916b28;
  uStack_340 = uVar7;
  puStack_338 = puVar11;
  uStack_330 = (char)puVar12;
  puStack_320 = puVar8;
  puStack_308 = puVar9;
  func_0x000107c614e0();
  uStack_180 = CONCAT71(uStack_32f,uStack_330);
  uStack_160 = CONCAT71(uStack_30f,uStack_310);
  uStack_168 = uStack_318;
  puStack_170 = puStack_320;
  puStack_158 = puStack_308;
  uStack_150 = uStack_300;
  puStack_188 = puStack_338;
  uStack_190 = uStack_340;
  puStack_178 = puStack_328;
  puStack_2e0 = puVar3;
  uStack_2d0 = 1;
  uStack_2c8 = 0;
  uStack_2b8 = 0x3fe4cccccccccccd;
  puStack_420 = puVar10;
  uStack_2f8 = uVar7;
  puStack_2f0 = puVar11;
  uStack_2e8 = (char)puVar12;
  puStack_2d8 = puVar8;
  puStack_2c0 = puVar9;
  func_0x000100f96da4(&uStack_340,&uStack_d0,0x112d4fb70,&UNK_10d915bb8);
  func_0x000100f96dec(&uStack_2f8,0x112d4fb70,&UNK_10d915bb8);
  uStack_288 = uStack_168;
  puStack_290 = puStack_170;
  puStack_278 = puStack_158;
  uStack_280 = uStack_160;
  uStack_108 = uStack_168;
  puStack_110 = puStack_170;
  puStack_f8 = puStack_158;
  uStack_100 = uStack_160;
  puStack_2a8 = puStack_188;
  uStack_2b0 = uStack_190;
  puStack_298 = puStack_178;
  uStack_2a0 = uStack_180;
  uStack_270 = uStack_150;
  puStack_268 = puStack_420;
  uStack_260 = 1;
  uStack_e0 = CONCAT71(uStack_e0._1_7_,1);
  puStack_128 = puStack_188;
  uStack_130 = uStack_190;
  puStack_118 = puStack_178;
  uStack_120 = uStack_180;
  puStack_e8 = puStack_420;
  uStack_f0 = uStack_150;
  uStack_228 = uStack_168;
  puStack_230 = puStack_170;
  puStack_218 = puStack_158;
  uStack_220 = uStack_160;
  puStack_248 = puStack_188;
  uStack_250 = uStack_190;
  puStack_238 = puStack_178;
  uStack_240 = uStack_180;
  uStack_210 = uStack_150;
  puStack_208 = puStack_420;
  uStack_200 = 1;
  func_0x000100f96da4(&uStack_2b0,&uStack_d0,0x112d503f0,&UNK_10d916b60);
  func_0x000100f96dec(&uStack_250,0x112d503f0,&UNK_10d916b60);
  uStack_1c8 = uStack_108;
  puStack_1d0 = puStack_110;
  puStack_1b8 = puStack_f8;
  uStack_1c0 = uStack_100;
  puStack_1a8 = puStack_e8;
  uStack_1b0 = uStack_f0;
  puStack_1e8 = puStack_128;
  uStack_1f0 = uStack_130;
  puStack_1d8 = puStack_118;
  uStack_1e0 = uStack_120;
  uStack_1a0 = uStack_e0;
  uStack_198 = 0x3ff0000000000000;
  puStack_188 = puStack_128;
  uStack_190 = uStack_130;
  puStack_178 = puStack_118;
  uStack_180 = uStack_120;
  uStack_168 = uStack_108;
  puStack_170 = puStack_110;
  puStack_158 = puStack_f8;
  uStack_160 = uStack_100;
  puStack_148 = puStack_e8;
  uStack_150 = uStack_f0;
  uStack_140 = uStack_e0;
  uStack_138 = 0x3ff0000000000000;
  func_0x000100f96da4(&uStack_1f0,&uStack_d0,0x112d503f8,&UNK_10d916b68);
  func_0x000100f96dec(&uStack_190,0x112d503f8,&UNK_10d916b68);
  puVar3 = puStack_418;
  uStack_a8 = uStack_1c8;
  puStack_b0 = puStack_1d0;
  puStack_98 = puStack_1b8;
  uStack_a0 = uStack_1c0;
  puStack_c8 = puStack_1e8;
  uStack_d0 = uStack_1f0;
  puStack_b8 = puStack_1d8;
  uStack_c0 = uStack_1e0;
  puStack_128 = puStack_1e8;
  uStack_130 = uStack_1f0;
  puStack_118 = puStack_1d8;
  uStack_120 = uStack_1e0;
  uStack_108 = uStack_1c8;
  puStack_110 = puStack_1d0;
  puStack_f8 = puStack_1b8;
  uStack_100 = uStack_1c0;
  puStack_88 = puStack_1a8;
  uStack_90 = uStack_1b0;
  uStack_78 = uStack_198;
  uStack_80 = uStack_1a0;
  puStack_e8 = puStack_1a8;
  uStack_f0 = uStack_1b0;
  uStack_d8 = uStack_198;
  uStack_e0 = uStack_1a0;
  uStack_398 = SUB82(puStack_1e8,0);
  uStack_396 = (undefined6)((ulong)puStack_1e8 >> 0x10);
  uStack_3a0 = (undefined2)uStack_1f0;
  uStack_39e = (undefined6)((ulong)uStack_1f0 >> 0x10);
  uStack_388 = SUB82(puStack_1d8,0);
  uStack_386 = (undefined6)((ulong)puStack_1d8 >> 0x10);
  uStack_390 = (undefined2)uStack_1e0;
  uStack_38e = (undefined6)((ulong)uStack_1e0 >> 0x10);
  uStack_378 = (undefined2)uStack_1c8;
  uStack_376 = (undefined6)((ulong)uStack_1c8 >> 0x10);
  uStack_380 = SUB82(puStack_1d0,0);
  uStack_37e = (undefined6)((ulong)puStack_1d0 >> 0x10);
  uStack_348 = (undefined2)uStack_198;
  uStack_346 = (undefined6)((ulong)uStack_198 >> 0x10);
  uStack_350 = (undefined2)uStack_1a0;
  uStack_34e = (undefined6)((ulong)uStack_1a0 >> 0x10);
  uStack_358 = SUB82(puStack_1a8,0);
  uStack_356 = (undefined6)((ulong)puStack_1a8 >> 0x10);
  uStack_360 = (undefined2)uStack_1b0;
  uStack_35e = (undefined6)((ulong)uStack_1b0 >> 0x10);
  uStack_368 = SUB82(puStack_1b8,0);
  uStack_366 = (undefined6)((ulong)puStack_1b8 >> 0x10);
  uStack_370 = (undefined2)uStack_1c0;
  uStack_36e = (undefined6)((ulong)uStack_1c0 >> 0x10);
  *puStack_410 = puStack_418;
  *(undefined2 *)(puStack_410 + 1) = 0x101;
  *(ulong *)((long)puStack_410 + 0x32) = CONCAT26(uStack_378,uStack_37e);
  *(ulong *)((long)puStack_410 + 0x2a) = CONCAT26(uStack_380,uStack_386);
  *(ulong *)((long)puStack_410 + 0x22) = CONCAT26(uStack_388,uStack_38e);
  *(ulong *)((long)puStack_410 + 0x1a) = CONCAT26(uStack_390,uStack_396);
  *(ulong *)((long)puStack_410 + 0x12) = CONCAT26(uStack_398,uStack_39e);
  *(ulong *)((long)puStack_410 + 10) = CONCAT26(uStack_3a0,uStack_3a6);
  puStack_410[0xd] = uStack_198;
  *(ulong *)((long)puStack_410 + 0x62) = CONCAT26(uStack_348,uStack_34e);
  *(ulong *)((long)puStack_410 + 0x5a) = CONCAT26(uStack_350,uStack_356);
  *(ulong *)((long)puStack_410 + 0x52) = CONCAT26(uStack_358,uStack_35e);
  *(ulong *)((long)puStack_410 + 0x4a) = CONCAT26(uStack_360,uStack_366);
  *(ulong *)((long)puStack_410 + 0x42) = CONCAT26(uStack_368,uStack_36e);
  *(ulong *)((long)puStack_410 + 0x3a) = CONCAT26(uStack_370,uStack_376);
  func_0x000107c6157c(puStack_418);
  func_0x000100f96da4(&uStack_130,auStack_408,0x112d503f8,&UNK_10d916b68);
  func_0x000100f96dec(&uStack_d0,0x112d503f8,&UNK_10d916b68);
  func_0x000107c61574(puVar3);
  return;
}



/* Entry: 100f95bc8; end: 100f95c9b;  */

void FUN_100f95bc8(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 uStack_51;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (param_1 == 0) {
    uStack_48 = *(undefined8 *)(param_3 + 0x38);
    uStack_50 = *(undefined8 *)(param_3 + 0x30);
    uStack_51 = 0;
    uVar3 = 0x112d4f580;
    func_0x0001000285a8(0x112d4f580,&UNK_10d915430);
    func_0x000107c5f730(&uStack_51,uVar3);
    (**(code **)(param_3 + 0x70))();
  }
  else {
    pcVar1 = *(code **)(param_3 + 0x80);
    lVar2 = param_1;
    func_0x000107c61174();
    (*pcVar1)(param_4,param_1);
    uStack_48 = *(undefined8 *)(param_3 + 0x38);
    uStack_50 = *(undefined8 *)(param_3 + 0x30);
    uStack_51 = 0;
    uVar3 = 0x112d4f580;
    func_0x0001000285a8(0x112d4f580,&UNK_10d915430);
    func_0x000107c5f730(&uStack_51,uVar3);
    (**(code **)(param_3 + 0x70))();
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 100f95c9c; end: 100f95ca7;  */

void FUN_100f95c9c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb6854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_110349438
  )();
  return;
}



/* Entry: 100f95ca8; end: 100f95cff;  */

void FUN_100f95ca8(void)

{
  FUN_100f92308();
  return;
}



/* Entry: 100f95d00; end: 100f95d3f;  */

void FUN_100f95d00(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d50288 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d915900;
  func_0x000107c61520(&UNK_10d915900,&UNK_11036fad0);
  puRam0000000112d50288 = puVar1;
  return;
}



/* Entry: 100f95d40; end: 100f95d63;  */

void FUN_100f95d40(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112d502b0;
  plVar5 = (long *)&UNK_10d9169a0;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_100f97274(0,0x112d36850,&PTR__OBJC_CLASS___UIImage_1126aea68);
    if (lVar3 != 0) {
      puVar4 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 100f95d64; end: 100f95ddb;  */

void FUN_100f95d64(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_100f97274(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 100f95ddc; end: 100f95e23;  */

void FUN_100f95ddc(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112d50400;
  plVar5 = (long *)&UNK_10d91ca20;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_100f97274(0,0x112d4f348,&PTR__OBJC_CLASS___NSValue_1126afdf8);
    if (lVar3 != 0) {
      puVar4 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 100f95e24; end: 100f961ab;  */

ulong FUN_100f95e24(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100f95f08);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100f95f0c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c61168(PTR__OBJC_CLASS___UIImage_1126aea68);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c61168(PTR__OBJC_CLASS___UIImage_1126aea68);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_100f97274(0,0x112d36850,&PTR__OBJC_CLASS___UIImage_1126aea68);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100f95fe8);
  (*pcVar2)();
}



/* Entry: 100f961ac; end: 100f961fb;  */

void FUN_100f961ac(byte *param_1,byte param_2)

{
  func_0x000107c5f3e4();
  *param_1 = param_2 & 1;
  return;
}



/* Entry: 100f961fc; end: 100f9620f;  */

void FUN_100f961fc(byte *param_1,byte param_2)

{
  *param_1 = *param_1 & (param_2 ^ 0xff) & 1;
  return;
}



/* Entry: 100f96210; end: 100f96303;  */

void FUN_100f96210(undefined8 *param_1,undefined8 param_2)

{
  func_0x000107c5f3b4();
  *param_1 = param_2;
  return;
}



/* Entry: 100f96304; end: 100f9631b;  */

void FUN_100f96304(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f9631c,0,0);
  return;
}



/* Entry: 100f9631c; end: 100f963e3;  */

void FUN_100f9631c(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x22;
  
  func_0x000104888eec(unaff_x22 + 0x60);
  if (*(char *)(unaff_x22 + 0x68) != -1) {
                    /* WARNING: Could not recover jumptable at 0x000100f96364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x60));
    return;
  }
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_100f963e4;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  puVar2 = &UNK_110370c80;
  func_0x000107c613fc(&UNK_110370c80,0x18,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  func_0x00010075a04c(0,1,FUN_100f964cc,puVar2);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 100f963e4; end: 100f96423;  */

void FUN_100f963e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f96424,0,0);
  return;
}



/* Entry: 100f96424; end: 100f9643b;  */

void FUN_100f96424(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000100f96430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x50),*(undefined1 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 100f9643c; end: 100f9648f;  */

void FUN_100f9643c(void)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  plVar3 = (long *)0x160;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100f96490;
  plVar3[0x22] = unaff_x20 + 0x10;
  lVar1 = 0;
  func_0x000107c5fcec();
  plVar3[0x23] = lVar1;
  func_0x000107c5fce8();
  plVar3[0x24] = lVar1;
  plVar2 = (long *)0x80;
  func_0x000107c615b8();
  plVar3[0x25] = (long)plVar2;
  *plVar2 = (long)plVar3;
  plVar2[1] = (long)FUN_100f932e0;
                    /* WARNING: Could not recover jumptable at 0x000100f932dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_100f96304();
  return;
}



/* Entry: 100f96490; end: 100f964cb;  */

void FUN_100f96490(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100f964c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100f964cc; end: 100f96517;  */

void FUN_100f964cc(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *param_1;
  uVar1 = *(undefined1 *)(param_1 + 1);
  FUN_100f96518(uVar4,uVar1);
  puVar2 = *(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28);
  *puVar2 = uVar4;
  *(undefined1 *)(puVar2 + 1) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar3);
  return;
}



/* Entry: 100f96518; end: 100f96533;  */

void FUN_100f96518(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc01a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRetain_11034f320)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 100f96534; end: 100f967eb;  */

void FUN_100f96534(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000112d502d8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112d502d0;
  func_0x00010002969c(0x112d502d0,&UNK_10d9169c8);
  uVar2 = uVar1;
  func_0x000100f965cc();
  uVar3 = 0x112d4f640;
  FUN_100f96d58(0x112d4f640,0x112d4f648,&UNK_10d9158b0,
                PTR___s7SwiftUI34_InsettableBackgroundShapeModifierVyxq_GAA04ViewF0AAMc_110349268);
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&uStack_30);
  puRam0000000112d502d8 = puVar4;
  return;
}



/* Entry: 100f967ec; end: 100f96803;  */

void FUN_100f967ec(byte *param_1)

{
  long unaff_x20;
  
  *param_1 = *param_1 & (*(byte *)(unaff_x20 + 0x10) ^ 0xff) & 1;
  return;
}



/* Entry: 100f96804; end: 100f96c67;  */

void FUN_100f96804(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000112d50348 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112d502c8;
  func_0x00010002969c(0x112d502c8,&UNK_10d9169c0);
  uVar2 = uVar1;
  func_0x000100f9689c();
  uVar3 = 0x112d50390;
  FUN_100f96d58(0x112d50390,0x112d50398,&UNK_10d9de950,
                PTR___s7SwiftUI32_EnvironmentKeyTransformModifierVyxGAA04ViewF0AAMc_110349258);
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&uStack_30);
  puRam0000000112d50348 = puVar4;
  return;
}



/* Entry: 100f96c68; end: 100f96c6f;  */

void FUN_100f96c68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long unaff_x20;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 auStack_e08 [360];
  undefined8 uStack_ca0;
  undefined8 uStack_c98;
  undefined8 uStack_c90;
  undefined8 uStack_c88;
  undefined8 uStack_c80;
  undefined8 uStack_c78;
  undefined8 uStack_c70;
  undefined8 uStack_c68;
  undefined8 uStack_c60;
  undefined8 uStack_c58;
  undefined8 uStack_c50;
  undefined8 uStack_c48;
  undefined8 uStack_c40;
  undefined8 uStack_c38;
  undefined8 uStack_c30;
  undefined8 uStack_c28;
  undefined8 uStack_c20;
  undefined *puStack_c18;
  undefined *puStack_c10;
  undefined8 uStack_c08;
  undefined8 uStack_c00;
  undefined *puStack_bf8;
  undefined8 uStack_bf0;
  undefined8 uStack_be8;
  undefined8 uStack_be0;
  undefined1 uStack_bd8;
  undefined8 uStack_bd0;
  undefined8 uStack_bc8;
  undefined8 uStack_bc0;
  undefined8 uStack_bb8;
  undefined1 uStack_bb0;
  undefined *puStack_ba0;
  undefined8 uStack_b98;
  undefined8 uStack_b90;
  undefined8 uStack_b88;
  undefined8 uStack_b80;
  undefined8 uStack_b78;
  undefined8 uStack_b70;
  undefined8 uStack_b68;
  undefined8 uStack_b60;
  undefined8 uStack_b58;
  undefined8 uStack_b50;
  undefined8 uStack_b48;
  undefined8 uStack_b40;
  undefined8 uStack_b38;
  undefined8 uStack_b30;
  undefined8 uStack_b28;
  undefined8 uStack_b20;
  undefined7 uStack_a30;
  undefined1 uStack_a29;
  undefined7 uStack_a28;
  undefined1 uStack_a21;
  undefined7 uStack_a20;
  undefined1 uStack_a19;
  undefined7 uStack_a18;
  undefined1 uStack_a11;
  undefined7 uStack_a10;
  undefined1 uStack_a09;
  undefined7 uStack_a08;
  undefined1 uStack_a01;
  undefined7 uStack_a00;
  undefined1 uStack_9f9;
  undefined7 uStack_9f8;
  undefined1 uStack_9f1;
  undefined7 uStack_9f0;
  undefined1 uStack_9e9;
  undefined7 uStack_9e8;
  undefined1 uStack_9e1;
  undefined7 uStack_9e0;
  undefined1 uStack_9d9;
  undefined7 uStack_9d8;
  undefined1 uStack_9d1;
  undefined7 uStack_9d0;
  undefined1 uStack_9c9;
  undefined7 uStack_9c8;
  undefined1 uStack_9c1;
  undefined7 uStack_9c0;
  undefined1 uStack_9b9;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  undefined *puStack_9a8;
  undefined *puStack_9a0;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined *puStack_838;
  undefined *puStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined *puStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined1 uStack_800;
  undefined7 uStack_7ff;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined *puStack_768;
  undefined *puStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined *puStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined1 uStack_700;
  undefined1 auStack_6f8 [120];
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined *puStack_5a0;
  undefined8 uStack_598;
  undefined1 uStack_590;
  undefined7 uStack_58f;
  undefined1 uStack_588;
  undefined7 uStack_587;
  undefined1 uStack_580;
  undefined7 uStack_57f;
  undefined1 uStack_578;
  undefined7 uStack_577;
  undefined1 uStack_570;
  undefined7 uStack_56f;
  undefined1 uStack_568;
  undefined7 uStack_567;
  undefined1 uStack_560;
  undefined7 uStack_55f;
  undefined1 uStack_558;
  undefined7 uStack_557;
  undefined1 uStack_550;
  undefined7 uStack_54f;
  undefined1 uStack_548;
  undefined7 uStack_547;
  undefined1 uStack_540;
  undefined7 uStack_53f;
  undefined1 uStack_538;
  undefined7 uStack_537;
  undefined1 uStack_530;
  undefined7 uStack_52f;
  undefined1 uStack_528;
  undefined7 uStack_527;
  undefined1 uStack_520;
  undefined7 uStack_51f;
  undefined *puStack_518;
  undefined8 uStack_510;
  undefined1 uStack_508;
  undefined8 uStack_507;
  undefined8 uStack_4ff;
  undefined8 uStack_4f7;
  undefined8 uStack_4ef;
  undefined8 uStack_4e7;
  undefined8 uStack_4df;
  undefined8 uStack_4d7;
  undefined8 uStack_4cf;
  undefined8 uStack_4c7;
  undefined8 uStack_4bf;
  undefined8 uStack_4b7;
  undefined8 uStack_4af;
  undefined8 uStack_4a7;
  undefined7 uStack_49f;
  undefined1 uStack_498;
  undefined7 uStack_497;
  undefined *puStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined *puStack_408;
  undefined *puStack_400;
  undefined *puStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined *puStack_368;
  undefined *puStack_360;
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
  undefined *puStack_2c8;
  undefined *puStack_2c0;
  undefined1 uStack_2b8;
  undefined7 uStack_2b7;
  undefined8 uStack_2b0;
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined1 uStack_290;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined1 uStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined1 uStack_1c0;
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
  undefined *puStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  undefined **ppuVar11;
  
  uVar14 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100f97660(uVar14);
  puVar6 = PTR_PTR_1126b0c40;
  func_0x000107c61168();
  puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  puVar8 = puVar7;
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c45098(0x4038000000000000,0x4038000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar8);
  if (puVar6 == (undefined *)0x0) {
    puVar6 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIImage_1126aea68);
    func_0x000107c453e4();
  }
  puVar9 = puVar7;
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c5f6c0();
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c5f6c0();
  puVar10 = puVar7;
  func_0x000107c5f410();
  FUN_100f95790(&uStack_7f0,puVar6,uVar14,param_3);
  uStack_638 = uStack_7a8;
  uStack_640 = uStack_7b0;
  uStack_628 = uStack_798;
  uStack_630 = uStack_7a0;
  uStack_618 = uStack_788;
  uStack_620 = uStack_790;
  uStack_678 = uStack_7e8;
  uStack_680 = uStack_7f0;
  uStack_668 = uStack_7d8;
  uStack_670 = uStack_7e0;
  uStack_658 = uStack_7c8;
  uStack_660 = uStack_7d0;
  uStack_648 = uStack_7b8;
  uStack_650 = uStack_7c0;
  uStack_5f8 = uStack_7d8;
  uStack_600 = uStack_7e0;
  uStack_608 = uStack_7e8;
  uStack_610 = uStack_7f0;
  uStack_5e8 = uStack_7c8;
  uStack_5f0 = uStack_7d0;
  uStack_5c8 = uStack_7a8;
  uStack_5d0 = uStack_7b0;
  uStack_5d8 = uStack_7b8;
  uStack_5e0 = uStack_7c0;
  uStack_5b8 = uStack_798;
  uStack_5c0 = uStack_7a0;
  uStack_5a8 = uStack_788;
  uStack_5b0 = uStack_790;
  FUN_100f96da4(&uStack_680,&uStack_a30,0x112d503e0,&UNK_10d916a88);
  func_0x000100f96dec(&uStack_610,0x112d503e0,&UNK_10d916a88);
  uStack_9e1 = (undefined1)uStack_638;
  uStack_9e0 = (undefined7)((ulong)uStack_638 >> 8);
  uStack_9e9 = (undefined1)uStack_640;
  uStack_9e8 = (undefined7)((ulong)uStack_640 >> 8);
  uStack_9f1 = (undefined1)uStack_648;
  uStack_9f0 = (undefined7)((ulong)uStack_648 >> 8);
  uStack_9f9 = (undefined1)uStack_650;
  uStack_9f8 = (undefined7)((ulong)uStack_650 >> 8);
  uStack_a11 = (undefined1)uStack_668;
  uStack_a10 = (undefined7)((ulong)uStack_668 >> 8);
  uStack_a19 = (undefined1)uStack_670;
  uStack_a18 = (undefined7)((ulong)uStack_670 >> 8);
  uStack_a21 = (undefined1)uStack_678;
  uStack_a20 = (undefined7)((ulong)uStack_678 >> 8);
  uStack_a29 = (undefined1)uStack_680;
  uStack_a28 = (undefined7)((ulong)uStack_680 >> 8);
  uStack_9d1 = (undefined1)uStack_628;
  uStack_9d0 = (undefined7)((ulong)uStack_628 >> 8);
  uStack_9d9 = (undefined1)uStack_630;
  uStack_9d8 = (undefined7)((ulong)uStack_630 >> 8);
  uStack_9c1 = (undefined1)uStack_618;
  uStack_9c0 = (undefined7)((ulong)uStack_618 >> 8);
  uStack_9c9 = (undefined1)uStack_620;
  uStack_9c8 = (undefined7)((ulong)uStack_620 >> 8);
  uStack_a01 = (undefined1)uStack_658;
  uStack_a00 = (undefined7)((ulong)uStack_658 >> 8);
  uStack_a09 = (undefined1)uStack_660;
  uStack_a08 = (undefined7)((ulong)uStack_660 >> 8);
  uStack_547 = uStack_9e8;
  uStack_540 = uStack_9e1;
  uStack_54f = uStack_9f0;
  uStack_548 = uStack_9e9;
  uStack_537 = uStack_9d8;
  uStack_530 = uStack_9d1;
  uStack_53f = uStack_9e0;
  uStack_538 = uStack_9d9;
  uStack_527 = uStack_9c8;
  uStack_52f = uStack_9d0;
  uStack_528 = uStack_9c9;
  uStack_587 = uStack_a28;
  uStack_580 = uStack_a21;
  uStack_58f = uStack_a30;
  uStack_588 = uStack_a29;
  uStack_577 = uStack_a18;
  uStack_570 = uStack_a11;
  uStack_57f = uStack_a20;
  uStack_578 = uStack_a19;
  uStack_567 = uStack_a08;
  uStack_560 = uStack_a01;
  uStack_56f = uStack_a10;
  uStack_568 = uStack_a09;
  uStack_598 = 0x4020000000000000;
  uStack_590 = 0;
  uStack_557 = uStack_9f8;
  uStack_550 = uStack_9f1;
  uStack_55f = uStack_a00;
  uStack_558 = uStack_9f9;
  puVar8 = &UNK_10d916a90;
  uVar17 = uStack_660;
  uVar19 = uStack_680;
  puStack_5a0 = puVar10;
  uStack_520 = uStack_9c1;
  uStack_51f = uStack_9c0;
  func_0x000107c614e0();
  uStack_b38 = CONCAT71(uStack_537,uStack_538);
  uStack_b40 = CONCAT71(uStack_53f,uStack_540);
  uStack_b28 = CONCAT71(uStack_527,uStack_528);
  uStack_b30 = CONCAT71(uStack_52f,uStack_530);
  uStack_b78 = CONCAT71(uStack_577,uStack_578);
  uStack_b80 = CONCAT71(uStack_57f,uStack_580);
  uStack_b68 = CONCAT71(uStack_567,uStack_568);
  uStack_b70 = CONCAT71(uStack_56f,uStack_570);
  uStack_b58 = CONCAT71(uStack_557,uStack_558);
  uStack_b60 = CONCAT71(uStack_55f,uStack_560);
  uStack_b48 = CONCAT71(uStack_547,uStack_548);
  uStack_b50 = CONCAT71(uStack_54f,uStack_550);
  uStack_b88 = CONCAT71(uStack_587,uStack_588);
  uStack_b90 = CONCAT71(uStack_58f,uStack_590);
  uStack_b98 = uStack_598;
  puStack_ba0 = puStack_5a0;
  uStack_4bf = CONCAT17(uStack_9e1,uStack_9e8);
  uStack_4c7 = CONCAT17(uStack_9e9,uStack_9f0);
  uStack_4af = CONCAT17(uStack_9d1,uStack_9d8);
  uStack_4b7 = CONCAT17(uStack_9d9,uStack_9e0);
  uStack_4a7 = CONCAT17(uStack_9c9,uStack_9d0);
  uStack_49f = uStack_9c8;
  uStack_4ff = CONCAT17(uStack_a21,uStack_a28);
  uStack_507 = CONCAT17(uStack_a29,uStack_a30);
  uStack_4ef = CONCAT17(uStack_a11,uStack_a18);
  uStack_4f7 = CONCAT17(uStack_a19,uStack_a20);
  uStack_4df = CONCAT17(uStack_a01,uStack_a08);
  uStack_4e7 = CONCAT17(uStack_a09,uStack_a10);
  uStack_4cf = CONCAT17(uStack_9f1,uStack_9f8);
  uStack_4d7 = CONCAT17(uStack_9f9,uStack_a00);
  uStack_b20 = CONCAT71(uStack_51f,uStack_520);
  uStack_510 = 0x4020000000000000;
  uStack_508 = 0;
  uStack_498 = uStack_9c1;
  uStack_497 = uStack_9c0;
  puStack_518 = puVar10;
  FUN_100f96da4(&puStack_5a0,&uStack_7f0,0x112d50328,&UNK_10d9169f0);
  func_0x000107c6157c(puVar7);
  ppuVar11 = &puStack_518;
  func_0x000100f96dec(ppuVar11,0x112d50328,&UNK_10d9169f0);
  uVar4 = SUB81(ppuVar11,0);
  func_0x000107c5f568();
  uStack_428 = uStack_b38;
  uStack_430 = uStack_b40;
  uStack_418 = uStack_b28;
  uStack_420 = uStack_b30;
  uStack_468 = uStack_b78;
  uStack_470 = uStack_b80;
  uStack_458 = uStack_b68;
  uStack_460 = uStack_b70;
  uStack_448 = uStack_b58;
  uStack_450 = uStack_b60;
  uStack_438 = uStack_b48;
  uStack_440 = uStack_b50;
  uStack_488 = uStack_b98;
  puStack_490 = puStack_ba0;
  uStack_478 = uStack_b88;
  uStack_480 = uStack_b90;
  uStack_410 = uStack_b20;
  uVar15 = 0x4024000000000000;
  puVar10 = puStack_ba0;
  puStack_408 = puVar8;
  puStack_400 = puVar7;
  func_0x000107c5f280();
  uStack_9c8 = (undefined7)uStack_428;
  uStack_9c1 = (undefined1)((ulong)uStack_428 >> 0x38);
  uStack_9d0 = (undefined7)uStack_430;
  uStack_9c9 = (undefined1)((ulong)uStack_430 >> 0x38);
  uStack_9b8 = uStack_418;
  uStack_9c0 = (undefined7)uStack_420;
  uStack_9b9 = (undefined1)((ulong)uStack_420 >> 0x38);
  puStack_9a8 = puStack_408;
  uStack_9b0 = uStack_410;
  puStack_9a0 = puStack_400;
  uStack_a08 = (undefined7)uStack_468;
  uStack_a01 = (undefined1)((ulong)uStack_468 >> 0x38);
  uStack_a10 = (undefined7)uStack_470;
  uStack_a09 = (undefined1)((ulong)uStack_470 >> 0x38);
  uStack_9f8 = (undefined7)uStack_458;
  uStack_9f1 = (undefined1)((ulong)uStack_458 >> 0x38);
  uStack_a00 = (undefined7)uStack_460;
  uStack_9f9 = (undefined1)((ulong)uStack_460 >> 0x38);
  uStack_9e8 = (undefined7)uStack_448;
  uStack_9e1 = (undefined1)((ulong)uStack_448 >> 0x38);
  uStack_9f0 = (undefined7)uStack_450;
  uStack_9e9 = (undefined1)((ulong)uStack_450 >> 0x38);
  uStack_9d8 = (undefined7)uStack_438;
  uStack_9d1 = (undefined1)((ulong)uStack_438 >> 0x38);
  uStack_9e0 = (undefined7)uStack_440;
  uStack_9d9 = (undefined1)((ulong)uStack_440 >> 0x38);
  uStack_a28 = (undefined7)uStack_488;
  uStack_a21 = (undefined1)((ulong)uStack_488 >> 0x38);
  uStack_a30 = SUB87(puStack_490,0);
  uStack_a29 = (undefined1)((ulong)puStack_490 >> 0x38);
  uStack_a18 = (undefined7)uStack_478;
  uStack_a11 = (undefined1)((ulong)uStack_478 >> 0x38);
  uStack_a20 = (undefined7)uStack_480;
  uStack_a19 = (undefined1)((ulong)uStack_480 >> 0x38);
  uStack_388 = uStack_b38;
  uStack_390 = uStack_b40;
  uStack_378 = uStack_b28;
  uStack_380 = uStack_b30;
  uStack_3c8 = uStack_b78;
  uStack_3d0 = uStack_b80;
  uStack_3b8 = uStack_b68;
  uStack_3c0 = uStack_b70;
  uStack_3a8 = uStack_b58;
  uStack_3b0 = uStack_b60;
  uStack_398 = uStack_b48;
  uStack_3a0 = uStack_b50;
  uStack_3e8 = uStack_b98;
  puStack_3f0 = puStack_ba0;
  uStack_3d8 = uStack_b88;
  uStack_3e0 = uStack_b90;
  uStack_370 = uStack_b20;
  uVar18 = uVar17;
  uVar20 = uVar19;
  puStack_368 = puVar8;
  puStack_360 = puVar7;
  FUN_100f96da4(&puStack_490,&uStack_7f0,0x112d50318,&UNK_10d9169e8);
  ppuVar11 = &puStack_3f0;
  func_0x000100f96dec(ppuVar11,0x112d50318,&UNK_10d9169e8);
  uVar5 = SUB81(ppuVar11,0);
  func_0x000107c5f584();
  uStack_2e8 = CONCAT17(uStack_9c1,uStack_9c8);
  uStack_2f0 = CONCAT17(uStack_9c9,uStack_9d0);
  uStack_2e0 = CONCAT17(uStack_9b9,uStack_9c0);
  uStack_2d8 = uStack_9b8;
  puStack_2c8 = puStack_9a8;
  uStack_2d0 = uStack_9b0;
  puStack_2c0 = puStack_9a0;
  uStack_328 = CONCAT17(uStack_a01,uStack_a08);
  uStack_330 = CONCAT17(uStack_a09,uStack_a10);
  uStack_318 = CONCAT17(uStack_9f1,uStack_9f8);
  uStack_320 = CONCAT17(uStack_9f9,uStack_a00);
  uStack_308 = CONCAT17(uStack_9e1,uStack_9e8);
  uStack_310 = CONCAT17(uStack_9e9,uStack_9f0);
  uStack_2f8 = CONCAT17(uStack_9d1,uStack_9d8);
  uStack_300 = CONCAT17(uStack_9d9,uStack_9e0);
  uStack_348 = CONCAT17(uStack_a21,uStack_a28);
  uStack_350 = CONCAT17(uStack_a29,uStack_a30);
  uStack_338 = CONCAT17(uStack_a11,uStack_a18);
  uVar14 = CONCAT17(uStack_a19,uStack_a20);
  uStack_290 = 0;
  uVar16 = 0x4030000000000000;
  uStack_340 = uVar14;
  uStack_2b8 = uVar4;
  uStack_2b0 = uVar15;
  puStack_2a8 = puVar10;
  uStack_2a0 = uVar17;
  uStack_298 = uVar19;
  func_0x000107c5f280();
  puStack_818 = puStack_2a8;
  uStack_820 = uStack_2b0;
  uStack_808 = uStack_298;
  uStack_810 = uStack_2a0;
  uStack_800 = uStack_290;
  uStack_858 = uStack_2e8;
  uStack_860 = uStack_2f0;
  uStack_848 = uStack_2d8;
  uStack_850 = uStack_2e0;
  uStack_828 = CONCAT71(uStack_2b7,uStack_2b8);
  puStack_838 = puStack_2c8;
  uStack_840 = uStack_2d0;
  puStack_830 = puStack_2c0;
  uStack_898 = uStack_328;
  uStack_8a0 = uStack_330;
  uStack_888 = uStack_318;
  uStack_890 = uStack_320;
  uStack_878 = uStack_308;
  uStack_880 = uStack_310;
  uStack_868 = uStack_2f8;
  uStack_870 = uStack_300;
  uStack_8b8 = uStack_348;
  uStack_8c0 = uStack_350;
  uStack_8a8 = uStack_338;
  uStack_8b0 = uStack_340;
  uStack_218 = CONCAT17(uStack_9c1,uStack_9c8);
  uStack_220 = CONCAT17(uStack_9c9,uStack_9d0);
  uStack_210 = CONCAT17(uStack_9b9,uStack_9c0);
  uStack_208 = uStack_9b8;
  puStack_1f8 = puStack_9a8;
  uStack_200 = uStack_9b0;
  puStack_1f0 = puStack_9a0;
  uStack_258 = CONCAT17(uStack_a01,uStack_a08);
  uStack_260 = CONCAT17(uStack_a09,uStack_a10);
  uStack_248 = CONCAT17(uStack_9f1,uStack_9f8);
  uStack_250 = CONCAT17(uStack_9f9,uStack_a00);
  uStack_238 = CONCAT17(uStack_9e1,uStack_9e8);
  uStack_240 = CONCAT17(uStack_9e9,uStack_9f0);
  uStack_228 = CONCAT17(uStack_9d1,uStack_9d8);
  uStack_230 = CONCAT17(uStack_9d9,uStack_9e0);
  uStack_278 = CONCAT17(uStack_a21,uStack_a28);
  uStack_280 = CONCAT17(uStack_a29,uStack_a30);
  uStack_268 = CONCAT17(uStack_a11,uStack_a18);
  uStack_270 = CONCAT17(uStack_a19,uStack_a20);
  uStack_1c0 = 0;
  uStack_1e8 = uVar4;
  uStack_1e0 = uVar15;
  puStack_1d8 = puVar10;
  uStack_1d0 = uVar17;
  uStack_1c8 = uVar19;
  FUN_100f96da4(&uStack_350,&uStack_7f0,0x112d50308,&UNK_10d9169e0);
  func_0x000100f96dec(&uStack_280,0x112d50308,&UNK_10d9169e0);
  func_0x000107c5f7ac();
  uStack_118 = uStack_828;
  puStack_120 = puStack_830;
  puStack_108 = puStack_818;
  uStack_110 = uStack_820;
  uStack_f8 = uStack_808;
  uStack_100 = uStack_810;
  uStack_158 = uStack_868;
  uStack_160 = uStack_870;
  uStack_148 = uStack_858;
  uStack_150 = uStack_860;
  uStack_138 = uStack_848;
  uStack_140 = uStack_850;
  puStack_128 = puStack_838;
  uStack_130 = uStack_840;
  uStack_188 = uStack_898;
  uStack_190 = uStack_8a0;
  uStack_f0 = CONCAT71(uStack_7ff,uStack_800);
  uStack_178 = uStack_888;
  uStack_180 = uStack_890;
  uStack_168 = uStack_878;
  uStack_170 = uStack_880;
  uStack_1a8 = uStack_8b8;
  uStack_1b0 = uStack_8c0;
  uStack_198 = uStack_8a8;
  uStack_1a0 = uStack_8b0;
  uStack_c0 = 0;
  uStack_e8 = uVar5;
  uStack_e0 = uVar16;
  uStack_d8 = uVar14;
  uStack_d0 = uVar18;
  uStack_c8 = uVar20;
  func_0x000107c5f388(auStack_6f8,0,1,0,1,0x7ff0000000000000,0,0,1,0,1);
  func_0x000107c61170(puVar6);
  func_0x000107c61574(puVar7);
  func_0x000107c6142c(param_3);
  uStack_728 = CONCAT71(uStack_e7,uStack_e8);
  uStack_730 = uStack_f0;
  uStack_718 = uStack_d8;
  uStack_720 = uStack_e0;
  uStack_708 = uStack_c8;
  uStack_710 = uStack_d0;
  uStack_700 = uStack_c0;
  puStack_768 = puStack_128;
  uStack_770 = uStack_130;
  uStack_758 = uStack_118;
  puStack_760 = puStack_120;
  puStack_748 = puStack_108;
  uStack_750 = uStack_110;
  uStack_738 = uStack_f8;
  uStack_740 = uStack_100;
  uStack_7a8 = uStack_168;
  uStack_7b0 = uStack_170;
  uStack_798 = uStack_158;
  uStack_7a0 = uStack_160;
  uStack_788 = uStack_148;
  uStack_790 = uStack_150;
  uStack_778 = uStack_138;
  uStack_780 = uStack_140;
  uStack_7e8 = uStack_1a8;
  uStack_7f0 = uStack_1b0;
  uStack_7d8 = uStack_198;
  uStack_7e0 = uStack_1a0;
  uStack_7c8 = uStack_188;
  uStack_7d0 = uStack_190;
  uStack_7b8 = uStack_178;
  uStack_7c0 = uStack_180;
  puStack_bf8 = puStack_818;
  uStack_c00 = uStack_820;
  uStack_be8 = uStack_808;
  uStack_bf0 = uStack_810;
  uStack_be0 = CONCAT71(uStack_7ff,uStack_800);
  uStack_c38 = uStack_858;
  uStack_c40 = uStack_860;
  uStack_c28 = uStack_848;
  uStack_c30 = uStack_850;
  puStack_c18 = puStack_838;
  uStack_c20 = uStack_840;
  uStack_c08 = uStack_828;
  puStack_c10 = puStack_830;
  uStack_c78 = uStack_898;
  uStack_c80 = uStack_8a0;
  uStack_c68 = uStack_888;
  uStack_c70 = uStack_890;
  uStack_c58 = uStack_878;
  uStack_c60 = uStack_880;
  uStack_c48 = uStack_868;
  uStack_c50 = uStack_870;
  uStack_c98 = uStack_8b8;
  uStack_ca0 = uStack_8c0;
  uStack_c88 = uStack_8a8;
  uStack_c90 = uStack_8b0;
  uStack_bb0 = 0;
  uStack_bd8 = uVar5;
  uStack_bd0 = uVar16;
  uStack_bc8 = uVar14;
  uStack_bc0 = uVar18;
  uStack_bb8 = uVar20;
  FUN_100f96da4(&uStack_1b0,&uStack_a30,0x112d502f8,&UNK_10d9169d8);
  func_0x000100f96dec(&uStack_ca0,0x112d502f8,&UNK_10d9169d8);
  lVar12 = 0x112d502d0;
  func_0x0001000285a8(0x112d502d0,&UNK_10d9169c8);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar12 + 0x24));
  lVar12 = 0x112d4f648;
  func_0x0001000285a8(0x112d4f648,&UNK_10d9158b0);
  iVar3 = *(int *)(lVar12 + 0x34);
  uVar2 = *(undefined4 *)PTR___s7SwiftUI18RoundedCornerStyleO10continuousyA2CmFWC_110348d50;
  lVar13 = 0;
  func_0x000107c5f41c();
  (**(code **)(*(long *)(lVar13 + -8) + 0x68))((long)puVar1 + (long)iVar3,uVar2,lVar13);
  func_0x000107c610b4(&puStack_ba0,&uStack_7f0,0x168);
  *puVar1 = puVar9;
  *(undefined2 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x38)) = 0x100;
  func_0x000107c610b4(param_1,&uStack_7f0,0x168);
  func_0x000107c610b4(&uStack_a30,&uStack_7f0,0x168);
  FUN_100f96da4(&puStack_ba0,auStack_e08,0x112d502e8,&UNK_10d9169d0);
  func_0x000100f96dec(&uStack_a30,0x112d502e8,&UNK_10d9169d0);
  return;
}


