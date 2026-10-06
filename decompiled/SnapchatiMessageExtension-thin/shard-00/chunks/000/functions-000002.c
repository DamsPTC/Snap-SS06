/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10001b400; end: 10001bf2b;  */

void FUN_10001b400(long param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined **ppuStack_f8;
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
  undefined1 uStack_70;
  
  lVar4 = 0;
  func_0x00010001ab78();
  uVar15 = *param_2;
  __s7SwiftUI11StateObjectV12wrappedValuexvg
            (uVar15,param_2[1],*(undefined1 *)(param_2 + 2),*(undefined8 *)(lVar4 + 0x10),
             *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x18) + 8) + 8));
  lVar14 = *(long *)(param_4 + 8);
  uVar16 = param_3;
  (**(code **)(lVar14 + 0x48))(param_3,lVar14);
  _swift_unknownObjectRelease(uVar15);
  uVar15 = uVar16;
  FUN_10001c44c();
  _swift_bridgeObjectRelease(uVar16);
  puVar5 = &UNK_10001fd98;
  uStack_110 = uVar15;
  _swift_getKeyPath();
  uStack_78 = param_2[1];
  uStack_80 = *param_2;
  uStack_70 = *(undefined1 *)(param_2 + 2);
  uStack_88 = param_2[4];
  uStack_90 = param_2[3];
  uStack_98 = param_2[5];
  puVar6 = &UNK_1000251b8;
  _swift_allocObject(&UNK_1000251b8,0x50,7);
  *(undefined8 *)(puVar6 + 0x10) = param_3;
  *(long *)(puVar6 + 0x18) = param_4;
  uVar15 = *param_2;
  uVar17 = param_2[3];
  uVar16 = param_2[2];
  *(undefined8 *)(puVar6 + 0x28) = param_2[1];
  *(undefined8 *)(puVar6 + 0x20) = uVar15;
  *(undefined8 *)(puVar6 + 0x38) = uVar17;
  *(undefined8 *)(puVar6 + 0x30) = uVar16;
  uVar15 = param_2[4];
  *(undefined8 *)(puVar6 + 0x48) = param_2[5];
  *(undefined8 *)(puVar6 + 0x40) = uVar15;
  puVar7 = &UNK_1000251e0;
  _swift_allocObject(&UNK_1000251e0,0x20,7);
  *(code **)(puVar7 + 0x10) = FUN_10001c728;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  lVar4 = 0;
  __s7SwiftUI11StateObjectVMa(0,param_3,*(undefined8 *)(lVar14 + 8));
  (**(code **)(*(long *)(lVar4 + -8) + 0x10))(&puStack_108,&uStack_80,lVar4);
  func_0x00010001c198(&uStack_90,&puStack_108,0x100028a20,&UNK_10001fca8);
  func_0x00010001c198(&uStack_98,&puStack_108,0x100028a28,&UNK_10001fcb0);
  uVar15 = 0x100028b28;
  FUN_100010b54(0x100028b28,&UNK_10001fdd0);
  uVar16 = 0x100028b30;
  FUN_100010b54(0x100028b30,&UNK_10001fdd8);
  uVar17 = 0x100028b38;
  FUN_10001c7b8(0x100028b38,0x100028b28,&UNK_10001fdd0,PTR___sSayxGSksMc_1000247d0);
  puVar6 = (undefined *)0x100028af0;
  func_0x000100015340(0x100028af0,&UNK_10001fd78);
  uVar8 = 0x100028af8;
  func_0x000100015340(0x100028af8,&UNK_10001fd80);
  uVar9 = 0x100028b00;
  func_0x000100015340(0x100028b00,&UNK_10001fd88);
  uVar10 = uVar9;
  FUN_10001c40c();
  puVar2 = PTR___s7SwiftUI13_EndedGestureVyxGAA0D0AAMc_1000240e8;
  uVar11 = 0x100028b10;
  FUN_10001c7b8(0x100028b10,0x100028b00,&UNK_10001fd88,
                PTR___s7SwiftUI13_EndedGestureVyxGAA0D0AAMc_1000240e8);
  puVar3 = 
  PTR___s7SwiftUI4ViewPAAE19simultaneousGesture_9includingQrqd___AA0E4MaskVtAA0E0Rd__lFQOMQ_1000242d0
  ;
  puStack_108 = &UNK_100024e50;
  ppuVar12 = &puStack_108;
  uStack_100 = uVar9;
  ppuStack_f8 = (undefined **)uVar10;
  uStack_f0 = uVar11;
  _swift_getOpaqueTypeConformance
            (ppuVar12,
             PTR___s7SwiftUI4ViewPAAE19simultaneousGesture_9includingQrqd___AA0E4MaskVtAA0E0Rd__lFQOMQ_1000242d0
             ,1);
  uVar9 = 0x100028b18;
  FUN_10001c7b8(0x100028b18,0x100028af8,&UNK_10001fd80,puVar2);
  ppuVar13 = &puStack_108;
  puStack_108 = puVar6;
  uStack_100 = uVar8;
  ppuStack_f8 = ppuVar12;
  uStack_f0 = uVar9;
  _swift_getOpaqueTypeConformance(ppuVar13,puVar3,1);
  __s7SwiftUI7ForEachVA2A4ViewR0_rlE_2id7contentACyxq_q0_Gx_s7KeyPathCy7ElementQzq_Gq0_AKctcfC
            (param_1,&uStack_110,puVar5,FUN_10001c758,puVar7,uVar15,uVar16,uVar17,
             PTR___sSSSHsWP_1000247c0,ppuVar13);
  __s7SwiftUI9AlignmentV6centerACvgZ();
  __s7SwiftUI16_FlexFrameLayoutV8minWidth05idealG003maxG00F6Height0hJ00iJ09alignmentAC12CoreGraphics7CGFloatVSg_A5nA9AlignmentVtcfC
            (&puStack_108,0,1,0,1,0x4079000000000000,0,0,1,0,1);
  lVar4 = 0x100028ad0;
  FUN_100010b54(0x100028ad0,&UNK_10001fd68);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar4 + 0x24));
  puVar1[9] = uStack_c0;
  puVar1[8] = uStack_c8;
  puVar1[0xb] = uStack_b0;
  puVar1[10] = uStack_b8;
  puVar1[0xd] = uStack_a0;
  puVar1[0xc] = uStack_a8;
  puVar1[1] = uStack_100;
  *puVar1 = puStack_108;
  puVar1[3] = uStack_f0;
  puVar1[2] = ppuStack_f8;
  puVar1[5] = uStack_e0;
  puVar1[4] = uStack_e8;
  puVar1[7] = uStack_d0;
  puVar1[6] = uStack_d8;
  return;
}



/* Entry: 10001bf2c; end: 10001c043;  */

void FUN_10001bf2c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = 0;
  func_0x00010001ab78(0,param_4,param_5);
  uVar2 = *param_1;
  __s7SwiftUI11StateObjectV12wrappedValuexvg
            (uVar2,param_1[1],*(undefined1 *)(param_1 + 2),*(undefined8 *)(lVar1 + 0x10),
             *(undefined8 *)(*(long *)(*(long *)(lVar1 + 0x18) + 8) + 8));
  (**(code **)(param_5 + 0x30))(param_2,param_3,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010001ee80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_100024940)(uVar2);
  return;
}



/* Entry: 10001c044; end: 10001c0f7;  */

void FUN_10001c044(undefined8 param_1)

{
  __s7SwiftUI9AnimationV7defaultACvgZ();
  __s7SwiftUI13withAnimationyxAA0D0VSg_xyKXEtKlF();
  _swift_release(param_1);
  return;
}



/* Entry: 10001c0f8; end: 10001c21f;  */

void FUN_10001c0f8(undefined8 param_1)

{
  __s7SwiftUI15ScrollViewProxyVMa();
  __s7SwiftUI9AnimationV7defaultACvgZ(param_1);
  __s7SwiftUI13withAnimationyxAA0D0VSg_xyKXEtKlF();
  _swift_release(param_1);
  return;
}



/* Entry: 10001c220; end: 10001c22b;  */

