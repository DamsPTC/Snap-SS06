/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10001156c; end: 1000115bb;  */

void FUN_10001156c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam000000010002db08 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x10002dac0;
  FUN_10000c888(0x10002dac0,&UNK_100021ab8);
  puVar2 = PTR___s7SwiftUI16SubscriptionViewVyxq_GAA0D0AAMc_1000283f0;
  _swift_getWitnessTable(PTR___s7SwiftUI16SubscriptionViewVyxq_GAA0D0AAMc_1000283f0,uVar1);
  puRam000000010002db08 = puVar2;
  return;
}



/* Entry: 1000115bc; end: 1000115bf;  */

void FUN_1000115bc(void)

{
  long unaff_x20;
  
  _objc_release_x8(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x0001000209a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_100028a40)();
  return;
}



/* Entry: 1000115c0; end: 1000115cf;  */

undefined1  [16] FUN_1000115c0(void)

{
  return ZEXT816(0x1000290b8);
}



/* Entry: 1000115d0; end: 1000115df;  */

void FUN_1000115d0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100020a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_100028a88)(param_1,&UNK_100023000,1);
  return;
}



/* Entry: 1000115e0; end: 1000116cb;  */

void FUN_1000115e0(undefined8 *param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x12;
  
  lVar1 = 0;
  __s7SwiftUI5ColorV13RGBColorSpaceOMa();
  (*(code *)PTR____chkstk_darwin_100028280)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(extraout_x12 + 0x68))
            (puVar2,*(undefined4 *)PTR___s7SwiftUI5ColorV13RGBColorSpaceO4sRGByA2EmFWC_100028608);
  __s7SwiftUI5ColorV_3red5green4blue7opacityA2C13RGBColorSpaceO_S4dtcfC
            (0x406fe00000000000,0x406f800000000000,0,0x3ff0000000000000);
  puVar3 = puVar2;
  __s7SwiftUI15SafeAreaRegionsV3allACvgZ();
  puVar4 = puVar3;
  __s7SwiftUI4EdgeO3SetV3allAEvgZ();
  uVar5 = 0x695f636974617473;
  __s7SwiftUI5ImageV_6bundleACSS_So8NSBundleCSgtcfC(0x695f636974617473,0xeb000000006e6f63,0);
  *param_1 = puVar2;
  param_1[1] = puVar3;
  *(char *)(param_1 + 2) = (char)puVar4;
  param_1[3] = uVar5;
  param_1[4] = 0;
  *(undefined2 *)(param_1 + 5) = 1;
  return;
}



/* Entry: 1000116cc; end: 1000116cf;  */

void FUN_1000116cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010002037c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_1000285c8
  )();
  return;
}



/* Entry: 1000116d0; end: 1000116d3;  */

void FUN_1000116d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100020388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC4List4view6inputsAA01_cE7OutputsVAA11_GraphValueVyxG_AA01_cE6InputsVtFZ_1000285d0
  )();
  return;
}



/* Entry: 1000116d4; end: 1000116d7;  */

void FUN_1000116d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000203ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s7SwiftUI4ViewPAAE14_viewListCount6inputsSiSgAA01_ceF6InputsV_tFZ_1000285f8)();
  return;
}



/* Entry: 1000116d8; end: 100011787;  */

void FUN_1000116d8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined1 auStack_f0 [64];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined2 uStack_88;
  undefined6 uStack_86;
  undefined2 uStack_80;
  undefined6 uStack_7e;
  undefined1 uStack_78;
  undefined1 uStack_77;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined7 uStack_4f;
  undefined8 uStack_48;
  undefined1 uStack_38;
  undefined1 uStack_37;
  
  __s7SwiftUI9AlignmentV6centerACvgZ();
  FUN_1000115e0(&uStack_70);
  uVar2 = uStack_58;
  uVar1 = (undefined1)uStack_60;
  uStack_38 = (undefined1)uStack_48;
  uStack_37 = uStack_48._1_1_;
  uStack_a0 = uStack_70;
  uStack_98 = uStack_68;
  uStack_90 = (undefined1)uStack_60;
  uStack_88 = (undefined2)uStack_58;
  uStack_86 = (undefined6)((ulong)uStack_58 >> 0x10);
  uStack_80 = (undefined2)CONCAT71(uStack_4f,uStack_50);
  uStack_7e = (undefined6)((uint7)uStack_4f >> 8);
  uStack_78 = (undefined1)uStack_48;
  uStack_77 = uStack_48._1_1_;
  uStack_60 = uStack_70;
  uStack_58 = uStack_68;
  uStack_50 = uVar1;
  uStack_48 = uVar2;
  uStack_b0 = param_2;
  uStack_a8 = param_3;
  uStack_70 = param_2;
  uStack_68 = param_3;
  FUN_100011788(&uStack_b0,auStack_f0);
  FUN_1000117d8(&uStack_70);
  param_1[1] = uStack_a8;
  *param_1 = uStack_b0;
  param_1[3] = uStack_98;
  param_1[2] = uStack_a0;
  param_1[5] = CONCAT62(uStack_86,uStack_88);
  param_1[4] = CONCAT71(uStack_8f,uStack_90);
  *(ulong *)((long)param_1 + 0x32) = CONCAT17(uStack_77,CONCAT16(uStack_78,uStack_7e));
  *(ulong *)((long)param_1 + 0x2a) = CONCAT26(uStack_80,uStack_86);
  return;
}



/* Entry: 100011788; end: 1000117d7;  */

undefined8 FUN_100011788(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x10002db10;
  FUN_10000c3c0(0x10002db10,&UNK_100021b58);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1000117d8; end: 10001181f;  */

undefined8 FUN_1000117d8(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x10002db10;
  FUN_10000c3c0(0x10002db10,&UNK_100021b58);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 100011820; end: 100011823;  */

void FUN_100011820(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam000000010002db18 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x10002db10;
  FUN_10000c888(0x10002db10,&UNK_100021b58);
  puVar2 = PTR___s7SwiftUI6ZStackVyxGAA4ViewAAMc_1000286c8;
  _swift_getWitnessTable(PTR___s7SwiftUI6ZStackVyxGAA4ViewAAMc_1000286c8,uVar1);
  puRam000000010002db18 = puVar2;
  return;
}



/* Entry: 100011824; end: 100011873;  */

void FUN_100011824(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam000000010002db18 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x10002db10;
  FUN_10000c888(0x10002db10,&UNK_100021b58);
  puVar2 = PTR___s7SwiftUI6ZStackVyxGAA4ViewAAMc_1000286c8;
  _swift_getWitnessTable(PTR___s7SwiftUI6ZStackVyxGAA4ViewAAMc_1000286c8,uVar1);
  puRam000000010002db18 = puVar2;
  return;
}



/* Entry: 100011874; end: 10001187b;  */

void FUN_100011874(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100020940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericValueMetadata_100028a00)();
  return;
}



/* Entry: 10001187c; end: 10001193b;  */

void FUN_10001187c(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long lStack_58;
  undefined *puStack_50;
  long lStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  __s10Foundation3URLVMa();
  if (param_2 < 0x40) {
    lStack_58 = *(long *)(lVar1 + -8) + 0x40;
    puStack_50 = PTR___sBbWV_100028738 + 0x40;
    uVar2 = *(ulong *)(param_1 + 0x10);
    lVar1 = 0x13f;
    _swift_checkMetadataState();
    if (uVar2 < 0x40) {
      lStack_48 = *(long *)(lVar1 + -8) + 0x40;
      uVar2 = *(ulong *)(param_1 + 0x18);
      lVar1 = 0x13f;
      _swift_checkMetadataState();
      if (uVar2 < 0x40) {
        lStack_40 = *(long *)(lVar1 + -8) + 0x40;
        puStack_38 = &UNK_100021b78;
        puStack_30 = &UNK_100021b78;
        puStack_28 = &UNK_100021b78;
        _swift_initStructMetadata(param_1,0,7,&lStack_58,param_1 + 0x30);
      }
    }
  }
  return;
}



/* Entry: 10001193c; end: 100011b47;  */

long * FUN_10001193c(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  
  lVar5 = 0;
  __s10Foundation3URLVMa();
  lVar6 = *(long *)(lVar5 + -8);
  lVar19 = *(long *)(lVar6 + 0x40);
  lVar2 = *(long *)(param_3 + 0x10);
  lVar3 = *(long *)(param_3 + 0x18);
  lVar9 = *(long *)(lVar2 + -8);
  uVar8 = (ulong)*(uint *)(lVar9 + 0x50) & 0xff;
  lVar20 = *(long *)(lVar9 + 0x40);
  lVar18 = *(long *)(lVar3 + -8);
  uVar21 = (ulong)*(uint *)(lVar18 + 0x50) & 0xff;
  lVar1 = lVar20 + uVar21;
  lVar11 = *(long *)(lVar18 + 0x40) + 7;
  uVar4 = (uint)uVar21 | *(uint *)(lVar6 + 0x50) & 0xf8 | (uint)uVar8;
  if ((uVar4 < 8 &&
      ((*(uint *)(lVar18 + 0x50) | *(uint *)(lVar9 + 0x50) | *(uint *)(lVar6 + 0x50)) & 0x100000) ==
      0) && (lVar11 + (lVar1 + (uVar8 + (lVar19 + 7U & 0xfffffffffffffff8) + 8 &
                               (uVar8 ^ 0xffffffffffffffff)) & (uVar21 ^ 0xffffffffffffffff)) &
            0xfffffffffffffff8) + 0x30 < 0x19) {
    (**(code **)(lVar6 + 0x10))(param_1,param_2,lVar5);
    puVar16 = (undefined8 *)((long)param_1 + lVar19 + 7 & 0xffffffffffffff8);
    puVar12 = (undefined8 *)((long)param_2 + lVar19 + 7 & 0xffffffffffffff8);
    puVar7 = puVar12 + 1;
    puVar17 = puVar16 + 1;
    *puVar16 = *puVar12;
    pcVar10 = *(code **)(lVar9 + 0x10);
    _swift_bridgeObjectRetain();
    (*pcVar10)(puVar17,puVar7,lVar2);
    uVar14 = (long)puVar17 + lVar1 & ~uVar21;
    uVar8 = (long)puVar7 + uVar21 + lVar20 & ~uVar21;
    (**(code **)(lVar18 + 0x10))(uVar14,uVar8,lVar3);
    puVar12 = (undefined8 *)(lVar11 + uVar14 & 0xfffffffffffffff8);
    puVar7 = (undefined8 *)(lVar11 + uVar8 & 0xfffffffffffffff8);
    *puVar12 = *puVar7;
    uVar13 = puVar7[1];
    puVar12[1] = uVar13;
    *(undefined1 *)(puVar12 + 2) = *(undefined1 *)(puVar7 + 2);
    uVar15 = puVar7[3];
    puVar12[3] = uVar15;
    *(undefined1 *)(puVar12 + 4) = *(undefined1 *)(puVar7 + 4);
    lVar11 = puVar7[5];
    puVar12[5] = lVar11;
    _swift_retain();
    _swift_retain(uVar13);
    _swift_retain(uVar15);
  }
  else {
    uVar8 = (ulong)(uVar4 | 7);
    lVar11 = *param_2;
    *param_1 = lVar11;
    param_1 = (long *)(lVar11 + (uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff)));
  }
  _swift_retain(lVar11);
  return param_1;
}



/* Entry: 100011b48; end: 100011c2b;  */

void FUN_100011b48(long param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar4 = *(long *)(lVar1 + -8);
  (**(code **)(lVar4 + 8))(param_1,lVar1);
  puVar2 = (undefined8 *)(param_1 + *(long *)(lVar4 + 0x40) + 7U & 0xfffffffffffffff8);
  _swift_bridgeObjectRelease(*puVar2);
  lVar1 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  uVar3 = (long)puVar2 + (ulong)*(byte *)(lVar1 + 0x50) + 8 &
          ((ulong)*(byte *)(lVar1 + 0x50) ^ 0xffffffffffffffff);
  (**(code **)(lVar1 + 8))(uVar3);
  lVar4 = *(long *)(*(long *)(param_2 + 0x18) + -8);
  uVar3 = uVar3 + *(long *)(lVar1 + 0x40) + (ulong)*(byte *)(lVar4 + 0x50) &
          ((ulong)*(byte *)(lVar4 + 0x50) ^ 0xffffffffffffffff);
  (**(code **)(lVar4 + 8))(uVar3);
  puVar2 = (undefined8 *)(*(long *)(lVar4 + 0x40) + uVar3 + 7 & 0xfffffffffffffff8);
  _swift_release(*puVar2);
  _swift_release(puVar2[1]);
  _swift_release(puVar2[3]);
                    /* WARNING: Could not recover jumptable at 0x000100020a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_100028ae0)
            (*(undefined8 *)(((long)puVar2 + 0x27U & 0xffffffffffffff8) + 8));
  return;
}



/* Entry: 100011c2c; end: 100011d9b;  */

long FUN_100011c2c(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  code *pcVar12;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar7 = *(long *)(lVar1 + -8);
  (**(code **)(lVar7 + 0x10))(param_1,param_2,lVar1);
  lVar1 = *(long *)(lVar7 + 0x40) + 7;
  puVar3 = (undefined8 *)(lVar1 + param_1 & 0xfffffffffffffff8);
  puVar2 = (undefined8 *)(lVar1 + param_2 & 0xfffffffffffffff8);
  *puVar3 = *puVar2;
  lVar1 = *(long *)(param_3 + 0x10);
  lVar7 = *(long *)(lVar1 + -8);
  uVar4 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar8 = uVar4 + 8 + (long)puVar3 & (uVar4 ^ 0xffffffffffffffff);
  uVar10 = uVar4 + 8 + (long)puVar2 & (uVar4 ^ 0xffffffffffffffff);
  pcVar12 = *(code **)(lVar7 + 0x10);
  _swift_bridgeObjectRetain();
  (*pcVar12)(uVar8,uVar10,lVar1);
  lVar11 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar4 = (ulong)*(byte *)(lVar11 + 0x50);
  lVar1 = *(long *)(lVar7 + 0x40) + uVar4;
  uVar8 = lVar1 + uVar8 & (uVar4 ^ 0xffffffffffffffff);
  uVar4 = lVar1 + uVar10 & (uVar4 ^ 0xffffffffffffffff);
  (**(code **)(lVar11 + 0x10))(uVar8,uVar4);
  lVar1 = *(long *)(lVar11 + 0x40) + 7;
  puVar3 = (undefined8 *)(lVar1 + uVar8 & 0xfffffffffffffff8);
  puVar2 = (undefined8 *)(lVar1 + uVar4 & 0xfffffffffffffff8);
  *puVar3 = *puVar2;
  uVar5 = puVar2[1];
  puVar3[1] = uVar5;
  *(undefined1 *)(puVar3 + 2) = *(undefined1 *)(puVar2 + 2);
  uVar6 = puVar2[3];
  puVar3[3] = uVar6;
  *(undefined1 *)(puVar3 + 4) = *(undefined1 *)(puVar2 + 4);
  uVar9 = puVar2[5];
  puVar3[5] = uVar9;
  _swift_retain();
  _swift_retain(uVar5);
  _swift_retain(uVar6);
  _swift_retain(uVar9);
  return param_1;
}



/* Entry: 100011d9c; end: 100011f2f;  */

long FUN_100011d9c(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar1 + -8);
  (**(code **)(lVar5 + 0x18))(param_1,param_2,lVar1);
  lVar1 = *(long *)(lVar5 + 0x40) + 7;
  puVar6 = (undefined8 *)(lVar1 + param_1 & 0xfffffffffffffff8);
  puVar8 = (undefined8 *)(lVar1 + param_2 & 0xfffffffffffffff8);
  uVar3 = *puVar6;
  *puVar6 = *puVar8;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  lVar1 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50);
  uVar4 = uVar2 + 8 + (long)puVar6 & (uVar2 ^ 0xffffffffffffffff);
  uVar7 = uVar2 + 8 + (long)puVar8 & (uVar2 ^ 0xffffffffffffffff);
  (**(code **)(lVar1 + 0x18))(uVar4,uVar7);
  lVar5 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar2 = (ulong)*(byte *)(lVar5 + 0x50);
  lVar1 = *(long *)(lVar1 + 0x40) + uVar2;
  uVar4 = lVar1 + uVar4 & (uVar2 ^ 0xffffffffffffffff);
  uVar2 = lVar1 + uVar7 & (uVar2 ^ 0xffffffffffffffff);
  (**(code **)(lVar5 + 0x18))(uVar4,uVar2);
  lVar1 = *(long *)(lVar5 + 0x40) + 7;
  puVar8 = (undefined8 *)(lVar1 + uVar4 & 0xfffffffffffffff8);
  puVar6 = (undefined8 *)(lVar1 + uVar2 & 0xfffffffffffffff8);
  uVar3 = *puVar8;
  *puVar8 = *puVar6;
  _swift_retain();
  _swift_release(uVar3);
  uVar3 = puVar8[1];
  puVar8[1] = puVar6[1];
  _swift_retain();
  _swift_release(uVar3);
  *(undefined1 *)(puVar8 + 2) = *(undefined1 *)(puVar6 + 2);
  uVar3 = puVar8[3];
  puVar8[3] = puVar6[3];
  _swift_retain();
  _swift_release(uVar3);
  *(undefined1 *)(puVar8 + 4) = *(undefined1 *)(puVar6 + 4);
  uVar3 = puVar8[5];
  puVar8[5] = puVar6[5];
  _swift_retain();
  _swift_release(uVar3);
  return param_1;
}



