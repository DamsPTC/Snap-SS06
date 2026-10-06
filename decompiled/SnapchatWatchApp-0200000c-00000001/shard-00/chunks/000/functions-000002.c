/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00015c30; end: 00015c6f;  */

void FUN_00015c30(void)

{
  if (iRam00034f8c != 0) {
    return;
  }
  iRam00034f8c = _swift_getWitnessTable(&UNK_00028508,&UNK_00030700);
  return;
}



/* Entry: 00015c70; end: 00015caf;  */

void FUN_00015c70(void)

{
  if (iRam00034f90 != 0) {
    return;
  }
  iRam00034f90 = _swift_getWitnessTable(&UNK_000286d8,&UNK_00030878);
  return;
}



/* Entry: 00015cb0; end: 00015cb3;  */

void FUN_00015cb0(void)

{
  undefined8 uVar1;
  
  if (iRam00034f94 != 0) {
    return;
  }
  uVar1 = FUN_00010a14(0x34f50,&UNK_00028678);
  iRam00034f94 = _swift_getWitnessTable
                           (PTR___s7SwiftUI16SubscriptionViewVyxq_GAA0D0AAMc_000301ec,uVar1);
  return;
}



/* Entry: 00015cb4; end: 00015d03;  */

void FUN_00015cb4(void)

{
  undefined8 uVar1;
  
  if (iRam00034f94 != 0) {
    return;
  }
  uVar1 = FUN_00010a14(0x34f50,&UNK_00028678);
  iRam00034f94 = _swift_getWitnessTable
                           (PTR___s7SwiftUI16SubscriptionViewVyxq_GAA0D0AAMc_000301ec,uVar1);
  return;
}



/* Entry: 00015d04; end: 00015d07;  */

void FUN_00015d04(void)

{
  int unaff_w20;
  
  _objc_release_x8();
  _swift_bridgeObjectRelease(*(undefined4 *)(unaff_w20 + 0x10));
  _swift_release(*(undefined4 *)(unaff_w20 + 0x14));
  FUN_000103d0(*(undefined4 *)(unaff_w20 + 0x1c),*(undefined1 *)(unaff_w20 + 0x20));
  _swift_release(*(undefined4 *)(unaff_w20 + 0x24));
                    /* WARNING: Could not recover jumptable at 0x0002757c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0003051c)();
  return;
}



/* Entry: 00015d08; end: 00015d17;  */

undefined1  [16] FUN_00015d08(void)

{
  return ZEXT816(0x30878);
}



/* Entry: 00015d18; end: 00015d27;  */

void FUN_00015d18(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000275e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_00030540)(param_1,&UNK_00029b80,1);
  return;
}



/* Entry: 00015d28; end: 00015dff;  */

void FUN_00015d28(void)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *in_w8;
  
  iVar3 = __s7SwiftUI5ColorV13RGBColorSpaceOMa(0);
  iVar1 = *(int *)(*(int *)(iVar3 + -4) + 0x20);
  (**(code **)(*(int *)(iVar3 + -4) + 0x38))
            (&stack0xffffffd0 + -(iVar1 + 0xfU & 0xfffffff0),
             *(undefined4 *)PTR___s7SwiftUI5ColorV13RGBColorSpaceO4sRGByA2EmFWC_000302f8,iVar3);
  uVar4 = __s7SwiftUI5ColorV_3red5green4blue7opacityA2C13RGBColorSpaceO_S4dtcfC
                    (0x406fe00000000000,0x406f800000000000,0,0x3ff0000000000000,
                     &stack0xffffffd0 + -(iVar1 + 0xfU & 0xfffffff0));
  uVar5 = __s7SwiftUI15SafeAreaRegionsV3allACvgZ();
  uVar2 = __s7SwiftUI4EdgeO3SetV3allAEvgZ();
  uVar6 = __s7SwiftUI5ImageV_6bundleACSS_So8NSBundleCSgtcfC(0xb,"text_reply_category",0xd0008000,0);
  *in_w8 = uVar4;
  in_w8[1] = uVar5;
  *(undefined1 *)(in_w8 + 2) = uVar2;
  in_w8[3] = uVar6;
  in_w8[4] = 0;
  *(undefined2 *)(in_w8 + 5) = 1;
  return;
}



/* Entry: 00015e00; end: 00015e03;  */

void FUN_00015e00(void)