void FUN_10001c220(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined8 *puVar14;
  long unaff_x20;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined **ppuStack_f8;
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
  undefined1 uStack_70;
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar7 = *(long *)(unaff_x20 + 0x18);
  puVar14 = *(undefined8 **)(unaff_x20 + 0x20);
  lVar3 = 0;
  func_0x00010001ab78();
  uVar15 = *puVar14;
  __s7SwiftUI11StateObjectV12wrappedValuexvg
            (uVar15,puVar14[1],*(undefined1 *)(puVar14 + 2),*(undefined8 *)(lVar3 + 0x10),
             *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x18) + 8) + 8));
  lVar3 = *(long *)(lVar7 + 8);
  uVar16 = uVar8;
  (**(code **)(lVar3 + 0x48))(uVar8,lVar3);
  _swift_unknownObjectRelease(uVar15);
  uVar15 = uVar16;
  FUN_10001c44c();
  _swift_bridgeObjectRelease(uVar16);
  puVar4 = &UNK_10001fd98;
  uStack_110 = uVar15;
  _swift_getKeyPath();
  uStack_78 = puVar14[1];
  uStack_80 = *puVar14;
  uStack_70 = *(undefined1 *)(puVar14 + 2);
  uStack_88 = puVar14[4];
  uStack_90 = puVar14[3];
  uStack_98 = puVar14[5];
  puVar5 = &UNK_1000251b8;
  _swift_allocObject(&UNK_1000251b8,0x50,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar8;
  *(long *)(puVar5 + 0x18) = lVar7;
  uVar15 = *puVar14;
  uVar17 = puVar14[3];
  uVar16 = puVar14[2];
  *(undefined8 *)(puVar5 + 0x28) = puVar14[1];
  *(undefined8 *)(puVar5 + 0x20) = uVar15;
  *(undefined8 *)(puVar5 + 0x38) = uVar17;
  *(undefined8 *)(puVar5 + 0x30) = uVar16;
  uVar15 = puVar14[4];
  *(undefined8 *)(puVar5 + 0x48) = puVar14[5];
  *(undefined8 *)(puVar5 + 0x40) = uVar15;
  puVar6 = &UNK_1000251e0;
  _swift_allocObject(&UNK_1000251e0,0x20,7);
  *(code **)(puVar6 + 0x10) = FUN_10001c728;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  lVar7 = 0;
  __s7SwiftUI11StateObjectVMa(0,uVar8,*(undefined8 *)(lVar3 + 8));
  (**(code **)(*(long *)(lVar7 + -8) + 0x10))(&puStack_108,&uStack_80,lVar7);
  func_0x00010001c198(&uStack_90,&puStack_108,0x100028a20,&UNK_10001fca8);
  func_0x00010001c198(&uStack_98,&puStack_108,0x100028a28,&UNK_10001fcb0);
  uVar15 = 0x100028b28;
  FUN_100010b54(0x100028b28,&UNK_10001fdd0);
  uVar8 = 0x100028b30;
  FUN_100010b54(0x100028b30,&UNK_10001fdd8);
  uVar16 = 0x100028b38;
  FUN_10001c7b8(0x100028b38,0x100028b28,&UNK_10001fdd0,PTR___sSayxGSksMc_1000247d0);
  puVar5 = (undefined *)0x100028af0;
  func_0x000100015340(0x100028af0,&UNK_10001fd78);
  uVar17 = 0x100028af8;
  func_0x000100015340(0x100028af8,&UNK_10001fd80);
  uVar9 = 0x100028b00;
  func_0x000100015340(0x100028b00,&UNK_10001fd88);
  uVar10 = uVar9;
  FUN_10001c40c();
  puVar1 = PTR___s7SwiftUI13_EndedGestureVyxGAA0D0AAMc_1000240e8;
  uVar11 = 0x100028b10;
  FUN_10001c7b8(0x100028b10,0x100028b00,&UNK_10001fd88,
                PTR___s7SwiftUI13_EndedGestureVyxGAA0D0AAMc_1000240e8);
  puVar2 = 
  PTR___s7SwiftUI4ViewPAAE19simultaneousGesture_9includingQrqd___AA0E4MaskVtAA0E0Rd__lFQOMQ_1000242d0
  ;
  puStack_108 = &UNK_100024e50;
  ppuVar12 = &puStack_108;
  uStack_100 = uVar9;
  ppuStack_f8 = (undefined **)uVar10;
  uStack_f0 = uVar11;
  _swift_getOpaqueTypeConformance
            (ppuVar12,
             PTR___s7SwiftUI4ViewPAAE19simultaneousGesture_9includingQrqd___AA0E4MaskVtAA0E0Rd__lFQOMQ_1000242d0
             ,1);
  uVar9 = 0x100028b18;
  FUN_10001c7b8(0x100028b18,0x100028af8,&UNK_10001fd80,puVar1);
  ppuVar13 = &puStack_108;
  puStack_108 = puVar5;
  uStack_100 = uVar17;
  ppuStack_f8 = ppuVar12;
  uStack_f0 = uVar9;
  _swift_getOpaqueTypeConformance(ppuVar13,puVar2,1);
  __s7SwiftUI7ForEachVA2A4ViewR0_rlE_2id7contentACyxq_q0_Gx_s7KeyPathCy7ElementQzq_Gq0_AKctcfC
            (param_1,&uStack_110,puVar4,FUN_10001c758,puVar6,uVar15,uVar8,uVar16,
             PTR___sSSSHsWP_1000247c0,ppuVar13);
  __s7SwiftUI9AlignmentV6centerACvgZ();
  __s7SwiftUI16_FlexFrameLayoutV8minWidth05idealG003maxG00F6Height0hJ00iJ09alignmentAC12CoreGraphics7CGFloatVSg_A5nA9AlignmentVtcfC
            (&puStack_108,0,1,0,1,0x4079000000000000,0,0,1,0,1);
  lVar7 = 0x100028ad0;
  FUN_100010b54(0x100028ad0,&UNK_10001fd68);
  puVar14 = (undefined8 *)(param_1 + *(int *)(lVar7 + 0x24));
  puVar14[9] = uStack_c0;
  puVar14[8] = uStack_c8;
  puVar14[0xb] = uStack_b0;
  puVar14[10] = uStack_b8;
  puVar14[0xd] = uStack_a0;
  puVar14[0xc] = uStack_a8;
  puVar14[1] = uStack_100;
  *puVar14 = puStack_108;
  puVar14[3] = uStack_f0;
  puVar14[2] = ppuStack_f8;
  puVar14[5] = uStack_e0;
  puVar14[4] = uStack_e8;
  puVar14[7] = uStack_d0;
  puVar14[6] = uStack_d8;
  return;
}



/* Entry: 10001c22c; end: 10001c2a3;  */

void FUN_10001c22c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  if (puRam0000000100028ad8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x100028ad0;
  func_0x000100015340(0x100028ad0,&UNK_10001fd68);
  uVar2 = uVar1;
  FUN_10001c2a4();
  puStack_28 = PTR___s7SwiftUI16_FlexFrameLayoutVAA12ViewModifierAAWP_1000241c0;
  puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_100024160;
  uStack_30 = uVar2;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_100024160,uVar1,
             &uStack_30);
  puRam0000000100028ad8 = puVar3;
  return;
}



/* Entry: 10001c2a4; end: 10001c40b;  */

void FUN_10001c2a4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  
  if (puRam0000000100028ae0 != (undefined *)0x0) {
    return;
  }
  uVar3 = 0x100028ae8;
  func_0x000100015340(0x100028ae8,&UNK_10001fd70);
  puVar4 = (undefined *)0x100028af0;
  func_0x000100015340(0x100028af0,&UNK_10001fd78);
  uVar5 = 0x100028af8;
  func_0x000100015340(0x100028af8,&UNK_10001fd80);
  uVar6 = 0x100028b00;
  func_0x000100015340(0x100028b00,&UNK_10001fd88);
  uVar7 = uVar6;
  FUN_10001c40c();
  puVar1 = PTR___s7SwiftUI13_EndedGestureVyxGAA0D0AAMc_1000240e8;
  uVar8 = 0x100028b10;
  FUN_10001c7b8(0x100028b10,0x100028b00,&UNK_10001fd88,
                PTR___s7SwiftUI13_EndedGestureVyxGAA0D0AAMc_1000240e8);
  puVar2 = 
  PTR___s7SwiftUI4ViewPAAE19simultaneousGesture_9includingQrqd___AA0E4MaskVtAA0E0Rd__lFQOMQ_1000242d0
  ;
  puStack_80 = &UNK_100024e50;
  ppuVar9 = &puStack_80;
  uStack_78 = uVar6;
  ppuStack_70 = (undefined **)uVar7;
  uStack_68 = uVar8;
  _swift_getOpaqueTypeConformance
            (ppuVar9,
             PTR___s7SwiftUI4ViewPAAE19simultaneousGesture_9includingQrqd___AA0E4MaskVtAA0E0Rd__lFQOMQ_1000242d0
             ,1);
  uVar6 = 0x100028b18;
  FUN_10001c7b8(0x100028b18,0x100028af8,&UNK_10001fd80,puVar1);
  ppuVar10 = &puStack_80;
  puStack_80 = puVar4;
  uStack_78 = uVar5;
  ppuStack_70 = ppuVar9;
  uStack_68 = uVar6;
  _swift_getOpaqueTypeConformance(ppuVar10,puVar2,1);
  puVar4 = PTR___s7SwiftUI7ForEachVyxq_q0_GAA4ViewA2aER0_rlMc_100024348;
  ppuStack_88 = ppuVar10;
  _swift_getWitnessTable
            (PTR___s7SwiftUI7ForEachVyxq_q0_GAA4ViewA2aER0_rlMc_100024348,uVar3,&ppuStack_88);
  puRam0000000100028ae0 = puVar4;
  return;
}



/* Entry: 10001c40c; end: 10001c44b;  */

void FUN_10001c40c(void)