/* Entry: 100011f30; end: 10001204b;  */

long FUN_100011f30(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar6 = *(long *)(lVar1 + -8);
  (**(code **)(lVar6 + 0x20))(param_1,param_2,lVar1);
  lVar1 = *(long *)(lVar6 + 0x40) + 7;
  puVar3 = (undefined8 *)(lVar1 + param_1 & 0xfffffffffffffff8);
  puVar2 = (undefined8 *)(lVar1 + param_2 & 0xfffffffffffffff8);
  *puVar3 = *puVar2;
  lVar1 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar4 = (ulong)*(byte *)(lVar1 + 0x50);
  uVar5 = uVar4 + 8 + (long)puVar3 & (uVar4 ^ 0xffffffffffffffff);
  uVar7 = uVar4 + 8 + (long)puVar2 & (uVar4 ^ 0xffffffffffffffff);
  (**(code **)(lVar1 + 0x20))(uVar5,uVar7);
  lVar6 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar4 = (ulong)*(byte *)(lVar6 + 0x50);
  lVar1 = *(long *)(lVar1 + 0x40) + uVar4;
  uVar5 = lVar1 + uVar5 & (uVar4 ^ 0xffffffffffffffff);
  uVar4 = lVar1 + uVar7 & (uVar4 ^ 0xffffffffffffffff);
  (**(code **)(lVar6 + 0x20))(uVar5,uVar4);
  lVar1 = *(long *)(lVar6 + 0x40) + 7;
  puVar3 = (undefined8 *)(lVar1 + uVar5 & 0xfffffffffffffff8);
  puVar2 = (undefined8 *)(lVar1 + uVar4 & 0xfffffffffffffff8);
  uVar8 = *puVar2;
  puVar3[1] = puVar2[1];
  *puVar3 = uVar8;
  uVar8 = puVar2[2];
  puVar3[3] = puVar2[3];
  puVar3[2] = uVar8;
  puVar3 = (undefined8 *)((long)puVar3 + 0x27U & 0xffffffffffffff8);
  puVar2 = (undefined8 *)((long)puVar2 + 0x27U & 0xffffffffffffff8);
  uVar8 = *puVar2;
  puVar3[1] = puVar2[1];
  *puVar3 = uVar8;
  return param_1;
}



/* Entry: 10001204c; end: 1000121b7;  */

long FUN_10001204c(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar1 + -8);
  (**(code **)(lVar5 + 0x28))(param_1,param_2,lVar1);
  lVar1 = *(long *)(lVar5 + 0x40) + 7;
  puVar6 = (undefined8 *)(lVar1 + param_1 & 0xfffffffffffffff8);
  puVar8 = (undefined8 *)(lVar1 + param_2 & 0xfffffffffffffff8);
  uVar2 = *puVar6;
  *puVar6 = *puVar8;
  _swift_bridgeObjectRelease(uVar2);
  lVar1 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar3 = (ulong)*(byte *)(lVar1 + 0x50);
  uVar4 = uVar3 + 8 + (long)puVar6 & (uVar3 ^ 0xffffffffffffffff);
  uVar7 = uVar3 + 8 + (long)puVar8 & (uVar3 ^ 0xffffffffffffffff);
  (**(code **)(lVar1 + 0x28))(uVar4,uVar7);
  lVar5 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar3 = (ulong)*(byte *)(lVar5 + 0x50);
  lVar1 = *(long *)(lVar1 + 0x40) + uVar3;
  uVar4 = lVar1 + uVar4 & (uVar3 ^ 0xffffffffffffffff);
  uVar3 = lVar1 + uVar7 & (uVar3 ^ 0xffffffffffffffff);
  (**(code **)(lVar5 + 0x28))(uVar4,uVar3);
  lVar1 = *(long *)(lVar5 + 0x40) + 7;
  puVar6 = (undefined8 *)(lVar1 + uVar4 & 0xfffffffffffffff8);
  puVar8 = (undefined8 *)(lVar1 + uVar3 & 0xfffffffffffffff8);
  uVar2 = *puVar6;
  *puVar6 = *puVar8;
  _swift_release(uVar2);
  uVar2 = puVar6[1];
  puVar6[1] = puVar8[1];
  _swift_release(uVar2);
  *(undefined1 *)(puVar6 + 2) = *(undefined1 *)(puVar8 + 2);
  uVar2 = puVar6[3];
  puVar6[3] = puVar8[3];
  _swift_release(uVar2);
  *(undefined1 *)(puVar6 + 4) = *(undefined1 *)(puVar8 + 4);
  uVar2 = puVar6[5];
  puVar6[5] = puVar8[5];
  _swift_release(uVar2);
  return param_1;
}



/* Entry: 1000121b8; end: 10001239b;  */

int * FUN_1000121b8(int *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  code *UNRECOVERED_JUMPTABLE;
  ulong *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  uint uVar18;
  
  lVar9 = 0;
  __s10Foundation3URLVMa();
  lVar16 = *(long *)(lVar9 + -8);
  uVar6 = *(uint *)(lVar16 + 0x54);
  lVar11 = *(long *)(param_3 + 0x18);
  lVar14 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar7 = *(uint *)(lVar14 + 0x54);
  uVar2 = uVar6;
  if (uVar6 <= uVar7) {
    uVar2 = uVar7;
  }
  lVar15 = *(long *)(lVar11 + -8);
  uVar10 = *(uint *)(lVar15 + 0x54);
  if (uVar2 <= uVar10) {
    uVar2 = uVar10;
  }
  uVar3 = uVar2;
  if (uVar2 < 0x80000000) {
    uVar3 = 0x7fffffff;
  }
  if (param_2 == 0) {
    return (int *)0x0;
  }
  uVar12 = (ulong)*(byte *)(lVar14 + 0x50);
  uVar17 = (ulong)*(byte *)(lVar15 + 0x50);
  if (uVar3 <= param_2 && param_2 - uVar3 != 0) {
    uVar1 = (*(long *)(lVar15 + 0x40) +
             (*(long *)(lVar14 + 0x40) + uVar17 +
              (uVar12 + (*(long *)(lVar16 + 0x40) + 7U & 0xfffffffffffffff8) + 8 &
              (uVar12 ^ 0xffffffffffffffff)) & (uVar17 ^ 0xffffffffffffffff)) + 7 &
            0xfffffffffffffff8) + 0x30;
    uVar18 = 2;
    uVar5 = uVar18;
    if ((uVar1 & 0xfffffff8) == 0) {
      uVar5 = (param_2 - uVar3) + 1;
    }
    if (0xffff < uVar5) {
      uVar18 = 4;
    }
    if (uVar5 < 0x100) {
      uVar18 = 1;
    }
    uVar4 = 0;
    if (1 < uVar5) {
      uVar4 = uVar18;
    }
    if (uVar4 < 2) {
      if ((uVar4 != 0) &&
         (uVar18 = (uint)*(byte *)((long)param_1 + uVar1), *(byte *)((long)param_1 + uVar1) != 0))
      goto LAB_1000122cc;
    }
    else if (uVar4 == 2) {
      uVar18 = (uint)*(ushort *)((long)param_1 + uVar1);
      if (*(ushort *)((long)param_1 + uVar1) != 0) {
LAB_1000122cc:
        iVar8 = uVar18 - 1;
        if ((uVar1 & 0xfffffff8) != 0) {
          iVar8 = *param_1;
        }
        return (int *)(ulong)(uVar3 + iVar8 + 1);
      }
    }
    else {
      uVar18 = *(uint *)((long)param_1 + uVar1);
      if (uVar18 != 0) goto LAB_1000122cc;
    }
  }
  if (uVar6 == uVar3) {
    UNRECOVERED_JUMPTABLE = *(code **)(lVar16 + 0x30);
    lVar11 = lVar9;
    uVar10 = uVar6;
  }
  else {
    puVar13 = (ulong *)((long)param_1 + *(long *)(lVar16 + 0x40) + 7 & 0xfffffffffffffff8);
    if (-1 < (int)uVar2) {
      uVar12 = *puVar13;
      if (0xfffffffe < uVar12) {
        uVar12 = 0xffffffff;
      }
      return (int *)(ulong)((int)uVar12 + 1);
    }
    param_1 = (int *)((long)puVar13 + uVar12 + 8 & ~uVar12);
    if (uVar7 == uVar3) {
      UNRECOVERED_JUMPTABLE = *(code **)(lVar14 + 0x30);
      lVar11 = *(long *)(param_3 + 0x10);
      uVar10 = uVar7;
    }
    else {
      UNRECOVERED_JUMPTABLE = *(code **)(lVar15 + 0x30);
      param_1 = (int *)((long)param_1 + uVar17 + *(long *)(lVar14 + 0x40) & ~uVar17);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000100012310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar10,lVar11);
  return param_1;
}



/* Entry: 10001239c; end: 1000125cb;  */

void FUN_10001239c(int *param_1,undefined8 param_2,uint param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  code *UNRECOVERED_JUMPTABLE;
  int iVar13;
  uint uVar14;
  ulong *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  uint uVar21;
  uint uVar22;
  
  lVar8 = 0;
  __s10Foundation3URLVMa();
  lVar18 = *(long *)(lVar8 + -8);
  uVar6 = *(uint *)(lVar18 + 0x54);
  lVar5 = *(long *)(param_4 + 0x10);
  lVar11 = *(long *)(param_4 + 0x18);
  lVar16 = *(long *)(lVar5 + -8);
  uVar7 = *(uint *)(lVar16 + 0x54);
  uVar2 = uVar6;
  if (uVar6 <= uVar7) {
    uVar2 = uVar7;
  }
  lVar17 = *(long *)(lVar11 + -8);
  uVar10 = *(uint *)(lVar17 + 0x54);
  if (uVar2 <= uVar10) {
    uVar2 = uVar10;
  }
  uVar3 = uVar2;
  if (uVar2 < 0x80000000) {
    uVar3 = 0x7fffffff;
  }
  lVar12 = *(long *)(lVar18 + 0x40);
  uVar9 = (ulong)*(byte *)(lVar16 + 0x50);
  lVar20 = *(long *)(lVar16 + 0x40);
  uVar19 = (ulong)*(byte *)(lVar17 + 0x50);
  lVar1 = (*(long *)(lVar17 + 0x40) +
           (lVar20 + uVar19 +
            (uVar9 + (lVar12 + 7U & 0xfffffffffffffff8) + 8 & (uVar9 ^ 0xffffffffffffffff)) &
           (uVar19 ^ 0xffffffffffffffff)) + 7 & 0xfffffffffffffff8) + 0x30;
  uVar21 = (uint)param_2;
  if (param_3 < uVar3 || param_3 - uVar3 == 0) {
    uVar22 = 0;
    iVar13 = uVar21 - uVar3;
    if (uVar3 <= uVar21 && iVar13 != 0) goto LAB_1000124b0;
  }
  else {
    uVar14 = 2;
    uVar4 = uVar14;
    if ((int)lVar1 == 0) {
      uVar4 = (param_3 - uVar3) + 1;
    }
    if (0xffff < uVar4) {
      uVar14 = 4;
    }
    if (uVar4 < 0x100) {
      uVar14 = 1;
    }
    uVar22 = 0;
    if (1 < uVar4) {
      uVar22 = uVar14;
    }
    iVar13 = uVar21 - uVar3;
    if (uVar3 <= uVar21 && iVar13 != 0) {
LAB_1000124b0:
      if ((int)lVar1 != 0) {
        iVar13 = 1;
        _bzero(param_1,lVar1);
        *param_1 = uVar21 + ~uVar3;
      }
      if (uVar22 < 2) {
        if (uVar22 == 0) {
          return;
        }
        *(char *)((long)param_1 + lVar1) = (char)iVar13;
        return;
      }
      if (uVar22 == 2) {
        *(short *)((long)param_1 + lVar1) = (short)iVar13;
        return;
      }
      *(int *)((long)param_1 + lVar1) = iVar13;
      return;
    }
  }
  if (uVar22 < 2) {
    if (uVar22 != 0) {
      *(undefined1 *)((long)param_1 + lVar1) = 0;
    }
  }
  else if (uVar22 == 2) {
    *(undefined2 *)((long)param_1 + lVar1) = 0;
  }
  else {
    *(undefined4 *)((long)param_1 + lVar1) = 0;
  }
  if (uVar21 != 0) {
    if (uVar6 == uVar3) {
      UNRECOVERED_JUMPTABLE = *(code **)(lVar18 + 0x38);
      lVar11 = lVar8;
      uVar10 = uVar6;
    }
    else {
      puVar15 = (ulong *)((long)param_1 + lVar12 + 7 & 0xfffffffffffffff8);
      if (-1 < (int)uVar2) {
        if ((int)uVar21 < 0) {
          uVar21 = uVar21 & 0x7fffffff;
        }
        else {
          uVar21 = uVar21 - 1;
        }
        *puVar15 = (ulong)uVar21;
        return;
      }
      param_1 = (int *)((long)puVar15 + uVar9 + 8 & ~uVar9);
      if (uVar7 == uVar3) {
        UNRECOVERED_JUMPTABLE = *(code **)(lVar16 + 0x38);
        lVar11 = lVar5;
        uVar10 = uVar7;
      }
      else {
        UNRECOVERED_JUMPTABLE = *(code **)(lVar17 + 0x38);
        param_1 = (int *)((long)param_1 + uVar19 + lVar20 & ~uVar19);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x000100012524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1,param_2,uVar10,lVar11);
    return;
  }
  return;
}



/* Entry: 1000125cc; end: 1000125d7;  */

void FUN_1000125cc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001000209e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getGenericMetadata_100028a70)(param_1,param_2,&DAT_100023028);
  return;
}



/* Entry: 1000125d8; end: 10001260b;  */

void FUN_1000125d8(undefined8 param_1,long param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = *(undefined8 *)(param_2 + 0x18);
  uStack_30 = *(undefined8 *)(param_2 + 0x10);
  uStack_18 = *(undefined8 *)(param_2 + 0x28);
  uStack_20 = *(undefined8 *)(param_2 + 0x20);
  _swift_getOpaqueTypeConformance(&uStack_30,&UNK_100023070,1);
  return;
}



/* Entry: 10001260c; end: 1000126cf;  */

void FUN_10001260c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  
  lVar1 = 0;
  __s7SwiftUI19_ConditionalContentV7StorageOMa();
  (*(code *)PTR____chkstk_darwin_100028280)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &stack0xffffffffffffffb0 + -extraout_x8;
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(puVar2,param_2,param_3);
  _swift_storeEnumTagMultiPayload(puVar2,lVar1,0);
  __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
            (param_1,puVar2,param_3,param_4,param_5,param_6);
  return;
}