{
                    /* WARNING: Could not recover jumptable at 0x00026f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_000302d8
  )();
  return;
}



/* Entry: 00015e04; end: 00015e07;  */

void FUN_00015e04(void)

{
                    /* WARNING: Could not recover jumptable at 0x00026f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC4List4view6inputsAA01_cE7OutputsVAA11_GraphValueVyxG_AA01_cE6InputsVtFZ_000302dc
  )();
  return;
}



/* Entry: 00015e08; end: 00015e0b;  */

void FUN_00015e08(void)

{
                    /* WARNING: Could not recover jumptable at 0x00026f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s7SwiftUI4ViewPAAE14_viewListCount6inputsSiSgAA01_ceF6InputsV_tFZ_000302f0)();
  return;
}



/* Entry: 00015e0c; end: 00015eb3;  */

void FUN_00015e0c(void)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 extraout_w1;
  undefined8 *in_w8;
  undefined1 auStack_90 [32];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined2 uStack_64;
  undefined2 uStack_62;
  undefined4 uStack_60;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined4 uStack_58;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 uStack_34;
  undefined1 uStack_33;
  
  uVar3 = __s7SwiftUI9AlignmentV6centerACvgZ();
  FUN_00015d28();
  uStack_38 = uStack_40;
  uVar2 = uStack_44;
  uVar1 = (undefined1)uStack_48;
  uStack_34 = (undefined1)uStack_3c;
  uStack_33 = uStack_3c._1_1_;
  uStack_68 = uStack_50;
  uStack_64 = (undefined2)uStack_4c;
  uStack_62 = (undefined2)((uint)uStack_4c >> 0x10);
  uStack_60 = CONCAT31(uStack_60._1_3_,(undefined1)uStack_48);
  uStack_5c = (undefined2)uStack_44;
  uStack_5a = (undefined2)((uint)uStack_44 >> 0x10);
  uStack_58 = uStack_40;
  uStack_54 = (undefined1)uStack_3c;
  uStack_53 = uStack_3c._1_1_;
  uStack_48 = uStack_50;
  uStack_44 = uStack_4c;
  uStack_40 = CONCAT31(uStack_40._1_3_,uVar1);
  uStack_3c = uVar2;
  uStack_70 = uVar3;
  uStack_6c = extraout_w1;
  uStack_50 = uVar3;
  uStack_4c = extraout_w1;
  FUN_00015eb4(&uStack_70,auStack_90);
  FUN_00015f04(&uStack_50);
  in_w8[1] = CONCAT26(uStack_62,CONCAT24(uStack_64,uStack_68));
  *in_w8 = CONCAT44(uStack_6c,uStack_70);
  *(ulonglong *)((int)in_w8 + 0x16) =
       CONCAT17(uStack_53,CONCAT16(uStack_54,CONCAT42(uStack_58,uStack_5a)));
  *(ulonglong *)((int)in_w8 + 0xe) = CONCAT26(uStack_5c,CONCAT42(uStack_60,uStack_62));
  return;
}



/* Entry: 00015eb4; end: 00015f03;  */

undefined8 FUN_00015eb4(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00010468(0x34f98,&UNK_00028728);
  (**(code **)(*(int *)(iVar1 + -4) + 8))(param_2,param_1,iVar1);
  return param_2;
}



/* Entry: 00015f04; end: 00015f4b;  */

undefined8 FUN_00015f04(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00010468(0x34f98,&UNK_00028728);
  (**(code **)(*(int *)(iVar1 + -4) + 4))(param_1,iVar1);
  return param_1;
}



/* Entry: 00015f4c; end: 00015f4f;  */

void FUN_00015f4c(void)

{
  undefined8 uVar1;
  
  if (iRam00034f9c != 0) {
    return;
  }
  uVar1 = FUN_00010a14(0x34f98,&UNK_00028728);
  iRam00034f9c = _swift_getWitnessTable(PTR___s7SwiftUI6ZStackVyxGAA4ViewAAMc_00030358,uVar1);
  return;
}



/* Entry: 00015f50; end: 00015f9f;  */

void FUN_00015f50(void)

{
  undefined8 uVar1;
  
  if (iRam00034f9c != 0) {
    return;
  }
  uVar1 = FUN_00010a14(0x34f98,&UNK_00028728);
  iRam00034f9c = _swift_getWitnessTable(PTR___s7SwiftUI6ZStackVyxGAA4ViewAAMc_00030358,uVar1);
  return;
}



/* Entry: 00015fa0; end: 00015fa7;  */

void FUN_00015fa0(void)

{
                    /* WARNING: Could not recover jumptable at 0x0002751c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericValueMetadata_000304fc)();
  return;
}



/* Entry: 00015fa8; end: 00016067;  */

/* WARNING: Removing unreachable block (ram,0x00016054) */

undefined4 FUN_00015fa8(int param_1)

{
  int iVar1;
  int iStack_3c;
  undefined *puStack_38;
  int iStack_34;
  int iStack_30;
  undefined *puStack_2c;
  undefined *puStack_28;
  undefined *puStack_24;
  
  iVar1 = __s10Foundation3URLVMa(0x13f);
  iStack_3c = *(int *)(iVar1 + -4) + 0x20;
  puStack_38 = PTR___sBbWV_0003037c + 0x20;
  iVar1 = _swift_checkMetadataState(0x13f,*(undefined4 *)(param_1 + 8));
  iStack_34 = *(int *)(iVar1 + -4) + 0x20;
  iVar1 = _swift_checkMetadataState(0x13f,*(undefined4 *)(param_1 + 0xc));
  iStack_30 = *(int *)(iVar1 + -4) + 0x20;
  puStack_2c = &UNK_00028748;
  puStack_28 = &UNK_00028748;
  puStack_24 = &UNK_00028748;
  _swift_initStructMetadata(param_1,0,7,&iStack_3c,param_1 + 0x18);
  return 0;
}



/* Entry: 00016068; end: 0001627f;  */

int * FUN_00016068(int *param_1,int *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  code *pcVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  
  iVar16 = __s10Foundation3URLVMa(0);
  iVar12 = *(int *)(iVar16 + -4);
  iVar7 = *(int *)(iVar12 + 0x20);
  iVar5 = *(int *)(param_3 + 8);
  iVar6 = *(int *)(param_3 + 0xc);
  iVar13 = *(int *)(iVar5 + -4);
  uVar1 = *(uint *)(iVar13 + 0x28) & 0xff;
  iVar8 = *(int *)(iVar13 + 0x20);
  iVar14 = *(int *)(iVar6 + -4);
  uVar2 = *(uint *)(iVar14 + 0x28) & 0xff;
  iVar17 = *(int *)(iVar14 + 0x20) + 3;
  uVar15 = uVar2 | *(uint *)(iVar12 + 0x28) & 0xfc | uVar1;
  if ((uVar15 < 4 &&
      ((*(uint *)(iVar14 + 0x28) | *(uint *)(iVar13 + 0x28) | *(uint *)(iVar12 + 0x28)) & 0x100000)
      == 0) && (iVar17 + (uVar2 + iVar8 +
                          (uVar1 + (iVar7 + 3U & 0xfffffffc) + 4 & (uVar1 ^ 0xffffffff)) &
                         (uVar2 ^ 0xffffffff)) & 0xfffffffc) + 0x18 < 0xd) {
    (**(code **)(iVar12 + 8))(param_1,param_2,iVar16);
    puVar3 = (undefined4 *)((int)param_1 + iVar7 + 3 & 0xfffffffc);
    puVar4 = (undefined4 *)((int)param_2 + iVar7 + 3 & 0xfffffffc);
    *puVar3 = *puVar4;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
    pcVar9 = *(code **)(iVar13 + 8);
    _swift_bridgeObjectRetain();
    (*pcVar9)(puVar3,puVar4,iVar5);
    uVar1 = (int)puVar3 + uVar2 + iVar8 & ~uVar2;
    uVar2 = (int)puVar4 + uVar2 + iVar8 & ~uVar2;
    (**(code **)(iVar14 + 8))(uVar1,uVar2,iVar6);
    puVar3 = (undefined4 *)(iVar17 + uVar1 & 0xfffffffc);
    puVar4 = (undefined4 *)(iVar17 + uVar2 & 0xfffffffc);
    *puVar3 = *puVar4;
    uVar10 = puVar4[1];
    puVar3[1] = uVar10;
    *(undefined1 *)(puVar3 + 2) = *(undefined1 *)(puVar4 + 2);
    uVar11 = puVar4[3];
    puVar3[3] = uVar11;
    *(undefined1 *)(puVar3 + 4) = *(undefined1 *)(puVar4 + 4);
    iVar17 = puVar4[5];
    puVar3[5] = iVar17;
    _swift_retain();
    _swift_retain(uVar10);
    _swift_retain(uVar11);
  }
  else {
    iVar17 = *param_2;
    *param_1 = iVar17;
    param_1 = (int *)(iVar17 + (uVar15 + 8 & (uVar15 & 0xfc ^ 0xfffffffc)));
  }
  _swift_retain(iVar17);
  return param_1;
}



/* Entry: 00016280; end: 00016363;  */

void FUN_00016280(undefined8 param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = __s10Foundation3URLVMa(0);
  iVar3 = *(int *)(iVar4 + -4);
  (**(code **)(iVar3 + 4))(param_1,iVar4);
  puVar1 = (undefined4 *)((int)param_1 + *(int *)(iVar3 + 0x20) + 3U & 0xfffffffc);
  _swift_bridgeObjectRelease(*puVar1);
  iVar3 = *(int *)(*(int *)(param_2 + 8) + -4);
  uVar2 = (int)puVar1 + *(byte *)(iVar3 + 0x28) + 4 & (*(byte *)(iVar3 + 0x28) ^ 0xffffffff);
  (**(code **)(iVar3 + 4))(uVar2);
  iVar4 = *(int *)(*(int *)(param_2 + 0xc) + -4);
  uVar2 = uVar2 + *(int *)(iVar3 + 0x20) + (uint)*(byte *)(iVar4 + 0x28) &
          (*(byte *)(iVar4 + 0x28) ^ 0xffffffff);
  (**(code **)(iVar4 + 4))(uVar2);
  puVar1 = (undefined4 *)(*(int *)(iVar4 + 0x20) + uVar2 + 3 & 0xfffffffc);
  _swift_release(*puVar1);
  _swift_release(puVar1[1]);
  _swift_release(puVar1[3]);
                    /* WARNING: Could not recover jumptable at 0x00027678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_00030570)(puVar1[5]);
  return;
}



/* Entry: 00016364; end: 000164d3;  */

undefined8 FUN_00016364(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  byte bVar11;
  int iVar12;
  
  iVar12 = __s10Foundation3URLVMa(0);
  iVar9 = *(int *)(iVar12 + -4);
  (**(code **)(iVar9 + 8))(param_1,param_2,iVar12);
  iVar9 = *(int *)(iVar9 + 0x20) + 3;
  puVar1 = (undefined4 *)(iVar9 + (int)param_1 & 0xfffffffc);
  puVar2 = (undefined4 *)(iVar9 + (int)param_2 & 0xfffffffc);
  *puVar1 = *puVar2;
  iVar12 = *(int *)(param_3 + 8);
  iVar10 = *(int *)(iVar12 + -4);
  bVar11 = *(byte *)(iVar10 + 0x28);
  iVar9 = bVar11 + 4;
  uVar3 = iVar9 + (int)puVar1 & (bVar11 ^ 0xffffffff);
  uVar4 = iVar9 + (int)puVar2 & (bVar11 ^ 0xffffffff);
  pcVar5 = *(code **)(iVar10 + 8);
  _swift_bridgeObjectRetain();
  (*pcVar5)(uVar3,uVar4,iVar12);
  iVar12 = *(int *)(*(int *)(param_3 + 0xc) + -4);
  bVar11 = *(byte *)(iVar12 + 0x28);
  iVar9 = (uint)bVar11 + *(int *)(iVar10 + 0x20);
  uVar3 = iVar9 + uVar3 & (bVar11 ^ 0xffffffff);
  uVar4 = iVar9 + uVar4 & (bVar11 ^ 0xffffffff);
  (**(code **)(iVar12 + 8))(uVar3,uVar4);
  iVar9 = *(int *)(iVar12 + 0x20) + 3;
  puVar1 = (undefined4 *)(iVar9 + uVar3 & 0xfffffffc);
  puVar2 = (undefined4 *)(iVar9 + uVar4 & 0xfffffffc);
  *puVar1 = *puVar2;
  uVar6 = puVar2[1];
  puVar1[1] = uVar6;
  *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(puVar2 + 2);
  uVar7 = puVar2[3];
  puVar1[3] = uVar7;
  *(undefined1 *)(puVar1 + 4) = *(undefined1 *)(puVar2 + 4);
  uVar8 = puVar2[5];
  puVar1[5] = uVar8;
  _swift_retain();
  _swift_retain(uVar6);
  _swift_retain(uVar7);
  _swift_retain(uVar8);
  return param_1;
}



/* Entry: 000164d4; end: 00016667;  */

undefined8 FUN_000164d4(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  int iVar9;
  
  iVar9 = __s10Foundation3URLVMa(0);
  iVar6 = *(int *)(iVar9 + -4);
  (**(code **)(iVar6 + 0xc))(param_1,param_2,iVar9);
  iVar6 = *(int *)(iVar6 + 0x20) + 3;
  puVar1 = (undefined4 *)(iVar6 + (int)param_1 & 0xfffffffc);
  puVar2 = (undefined4 *)(iVar6 + (int)param_2 & 0xfffffffc);
  uVar5 = *puVar1;
  *puVar1 = *puVar2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar5);
  iVar9 = *(int *)(*(int *)(param_3 + 8) + -4);
  bVar8 = *(byte *)(iVar9 + 0x28);
  iVar6 = bVar8 + 4;
  uVar3 = iVar6 + (int)puVar1 & (bVar8 ^ 0xffffffff);
  uVar4 = iVar6 + (int)puVar2 & (bVar8 ^ 0xffffffff);
  (**(code **)(iVar9 + 0xc))(uVar3,uVar4);
  iVar7 = *(int *)(*(int *)(param_3 + 0xc) + -4);
  bVar8 = *(byte *)(iVar7 + 0x28);
  iVar6 = (uint)bVar8 + *(int *)(iVar9 + 0x20);
  uVar3 = iVar6 + uVar3 & (bVar8 ^ 0xffffffff);
  uVar4 = iVar6 + uVar4 & (bVar8 ^ 0xffffffff);
  (**(code **)(iVar7 + 0xc))(uVar3,uVar4);
  iVar6 = *(int *)(iVar7 + 0x20) + 3;
  puVar1 = (undefined4 *)(iVar6 + uVar3 & 0xfffffffc);
  puVar2 = (undefined4 *)(iVar6 + uVar4 & 0xfffffffc);
  uVar5 = *puVar1;
  *puVar1 = *puVar2;
  _swift_retain();
  _swift_release(uVar5);
  uVar5 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_retain();
  _swift_release(uVar5);
  *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(puVar2 + 2);
  uVar5 = puVar1[3];
  puVar1[3] = puVar2[3];
  _swift_retain();
  _swift_release(uVar5);
  *(undefined1 *)(puVar1 + 4) = *(undefined1 *)(puVar2 + 4);
  uVar5 = puVar1[5];
  puVar1[5] = puVar2[5];
  _swift_retain();
  _swift_release(uVar5);
  return param_1;
}



/* Entry: 00016668; end: 00016793;  */

undefined8 FUN_00016668(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  int iVar10;
  
  iVar10 = __s10Foundation3URLVMa(0);
  iVar7 = *(int *)(iVar10 + -4);
  (**(code **)(iVar7 + 0x10))(param_1,param_2,iVar10);
  iVar7 = *(int *)(iVar7 + 0x20) + 3;
  puVar1 = (undefined4 *)(iVar7 + (int)param_1 & 0xfffffffc);
  puVar2 = (undefined4 *)(iVar7 + (int)param_2 & 0xfffffffc);
  *puVar1 = *puVar2;
  iVar10 = *(int *)(*(int *)(param_3 + 8) + -4);
  bVar9 = *(byte *)(iVar10 + 0x28);
  iVar7 = bVar9 + 4;
  uVar5 = iVar7 + (int)puVar1 & (bVar9 ^ 0xffffffff);
  uVar6 = iVar7 + (int)puVar2 & (bVar9 ^ 0xffffffff);
  (**(code **)(iVar10 + 0x10))(uVar5,uVar6);
  iVar8 = *(int *)(*(int *)(param_3 + 0xc) + -4);
  bVar9 = *(byte *)(iVar8 + 0x28);
  iVar7 = (uint)bVar9 + *(int *)(iVar10 + 0x20);
  uVar5 = iVar7 + uVar5 & (bVar9 ^ 0xffffffff);
  uVar6 = iVar7 + uVar6 & (bVar9 ^ 0xffffffff);
  (**(code **)(iVar8 + 0x10))(uVar5,uVar6);
  iVar7 = *(int *)(iVar8 + 0x20) + 3;
  puVar3 = (undefined8 *)(iVar7 + uVar5 & 0xfffffffc);
  puVar4 = (undefined8 *)(iVar7 + uVar6 & 0xfffffffc);
  *puVar3 = *puVar4;
  puVar3[1] = puVar4[1];
  puVar3[2] = puVar4[2];
  return param_1;
}



/* Entry: 00016794; end: 000168ff;  */

undefined8 FUN_00016794(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  int iVar9;
  
  iVar9 = __s10Foundation3URLVMa(0);
  iVar6 = *(int *)(iVar9 + -4);
  (**(code **)(iVar6 + 0x14))(param_1,param_2,iVar9);
  iVar6 = *(int *)(iVar6 + 0x20) + 3;
  puVar1 = (undefined4 *)(iVar6 + (int)param_1 & 0xfffffffc);
  puVar2 = (undefined4 *)(iVar6 + (int)param_2 & 0xfffffffc);
  uVar5 = *puVar1;
  *puVar1 = *puVar2;
  _swift_bridgeObjectRelease(uVar5);
  iVar9 = *(int *)(*(int *)(param_3 + 8) + -4);
  bVar8 = *(byte *)(iVar9 + 0x28);
  iVar6 = bVar8 + 4;
  uVar3 = iVar6 + (int)puVar1 & (bVar8 ^ 0xffffffff);
  uVar4 = iVar6 + (int)puVar2 & (bVar8 ^ 0xffffffff);
  (**(code **)(iVar9 + 0x14))(uVar3,uVar4);
  iVar7 = *(int *)(*(int *)(param_3 + 0xc) + -4);
  bVar8 = *(byte *)(iVar7 + 0x28);
  iVar6 = (uint)bVar8 + *(int *)(iVar9 + 0x20);
  uVar3 = iVar6 + uVar3 & (bVar8 ^ 0xffffffff);
  uVar4 = iVar6 + uVar4 & (bVar8 ^ 0xffffffff);
  (**(code **)(iVar7 + 0x14))(uVar3,uVar4);
  iVar6 = *(int *)(iVar7 + 0x20) + 3;
  puVar1 = (undefined4 *)(iVar6 + uVar3 & 0xfffffffc);
  puVar2 = (undefined4 *)(iVar6 + uVar4 & 0xfffffffc);
  uVar5 = *puVar1;
  *puVar1 = *puVar2;
  _swift_release(uVar5);
  uVar5 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_release(uVar5);
  *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(puVar2 + 2);
  uVar5 = puVar1[3];
  puVar1[3] = puVar2[3];
  _swift_release(uVar5);
  *(undefined1 *)(puVar1 + 4) = *(undefined1 *)(puVar2 + 4);
  uVar5 = puVar1[5];
  puVar1[5] = puVar2[5];
  _swift_release(uVar5);
  return param_1;
}



/* Entry: 00016900; end: 00016ad7;  */

ulonglong FUN_00016900(int *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  byte bVar13;
  byte bVar14;
  int iVar15;
  ulonglong uVar16;
  uint uVar17;
  int iVar18;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar19;
  
  iVar15 = __s10Foundation3URLVMa(0);
  iVar10 = *(int *)(iVar15 + -4);
  uVar8 = *(uint *)(iVar10 + 0x2c);
  iVar18 = *(int *)(param_3 + 0xc);
  iVar11 = *(int *)(*(int *)(param_3 + 8) + -4);
  uVar9 = *(uint *)(iVar11 + 0x2c);
  uVar7 = uVar8;
  if (uVar8 <= uVar9) {
    uVar7 = uVar9;
  }
  iVar12 = *(int *)(iVar18 + -4);
  uVar17 = *(uint *)(iVar12 + 0x2c);
  if (uVar7 <= uVar17) {
    uVar7 = uVar17;
  }
  uVar4 = uVar7;
  if (uVar7 < 0x1001) {
    uVar4 = 0x1000;
  }
  if (param_2 == 0) {
    return 0;
  }
  bVar13 = *(byte *)(iVar11 + 0x28);
  bVar14 = *(byte *)(iVar12 + 0x28);
  iVar2 = (uint)bVar14 + *(int *)(iVar11 + 0x20);
  if (uVar4 <= param_2 && param_2 - uVar4 != 0) {
    iVar1 = (*(int *)(iVar12 + 0x20) +
             (iVar2 + ((uint)bVar13 + (*(int *)(iVar10 + 0x20) + 3U & 0xfffffffc) + 4 &
                      (bVar13 ^ 0xffffffff)) & (bVar14 ^ 0xffffffff)) + 3 & 0xfffffffc) + 0x18;
    uVar19 = 2;
    uVar6 = uVar19;
    if (iVar1 == 0) {
      uVar6 = (param_2 - uVar4) + 1;
    }
    if (0xffff < uVar6) {
      uVar19 = 4;
    }
    if (uVar6 < 0x100) {
      uVar19 = 1;
    }
    uVar5 = 0;
    if (1 < uVar6) {
      uVar5 = uVar19;
    }
    if (uVar5 < 2) {
      if ((uVar5 != 0) &&
         (uVar19 = (uint)*(byte *)((int)param_1 + iVar1), *(byte *)((int)param_1 + iVar1) != 0))
      goto LAB_00016a10;
    }
    else if (uVar5 == 2) {
      uVar19 = (uint)*(ushort *)((int)param_1 + iVar1);
      if (*(ushort *)((int)param_1 + iVar1) != 0) {
LAB_00016a10:
        iVar18 = uVar19 - 1;
        if (iVar1 != 0) {
          iVar18 = *param_1;
        }
        return (ulonglong)(uVar4 + iVar18 + 1);
      }
    }
    else {
      uVar19 = *(uint *)((int)param_1 + iVar1);
      if (uVar19 != 0) goto LAB_00016a10;
    }
  }
  if (uVar8 == uVar4) {
    UNRECOVERED_JUMPTABLE = *(code **)(iVar10 + 0x18);
    uVar17 = uVar8;
    iVar18 = iVar15;
  }
  else {
    puVar3 = (uint *)((int)param_1 + *(int *)(iVar10 + 0x20) + 3 & 0xfffffffc);
    if (uVar7 < 0x1001) {
      uVar8 = *puVar3;
      uVar7 = 0;
      if (uVar8 < 0x1000) {
        uVar7 = uVar8 + 1;
      }
      return (ulonglong)uVar7;
    }
    param_1 = (int *)((int)puVar3 + bVar13 + 4 & ~(uint)bVar13);
    if (uVar9 == uVar4) {
      UNRECOVERED_JUMPTABLE = *(code **)(iVar11 + 0x18);
      uVar17 = uVar9;
      iVar18 = *(int *)(param_3 + 8);
    }
    else {
      param_1 = (int *)(iVar2 + (int)param_1 & ~(uint)bVar14);
      UNRECOVERED_JUMPTABLE = *(code **)(iVar12 + 0x18);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00016a54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar16 = (*UNRECOVERED_JUMPTABLE)(param_1,uVar17,iVar18);
  return uVar16;
}



/* Entry: 00016ad8; end: 00016d07;  */

void FUN_00016ad8(int *param_1,undefined8 param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  byte bVar13;
  byte bVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar19;
  int iVar20;
  uint uVar21;
  
  iVar16 = __s10Foundation3URLVMa(0);
  iVar10 = *(int *)(iVar16 + -4);
  uVar7 = *(uint *)(iVar10 + 0x2c);
  iVar20 = *(int *)(param_4 + 8);
  iVar18 = *(int *)(param_4 + 0xc);
  iVar11 = *(int *)(iVar20 + -4);
  uVar8 = *(uint *)(iVar11 + 0x2c);
  uVar4 = uVar7;
  if (uVar7 <= uVar8) {
    uVar4 = uVar8;
  }
  iVar12 = *(int *)(iVar18 + -4);
  uVar17 = *(uint *)(iVar12 + 0x2c);
  if (uVar4 <= uVar17) {
    uVar4 = uVar17;
  }
  iVar9 = *(int *)(iVar10 + 0x20);
  bVar13 = *(byte *)(iVar11 + 0x28);
  bVar14 = *(byte *)(iVar12 + 0x28);
  iVar2 = (uint)bVar14 + *(int *)(iVar11 + 0x20);
  uVar5 = uVar4;
  if (uVar4 < 0x1001) {
    uVar5 = 0x1000;
  }
  iVar1 = (*(int *)(iVar12 + 0x20) +
           (iVar2 + ((uint)bVar13 + (iVar9 + 3U & 0xfffffffc) + 4 & (bVar13 ^ 0xffffffff)) &
           (bVar14 ^ 0xffffffff)) + 3 & 0xfffffffc) + 0x18;
  uVar21 = 0;
  if (uVar5 <= param_3 && param_3 - uVar5 != 0) {
    uVar19 = 2;
    uVar6 = uVar19;
    if (iVar1 == 0) {
      uVar6 = (param_3 - uVar5) + 1;
    }
    if (0xffff < uVar6) {
      uVar19 = 4;
    }
    if (uVar6 < 0x100) {
      uVar19 = 1;
    }
    uVar21 = 0;
    if (1 < uVar6) {
      uVar21 = uVar19;
    }
  }
  uVar19 = (uint)param_2;
  iVar15 = uVar19 - uVar5;
  if (uVar19 < uVar5 || iVar15 == 0) {
    if (uVar21 < 2) {
      if (uVar21 != 0) {
        *(undefined1 *)((int)param_1 + iVar1) = 0;
      }
    }
    else if (uVar21 == 2) {
      *(undefined2 *)((int)param_1 + iVar1) = 0;
    }
    else {
      *(undefined4 *)((int)param_1 + iVar1) = 0;
    }
    if (uVar19 != 0) {
      if (uVar7 == uVar5) {
        UNRECOVERED_JUMPTABLE = *(code **)(iVar10 + 0x1c);
        uVar17 = uVar7;
        iVar18 = iVar16;
      }
      else {
        piVar3 = (int *)((int)param_1 + iVar9 + 3 & 0xfffffffc);
        if (uVar4 < 0x1001) {
          if (uVar19 < 0x1001) {
            iVar20 = uVar19 - 1;
          }
          else {
            iVar20 = uVar19 - 0x1001;
          }
          *piVar3 = iVar20;
          return;
        }
        param_1 = (int *)((int)piVar3 + bVar13 + 4 & ~(uint)bVar13);
        if (uVar8 == uVar5) {
          UNRECOVERED_JUMPTABLE = *(code **)(iVar11 + 0x1c);
          uVar17 = uVar8;
          iVar18 = iVar20;
        }
        else {
          param_1 = (int *)(iVar2 + (int)param_1 & ~(uint)bVar14);
          UNRECOVERED_JUMPTABLE = *(code **)(iVar12 + 0x1c);
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00016c68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,param_2,uVar17,iVar18);
      return;
    }
  }
  else {
    if (iVar1 != 0) {
      iVar15 = 1;
      _bzero(param_1,iVar1);
      *param_1 = uVar19 + ~uVar5;
    }
    if (uVar21 < 2) {
      if (uVar21 != 0) {
        *(char *)((int)param_1 + iVar1) = (char)iVar15;
      }
    }
    else if (uVar21 == 2) {
      *(short *)((int)param_1 + iVar1) = (short)iVar15;
    }
    else {
      *(int *)((int)param_1 + iVar1) = iVar15;
    }
  }
  return;
}



/* Entry: 00016d08; end: 00016d13;  */

void FUN_00016d08(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000275c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getGenericMetadata_00030534)(param_1,param_2,&DAT_00029ba8);
  return;
}



/* Entry: 00016d14; end: 00016d47;  */

void FUN_00016d14(undefined8 param_1,int param_2)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)(param_2 + 0x10);
  uStack_20 = *(undefined8 *)(param_2 + 8);
  _swift_getOpaqueTypeConformance(&uStack_20,&UNK_00029bf0,1);
  return;
}



/* Entry: 00016d48; end: 00016dff;  */

void FUN_00016d48(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = __s7SwiftUI19_ConditionalContentV7StorageOMa(0);
  puVar2 = &stack0xffffffb0 + -(*(int *)(*(int *)(iVar1 + -4) + 0x20) + 0xfU & 0xfffffff0);
  (**(code **)(*(int *)(param_2 + -4) + 8))(puVar2,param_1,param_2);
  _swift_storeEnumTagMultiPayload(puVar2,iVar1,0);
  __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
            (puVar2,param_2,param_3,param_4,param_5);
  return;
}



/* Entry: 00016e00; end: 00016eb7;  */

void FUN_00016e00(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = __s7SwiftUI19_ConditionalContentV7StorageOMa(0);
  puVar2 = &stack0xffffffb0 + -(*(int *)(*(int *)(iVar1 + -4) + 0x20) + 0xfU & 0xfffffff0);
  (**(code **)(*(int *)(param_3 + -4) + 8))(puVar2,param_1,param_3);
  _swift_storeEnumTagMultiPayload(puVar2,iVar1,1);
  __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
            (puVar2,param_2,param_3,param_4,param_5);
  return;
}



/* Entry: 00016eb8; end: 00017143;  */

void FUN_00016eb8(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  uint uVar15;
  int iVar16;
  undefined8 in_x8;
  int iVar17;
  undefined1 *puVar18;
  int iVar19;
  undefined1 auStack_c0 [64];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  iVar5 = *(int *)(param_1 + -4);
  iVar12 = *(int *)(iVar5 + 0x20);
  puVar18 = auStack_c0 + -(iVar12 + 0xfU & 0xfffffff0);
  uVar13 = FUN_00010a14(0x34fe0,&UNK_000287b8);
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar13 = __s7SwiftUI19_ConditionalContentVMa(0xff,uVar13,uVar1);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar14 = __s7SwiftUI19_ConditionalContentVMa(0xff,uVar2,uVar1);
  iVar10 = __s7SwiftUI19_ConditionalContentVMa(0,uVar13,uVar14);
  iVar6 = *(int *)(iVar10 + -4);
  iVar19 = (int)puVar18 - (*(int *)(iVar6 + 0x20) + 0xfU & 0xfffffff0);
  iVar11 = __s7SwiftUI15ModifiedContentVMa
                     (0,iVar10,PTR___s7SwiftUI25_AppearanceActionModifierVN_0003027c);
  iVar7 = *(int *)(iVar11 + -4);
  uVar15 = *(int *)(iVar7 + 0x20) + 0xfU & 0xfffffff0;
  iVar17 = iVar19 - uVar15;
  iVar16 = iVar17 - uVar15;
  FUN_00017144(param_1);
  (**(code **)(iVar5 + 8))(puVar18);
  bVar8 = *(byte *)(iVar5 + 0x28);
  uVar15 = bVar8 + 0x18 & (bVar8 ^ 0xffffffff);
  iVar12 = _swift_allocObject(&UNK_000308d4,uVar15 + iVar12,bVar8 | 3);
  *(undefined4 *)(iVar12 + 8) = uVar1;
  *(undefined4 *)(iVar12 + 0xc) = uVar2;
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(iVar12 + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(iVar12 + 0x14) = uVar1;
  (**(code **)(iVar5 + 0x10))(iVar12 + uVar15,puVar18,param_1);
  FUN_000181b4();
  puVar9 = PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_00030260;
  _swift_getWitnessTable
            (PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_00030260,uVar13,
             auStack_68);
  _swift_getWitnessTable(puVar9,uVar14,auStack_70);
  uVar13 = _swift_getWitnessTable(puVar9,iVar10,auStack_78);
  __s7SwiftUI4ViewPAAE8onAppear7performQryycSg_tF(FUN_0001813c,iVar12,iVar10,uVar13);
  _swift_release(iVar12);
  (**(code **)(iVar6 + 4))(iVar19,iVar10);
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_000301e0,iVar11,
             auStack_80);
  pcVar3 = *(code **)(iVar7 + 8);
  (*pcVar3)(iVar16,iVar17,iVar11);
  pcVar4 = *(code **)(iVar7 + 4);
  (*pcVar4)(iVar17,iVar11);
  (*pcVar3)(in_x8,iVar16,iVar11);
  (*pcVar4)(iVar16,iVar11);
  return;
}



/* Entry: 00017144; end: 0001785b;  */

/* WARNING: Removing unreachable block (ram,0x000175b8) */
/* WARNING: Removing unreachable block (ram,0x00017480) */

void FUN_00017144(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 *puVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  undefined8 in_x8;
  undefined1 *puVar22;
  int unaff_w20;
  int iVar23;
  int iVar24;
  undefined1 auStack_150 [128];
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [44];
  undefined1 auStack_94 [8];
  undefined1 auStack_8c [8];
  undefined1 auStack_84 [8];
  undefined1 auStack_7c [8];
  undefined1 auStack_74 [8];
  int iStack_6c;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0xc);
  iVar11 = __s7SwiftUI19_ConditionalContentVMa(0,iVar2,iVar1);
  iVar5 = *(int *)(iVar11 + -4);
  puVar18 = auStack_150 + -(*(int *)(iVar5 + 0x20) + 0xfU & 0xfffffff0);
  iVar6 = *(int *)(iVar1 + -4);
  uVar19 = *(int *)(iVar6 + 0x20) + 0xfU & 0xfffffff0;
  puVar22 = puVar18 + ((*(int *)(*(int *)(iVar2 + -4) + 0x20) + 0xfU & 0xfffffff0) * -2 - uVar19);
  iVar20 = (int)puVar22 - uVar19;
  uVar15 = FUN_00010a14(0x34fe0,&UNK_000287b8);
  iVar12 = __s7SwiftUI19_ConditionalContentVMa(0,uVar15,iVar1);
  iVar7 = *(int *)(iVar12 + -4);
  iVar24 = iVar20 - (*(int *)(iVar7 + 0x20) + 0xfU & 0xfffffff0);
  iVar13 = __s7SwiftUI5ImageV12ResizingModeOMa(0);
  iVar8 = *(int *)(iVar13 + -4);
  iVar23 = iVar24 - (*(int *)(iVar8 + 0x20) + 0xfU & 0xfffffff0);
  iVar14 = __s7SwiftUI19_ConditionalContentVMa(0,iVar12,iVar11);
  iVar9 = *(int *)(iVar14 + -4);
  iVar21 = iVar23 - (*(int *)(iVar9 + 0x20) + 0xfU & 0xfffffff0);
  FUN_00010468(0x34ff0,&UNK_000287c8);
  __s7SwiftUI5StateV12wrappedValuexvg();
  if (iStack_6c == 0) {
    uVar15 = FUN_00010468(0x34fe8,&UNK_000287c0);
    __s7SwiftUI5StateV12wrappedValuexvg();
    __s7SwiftUI5StateV12wrappedValuexvg(uVar15);
    uVar3 = *(undefined4 *)(param_1 + 0x10);
    pcVar4 = *(code **)(iVar6 + 8);
    (*pcVar4)(iVar20,unaff_w20 + *(int *)(param_1 + 0x20),iVar1);
    (*pcVar4)(puVar22,iVar20,iVar1);
    FUN_00016e00(puVar22,iVar2,iVar1,*(undefined4 *)(param_1 + 0x14),uVar3);
    FUN_000181b4();
    puVar10 = PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_00030260;
    uVar15 = _swift_getWitnessTable
                       (PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_00030260,
                        iVar12,auStack_74);
    uVar16 = _swift_getWitnessTable(puVar10,iVar11,auStack_7c);
    FUN_00016e00(puVar18,iVar12,iVar11,uVar15,uVar16);
    (**(code **)(iVar5 + 4))(puVar18,iVar11);
    pcVar4 = *(code **)(iVar6 + 4);
    (*pcVar4)(puVar22,iVar1);
    (*pcVar4)(iVar20,iVar1);
  }
  else {
    (**(code **)(iVar8 + 0x38))
              (iVar23,*(undefined4 *)PTR___s7SwiftUI5ImageV12ResizingModeO7stretchyA2EmFWC_00030318,
               iVar13);
    uVar16 = __s7SwiftUI5ImageV9resizable9capInsets12resizingModeAcA04EdgeF0V_AC08ResizingH0OtF
                       (0,0,0,0,iVar23,iStack_6c);
    (**(code **)(iVar8 + 4))(iVar23,iVar13);
    uVar17 = FUN_000181b4();
    FUN_00016d48(auStack_c0,uVar15,iVar1,uVar17,*(undefined4 *)(param_1 + 0x10));
    puVar10 = PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_00030260;
    uVar15 = _swift_getWitnessTable
                       (PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_00030260,
                        iVar12,auStack_c8);
    uVar17 = _swift_getWitnessTable(puVar10,iVar11,auStack_d0);
    FUN_00016d48(iVar24,iVar12,iVar11,uVar15,uVar17);
    _swift_release(iStack_6c);
    (**(code **)(iVar7 + 4))(iVar24,iVar12);
    _swift_release(uVar16);
  }
  FUN_000181b4();
  puVar10 = PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_00030260;
  _swift_getWitnessTable
            (PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_00030260,iVar12,
             auStack_84);
  _swift_getWitnessTable(puVar10,iVar11,auStack_8c);
  _swift_getWitnessTable(puVar10,iVar14,auStack_94);
  (**(code **)(iVar9 + 8))(in_x8,iVar21,iVar14);
  (**(code **)(iVar9 + 4))(iVar21,iVar14);
  return;
}



/* Entry: 0001785c; end: 00017c5b;  */

void FUN_0001785c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 extraout_x1;
  undefined1 *puVar20;
  undefined4 *puVar21;
  uint uVar22;
  int unaff_w20;
  int iVar23;
  int iVar24;
  undefined1 auStack_d0 [24];
  undefined1 auStack_80 [28];
  uint uStack_64;
  
  iVar7 = *(int *)(param_1 + -4);
  iVar16 = *(int *)(iVar7 + 0x20);
  puVar20 = auStack_d0 + -(iVar16 + 0xfU & 0xfffffff0);
  iVar14 = __s10Foundation3URLVMa(0);
  iVar8 = *(int *)(iVar14 + -4);
  iVar24 = (int)puVar20 - (*(int *)(iVar8 + 0x20) + 0xfU & 0xfffffff0);
  iVar15 = __s10Foundation10URLRequestVMa(0);
  iVar9 = *(int *)(iVar15 + -4);
  iVar14 = *(int *)(iVar9 + 0x20);
  uVar17 = FUN_00010468(0x34fe8,&UNK_000287c0);
  __s7SwiftUI5StateV12wrappedValuexvg();
  if ((uStack_64 & 1) == 0) {
    FUN_00010468(0x34ff0,&UNK_000287c8);
    __s7SwiftUI5StateV12wrappedValuexvg();
    if (uStack_64 == 0) {
      __s7SwiftUI5StateV12wrappedValuexvg(uVar17);
      __s7SwiftUI5StateV12wrappedValuexvs(auStack_80,uVar17);
      __s7SwiftUI5StateV12wrappedValuexvs(auStack_80,uVar17);
      (**(code **)(iVar8 + 8))(iVar24);
      __s10Foundation10URLRequestV3url11cachePolicy15timeoutIntervalAcA3URLV_So017NSURLRequestCacheE0VSdtcfC
                (0x404e000000000000,iVar24,0);
      iVar8 = *(int *)(unaff_w20 + *(int *)(param_1 + 0x1c));
      uVar11 = 1 << (ulonglong)(*(byte *)(iVar8 + 0x10) & 0x1f);
      uVar22 = 0xffffffff;
      if ((*(byte *)(iVar8 + 0x10) & 0x1f) < 5) {
        uVar22 = ~(-1 << (ulonglong)(uVar11 & 0x1f));
      }
      uVar22 = uVar22 & *(uint *)(iVar8 + 0x24);
      _swift_bridgeObjectRetain();
      iVar23 = 0;
      while( true ) {
        for (; uVar22 != 0; uVar22 = uVar22 - 1 & uVar22) {
          uVar12 = (uVar22 & 0xaaaaaaaa) >> 1 | (uVar22 & 0x55555555) << 1;
          uVar12 = (uVar12 & 0xcccccccc) >> 2 | (uVar12 & 0x33333333) << 2;
          uVar12 = (uVar12 & 0xf0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f) << 4;
          uVar12 = (uVar12 & 0xff00ff00) >> 8 | (uVar12 & 0xff00ff) << 8;
          uVar12 = (uint)LZCOUNT(uVar12 >> 0x10 | uVar12 << 0x10) | iVar23 << 5;
          puVar21 = (undefined4 *)(*(int *)(iVar8 + 0x1c) + uVar12 * 0xc);
          uVar1 = *puVar21;
          uVar3 = puVar21[1];
          uVar5 = puVar21[2];
          puVar21 = (undefined4 *)(*(int *)(iVar8 + 0x20) + uVar12 * 0xc);
          uVar2 = *puVar21;
          uVar4 = puVar21[1];
          uVar6 = puVar21[2];
          FUN_000103b4(uVar3,uVar5);
          FUN_000103b4(uVar4,uVar6);
          __s10Foundation10URLRequestV8setValue_18forHTTPHeaderFieldySSSg_SStF
                    (uVar2,uVar4,uVar6,uVar1,uVar3,uVar5);
          FUN_000103d0(uVar3,uVar5);
          FUN_000103d0(uVar4,uVar6);
        }
        bVar13 = SCARRY4(iVar23,1);
        iVar23 = iVar23 + 1;
        if (bVar13) {
                    /* WARNING: Does not return */
          uVar17 = SoftwareBreakpoint(1,0x17c5c);
          (*(code *)uVar17)();
        }
        if ((int)(uVar11 + 0x1f >> 5) <= iVar23) break;
        uVar22 = ((uint *)(iVar8 + 0x24))[iVar23];
      }
      _swift_release(iVar8);
      _objc_opt_self(uRam00034840);
      func_0x000279c0();
      uVar17 = _objc_retainAutoreleasedReturnValue();
      uVar18 = __s10Foundation10URLRequestV19_bridgeToObjectiveCSo12NSURLRequestCyF();
      (**(code **)(iVar7 + 8))(puVar20,unaff_w20,param_1);
      bVar10 = *(byte *)(iVar7 + 0x28);
      uVar22 = bVar10 + 0x18 & (bVar10 ^ 0xffffffff);
      iVar16 = _swift_allocObject(&UNK_000308e8,uVar22 + iVar16,bVar10 | 3);
      uVar19 = *(undefined8 *)(param_1 + 8);
      *(undefined8 *)(iVar16 + 0x10) = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(iVar16 + 8) = uVar19;
      (**(code **)(iVar7 + 0x10))(iVar16 + uVar22,puVar20);
      uVar19 = __Block_copy(auStack_80);
      _swift_release(iVar16);
      func_0x000277a0(uVar17,extraout_x1,uVar18,uVar19);
      uVar17 = _objc_retainAutoreleasedReturnValue();
      __Block_release(uVar19);
      _objc_release_x25();
      _objc_release_x20();
      func_0x00027920(uVar17);
      _objc_release_x22();
      (**(code **)(iVar9 + 4))(iVar24 - (iVar14 + 0xfU & 0xfffffff0),iVar15);
    }
    else {
      _swift_release();
    }
  }
  return;
}



/* Entry: 00017c5c; end: 00017e13;  */

void FUN_00017c5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  uStack_6c = (undefined4)param_8;
  uStack_70 = (undefined4)param_7;
  uStack_90 = (undefined4)param_1;
  uStack_8c = (undefined4)param_2;
  uStack_88 = param_9;
  uStack_84 = param_10;
  uStack_68 = param_9;
  uStack_64 = param_10;
  uStack_80 = param_8;
  uStack_78 = param_7;
  iVar6 = FUN_00016d08(0,&uStack_70);
  iVar3 = *(int *)(iVar6 + -4);
  iVar10 = *(int *)(iVar3 + 0x20);
  iVar11 = (int)&uStack_90 - (iVar10 + 0xfU & 0xfffffff0);
  iVar7 = FUN_00010468(0x34ff8,&UNK_000287d0);
  iVar12 = iVar11 - (*(int *)(*(int *)(iVar7 + -4) + 0x20) + 0xfU & 0xfffffff0);
  iVar7 = __sScPMa(0);
  (**(code **)(*(int *)(iVar7 + -4) + 0x1c))(iVar12,1,1,iVar7);
  (**(code **)(iVar3 + 8))(iVar11,param_6,iVar6);
  __sScMMa(0);
  FUN_00018410(param_1,param_2,param_3);
  uVar8 = __sScM6sharedScMvgZ();
  uVar9 = FUN_00018424();
  bVar4 = *(byte *)(iVar3 + 0x28);
  uVar2 = bVar4 + 0x20 & (bVar4 ^ 0xffffffff);
  uVar1 = iVar10 + uVar2 + 3 & 0xfffffffc;
  iVar10 = _swift_allocObject(&UNK_00030910,uVar1 + 9,bVar4 | 3);
  *(undefined4 *)(iVar10 + 8) = uVar8;
  *(undefined4 *)(iVar10 + 0xc) = uVar9;
  *(int *)(iVar10 + 0x10) = (int)uStack_78;
  *(int *)(iVar10 + 0x14) = (int)uStack_80;
  *(undefined4 *)(iVar10 + 0x18) = uStack_88;
  *(undefined4 *)(iVar10 + 0x1c) = uStack_84;
  (**(code **)(iVar3 + 0x10))(iVar10 + uVar2,iVar11,iVar6);
  puVar5 = (undefined4 *)(iVar10 + uVar1);
  *puVar5 = uStack_90;
  puVar5[1] = uStack_8c;
  *(char *)(puVar5 + 2) = (char)param_3;
  FUN_000187e4(0,0,0xff,iVar12,&UNK_000287e0,iVar10);
  _swift_release();
  return;
}