{
  undefined *puVar1;
  
  if (puRam0000000100028b08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10001fa1c;
  _swift_getWitnessTable(&UNK_10001fa1c,&UNK_100024e50);
  puRam0000000100028b08 = puVar1;
  return;
}



/* Entry: 10001c44c; end: 10001c6e3;  */

undefined * FUN_10001c44c(long param_1)

{
  undefined *puVar1;
  int iVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long extraout_x8;
  ulong uVar8;
  ulong uVar9;
  long extraout_x12;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  long alStack_90 [4];
  long lStack_70;
  long lStack_68;
  
  lVar4 = 0x100028b40;
  FUN_100010b54(0x100028b40,&UNK_10001fde0);
  lVar12 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100024410)(*(undefined8 *)(lVar12 + 0x40));
  plVar11 = (long *)((long)alStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100024410)();
  puVar14 = PTR___swiftEmptyArrayStorage_100024840;
  lVar13 = (long)plVar11 - extraout_x12;
  lStack_68 = *(long *)(param_1 + 0x10);
  if (lStack_68 == 0) {
    lVar15 = 0;
  }
  else {
    alStack_90[2] = (long)*(byte *)(lVar12 + 0x50);
    alStack_90[3] = alStack_90[2] + 0x20U & (alStack_90[2] ^ 0xffffffffffffffffU);
    puVar7 = PTR___swiftEmptyArrayStorage_100024840 + alStack_90[3];
    lVar5 = 0;
    __s23ExtensionsStickerPicker09ExtensionB0VMa();
    lVar10 = 0;
    lVar15 = 0;
    uVar8 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
    param_1 = param_1 + (uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff));
    lStack_70 = *(long *)(*(long *)(lVar5 + -8) + 0x48);
    alStack_90[0] = lVar13;
    alStack_90[1] = lVar12;
    do {
      iVar2 = *(int *)(lVar4 + 0x30);
      *plVar11 = lVar10;
      FUN_10001c8cc(param_1,(long)plVar11 + (long)iVar2,
                    PTR___s23ExtensionsStickerPicker09ExtensionB0VMa_1000244d8);
      func_0x00010001cae4(plVar11,lVar13);
      if (lVar15 == 0) {
        uVar8 = *(ulong *)(puVar14 + 0x18);
        if ((long)((uVar8 >> 1) + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10001c6d8);
          (*pcVar3)();
        }
        uVar9 = uVar8 & 0xfffffffffffffffe;
        if ((long)uVar8 < 2) {
          uVar9 = 1;
        }
        puVar6 = (undefined *)0x100028b50;
        FUN_100010b54(0x100028b50,&UNK_10001fde8);
        lVar13 = alStack_90[3];
        lVar12 = *(long *)(lVar12 + 0x48);
        _swift_allocObject();
        puVar7 = puVar6;
        _malloc_size();
        if (lVar12 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10001c6dc);
          (*pcVar3)();
        }
        lVar15 = (long)puVar7 - lVar13;
        if (lVar15 == -0x8000000000000000 && lVar12 == -1) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10001c6e0);
          (*pcVar3)();
        }
        uVar8 = 0;
        if (lVar12 != 0) {
          uVar8 = lVar15 / lVar12;
        }
        *(ulong *)(puVar6 + 0x10) = uVar9;
        *(ulong *)(puVar6 + 0x18) = uVar8 << 1;
        puVar7 = puVar6 + lVar13;
        uVar9 = *(ulong *)(puVar14 + 0x18) >> 1;
        if (*(long *)(puVar14 + 0x10) != 0) {
          puVar1 = puVar14 + alStack_90[3];
          if (puVar6 < puVar14 || puVar1 + uVar9 * lVar12 <= puVar7) {
            _swift_arrayInitWithTakeFrontToBack(puVar7,puVar1,uVar9,lVar4);
          }
          else if (puVar6 != puVar14) {
            _swift_arrayInitWithTakeBackToFront(puVar7,puVar1,uVar9,lVar4);
          }
          *(undefined8 *)(puVar14 + 0x10) = 0;
        }
        puVar7 = puVar7 + uVar9 * lVar12;
        lVar15 = (uVar8 & 0x7fffffffffffffff) - uVar9;
        _swift_release(puVar14);
        puVar14 = puVar6;
        lVar13 = alStack_90[0];
        lVar12 = alStack_90[1];
      }
      if (SBORROW8(lVar15,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10001c6d4);
        (*pcVar3)();
      }
      lVar15 = lVar15 + -1;
      lVar10 = lVar10 + 1;
      func_0x00010001cae4(lVar13,puVar7);
      puVar7 = puVar7 + *(long *)(lVar12 + 0x48);
      param_1 = param_1 + lStack_70;
    } while (lStack_68 != lVar10);
  }
  if (1 < *(ulong *)(puVar14 + 0x18)) {
    uVar8 = *(ulong *)(puVar14 + 0x18) >> 1;
    if (SBORROW8(uVar8,lVar15)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10001c6e4);
      (*pcVar3)();
    }
    *(ulong *)(puVar14 + 0x10) = uVar8 - lVar15;
  }
  return puVar14;
}



/* Entry: 10001c6e4; end: 10001c6ef;  */

void FUN_10001c6e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010001ed48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_100024888)();
  return;
}



/* Entry: 10001c6f0; end: 10001c727;  */

void FUN_10001c6f0(void)

{
  long unaff_x20;
  
  FUN_10001a94c(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined1 *)(unaff_x20 + 0x30));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010001ed78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000248a8)();
  return;
}



/* Entry: 10001c728; end: 10001c733;  */