/* Entry: 1000126d0; end: 100012793;  */

void FUN_1000126d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  
  lVar1 = 0;
  __s7SwiftUI19_ConditionalContentV7StorageOMa();
  (*(code *)PTR____chkstk_darwin_100028280)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &stack0xffffffffffffffb0 + -extraout_x8;
  (**(code **)(*(long *)(param_4 + -8) + 0x10))(puVar2,param_2,param_4);
  _swift_storeEnumTagMultiPayload(puVar2,lVar1,1);
  __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
            (param_1,puVar2,param_3,param_4,param_5,param_6);
  return;
}



/* Entry: 100012794; end: 100012a6f;  */

void FUN_100012794(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar9;
  long lVar10;
  long extraout_x12;
  undefined8 uVar11;
  code *pcVar12;
  ulong uVar13;
  code *pcVar14;
  undefined1 *puVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined1 auStack_f0 [8];
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  lVar19 = *(long *)(param_2 + -8);
  lVar18 = *(long *)(lVar19 + 0x40);
  uStack_b8 = param_1;
  (*(code *)PTR____chkstk_darwin_100028280)();
  puVar15 = auStack_f0 + -(lVar18 + 0xfU & 0xfffffffffffffff0);
  uVar2 = 0x10002dba0;
  FUN_10000c888(0x10002dba0,&UNK_100021bf0);
  uVar11 = *(undefined8 *)(param_2 + 0x10);
  uVar1 = 0xff;
  __s7SwiftUI19_ConditionalContentVMa(0xff,uVar2,uVar11);
  uVar16 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = 0xff;
  uStack_e0 = uVar1;
  __s7SwiftUI19_ConditionalContentVMa(0xff,uVar16,uVar11);
  lVar3 = 0;
  uStack_d8 = uVar2;
  __s7SwiftUI19_ConditionalContentVMa(0,uVar1,uVar2);
  lStack_c8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100028280)(*(long *)(lStack_c8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar17 = (long)puVar15 - extraout_x8;
  lVar4 = 0;
  __s7SwiftUI15ModifiedContentVMa(0,lVar3,PTR___s7SwiftUI25_AppearanceActionModifierVN_100028510);
  lStack_c0 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100028280)(*(undefined8 *)(lStack_c0 + 0x40));
  lVar10 = lVar17 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_e8 = lVar10;
  (*(code *)PTR____chkstk_darwin_100028280)();
  lStack_d0 = lVar10 - extraout_x12;
  FUN_100012a70(lVar17,param_2);
  (**(code **)(lVar19 + 0x10))(puVar15);
  uVar9 = (ulong)*(byte *)(lVar19 + 0x50);
  uVar13 = uVar9 + 0x30 & (uVar9 ^ 0xffffffffffffffff);
  puVar5 = &UNK_100029168;
  _swift_allocObject(&UNK_100029168,uVar13 + lVar18,uVar9 | 7);
  *(undefined8 *)(puVar5 + 0x10) = uVar11;
  *(undefined8 *)(puVar5 + 0x18) = uVar16;
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  uStack_a8 = *(undefined8 *)(param_2 + 0x28);
  uStack_b0 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(puVar5 + 0x28) = uStack_a8;
  *(undefined8 *)(puVar5 + 0x20) = uStack_b0;
  puVar6 = puVar5 + uVar13;
  (**(code **)(lVar19 + 0x20))(puVar6,puVar15,param_2);
  FUN_100013bf0();
  puVar8 = PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_1000284d8;
  uStack_68 = uStack_b0;
  puVar7 = PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_1000284d8;
  puStack_70 = puVar6;
  _swift_getWitnessTable
            (PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_1000284d8,uStack_e0,
             &puStack_70);
  uStack_78 = uStack_b0;
  puVar6 = puVar8;
  uStack_80 = uVar2;
  _swift_getWitnessTable(puVar8,uStack_d8,&uStack_80);
  puStack_90 = puVar7;
  puStack_88 = puVar6;
  _swift_getWitnessTable(puVar8,lVar3,&puStack_90);
  lVar10 = lStack_e8;
  __s7SwiftUI4ViewPAAE8onAppear7performQryycSg_tF(lStack_e8,FUN_100013b70,puVar5,lVar3,puVar8);
  _swift_release(puVar5);
  (**(code **)(lStack_c8 + 8))(lVar17,lVar3);
  puStack_98 = PTR___s7SwiftUI25_AppearanceActionModifierVAA04ViewE0AAWP_100028500;
  puStack_a0 = puVar8;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000283d8,lVar4,
             &puStack_a0);
  lVar17 = lStack_c0;
  lVar3 = lStack_d0;
  pcVar12 = *(code **)(lStack_c0 + 0x10);
  (*pcVar12)(lStack_d0,lVar10,lVar4);
  pcVar14 = *(code **)(lVar17 + 8);
  (*pcVar14)(lVar10,lVar4);
  (*pcVar12)(uStack_b8,lVar3,lVar4);
  (*pcVar14)(lVar3,lVar4);
  return;
}



/* Entry: 100012a70; end: 100013293;  */

void FUN_100012a70(undefined8 param_1,long param_2)

{
  undefined1 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long lVar13;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  code *pcVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined1 auStack_1d0 [8];
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  undefined1 *puStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  undefined8 uStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  long lStack_120;
  long lStack_118;
  undefined2 uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  char cStack_70;
  undefined7 uStack_6f;
  
  lVar12 = *(long *)(param_2 + 0x10);
  lVar7 = *(long *)(param_2 + 0x18);
  lVar4 = 0;
  uStack_148 = param_1;
  __s7SwiftUI19_ConditionalContentVMa(0,lVar7,lVar12);
  lStack_198 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100028280)
            (*(long *)(lStack_198 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lStack_1b0 = *(long *)(lVar7 + -8);
  lStack_1a8 = lVar7;
  puStack_1a0 = auStack_1d0 + -extraout_x8;
  (*(code *)PTR____chkstk_darwin_100028280)(*(undefined8 *)(lStack_1b0 + 0x40));
  lVar13 = (long)(auStack_1d0 + -extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_1c0 = lVar13;
  (*(code *)PTR____chkstk_darwin_100028280)();
  lVar13 = lVar13 - extraout_x12;
  lStack_180 = *(long *)(lVar12 + -8);
  lStack_1b8 = lVar13;
  (*(code *)PTR____chkstk_darwin_100028280)(*(undefined8 *)(lStack_180 + 0x40));
  lVar13 = lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_190 = lVar13;
  (*(code *)PTR____chkstk_darwin_100028280)();
  lVar13 = lVar13 - extraout_x12_00;
  uVar16 = 0x10002dba0;
  lStack_188 = lVar13;
  FUN_10000c888(0x10002dba0,&UNK_100021bf0);
  lVar5 = 0;
  uStack_178 = uVar16;
  __s7SwiftUI19_ConditionalContentVMa(0,uVar16,lVar12);
  lStack_170 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100028280)
            (*(long *)(lStack_170 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = lVar13 - extraout_x8_02;
  lVar6 = 0;
  __s7SwiftUI5ImageV12ResizingModeOMa();
  lVar15 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100028280)(*(undefined8 *)(lVar15 + 0x40));
  lVar17 = lVar13 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0;
  lStack_160 = lVar4;
  __s7SwiftUI19_ConditionalContentVMa(0,lVar5,lVar4);
  lStack_158 = *(long *)(lVar7 + -8);
  lStack_150 = lVar7;
  (*(code *)PTR____chkstk_darwin_100028280)
            (*(long *)(lStack_158 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = lVar17 - extraout_x8_04;
  plVar2 = (long *)(unaff_x20 + *(int *)(param_2 + 0x40));
  lStack_118 = plVar2[1];
  lStack_120 = *plVar2;
  lStack_168 = param_2;
  FUN_10000c3c0(0x10002dbb8,&UNK_100021c00);
  __s7SwiftUI5StateV12wrappedValuexvg(&cStack_70);
  lVar3 = lStack_168;
  lVar10 = lStack_180;
  lVar7 = CONCAT71(uStack_6f,cStack_70);
  if (lVar7 == 0) {
    puVar1 = (undefined1 *)(unaff_x20 + *(int *)(lStack_168 + 0x44));
    lStack_118 = *(long *)(puVar1 + 8);
    lStack_120 = CONCAT71(lStack_120._1_7_,*puVar1);
    uVar16 = 0x10002dbb0;
    lStack_1c8 = lVar4;
    FUN_10000c3c0(0x10002dbb0,&UNK_100021bf8);
    __s7SwiftUI5StateV12wrappedValuexvg(&cStack_70);
    lVar7 = lStack_188;
    if (cStack_70 == '\x01') {
      uVar18 = *(undefined8 *)(lVar3 + 0x20);
      pcVar14 = *(code **)(lVar10 + 0x10);
      (*pcVar14)(lStack_188,unaff_x20 + *(int *)(lVar3 + 0x38),lVar12);
      lVar10 = lStack_190;
      lVar4 = lStack_190;
      (*pcVar14)(lStack_190,lVar7,lVar12);
      FUN_100013bf0();
      FUN_1000126d0(lVar13,lVar10,uStack_178,lVar12,lVar4,uVar18);
      puVar9 = PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_1000284d8;
      puVar8 = PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_1000284d8;
      lStack_f0 = lVar4;
      uStack_e8 = uVar18;
      _swift_getWitnessTable
                (PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_1000284d8,lVar5,
                 &lStack_f0);
      lVar17 = lStack_160;
      uVar16 = *(undefined8 *)(lVar3 + 0x28);
      uStack_100 = uVar16;
      uStack_f8 = uVar18;
      _swift_getWitnessTable(puVar9,lStack_160,&uStack_100);
      lVar4 = lStack_1c8;
      FUN_10001260c(lStack_1c8,lVar13,lVar5,lVar17,puVar8,puVar9);
      (**(code **)(lStack_170 + 8))(lVar13,lVar5);
      pcVar14 = *(code **)(lStack_180 + 8);
      (*pcVar14)(lVar10,lVar12);
      lVar10 = lStack_188;
    }
    else {
      puVar1 = (undefined1 *)(unaff_x20 + *(int *)(lVar3 + 0x48));
      lStack_118 = *(long *)(puVar1 + 8);
      lStack_120 = CONCAT71(lStack_120._1_7_,*puVar1);
      __s7SwiftUI5StateV12wrappedValuexvg(&cStack_70,uVar16);
      lVar17 = lStack_160;
      lVar4 = lStack_188;
      lVar6 = lStack_1a8;
      lVar7 = lStack_1b8;
      if (cStack_70 == '\x01') {
        uVar16 = *(undefined8 *)(lVar3 + 0x28);
        pcVar14 = *(code **)(lStack_1b0 + 0x10);
        (*pcVar14)(lStack_1b8,unaff_x20 + *(int *)(lVar3 + 0x3c),lStack_1a8);
        lVar10 = lStack_1c0;
        (*pcVar14)(lStack_1c0,lVar7,lVar6);
        puVar1 = puStack_1a0;
        uVar18 = *(undefined8 *)(lVar3 + 0x20);
        lVar7 = lVar10;
        FUN_10001260c(puStack_1a0,lVar10,lVar6,lVar12,uVar16,uVar18);
        FUN_100013bf0();
        puVar9 = PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_1000284d8;
        puVar8 = PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_1000284d8;
        lStack_d0 = lVar7;
        uStack_c8 = uVar18;
        _swift_getWitnessTable
                  (PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_1000284d8,lVar5,
                   &lStack_d0);
        uStack_e0 = uVar16;
        uStack_d8 = uVar18;
        _swift_getWitnessTable(puVar9,lVar17,&uStack_e0);
        lVar4 = lStack_1c8;
        FUN_1000126d0(lStack_1c8,puVar1,lVar5,lVar17,puVar8,puVar9);
        (**(code **)(lStack_198 + 8))(puVar1,lVar17);
        pcVar14 = *(code **)(lStack_1b0 + 8);
        (*pcVar14)(lVar10,lVar6);
        lVar10 = lStack_1b8;
        lVar12 = lVar6;
      }
      else {
        uVar18 = *(undefined8 *)(lVar3 + 0x20);
        pcVar14 = *(code **)(lVar10 + 0x10);
        (*pcVar14)(lStack_188,unaff_x20 + *(int *)(lVar3 + 0x38),lVar12);
        lVar7 = lStack_190;
        (*pcVar14)(lStack_190,lVar4,lVar12);
        puVar1 = puStack_1a0;
        uVar16 = *(undefined8 *)(lVar3 + 0x28);
        lVar4 = lVar7;
        FUN_1000126d0(puStack_1a0,lVar7,lStack_1a8,lVar12,uVar16,uVar18);
        FUN_100013bf0();
        puVar9 = PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_1000284d8;
        puVar8 = PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_1000284d8;
        lStack_80 = lVar4;
        uStack_78 = uVar18;
        _swift_getWitnessTable
                  (PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_1000284d8,lVar5,
                   &lStack_80);
        uStack_90 = uVar16;
        uStack_88 = uVar18;
        _swift_getWitnessTable(puVar9,lVar17,&uStack_90);
        lVar4 = lStack_1c8;
        FUN_1000126d0(lStack_1c8,puVar1,lVar5,lVar17,puVar8,puVar9);
        (**(code **)(lStack_198 + 8))(puVar1,lVar17);
        pcVar14 = *(code **)(lStack_180 + 8);
        (*pcVar14)(lVar7,lVar12);
        lVar10 = lStack_188;
      }
    }
    (*pcVar14)(lVar10,lVar12);
  }
  else {
    (**(code **)(lVar15 + 0x68))
              (lVar17,*(undefined4 *)PTR___s7SwiftUI5ImageV12ResizingModeO7stretchyA2EmFWC_100028648
               ,lVar6);
    lVar10 = lVar17;
    __s7SwiftUI5ImageV9resizable9capInsets12resizingModeAcA04EdgeF0V_AC08ResizingH0OtF
              (0,0,0,0,lVar17,lVar7);
    (**(code **)(lVar15 + 8))(lVar17,lVar6);
    lStack_118 = 0;
    uStack_110 = 1;
    lStack_120 = lVar10;
    FUN_100013bf0();
    lVar3 = lStack_168;
    uVar18 = *(undefined8 *)(lStack_168 + 0x20);
    FUN_10001260c(lVar13,&lStack_120,uStack_178,lVar12,lVar17,uVar18);
    puVar9 = PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_1000284d8;
    puVar8 = PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_1000284d8;
    lStack_130 = lVar17;
    uStack_128 = uVar18;
    _swift_getWitnessTable
              (PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_1000284d8,lVar5,
               &lStack_130);
    lVar17 = lStack_160;
    uVar16 = *(undefined8 *)(lVar3 + 0x28);
    uStack_140 = uVar16;
    uStack_138 = uVar18;
    _swift_getWitnessTable(puVar9,lStack_160,&uStack_140);
    FUN_10001260c(lVar4,lVar13,lVar5,lVar17,puVar8,puVar9);
    _swift_release(lVar7);
    (**(code **)(lStack_170 + 8))(lVar13,lVar5);
    _swift_release();
  }
  FUN_100013bf0();
  puVar9 = PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_1000284d8;
  puVar8 = PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_1000284d8;
  lStack_a0 = lVar10;
  uStack_98 = uVar18;
  _swift_getWitnessTable
            (PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_1000284d8,lVar5,
             &lStack_a0);
  puVar11 = puVar9;
  uStack_b0 = uVar16;
  uStack_a8 = uVar18;
  _swift_getWitnessTable(puVar9,lVar17,&uStack_b0);
  lVar7 = lStack_150;
  puStack_c0 = puVar8;
  puStack_b8 = puVar11;
  _swift_getWitnessTable(puVar9,lStack_150,&puStack_c0);
  lVar12 = lStack_158;
  (**(code **)(lStack_158 + 0x10))(uStack_148,lVar4,lVar7);
  (**(code **)(lVar12 + 8))(lVar4,lVar7);
  return;
}



/* Entry: 100013294; end: 1000136bb;  */

void FUN_100013294(long param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long lVar11;
  long lVar12;
  long extraout_x8;
  long extraout_x8_00;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long extraout_x12;
  long unaff_x20;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  ulong *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  ulong uStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  byte bStack_68;
  undefined7 uStack_67;
  
  lVar11 = *(long *)(param_1 + -8);
  (*(code *)PTR____chkstk_darwin_100028280)();
  lVar12 = (long)&uStack_e0 - (extraout_x12 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  __s10Foundation3URLVMa();
  lVar16 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100028280)(*(undefined8 *)(lVar16 + 0x40));
  lVar19 = lVar12 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0;
  __s10Foundation10URLRequestVMa();
  lVar18 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100028280)(*(undefined8 *)(lVar18 + 0x40));
  lVar13 = lVar19 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar1 = (undefined1 *)(unaff_x20 + *(int *)(param_1 + 0x44));
  uStack_98 = *(undefined8 *)(puVar1 + 8);
  puStack_a0 = (undefined *)CONCAT71(puStack_a0._1_7_,*puVar1);
  uVar21 = 0x10002dbb0;
  FUN_10000c3c0(0x10002dbb0,&UNK_100021bf8);
  __s7SwiftUI5StateV12wrappedValuexvg(&bStack_68);
  if ((bStack_68 & 1) == 0) {
    puVar3 = (undefined8 *)(unaff_x20 + *(int *)(param_1 + 0x40));
    uStack_98 = puVar3[1];
    puStack_a0 = (undefined *)*puVar3;
    FUN_10000c3c0(0x10002dbb8,&UNK_100021c00);
    __s7SwiftUI5StateV12wrappedValuexvg(&bStack_68);
    if (CONCAT71(uStack_67,bStack_68) == 0) {
      puVar1 = (undefined1 *)(unaff_x20 + *(int *)(param_1 + 0x48));
      uStack_98 = *(undefined8 *)(puVar1 + 8);
      puStack_a0._0_1_ = *puVar1;
      __s7SwiftUI5StateV12wrappedValuexvg(&bStack_68,uVar21);
      if ((bStack_68 & 1) == 0) {
        puStack_a0._0_1_ = 1;
        lStack_d8 = lVar18;
        lStack_d0 = lVar7;
        __s7SwiftUI5StateV12wrappedValuexvs(&puStack_a0,uVar21);
        puStack_a0 = (undefined *)((ulong)puStack_a0._1_7_ << 8);
        __s7SwiftUI5StateV12wrappedValuexvs(&puStack_a0,uVar21);
        (**(code **)(lVar16 + 0x10))(lVar19,unaff_x20,lVar6);
        __s10Foundation10URLRequestV3url11cachePolicy15timeoutIntervalAcA3URLV_So017NSURLRequestCacheE0VSdtcfC
                  (lVar13,0x404e000000000000,lVar19,0);
        lVar6 = *(long *)(unaff_x20 + *(int *)(param_1 + 0x34));
        puVar20 = (ulong *)(lVar6 + 0x40);
        uStack_e0 = -1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f);
        uVar17 = 0xffffffffffffffff;
        if (-uStack_e0 < 0x40) {
          uVar17 = ~(-1L << (-uStack_e0 & 0x3f));
        }
        uVar17 = uVar17 & *puVar20;
        uVar14 = 0x3f - uStack_e0;
        _swift_bridgeObjectRetain(lVar6);
        lVar16 = 0;
        lVar7 = lVar16;
        while( true ) {
          for (; uVar17 != 0; uVar17 = uVar17 - 1 & uVar17) {
            uVar15 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
            uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
            uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
            uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
            uVar15 = lVar7 << 10 | LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) << 4;
            puVar3 = (undefined8 *)(*(long *)(lVar6 + 0x30) + uVar15);
            uVar21 = *puVar3;
            uVar23 = puVar3[1];
            puVar3 = (undefined8 *)(*(long *)(lVar6 + 0x38) + uVar15);
            uVar22 = *puVar3;
            uVar2 = puVar3[1];
            _swift_bridgeObjectRetain(uVar23);
            _swift_bridgeObjectRetain(uVar2);
            __s10Foundation10URLRequestV8setValue_18forHTTPHeaderFieldySSSg_SStF
                      (uVar22,uVar2,uVar21,uVar23);
            _swift_bridgeObjectRelease(uVar2);
            _swift_bridgeObjectRelease(uVar23);
            lVar16 = lVar7;
          }
          bVar5 = SCARRY8(lVar7,1);
          lVar7 = lVar7 + 1;
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1000136bc);
            (*pcVar4)();
          }
          if ((long)(uVar14 >> 6) <= lVar7) break;
          uVar17 = puVar20[lVar7];
        }
        FUN_100013c60(lVar6,puVar20,~uStack_e0,lVar16,0);
        puVar8 = PTR__OBJC_CLASS___NSURLSession_100028178;
        _objc_opt_self(PTR__OBJC_CLASS___NSURLSession_100028178);
        func_0x000100020de0();
        _objc_retainAutoreleasedReturnValue();
        __s10Foundation10URLRequestV19_bridgeToObjectiveCSo12NSURLRequestCyF();
        (**(code **)(lVar11 + 0x10))(lVar12,unaff_x20,param_1);
        uVar17 = (ulong)*(byte *)(lVar11 + 0x50);
        uVar14 = uVar17 + 0x30 & (uVar17 ^ 0xffffffffffffffff);
        puVar9 = &UNK_100029190;
        _swift_allocObject(&UNK_100029190,uVar14 + extraout_x12,uVar17 | 7);
        uVar21 = *(undefined8 *)(param_1 + 0x10);
        uVar23 = *(undefined8 *)(param_1 + 0x28);
        uVar22 = *(undefined8 *)(param_1 + 0x20);
        *(undefined8 *)(puVar9 + 0x18) = *(undefined8 *)(param_1 + 0x18);
        *(undefined8 *)(puVar9 + 0x10) = uVar21;
        *(undefined8 *)(puVar9 + 0x28) = uVar23;
        *(undefined8 *)(puVar9 + 0x20) = uVar22;
        (**(code **)(lVar11 + 0x20))(puVar9 + uVar14,lVar12,param_1);
        pcStack_80 = FUN_100013d7c;
        puStack_a0 = PTR___NSConcreteStackBlock_100028278;
        uStack_98 = 0x42000000;
        pcStack_90 = FUN_100013aac;
        puStack_88 = &UNK_1000291a8;
        ppuVar10 = &puStack_a0;
        puStack_78 = puVar9;
        __Block_copy(ppuVar10);
        _swift_release(puStack_78);
        func_0x000100020bc0(puVar8);
        _objc_retainAutoreleasedReturnValue();
        __Block_release(ppuVar10);
        _objc_release_x19();
        _objc_release_x20();
        func_0x000100020d40(puVar8);
        _objc_release_x22();
        (**(code **)(lStack_d8 + 8))(lVar13,lStack_d0);
      }
    }
    else {
      _swift_release();
    }
  }
  return;
}