/* Entry: 00017e14; end: 00017e9b;  */

void FUN_00017e14(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 in_w3;
  undefined4 in_w4;
  undefined4 in_w5;
  undefined1 in_w6;
  undefined4 in_w7;
  int unaff_w22;
  undefined1 auVar4 [16];
  undefined8 in_stack_00000000;
  undefined4 in_stack_00000008;
  
  *(undefined4 *)(unaff_w22 + 0x30) = in_stack_00000008;
  *(undefined8 *)(unaff_w22 + 0x28) = in_stack_00000000;
  *(undefined1 *)(unaff_w22 + 0x38) = in_w6;
  *(undefined4 *)(unaff_w22 + 0x20) = in_w5;
  *(undefined4 *)(unaff_w22 + 0x24) = in_w7;
  *(undefined4 *)(unaff_w22 + 0x18) = in_w3;
  *(undefined4 *)(unaff_w22 + 0x1c) = in_w4;
  uVar2 = __sScMMa(0);
  uVar1 = __sScM6sharedScMvgZ();
  *(undefined4 *)(unaff_w22 + 0x34) = uVar1;
  uVar3 = FUN_00018424();
  auVar4 = __sScA15unownedExecutorScevgTj(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x000276d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_000305b8)(FUN_00017e9c,auVar4._0_8_,auVar4._8_8_);
  return;
}