void FUN_10001c728(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  code **ppcVar10;
  long extraout_x8;
  long extraout_x8_00;
  long lVar11;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  ulong uVar12;
  long extraout_x12;
  ulong uVar13;
  long unaff_x20;
  long lVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auStack_1b0 [8];
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  long lStack_188;
  undefined8 *puStack_180;
  code *pcStack_178;
  ulong uStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  undefined1 *puStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [24];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  
  uVar17 = *(undefined8 *)(unaff_x20 + 0x10);
  lStack_d8 = *(long *)(unaff_x20 + 0x18);
  puVar1 = (undefined8 *)(unaff_x20 + 0x20);
  lVar2 = 0;
  uStack_108 = param_1;
  uStack_e0 = param_2;
  __s7SwiftUI16LongPressGestureVMa();
  lStack_120 = *(long *)(lVar2 + -8);
  lStack_128 = lVar2;
  (*(code *)PTR____chkstk_darwin_100024410)(*(undefined8 *)(lStack_120 + 0x40));
  lVar2 = 0x100028af8;
  puStack_148 = auStack_1b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_100010b54(0x100028af8,&UNK_10001fd80);
  lStack_110 = *(long *)(lVar2 + -8);
  lStack_118 = lVar2;
  (*(code *)PTR____chkstk_darwin_100024410)
            (*(long *)(lStack_110 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = (long)(auStack_1b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  lVar3 = 0;
  lStack_130 = lVar11;
  __s23ExtensionsStickerPicker09ExtensionB0VMa();
  uStack_170 = *(long *)(lVar3 + -8);
  pcStack_178 = *(code **)(uStack_170 + 0x40);
  (*(code *)PTR____chkstk_darwin_100024410)();
  lVar11 = lVar11 - (extraout_x12 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  lStack_f8 = lVar11;
  __s7SwiftUI10TapGestureVMa();
  lStack_158 = *(long *)(lVar2 + -8);
  lStack_160 = lVar2;
  (*(code *)PTR____chkstk_darwin_100024410)(*(undefined8 *)(lStack_158 + 0x40));
  lVar11 = lVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x100028b00;
  lStack_188 = lVar11;
  FUN_100010b54(0x100028b00,&UNK_10001fd88);
  lStack_150 = *(long *)(lVar2 + -8);
  lStack_f0 = lVar2;
  (*(code *)PTR____chkstk_darwin_100024410)
            (*(long *)(lStack_150 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = lVar11 - extraout_x8_02;
  lVar4 = 0;
  lStack_168 = lVar11;
  __s10Foundation3URLVMa();
  lVar14 = *(long *)(lVar4 + -8);
  lVar15 = *(long *)(lVar14 + 0x40);
  (*(code *)PTR____chkstk_darwin_100024410)();
  lVar11 = lVar11 - (lVar15 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x100028af0;
  FUN_100010b54(0x100028af0,&UNK_10001fd78);
  lStack_138 = *(long *)(lVar2 + -8);
  lStack_140 = lVar2;
  (*(code *)PTR____chkstk_darwin_100024410)
            (*(long *)(lStack_138 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = lStack_d8;
  lStack_e8 = lVar11 - extraout_x8_03;
  lStack_1a8 = (long)*(int *)(lVar3 + 0x1c);
  uStack_198 = *param_3;
  uVar5 = param_3[1];
  lVar3 = 0;
  uStack_1a0 = uVar5;
  uStack_100 = uVar17;
  func_0x00010001ab78(0,uVar17,lStack_d8);
  _swift_bridgeObjectRetain(uVar5);
  uVar5 = *puVar1;
  __s7SwiftUI11StateObjectV12wrappedValuexvg
            (uVar5,*(undefined8 *)(unaff_x20 + 0x28),*(undefined1 *)(unaff_x20 + 0x30),
             *(undefined8 *)(lVar3 + 0x10),
             *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x18) + 8) + 8));
  lStack_190 = *(long *)(lVar2 + 8);
  (**(code **)(lStack_190 + 0x58))();
  _swift_unknownObjectRelease(uVar5);
  puStack_180 = param_3;
  (**(code **)(lVar14 + 0x10))(lVar11,(long)param_3 + lStack_1a8,lVar4);
  uVar12 = (ulong)*(byte *)(lVar14 + 0x50);
  uVar13 = uVar12 + 0x10 & (uVar12 ^ 0xffffffffffffffff);
  uVar16 = lVar15 + uVar13 + 7 & 0xfffffffffffffff8;
  puVar6 = &UNK_100025208;
  _swift_allocObject(&UNK_100025208,uVar16 + 0x18,uVar12 | 7);
  (**(code **)(lVar14 + 0x20))(puVar6 + uVar13,lVar11,lVar4);
  lVar2 = lStack_188;
  *(undefined8 *)(puVar6 + uVar16) = uStack_198;
  *(undefined8 *)((long)(puVar6 + uVar16) + 8) = uStack_1a0;
  *(undefined8 *)(puVar6 + uVar16 + 0x10) = uVar17;
  pcStack_d0 = FUN_10001c87c;
  uStack_c0 = uStack_c0 & 0xffffffffffffff00;
  puStack_c8 = puVar6;
  __s7SwiftUI10TapGestureV5countACSi_tcfC(lStack_188,1);
  lVar3 = lStack_f8;
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_80 = *puVar1;
  uStack_70 = *(undefined1 *)(unaff_x20 + 0x30);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_90 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_98 = *(undefined8 *)(unaff_x20 + 0x48);
  FUN_10001c8cc(param_3,lStack_f8,PTR___s23ExtensionsStickerPicker09ExtensionB0VMa_1000244d8);
  uVar13 = (ulong)*(byte *)(uStack_170 + 0x50);
  uVar16 = uVar13 + 0x50 & (uVar13 ^ 0xffffffffffffffff);
  uVar12 = (long)pcStack_178 + uVar16 + 7 & 0xfffffffffffffff8;
  puVar7 = &UNK_100025230;
  uStack_170 = uVar16;
  _swift_allocObject(&UNK_100025230,uVar12 + 8,uVar13 | 7);
  uVar5 = uStack_100;
  *(undefined8 *)(puVar7 + 0x10) = uStack_100;
  *(long *)(puVar7 + 0x18) = lStack_d8;
  uVar17 = *puVar1;
  uVar19 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(puVar7 + 0x28) = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(puVar7 + 0x20) = uVar17;
  *(undefined8 *)(puVar7 + 0x38) = uVar19;
  *(undefined8 *)(puVar7 + 0x30) = uVar18;
  uVar17 = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined8 *)(puVar7 + 0x48) = *(undefined8 *)(unaff_x20 + 0x48);
  *(undefined8 *)(puVar7 + 0x40) = uVar17;
  FUN_100016184(lVar3,puVar7 + uVar16);
  *(undefined8 *)(puVar7 + uVar12) = uStack_e0;
  puVar8 = &UNK_100025258;
  _swift_allocObject(&UNK_100025258,0x20,7);
  *(code **)(puVar8 + 0x10) = FUN_10001c914;
  *(undefined **)(puVar8 + 0x18) = puVar7;
  lVar14 = 0;
  __s7SwiftUI11StateObjectVMa(0,uVar5,*(undefined8 *)(lStack_190 + 8));
  pcStack_178 = *(code **)(*(long *)(lVar14 + -8) + 0x10);
  (*pcStack_178)(auStack_b0,&uStack_80,lVar14);
  func_0x00010001c198(&uStack_90,auStack_b0,0x100028a20,&UNK_10001fca8);
  func_0x00010001c198(&uStack_98,auStack_b0,0x100028a28,&UNK_10001fcb0);
  lVar4 = lStack_160;
  lVar3 = lStack_168;
  __s7SwiftUI7GesturePAAE7onEndedyAA01_eC0VyxGy5ValueQzcF
            (lStack_168,FUN_10001c974,puVar8,lStack_160,
             PTR___s7SwiftUI10TapGestureVAA0D0AAWP_100024070);
  _swift_release(puVar8);
  (**(code **)(lStack_158 + 8))(lVar2,lVar4);
  __s7SwiftUI11GestureMaskV3allACvgZ();
  lVar11 = lVar2;
  FUN_10001c40c();
  uVar5 = 0x100028b10;
  FUN_10001c7b8(0x100028b10,0x100028b00,&UNK_10001fd88,
                PTR___s7SwiftUI13_EndedGestureVyxGAA0D0AAMc_1000240e8);
  lVar4 = lStack_f0;
  __s7SwiftUI4ViewPAAE19simultaneousGesture_9includingQrqd___AA0E4MaskVtAA0E0Rd__lF
            (lStack_e8,lVar3,lVar2,&UNK_100024e50,lStack_f0,lVar11);
  (**(code **)(lStack_150 + 8))(lVar3,lVar4);
  _swift_release(puVar6);
  puVar9 = puStack_148;
  __s7SwiftUI16LongPressGestureV15minimumDuration15maximumDistanceACSd_12CoreGraphics7CGFloatVtcfC
            (puStack_148,0x3fe0000000000000,0x4024000000000000);
  lVar2 = lStack_f8;
  FUN_10001c8cc(puStack_180,lStack_f8,PTR___s23ExtensionsStickerPicker09ExtensionB0VMa_1000244d8);
  puVar6 = &UNK_100025280;
  _swift_allocObject(&UNK_100025280,uVar12 + 8,uVar13 | 7);
  *(undefined8 *)(puVar6 + 0x10) = uStack_100;
  *(long *)(puVar6 + 0x18) = lStack_d8;
  uVar17 = *puVar1;
  uVar19 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(puVar6 + 0x28) = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(puVar6 + 0x20) = uVar17;
  *(undefined8 *)(puVar6 + 0x38) = uVar19;
  *(undefined8 *)(puVar6 + 0x30) = uVar18;
  uVar17 = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined8 *)(puVar6 + 0x48) = *(undefined8 *)(unaff_x20 + 0x48);
  *(undefined8 *)(puVar6 + 0x40) = uVar17;
  FUN_100016184(lVar2,puVar6 + uStack_170);
  *(undefined8 *)(puVar6 + uVar12) = uStack_e0;
  (*pcStack_178)(&pcStack_d0,&uStack_80,lVar14);
  func_0x00010001c198(&uStack_90,&pcStack_d0,0x100028a20,&UNK_10001fca8);
  func_0x00010001c198(&uStack_98,&pcStack_d0,0x100028a28,&UNK_10001fcb0);
  uVar17 = 0x100028b48;
  FUN_10001caa4(0x100028b48,PTR___s7SwiftUI16LongPressGestureVMa_100024198,
                PTR___s7SwiftUI16LongPressGestureVAA0E0AAMc_100024190);
  lVar2 = lStack_128;
  lVar3 = lStack_130;
  __s7SwiftUI7GesturePAAE7onEndedyAA01_eC0VyxGy5ValueQzcF
            (lStack_130,FUN_10001ca3c,puVar6,lStack_128,uVar17);
  _swift_release(puVar6);
  (**(code **)(lStack_120 + 8))(puVar9,lVar2);
  __s7SwiftUI11GestureMaskV3allACvgZ();
  pcStack_d0 = (code *)&UNK_100024e50;
  puStack_c8 = (undefined *)lStack_f0;
  ppcVar10 = &pcStack_d0;
  uStack_c0 = lVar11;
  uStack_b8 = uVar5;
  _swift_getOpaqueTypeConformance
            (ppcVar10,
             PTR___s7SwiftUI4ViewPAAE19simultaneousGesture_9includingQrqd___AA0E4MaskVtAA0E0Rd__lFQOMQ_1000242d0
             ,1);
  uVar5 = 0x100028b18;
  FUN_10001c7b8(0x100028b18,0x100028af8,&UNK_10001fd80,
                PTR___s7SwiftUI13_EndedGestureVyxGAA0D0AAMc_1000240e8);
  lVar11 = lStack_e8;
  lVar4 = lStack_118;
  lVar2 = lStack_140;
  __s7SwiftUI4ViewPAAE19simultaneousGesture_9includingQrqd___AA0E4MaskVtAA0E0Rd__lF
            (uStack_108,lVar3,puVar9,lStack_140,lStack_118,ppcVar10,uVar5);
  (**(code **)(lStack_110 + 8))(lVar3,lVar4);
  (**(code **)(lStack_138 + 8))(lVar11,lVar2);
  return;
}



/* Entry: 10001c734; end: 10001c757;  */

void FUN_10001c734(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010001ed78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000248a8)();
  return;
}



/* Entry: 10001c758; end: 10001c7b7;  */

void FUN_10001c758(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  uVar3 = *param_2;
  lVar2 = 0x100028b40;
  FUN_100010b54(0x100028b40,&UNK_10001fde0);
  (*pcVar1)(param_1,uVar3,(long)param_2 + (long)*(int *)(lVar2 + 0x30));
  return;
}



/* Entry: 10001c7b8; end: 10001c7fb;  */

void FUN_10001c7b8(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (*param_1 == 0) {
    func_0x000100015340(param_2,param_3);
    _swift_getWitnessTable(param_4,param_2);
    *param_1 = param_4;
  }
  return;
}



/* Entry: 10001c7fc; end: 10001c87b;  */

void FUN_10001c7fc(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x20;
  ulong uVar4;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50) + 0x10 &
          ((ulong)*(byte *)(lVar2 + 0x50) ^ 0xffffffffffffffff);
  uVar4 = *(long *)(lVar2 + 0x40) + uVar3 + 7 & 0xfffffffffffffff8;
  (**(code **)(lVar2 + 8))(unaff_x20 + uVar3,lVar1);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + uVar4 + 8));
  _swift_release(*(undefined8 *)(unaff_x20 + uVar4 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010001ed78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000248a8)();
  return;
}



/* Entry: 10001c87c; end: 10001c8cb;  */

void FUN_10001c87c(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long extraout_x8;
  ulong uVar6;
  ulong uVar7;
  long extraout_x12;
  long unaff_x20;
  
  lVar4 = 0;
  __s10Foundation3URLVMa();
  uVar6 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  uVar7 = uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff);
  uVar6 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + uVar7 + 7 & 0xfffffffffffffff8;
  puVar1 = (undefined8 *)(unaff_x20 + uVar6);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar5 = *(undefined8 *)(unaff_x20 + (uVar6 + 0x17 & 0xffffffffffffff8));
  lVar4 = 0;
  __s10Foundation3URLVMa();
  (*(code *)PTR____chkstk_darwin_100024410)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  (**(code **)(extraout_x12 + 0x10))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),unaff_x20 + uVar7
            );
  __s23ExtensionsStickerPicker0B14FetchViewModelCMa();
  _swift_allocObject();
  _swift_retain(uVar5);
  _swift_bridgeObjectRetain(uVar3);
  __s23ExtensionsStickerPicker0B14FetchViewModelC9remoteURL9stickerId0I12ImageFetcher13extensionTypeAC10Foundation0H0V_SSAA0bkL0CSgAA09ExtensionN0Otcfc
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),uVar2,uVar3,uVar5
             ,0);
  return;
}