/* Entry: 1000136bc; end: 10001387f;  */

void FUN_1000136bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_a0 = param_9;
  uStack_68 = param_9;
  lVar1 = 0;
  uStack_a8 = param_1;
  uStack_98 = param_6;
  uStack_90 = param_7;
  uStack_88 = param_8;
  uStack_80 = param_6;
  uStack_78 = param_7;
  uStack_70 = param_8;
  FUN_1000125cc(0,&uStack_80);
  lVar7 = *(long *)(lVar1 + -8);
  lVar10 = *(long *)(lVar7 + 0x40);
  (*(code *)PTR____chkstk_darwin_100028280)(lVar10 + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_b0 + -extraout_x8;
  lVar2 = 0x10002dbc0;
  FUN_10000c3c0(0x10002dbc0,&UNK_100021d00);
  (*(code *)PTR____chkstk_darwin_100028280)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __sScPMa();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))((long)puVar9 - extraout_x8_00,1,1,lVar2);
  (**(code **)(lVar7 + 0x10))(puVar9,param_5,lVar1);
  __sScMMa(0);
  FUN_100013e54(param_1,param_2);
  __sScM6sharedScMvgZ();
  uVar3 = param_1;
  FUN_100013e68();
  uVar5 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar8 = uVar5 + 0x40 & (uVar5 ^ 0xffffffffffffffff);
  uVar6 = lVar10 + uVar8 + 7 & 0xfffffffffffffff8;
  puVar4 = &UNK_1000291e0;
  _swift_allocObject(&UNK_1000291e0,uVar6 + 0x10,uVar5 | 7);
  *(undefined8 *)(puVar4 + 0x10) = param_1;
  *(undefined8 *)(puVar4 + 0x18) = uVar3;
  *(undefined8 *)(puVar4 + 0x20) = uStack_98;
  *(undefined8 *)(puVar4 + 0x28) = uStack_90;
  *(undefined8 *)(puVar4 + 0x30) = uStack_88;
  *(undefined8 *)(puVar4 + 0x38) = uStack_a0;
  (**(code **)(lVar7 + 0x20))(puVar4 + uVar8,puVar9,lVar1);
  *(undefined8 *)(puVar4 + uVar6) = uStack_a8;
  *(undefined8 *)((long)(puVar4 + uVar6) + 8) = param_2;
  FUN_100014234(0,0,(long)puVar9 - extraout_x8_00,&UNK_100021c18,puVar4);
  _swift_release();
  return;
}



/* Entry: 100013880; end: 1000138ff;  */

void FUN_100013880(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long unaff_x22;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  *(undefined8 *)(unaff_x22 + 0x58) = in_stack_00000000;
  *(undefined8 *)(unaff_x22 + 0x60) = in_stack_00000008;
  *(undefined8 *)(unaff_x22 + 0x48) = in_x6;
  *(undefined8 *)(unaff_x22 + 0x50) = in_x7;
  *(undefined8 *)(unaff_x22 + 0x38) = in_x4;
  *(undefined8 *)(unaff_x22 + 0x40) = in_x5;
  *(undefined8 *)(unaff_x22 + 0x30) = in_x3;
  uVar1 = 0;
  __sScMMa();
  uVar2 = uVar1;
  __sScM6sharedScMvgZ();
  *(undefined8 *)(unaff_x22 + 0x68) = uVar2;
  FUN_100013e68();
  __sScA15unownedExecutorScevgTj(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x000100020af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_100028b70)(FUN_100013900,uVar1,uVar2);
  return;
}



/* Entry: 100013900; end: 100013aab;  */

void FUN_100013900(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long unaff_x22;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar3 = *(ulong *)(unaff_x22 + 0x40);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x58);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x68));
  puVar2 = (undefined8 *)(unaff_x22 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x18) = uVar7;
  *puVar2 = uVar6;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar4;
  FUN_1000125cc(0,puVar2);
  *(undefined1 *)puVar2 = 0;
  uVar4 = 0x10002dbb0;
  FUN_10000c3c0(0x10002dbb0,&UNK_100021bf8);
  __s7SwiftUI5StateV12wrappedValuexvs(puVar2,uVar4);
  if (uVar3 >> 0x3c < 0xf) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x40);
    puVar1 = PTR__OBJC_CLASS___UIImage_100028190;
    _objc_allocWithZone();
    FUN_100010128(uVar5,uVar6);
    FUN_100010128(uVar5,uVar6);
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar5,uVar6);
    func_0x000100020c00();
    _objc_release_x26();
    FUN_100013e40(uVar5,uVar6);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x40);
    if (puVar1 != (undefined *)0x0) {
      _objc_retain_x20();
      __s7SwiftUI5ImageV02uiC0ACSo7UIImageC_tcfC();
      *(undefined8 *)(unaff_x22 + 0x10) = uVar5;
      _swift_retain();
      uVar4 = 0x10002dbb8;
      FUN_10000c3c0(0x10002dbb8,&UNK_100021c00);
      __s7SwiftUI5StateV12wrappedValuexvs(puVar2,uVar4);
      FUN_100013e40(uVar6,uVar7);
      _objc_release_x23();
      _swift_release(uVar5);
      goto LAB_100013a88;
    }
    FUN_100013e40(uVar6,uVar7);
  }
  *(undefined1 *)(unaff_x22 + 0x10) = 1;
  __s7SwiftUI5StateV12wrappedValuexvs(*(undefined8 *)(unaff_x22 + 0x30),puVar2,uVar4);
LAB_100013a88:
                    /* WARNING: Could not recover jumptable at 0x000100013aa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100013aac; end: 100013b5b;  */

void FUN_100013aac(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_2 == 0) {
    _swift_retain(uVar2);
    lVar3 = -0x1000000000000000;
  }
  else {
    lVar3 = param_2;
    _swift_retain(uVar2);
    _objc_retain_x22();
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ(param_2);
    _objc_release_x24();
  }
  _objc_retain_x21();
  _objc_retain_x19();
  (*pcVar1)(param_2,lVar3,param_3,param_4);
  _objc_release_x24();
  _objc_release_x25();
  FUN_100013e40(param_2,lVar3);
                    /* WARNING: Could not recover jumptable at 0x000100020a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_100028ae0)(uVar2);
  return;
}



/* Entry: 100013b5c; end: 100013b5f;  */

void FUN_100013b5c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010002037c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_1000285c8
  )();
  return;
}



/* Entry: 100013b60; end: 100013b63;  */

void FUN_100013b60(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100020388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC4List4view6inputsAA01_cE7OutputsVAA11_GraphValueVyxG_AA01_cE6InputsVtFZ_1000285d0
  )();
  return;
}



/* Entry: 100013b64; end: 100013b67;  */

void FUN_100013b64(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000203ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s7SwiftUI4ViewPAAE14_viewListCount6inputsSiSgAA01_ceF6InputsV_tFZ_1000285f8)();
  return;
}



/* Entry: 100013b68; end: 100013b6b;  */

void FUN_100013b68(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar9;
  long lVar10;
  long extraout_x12;
  undefined8 uVar11;
  code *pcVar12;
  ulong uVar13;
  code *pcVar14;
  undefined1 *puVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined1 auStack_f0 [8];
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  lVar19 = *(long *)(param_2 + -8);
  lVar18 = *(long *)(lVar19 + 0x40);
  uStack_b8 = param_1;
  (*(code *)PTR____chkstk_darwin_100028280)();
  puVar15 = auStack_f0 + -(lVar18 + 0xfU & 0xfffffffffffffff0);
  uVar2 = 0x10002dba0;
  FUN_10000c888(0x10002dba0,&UNK_100021bf0);
  uVar11 = *(undefined8 *)(param_2 + 0x10);
  uVar1 = 0xff;
  __s7SwiftUI19_ConditionalContentVMa(0xff,uVar2,uVar11);
  uVar16 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = 0xff;
  uStack_e0 = uVar1;
  __s7SwiftUI19_ConditionalContentVMa(0xff,uVar16,uVar11);
  lVar3 = 0;
  uStack_d8 = uVar2;
  __s7SwiftUI19_ConditionalContentVMa(0,uVar1,uVar2);
  lStack_c8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100028280)(*(long *)(lStack_c8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar17 = (long)puVar15 - extraout_x8;
  lVar4 = 0;
  __s7SwiftUI15ModifiedContentVMa(0,lVar3,PTR___s7SwiftUI25_AppearanceActionModifierVN_100028510);
  lStack_c0 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100028280)(*(undefined8 *)(lStack_c0 + 0x40));
  lVar10 = lVar17 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_e8 = lVar10;
  (*(code *)PTR____chkstk_darwin_100028280)();
  lStack_d0 = lVar10 - extraout_x12;
  FUN_100012a70(lVar17,param_2);
  (**(code **)(lVar19 + 0x10))(puVar15);
  uVar9 = (ulong)*(byte *)(lVar19 + 0x50);
  uVar13 = uVar9 + 0x30 & (uVar9 ^ 0xffffffffffffffff);
  puVar5 = &UNK_100029168;
  _swift_allocObject(&UNK_100029168,uVar13 + lVar18,uVar9 | 7);
  *(undefined8 *)(puVar5 + 0x10) = uVar11;
  *(undefined8 *)(puVar5 + 0x18) = uVar16;
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  uStack_a8 = *(undefined8 *)(param_2 + 0x28);
  uStack_b0 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(puVar5 + 0x28) = uStack_a8;
  *(undefined8 *)(puVar5 + 0x20) = uStack_b0;
  puVar6 = puVar5 + uVar13;
  (**(code **)(lVar19 + 0x20))(puVar6,puVar15,param_2);
  FUN_100013bf0();
  puVar8 = PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_1000284d8;
  uStack_68 = uStack_b0;
  puVar7 = PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_1000284d8;
  puStack_70 = puVar6;
  _swift_getWitnessTable
            (PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_1000284d8,uStack_e0,
             &puStack_70);
  uStack_78 = uStack_b0;
  puVar6 = puVar8;
  uStack_80 = uVar2;
  _swift_getWitnessTable(puVar8,uStack_d8,&uStack_80);
  puStack_90 = puVar7;
  puStack_88 = puVar6;
  _swift_getWitnessTable(puVar8,lVar3,&puStack_90);
  lVar10 = lStack_e8;
  __s7SwiftUI4ViewPAAE8onAppear7performQryycSg_tF(lStack_e8,FUN_100013b70,puVar5,lVar3,puVar8);
  _swift_release(puVar5);
  (**(code **)(lStack_c8 + 8))(lVar17,lVar3);
  puStack_98 = PTR___s7SwiftUI25_AppearanceActionModifierVAA04ViewE0AAWP_100028500;
  puStack_a0 = puVar8;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000283d8,lVar4,
             &puStack_a0);
  lVar17 = lStack_c0;
  lVar3 = lStack_d0;
  pcVar12 = *(code **)(lStack_c0 + 0x10);
  (*pcVar12)(lStack_d0,lVar10,lVar4);
  pcVar14 = *(code **)(lVar17 + 8);
  (*pcVar14)(lVar10,lVar4);
  (*pcVar12)(uStack_b8,lVar3,lVar4);
  (*pcVar14)(lVar3,lVar4);
  return;
}