/* Entry: 00017e9c; end: 0001805f;  */

void FUN_00017e9c(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int unaff_w22;
  undefined1 auVar9 [16];
  
  cVar3 = *(char *)(unaff_w22 + 0x38);
  uVar7 = *(undefined8 *)(unaff_w22 + 0x2c);
  uVar6 = *(undefined8 *)(unaff_w22 + 0x24);
  _swift_release(*(undefined4 *)(unaff_w22 + 0x34));
  puVar8 = (undefined8 *)(unaff_w22 + 8);
  *(undefined8 *)(unaff_w22 + 0x10) = uVar7;
  *puVar8 = uVar6;
  FUN_00016d08(0,puVar8);
  *(undefined1 *)puVar8 = 0;
  uVar6 = FUN_00010468(0x34fe8,&UNK_000287c0);
  __s7SwiftUI5StateV12wrappedValuexvs(puVar8,uVar6);
  if (cVar3 != -1) {
    uVar1 = *(undefined4 *)(unaff_w22 + 0x1c);
    uVar2 = *(undefined4 *)(unaff_w22 + 0x20);
    uVar4 = *(undefined1 *)(unaff_w22 + 0x38);
    uVar7 = _objc_allocWithZone(uRam00034844);
    FUN_0001467c(uVar1,uVar2,uVar4);
    FUN_0001467c(uVar1,uVar2,uVar4);
    auVar9 = __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar1,uVar2,uVar4);
    iVar5 = func_0x000277e0(uVar7,auVar9._8_8_,auVar9._0_8_);
    _objc_release_x27();
    FUN_000183fc(uVar1,uVar2,uVar4);
    uVar4 = *(undefined1 *)(unaff_w22 + 0x38);
    uVar1 = *(undefined4 *)(unaff_w22 + 0x1c);
    uVar2 = *(undefined4 *)(unaff_w22 + 0x20);
    if (iVar5 != 0) {
      _objc_retain_x20();
      uVar6 = __s7SwiftUI5ImageV02uiC0ACSo7UIImageC_tcfC();
      *(int *)(unaff_w22 + 8) = (int)uVar6;
      _swift_retain();
      uVar7 = FUN_00010468(0x34ff0,&UNK_000287c8);
      __s7SwiftUI5StateV12wrappedValuexvs(puVar8,uVar7);
      FUN_000183fc(uVar1,uVar2,uVar4);
      _objc_release_x23();
      _swift_release(uVar6);
      goto LAB_0001803c;
    }
    FUN_000183fc(uVar1,uVar2,uVar4);
  }
  *(undefined1 *)(unaff_w22 + 8) = 1;
  __s7SwiftUI5StateV12wrappedValuexvs(puVar8,uVar6);
LAB_0001803c:
                    /* WARNING: Could not recover jumptable at 0x0001805c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_w22 + 4))();
  return;
}



/* Entry: 00018060; end: 00018127;  */

void FUN_00018060(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  pcVar1 = *(code **)(param_1 + 0x14);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  if ((int)param_2 == 0) {
    _swift_retain(uVar2);
    uVar3 = 0;
    uVar4 = 0xff;
  }
  else {
    uVar4 = param_3;
    _swift_retain(uVar2);
    _objc_retain_x22();
    auVar5 = __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ(param_2);
    uVar3 = auVar5._8_8_;
    param_2 = auVar5._0_8_;
    _objc_release_x25();
  }
  _objc_retain_x21();
  _objc_retain_x19();
  (*pcVar1)(param_2,uVar3,uVar4,param_3,param_4);
  _objc_release_x25();
  _objc_release_x26();
  FUN_000183fc(param_2,uVar3,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00027678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_00030570)(uVar2);
  return;
}



/* Entry: 00018128; end: 0001812b;  */

void FUN_00018128(void)

{
                    /* WARNING: Could not recover jumptable at 0x00026f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_000302d8
  )();
  return;
}



/* Entry: 0001812c; end: 0001812f;  */

void FUN_0001812c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00026f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC4List4view6inputsAA01_cE7OutputsVAA11_GraphValueVyxG_AA01_cE6InputsVtFZ_000302dc
  )();
  return;
}



/* Entry: 00018130; end: 00018133;  */

void FUN_00018130(void)

{
                    /* WARNING: Could not recover jumptable at 0x00026f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s7SwiftUI4ViewPAAE14_viewListCount6inputsSiSgAA01_ceF6InputsV_tFZ_000302f0)();
  return;
}



/* Entry: 00018134; end: 00018137;  */

void FUN_00018134(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  uint uVar15;
  int iVar16;
  undefined8 in_x8;
  int iVar17;
  undefined1 *puVar18;
  int iVar19;
  undefined1 auStack_c0 [64];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  iVar5 = *(int *)(param_1 + -4);
  iVar12 = *(int *)(iVar5 + 0x20);
  puVar18 = auStack_c0 + -(iVar12 + 0xfU & 0xfffffff0);
  uVar13 = FUN_00010a14(0x34fe0,&UNK_000287b8);
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar13 = __s7SwiftUI19_ConditionalContentVMa(0xff,uVar13,uVar1);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar14 = __s7SwiftUI19_ConditionalContentVMa(0xff,uVar2,uVar1);
  iVar10 = __s7SwiftUI19_ConditionalContentVMa(0,uVar13,uVar14);
  iVar6 = *(int *)(iVar10 + -4);
  iVar19 = (int)puVar18 - (*(int *)(iVar6 + 0x20) + 0xfU & 0xfffffff0);
  iVar11 = __s7SwiftUI15ModifiedContentVMa
                     (0,iVar10,PTR___s7SwiftUI25_AppearanceActionModifierVN_0003027c);
  iVar7 = *(int *)(iVar11 + -4);
  uVar15 = *(int *)(iVar7 + 0x20) + 0xfU & 0xfffffff0;
  iVar17 = iVar19 - uVar15;
  iVar16 = iVar17 - uVar15;
  FUN_00017144(param_1);
  (**(code **)(iVar5 + 8))(puVar18);
  bVar8 = *(byte *)(iVar5 + 0x28);
  uVar15 = bVar8 + 0x18 & (bVar8 ^ 0xffffffff);
  iVar12 = _swift_allocObject(&UNK_000308d4,uVar15 + iVar12,bVar8 | 3);
  *(undefined4 *)(iVar12 + 8) = uVar1;
  *(undefined4 *)(iVar12 + 0xc) = uVar2;
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(iVar12 + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(iVar12 + 0x14) = uVar1;
  (**(code **)(iVar5 + 0x10))(iVar12 + uVar15,puVar18,param_1);
  FUN_000181b4();
  puVar9 = PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_00030260;
  _swift_getWitnessTable
            (PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_00030260,uVar13,
             auStack_68);
  _swift_getWitnessTable(puVar9,uVar14,auStack_70);
  uVar13 = _swift_getWitnessTable(puVar9,iVar10,auStack_78);
  __s7SwiftUI4ViewPAAE8onAppear7performQryycSg_tF(FUN_0001813c,iVar12,iVar10,uVar13);
  _swift_release(iVar12);
  (**(code **)(iVar6 + 4))(iVar19,iVar10);
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_000301e0,iVar11,
             auStack_80);
  pcVar3 = *(code **)(iVar7 + 8);
  (*pcVar3)(iVar16,iVar17,iVar11);
  pcVar4 = *(code **)(iVar7 + 4);
  (*pcVar4)(iVar17,iVar11);
  (*pcVar3)(in_x8,iVar16,iVar11);
  (*pcVar4)(iVar16,iVar11);
  return;
}



/* Entry: 00018138; end: 0001813b;  */

void FUN_00018138(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int unaff_w20;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uStack_60;
  undefined8 uStack_58;
  
  uStack_58 = *(undefined8 *)(unaff_w20 + 0x10);
  uVar6 = *(ulonglong *)(unaff_w20 + 8);
  uStack_60 = uVar6;
  iVar3 = FUN_00016d08(0,&uStack_60);
  uVar5 = (uint)*(byte *)(*(int *)(iVar3 + -4) + 0x28);
  iVar1 = unaff_w20 + (uVar5 + 0x18 & (uVar5 ^ 0xffffffff));
  iVar4 = __s10Foundation3URLVMa(0);
  (**(code **)(*(int *)(iVar4 + -4) + 4))(iVar1,iVar4);
  _swift_bridgeObjectRelease(*(undefined4 *)(iVar1 + *(int *)(iVar3 + 0x1c)));
  (**(code **)(*(int *)((int)uVar6 + -4) + 4))(iVar1 + *(int *)(iVar3 + 0x20));
  (**(code **)(*(int *)((int)(uVar6 >> 0x20) + -4) + 4))
            (uVar6 & 0xffffffff,iVar1 + *(int *)(iVar3 + 0x24));
  puVar2 = (undefined4 *)(iVar1 + *(int *)(iVar3 + 0x28));
  _swift_release(*puVar2);
  _swift_release(puVar2[1]);
  _swift_release(*(undefined4 *)(iVar1 + *(int *)(iVar3 + 0x2c) + 4));
  _swift_release(*(undefined4 *)(iVar1 + *(int *)(iVar3 + 0x30) + 4));
  _swift_deallocObject();
  return;
}



/* Entry: 0001813c; end: 000181b3;  */

void FUN_0001813c(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int unaff_w20;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  uVar1 = *(undefined4 *)(unaff_w20 + 8);
  uVar3 = *(undefined4 *)(unaff_w20 + 0xc);
  uVar2 = *(undefined4 *)(unaff_w20 + 0x10);
  uVar4 = *(undefined4 *)(unaff_w20 + 0x14);
  uStack_50 = uVar1;
  uStack_4c = uVar3;
  uStack_48 = uVar2;
  uStack_44 = uVar4;
  FUN_00016d08(0,&uStack_50);
  uStack_50 = uVar1;
  uStack_4c = uVar3;
  uStack_48 = uVar2;
  uStack_44 = uVar4;
  FUN_00016d08(0,&uStack_50);
  FUN_0001785c();
  return;
}



/* Entry: 000181b4; end: 00018223;  */

void FUN_000181b4(void)

{
  undefined8 uVar1;
  undefined *puStack_18;
  undefined *puStack_14;
  
  if (iRam00034fe4 != 0) {
    return;
  }
  uVar1 = FUN_00010a14(0x34fe0,&UNK_000287b8);
  puStack_18 = PTR___s7SwiftUI5ImageVAA4ViewAAWP_00030324;
  puStack_14 = PTR___s7SwiftUI18_AspectRatioLayoutVAA12ViewModifierAAWP_0003022c;
  iRam00034fe4 = _swift_getWitnessTable
                           (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_000301e0
                            ,uVar1,&puStack_18);
  return;
}



/* Entry: 00018224; end: 00018337;  */

void FUN_00018224(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int unaff_w20;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uStack_60;
  undefined8 uStack_58;
  
  uStack_58 = *(undefined8 *)(unaff_w20 + 0x10);
  uVar6 = *(ulonglong *)(unaff_w20 + 8);
  uStack_60 = uVar6;
  iVar3 = FUN_00016d08(0,&uStack_60);
  uVar5 = (uint)*(byte *)(*(int *)(iVar3 + -4) + 0x28);
  iVar1 = unaff_w20 + (uVar5 + 0x18 & (uVar5 ^ 0xffffffff));
  iVar4 = __s10Foundation3URLVMa(0);
  (**(code **)(*(int *)(iVar4 + -4) + 4))(iVar1,iVar4);
  _swift_bridgeObjectRelease(*(undefined4 *)(iVar1 + *(int *)(iVar3 + 0x1c)));
  (**(code **)(*(int *)((int)uVar6 + -4) + 4))(iVar1 + *(int *)(iVar3 + 0x20));
  (**(code **)(*(int *)((int)(uVar6 >> 0x20) + -4) + 4))
            (uVar6 & 0xffffffff,iVar1 + *(int *)(iVar3 + 0x24));
  puVar2 = (undefined4 *)(iVar1 + *(int *)(iVar3 + 0x28));
  _swift_release(*puVar2);
  _swift_release(puVar2[1]);
  _swift_release(*(undefined4 *)(iVar1 + *(int *)(iVar3 + 0x2c) + 4));
  _swift_release(*(undefined4 *)(iVar1 + *(int *)(iVar3 + 0x30) + 4));
  _swift_deallocObject();
  return;
}



/* Entry: 00018338; end: 000183df;  */

void FUN_00018338(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int unaff_w20;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  uVar1 = *(undefined4 *)(unaff_w20 + 8);
  uVar2 = *(undefined4 *)(unaff_w20 + 0xc);
  uStack_68 = *(undefined4 *)(unaff_w20 + 0x10);
  uStack_64 = *(undefined4 *)(unaff_w20 + 0x14);
  uStack_70 = uVar1;
  uStack_6c = uVar2;
  iVar3 = FUN_00016d08(0,&uStack_70);
  uVar4 = (uint)*(byte *)(*(int *)(iVar3 + -4) + 0x28);
  FUN_00017c5c(param_1,param_2,param_3,param_4,param_5,
               unaff_w20 + (uVar4 + 0x18 & (uVar4 ^ 0xffffffff)),uVar1,uVar2);
  return;
}



/* Entry: 000183e0; end: 000183f3;  */

void FUN_000183e0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
                    /* WARNING: Could not recover jumptable at 0x00027684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_00030574)(uVar1);
  return;
}



/* Entry: 000183f4; end: 000183fb;  */

void FUN_000183f4(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00027678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_00030570)(*(undefined4 *)(param_1 + 0x18));
  return;
}



/* Entry: 000183fc; end: 0001840f;  */

void FUN_000183fc(undefined4 param_1,undefined4 param_2,char param_3)

{
  if (param_3 == -1) {
    return;
  }
  if (param_3 != '\x01') {
    if (param_3 != '\x02') {
      return;
    }
    _swift_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00027678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_00030570)(param_2);
  return;
}



/* Entry: 00018410; end: 00018423;  */

void FUN_00018410(undefined4 param_1,undefined4 param_2,char param_3)

{
  if (param_3 == -1) {
    return;
  }
  if (param_3 != '\x01') {
    if (param_3 != '\x02') {
      return;
    }
    _swift_retain(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00027684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_00030574)(param_2);
  return;
}



/* Entry: 00018424; end: 00018467;  */

void FUN_00018424(void)

{
  undefined8 uVar1;
  
  if (iRam00034ffc != 0) {
    return;
  }
  uVar1 = __sScMMa(0xff);
  iRam00034ffc = _swift_getWitnessTable(PTR___sScMScAsMc_000305a0,uVar1);
  return;
}



/* Entry: 00018468; end: 0001859f;  */

void FUN_00018468(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int unaff_w20;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)(unaff_w20 + 0x18);
  uVar7 = *(ulonglong *)(unaff_w20 + 0x10);
  uStack_50 = uVar7;
  iVar4 = FUN_00016d08(0,&uStack_50);
  uVar6 = (uint)*(byte *)(*(int *)(iVar4 + -4) + 0x28);
  uVar6 = uVar6 + 0x20 & (uVar6 ^ 0xffffffff);
  iVar2 = *(int *)(*(int *)(iVar4 + -4) + 0x20);
  _swift_unknownObjectRelease(*(undefined4 *)(unaff_w20 + 8));
  iVar1 = unaff_w20 + uVar6;
  iVar5 = __s10Foundation3URLVMa(0);
  (**(code **)(*(int *)(iVar5 + -4) + 4))(iVar1,iVar5);
  _swift_bridgeObjectRelease(*(undefined4 *)(iVar1 + *(int *)(iVar4 + 0x1c)));
  (**(code **)(*(int *)((int)uVar7 + -4) + 4))(iVar1 + *(int *)(iVar4 + 0x20));
  (**(code **)(*(int *)((int)(uVar7 >> 0x20) + -4) + 4))
            (uVar7 & 0xffffffff,iVar1 + *(int *)(iVar4 + 0x24));
  puVar3 = (undefined4 *)(iVar1 + *(int *)(iVar4 + 0x28));
  _swift_release(*puVar3);
  _swift_release(puVar3[1]);
  _swift_release(*(undefined4 *)(iVar1 + *(int *)(iVar4 + 0x2c) + 4));
  _swift_release(*(undefined4 *)(iVar1 + *(int *)(iVar4 + 0x30) + 4));
  puVar3 = (undefined4 *)(unaff_w20 + (iVar2 + uVar6 + 3 & 0xfffffffc));
  if (*(char *)(puVar3 + 2) != -1) {
    FUN_000146c0(*puVar3,puVar3[1]);
  }
  _swift_deallocObject();
  return;
}



/* Entry: 000185a0; end: 00018683;  */