/* Entry: 10001c8cc; end: 10001c90f;  */

undefined8 FUN_10001c8cc(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_3)();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10001c910; end: 10001c913;  */

void FUN_10001c910(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long unaff_x20;
  ulong uVar4;
  
  lVar3 = 0;
  __s23ExtensionsStickerPicker09ExtensionB0VMa();
  uVar4 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  FUN_10001a94c(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined1 *)(unaff_x20 + 0x30));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x48));
  lVar1 = unaff_x20 + (uVar4 + 0x50 & (uVar4 ^ 0xffffffffffffffff));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 8));
  iVar2 = *(int *)(lVar3 + 0x1c);
  lVar3 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar3 + -8) + 8))(lVar1 + iVar2,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010001ed78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000248a8)();
  return;
}



/* Entry: 10001c914; end: 10001c973;  */

void FUN_10001c914(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar4 = 0;
  __s23ExtensionsStickerPicker09ExtensionB0VMa();
  uVar6 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  uVar6 = uVar6 + 0x50 & (uVar6 ^ 0xffffffffffffffff);
  uVar5 = *(undefined8 *)
           (unaff_x20 + (*(long *)(*(long *)(lVar4 + -8) + 0x40) + uVar6 + 7 & 0xffffffffffffff8));
  lVar4 = 0;
  func_0x00010001ab78(0,uVar1,lVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  __s7SwiftUI11StateObjectV12wrappedValuexvg
            (uVar3,*(undefined8 *)(unaff_x20 + 0x28),*(undefined1 *)(unaff_x20 + 0x30),
             *(undefined8 *)(lVar4 + 0x10),
             *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x18) + 8) + 8));
  (**(code **)(lVar2 + 0x30))(unaff_x20 + uVar6,uVar5,uVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010001ee80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_100024940)(uVar3);
  return;
}



/* Entry: 10001c974; end: 10001c993;  */

void FUN_10001c974(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10001c994; end: 10001ca3b;  */

void FUN_10001c994(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long unaff_x20;
  ulong uVar4;
  
  lVar3 = 0;
  __s23ExtensionsStickerPicker09ExtensionB0VMa();
  uVar4 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  FUN_10001a94c(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined1 *)(unaff_x20 + 0x30));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x48));
  lVar1 = unaff_x20 + (uVar4 + 0x50 & (uVar4 ^ 0xffffffffffffffff));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 8));
  iVar2 = *(int *)(lVar3 + 0x1c);
  lVar3 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar3 + -8) + 8))(lVar1 + iVar2,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010001ed78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000248a8)();
  return;
}



/* Entry: 10001ca3c; end: 10001caa3;  */

void FUN_10001ca3c(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar4 = 0;
  __s23ExtensionsStickerPicker09ExtensionB0VMa();
  uVar6 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  uVar6 = uVar6 + 0x50 & (uVar6 ^ 0xffffffffffffffff);
  uVar5 = *(undefined8 *)
           (unaff_x20 + (*(long *)(*(long *)(lVar4 + -8) + 0x40) + uVar6 + 7 & 0xffffffffffffff8));
  lVar4 = 0;
  func_0x00010001ab78(0,uVar1,lVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  __s7SwiftUI11StateObjectV12wrappedValuexvg
            (uVar3,*(undefined8 *)(unaff_x20 + 0x28),*(undefined1 *)(unaff_x20 + 0x30),
             *(undefined8 *)(lVar4 + 0x10),
             *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x18) + 8) + 8));
  (**(code **)(lVar2 + 0x38))(unaff_x20 + uVar6,uVar5,uVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010001ee80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_100024940)(uVar3);
  return;
}



/* Entry: 10001caa4; end: 10001cb33;  */

void FUN_10001caa4(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    _swift_getWitnessTable(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 10001cb34; end: 10001cb5f;  */

void FUN_10001cb34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,param_5);
  return;
}



/* Entry: 10001cb60; end: 10001cb9f;  */

void FUN_10001cb60(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010001ed78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000248a8)();
  return;
}



/* Entry: 10001cba0; end: 10001cf97;  */