/* Entry: 100013b6c; end: 100013b6f;  */

void FUN_100013b6c(void)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar5 = *(long *)(unaff_x20 + 0x18);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar7 = *(long *)(unaff_x20 + 0x10);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_60 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar3 = 0;
  lStack_70 = lVar7;
  FUN_1000125cc(0,&lStack_70);
  uVar6 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  lVar1 = unaff_x20 + (uVar6 + 0x30 & (uVar6 ^ 0xffffffffffffffff));
  lVar4 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar4 + -8) + 8))(lVar1,lVar4);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x34)));
  (**(code **)(*(long *)(lVar7 + -8) + 8))(lVar1 + *(int *)(lVar3 + 0x38));
  (**(code **)(*(long *)(lVar5 + -8) + 8))(lVar1 + *(int *)(lVar3 + 0x3c),lVar5);
  puVar2 = (undefined8 *)(lVar1 + *(int *)(lVar3 + 0x40));
  _swift_release(*puVar2);
  _swift_release(puVar2[1]);
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x44) + 8));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x48) + 8));
  _swift_deallocObject();
  return;
}



/* Entry: 100013b70; end: 100013bef;  */

void FUN_100013b70(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_38 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar1 = 0;
  uStack_50 = uVar4;
  uStack_40 = uVar5;
  FUN_1000125cc(0,&uStack_50);
  uStack_50 = uVar4;
  uStack_48 = uVar2;
  uStack_40 = uVar5;
  uStack_38 = uVar3;
  FUN_1000125cc(*(undefined1 *)(*(long *)(lVar1 + -8) + 0x50),0,&uStack_50);
  FUN_100013294();
  return;
}



/* Entry: 100013bf0; end: 100013c5f;  */

void FUN_100013bf0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_20;
  undefined *puStack_18;
  
  if (puRam000000010002dba8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x10002dba0;
  FUN_10000c888(0x10002dba0,&UNK_100021bf0);
  puStack_20 = PTR___s7SwiftUI5ImageVAA4ViewAAWP_100028660;
  puStack_18 = PTR___s7SwiftUI18_AspectRatioLayoutVAA12ViewModifierAAWP_100028470;
  puVar2 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000283d8;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000283d8,uVar1,
             &puStack_20);
  puRam000000010002dba8 = puVar2;
  return;
}



/* Entry: 100013c60; end: 100013c67;  */

void FUN_100013c60(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100020a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_100028ae0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 100013c68; end: 100013d7b;  */

void FUN_100013c68(void)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar5 = *(long *)(unaff_x20 + 0x18);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar7 = *(long *)(unaff_x20 + 0x10);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_60 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar3 = 0;
  lStack_70 = lVar7;
  FUN_1000125cc(0,&lStack_70);
  uVar6 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  lVar1 = unaff_x20 + (uVar6 + 0x30 & (uVar6 ^ 0xffffffffffffffff));
  lVar4 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar4 + -8) + 8))(lVar1,lVar4);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x34)));
  (**(code **)(*(long *)(lVar7 + -8) + 8))(lVar1 + *(int *)(lVar3 + 0x38));
  (**(code **)(*(long *)(lVar5 + -8) + 8))(lVar1 + *(int *)(lVar3 + 0x3c),lVar5);
  puVar2 = (undefined8 *)(lVar1 + *(int *)(lVar3 + 0x40));
  _swift_release(*puVar2);
  _swift_release(puVar2[1]);
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x44) + 8));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x48) + 8));
  _swift_deallocObject();
  return;
}



/* Entry: 100013d7c; end: 100013e23;  */

void FUN_100013d7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar1 = 0;
  uStack_70 = uVar5;
  uStack_60 = uVar6;
  FUN_1000125cc(0,&uStack_70);
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  FUN_1000136bc(param_1,param_2,param_3,param_4,
                unaff_x20 + (uVar2 + 0x30 & (uVar2 ^ 0xffffffffffffffff)),uVar5,uVar3,uVar6,uVar4);
  return;
}



/* Entry: 100013e24; end: 100013e37;  */

void FUN_100013e24(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000100020a9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_100028ae8)(uVar1);
  return;
}



/* Entry: 100013e38; end: 100013e3f;  */

void FUN_100013e38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100020a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_100028ae0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100013e40; end: 100013e53;  */

void FUN_100013e40(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  
  if (0xe < param_2 >> 0x3c) {
    return;
  }
  uVar1 = (uint)(param_2 >> 0x3e);
  if (uVar1 != 1) {
    if (uVar1 != 2) {
      return;
    }
    _swift_release();
  }
                    /* WARNING: Could not recover jumptable at 0x000100020a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_100028ae0)(param_2 & 0x3fffffffffffffff);
  return;
}



/* Entry: 100013e54; end: 100013e67;  */

void FUN_100013e54(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  
  if (0xe < param_2 >> 0x3c) {
    return;
  }
  uVar1 = (uint)(param_2 >> 0x3e);
  if (uVar1 != 1) {
    if (uVar1 != 2) {
      return;
    }
    _swift_retain();
  }
                    /* WARNING: Could not recover jumptable at 0x000100020a9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_100028ae8)(param_2 & 0x3fffffffffffffff);
  return;
}



/* Entry: 100013e68; end: 100013eab;  */

void FUN_100013e68(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam000000010002dbc8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  __sScMMa(0xff);
  puVar2 = PTR___sScMScAsMc_100028b40;
  _swift_getWitnessTable(PTR___sScMScAsMc_100028b40,uVar1);
  puRam000000010002dbc8 = puVar2;
  return;
}



/* Entry: 100013eac; end: 100013fe7;  */

void FUN_100013eac(void)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar6 = *(long *)(unaff_x20 + 0x28);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar8 = *(long *)(unaff_x20 + 0x20);
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_50 = *(undefined8 *)(unaff_x20 + 0x30);
  lVar3 = 0;
  lStack_60 = lVar8;
  FUN_1000125cc(0,&lStack_60);
  uVar7 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  uVar7 = uVar7 + 0x40 & (uVar7 ^ 0xffffffffffffffff);
  lVar5 = *(long *)(*(long *)(lVar3 + -8) + 0x40);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  lVar1 = unaff_x20 + uVar7;
  lVar4 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar4 + -8) + 8))(lVar1,lVar4);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x34)));
  (**(code **)(*(long *)(lVar8 + -8) + 8))(lVar1 + *(int *)(lVar3 + 0x38));
  (**(code **)(*(long *)(lVar6 + -8) + 8))(lVar1 + *(int *)(lVar3 + 0x3c),lVar6);
  puVar2 = (undefined8 *)(lVar1 + *(int *)(lVar3 + 0x40));
  _swift_release(*puVar2);
  _swift_release(puVar2[1]);
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x44) + 8));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x48) + 8));
  puVar2 = (undefined8 *)(unaff_x20 + (lVar5 + uVar7 + 7 & 0xfffffffffffffff8));
  if ((ulong)puVar2[1] >> 0x3c < 0xf) {
    FUN_100010168(*puVar2);
  }
  _swift_deallocObject();
  return;
}



/* Entry: 100013fe8; end: 1000140d3;  */

void FUN_100013fe8(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long unaff_x20;
  long lVar6;
  long unaff_x22;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  
  lVar6 = *(long *)(unaff_x20 + 0x28);
  lVar10 = *(long *)(unaff_x20 + 0x20);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x38);
  lVar8 = *(long *)(unaff_x20 + 0x30);
  lVar7 = *(long *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(unaff_x20 + 0x28);
  *(long *)(unaff_x22 + 0x10) = lVar10;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar9;
  *(long *)(unaff_x22 + 0x20) = lVar8;
  lVar3 = 0;
  FUN_1000125cc();
  uVar5 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  uVar5 = uVar5 + 0x40 & (uVar5 ^ 0xffffffffffffffff);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar4 = (long *)(unaff_x20 +
                   (*(long *)(*(long *)(lVar3 + -8) + 0x40) + uVar5 + 7 & 0xfffffffffffffff8));
  lVar3 = *plVar4;
  lVar2 = plVar4[1];
  plVar4 = (long *)0x70;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x30) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1000140d4;
  plVar4[0xb] = lVar8;
  plVar4[0xc] = lVar7;
  plVar4[9] = lVar10;
  plVar4[10] = lVar6;
  plVar4[7] = lVar3;
  plVar4[8] = lVar2;
  plVar4[6] = unaff_x20 + uVar5;
  lVar2 = 0;
  __sScMMa(0,uVar9,uVar1);
  lVar3 = lVar2;
  __sScM6sharedScMvgZ();
  plVar4[0xd] = lVar3;
  FUN_100013e68();
  __sScA15unownedExecutorScevgTj(lVar2,lVar3);
                    /* WARNING: Could not recover jumptable at 0x000100020af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_100028b70)(FUN_100013900,lVar2,lVar3);
  return;
}



/* Entry: 1000140d4; end: 10001410f;  */

void FUN_1000140d4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010001410c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100014110; end: 10001422f;  */

void FUN_100014110(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 auVar9 [16];
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar4 = *param_1;
  uVar5 = param_1[1];
  uVar1 = 0x10002dba0;
  FUN_10000c888(0x10002dba0,&UNK_100021bf0);
  uVar2 = 0xff;
  __s7SwiftUI19_ConditionalContentVMa(0xff,uVar1,uVar4);
  uVar3 = 0xff;
  __s7SwiftUI19_ConditionalContentVMa(0xff,uVar5,uVar4);
  uVar4 = 0xff;
  __s7SwiftUI19_ConditionalContentVMa(0xff,uVar2,uVar3);
  uVar5 = 0xff;
  __s7SwiftUI15ModifiedContentVMa(0xff,uVar4,PTR___s7SwiftUI25_AppearanceActionModifierVN_100028510)
  ;
  uVar1 = uVar5;
  FUN_100013bf0();
  puVar8 = PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_1000284d8;
  uStack_48 = *(undefined8 *)*(undefined1 (*) [16])(param_1 + 2);
  auVar9 = *(undefined1 (*) [16])(param_1 + 2);
  puVar6 = PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_1000284d8;
  uStack_50 = uVar1;
  _swift_getWitnessTable
            (PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_1000284d8,uVar2,
             &uStack_50);
  auVar9 = NEON_ext(auVar9,auVar9,8,1);
  uStack_58 = auVar9._8_8_;
  uStack_60 = auVar9._0_8_;
  puVar7 = puVar8;
  _swift_getWitnessTable(puVar8,uVar3,&uStack_60);
  puStack_70 = puVar6;
  puStack_68 = puVar7;
  _swift_getWitnessTable(puVar8,uVar4,&puStack_70);
  puStack_78 = PTR___s7SwiftUI25_AppearanceActionModifierVAA04ViewE0AAWP_100028500;
  puStack_80 = puVar8;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000283d8,uVar5,
             &puStack_80);
  return;
}



/* Entry: 100014230; end: 100014233;  */

void FUN_100014230(void)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar5 = *(long *)(unaff_x20 + 0x18);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar7 = *(long *)(unaff_x20 + 0x10);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_60 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar3 = 0;
  lStack_70 = lVar7;
  FUN_1000125cc(0,&lStack_70);
  uVar6 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  lVar1 = unaff_x20 + (uVar6 + 0x30 & (uVar6 ^ 0xffffffffffffffff));
  lVar4 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar4 + -8) + 8))(lVar1,lVar4);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x34)));
  (**(code **)(*(long *)(lVar7 + -8) + 8))(lVar1 + *(int *)(lVar3 + 0x38));
  (**(code **)(*(long *)(lVar5 + -8) + 8))(lVar1 + *(int *)(lVar3 + 0x3c),lVar5);
  puVar2 = (undefined8 *)(lVar1 + *(int *)(lVar3 + 0x40));
  _swift_release(*puVar2);
  _swift_release(puVar2[1]);
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x44) + 8));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x48) + 8));
  _swift_deallocObject();
  return;
}



/* Entry: 100014234; end: 1000144cf;  */

void FUN_100014234(long param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long extraout_x8;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar1 = 0x10002dbc0;
  FUN_10000c3c0(0x10002dbc0,&UNK_100021d00);
  (*(code *)PTR____chkstk_darwin_100028280)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_c0 + -extraout_x8;
  FUN_100016774(param_3,puVar5,0x10002dbc0,&UNK_100021d00);
  lVar1 = 0;
  __sScPMa();
  lVar8 = *(long *)(lVar1 + -8);
  puVar2 = puVar5;
  (**(code **)(lVar8 + 0x30))(puVar5,1,lVar1);
  uVar7 = param_5;
  _swift_retain(param_5);
  if ((int)puVar2 == 1) {
    FUN_1000167bc(puVar5,0x10002dbc0,&UNK_100021d00);
    uVar7 = 0x1c00;
  }
  else {
    __sScP8rawValues5UInt8Vvg();
    (**(code **)(lVar8 + 8))(puVar5,lVar1);
    uVar7 = uVar7 & 0xff | 0x1c00;
  }
  lVar1 = *(long *)(param_5 + 0x10);
  lVar8 = *(long *)(param_5 + 0x18);
  _swift_unknownObjectRetain(lVar1);
  _swift_release(param_5);
  if (lVar1 == 0) {
    lVar6 = 0;
    lVar8 = 0;
  }
  else {
    lVar6 = lVar1;
    _swift_getObjectType();
    __sScA15unownedExecutorScevgTj();
    _swift_unknownObjectRelease(lVar1);
  }
  if (param_2 == 0) {
    FUN_1000167bc(param_3,0x10002dbc0,&UNK_100021d00);
    puVar3 = &UNK_100029290;
    _swift_allocObject(&UNK_100029290,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = param_4;
    *(ulong *)(puVar3 + 0x18) = param_5;
    if (lVar8 == 0 && lVar6 == 0) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      uStack_80 = 0;
      uStack_78 = 0;
      puVar4 = &uStack_80;
      lStack_70 = lVar6;
      lStack_68 = lVar8;
    }
    _swift_task_create(uVar7,puVar4,PTR___sytN_1000289c8 + 8,&UNK_100021d20,puVar3);
  }
  else {
    __sSS11utf8CStrings15ContiguousArrayVys4Int8VGvg(param_1,param_2);
    _swift_bridgeObjectRelease(param_2);
    puVar3 = &UNK_1000292b8;
    _swift_allocObject(&UNK_1000292b8,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = param_4;
    *(ulong *)(puVar3 + 0x18) = param_5;
    _swift_retain(param_5);
    if (lVar8 == 0 && lVar6 == 0) {
      puStack_b0 = (undefined8 *)0x0;
    }
    else {
      uStack_a0 = 0;
      uStack_98 = 0;
      puStack_b0 = &uStack_a0;
      lStack_90 = lVar6;
      lStack_88 = lVar8;
    }
    uStack_b8 = 7;
    lStack_a8 = param_1 + 0x20;
    _swift_task_create(uVar7,&uStack_b8,PTR___sytN_1000289c8 + 8,&UNK_100021d28,puVar3);
    _swift_release(param_1);
    FUN_1000167bc(param_3,0x10002dbc0,&UNK_100021d00);
    _swift_release(param_5);
  }
  return;
}



/* Entry: 1000144d0; end: 10001453f;  */

undefined8 FUN_1000144d0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_38;
  
  puVar1 = &UNK_100021cb0;
  _swift_getKeyPath(&UNK_100021cb0);
  puVar2 = &UNK_100021cd8;
  _swift_getKeyPath(&UNK_100021cd8);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (&uStack_38);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return uStack_38;
}