void FUN_000185a0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  int unaff_w20;
  int unaff_w22;
  undefined1 auVar12 [16];
  
  iVar6 = *(int *)(unaff_w20 + 0x10);
  uVar2 = *(undefined4 *)(unaff_w20 + 0x14);
  uVar1 = *(undefined4 *)(unaff_w20 + 0x18);
  uVar9 = *(undefined8 *)(unaff_w20 + 0x14);
  iVar3 = *(int *)(unaff_w20 + 0x1c);
  *(int *)(unaff_w22 + 8) = iVar6;
  *(undefined4 *)(unaff_w22 + 0xc) = uVar2;
  *(undefined4 *)(unaff_w22 + 0x10) = uVar1;
  *(int *)(unaff_w22 + 0x14) = iVar3;
  iVar7 = FUN_00016d08(0);
  uVar11 = (uint)*(byte *)(*(int *)(iVar7 + -4) + 0x28);
  uVar11 = uVar11 + 0x20 & (uVar11 ^ 0xffffffff);
  uVar1 = *(undefined4 *)(unaff_w20 + 8);
  uVar2 = *(undefined4 *)(unaff_w20 + 0xc);
  piVar8 = (int *)(unaff_w20 + (*(int *)(*(int *)(iVar7 + -4) + 0x20) + uVar11 + 3 & 0xfffffffc));
  iVar7 = *piVar8;
  iVar4 = piVar8[1];
  iVar5 = piVar8[2];
  piVar8 = (int *)_swift_task_alloc(0x40);
  *(int **)(unaff_w22 + 0x18) = piVar8;
  *piVar8 = unaff_w22;
  piVar8[1] = (int)FUN_00018684;
  piVar8[0xc] = iVar3;
  *(undefined8 *)(piVar8 + 10) = uVar9;
  *(char *)(piVar8 + 0xe) = (char)iVar5;
  piVar8[8] = iVar4;
  piVar8[9] = iVar6;
  piVar8[6] = unaff_w20 + uVar11;
  piVar8[7] = iVar7;
  uVar9 = __sScMMa(0,uVar1,uVar2);
  iVar6 = __sScM6sharedScMvgZ();
  piVar8[0xd] = iVar6;
  uVar10 = FUN_00018424();
  auVar12 = __sScA15unownedExecutorScevgTj(uVar9,uVar10);
                    /* WARNING: Could not recover jumptable at 0x000276d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_000305b8)(FUN_00017e9c,auVar12._0_8_,auVar12._8_8_);
  return;
}



/* Entry: 00018684; end: 000186b7;  */

void FUN_00018684(void)

{
  int iVar1;
  int *unaff_w22;
  
  iVar1 = *unaff_w22;
  _swift_task_dealloc(*(undefined4 *)(iVar1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000186b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 4))();
  return;
}



/* Entry: 000186b8; end: 000187df;  */

void FUN_000186b8(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined1 auVar9 [16];
  undefined4 uStack_60;
  undefined *puStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  uVar3 = *param_1;
  uVar1 = param_1[1];
  uVar4 = FUN_00010a14(0x34fe0,&UNK_000287b8);
  uVar4 = __s7SwiftUI19_ConditionalContentVMa(0xff,uVar4,uVar3);
  uVar5 = __s7SwiftUI19_ConditionalContentVMa(0xff,uVar1,uVar3);
  uVar6 = __s7SwiftUI19_ConditionalContentVMa(0xff,uVar4,uVar5);
  uVar7 = __s7SwiftUI15ModifiedContentVMa
                    (0xff,uVar6,PTR___s7SwiftUI25_AppearanceActionModifierVN_0003027c);
  uStack_48 = FUN_000181b4();
  puVar2 = PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_00030260;
  uVar8 = *(ulonglong *)(param_1 + 2);
  uStack_44 = (undefined4)uVar8;
  uVar3 = _swift_getWitnessTable
                    (PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_00030260,uVar4
                     ,&uStack_48);
  auVar9._8_8_ = uVar8 >> 0x20;
  auVar9._0_8_ = uVar8 & 0xffffffff;
  auVar9 = NEON_ext(auVar9,auVar9,8,1);
  uStack_50 = CONCAT44(auVar9._8_4_,auVar9._0_4_);
  uStack_54 = _swift_getWitnessTable(puVar2,uVar5,&uStack_50);
  uStack_58 = uVar3;
  uStack_60 = _swift_getWitnessTable(puVar2,uVar6,&uStack_58);
  puStack_5c = PTR___s7SwiftUI25_AppearanceActionModifierVAA04ViewE0AAWP_00030274;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_000301e0,uVar7,
             &uStack_60);
  return;
}



/* Entry: 000187e0; end: 000187e3;  */

void FUN_000187e0(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int unaff_w20;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uStack_60;
  undefined8 uStack_58;
  
  uStack_58 = *(undefined8 *)(unaff_w20 + 0x10);
  uVar6 = *(ulonglong *)(unaff_w20 + 8);
  uStack_60 = uVar6;
  iVar3 = FUN_00016d08(0,&uStack_60);
  uVar5 = (uint)*(byte *)(*(int *)(iVar3 + -4) + 0x28);
  iVar1 = unaff_w20 + (uVar5 + 0x18 & (uVar5 ^ 0xffffffff));
  iVar4 = __s10Foundation3URLVMa(0);
  (**(code **)(*(int *)(iVar4 + -4) + 4))(iVar1,iVar4);
  _swift_bridgeObjectRelease(*(undefined4 *)(iVar1 + *(int *)(iVar3 + 0x1c)));
  (**(code **)(*(int *)((int)uVar6 + -4) + 4))(iVar1 + *(int *)(iVar3 + 0x20));
  (**(code **)(*(int *)((int)(uVar6 >> 0x20) + -4) + 4))
            (uVar6 & 0xffffffff,iVar1 + *(int *)(iVar3 + 0x24));
  puVar2 = (undefined4 *)(iVar1 + *(int *)(iVar3 + 0x28));
  _swift_release(*puVar2);
  _swift_release(puVar2[1]);
  _swift_release(*(undefined4 *)(iVar1 + *(int *)(iVar3 + 0x2c) + 4));
  _swift_release(*(undefined4 *)(iVar1 + *(int *)(iVar3 + 0x30) + 4));
  _swift_deallocObject();
  return;
}



/* Entry: 000187e4; end: 00018a8b;  */

undefined8
FUN_000187e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined4 param_5,int param_6)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int extraout_w1;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined1 auStack_90 [4];
  undefined4 uStack_8c;
  undefined8 *puStack_88;
  int iStack_84;
  undefined8 uStack_80;
  int iStack_78;
  int iStack_74;
  undefined8 uStack_70;
  int iStack_68;
  int iStack_64;
  
  iVar2 = FUN_00010468(0x34ff8,&UNK_000287d0);
  puVar9 = auStack_90 + -(*(int *)(*(int *)(iVar2 + -4) + 0x20) + 0xfU & 0xfffffff0);
  FUN_0001b13c(param_4,puVar9,0x34ff8,&UNK_000287d0);
  iVar3 = __sScPMa(0);
  iVar2 = *(int *)(iVar3 + -4);
  iVar4 = (**(code **)(iVar2 + 0x18))(puVar9,1,iVar3);
  _swift_retain(param_6);
  if (iVar4 == 1) {
    FUN_0001b184(puVar9,0x34ff8,&UNK_000287d0);
    uVar5 = 0x1c00;
  }
  else {
    uVar5 = __sScP8rawValues5UInt8Vvg();
    (**(code **)(iVar2 + 4))(puVar9,iVar3);
    uVar5 = uVar5 & 0xff | 0x1c00;
  }
  iVar2 = *(int *)(param_6 + 8);
  uVar1 = *(undefined4 *)(param_6 + 0xc);
  _swift_unknownObjectRetain(iVar2);
  _swift_release(param_6);
  if (iVar2 == 0) {
    iVar3 = 0;
    iVar2 = 0;
  }
  else {
    uVar6 = _swift_getObjectType(iVar2);
    iVar3 = __sScA15unownedExecutorScevgTj(uVar6,uVar1);
    _swift_unknownObjectRelease(iVar2);
    iVar2 = extraout_w1;
  }
  if ((((uint)param_3 ^ 0xffffffff) & 0xff) == 0) {
    FUN_0001b184(param_4,0x34ff8,&UNK_000287d0);
    iVar4 = _swift_allocObject(&UNK_00030968,0x10,3);
    *(undefined4 *)(iVar4 + 8) = param_5;
    *(int *)(iVar4 + 0xc) = param_6;
    if (iVar2 == 0 && iVar3 == 0) {
      puVar8 = (undefined8 *)0x0;
    }
    else {
      uStack_70 = 0;
      puVar8 = &uStack_70;
      iStack_68 = iVar3;
      iStack_64 = iVar2;
    }
    uVar7 = _swift_task_create(uVar5,puVar8,ZEXT48(PTR___sytN_000304e0) + 4,&UNK_000288e8,iVar4);
  }
  else {
    uVar6 = __sSS11utf8CStrings15ContiguousArrayVys4Int8VGvg(param_1,param_2,param_3);
    FUN_0001b010(param_1,param_2,param_3);
    iVar4 = _swift_allocObject(&UNK_0003097c,0x10,3);
    *(undefined4 *)(iVar4 + 8) = param_5;
    *(int *)(iVar4 + 0xc) = param_6;
    _swift_retain(param_6);
    if (iVar2 == 0 && iVar3 == 0) {
      puStack_88 = (undefined8 *)0x0;
    }
    else {
      uStack_80 = 0;
      puStack_88 = &uStack_80;
      iStack_78 = iVar3;
      iStack_74 = iVar2;
    }
    uStack_8c = 7;
    iStack_84 = (int)uVar6 + 0x10;
    uVar7 = _swift_task_create(uVar5,&uStack_8c,ZEXT48(PTR___sytN_000304e0) + 4,&UNK_000288f0,iVar4)
    ;
    _swift_release(uVar6);
    FUN_0001b184(param_4,0x34ff8,&UNK_000287d0);
    _swift_release(param_6);
  }
  return uVar7;
}



/* Entry: 00018a8c; end: 00018afb;  */

undefined4 FUN_00018a8c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uStack_34;
  
  uVar1 = _swift_getKeyPath(&UNK_00028888);
  uVar2 = _swift_getKeyPath(&UNK_000288b0);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            ();
  _swift_release(uVar1);
  _swift_release(uVar2);
  return uStack_34;
}



/* Entry: 00018afc; end: 00018c27;  */

void FUN_00018afc(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined *puStack_4c;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_3c;
  code *pcStack_38;
  undefined4 uStack_34;
  
  uVar2 = _objc_opt_self(uRam0003484c);
  func_0x00027780();
  uVar3 = _objc_retainAutoreleasedReturnValue();
  pcStack_38 = FUN_00018c28;
  uStack_34 = 0;
  puStack_4c = PTR___NSConcreteStackBlock_00030134;
  uStack_48 = 0x42000000;
  pcStack_40 = FUN_00018c2c;
  puStack_3c = &UNK_00030938;
  auVar4 = __Block_copy(&puStack_4c);
  func_0x00027900(uVar3,auVar4._8_8_,7,auVar4._0_8_);
  __Block_release(auVar4._0_8_);
  _objc_release_x21();
  _objc_opt_self(uRam00034850);
  func_0x000279a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000278c0();
  _objc_release_x21();
  func_0x00027780(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00027960();
  _objc_release_x19();
  uVar2 = _objc_opt_self(uRam0003483c);
  iVar1 = func_0x00027840();
  if (iVar1 != 0) {
    func_0x000277c0(uVar2);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    func_0x00027960();
    func_0x00027720(uVar2);
    _objc_release_x19();
  }
  return;
}



/* Entry: 00018c28; end: 00018c2b;  */

void FUN_00018c28(void)

{
  return;
}



/* Entry: 00018c2c; end: 00018c8b;  */

void FUN_00018c2c(int param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x14);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  _swift_retain(uVar2);
  uVar3 = _objc_retain_x19();
  (*pcVar1)(param_2,param_3);
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00027408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_000300d8)(uVar3);
  return;
}



/* Entry: 00018c8c; end: 00018cbf; -[_TtC20SnapchatWatchLibrary16WatchAppDelegate applicationDidFinishLaunching] */

void FUN_00018c8c(void)