undefined1  [16] FUN_10001cba0(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffe3;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001d,0x8000000100021e90);
  uVar3 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x8000000100021e70);
  uVar4 = 0;
  __sSi10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  _SCLocalizedStringFromTable(lVar2,uVar3,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(uVar3);
  _objc_release(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(lVar5);
    _objc_release(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10001cc6c);
  (*pcVar1)();
}



/* Entry: 10001cf98; end: 10001d057;  */

undefined1  [16] FUN_10001cf98(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x6761745f6968;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6761745f6968,0xe600000000000000);
  uVar3 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x8000000100021e70);
  uVar4 = 0;
  __sSi10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  _SCLocalizedStringFromTable(lVar2,uVar3,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(uVar3);
  _objc_release(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(lVar5);
    _objc_release(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10001d108);
  (*pcVar1)();
}



/* Entry: 10001d058; end: 10001d2a3;  */

undefined1  [16] FUN_10001d058(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  uVar2 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x8000000100021e70);
  uVar3 = 0;
  __sSi10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF(0);
  lVar4 = param_1;
  uVar6 = uVar2;
  _SCLocalizedStringFromTable(param_1,uVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(uVar3);
  if (lVar4 != 0) {
    lVar5 = lVar4;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(lVar4);
    _objc_release(lVar4);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar5;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10001d108);
  (*pcVar1)();
}



/* Entry: 10001d2a4; end: 10001d2bb;  */

undefined1  [16] FUN_10001d2a4(void)

{
  return ZEXT816(0x100025370);
}



/* Entry: 10001d2bc; end: 10001d443;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10001d2bc(undefined4 param_1,undefined1 *param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uStack_40;
  uint uStack_3c;
  long lStack_38;
  
  puVar5 = &uStack_40;
  lStack_38 = *(long *)PTR____stack_chk_guard_100024420;
  iVar4 = (int)param_2;
  if (lRam0000000100029290 != -1) {
    func_0x00010001e4e4();
  }
  if (lRam0000000100029298 == 0) {
    if (lRam0000000100029288 != -1) goto LAB_10001d414;
    bVar2 = SBORROW4(iVar4,iRam0000000100029278);
    iVar1 = iVar4 - iRam0000000100029278;
    bVar3 = iVar4 == iRam0000000100029278;
    if (iVar4 < iRam0000000100029278) goto LAB_10001d3b4;
    goto LAB_10001d380;
  }
  uStack_3c = iVar4 << 0x10 | ((uint)param_3 & 0xff) << 8 | param_4 & 0xff;
  uStack_40 = param_1;
  __availability_version_check(1);
  param_2 = (undefined1 *)puVar5;
  if (*(long *)PTR____stack_chk_guard_100024420 == lStack_38) {
    return;
  }
LAB_10001d410:
  do {
    while( true ) {
      ___stack_chk_fail();
LAB_10001d414:
      func_0x00010001e4fc();
      iVar4 = (int)param_2;
      bVar2 = SBORROW4(iVar4,iRam0000000100029278);
      iVar1 = iVar4 - iRam0000000100029278;
      bVar3 = iVar4 == iRam0000000100029278;
      if (iRam0000000100029278 <= iVar4) break;
LAB_10001d3b4:
      if (*(long *)PTR____stack_chk_guard_100024420 == lStack_38) {
        return;
      }
    }
LAB_10001d380:
    if (bVar3 || iVar1 < 0 != bVar2) {
      if ((int)param_3 < iRam000000010002927c) goto LAB_10001d3b4;
      if ((int)param_3 <= iRam000000010002927c) {
        if (*(long *)PTR____stack_chk_guard_100024420 == lStack_38) {
          return;
        }
        goto LAB_10001d410;
      }
    }
    if (*(long *)PTR____stack_chk_guard_100024420 == lStack_38) {
      return;
    }
  } while( true );
}



/* Entry: 10001d444; end: 10001d44b;  */

void FUN_10001d444(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  code *pcVar9;
  code *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  undefined1 auStack_88 [32];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_100024420;
  if (puRam0000000100029298 == (undefined *)0x0) {
    if (PTR___availability_version_check_100024428 != (undefined *)0x0) {
      puRam0000000100029298 = PTR___availability_version_check_100024428;
    }
    if (puRam0000000100029298 == (undefined *)0x0) {
      puVar1 = (undefined8 *)0xfffffffffffffffe;
      _dlsym(0xfffffffffffffffe,"kCFAllocatorNull");
      if (puVar1 != (undefined8 *)0x0) {
        uVar20 = *puVar1;
        pcVar2 = (code *)0xfffffffffffffffe;
        _dlsym(0xfffffffffffffffe,"CFDataCreateWithBytesNoCopy");
        if (pcVar2 != (code *)0x0) {
          pcVar3 = (code *)0xfffffffffffffffe;
          _dlsym(0xfffffffffffffffe,"CFPropertyListCreateWithData");
          pcVar4 = (code *)0xfffffffffffffffe;
          _dlsym(0xfffffffffffffffe,"CFPropertyListCreateFromXMLData");
          if (pcVar3 != (code *)0x0 || pcVar4 != (code *)0x0) {
            pcVar5 = (code *)0xfffffffffffffffe;
            _dlsym(0xfffffffffffffffe,"CFStringCreateWithCStringNoCopy");
            if (pcVar5 != (code *)0x0) {
              pcVar6 = (code *)0xfffffffffffffffe;
              _dlsym(0xfffffffffffffffe,"CFDictionaryGetValue");
              if (pcVar6 != (code *)0x0) {
                pcVar7 = (code *)0xfffffffffffffffe;
                _dlsym(0xfffffffffffffffe,"CFGetTypeID");
                if (pcVar7 != (code *)0x0) {
                  pcVar8 = (code *)0xfffffffffffffffe;
                  _dlsym(0xfffffffffffffffe,"CFStringGetTypeID");
                  if (pcVar8 != (code *)0x0) {
                    pcVar9 = (code *)0xfffffffffffffffe;
                    _dlsym(0xfffffffffffffffe,"CFStringGetCString");
                    if (pcVar9 != (code *)0x0) {
                      pcVar10 = (code *)0xfffffffffffffffe;
                      _dlsym(0xfffffffffffffffe,"CFRelease");
                      if (pcVar10 != (code *)0x0) {
                        pcVar11 = "/System/Library/CoreServices/SystemVersion.plist";
                        _fopen("/System/Library/CoreServices/SystemVersion.plist","r");
                        if (pcVar11 != (char *)0x0) {
                          _fseek();
                          pcVar12 = pcVar11;
                          _ftell();
                          if (-1 < (long)pcVar12) {
                            _rewind(pcVar11);
                            pcVar13 = pcVar12;
                            _malloc();
                            if ((pcVar13 != (char *)0x0) &&
                               (pcVar14 = pcVar13, _fread(), pcVar14 == pcVar12)) {
                              lVar15 = 0;
                              (*pcVar2)(0,pcVar13,pcVar12,uVar20);
                              if (lVar15 != 0) {
                                lVar16 = 0;
                                if (pcVar3 == (code *)0x0) {
                                  (*pcVar4)(0,lVar15,0,0);
                                }
                                else {
                                  (*pcVar3)();
                                }
                                if (lVar16 != 0) {
                                  lVar17 = 0;
                                  (*pcVar5)(0,"ProductVersion",0x600,uVar20);
                                  if (lVar17 != 0) {
                                    lVar18 = lVar16;
                                    (*pcVar6)(lVar16,lVar17);
                                    (*pcVar10)(lVar17);
                                    if (lVar18 != 0) {
                                      lVar17 = lVar18;
                                      (*pcVar7)();
                                      lVar19 = lVar17;
                                      (*pcVar8)();
                                      if ((lVar17 == lVar19) &&
                                         ((*pcVar9)(lVar18,auStack_88,0x20,0x8000100),
                                         (int)lVar18 != 0)) {
                                        _sscanf(auStack_88,"%d.%d.%d");
                                      }
                                    }
                                  }
                                  (*pcVar10)(lVar16);
                                }
                                (*pcVar10)(lVar15);
                              }
                            }
                          }
                          _free();
                          _fclose(pcVar11);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_100024420 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010001ebe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_once_f_100024438)(0x100029288,0,0x10001d2b4);
  return;
}



/* Entry: 10001d44c; end: 10001d763;  */

void FUN_10001d44c(ulong param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  code *pcVar9;
  code *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  undefined1 auStack_88 [32];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_100024420;
  if (((param_1 & 1) != 0) || (puRam0000000100029298 == (undefined *)0x0)) {
    if (PTR___availability_version_check_100024428 != (undefined *)0x0) {
      puRam0000000100029298 = PTR___availability_version_check_100024428;
    }
    if (((param_1 & 1) != 0) || (puRam0000000100029298 == (undefined *)0x0)) {
      puVar1 = (undefined8 *)0xfffffffffffffffe;
      _dlsym(0xfffffffffffffffe,"kCFAllocatorNull");
      if (puVar1 != (undefined8 *)0x0) {
        uVar20 = *puVar1;
        pcVar2 = (code *)0xfffffffffffffffe;
        _dlsym(0xfffffffffffffffe,"CFDataCreateWithBytesNoCopy");
        if (pcVar2 != (code *)0x0) {
          pcVar3 = (code *)0xfffffffffffffffe;
          _dlsym(0xfffffffffffffffe,"CFPropertyListCreateWithData");
          pcVar4 = (code *)0xfffffffffffffffe;
          _dlsym(0xfffffffffffffffe,"CFPropertyListCreateFromXMLData");
          if (pcVar3 != (code *)0x0 || pcVar4 != (code *)0x0) {
            pcVar5 = (code *)0xfffffffffffffffe;
            _dlsym(0xfffffffffffffffe,"CFStringCreateWithCStringNoCopy");
            if (pcVar5 != (code *)0x0) {
              pcVar6 = (code *)0xfffffffffffffffe;
              _dlsym(0xfffffffffffffffe,"CFDictionaryGetValue");
              if (pcVar6 != (code *)0x0) {
                pcVar7 = (code *)0xfffffffffffffffe;
                _dlsym(0xfffffffffffffffe,"CFGetTypeID");
                if (pcVar7 != (code *)0x0) {
                  pcVar8 = (code *)0xfffffffffffffffe;
                  _dlsym(0xfffffffffffffffe,"CFStringGetTypeID");
                  if (pcVar8 != (code *)0x0) {
                    pcVar9 = (code *)0xfffffffffffffffe;
                    _dlsym(0xfffffffffffffffe,"CFStringGetCString");
                    if (pcVar9 != (code *)0x0) {
                      pcVar10 = (code *)0xfffffffffffffffe;
                      _dlsym(0xfffffffffffffffe,"CFRelease");
                      if (pcVar10 != (code *)0x0) {
                        pcVar11 = "/System/Library/CoreServices/SystemVersion.plist";
                        _fopen("/System/Library/CoreServices/SystemVersion.plist","r");
                        if (pcVar11 != (char *)0x0) {
                          _fseek();
                          pcVar12 = pcVar11;
                          _ftell();
                          if (-1 < (long)pcVar12) {
                            _rewind(pcVar11);
                            pcVar13 = pcVar12;
                            _malloc();
                            if ((pcVar13 != (char *)0x0) &&
                               (pcVar14 = pcVar13, _fread(), pcVar14 == pcVar12)) {
                              lVar15 = 0;
                              (*pcVar2)(0,pcVar13,pcVar12,uVar20);
                              if (lVar15 != 0) {
                                lVar16 = 0;
                                if (pcVar3 == (code *)0x0) {
                                  (*pcVar4)(0,lVar15,0,0);
                                }
                                else {
                                  (*pcVar3)();
                                }
                                if (lVar16 != 0) {
                                  lVar17 = 0;
                                  (*pcVar5)(0,"ProductVersion",0x600,uVar20);
                                  if (lVar17 != 0) {
                                    lVar18 = lVar16;
                                    (*pcVar6)(lVar16,lVar17);
                                    (*pcVar10)(lVar17);
                                    if (lVar18 != 0) {
                                      lVar17 = lVar18;
                                      (*pcVar7)();
                                      lVar19 = lVar17;
                                      (*pcVar8)();
                                      if ((lVar17 == lVar19) &&
                                         ((*pcVar9)(lVar18,auStack_88,0x20,0x8000100),
                                         (int)lVar18 != 0)) {
                                        _sscanf(auStack_88,"%d.%d.%d");
                                      }
                                    }
                                  }
                                  (*pcVar10)(lVar16);
                                }
                                (*pcVar10)(lVar15);
                              }
                            }
                          }
                          _free();
                          _fclose(pcVar11);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_100024420 != lStack_68) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010001ebe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__dispatch_once_f_100024438)(0x100029288,0,0x10001d2b4);
    return;
  }
  return;
}



/* Entry: 10001d764; end: 10001d77b;  */

void FUN_10001d764(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010001ebe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_once_f_100024438)(0x100029288,0,0x10001d2b4);
  return;
}



/* Entry: 10001d77c; end: 10001d9bf;  */

/* WARNING: Type propagation algorithm not settling */

ulong FUN_10001d77c(long param_1,ulong param_2,undefined8 *param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  ulong *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  bool bVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  uVar13 = 0;
  bVar6 = false;
  lVar3 = 0xc0;
  if ((*(uint *)(param_1 + 0x20) & 0x1000000) != 0) {
    lVar3 = 0xd0;
  }
  puVar2 = (ulong *)(param_1 + lVar3 + ((ulong)(*(uint *)(param_1 + 0x20) >> 0x17) & 8));
  plVar1 = (long *)(param_2 + 0x50);
  uVar10 = *puVar2;
LAB_10001d800:
  uVar12 = uVar10 & 3;
  if (uVar12 == 0) {
    func_0x00010001e2b8(param_2);
  }
  else if (uVar12 != 3) {
    FUN_10001e270(param_1);
    if (!bVar6) {
      return uVar12;
    }
    do {
      lVar3 = *plVar1;
      uVar13 = *(ulong *)(param_2 + 0x58);
      cVar7 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar3;
        *(ulong *)(param_2 + 0x58) = uVar13;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    uVar9 = (uint)uVar13;
    while ((uVar9 >> 9 & 1) == 0) {
      uVar10 = uVar13 | 0x800;
      if (((uint)uVar13 >> 10 & 1) != 0) {
        uVar10 = uVar13 & 0xfffffffffffff9ff | 0x800;
        *(char *)(param_2 + 0x21) = (char)uVar13;
      }
      do {
        while( true ) {
          lVar4 = *plVar1;
          uVar11 = *(ulong *)(param_2 + 0x58);
          cVar7 = lVar4 != lVar3;
          if (uVar11 != uVar13) {
            cVar7 = cVar7 + '\x01';
          }
          if (cVar7 == '\0') break;
          cVar7 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar4;
            *(ulong *)(param_2 + 0x58) = uVar11;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_10001d95c;
        }
        cVar7 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar3;
          *(ulong *)(param_2 + 0x58) = uVar10;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
LAB_10001d95c:
      if (lVar4 == lVar3 && uVar11 == uVar13) goto LAB_10001d980;
      lVar3 = lVar4;
      uVar13 = uVar11;
      uVar9 = (uint)uVar11;
    }
    func_0x00010001dbe0(param_2);
LAB_10001d980:
    func_0x00010001e048(param_2);
    func_0x00010001e3c4(param_2 + 0x80);
    return uVar12;
  }
  if (!bVar6) {
    param_3[3] = 0;
    param_3[4] = param_6;
    *param_3 = param_5;
    param_3[1] = param_4;
    do {
      lVar3 = *plVar1;
      uVar12 = *(ulong *)(param_2 + 0x58);
      cVar7 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar3;
        *(ulong *)(param_2 + 0x58) = uVar12;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    uVar9 = (uint)uVar12;
    while ((uVar9 >> 9 & 1) == 0) {
      if (((uint)uVar12 >> 10 & 1) == 0) {
        uVar11 = uVar12 & 0xfffffffffffff5ff;
      }
      else {
        uVar11 = uVar12 & 0xfffffffffffff1ff;
        *(char *)(param_2 + 0x21) = (char)uVar12;
      }
      do {
        while( true ) {
          lVar4 = *plVar1;
          uVar5 = *(ulong *)(param_2 + 0x58);
          cVar7 = lVar4 != lVar3;
          if (uVar5 != uVar12) {
            cVar7 = cVar7 + '\x01';
          }
          if (cVar7 == '\0') break;
          cVar7 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar4;
            *(ulong *)(param_2 + 0x58) = uVar5;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_10001d884;
        }
        cVar7 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar3;
          *(ulong *)(param_2 + 0x58) = uVar11;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
LAB_10001d884:
      if (lVar4 == lVar3 && uVar5 == uVar12) goto LAB_10001d8a8;
      lVar3 = lVar4;
      uVar12 = uVar5;
      uVar9 = (uint)uVar5;
    }
    func_0x00010001dd40(param_2);
LAB_10001d8a8:
    func_0x00010001e40c(param_2 + 0x80);
    func_0x00010001e074(param_2);
  }
  do {
    uVar12 = *(ulong *)(param_2 + 0x58);
    cVar7 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = *plVar1;
      *(ulong *)(param_2 + 0x58) = uVar12;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  uVar12 = uVar12 & 0xff;
  if (uVar13 < uVar12) {
    FUN_10001dea0(param_1,uVar12);
    uVar13 = uVar12;
  }
  *(ulong *)(param_2 + 0x10) = uVar10 & 0xfffffffffffffffc;
  uVar12 = *puVar2;
  if (uVar12 == uVar10) {
    cVar7 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar6) {
      *puVar2 = param_2;
      cVar7 = ExclusiveMonitorsStatus();
    }
    bVar8 = cVar7 == '\0';
  }
  else {
    bVar8 = false;
    ClearExclusiveLocal();
  }
  bVar6 = true;
  uVar10 = uVar12;
  if (bVar8) {
    func_0x00010001e014();
    return 0;
  }
  goto LAB_10001d800;
}



/* Entry: 10001d9c0; end: 10001daa7;  */

void FUN_10001d9c0(long param_1,long param_2,code *UNRECOVERED_JUMPTABLE,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x22;
  
  lVar1 = param_1;
  func_0x00010001e00c();
  *(code **)(lVar1 + 0x38) = FUN_10001daa8;
  *(undefined8 *)(lVar1 + 0x40) = param_4;
  lVar2 = param_2;
  FUN_10001d77c(param_2,lVar1,param_4,UNRECOVERED_JUMPTABLE);
  if (lVar2 == 1) {
    lVar1 = 0xc0;
    if ((*(uint *)(param_2 + 0x20) & 0x1000000) != 0) {
      lVar1 = 0xd0;
    }
    lVar1 = param_2 + lVar1 + ((ulong)(*(uint *)(param_2 + 0x20) >> 0x17) & 8);
    lVar2 = *(long *)(*(long *)(lVar1 + 8) + -8);
    uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
    (**(code **)(lVar2 + 0x10))(param_1,lVar1 + uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff));
                    /* WARNING: Could not recover jumptable at 0x00010001da94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  if (lVar2 != 2) {
    return;
  }
  FUN_10001e500(0,"future reported an error, but wait cannot throw");
                    /* WARNING: Could not recover jumptable at 0x00010001daac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10001daa8; end: 10001daaf;  */

void FUN_10001daa8(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010001daac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10001dab0; end: 10001dbbf;  */

void FUN_10001dab0(long param_1,long param_2,code *UNRECOVERED_JUMPTABLE,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = param_1;
  func_0x00010001e00c();
  *(code **)(lVar1 + 0x38) = FUN_10001dbc0;
  *(undefined8 *)(lVar1 + 0x40) = param_4;
  lVar2 = param_2;
  FUN_10001d77c(param_2,lVar1,param_4,UNRECOVERED_JUMPTABLE);
  if (lVar2 == 2) {
    lVar1 = 0xc0;
    if ((*(uint *)(param_2 + 0x20) & 0x1000000) != 0) {
      lVar1 = 0xd0;
    }
    _swift_errorRetain(*(undefined8 *)
                        (param_2 + lVar1 + ((ulong)(*(uint *)(param_2 + 0x20) >> 0x17) & 8) + 0x10))
    ;
  }
  else {
    if (lVar2 != 1) {
      return;
    }
    lVar1 = 0xc0;
    if ((*(uint *)(param_2 + 0x20) & 0x1000000) != 0) {
      lVar1 = 0xd0;
    }
    lVar1 = param_2 + lVar1 + ((ulong)(*(uint *)(param_2 + 0x20) >> 0x17) & 8);
    lVar2 = *(long *)(*(long *)(lVar1 + 8) + -8);
    uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
    (**(code **)(lVar2 + 0x10))(param_1,lVar1 + uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff));
  }
                    /* WARNING: Could not recover jumptable at 0x00010001dba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10001dbc0; end: 10001dbdf;  */

void FUN_10001dbc0(void)

{
  undefined8 *unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010001dbcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)unaff_x22[1])(*unaff_x22);
  return;
}



/* Entry: 10001dbe0; end: 10001de9f;  */

/* WARNING: Possible PIC construction at 0x00010001dcf4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010001dcf8) */
/* WARNING: Removing unreachable block (ram,0x00010001dd18) */
/* WARNING: Removing unreachable block (ram,0x00010001dd04) */
/* WARNING: Removing unreachable block (ram,0x00010001dd1c) */

void FUN_10001dbe0(long param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  bool bVar4;
  char cVar5;
  ulong uVar6;
  undefined8 *puVar7;
  uint uVar8;
  long lStack_60;
  ulong uStack_58;
  
  plVar1 = (long *)(param_1 + 0x50);
  do {
    lVar2 = *plVar1;
    uVar3 = *(ulong *)(param_1 + 0x58);
    cVar5 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar2;
      *(ulong *)(param_1 + 0x58) = uVar3;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  puVar7 = (undefined8 *)0x0;
  uVar8 = (uint)uVar3;
  do {
    while (lStack_60 = lVar2, uStack_58 = uVar3, (uVar8 >> 9 & 1) != 0) {
      FUN_10001df20(param_1,&lStack_60);
      lVar2 = lStack_60;
      uVar3 = uStack_58;
      uVar8 = (uint)uStack_58;
    }
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)0x20;
      __Znwm();
      *puVar7 = 1;
      func_0x00010001e390(puVar7 + 1,0);
      puVar7[2] = 0xc0;
      puVar7[3] = lVar2;
      FUN_10001e39c(puVar7 + 1);
    }
    else {
      puVar7[3] = lVar2;
    }
    uVar6 = uVar3 | 0x200;
    do {
      while( true ) {
        lVar2 = *plVar1;
        uVar3 = *(ulong *)(param_1 + 0x58);
        cVar5 = lVar2 != lStack_60;
        if (uVar3 != uStack_58) {
          cVar5 = cVar5 + '\x01';
        }
        if (cVar5 == '\0') break;
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar2;
          *(ulong *)(param_1 + 0x54) = uVar3;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 == '\0') goto LAB_10001dca4;
      }
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = (long)(puVar7 + 2);
        *(ulong *)(param_1 + 0x54) = uVar6;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_10001dca4:
    if (lVar2 == lStack_60 && uVar3 == uStack_58) {
      uVar6 = uStack_58 | 0x800;
      uVar3 = uVar6;
      if (((uint)uStack_58 >> 10 & 1) != 0) {
        uVar6 = uStack_58 & 0xfffffffffffffbff | 0x800;
        *(char *)(param_1 + 0x21) = (char)uStack_58;
        uVar3 = uVar6;
      }
      do {
        uStack_58 = uVar3;
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lStack_60;
          *(ulong *)(param_1 + 0x58) = uVar6;
          cVar5 = ExclusiveMonitorsStatus();
        }
        uVar3 = uStack_58;
      } while (cVar5 != '\0');
      FUN_10001e39c(0x1000292b0);
      _os_unfair_lock_unlock(puVar7 + 1);
      return;
    }
    uVar8 = (uint)uVar3;
  } while( true );
}



/* Entry: 10001dea0; end: 10001df1f;  */

void FUN_10001dea0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (lRam00000001000292a8 != -1) {
    FUN_10001dff4();
  }
  if (pcRam00000001000292a0 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010001ded0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam00000001000292a0)();
    return;
  }
  _abort(param_1,param_2);
  uVar1 = 0xfffffffffffffffe;
  _dlsym(0xfffffffffffffffe,"swift_task_escalate");
  *param_1 = uVar1;
  return;
}



/* Entry: 10001df20; end: 10001dff3;  */

/* WARNING: Possible PIC construction at 0x00010001df70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010001df80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010001dfb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010001dfb8) */
/* WARNING: Removing unreachable block (ram,0x00010001dfbc) */
/* WARNING: Removing unreachable block (ram,0x00010001dfc4) */
/* WARNING: Removing unreachable block (ram,0x00010001dfcc) */
/* WARNING: Removing unreachable block (ram,0x00010001df74) */
/* WARNING: Removing unreachable block (ram,0x00010001df84) */
/* WARNING: Removing unreachable block (ram,0x00010001dfac) */
/* WARNING: Removing unreachable block (ram,0x00010001df98) */
/* WARNING: Removing unreachable block (ram,0x00010001dfb0) */

void FUN_10001df20(long param_1,long *param_2)

{
  undefined1 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  plVar2 = (long *)(param_1 + 0x50);
  FUN_10001e39c(0x1000292b0);
  do {
    lVar3 = *plVar2;
    lVar4 = *(long *)(param_1 + 0x58);
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar6) {
      *plVar2 = lVar3;
      *(long *)(param_1 + 0x58) = lVar4;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  *param_2 = lVar3;
  param_2[1] = lVar4;
  if ((((uint)lVar4 >> 9 & 1) != 0) && (lVar3 != 0)) {
    *(long *)(lVar3 + -0x10) = *(long *)(lVar3 + -0x10) + 1;
    unaff_x30 = 0x10001df74;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    unaff_x29 = puVar1;
  }
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  _os_unfair_lock_unlock(0x1000292b0);
  return;
}



/* Entry: 10001dff4; end: 10001e013;  */

void FUN_10001dff4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010001ebe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_once_f_100024438)(0x1000292a8,0x1000292a0,0x10001def0);
  return;
}



/* Entry: 10001e014; end: 10001e123;  */

undefined8 FUN_10001e014(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x67;
  _pthread_getspecific(0x67);
  _pthread_setspecific(0x67,0);
  return uVar1;
}



/* Entry: 10001e124; end: 10001e15b;  */

void FUN_10001e124(void)

{
  long lStack_28;
  ulong uStack_20;
  
  __swift_stdlib_operatingSystemVersion(&lStack_28);
  uRam00000001000292c0 = lStack_28 == 0xf && uStack_20 < 2;
  return;
}



/* Entry: 10001e15c; end: 10001e24f;  */

void FUN_10001e15c(long *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  _swift_once(0x1000292b8,FUN_10001e124,0);
  if ((bRam00000001000292c0 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    if (lRam00000001000292d0 != -1) {
      func_0x00010001e26c();
    }
    iVar1 = (int)uVar2;
    if ((pcRam00000001000292c8 == (code *)0x0) || ((*pcRam00000001000292c8)(), iVar1 != 0)) {
      lVar3 = *(long *)(param_2 + 0x28);
      _voucher_adopt();
    }
    else {
      lVar3 = *(long *)(param_2 + 0x28);
    }
    *(undefined8 *)(param_2 + 0x28) = 0xffffffffffffffff;
    if ((*(byte *)(param_1 + 1) & 1) == 0) {
      *param_1 = lVar3;
      *(undefined1 *)(param_1 + 1) = 1;
    }
    else if (1 < lVar3 + 1U) {
      _os_release();
    }
  }
  return;
}



/* Entry: 10001e250; end: 10001e26f;  */

void FUN_10001e250(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010001ebe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_once_f_100024438)(0x1000292d0,0x1000292c8,0x10001e220);
  return;
}



/* Entry: 10001e270; end: 10001e35f;  */

void FUN_10001e270(undefined8 param_1)

{
  if (lRam00000001000292e0 != -1) {
    FUN_10001e360();
  }
  if (pcRam00000001000292d8 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010001e28c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam00000001000292d8)(param_1);
    return;
  }
  return;
}



/* Entry: 10001e360; end: 10001e39b;  */

void FUN_10001e360(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010001ebe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_once_f_100024438)(0x1000292e0,0x1000292d8,0x10001e300);
  return;
}



/* Entry: 10001e39c; end: 10001e3c3;  */

void FUN_10001e39c(void)

{
  _os_unfair_lock_lock();
  return;
}



/* Entry: 10001e3c4; end: 10001e4b3;  */

void FUN_10001e3c4(undefined8 param_1)

{
  if (lRam0000000100029300 != -1) {
    FUN_10001e4b4();
  }
  if (pcRam00000001000292f8 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010001e3e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam00000001000292f8)(param_1);
    return;
  }
  return;
}



/* Entry: 10001e4b4; end: 10001e4ff;  */

void FUN_10001e4b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010001ebe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_once_f_100024438)(0x100029300,0x1000292f8,0x10001e454);
  return;
}



/* Entry: 10001e500; end: 10001e50b;  */

void FUN_10001e500(void)

{
  _abort();
                    /* WARNING: Could not recover jumptable at 0x00010001e514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s10Foundation12CharacterSetV22whitespacesAndNewlinesACvgZ_1000249a8)();
  return;
}