/* Entry: 100014540; end: 10001466b;  */

void FUN_100014540(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = PTR__OBJC_CLASS___UNUserNotificationCenter_100028710;
  _objc_opt_self(PTR__OBJC_CLASS___UNUserNotificationCenter_100028710);
  puVar2 = puVar1;
  func_0x000100020ba0();
  _objc_retainAutoreleasedReturnValue();
  pcStack_40 = FUN_10001466c;
  uStack_38 = 0;
  puStack_60 = PTR___NSConcreteStackBlock_100028278;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_100014670;
  puStack_48 = &UNK_100029230;
  __Block_copy(&puStack_60);
  func_0x000100020d20(puVar2,param_2,7,ppuVar3);
  __Block_release(ppuVar3);
  _objc_release_x21();
  _objc_opt_self(PTR__OBJC_CLASS___WKExtension_100028728);
  func_0x000100020dc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000100020ce0();
  _objc_release_x21();
  func_0x000100020ba0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100020d80();
  _objc_release_x19();
  puVar1 = PTR__OBJC_CLASS___WCSession_100028718;
  _objc_opt_self();
  puVar2 = puVar1;
  func_0x000100020c60();
  if ((int)puVar2 != 0) {
    func_0x000100020be0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100020d80();
    func_0x000100020b40(puVar1);
    _objc_release_x19();
  }
  return;
}



/* Entry: 10001466c; end: 10001466f;  */

void FUN_10001466c(void)

{
  return;
}



/* Entry: 100014670; end: 1000146cf;  */

void FUN_100014670(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  _swift_retain();
  _objc_retain_x19();
  (*pcVar1)(param_2,param_3);
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010002082c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000281c0)(uVar3);
  return;
}



/* Entry: 1000146d0; end: 100014703; -[_TtC20SnapchatWatchLibrary16WatchAppDelegate applicationDidFinishLaunching] */

void FUN_1000146d0(undefined8 param_1)