{
  undefined8 uVar1;
  
  uVar1 = _objc_retain();
  FUN_00018afc();
                    /* WARNING: Could not recover jumptable at 0x00027408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_000300d8)(uVar1);
  return;
}



/* Entry: 00018cc0; end: 00018cc3; -[_TtC20SnapchatWatchLibrary16WatchAppDelegate applicationDidEnterBackground] */

void FUN_00018cc0(void)

{
  return;
}



/* Entry: 00018cc4; end: 00018cc7; -[_TtC20SnapchatWatchLibrary16WatchAppDelegate applicationWillEnterForeground] */

void FUN_00018cc4(void)

{
  return;
}



/* Entry: 00018cc8; end: 000195c3;  */

/* WARNING: Removing unreachable block (ram,0x00019400) */

void FUN_00018cc8(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  undefined1 uVar5;
  ushort uVar6;
  undefined2 uVar7;
  undefined1 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 *puVar14;
  int iVar15;
  undefined4 uVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ulonglong uVar20;
  undefined8 uVar21;
  undefined4 extraout_w1;
  undefined4 extraout_w1_00;
  undefined8 extraout_x1;
  ulonglong extraout_x1_00;
  ulonglong extraout_x1_01;
  ulonglong extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined4 uVar22;
  int iVar23;
  int unaff_w20;
  int iVar24;
  undefined4 uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_e0 [72];
  int iStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined1 auStack_88 [12];
  int iStack_7c;
  
  iVar9 = FUN_00024688(0);
  iVar23 = (int)&uStack_130 - (*(int *)(*(int *)(iVar9 + -4) + 0x20) + 0xfU & 0xfffffff0);
  iVar10 = FUN_00010468(0x35038,&UNK_00028858);
  iVar15 = iVar23 - (*(int *)(*(int *)(iVar10 + -4) + 0x20) + 0xfU & 0xfffffff0);
  iVar11 = __s10Foundation4DateVMa(0);
  iVar10 = *(int *)(iVar11 + -4);
  iVar24 = iVar15 - (*(int *)(iVar10 + 0x20) + 0xfU & 0xfffffff0);
  __s10Foundation4DateVACycfC();
  _objc_opt_self(uRam0003483c);
  func_0x000277c0();
  uVar18 = _objc_retainAutoreleasedReturnValue();
  uVar12 = FUN_0001c504();
  pcVar1 = *(code **)(iVar10 + 8);
  (*pcVar1)(iVar15,iVar24,iVar11);
  (**(code **)(iVar10 + 0x1c))(iVar15,0,1,iVar11);
  iVar13 = iRam00035004;
  _swift_beginAccess(unaff_w20 + iRam00035004,auStack_88,0x21,0);
  FUN_0001afc0(iVar15,unaff_w20 + iVar13);
  _swift_endAccess(auStack_88);
  puVar14 = (undefined4 *)(unaff_w20 + iRam00035008);
  uVar16 = *puVar14;
  uVar22 = puVar14[1];
  uVar2 = puVar14[2];
  uVar25 = (undefined4)extraout_x1;
  *puVar14 = uVar12;
  puVar14[1] = uVar25;
  puVar14[2] = (int)param_3;
  FUN_000103b4(extraout_x1,param_3);
  FUN_0001b010(uVar16,uVar22,uVar2);
  func_0x000278a0(uVar18);
  uVar19 = _objc_retainAutoreleasedReturnValue();
  uVar26 = ZEXT48(PTR___sypN_000304dc);
  iVar13 = __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
                     (uVar19,PTR___sSSN_000303d0,uVar26 + 4,PTR___sSSSHsWP_000303d4);
  _objc_release_x24();
  puVar14 = (undefined4 *)FUN_00020154();
  uVar16 = puVar14[1];
  bVar3 = *(byte *)(puVar14 + 2);
  if (*(int *)(iVar13 + 8) == 0) {
    iStack_7c = 0;
    FUN_000103b4(uVar16,bVar3);
  }
  else {
    bVar4 = *(byte *)((int)puVar14 + 9);
    uVar22 = *puVar14;
    uVar6 = *(ushort *)((int)puVar14 + 10);
    FUN_000103b4(uVar16,bVar3);
    _swift_bridgeObjectRetain(iVar13);
    iVar15 = FUN_0001aa38(uVar22,uVar16,(uint)bVar3 | (uint)uVar6 << 0x10 | (uint)bVar4 << 8);
    if ((extraout_x1_00 & 1) == 0) {
      _swift_bridgeObjectRelease(iVar13);
      iStack_7c = 0;
    }
    else {
      FUN_000104b4((ulonglong)*(uint *)(iVar13 + 0x20) + (longlong)iVar15 * 0x10,auStack_88);
      _swift_bridgeObjectRelease(iVar13);
    }
    param_3 = param_3 & 0xffffffff;
  }
  _swift_bridgeObjectRelease(iVar13);
  FUN_000103d0(uVar16,bVar3);
  uVar27 = param_3;
  if (iStack_7c == 0) {
LAB_00019480:
    (**(code **)(iVar10 + 4))(iVar24,iVar11);
    _objc_release_x27();
    FUN_000103d0(uVar25,uVar27);
    FUN_0001b184(auStack_88,0x34d10,&UNK_00028690);
  }
  else {
    uVar19 = FUN_00010468(0x35030,&UNK_00028808);
    uVar20 = _swift_dynamicCast(&iStack_98,auStack_88,uVar26 + 4,uVar19,6);
    if ((uVar20 & 1) != 0) {
      puVar14 = (undefined4 *)FUN_000201f8();
      uVar16 = puVar14[1];
      bVar3 = *(byte *)(puVar14 + 2);
      if (*(int *)(iStack_98 + 8) == 0) {
        iStack_7c = 0;
        FUN_000103b4(uVar16,bVar3);
      }
      else {
        bVar4 = *(byte *)((int)puVar14 + 9);
        uVar22 = *puVar14;
        uVar6 = *(ushort *)((int)puVar14 + 10);
        FUN_000103b4(uVar16,bVar3);
        _swift_bridgeObjectRetain(iStack_98);
        iVar13 = FUN_0001aa38(uVar22,uVar16,(uint)bVar3 | (uint)uVar6 << 0x10 | (uint)bVar4 << 8);
        if ((extraout_x1_01 & 1) == 0) {
          _swift_bridgeObjectRelease(iStack_98);
          iStack_7c = 0;
        }
        else {
          FUN_000104b4((ulonglong)*(uint *)(iStack_98 + 0x20) + (longlong)iVar13 * 0x10,auStack_88);
          _swift_bridgeObjectRelease(iStack_98);
        }
        param_3 = param_3 & 0xffffffff;
      }
      _swift_bridgeObjectRelease(iStack_98);
      FUN_000103d0(uVar16,bVar3);
      uVar27 = param_3;
      if (iStack_7c == 0) goto LAB_00019480;
      uVar20 = _swift_dynamicCast(&iStack_98,auStack_88,uVar26 + 4,PTR___sSbN_000303fc,6);
      if (((uVar20 & 1) != 0) && ((char)iStack_98 == '\x01')) {
        func_0x000278a0(uVar18);
        uVar19 = _objc_retainAutoreleasedReturnValue();
        iVar13 = __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
                           (uVar19,PTR___sSSN_000303d0,uVar26 + 4,PTR___sSSSHsWP_000303d4);
        _objc_release_x21();
        puVar14 = (undefined4 *)FUN_00020044();
        uVar16 = puVar14[1];
        bVar3 = *(byte *)(puVar14 + 2);
        if (*(int *)(iVar13 + 8) == 0) {
          iStack_7c = 0;
          FUN_000103b4(uVar16,bVar3);
        }
        else {
          bVar4 = *(byte *)((int)puVar14 + 9);
          uVar22 = *puVar14;
          uVar6 = *(ushort *)((int)puVar14 + 10);
          FUN_000103b4(uVar16,bVar3);
          _swift_bridgeObjectRetain(iVar13);
          iVar15 = FUN_0001aa38(uVar22,uVar16,(uint)bVar3 | (uint)uVar6 << 0x10 | (uint)bVar4 << 8);
          if ((extraout_x1_02 & 1) == 0) {
            _swift_bridgeObjectRelease(iVar13);
            iStack_7c = 0;
          }
          else {
            FUN_000104b4((ulonglong)*(uint *)(iVar13 + 0x20) + (longlong)iVar15 * 0x10,auStack_88);
            _swift_bridgeObjectRelease(iVar13);
          }
          uVar27 = param_3 & 0xffffffff;
        }
        _swift_bridgeObjectRelease(iVar13);
        FUN_000103d0(uVar16,bVar3);
        if (iStack_7c == 0) goto LAB_00019480;
        uVar26 = _swift_dynamicCast(&iStack_98,auStack_88,uVar26 + 4,PTR___sSSN_000303d0,6);
        if ((uVar26 & 1) != 0) {
          iVar13 = FUN_00010468(0x35040,&UNK_00028868);
          uVar22 = 0;
          (**(code **)(*(int *)(iVar13 + -4) + 0x1c))(iVar23,1,1,iVar13);
          _objc_opt_self(uRam00034848);
          func_0x00027760();
          _objc_retainAutoreleasedReturnValue();
          func_0x00027860();
          uVar19 = _objc_retainAutoreleasedReturnValue();
          _objc_release_x20();
          uVar16 = __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ
                             (uVar19);
          _objc_release_x21();
          (*pcVar1)(iVar23 + *(int *)(iVar9 + 0x18),iVar24,iVar11);
          puVar17 = (undefined8 *)(iVar23 + *(int *)(iVar9 + 0xc));
          *puVar17 = CONCAT44(uStack_94,iStack_98);
          *(undefined4 *)(puVar17 + 1) = uStack_90;
          puVar14 = (undefined4 *)(iVar23 + *(int *)(iVar9 + 0x10));
          *puVar14 = uVar12;
          puVar14[1] = uVar25;
          *(char *)(puVar14 + 2) = (char)param_3;
          *(char *)((int)puVar14 + 9) = (char)(uVar27 >> 8);
          *(short *)((int)puVar14 + 10) = (short)(uVar27 >> 0x10);
          puVar14 = (undefined4 *)(iVar23 + *(int *)(iVar9 + 0x14));
          *puVar14 = uVar16;
          puVar14[1] = extraout_w1;
          *(char *)(puVar14 + 2) = (char)uVar22;
          *(char *)((int)puVar14 + 9) = (char)((uint)uVar22 >> 8);
          *(short *)((int)puVar14 + 10) = (short)((uint)uVar22 >> 0x10);
          uVar19 = FUN_00010468(0x34f18,&UNK_00028870);
          iVar13 = _swift_initStackObject(uVar19,auStack_e0);
          *(undefined8 *)(iVar13 + 8) = 0x400000002;
          puVar17 = (undefined8 *)FUN_000201a4();
          uVar8 = *(undefined1 *)((int)puVar17 + 9);
          uVar7 = *(undefined2 *)((int)puVar17 + 10);
          uVar16 = *(undefined4 *)((int)puVar17 + 4);
          uVar5 = *(undefined1 *)(puVar17 + 1);
          *(undefined8 *)(iVar13 + 0x10) = *puVar17;
          *(undefined1 *)(iVar13 + 0x18) = uVar5;
          *(undefined1 *)(iVar13 + 0x19) = uVar8;
          *(undefined2 *)(iVar13 + 0x1a) = uVar7;
          FUN_000103b4(uVar16);
          puVar17 = (undefined8 *)FUN_000202f0();
          uVar8 = *(undefined1 *)((int)puVar17 + 9);
          uVar7 = *(undefined2 *)((int)puVar17 + 10);
          uVar16 = *(undefined4 *)((int)puVar17 + 4);
          uVar19 = *puVar17;
          uVar5 = *(undefined1 *)(puVar17 + 1);
          *(undefined **)(iVar13 + 0x28) = PTR___sSSN_000303d0;
          *(undefined8 *)(iVar13 + 0x1c) = uVar19;
          *(undefined1 *)(iVar13 + 0x24) = uVar5;
          *(undefined1 *)(iVar13 + 0x25) = uVar8;
          *(undefined2 *)(iVar13 + 0x26) = uVar7;
          FUN_000103b4(uVar16);
          puVar17 = (undefined8 *)FUN_000201b0();
          uVar8 = *(undefined1 *)((int)puVar17 + 9);
          uVar7 = *(undefined2 *)((int)puVar17 + 10);
          uVar16 = *(undefined4 *)((int)puVar17 + 4);
          uVar5 = *(undefined1 *)(puVar17 + 1);
          *(undefined8 *)(iVar13 + 0x2c) = *puVar17;
          *(undefined1 *)(iVar13 + 0x34) = uVar5;
          *(undefined1 *)(iVar13 + 0x35) = uVar8;
          *(undefined2 *)(iVar13 + 0x36) = uVar7;
          iVar15 = __s10Foundation11JSONEncoderCMa(0);
          _swift_allocObject(iVar15,*(undefined4 *)(iVar15 + 0x1c),*(undefined2 *)(iVar15 + 0x20));
          FUN_000103b4(uVar16,uVar5);
          uVar19 = __s10Foundation11JSONEncoderCACycfc();
          uVar8 = FUN_0001b050(0x3504c,FUN_00024688,&UNK_000294c8);
          uVar16 = __s10Foundation11JSONEncoderC6encodeyAA4DataVxKSERzlFTj(iVar23,iVar9);
          _swift_release(uVar19);
          *(undefined **)(iVar13 + 0x44) = PTR___s10Foundation4DataVN_00030080;
          *(undefined4 *)(iVar13 + 0x38) = uVar16;
          *(undefined4 *)(iVar13 + 0x3c) = extraout_w1_00;
          *(undefined1 *)(iVar13 + 0x40) = uVar8;
          uVar19 = FUN_0001ae68(iVar13);
          _swift_setDeallocating(iVar13);
          uVar21 = FUN_00010468(0x34f20,&UNK_00028580);
          _swift_arrayDestroy((undefined8 *)(iVar13 + 0x10),2,uVar21);
          uVar21 = __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
                             (uVar19,PTR___sSSN_000303d0,ZEXT48(PTR___sypN_000304dc) + 4,
                              PTR___sSSSHsWP_000303d4);
          _swift_bridgeObjectRelease(uVar19);
          func_0x000279e0(uVar18,extraout_x1_03,uVar21);
          _objc_retainAutoreleasedReturnValue();
          _objc_release_x21();
          _objc_release_x20();
          _objc_release_x27();
          FUN_0001aab0(iVar23);
          (**(code **)(iVar10 + 4))(iVar24,iVar11);
          return;
        }
      }
    }
    (**(code **)(iVar10 + 4))(iVar24,iVar11);
    _objc_release_x27();
    FUN_000103d0(uVar25,uVar27);
  }
  return;
}



/* Entry: 000195c4; end: 000195f7; -[_TtC20SnapchatWatchLibrary16WatchAppDelegate applicationDidBecomeActive] */

void FUN_000195c4(void)

{
  undefined8 uVar1;
  
  uVar1 = _objc_retain();
  FUN_00018cc8();
                    /* WARNING: Could not recover jumptable at 0x00027408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_000300d8)(uVar1);
  return;
}



/* Entry: 000195f8; end: 00019fe3;  */

/* WARNING: Removing unreachable block (ram,0x00019e84) */

void FUN_000195f8(void)

{
  code *pcVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  ushort uVar5;
  undefined2 uVar6;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined1 *puVar14;
  undefined4 uVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulonglong uVar19;
  undefined4 extraout_w1;
  undefined4 extraout_w1_00;
  ulonglong extraout_x1;
  ulonglong extraout_x1_00;
  ulonglong extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined *puVar20;
  undefined4 uVar21;
  int iVar22;
  uint uVar23;
  int unaff_w20;
  ulonglong uVar24;
  int iVar25;
  int iVar26;
  undefined8 uVar27;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 auStack_e0 [72];
  int iStack_98;
  undefined4 uStack_94;
  undefined1 uStack_90;
  undefined1 uStack_8f;
  undefined2 uStack_8e;
  undefined1 auStack_88 [12];
  int iStack_7c;
  
  iVar8 = FUN_00024688(0);
  iVar22 = (int)&uStack_140 - (*(int *)(*(int *)(iVar8 + -4) + 0x20) + 0xfU & 0xfffffff0);
  iVar9 = FUN_00010468(0x35038,&UNK_00028858);
  puVar14 = (undefined1 *)(iVar22 - (*(int *)(*(int *)(iVar9 + -4) + 0x20) + 0xfU & 0xfffffff0));
  iVar10 = __s10Foundation4DateVMa(0);
  iVar9 = *(int *)(iVar10 + -4);
  uVar23 = *(int *)(iVar9 + 0x20) + 0xfU & 0xfffffff0;
  iVar26 = (int)puVar14 - uVar23;
  iVar25 = iVar26 - uVar23;
  __s10Foundation4DateVACycfC();
  _objc_opt_self(uRam0003483c);
  func_0x000277c0();
  uVar17 = _objc_retainAutoreleasedReturnValue();
  func_0x000278a0();
  uVar18 = _objc_retainAutoreleasedReturnValue();
  uVar24 = ZEXT48(PTR___sypN_000304dc);
  iVar11 = __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
                     (uVar18,PTR___sSSN_000303d0,uVar24 + 4,PTR___sSSSHsWP_000303d4);
  _objc_release_x26();
  puVar12 = (undefined4 *)FUN_00020154();
  uVar15 = puVar12[1];
  bVar2 = *(byte *)(puVar12 + 2);
  if (*(int *)(iVar11 + 8) == 0) {
    iStack_7c = 0;
    FUN_000103b4(uVar15,bVar2);
  }
  else {
    bVar3 = *(byte *)((int)puVar12 + 9);
    uVar21 = *puVar12;
    uVar5 = *(ushort *)((int)puVar12 + 10);
    FUN_000103b4(uVar15,bVar2);
    _swift_bridgeObjectRetain(iVar11);
    iVar13 = FUN_0001aa38(uVar21,uVar15,(uint)bVar2 | (uint)uVar5 << 0x10 | (uint)bVar3 << 8);
    if ((extraout_x1 & 1) == 0) {
      _swift_bridgeObjectRelease(iVar11);
      iStack_7c = 0;
    }
    else {
      FUN_000104b4((ulonglong)*(uint *)(iVar11 + 0x20) + (longlong)iVar13 * 0x10,auStack_88);
      _swift_bridgeObjectRelease(iVar11);
    }
    uVar24 = ZEXT48(PTR___sypN_000304dc);
  }
  _swift_bridgeObjectRelease(iVar11);
  FUN_000103d0(uVar15,bVar2);
  if (iStack_7c != 0) {
    uVar18 = FUN_00010468(0x35030,&UNK_00028808);
    uVar19 = _swift_dynamicCast(&iStack_98,auStack_88,uVar24 + 4,uVar18,6);
    if ((uVar19 & 1) == 0) {
LAB_00019b10:
      (**(code **)(iVar9 + 4))(iVar25,iVar10);
      _objc_release_x23();
      return;
    }
    puVar12 = (undefined4 *)FUN_000201f8();
    uVar15 = puVar12[1];
    bVar2 = *(byte *)(puVar12 + 2);
    if (*(int *)(iStack_98 + 8) == 0) {
      iStack_7c = 0;
      FUN_000103b4(uVar15,bVar2);
    }
    else {
      bVar3 = *(byte *)((int)puVar12 + 9);
      uVar21 = *puVar12;
      uVar5 = *(ushort *)((int)puVar12 + 10);
      FUN_000103b4(uVar15,bVar2);
      _swift_bridgeObjectRetain(iStack_98);
      iVar11 = FUN_0001aa38(uVar21,uVar15,(uint)bVar2 | (uint)uVar5 << 0x10 | (uint)bVar3 << 8);
      if ((extraout_x1_00 & 1) == 0) {
        _swift_bridgeObjectRelease(iStack_98);
        iStack_7c = 0;
      }
      else {
        FUN_000104b4((ulonglong)*(uint *)(iStack_98 + 0x20) + (longlong)iVar11 * 0x10,auStack_88);
        _swift_bridgeObjectRelease(iStack_98);
      }
      uVar24 = ZEXT48(PTR___sypN_000304dc);
    }
    _swift_bridgeObjectRelease(iStack_98);
    FUN_000103d0(uVar15,bVar2);
    if (iStack_7c != 0) {
      uVar19 = _swift_dynamicCast(&iStack_98,auStack_88,uVar24 + 4,PTR___sSbN_000303fc,6);
      if (((uVar19 & 1) == 0) || ((char)iStack_98 != '\x01')) goto LAB_00019b10;
      func_0x000278a0(uVar17);
      uVar18 = _objc_retainAutoreleasedReturnValue();
      iVar11 = __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
                         (uVar18,PTR___sSSN_000303d0,uVar24 + 4,PTR___sSSSHsWP_000303d4);
      _objc_release_x24();
      puVar12 = (undefined4 *)FUN_00020044();
      uVar15 = puVar12[1];
      bVar2 = *(byte *)(puVar12 + 2);
      if (*(int *)(iVar11 + 8) == 0) {
        iStack_7c = 0;
        FUN_000103b4(uVar15,bVar2);
      }
      else {
        bVar3 = *(byte *)((int)puVar12 + 9);
        uVar21 = *puVar12;
        uVar5 = *(ushort *)((int)puVar12 + 10);
        FUN_000103b4(uVar15,bVar2);
        _swift_bridgeObjectRetain(iVar11);
        iVar13 = FUN_0001aa38(uVar21,uVar15,(uint)bVar2 | (uint)uVar5 << 0x10 | (uint)bVar3 << 8);
        if ((extraout_x1_01 & 1) == 0) {
          _swift_bridgeObjectRelease(iVar11);
          iStack_7c = 0;
        }
        else {
          FUN_000104b4((ulonglong)*(uint *)(iVar11 + 0x20) + (longlong)iVar13 * 0x10,auStack_88);
          _swift_bridgeObjectRelease(iVar11);
        }
        uVar24 = ZEXT48(PTR___sypN_000304dc);
      }
      _swift_bridgeObjectRelease(iVar11);
      FUN_000103d0(uVar15,bVar2);
      if (iStack_7c != 0) {
        uVar24 = _swift_dynamicCast(&iStack_98,auStack_88,uVar24 + 4,PTR___sSSN_000303d0,6);
        iVar11 = iRam00035004;
        if ((uVar24 & 1) == 0) goto LAB_00019b10;
        _swift_beginAccess(unaff_w20 + iRam00035004,auStack_88,0,0);
        FUN_0001b13c(unaff_w20 + iVar11,puVar14,0x35038,&UNK_00028858);
        iVar11 = (**(code **)(iVar9 + 0x18))(puVar14,1,iVar10);
        if (iVar11 != 1) {
          (**(code **)(iVar9 + 0x10))(iVar26,puVar14,iVar10);
          puVar16 = (undefined8 *)(unaff_w20 + iRam00035008);
          uVar23 = *(uint *)(puVar16 + 1);
          if (((uVar23 ^ 0xffffffff) & 0xff) == 0) {
            _objc_release_x23();
            FUN_000103d0(uStack_94,uStack_90);
            pcVar1 = *(code **)(iVar9 + 4);
            (*pcVar1)(iVar26,iVar10);
            (*pcVar1)(iVar25,iVar10);
            return;
          }
          pcVar1 = *(code **)(iVar9 + 8);
          uVar15 = *(undefined4 *)((int)puVar16 + 4);
          uVar27 = *puVar16;
          (*pcVar1)(iVar22,iVar26,iVar10);
          iVar11 = FUN_00010468(0x35040,&UNK_00028868);
          uVar21 = 0;
          (**(code **)(*(int *)(iVar11 + -4) + 0x1c))(iVar22,0,1,iVar11);
          uVar18 = _objc_opt_self(uRam00034848);
          FUN_000103b4(uVar15,uVar23);
          func_0x00027760(uVar18);
          _objc_retainAutoreleasedReturnValue();
          func_0x00027860();
          uVar18 = _objc_retainAutoreleasedReturnValue();
          _objc_release_x24();
          uVar15 = __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ
                             (uVar18);
          _objc_release_x25();
          (*pcVar1)(iVar22 + *(int *)(iVar8 + 0x18),iVar25,iVar10);
          puVar16 = (undefined8 *)(iVar22 + *(int *)(iVar8 + 0xc));
          *puVar16 = CONCAT44(uStack_94,iStack_98);
          *(undefined1 *)(puVar16 + 1) = uStack_90;
          *(undefined1 *)((int)puVar16 + 9) = uStack_8f;
          *(undefined2 *)((int)puVar16 + 10) = uStack_8e;
          puVar16 = (undefined8 *)(iVar22 + *(int *)(iVar8 + 0x10));
          *puVar16 = uVar27;
          *(char *)(puVar16 + 1) = (char)uVar23;
          *(char *)((int)puVar16 + 9) = (char)(uVar23 >> 8);
          *(short *)((int)puVar16 + 10) = (short)(uVar23 >> 0x10);
          puVar12 = (undefined4 *)(iVar22 + *(int *)(iVar8 + 0x14));
          *puVar12 = uVar15;
          puVar12[1] = extraout_w1;
          *(char *)(puVar12 + 2) = (char)uVar21;
          *(char *)((int)puVar12 + 9) = (char)((uint)uVar21 >> 8);
          *(short *)((int)puVar12 + 10) = (short)((uint)uVar21 >> 0x10);
          uVar18 = FUN_00010468(0x34f18,&UNK_00028870);
          iVar11 = _swift_initStackObject(uVar18,auStack_e0);
          *(undefined8 *)(iVar11 + 8) = 0x400000002;
          puVar16 = (undefined8 *)FUN_000201a4();
          uVar7 = *(undefined1 *)((int)puVar16 + 9);
          uVar6 = *(undefined2 *)((int)puVar16 + 10);
          uVar15 = *(undefined4 *)((int)puVar16 + 4);
          uVar4 = *(undefined1 *)(puVar16 + 1);
          *(undefined8 *)(iVar11 + 0x10) = *puVar16;
          *(undefined1 *)(iVar11 + 0x18) = uVar4;
          *(undefined1 *)(iVar11 + 0x19) = uVar7;
          *(undefined2 *)(iVar11 + 0x1a) = uVar6;
          FUN_000103b4(uVar15);
          puVar16 = (undefined8 *)FUN_000202f0();
          uVar7 = *(undefined1 *)((int)puVar16 + 9);
          uVar6 = *(undefined2 *)((int)puVar16 + 10);
          uVar15 = *(undefined4 *)((int)puVar16 + 4);
          uVar18 = *puVar16;
          uVar4 = *(undefined1 *)(puVar16 + 1);
          *(undefined **)(iVar11 + 0x28) = PTR___sSSN_000303d0;
          *(undefined8 *)(iVar11 + 0x1c) = uVar18;
          *(undefined1 *)(iVar11 + 0x24) = uVar4;
          *(undefined1 *)(iVar11 + 0x25) = uVar7;
          *(undefined2 *)(iVar11 + 0x26) = uVar6;
          FUN_000103b4(uVar15);
          puVar16 = (undefined8 *)FUN_000201b0();
          uVar7 = *(undefined1 *)((int)puVar16 + 9);
          uVar6 = *(undefined2 *)((int)puVar16 + 10);
          uVar15 = *(undefined4 *)((int)puVar16 + 4);
          uVar4 = *(undefined1 *)(puVar16 + 1);
          *(undefined8 *)(iVar11 + 0x2c) = *puVar16;
          *(undefined1 *)(iVar11 + 0x34) = uVar4;
          *(undefined1 *)(iVar11 + 0x35) = uVar7;
          *(undefined2 *)(iVar11 + 0x36) = uVar6;
          iVar13 = __s10Foundation11JSONEncoderCMa(0);
          _swift_allocObject(iVar13,*(undefined4 *)(iVar13 + 0x1c),*(undefined2 *)(iVar13 + 0x20));
          FUN_000103b4(uVar15,uVar4);
          uVar18 = __s10Foundation11JSONEncoderCACycfc();
          uVar7 = FUN_0001b050(0x3504c,FUN_00024688,&UNK_000294c8);
          uVar15 = __s10Foundation11JSONEncoderC6encodeyAA4DataVxKSERzlFTj(iVar22,iVar8);
          _swift_release(uVar18);
          *(undefined **)(iVar11 + 0x44) = PTR___s10Foundation4DataVN_00030080;
          *(undefined4 *)(iVar11 + 0x38) = uVar15;
          *(undefined4 *)(iVar11 + 0x3c) = extraout_w1_00;
          *(undefined1 *)(iVar11 + 0x40) = uVar7;
          uVar18 = FUN_0001ae68(iVar11);
          _swift_setDeallocating(iVar11);
          uVar27 = FUN_00010468(0x34f20,&UNK_00028580);
          _swift_arrayDestroy((undefined8 *)(iVar11 + 0x10),2,uVar27);
          uVar27 = __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
                             (uVar18,PTR___sSSN_000303d0,ZEXT48(PTR___sypN_000304dc) + 4,
                              PTR___sSSSHsWP_000303d4);
          _swift_bridgeObjectRelease(uVar18);
          func_0x000279e0(uVar17,extraout_x1_02,uVar27);
          _objc_retainAutoreleasedReturnValue();
          _objc_release_x21();
          _objc_release_x20();
          _objc_release_x23();
          FUN_0001aab0(iVar22);
          pcVar1 = *(code **)(iVar9 + 4);
          (*pcVar1)(iVar26,iVar10);
          (*pcVar1)(iVar25,iVar10);
          return;
        }
        (**(code **)(iVar9 + 4))(iVar25,iVar10);
        _objc_release_x23();
        FUN_000103d0(uStack_94,uStack_90);
        uVar17 = 0x35038;
        puVar20 = &UNK_00028858;
        goto LAB_00019b08;
      }
    }
  }
  (**(code **)(iVar9 + 4))(iVar25,iVar10);
  _objc_release_x23();
  uVar17 = 0x34d10;
  puVar20 = &UNK_00028690;
  puVar14 = auStack_88;
LAB_00019b08:
  FUN_0001b184(puVar14,uVar17,puVar20);
  return;
}



/* Entry: 00019fe4; end: 0001a017; -[_TtC20SnapchatWatchLibrary16WatchAppDelegate applicationWillResignActive] */

void FUN_00019fe4(void)

{
  undefined8 uVar1;
  
  uVar1 = _objc_retain();
  FUN_000195f8();
                    /* WARNING: Could not recover jumptable at 0x00027408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_000300d8)(uVar1);
  return;
}



/* Entry: 0001a018; end: 0001a0a7;  */

void FUN_0001a018(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 in_w3;
  undefined4 in_w4;
  int unaff_w22;
  undefined1 auVar5 [16];
  
  *(undefined4 *)(unaff_w22 + 0xc) = in_w3;
  *(undefined4 *)(unaff_w22 + 0x10) = in_w4;
  uVar3 = __sScMMa(0);
  puVar1 = PTR___sScMMa_0003059c;
  uVar2 = __sScM6sharedScMvgZ();
  *(undefined4 *)(unaff_w22 + 0x14) = uVar2;
  uVar4 = FUN_0001b050(0x34ffc,puVar1,PTR___sScMScAsMc_000305a0);
  auVar5 = __sScA15unownedExecutorScevgTj(uVar3,uVar4);
                    /* WARNING: Could not recover jumptable at 0x000276d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_000305b8)(FUN_0001a0a8,auVar5._0_8_,auVar5._8_8_);
  return;
}



/* Entry: 0001a0a8; end: 0001a167;  */

void FUN_0001a0a8(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int unaff_w22;
  
  uVar1 = *(undefined4 *)(unaff_w22 + 0x10);
  _swift_release(*(undefined4 *)(unaff_w22 + 0x14));
  func_0x000278a0(uVar1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  uVar1 = __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
                    (uVar2,PTR___sSSN_000303d0,ZEXT48(PTR___sypN_000304dc) + 4,
                     PTR___sSSSHsWP_000303d4);
  _objc_release_x20();
  uVar2 = _swift_getKeyPath(&UNK_00028888);
  uVar3 = _swift_getKeyPath(&UNK_000288b0);
  *(undefined4 *)(unaff_w22 + 8) = uVar1;
  uVar4 = _objc_retain_x24();
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
            ((undefined4 *)(unaff_w22 + 8),uVar4,uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001a164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_w22 + 4))();
  return;
}



/* Entry: 0001a168; end: 0001a28f; -[_TtC20SnapchatWatchLibrary16WatchAppDelegate session:activationDidCompleteWithState:error:] */

void FUN_0001a168(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  iVar2 = FUN_00010468(0x34ff8,&UNK_000287d0);
  iVar2 = *(int *)(*(int *)(iVar2 + -4) + 0x20);
  iVar3 = __sScPMa(0);
  (**(code **)(*(int *)(iVar3 + -4) + 0x1c))
            (&stack0xffffffc0 + -(iVar2 + 0xfU & 0xfffffff0),1,1,iVar3);
  __sScMMa(0);
  puVar1 = PTR___sScMMa_0003059c;
  _objc_retain_x20();
  _objc_retain_x21();
  uVar4 = _objc_retain();
  uVar5 = _objc_retain_x20();
  uVar6 = __sScM6sharedScMvgZ();
  uVar7 = FUN_0001b050(0x34ffc,puVar1,PTR___sScMScAsMc_000305a0);
  iVar3 = _swift_allocObject(&UNK_00030990,0x18,3);
  *(undefined4 *)(iVar3 + 8) = uVar6;
  *(undefined4 *)(iVar3 + 0xc) = uVar7;
  *(undefined4 *)(iVar3 + 0x10) = uVar4;
  *(undefined4 *)(iVar3 + 0x14) = uVar5;
  FUN_000187e4(0,0,0xff,&stack0xffffffc0 + -(iVar2 + 0xfU & 0xfffffff0),&UNK_00028900,iVar3);
  _swift_release();
  _objc_release_x24();
  _objc_release_x21();
  return;
}



/* Entry: 0001a290; end: 0001a31f;  */

void FUN_0001a290(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 in_w3;
  undefined4 in_w4;
  int unaff_w22;
  undefined1 auVar5 [16];
  
  *(undefined4 *)(unaff_w22 + 0xc) = in_w3;
  *(undefined4 *)(unaff_w22 + 0x10) = in_w4;
  uVar3 = __sScMMa(0);
  puVar1 = PTR___sScMMa_0003059c;
  uVar2 = __sScM6sharedScMvgZ();
  *(undefined4 *)(unaff_w22 + 0x14) = uVar2;
  uVar4 = FUN_0001b050(0x34ffc,puVar1,PTR___sScMScAsMc_000305a0);
  auVar5 = __sScA15unownedExecutorScevgTj(uVar3,uVar4);
                    /* WARNING: Could not recover jumptable at 0x000276d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_000305b8)(FUN_0001a320,auVar5._0_8_,auVar5._8_8_);
  return;
}



/* Entry: 0001a320; end: 0001a3af;  */

void FUN_0001a320(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int unaff_w22;
  
  uVar1 = *(undefined4 *)(unaff_w22 + 0x10);
  _swift_release(*(undefined4 *)(unaff_w22 + 0x14));
  uVar2 = _swift_getKeyPath(&UNK_00028888);
  uVar3 = _swift_getKeyPath(&UNK_000288b0);
  *(undefined4 *)(unaff_w22 + 8) = uVar1;
  uVar4 = _objc_retain_x24();
  _swift_bridgeObjectRetain(uVar1);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
            ((undefined4 *)(unaff_w22 + 8),uVar4,uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001a3ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_w22 + 4))();
  return;
}



/* Entry: 0001a3b0; end: 0001a4fb; -[_TtC20SnapchatWatchLibrary16WatchAppDelegate session:didReceiveApplicationContext:] */

void FUN_0001a3b0(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 in_x3;
  
  iVar2 = FUN_00010468(0x34ff8,&UNK_000287d0);
  iVar2 = *(int *)(*(int *)(iVar2 + -4) + 0x20);
  uVar7 = __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
                    (in_x3,PTR___sSSN_000303d0,ZEXT48(PTR___sypN_000304dc) + 4,
                     PTR___sSSSHsWP_000303d4);
  iVar3 = __sScPMa(0);
  (**(code **)(*(int *)(iVar3 + -4) + 0x1c))
            (&stack0xffffffc0 + -(iVar2 + 0xfU & 0xfffffff0),1,1,iVar3);
  __sScMMa(0);
  puVar1 = PTR___sScMMa_0003059c;
  _objc_retain_x20();
  uVar4 = _objc_retain();
  _swift_bridgeObjectRetain(uVar7);
  uVar5 = __sScM6sharedScMvgZ();
  uVar6 = FUN_0001b050(0x34ffc,puVar1,PTR___sScMScAsMc_000305a0);
  iVar3 = _swift_allocObject(&UNK_00030954,0x18,3);
  *(undefined4 *)(iVar3 + 8) = uVar5;
  *(undefined4 *)(iVar3 + 0xc) = uVar6;
  *(undefined4 *)(iVar3 + 0x10) = uVar4;
  *(int *)(iVar3 + 0x14) = (int)uVar7;
  FUN_000187e4(0,0,0xff,&stack0xffffffc0 + -(iVar2 + 0xfU & 0xfffffff0),&UNK_000288d8,iVar3);
  _swift_release();
  _swift_bridgeObjectRelease(uVar7);
  _objc_release_x22();
  return;
}



/* Entry: 0001a4fc; end: 0001a613; -[_TtC20SnapchatWatchLibrary16WatchAppDelegate init] */

void FUN_0001a4fc(int param_1)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auStack_50 [4];
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  iVar4 = FUN_00010468(0x34f58,&UNK_00028680);
  iVar3 = iRam00035000;
  iVar5 = *(int *)(iVar4 + -4);
  iVar1 = *(int *)(iVar5 + 0x20);
  uStack_44 = FUN_0001ae68(PTR___swiftEmptyArrayStorage_000304e8);
  uVar6 = FUN_00010468(0x35030,&UNK_00028808);
  __s7Combine9PublishedV12initialValueACyxGx_tcfC(&uStack_44,uVar6);
  (**(code **)(iVar5 + 0x10))(param_1 + iVar3,auStack_50 + -(iVar1 + 0xfU & 0xfffffff0),iVar4);
  iVar1 = iRam00035004;
  iVar5 = __s10Foundation4DateVMa(0);
  (**(code **)(*(int *)(iVar5 + -4) + 0x1c))(param_1 + iVar1,1,1,iVar5);
  puVar2 = (undefined8 *)(param_1 + iRam00035008);
  *puVar2 = 0;
  *(undefined4 *)(puVar2 + 1) = 0xff;
  uStack_48 = FUN_0001a6d0(0);
  iStack_4c = param_1;
  _objc_msgSendSuper2(&iStack_4c,PTR_DAT_0003464c);
  return;
}



/* Entry: 0001a614; end: 0001a647;  */

void FUN_0001a614(void)

{
  undefined1 auStack_18 [4];
  undefined4 uStack_14;
  
  uStack_14 = FUN_0001a6d0(0);
  _objc_msgSendSuper2(auStack_18,PTR_DAT_00034630);
  return;
}



/* Entry: 0001a648; end: 0001a6c7; -[_TtC20SnapchatWatchLibrary16WatchAppDelegate .cxx_destruct] */

ulonglong FUN_0001a648(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  
  iVar2 = iRam00035000;
  iVar3 = FUN_00010468(0x34f58,&UNK_00028680);
  (**(code **)(*(int *)(iVar3 + -4) + 4))(param_1 + iVar2,iVar3);
  FUN_0001b184(param_1 + iRam00035004,0x35038,&UNK_00028858);
  puVar1 = (uint *)(param_1 + iRam00035008);
  if (((puVar1[2] ^ 0xffffffff) & 0xff) == 0) {
    return (ulonglong)*puVar1;
  }
  if ((puVar1[2] & 0xff) - 1 < 2) {
                    /* WARNING: Could not recover jumptable at 0x000276e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*(code *)PTR__swift_unknownObjectRelease_00030584)((ulonglong)puVar1[1]);
    return uVar4;
  }
  return (ulonglong)puVar1[1];
}



/* Entry: 0001a6c8; end: 0001a6cf;  */

void FUN_0001a6c8(void)

{
  if (iRam00035020 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_00029c30);
  return;
}



/* Entry: 0001a6d0; end: 0001a707;  */

void FUN_0001a6d0(undefined8 param_1)

{
  if (iRam00035020 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_00029c30);
  return;
}



/* Entry: 0001a708; end: 0001a797;  */

/* WARNING: Removing unreachable block (ram,0x0001a784) */

int FUN_0001a708(longlong param_1)

{
  int iVar1;
  int iStack_2c;
  int iStack_28;
  undefined *puStack_24;
  
  iVar1 = FUN_0001a798(0x13f);
  iStack_2c = *(int *)(iVar1 + -4) + 0x20;
  iVar1 = FUN_0001a7f8(0x13f);
  iStack_28 = *(int *)(iVar1 + -4) + 0x20;
  puStack_24 = &UNK_00028810;
  iVar1 = _swift_updateClassMetadata2(param_1,0x100,3,&iStack_2c,param_1 + 0x34);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  return iVar1;
}



/* Entry: 0001a798; end: 0001a7f7;  */

void FUN_0001a798(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  int extraout_w1;
  
  if (iRam00035028 == 0) {
    uVar2 = FUN_00010a14(0x35030,&UNK_00028808);
    iVar1 = __s7Combine9PublishedVMa(param_1,uVar2);
    if (extraout_w1 == 0) {
      iRam00035028 = iVar1;
    }
  }
  return;
}



/* Entry: 0001a7f8; end: 0001a84b;  */

void FUN_0001a7f8(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  int extraout_w1;
  
  if (iRam00035034 == 0) {
    uVar2 = __s10Foundation4DateVMa(0xff);
    iVar1 = __sSqMa(param_1,uVar2);
    if (extraout_w1 == 0) {
      iRam00035034 = iVar1;
    }
  }
  return;
}



/* Entry: 0001a84c; end: 0001a857;  */

undefined * FUN_0001a84c(void)

{
  return PTR___s7Combine25ObservableObjectPublisherCAA0D0AAWP_00030154;
}



/* Entry: 0001a858; end: 0001a893;  */

void FUN_0001a858(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 *in_w8;
  
  uVar2 = FUN_0001a6d0(0);
  uVar1 = __s7Combine16ObservableObjectPA2A0bC9PublisherC0c10WillChangeD0RtzrlE06objecteF0AEvg
                    (uVar2,param_2);
  *in_w8 = uVar1;
  return;
}



/* Entry: 0001a894; end: 0001a8fb;  */

void FUN_0001a894(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = _swift_getKeyPath(&UNK_00028888);
  uVar3 = _swift_getKeyPath(&UNK_000288b0);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (uVar1,uVar2,uVar3);
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00027678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_00030570)(uVar3);
  return;
}



/* Entry: 0001a8fc; end: 0001a96f;  */

void FUN_0001a8fc(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uStack_34;
  
  uVar1 = *param_1;
  uVar2 = _swift_getKeyPath(&UNK_00028888);
  uVar3 = _swift_getKeyPath(&UNK_000288b0);
  uStack_34 = uVar1;
  _swift_bridgeObjectRetain(uVar1);
  uVar4 = _objc_retain_x22();
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
            (&uStack_34,uVar4,uVar2,uVar3);
  return;
}



/* Entry: 0001a970; end: 0001a9cf;  */

void FUN_0001a970(undefined8 param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int unaff_w22;
  
  iVar1 = *param_2;
  piVar2 = (int *)_swift_task_alloc(param_2[1]);
  *(int **)(unaff_w22 + 8) = piVar2;
  *piVar2 = unaff_w22;
  piVar2[1] = (int)FUN_0001a9d0;
                    /* WARNING: Could not recover jumptable at 0x0001a9cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(iVar1 + (int)param_2))(param_1);
  return;
}



/* Entry: 0001a9d0; end: 0001aa07;  */

void FUN_0001a9d0(void)

{
  int iVar1;
  int *unaff_w22;
  
  iVar1 = *unaff_w22;
  _swift_task_dealloc(*(undefined4 *)(iVar1 + 8));
                    /* WARNING: Could not recover jumptable at 0x0001aa04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 4))();
  return;
}



/* Entry: 0001aa08; end: 0001aa37;  */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_0001aa08(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  int unaff_w20;
  undefined1 auStack_64 [20];
  
  uVar2 = __ss11AnyHashableV13_rawHashValue4seedS2i_tF(*(undefined4 *)(unaff_w20 + 0x18));
  uVar1 = -1 << (ulonglong)(*(byte *)(unaff_w20 + 0x10) & 0x1f);
  uVar2 = uVar2 & (uVar1 ^ 0xffffffff);
  if ((*(uint *)(unaff_w20 + 0x24 + (uVar2 >> 5) * 4) >> (ulonglong)(uVar2 & 0x1f) & 1) != 0) {
    do {
      FUN_0001b3dc((ulonglong)*(uint *)(unaff_w20 + 0x1c) + (longlong)(int)uVar2 * 0x14,auStack_64);
      uVar3 = __ss11AnyHashableV2eeoiySbAB_ABtFZ(auStack_64,param_1);
      FUN_000103ec(auStack_64);
      if ((uVar3 & 1) != 0) {
        return uVar2;
      }
      uVar2 = uVar2 + 1 & ~uVar1;
    } while ((*(uint *)(unaff_w20 + 0x24 + (uVar2 >> 5) * 4) >> (ulonglong)(uVar2 & 0x1f) & 1) != 0)
    ;
  }
  return uVar2;
}



/* Entry: 0001aa38; end: 0001aaaf;  */

uint FUN_0001aa38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  longlong unaff_x20;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auStack_88 [28];
  uint uStack_6c;
  longlong lStack_68;
  
  iVar4 = (int)unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(*(undefined4 *)(iVar4 + 0x18));
  __sSS4hash4intoys6HasherVz_tF(auStack_88,param_1,param_2,param_3);
  uVar5 = __ss6HasherV9_finalizeSiyF();
  lStack_68 = unaff_x20 + 0x24;
  uStack_6c = -1 << (ulonglong)(*(byte *)(iVar4 + 0x10) & 0x1f);
  uVar5 = uVar5 & (uStack_6c ^ 0xffffffff);
  if ((*(uint *)((int)lStack_68 + (uVar5 >> 5) * 4) >> (ulonglong)(uVar5 & 0x1f) & 1) != 0) {
    uStack_6c = ~uStack_6c;
    do {
      puVar7 = (undefined4 *)(*(int *)(iVar4 + 0x1c) + uVar5 * 0xc);
      uVar1 = *puVar7;
      uVar2 = puVar7[1];
      uVar3 = puVar7[2];
      auVar8 = __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(uVar1,uVar2,uVar3);
      auVar9 = __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(param_1,param_2,param_3);
      if (auVar8 == auVar9) {
        return uVar5;
      }
      uVar6 = __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (uVar1,uVar2,uVar3,param_1,param_2,param_3,0);
      if ((uVar6 & 1) != 0) {
        return uVar5;
      }
      uVar5 = uVar5 + 1 & uStack_6c;
    } while ((*(uint *)((int)lStack_68 + (uVar5 >> 5) * 4) >> (ulonglong)(uVar5 & 0x1f) & 1) != 0);
  }
  return uVar5;
}



/* Entry: 0001aab0; end: 0001aaeb;  */

undefined8 FUN_0001aab0(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00024688(0);
  (**(code **)(*(int *)(iVar1 + -4) + 4))(param_1,iVar1);
  return param_1;
}



/* Entry: 0001aaec; end: 0001aba7;  */

uint FUN_0001aaec(undefined8 param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  int unaff_w20;
  undefined1 auStack_64 [20];
  
  uVar1 = -1 << (ulonglong)(*(byte *)(unaff_w20 + 0x10) & 0x1f);
  param_2 = param_2 & (uVar1 ^ 0xffffffff);
  if ((*(uint *)(unaff_w20 + 0x24 + (param_2 >> 5) * 4) >> (ulonglong)(param_2 & 0x1f) & 1) != 0) {
    do {
      FUN_0001b3dc((ulonglong)*(uint *)(unaff_w20 + 0x1c) + (longlong)(int)param_2 * 0x14,auStack_64
                  );
      uVar2 = __ss11AnyHashableV2eeoiySbAB_ABtFZ(auStack_64,param_1);
      FUN_000103ec(auStack_64);
      if ((uVar2 & 1) != 0) {
        return param_2;
      }
      param_2 = param_2 + 1 & ~uVar1;
    } while ((*(uint *)(unaff_w20 + 0x24 + (param_2 >> 5) * 4) >> (ulonglong)(param_2 & 0x1f) & 1)
             != 0);
  }
  return param_2;
}



/* Entry: 0001aba8; end: 0001acbf;  */

uint FUN_0001aba8(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  int unaff_w20;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  uVar4 = -1 << (ulonglong)(*(byte *)(unaff_w20 + 0x10) & 0x1f);
  param_4 = param_4 & (uVar4 ^ 0xffffffff);
  if ((*(uint *)(unaff_w20 + 0x24 + (param_4 >> 5) * 4) >> (ulonglong)(param_4 & 0x1f) & 1) != 0) {
    do {
      puVar6 = (undefined4 *)(*(int *)(unaff_w20 + 0x1c) + param_4 * 0xc);
      uVar1 = *puVar6;
      uVar2 = puVar6[1];
      uVar3 = puVar6[2];
      auVar7 = __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(uVar1,uVar2,uVar3);
      auVar8 = __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(param_1,param_2,param_3);
      if (auVar7 == auVar8) {
        return param_4;
      }
      uVar5 = __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (uVar1,uVar2,uVar3,param_1,param_2,param_3,0);
      if ((uVar5 & 1) != 0) {
        return param_4;
      }
      param_4 = param_4 + 1 & ~uVar4;
    } while ((*(uint *)(unaff_w20 + 0x24 + (param_4 >> 5) * 4) >> (ulonglong)(param_4 & 0x1f) & 1)
             != 0);
  }
  return param_4;
}



/* Entry: 0001acc0; end: 0001ae67;  */

undefined * FUN_0001acc0(int param_1)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined *puVar13;
  uint uVar14;
  undefined4 *puVar15;
  undefined8 *puVar16;
  int iVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  
  iVar17 = *(int *)(param_1 + 8);
  puVar13 = PTR___swiftEmptyDictionarySingleton_000304ec;
  if (iVar17 != 0) {
    FUN_00010468(0x35058,&UNK_00028ae0);
    puVar13 = (undefined *)__ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ(iVar17);
    _swift_retain();
    puVar1 = (undefined2 *)(param_1 + 0x26);
    do {
      uVar2 = *(undefined4 *)(puVar1 + -0xb);
      uVar3 = *(undefined4 *)(puVar1 + -9);
      uVar5 = *(undefined1 *)(puVar1 + -7);
      uVar6 = *(undefined1 *)((int)puVar1 + -0xd);
      uVar9 = puVar1[-6];
      uVar12 = *(undefined4 *)(puVar1 + -7);
      uVar4 = *(undefined4 *)(puVar1 + -3);
      uVar18 = *(undefined8 *)(puVar1 + -5);
      uVar7 = *(undefined1 *)(puVar1 + -1);
      uVar8 = *(undefined1 *)((int)puVar1 + -1);
      uVar10 = *puVar1;
      FUN_000103b4(uVar3,uVar5);
      FUN_000103b4(uVar4,uVar7);
      auVar19 = FUN_0001aa38(uVar2,uVar3,uVar12);
      if ((auVar19._8_8_ & 1) != 0) {
                    /* WARNING: Does not return */
        uVar18 = SoftwareBreakpoint(1,0x1ae64);
        (*(code *)uVar18)();
      }
      uVar11 = (uint)(auVar19._0_8_ >> 5) & 0x7ffffff;
      uVar14 = auVar19._0_4_;
      *(uint *)(puVar13 + uVar11 * 4 + 0x24) =
           *(uint *)(puVar13 + uVar11 * 4 + 0x24) | 1 << (ulonglong)(uVar14 & 0x1f);
      puVar15 = (undefined4 *)(*(int *)(puVar13 + 0x1c) + uVar14 * 0xc);
      *puVar15 = uVar2;
      puVar15[1] = uVar3;
      *(undefined1 *)(puVar15 + 2) = uVar5;
      *(undefined1 *)((int)puVar15 + 9) = uVar6;
      *(undefined2 *)((int)puVar15 + 10) = uVar9;
      puVar16 = (undefined8 *)(*(int *)(puVar13 + 0x20) + uVar14 * 0xc);
      *puVar16 = uVar18;
      *(undefined1 *)(puVar16 + 1) = uVar7;
      *(undefined1 *)((int)puVar16 + 9) = uVar8;
      *(undefined2 *)((int)puVar16 + 10) = uVar10;
      if (SCARRY4(*(int *)(puVar13 + 8),1)) {
                    /* WARNING: Does not return */
        uVar18 = SoftwareBreakpoint(1,0x1ae68);
        (*(code *)uVar18)();
      }
      puVar1 = puVar1 + 0xc;
      *(int *)(puVar13 + 8) = *(int *)(puVar13 + 8) + 1;
      iVar17 = iVar17 + -1;
    } while (iVar17 != 0);
    _swift_release(puVar13);
  }
  return puVar13;
}



/* Entry: 0001ae68; end: 0001afaf;  */

undefined * FUN_0001ae68(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined1 auVar12 [16];
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 auStack_70 [16];
  
  iVar11 = *(int *)(param_1 + 8);
  puVar8 = PTR___swiftEmptyDictionarySingleton_000304ec;
  if (iVar11 != 0) {
    FUN_00010468(0x35050,&UNK_00028880);
    puVar8 = (undefined *)__ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ(iVar11);
    param_1 = param_1 + 0x10;
    _swift_retain();
    do {
      FUN_0001b13c(param_1,&uStack_7c,0x34f20,&UNK_00028580);
      uVar3 = uStack_78;
      uVar2 = uStack_7c;
      uVar4 = (undefined1)uStack_74;
      uVar5 = uStack_74._1_1_;
      uVar6 = uStack_74._2_2_;
      auVar12 = FUN_0001aa38(uStack_7c,uStack_78,uStack_74);
      if ((auVar12._8_8_ & 1) != 0) {
                    /* WARNING: Does not return */
        uVar7 = SoftwareBreakpoint(1,0x1afac);
        (*(code *)uVar7)();
      }
      uVar1 = (uint)(auVar12._0_8_ >> 5) & 0x7ffffff;
      uVar9 = auVar12._0_4_;
      *(uint *)(puVar8 + uVar1 * 4 + 0x24) =
           *(uint *)(puVar8 + uVar1 * 4 + 0x24) | 1 << (ulonglong)(uVar9 & 0x1f);
      puVar10 = (undefined4 *)(*(int *)(puVar8 + 0x1c) + uVar9 * 0xc);
      *puVar10 = uVar2;
      puVar10[1] = uVar3;
      *(undefined1 *)(puVar10 + 2) = uVar4;
      *(undefined1 *)((int)puVar10 + 9) = uVar5;
      *(undefined2 *)((int)puVar10 + 10) = uVar6;
      FUN_0001afb0(auStack_70,(ulonglong)*(uint *)(puVar8 + 0x20) + (longlong)(int)uVar9 * 0x10);
      if (SCARRY4(*(int *)(puVar8 + 8),1)) {
                    /* WARNING: Does not return */
        uVar7 = SoftwareBreakpoint(1,0x1afb0);
        (*(code *)uVar7)();
      }
      *(int *)(puVar8 + 8) = *(int *)(puVar8 + 8) + 1;
      param_1 = param_1 + 0x1c;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    _swift_release(puVar8);
  }
  return puVar8;
}



/* Entry: 0001afb0; end: 0001afbf;  */

undefined8 * FUN_0001afb0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  param_2[1] = param_1[1];
  *param_2 = uVar1;
  return param_2;
}



/* Entry: 0001afc0; end: 0001b00f;  */

undefined8 FUN_0001afc0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00010468(0x35038,&UNK_00028858);
  (**(code **)(*(int *)(iVar1 + -4) + 0x14))(param_2,param_1,iVar1);
  return param_2;
}



/* Entry: 0001b010; end: 0001b02b;  */

void FUN_0001b010(undefined8 param_1,undefined4 param_2,byte param_3)

{
  if (param_3 == 0xff) {
    return;
  }
  if (param_3 - 1 < 2) {
                    /* WARNING: Could not recover jumptable at 0x000276e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_00030584)(param_2);
    return;
  }
  return;
}



/* Entry: 0001b02c; end: 0001b03f;  */

void FUN_0001b02c(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
                    /* WARNING: Could not recover jumptable at 0x00027684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_00030574)(uVar1);
  return;
}



/* Entry: 0001b040; end: 0001b047;  */

void FUN_0001b040(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00027678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_00030570)(*(undefined4 *)(param_1 + 0x18));
  return;
}