{
  _objc_retain();
  FUN_100014540();
                    /* WARNING: Could not recover jumptable at 0x00010002082c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000281c0)(param_1);
  return;
}



/* Entry: 100014704; end: 100014707; -[_TtC20SnapchatWatchLibrary16WatchAppDelegate applicationDidEnterBackground] */

void FUN_100014704(void)

{
  return;
}



/* Entry: 100014708; end: 10001470b; -[_TtC20SnapchatWatchLibrary16WatchAppDelegate applicationWillEnterForeground] */

void FUN_100014708(void)

{
  return;
}



/* Entry: 10001470c; end: 100014ed3;  */

/* WARNING: Removing unreachable block (ram,0x000100014d2c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001470c(void)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined1 *puVar14;
  undefined *puVar15;
  long *plVar16;
  ulong uVar17;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined1 auStack_160 [8];
  undefined8 uStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  long *plStack_140;
  long lStack_138;
  undefined1 *puStack_130;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lVar3 = 0;
  FUN_10001dd7c();
  lStack_138 = lVar3;
  (*(code *)PTR____chkstk_darwin_100028280)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar3 = 0x10002dc38;
  puVar15 = &UNK_100021c90;
  puStack_130 = auStack_160 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_10000c3c0();
  (*(code *)PTR____chkstk_darwin_100028280)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar21 = (long)(auStack_160 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  lVar4 = 0;
  __s10Foundation4DateVMa();
  lVar19 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100028280)(*(undefined8 *)(lVar19 + 0x40));
  lVar20 = lVar21 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation4DateVACycfC(lVar20);
  plVar5 = (long *)PTR__OBJC_CLASS___WCSession_100028718;
  _objc_opt_self();
  func_0x000100020be0();
  _objc_retainAutoreleasedReturnValue();
  plVar6 = plVar5;
  FUN_100017610();
  pcStack_148 = *(code **)(lVar19 + 0x10);
  (*pcStack_148)(lVar21,lVar20,lVar4);
  (**(code **)(lVar19 + 0x38))(lVar21,0,1,lVar4);
  lVar3 = _DAT_10002dbd8;
  _swift_beginAccess(unaff_x20 + _DAT_10002dbd8,&uStack_90,0x21,0);
  FUN_100016614(lVar21,unaff_x20 + lVar3);
  _swift_endAccess(&uStack_90);
  puVar10 = (undefined8 *)(unaff_x20 + _DAT_10002dbe0);
  uVar18 = puVar10[1];
  *puVar10 = plVar6;
  puVar10[1] = puVar15;
  plStack_140 = plVar6;
  _swift_bridgeObjectRetain(puVar15);
  _swift_bridgeObjectRelease(uVar18);
  plVar6 = plVar5;
  func_0x000100020cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR___sypN_1000289c0;
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ();
  plVar7 = plVar6;
  _objc_release_x27();
  FUN_10001a0fc();
  if (plVar6[2] == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    lVar3 = *plVar7;
    plVar7 = (long *)plVar7[1];
    _swift_bridgeObjectRetain(plVar7);
    _swift_bridgeObjectRetain(plVar6);
    plVar16 = plVar7;
    FUN_1000161c0(lVar3);
    if (((ulong)plVar16 & 1) == 0) {
      _swift_bridgeObjectRelease(plVar6);
      uStack_88 = 0;
      uStack_90 = 0;
      lStack_78 = 0;
      uStack_80 = 0;
    }
    else {
      FUN_10000c410(plVar6[7] + lVar3 * 0x20,&uStack_90);
      _swift_bridgeObjectRelease(plVar7);
      plVar7 = plVar6;
    }
    _swift_bridgeObjectRelease(plVar7);
  }
  _swift_bridgeObjectRelease(plVar6);
  if (lStack_78 == 0) {
LAB_100014da4:
    (**(code **)(lVar19 + 8))(lVar20,lVar4);
    _swift_bridgeObjectRelease(puVar15);
    _objc_release_x19();
    FUN_1000167bc(&uStack_90,0x10002d770,&UNK_100021650);
  }
  else {
    uVar18 = 0x10002dc28;
    FUN_10000c3c0(0x10002dc28,&UNK_100021c38);
    plVar6 = &lStack_a0;
    _swift_dynamicCast(plVar6,&uStack_90,puVar9 + 8,uVar18,6);
    if (((ulong)plVar6 & 1) != 0) {
      uVar2 = CONCAT71(lStack_a0._1_7_,(char)lStack_a0);
      FUN_10001a140();
      if (*(long *)(uVar2 + 0x10) == 0) {
        uStack_88 = 0;
        uStack_90 = 0;
        lStack_78 = 0;
        uStack_80 = 0;
      }
      else {
        lVar3 = *plVar6;
        uVar8 = plVar6[1];
        _swift_bridgeObjectRetain(uVar8);
        _swift_bridgeObjectRetain(uVar2);
        uVar17 = uVar8;
        FUN_1000161c0(lVar3);
        if ((uVar17 & 1) == 0) {
          _swift_bridgeObjectRelease(uVar2);
          uStack_88 = 0;
          uStack_90 = 0;
          lStack_78 = 0;
          uStack_80 = 0;
        }
        else {
          FUN_10000c410(*(long *)(uVar2 + 0x38) + lVar3 * 0x20,&uStack_90);
          _swift_bridgeObjectRelease(uVar8);
          uVar8 = uVar2;
        }
        _swift_bridgeObjectRelease(uVar8);
      }
      _swift_bridgeObjectRelease(uVar2);
      if (lStack_78 == 0) goto LAB_100014da4;
      plVar6 = &lStack_a0;
      _swift_dynamicCast(plVar6,&uStack_90,puVar9 + 8,PTR___sSbN_100028810,6);
      if ((((ulong)plVar6 & 1) != 0) && ((char)lStack_a0 == '\x01')) {
        plVar6 = plVar5;
        func_0x000100020cc0();
        _objc_retainAutoreleasedReturnValue();
        __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ();
        plVar7 = plVar6;
        _objc_release_x27();
        FUN_10001a0d8();
        if (plVar6[2] == 0) {
          uStack_88 = 0;
          uStack_90 = 0;
          lStack_78 = 0;
          uStack_80 = 0;
        }
        else {
          lVar3 = *plVar7;
          plVar7 = (long *)plVar7[1];
          _swift_bridgeObjectRetain(plVar7);
          _swift_bridgeObjectRetain(plVar6);
          plVar16 = plVar7;
          FUN_1000161c0(lVar3);
          if (((ulong)plVar16 & 1) == 0) {
            _swift_bridgeObjectRelease(plVar6);
            uStack_88 = 0;
            uStack_90 = 0;
            lStack_78 = 0;
            uStack_80 = 0;
          }
          else {
            FUN_10000c410(plVar6[7] + lVar3 * 0x20,&uStack_90);
            _swift_bridgeObjectRelease(plVar7);
            plVar7 = plVar6;
          }
          _swift_bridgeObjectRelease(plVar7);
        }
        _swift_bridgeObjectRelease(plVar6);
        puVar14 = puStack_130;
        if (lStack_78 == 0) goto LAB_100014da4;
        plVar6 = &lStack_a0;
        _swift_dynamicCast(plVar6,&uStack_90,puVar9 + 8,PTR___sSSN_1000287b8,6);
        if (((ulong)plVar6 & 1) != 0) {
          uStack_150 = CONCAT71(lStack_a0._1_7_,(char)lStack_a0);
          uStack_158 = uStack_98;
          lVar3 = 0x10002dc40;
          FUN_10000c3c0(0x10002dc40,&UNK_100021ca0);
          uVar18 = 1;
          (**(code **)(*(long *)(lVar3 + -8) + 0x38))(puVar14,1,1,lVar3);
          puVar9 = PTR__OBJC_CLASS___WKInterfaceDevice_100028730;
          _objc_opt_self();
          func_0x000100020b80();
          _objc_retainAutoreleasedReturnValue();
          func_0x000100020c80();
          _objc_retainAutoreleasedReturnValue();
          _objc_release_x27();
          __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
          _objc_release_x28();
          lVar3 = lStack_138;
          (*pcStack_148)(puVar14 + *(int *)(lStack_138 + 0x20),lVar20,lVar4);
          iVar1 = *(int *)(lVar3 + 0x14);
          *(undefined8 *)(puVar14 + iVar1) = uStack_150;
          *(undefined8 *)((long)(puVar14 + iVar1) + 8) = uStack_158;
          iVar1 = *(int *)(lVar3 + 0x18);
          *(long **)(puVar14 + iVar1) = plStack_140;
          *(undefined **)((long)(puVar14 + iVar1) + 8) = puVar15;
          iVar1 = *(int *)(lVar3 + 0x1c);
          *(undefined **)(puVar14 + iVar1) = puVar9;
          *(undefined8 *)((long)(puVar14 + iVar1) + 8) = uVar18;
          puVar10 = (undefined8 *)0x10002da70;
          FUN_10000c3c0(0x10002da70,&UNK_1000219b8);
          _swift_initStackObject();
          puVar10[3] = 4;
          puVar10[2] = 2;
          puVar11 = puVar10;
          FUN_10001a118();
          puVar12 = (undefined8 *)puVar11[1];
          puVar10[4] = *puVar11;
          puVar10[5] = puVar12;
          _swift_bridgeObjectRetain();
          FUN_10001a178();
          uVar18 = *puVar12;
          puVar12 = (undefined8 *)puVar12[1];
          puVar10[9] = PTR___sSSN_1000287b8;
          puVar10[6] = uVar18;
          puVar10[7] = puVar12;
          _swift_bridgeObjectRetain();
          FUN_10001a124();
          uVar13 = puVar12[1];
          puVar10[10] = *puVar12;
          puVar10[0xb] = uVar13;
          __s10Foundation11JSONEncoderCMa();
          _swift_allocObject();
          _swift_bridgeObjectRetain(uVar13);
          __s10Foundation11JSONEncoderCACycfc();
          uVar18 = 0x10002dc48;
          FUN_100016688(0x10002dc48,FUN_10001dd7c,&UNK_100022938);
          lVar3 = lStack_138;
          __s10Foundation11JSONEncoderC6encodeyAA4DataVxKSERzlFTj(puVar14,lStack_138,uVar18);
          _swift_release(uVar13);
          puVar10[0xf] = PTR___s10Foundation4DataVN_100028100;
          puVar10[0xc] = puVar14;
          puVar10[0xd] = lVar3;
          puVar12 = puVar10;
          FUN_1000164d8(puVar10);
          _swift_setDeallocating(puVar10);
          uVar18 = 0x10002da78;
          FUN_10000c3c0(0x10002da78,&UNK_1000219c0);
          _swift_arrayDestroy(puVar10 + 4,2,uVar18);
          __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
                    (puVar12,PTR___sSSN_1000287b8,PTR___sypN_1000289c0 + 8,PTR___sSSSHsWP_1000287c0)
          ;
          _swift_bridgeObjectRelease(puVar12);
          func_0x000100020e00(plVar5);
          _objc_retainAutoreleasedReturnValue();
          _objc_release_x21();
          _objc_release_x20();
          _objc_release_x19();
          FUN_100016224(puStack_130);
          (**(code **)(lVar19 + 8))(lVar20,lVar4);
          return;
        }
      }
    }
    (**(code **)(lVar19 + 8))(lVar20,lVar4);
    _swift_bridgeObjectRelease(puVar15);
    _objc_release_x19();
  }
  return;
}



/* Entry: 100014ed4; end: 100014f07; -[_TtC20SnapchatWatchLibrary16WatchAppDelegate applicationDidBecomeActive] */

void FUN_100014ed4(undefined8 param_1)

{
  _objc_retain();
  FUN_10001470c();
                    /* WARNING: Could not recover jumptable at 0x00010002082c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000281c0)(param_1);
  return;
}



/* Entry: 100014f08; end: 10001574f;  */

/* WARNING: Removing unreachable block (ram,0x0001000155e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100014f08(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long *plVar13;
  ulong uVar14;
  code *pcVar15;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 uVar16;
  long lVar17;
  long extraout_x12;
  long unaff_x20;
  long lVar18;
  long lVar19;
  undefined8 *puVar20;
  code *apcStack_160 [3];
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lVar3 = 0;
  FUN_10001dd7c();
  lStack_148 = lVar3;
  (*(code *)PTR____chkstk_darwin_100028280)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar17 = (long)apcStack_160 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x10002dc38;
  lStack_140 = lVar17;
  FUN_10000c3c0(0x10002dc38,&UNK_100021c90);
  (*(code *)PTR____chkstk_darwin_100028280)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar20 = (undefined8 *)(lVar17 - extraout_x8_00);
  lVar3 = 0;
  __s10Foundation4DateVMa();
  lVar18 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100028280)(*(undefined8 *)(lVar18 + 0x40));
  lVar17 = (long)puVar20 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_138 = lVar17;
  (*(code *)PTR____chkstk_darwin_100028280)();
  lVar17 = lVar17 - extraout_x12;
  __s10Foundation4DateVACycfC(lVar17);
  plVar4 = (long *)PTR__OBJC_CLASS___WCSession_100028718;
  _objc_opt_self();
  func_0x000100020be0();
  _objc_retainAutoreleasedReturnValue();
  plVar5 = plVar4;
  func_0x000100020cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR___sypN_1000289c0;
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ();
  plVar6 = plVar5;
  _objc_release_x28();
  FUN_10001a0fc();
  if (plVar5[2] == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    lVar7 = *plVar6;
    plVar6 = (long *)plVar6[1];
    _swift_bridgeObjectRetain(plVar6);
    _swift_bridgeObjectRetain(plVar5);
    plVar13 = plVar6;
    FUN_1000161c0(lVar7);
    if (((ulong)plVar13 & 1) == 0) {
      _swift_bridgeObjectRelease(plVar5);
      uStack_88 = 0;
      uStack_90 = 0;
      lStack_78 = 0;
      uStack_80 = 0;
    }
    else {
      FUN_10000c410(plVar5[7] + lVar7 * 0x20,&uStack_90);
      _swift_bridgeObjectRelease(plVar6);
      plVar6 = plVar5;
    }
    _swift_bridgeObjectRelease(plVar6);
  }
  _swift_bridgeObjectRelease(plVar5);
  if (lStack_78 != 0) {
    uVar16 = 0x10002dc28;
    FUN_10000c3c0(0x10002dc28,&UNK_100021c38);
    plVar5 = &lStack_a0;
    _swift_dynamicCast(plVar5,&uStack_90,puVar10 + 8,uVar16,6);
    if (((ulong)plVar5 & 1) == 0) {
LAB_100015374:
      (**(code **)(lVar18 + 8))(lVar17,lVar3);
      _objc_release_x23();
      return;
    }
    uVar1 = CONCAT71(lStack_a0._1_7_,(char)lStack_a0);
    FUN_10001a140();
    if (*(long *)(uVar1 + 0x10) == 0) {
      uStack_88 = 0;
      uStack_90 = 0;
      lStack_78 = 0;
      uStack_80 = 0;
    }
    else {
      lVar7 = *plVar5;
      uVar8 = plVar5[1];
      _swift_bridgeObjectRetain(uVar8);
      _swift_bridgeObjectRetain(uVar1);
      uVar14 = uVar8;
      FUN_1000161c0(lVar7);
      if ((uVar14 & 1) == 0) {
        _swift_bridgeObjectRelease(uVar1);
        uStack_88 = 0;
        uStack_90 = 0;
        lStack_78 = 0;
        uStack_80 = 0;
      }
      else {
        FUN_10000c410(*(long *)(uVar1 + 0x38) + lVar7 * 0x20,&uStack_90);
        _swift_bridgeObjectRelease(uVar8);
        uVar8 = uVar1;
      }
      _swift_bridgeObjectRelease(uVar8);
    }
    _swift_bridgeObjectRelease(uVar1);
    if (lStack_78 != 0) {
      plVar5 = &lStack_a0;
      _swift_dynamicCast(plVar5,&uStack_90,puVar10 + 8,PTR___sSbN_100028810,6);
      if ((((ulong)plVar5 & 1) == 0) || ((char)lStack_a0 != '\x01')) goto LAB_100015374;
      plVar5 = plVar4;
      func_0x000100020cc0();
      _objc_retainAutoreleasedReturnValue();
      __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ();
      plVar6 = plVar5;
      _objc_release_x26();
      FUN_10001a0d8();
      if (plVar5[2] == 0) {
        uStack_88 = 0;
        uStack_90 = 0;
        lStack_78 = 0;
        uStack_80 = 0;
      }
      else {
        lVar7 = *plVar6;
        plVar6 = (long *)plVar6[1];
        _swift_bridgeObjectRetain(plVar6);
        _swift_bridgeObjectRetain(plVar5);
        plVar13 = plVar6;
        FUN_1000161c0(lVar7);
        if (((ulong)plVar13 & 1) == 0) {
          _swift_bridgeObjectRelease(plVar5);
          uStack_88 = 0;
          uStack_90 = 0;
          lStack_78 = 0;
          uStack_80 = 0;
        }
        else {
          FUN_10000c410(plVar5[7] + lVar7 * 0x20,&uStack_90);
          _swift_bridgeObjectRelease(plVar6);
          plVar6 = plVar5;
        }
        _swift_bridgeObjectRelease(plVar6);
      }
      _swift_bridgeObjectRelease(plVar5);
      if (lStack_78 != 0) {
        plVar5 = &lStack_a0;
        _swift_dynamicCast(plVar5,&uStack_90,puVar10 + 8,PTR___sSSN_1000287b8,6);
        lVar7 = _DAT_10002dbd8;
        if (((ulong)plVar5 & 1) == 0) goto LAB_100015374;
        _swift_beginAccess(unaff_x20 + _DAT_10002dbd8,&uStack_90,0,0);
        FUN_100016774(unaff_x20 + lVar7,puVar20,0x10002dc38,&UNK_100021c90);
        puVar9 = puVar20;
        (**(code **)(lVar18 + 0x30))(puVar20,1,lVar3);
        lVar7 = lStack_138;
        if ((int)puVar9 != 1) {
          apcStack_160[2] = (code *)CONCAT71(lStack_a0._1_7_,(char)lStack_a0);
          (**(code **)(lVar18 + 0x20))(lStack_138,puVar20,lVar3);
          lVar2 = lStack_140;
          lVar19 = ((undefined8 *)(unaff_x20 + _DAT_10002dbe0))[1];
          if (lVar19 == 0) {
            _swift_bridgeObjectRelease(uStack_98);
            _objc_release_x23();
            pcVar15 = *(code **)(lVar18 + 8);
          }
          else {
            uVar16 = *(undefined8 *)(unaff_x20 + _DAT_10002dbe0);
            apcStack_160[1] = *(code **)(lVar18 + 0x10);
            (*apcStack_160[1])(lStack_140,lVar7,lVar3);
            lVar7 = 0x10002dc40;
            FUN_10000c3c0(0x10002dc40,&UNK_100021ca0);
            pcVar15 = (code *)0x0;
            (**(code **)(*(long *)(lVar7 + -8) + 0x38))(lVar2,0,1,lVar7);
            puVar10 = PTR__OBJC_CLASS___WKInterfaceDevice_100028730;
            _objc_opt_self();
            _swift_bridgeObjectRetain(lVar19);
            func_0x000100020b80();
            _objc_retainAutoreleasedReturnValue();
            func_0x000100020c80();
            _objc_retainAutoreleasedReturnValue();
            _objc_release_x27();
            __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
            apcStack_160[0] = pcVar15;
            _objc_release_x20();
            lVar7 = lStack_148;
            (*apcStack_160[1])(lVar2 + *(int *)(lStack_148 + 0x20),lVar17,lVar3);
            puVar20 = (undefined8 *)(lVar2 + *(int *)(lVar7 + 0x14));
            *puVar20 = apcStack_160[2];
            puVar20[1] = uStack_98;
            puVar20 = (undefined8 *)(lVar2 + *(int *)(lVar7 + 0x18));
            *puVar20 = uVar16;
            puVar20[1] = lVar19;
            puVar20 = (undefined8 *)(lVar2 + *(int *)(lVar7 + 0x1c));
            *puVar20 = puVar10;
            puVar20[1] = apcStack_160[0];
            puVar20 = (undefined8 *)0x10002da70;
            FUN_10000c3c0(0x10002da70,&UNK_1000219b8);
            _swift_initStackObject();
            puVar20[3] = 4;
            puVar20[2] = 2;
            puVar11 = puVar20;
            FUN_10001a118();
            puVar9 = (undefined8 *)puVar11[1];
            puVar20[4] = *puVar11;
            puVar20[5] = puVar9;
            _swift_bridgeObjectRetain();
            FUN_10001a178();
            uVar16 = *puVar9;
            puVar9 = (undefined8 *)puVar9[1];
            puVar20[9] = PTR___sSSN_1000287b8;
            puVar20[6] = uVar16;
            puVar20[7] = puVar9;
            _swift_bridgeObjectRetain();
            FUN_10001a124();
            uVar12 = puVar9[1];
            puVar20[10] = *puVar9;
            puVar20[0xb] = uVar12;
            __s10Foundation11JSONEncoderCMa();
            _swift_allocObject();
            _swift_bridgeObjectRetain(uVar12);
            __s10Foundation11JSONEncoderCACycfc();
            uVar16 = 0x10002dc48;
            FUN_100016688(0x10002dc48,FUN_10001dd7c,&UNK_100022938);
            lVar19 = lVar2;
            __s10Foundation11JSONEncoderC6encodeyAA4DataVxKSERzlFTj(lVar2,lVar7,uVar16);
            _swift_release(uVar12);
            puVar20[0xf] = PTR___s10Foundation4DataVN_100028100;
            puVar20[0xc] = lVar19;
            puVar20[0xd] = lVar7;
            puVar9 = puVar20;
            FUN_1000164d8(puVar20);
            _swift_setDeallocating(puVar20);
            uVar16 = 0x10002da78;
            FUN_10000c3c0(0x10002da78,&UNK_1000219c0);
            _swift_arrayDestroy(puVar20 + 4,2,uVar16);
            __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
                      (puVar9,PTR___sSSN_1000287b8,PTR___sypN_1000289c0 + 8,PTR___sSSSHsWP_1000287c0
                      );
            _swift_bridgeObjectRelease(puVar9);
            func_0x000100020e00(plVar4);
            _objc_retainAutoreleasedReturnValue();
            _objc_release_x21();
            _objc_release_x20();
            _objc_release_x23();
            FUN_100016224(lVar2);
            pcVar15 = *(code **)(lVar18 + 8);
            lVar7 = lStack_138;
          }
          (*pcVar15)(lVar7,lVar3);
          (*pcVar15)(lVar17,lVar3);
          return;
        }
        (**(code **)(lVar18 + 8))(lVar17,lVar3);
        _swift_bridgeObjectRelease(uStack_98);
        _objc_release_x23();
        uVar16 = 0x10002dc38;
        puVar10 = &UNK_100021c90;
        goto LAB_10001536c;
      }
    }
  }
  (**(code **)(lVar18 + 8))(lVar17,lVar3);
  _objc_release_x23();
  uVar16 = 0x10002d770;
  puVar10 = &UNK_100021650;
  puVar20 = &uStack_90;
LAB_10001536c:
  FUN_1000167bc(puVar20,uVar16,puVar10);
  return;
}



/* Entry: 100015750; end: 100015783; -[_TtC20SnapchatWatchLibrary16WatchAppDelegate applicationWillResignActive] */

void FUN_100015750(undefined8 param_1)

{
  _objc_retain();
  FUN_100014f08();
                    /* WARNING: Could not recover jumptable at 0x00010002082c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000281c0)(param_1);
  return;
}



/* Entry: 100015784; end: 100015813;  */

void FUN_100015784(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 in_x3;
  undefined8 in_x4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = in_x3;
  *(undefined8 *)(unaff_x22 + 0x20) = in_x4;
  uVar2 = 0;
  __sScMMa();
  puVar1 = PTR___sScMMa_100028b38;
  uVar3 = uVar2;
  __sScM6sharedScMvgZ();
  *(undefined8 *)(unaff_x22 + 0x28) = uVar3;
  uVar3 = 0x10002dbc8;
  FUN_100016688(0x10002dbc8,puVar1,PTR___sScMScAsMc_100028b40);
  __sScA15unownedExecutorScevgTj(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x000100020af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_100028b70)(FUN_100015814,uVar2,uVar3);
  return;
}



/* Entry: 100015814; end: 1000158d3;  */

void FUN_100015814(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x20);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x28));
  func_0x000100020cc0();
  _objc_retainAutoreleasedReturnValue();
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ();
  _objc_release_x20();
  puVar2 = &UNK_100021cb0;
  _swift_getKeyPath(&UNK_100021cb0);
  puVar3 = &UNK_100021cd8;
  _swift_getKeyPath(&UNK_100021cd8);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar1;
  puVar4 = puVar3;
  _objc_retain_x24();
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
            ((undefined8 *)(unaff_x22 + 0x10),puVar4,puVar2,puVar3);
                    /* WARNING: Could not recover jumptable at 0x0001000158d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1000158d4; end: 100015a03; -[_TtC20SnapchatWatchLibrary16WatchAppDelegate session:activationDidCompleteWithState:error:] */

void FUN_1000158d4(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long extraout_x8;
  
  lVar1 = 0x10002dbc0;
  FUN_10000c3c0(0x10002dbc0,&UNK_100021d00);
  (*(code *)PTR____chkstk_darwin_100028280)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  __sScPMa();
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(&stack0xffffffffffffffc0 + -extraout_x8,1,1,lVar1);
  uVar2 = 0;
  __sScMMa();
  puVar6 = PTR___sScMMa_100028b38;
  _objc_retain_x20();
  _objc_retain_x21();
  _objc_retain();
  uVar3 = uVar2;
  _objc_retain_x20();
  uVar4 = uVar3;
  __sScM6sharedScMvgZ();
  uVar5 = 0x10002dbc8;
  FUN_100016688(0x10002dbc8,puVar6,PTR___sScMScAsMc_100028b40);
  puVar6 = &UNK_1000292e0;
  _swift_allocObject(&UNK_1000292e0,0x30,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar4;
  *(undefined8 *)(puVar6 + 0x18) = uVar5;
  *(undefined8 *)(puVar6 + 0x20) = uVar2;
  *(undefined8 *)(puVar6 + 0x28) = uVar3;
  FUN_100014234(0,0,&stack0xffffffffffffffc0 + -extraout_x8,&UNK_100021d38,puVar6);
  _swift_release();
  _objc_release_x24();
  _objc_release_x21();
  return;
}



/* Entry: 100015a04; end: 100015a93;  */

void FUN_100015a04(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 in_x3;
  undefined8 in_x4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = in_x3;
  *(undefined8 *)(unaff_x22 + 0x20) = in_x4;
  uVar2 = 0;
  __sScMMa();
  puVar1 = PTR___sScMMa_100028b38;
  uVar3 = uVar2;
  __sScM6sharedScMvgZ();
  *(undefined8 *)(unaff_x22 + 0x28) = uVar3;
  uVar3 = 0x10002dbc8;
  FUN_100016688(0x10002dbc8,puVar1,PTR___sScMScAsMc_100028b40);
  __sScA15unownedExecutorScevgTj(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x000100020af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_100028b70)(FUN_100015a94,uVar2,uVar3);
  return;
}



/* Entry: 100015a94; end: 100015b23;  */

void FUN_100015a94(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x20);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x28));
  puVar2 = &UNK_100021cb0;
  _swift_getKeyPath(&UNK_100021cb0);
  puVar3 = &UNK_100021cd8;
  _swift_getKeyPath(&UNK_100021cd8);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar1;
  puVar4 = puVar3;
  _objc_retain_x24();
  _swift_bridgeObjectRetain(uVar1);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
            ((undefined8 *)(unaff_x22 + 0x10),puVar4,puVar2,puVar3);
                    /* WARNING: Could not recover jumptable at 0x000100015b20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100015b24; end: 100015c77; -[_TtC20SnapchatWatchLibrary16WatchAppDelegate session:didReceiveApplicationContext:] */

void FUN_100015b24(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 in_x3;
  long extraout_x8;
  
  lVar1 = 0x10002dbc0;
  FUN_10000c3c0(0x10002dbc0,&UNK_100021d00);
  (*(code *)PTR____chkstk_darwin_100028280)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (in_x3,PTR___sSSN_1000287b8,PTR___sypN_1000289c0 + 8,PTR___sSSSHsWP_1000287c0);
  lVar1 = 0;
  __sScPMa();
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(&stack0xffffffffffffffc0 + -extraout_x8,1,1,lVar1);
  uVar2 = 0;
  __sScMMa();
  puVar5 = PTR___sScMMa_100028b38;
  _objc_retain_x20();
  _objc_retain();
  uVar3 = in_x3;
  _swift_bridgeObjectRetain();
  __sScM6sharedScMvgZ();
  uVar4 = 0x10002dbc8;
  FUN_100016688(0x10002dbc8,puVar5,PTR___sScMScAsMc_100028b40);
  puVar5 = &UNK_100029268;
  _swift_allocObject(&UNK_100029268,0x30,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar3;
  *(undefined8 *)(puVar5 + 0x18) = uVar4;
  *(undefined8 *)(puVar5 + 0x20) = uVar2;
  *(undefined8 *)(puVar5 + 0x28) = in_x3;
  FUN_100014234(0,0,&stack0xffffffffffffffc0 + -extraout_x8,&UNK_100021d10,puVar5);
  _swift_release();
  _swift_bridgeObjectRelease(in_x3);
  _objc_release_x22();
  return;
}



/* Entry: 100015c78; end: 100015d93; -[_TtC20SnapchatWatchLibrary16WatchAppDelegate init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100015c78(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long extraout_x8;
  long lVar6;
  undefined1 auStack_60 [8];
  long lStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  lVar2 = 0x10002dac8;
  FUN_10000c3c0(0x10002dac8,&UNK_100021ac0);
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100028280)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = _DAT_10002dbd0;
  puVar3 = PTR___swiftEmptyArrayStorage_1000289d8;
  FUN_1000164d8();
  uVar5 = 0x10002dc28;
  puStack_48 = puVar3;
  FUN_10000c3c0(0x10002dc28,&UNK_100021c38);
  __s7Combine9PublishedV12initialValueACyxGx_tcfC(auStack_60 + -extraout_x8,&puStack_48,uVar5);
  (**(code **)(lVar6 + 0x20))(param_1 + lVar4,auStack_60 + -extraout_x8,lVar2);
  lVar2 = _DAT_10002dbd8;
  lVar4 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(param_1 + lVar2,1,1,lVar4);
  puVar1 = (undefined8 *)(param_1 + _DAT_10002dbe0);
  uVar5 = 0;
  FUN_100015e4c();
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_58 = param_1;
  uStack_50 = uVar5;
  _objc_msgSendSuper2(&lStack_58,PTR_s_init_10002cb80);
  return;
}



/* Entry: 100015d94; end: 100015dc7;  */

void FUN_100015d94(void)

{
  FUN_100015e4c();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_10002cb48);
  return;
}



/* Entry: 100015dc8; end: 100015e43; -[_TtC20SnapchatWatchLibrary16WatchAppDelegate .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100015dc8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = _DAT_10002dbd0;
  lVar2 = 0x10002dac8;
  FUN_10000c3c0(0x10002dac8,&UNK_100021ac0);
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + lVar1,lVar2);
  FUN_1000167bc(param_1 + _DAT_10002dbd8,0x10002dc38,&UNK_100021c90);
                    /* WARNING: Could not recover jumptable at 0x000100020970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_100028a20)(*(undefined8 *)(param_1 + _DAT_10002dbe0 + 8))
  ;
  return;
}



/* Entry: 100015e44; end: 100015e4b;  */

void FUN_100015e44(void)

{
  if (lRam000000010002dc10 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_1000230b0);
  return;
}



/* Entry: 100015e4c; end: 100015e83;  */

void FUN_100015e4c(undefined8 param_1)

{
  if (lRam000000010002dc10 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_1000230b0);
  return;
}



/* Entry: 100015e84; end: 100015f13;  */

void FUN_100015e84(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  FUN_100015f14();
  if (param_2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    lVar1 = 0x13f;
    FUN_100015f74();
    if (param_2 < 0x40) {
      lStack_30 = *(long *)(lVar1 + -8) + 0x40;
      puStack_28 = &UNK_100021c40;
      _swift_updateClassMetadata2(param_1,0x100,3,&lStack_38,param_1 + 0x50);
    }
  }
  return;
}



/* Entry: 100015f14; end: 100015f73;  */

void FUN_100015f14(long param_1)

{
  long lVar1;
  
  if (lRam000000010002dc20 == 0) {
    lVar1 = 0x10002dc28;
    FUN_10000c888(0x10002dc28,&UNK_100021c38);
    __s7Combine9PublishedVMa();
    if (lVar1 == 0) {
      lRam000000010002dc20 = param_1;
    }
  }
  return;
}



/* Entry: 100015f74; end: 100015fc7;  */

void FUN_100015f74(long param_1)

{
  long lVar1;
  
  if (lRam000000010002dc30 == 0) {
    lVar1 = 0xff;
    __s10Foundation4DateVMa();
    __sSqMa();
    if (lVar1 == 0) {
      lRam000000010002dc30 = param_1;
    }
  }
  return;
}



/* Entry: 100015fc8; end: 100015fd3;  */

undefined * FUN_100015fc8(void)

{
  return PTR___s7Combine25ObservableObjectPublisherCAA0D0AAWP_1000282c0;
}



/* Entry: 100015fd4; end: 10001600f;  */

void FUN_100015fd4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_100015e4c();
  __s7Combine16ObservableObjectPA2A0bC9PublisherC0c10WillChangeD0RtzrlE06objecteF0AEvg();
  *param_1 = uVar1;
  return;
}



/* Entry: 100016010; end: 100016077;  */

void FUN_100016010(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  puVar1 = &UNK_100021cb0;
  _swift_getKeyPath(&UNK_100021cb0);
  puVar2 = &UNK_100021cd8;
  _swift_getKeyPath(&UNK_100021cd8);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (param_1,uVar3,puVar1,puVar2);
  _swift_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x000100020a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_100028ae0)(puVar2);
  return;
}



/* Entry: 100016078; end: 1000160eb;  */

void FUN_100016078(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_38;
  
  uVar3 = *param_1;
  puVar1 = &UNK_100021cb0;
  _swift_getKeyPath(&UNK_100021cb0);
  puVar2 = &UNK_100021cd8;
  _swift_getKeyPath(&UNK_100021cd8);
  uStack_38 = uVar3;
  _swift_bridgeObjectRetain(uVar3);
  _objc_retain_x22();
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
            (&uStack_38,uVar3,puVar1,puVar2);
  return;
}



/* Entry: 1000160ec; end: 10001614f;  */

void FUN_1000160ec(undefined8 param_1,int *param_2)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  iVar1 = *param_2;
  plVar2 = (long *)(ulong)(uint)param_2[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100016150;
                    /* WARNING: Could not recover jumptable at 0x00010001614c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_2))(plVar2,param_1);
  return;
}



/* Entry: 100016150; end: 10001618f;  */

void FUN_100016150(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010001618c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100016190; end: 1000161bf;  */

undefined1  [16] FUN_100016190(undefined8 param_1)

{
  ulong uVar1;
  undefined1 *puVar2;
  ulong uVar3;
  long unaff_x20;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_78 [40];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x28);
  __ss11AnyHashableV13_rawHashValue4seedS2i_tF();
  uVar3 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar1 = uVar1 & (uVar3 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) == 0) {
    uVar4 = 0;
  }
  else {
    do {
      FUN_100016a24(*(long *)(unaff_x20 + 0x30) + uVar1 * 0x28,auStack_78);
      puVar2 = auStack_78;
      __ss11AnyHashableV2eeoiySbAB_ABtFZ(puVar2,param_1);
      uVar4 = (uint)puVar2;
      FUN_10000c344(auStack_78);
      if (((ulong)puVar2 & 1) != 0) break;
      uVar1 = uVar1 + 1 & ~uVar3;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
  }
  auVar5._8_4_ = uVar4 & 1;
  auVar5._0_8_ = uVar1;
  auVar5._12_4_ = 0;
  return auVar5;
}



/* Entry: 1000161c0; end: 100016223;  */

undefined1  [16] FUN_1000161c0(ulong param_1,ulong param_2)

{
  ulong *puVar1;
  ulong uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x20;
  undefined1 auVar8 [16];
  undefined1 auStack_78 [56];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_78,*(undefined8 *)(unaff_x20 + 0x28));
  puVar3 = auStack_78;
  __sSS4hash4intoys6HasherVz_tF(puVar3,param_1,param_2);
  __ss6HasherV9_finalizeSiyF();
  uVar6 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar7 = (ulong)puVar3 & (uVar6 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar7 >> 6) * 8) >> (uVar7 & 0x3f) & 1) != 0) {
    do {
      puVar1 = (ulong *)(*(long *)(unaff_x20 + 0x30) + uVar7 * 0x10);
      uVar4 = *puVar1;
      uVar2 = puVar1[1];
      if ((uVar4 == param_1 && uVar2 == param_2) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar4,uVar2,param_1,param_2,0), (uVar4 & 1) != 0)) {
        uVar5 = 1;
        goto LAB_1000163b0;
      }
      uVar7 = uVar7 + 1 & ~uVar6;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (uVar7 >> 6) * 8) >> (uVar7 & 0x3f) & 1) != 0);
  }
  uVar5 = 0;
LAB_1000163b0:
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = uVar7;
  return auVar8;
}



/* Entry: 100016224; end: 10001625f;  */

undefined8 FUN_100016224(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10001dd7c();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 100016260; end: 10001631b;  */

undefined1  [16] FUN_100016260(undefined8 param_1,ulong param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  long unaff_x20;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_78 [40];
  
  uVar2 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar2 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    uVar3 = 0;
  }
  else {
    do {
      FUN_100016a24(*(long *)(unaff_x20 + 0x30) + param_2 * 0x28,auStack_78);
      puVar1 = auStack_78;
      __ss11AnyHashableV2eeoiySbAB_ABtFZ(puVar1,param_1);
      uVar3 = (uint)puVar1;
      FUN_10000c344(auStack_78);
      if (((ulong)puVar1 & 1) != 0) break;
      param_2 = param_2 + 1 & ~uVar2;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  }
  auVar4._8_4_ = uVar3 & 1;
  auVar4._0_8_ = param_2;
  auVar4._12_4_ = 0;
  return auVar4;
}



/* Entry: 10001631c; end: 1000163c7;  */

undefined1  [16] FUN_10001631c(ulong param_1,ulong param_2,ulong param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x20;
  undefined1 auVar6 [16];
  
  uVar5 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_3 = param_3 & (uVar5 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_3 >> 6) * 8) >> (param_3 & 0x3f) & 1) != 0) {
    do {
      puVar1 = (ulong *)(*(long *)(unaff_x20 + 0x30) + param_3 * 0x10);
      uVar3 = *puVar1;
      uVar2 = puVar1[1];
      if ((uVar3 == param_1 && uVar2 == param_2) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar3,uVar2,param_1,param_2,0), (uVar3 & 1) != 0)) {
        uVar4 = 1;
        goto LAB_1000163b0;
      }
      param_3 = param_3 + 1 & ~uVar5;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (param_3 >> 6) * 8) >> (param_3 & 0x3f) & 1) != 0);
  }
  uVar4 = 0;
LAB_1000163b0:
  auVar6._8_8_ = uVar4;
  auVar6._0_8_ = param_3;
  return auVar6;
}



/* Entry: 1000163c8; end: 1000164d7;  */

undefined * FUN_1000163c8(long param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  
  puVar11 = *(undefined **)(param_1 + 0x10);
  puVar8 = PTR___swiftEmptyDictionarySingleton_1000289e0;
  if (puVar11 != (undefined *)0x0) {
    FUN_10000c3c0(0x10002dc58,&UNK_100021d40);
    puVar8 = puVar11;
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
    _swift_retain();
    puVar12 = (undefined8 *)(param_1 + 0x38);
    do {
      uVar3 = puVar12[-3];
      uVar5 = puVar12[-2];
      uVar4 = puVar12[-1];
      uVar6 = *puVar12;
      _swift_bridgeObjectRetain(uVar5);
      _swift_bridgeObjectRetain(uVar6);
      uVar9 = uVar3;
      uVar10 = uVar5;
      FUN_1000161c0();
      if ((uVar10 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1000164d4);
        (*pcVar7)();
      }
      uVar10 = uVar9 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar8 + uVar10 + 0x40) = *(ulong *)(puVar8 + uVar10 + 0x40) | 1L << (uVar9 & 0x3f)
      ;
      puVar1 = (ulong *)(*(long *)(puVar8 + 0x30) + uVar9 * 0x10);
      *puVar1 = uVar3;
      puVar1[1] = uVar5;
      puVar2 = (undefined8 *)(*(long *)(puVar8 + 0x38) + uVar9 * 0x10);
      *puVar2 = uVar4;
      puVar2[1] = uVar6;
      if (SCARRY8(*(long *)(puVar8 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1000164d8);
        (*pcVar7)();
      }
      puVar12 = puVar12 + 4;
      *(long *)(puVar8 + 0x10) = *(long *)(puVar8 + 0x10) + 1;
      puVar11 = puVar11 + -1;
    } while (puVar11 != (undefined *)0x0);
    _swift_release(puVar8);
  }
  return puVar8;
}



/* Entry: 1000164d8; end: 100016603;  */

undefined * FUN_1000164d8(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uStack_90;
  ulong uStack_88;
  undefined1 auStack_80 [32];
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_1000289e0;
  if (puVar8 != (undefined *)0x0) {
    FUN_10000c3c0(0x10002dc50,&UNK_100021ca8);
    puVar5 = puVar8;
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
    param_1 = param_1 + 0x20;
    _swift_retain();
    do {
      FUN_100016774(param_1,&uStack_90,0x10002da78,&UNK_1000219c0);
      uVar3 = uStack_88;
      uVar2 = uStack_90;
      uVar6 = uStack_90;
      uVar7 = uStack_88;
      FUN_1000161c0();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100016600);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      FUN_100016604(auStack_80,*(long *)(puVar5 + 0x38) + uVar6 * 0x20);
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100016604);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      param_1 = param_1 + 0x30;
      puVar8 = puVar8 + -1;
    } while (puVar8 != (undefined *)0x0);
    _swift_release(puVar5);
  }
  return puVar5;
}



/* Entry: 100016604; end: 100016613;  */

undefined8 * FUN_100016604(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar3 = param_1[3];
  uVar2 = param_1[2];
  param_2[1] = param_1[1];
  *param_2 = uVar1;
  param_2[3] = uVar3;
  param_2[2] = uVar2;
  return param_2;
}



/* Entry: 100016614; end: 100016663;  */

undefined8 FUN_100016614(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x10002dc38;
  FUN_10000c3c0(0x10002dc38,&UNK_100021c90);
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 100016664; end: 100016677;  */

void FUN_100016664(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000100020a9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_100028ae8)(uVar1);
  return;
}



/* Entry: 100016678; end: 10001667f;  */

void FUN_100016678(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100020a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_100028ae0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100016680; end: 100016683;  */

void FUN_100016680(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  puVar1 = &UNK_100021cb0;
  _swift_getKeyPath(&UNK_100021cb0);
  puVar2 = &UNK_100021cd8;
  _swift_getKeyPath(&UNK_100021cd8);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (param_1,uVar3,puVar1,puVar2);
  _swift_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x000100020a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_100028ae0)(puVar2);
  return;
}



/* Entry: 100016684; end: 100016687;  */

void FUN_100016684(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_38;
  
  uVar3 = *param_1;
  puVar1 = &UNK_100021cb0;
  _swift_getKeyPath(&UNK_100021cb0);
  puVar2 = &UNK_100021cd8;
  _swift_getKeyPath(&UNK_100021cd8);
  uStack_38 = uVar3;
  _swift_bridgeObjectRetain(uVar3);
  _objc_retain_x22();
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
            (&uStack_38,uVar3,puVar1,puVar2);
  return;
}



/* Entry: 100016688; end: 1000166c7;  */

void FUN_100016688(long *param_1,code *param_2,long param_3)

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


